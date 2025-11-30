cmake_minimum_required(VERSION 3.23)

project(RayTracingInVulkan)

add_library(Application)

target_sources(Application
  PRIVATE
    src/RayTracingApplication.cpp

  PUBLIC
    FILE_SET applicationHeaders
    TYPE HEADERS
    BASE_DIRS
      src
    FILES
      src/RayTracingApplication.hpp
)

add_executable(RayTracer)

target_sources(RayTracer
  PRIVATE
    main.cpp
)

target_link_libraries(RayTracer
  PRIVATE
    Application
)

