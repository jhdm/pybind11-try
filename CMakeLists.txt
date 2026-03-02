cmake_minimum_required(VERSION 3.12)
project(hello_module)

set(CMAKE_CXX_STANDARD 11)

find_package(pybind11 CONFIG REQUIRED)

pybind11_add_module(hello
    src/hello.cpp
    src/bindings.cpp
)

install(TARGETS hello DESTINATION .)
