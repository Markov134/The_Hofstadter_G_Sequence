cmake_minimum_required(VERSION 3.24)

project(the_hofstadter_g_sequence)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.8.1
)

FetchContent_MakeAvailable(Catch2)

add_executable(HGSequence_test tests/HGSequence_test.cpp src/HGSequence.cpp)
add_executable(factorial_test tests/factorial_test.cpp src/factorial.cpp)
add_executable(main main.cpp src/factorial.cpp src/HGSequence.cpp)

target_link_libraries(factorial_test PRIVATE Catch2::Catch2WithMain)
target_link_libraries(HGSequence_test PRIVATE Catch2::Catch2WithMain)
