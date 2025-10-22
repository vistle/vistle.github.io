#include <vistle/alg/objalg.h>
#include <vistle/core/uniformgrid.h>

#include "MyModule.h"

MODULE_MAIN(MyModule)

using namespace vistle;

DEFINE_ENUM_WITH_STRING_CONVERSIONS(Option, (Option0)(Option1)(Option2))

MyModule::MyModule(const std::string &name, int moduleID, mpi::communicator comm): Module(name, moduleID, comm)
{
    // define the module's ports
    createInputPort("data_in", "input grid with mapped data");
    createOutputPort("data_out", "output grid with mapped data");

    // define the module's parameters
    m_boolean = addIntParameter("boolean", "a boolean parameter", false, Parameter::Boolean);

    m_scalar = addFloatParameter("scalar", "a float parameter", 1.0);
    setParameterRange(m_scalar, 0.0, 10.0);

    m_vector = addVectorParameter("vector", "a vector parameter", ParamVector(1.0, 2.0, 3.0));

    m_choice = addIntParameter("choice", "choose one of the options", Option1, Parameter::Choice);
    V_ENUM_SET_CHOICES(m_choice, Option);
}

MyModule::~MyModule()
{}

bool MyModule::compute(const std::shared_ptr<vistle::BlockTask> &task) const
{
    // check data provided by input port
    auto input = task->expect<Vec<Scalar, 3>>("data_in");
    if (!input) {
        sendError("This module only supports three-dimensional vector data fields!");
        return true;
    }

    auto container = splitContainerObject(input);
    auto grid = container.geometry;
    if (!grid) {
        sendError("Found no grid at the input port!");
        return true;
    }

    // create an output grid
    size_t gridDim = 2;
    UniformGrid::ptr outputGrid(new UniformGrid(gridDim, gridDim, gridDim));

    for (unsigned i = 0; i < 3; i++) {
        outputGrid->min()[i] = 0;
        outputGrid->max()[i] = 1;
    }

    updateMeta(outputGrid);

    // create a scalar data field which maps a value to each vertex of the grid
    auto fieldSize = (gridDim + 1) * (gridDim + 1) * (gridDim + 1);
    Vec<Scalar, 1>::ptr outputData(new Vec<Scalar, 1>(fieldSize));
    for (unsigned i = 0; i < fieldSize; i++)
        outputData->x()[i] = 0.5 * i;

    outputData->setGrid(outputGrid);
    outputData->setMapping(DataBase::Vertex);
    outputData->addAttribute("_species", "outputData");
    updateMeta(outputData);

    // add mapped data to the output port
    task->addObject("data_out", outputData);

    return true;
}

bool MyModule::changeParameter(const vistle::Parameter *param)
{
    if (param == m_boolean) {
        sendInfo("Changed parameter %s to %d", m_boolean->getName().c_str(), m_boolean->getValue());
    } else if (param == m_scalar) {
        sendInfo("Changed parameter %s to %f", m_scalar->getName().c_str(), m_scalar->getValue());

    } else if (param == m_vector) {
        auto vector = m_vector->getValue();
        sendInfo("Changed parameter %s to (%f, %f, %f)", m_vector->getName().c_str(), vector[0], vector[1], vector[2]);

    } else if (param == m_choice) {
        sendInfo("Changed parameter %s to Option%d", m_choice->getName().c_str(), (Option)m_choice->getValue());
    }

    return true;
}
