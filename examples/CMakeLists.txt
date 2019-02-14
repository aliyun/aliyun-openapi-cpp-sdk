cmake_minimum_required(VERSION 3.1)

cmake_policy(SET CMP0048 NEW)

project(alibabacloud-sdk-examples)

set(CMAKE_CXX_STANDARD 11)

message("include dir: " ${CMAKE_SOURCE_DIR}/../core/include)

include_directories("${CMAKE_SOURCE_DIR}/../core/include/")
include_directories("${CMAKE_SOURCE_DIR}/../cdn/include/")
include_directories("${CMAKE_SOURCE_DIR}/../ecs/include/")
include_directories("${CMAKE_SOURCE_DIR}/../rds/include/")
include_directories("${CMAKE_SOURCE_DIR}/../slb/include/")
include_directories("${CMAKE_SOURCE_DIR}/../vpc/include/")


link_directories(${CMAKE_SOURCE_DIR}/../sdk_build/lib)

add_subdirectory(imagesearch)
add_subdirectory(nlp)
add_subdirectory(rds)
add_subdirectory(ecs)
add_subdirectory(vpc)
add_subdirectory(slb)
add_subdirectory(cdn)
