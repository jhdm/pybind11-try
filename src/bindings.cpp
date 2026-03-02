#include <pybind11/pybind11.h>
#include <string>

std::string hello(const std::string& name);

PYBIND11_MODULE(hello, m) {
    m.def("hello", &hello, "A function that greets with a name",
          pybind11::arg("name"));
}
