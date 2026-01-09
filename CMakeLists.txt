cmake_minimum_required(VERSION 3.16)
project(Graphicus__02)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

#Contains everything from SRC
add_executable(Graphicus__02
        src/main.cpp
        src/forme.cpp
        src/forme.h
        src/Polygone.cpp
        src/Polygone.h
        src/Cercle.cpp
        src/Cercle.h
        src/Rectangle.cpp
        src/Rectangle.h
        src/Carré.cpp
        src/Carré.h
        src/ObjectType/coordonnee.h

)

#Contains everything from SRC but the MAIN + all the tests
add_executable(run_tests
        tests/TestGraphicus.cpp
        tests/TestGraphicus.h
        src/forme.h
        src/forme.cpp
        src/ObjectType/coordonnee.h
)

