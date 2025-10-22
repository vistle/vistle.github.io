#ifndef MYMODULE_H
#define MYMODULE_H

#include <vistle/module/module.h>

// this is a test module for the developer guide
class MyModule: public vistle::Module {
public:
    MyModule(const std::string &name, int moduleID, mpi::communicator comm);
    ~MyModule();

private:
    bool compute(const std::shared_ptr<vistle::BlockTask> &task) const override;
    bool changeParameter(const vistle::Parameter *param) override;

    vistle::IntParameter *m_boolean;
    vistle::FloatParameter *m_scalar;
    vistle::VectorParameter *m_vector;
    vistle::IntParameter *m_choice;
};

#endif // MYMODULE_H
