cmake_minimum_required(VERSION 3.12)
project(functionPTR)

set(CMAKE_CXX_STANDARD 11)

add_executable(functionPTR main.cpp VLW.h AbstractGenerator.h VLW.cpp Generator.cpp Generator.h)