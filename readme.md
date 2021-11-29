# GMock Valgrind Exercies
[![Build Status](https://travis-ci.org/dpiet/cpp-boilerplate.svg?branch=master)](https://travis-ci.org/dpiet/cpp-boilerplate)

---

## Overview
Sensor class has been mocked which is utilized by the Analog Sensor class
Simple starter C++ project with:

- cmake
- googletest

## Standard install via command-line
```
git clone --recursive -b GMock_extra_credit_valgrind https://github.com/mjoshi07/cpp-boilerplate
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run program: ./app/shell-app
```

## Building for code coverage
```
sudo apt-get install lcov
cmake -D COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug ../
make
make code_coverage
```
This generates a index.html page in the build/coverage sub-directory that can be viewed locally in a web browser.

# Static code analysis
* Cpplint and cppcheck results can be found [here](https://github.com/mjoshi07/cpp-boilerplate/tree/GMock_extra_credit_valgrind/results)
