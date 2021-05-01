cmake_minimum_required(VERSION 3.17)
project(SimpleInheritance)

set(CMAKE_CXX_STANDARD 17)

add_executable(SimpleInheritance main.cpp Human.cpp Human.h Student.h bachelor.h Graduated.h worker.h Programming.h MultiProgrammer.h)