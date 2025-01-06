cmake_minimum_required(VERSION 3.31)
project(waddle-template)

set(CMAKE_BUILD_TYPE "Debug")

file(GLOB_RECURSE SOURCE CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/*.c")
add_executable(${CMAKE_PROJECT_NAME} ${SOURCE})

set_target_properties(${CMAKE_PROJECT_NAME}
    PROPERTIES
    C_STANDARD "99"
    C_STANDARD_REQUIRED true
    EXPORT_COMPILE_COMMANDS true
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin"
    COMPILE_FLAGS "-Wall -Wextra"
)

target_include_directories(${CMAKE_PROJECT_NAME}
    PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/include/"
    PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/src/"
    PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/waddle/"
)
