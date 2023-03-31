cmake_minimum_required(VERSION 3.24)
project(ServerAchitecture)

set(CMAKE_CXX_STANDARD 17)

add_executable(ServerAchitecture main.cpp TCPServerController.cpp TCPServerController.h)
