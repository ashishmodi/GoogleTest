enable_testing()

cmake_minimum_required(VERSION 3.12) # version can be different

project(Google_Test_POC) #name of your project
include(CTest)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_VERBOSE_MAKEFILE ON)  

add_subdirectory(googletest) # add googletest subdirectory

include_directories(/home/ashish/FNO/Google_Test/googletest/include) #include <gtest/gtest.h>

#sudo cp *.a /usr/lib
#target_link_libraries(main1 PUBLIC /home/ashish/FNO/Google_Test/build/lib/libgtest.a) # link google test to this executable
#target_link_libraries(main1 PUBLIC libgtest pthread) # link google test to 
#gtest_discover_tests(main1)

include(GoogleTest)
set(GTEST_INCLUDE_DIR "/usr/lib")
include_directories(${GTEST_INCLUDE_DIR})
find_package(GTest REQUIRED)                                             
add_executable(main1 main.cpp)
target_link_libraries(main1 ${GTEST_LIBRARIES} pthread -Dgtest_build_samples=ON)
gtest_discover_tests(main1)