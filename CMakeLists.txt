#
# Copyright 2009-2017 Alibaba Cloud All rights reserved.
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
#      http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

cmake_minimum_required(VERSION 3.1)

cmake_policy(SET CMP0048 NEW)

file(STRINGS "VERSION" version)

project(alibabacloud-sdk VERSION ${version})

message(STATUS "Project version: ${PROJECT_VERSION}")

set(TARGET_OUTPUT_NAME_PREFIX "alibabacloud-sdk-" CACHE STRING "The target's output name prefix")
option(BUILD_SHARED_LIBS  "Enable shared library" ON)
option(BUILD_TESTS "Enable tests" ON)

set(LIB_TYPE STATIC)
if(BUILD_SHARED_LIBS)
	set(LIB_TYPE SHARED)
	add_definitions(-DALIBABACLOUD_SHARED)
endif()

set_property(GLOBAL
	PROPERTY
	USE_FOLDERS ON)

set(CMAKE_CXX_STANDARD 11)

include(ExternalProject)
include(GNUInstallDirs)

add_subdirectory(3rdparty)
add_subdirectory(core)

if(BUILD_TESTS)
	enable_testing()
	add_subdirectory(core-tests)
endif()
add_subdirectory(ecs)
add_subdirectory(slb)
add_subdirectory(vpc)
add_subdirectory(cdn)
add_subdirectory(rds)
add_subdirectory(cloudphoto)
add_subdirectory(ess)
add_subdirectory(tesladam)
add_subdirectory(cms)
add_subdirectory(afs)
add_subdirectory(aegis)
add_subdirectory(ehpc)
add_subdirectory(cs)
add_subdirectory(ccc)
add_subdirectory(teslamaxcompute)
add_subdirectory(push)
add_subdirectory(csb)
add_subdirectory(domain)
add_subdirectory(green)
add_subdirectory(hsm)
add_subdirectory(dcdn)
add_subdirectory(pvtz)
add_subdirectory(cloudauth)
add_subdirectory(dyvmsapi)
add_subdirectory(drds)
add_subdirectory(jarvis)
add_subdirectory(scdn)
add_subdirectory(live)
add_subdirectory(rtc)
add_subdirectory(chatbot)
add_subdirectory(teslastream)
add_subdirectory(mopen)
add_subdirectory(mts)
add_subdirectory(iot)
add_subdirectory(linkface)