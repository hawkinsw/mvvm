cmake_minimum_required(VERSION 3.10)


project(PointerTemplatePlay VERSION 1.0 DESCRIPTION "Playing With Pointers to Templates")
add_executable(vm main.cpp doublevalue.cpp stringvalue.cpp boolvalue.cpp value.cpp)
include_directories("include/")
set_property(TARGET vm PROPERTY CXX_STANDARD 17)
