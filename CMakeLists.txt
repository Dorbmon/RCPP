cmake_minimum_required(VERSION 3.2)
project(RCPP)
set (version 0.0.1)
include_directories(${PROJECT_SOURCE_DIR}/R)
add_subdirectory(${PROJECT_SOURCE_DIR}/Test)