cmake_minimum_required(VERSION 3.7)
project(App_Ipiranga)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/User.cpp include/User.hpp src/Callbacks.cpp include/Callbacks.hpp src/Account.cpp include/Account.hpp include/Search.hpp src/Search.cpp include/Security.hpp src/Security.cpp include/Ads.hpp src/Ads.cpp include/Deals.hpp src/Deals.cpp src/Historic.cpp include/Historic.hpp src/Payment.cpp include/Payment.hpp include/Friendship.hpp src/Friendship.cpp)
add_executable(App_Ipiranga ${SOURCE_FILES})