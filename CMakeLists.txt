cmake_minimum_required(VERSION 3.16)
project(Graphicus__02)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

#Contains everything from SRC
add_executable(Graphicus__02
        src/main.cpp
)

#Contains everything from SRC but the MAIN + all the tests
add_executable(run_tests
        tests/TestCalculator.cpp
        src/Calculator.cpp
        tests/TestGraphicus.cpp
        tests/TestGraphicus.h
)

