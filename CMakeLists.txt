Cmake_minimum_required(VERSION 2.8.3)
project(pocl-planner)

include_directories(
  include/pocl_planner
)

add_library(pocl_core
    src/plan.cpp
    src/planner.cpp)
