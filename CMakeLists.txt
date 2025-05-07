cmake_minimum_required(VERSION 3.27)
project(DSA_With_Cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(DSA_With_Cpp Others/main.cpp
        Arrays.cpp
        Others/Vector.cpp
        algorithm/KadanAlgorithm.cpp
        Codeforces.cpp
        algorithm/BruteForceAlgorithm.cpp
        Others/object.cpp
        linkedlist/LinkedList.cpp
        linkedlist/LinkedList.h
)
