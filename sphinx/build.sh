#! /bin/bash

DIR=$(dirname "$0")
VENV=$DIR/venv
uv venv $VENV
#VIRTUAL_ENV=$VENV uv --preview pip install .[docs,pandas,flask,fastapi,rdflib,sphinx]
export VIRTUAL_ENV=$VENV
ping -c 1 www.python.org && \
    uv pip install -r $DIR/../docs/requirements.txt
source $VENV/bin/activate
#python -m sphinx -T -b html -d docs/_build/doctrees -D language=en docs/source $READTHEDOCS_OUTPUT/html
if [ -n "$*" ]; then
    python -m sphinx "$@"
else
    rm -r "$DIR/../html/"
    python -m sphinx $DIR/../docs $DIR/../html
fi
