# cpp playground

This repository is for experimenting with c++ code.

## Getting started

* install doxygen

`brew install doxygen`


* install cppcheck - see https://github.com/danmar/cppcheck/

`brew install cppcheck`


* install cpplint

```
python3 -m venv venv
source venv/bin/activate
pip install cpplint
```

* install cpplint

```
pip install cppclean
```



* for unit testing, see https://github.com/mity/acutest


## Make commands

There are various `make` commands:

* `make test` to build and run tests
* `make check` to run cppcheck
* `make cppclean` to run cppclean
* `make lint` to run cpp linter
* `make doc` to build the docs using doxygen
* `make all` to build, run static analyzers, and then run the tests

