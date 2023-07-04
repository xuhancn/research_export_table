cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

set(PROJ_NAME "dummy_shared_lib")
project (${PROJ_NAME})

set(PROJECT_ROOT_DIR ${PROJECT_SOURCE_DIR})

add_subdirectory(${PROJECT_ROOT_DIR}/src)

add_library(${PROJ_NAME} SHARED ${SOURCES_FILES})