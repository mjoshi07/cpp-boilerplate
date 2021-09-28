add_executable(shell-app shell.cpp)
add_executable(class-grade ClassGrade.cpp class_grade_avg.cpp)
include_directories(
    ${CMAKE_SOURCE_DIR}/include
)
