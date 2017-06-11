cmake_minimum_required(VERSION 3.7)
project(App_Ipiranga)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/User.cpp include/User.hpp src/SQLite_Handler.cpp include/SQLite_Handler.hpp)
add_executable(App_Ipiranga ${SOURCE_FILES})