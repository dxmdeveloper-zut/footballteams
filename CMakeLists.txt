cmake_minimum_required(VERSION 3.0.0)
project(teams VERSION 0.1.0)

include(CTest)
enable_testing()

file(GLOB teams_src "*.hpp" "*.cpp")

add_executable(teams ${teams_src})
#set_target_properties(teams PROPERTIES COMPILE_FLAGS "-m32" LINK_FLAGS "-m32")

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
