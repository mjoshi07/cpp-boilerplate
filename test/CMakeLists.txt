set(GTEST_SHUFFLE 1)

add_executable(
    pid-controller-test
    main.cpp
    test.cpp
    ../app/PIDController.cpp
)

target_include_directories(pid-controller-test PUBLIC ../vendor/googletest/googletest/include 
                                           ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(pid-controller-test PUBLIC gtest)
