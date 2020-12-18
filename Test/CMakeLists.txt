include_directories(${PROJECT_SOURCE_DIR}/R)
set(APP_SRC test.cpp)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
add_executable(rcpp_test ${APP_SRC})