include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)

FetchContent_MakeAvailable(googletest)

add_executable(tests 
  test_main.cpp 
)

target_include_directories(tests PRIVATE 
    ${CMAKE_SOURCE_DIR}/src
)

target_link_libraries(tests PRIVATE 
  fmt::fmt
  gtest_main
)

include(GoogleTest)
gtest_discover_tests(tests)
