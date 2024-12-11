cmake_minimum_required(VERSION 3.25)
project(Vector)

include_directories(include)
file(GLOB SOURCES "src/*.cpp")

add_library(VectorLib ${SOURCES})

add_executable(Vector src/main.cpp)
target_link_libraries(Vector VectorLib)


include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)


add_executable(ProjektasTest Tests/test.cpp)

target_link_libraries(ProjektasTest gtest gtest_main VectorLib)


enable_testing()

add_test(NAME RunTest COMMAND ProjektasTest)



