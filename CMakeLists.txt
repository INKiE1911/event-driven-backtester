cmake_minimum_required(VERSION 3.20)
project(edb LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(run_backtest apps/run_backtest.cpp)
target_include_directories(run_backtest PRIVATE include)
