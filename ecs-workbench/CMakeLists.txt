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

set(public_header_dir ${CMAKE_CURRENT_SOURCE_DIR}/../include)

set(ecs-workbench_public_header 
	include/alibabacloud/ecs-workbench/Ecs_workbenchClient.h
	include/alibabacloud/ecs-workbench/Ecs_workbenchExport.h )

set(ecs-workbench_public_header_model 
	include/alibabacloud/ecs-workbench/model/GetInstanceRecordConfigRequest.h
	include/alibabacloud/ecs-workbench/model/GetInstanceRecordConfigResult.h
	include/alibabacloud/ecs-workbench/model/ListInstanceRecordsRequest.h
	include/alibabacloud/ecs-workbench/model/ListInstanceRecordsResult.h
	include/alibabacloud/ecs-workbench/model/ListTerminalCommandsRequest.h
	include/alibabacloud/ecs-workbench/model/ListTerminalCommandsResult.h
	include/alibabacloud/ecs-workbench/model/LoginInstanceRequest.h
	include/alibabacloud/ecs-workbench/model/LoginInstanceResult.h
	include/alibabacloud/ecs-workbench/model/SetInstanceRecordConfigRequest.h
	include/alibabacloud/ecs-workbench/model/SetInstanceRecordConfigResult.h
	include/alibabacloud/ecs-workbench/model/ViewInstanceRecordsRequest.h
	include/alibabacloud/ecs-workbench/model/ViewInstanceRecordsResult.h )

set(ecs-workbench_src 
	src/Ecs-workbenchClient.cc
	src/model/GetInstanceRecordConfigRequest.cc
	src/model/GetInstanceRecordConfigResult.cc
	src/model/ListInstanceRecordsRequest.cc
	src/model/ListInstanceRecordsResult.cc
	src/model/ListTerminalCommandsRequest.cc
	src/model/ListTerminalCommandsResult.cc
	src/model/LoginInstanceRequest.cc
	src/model/LoginInstanceResult.cc
	src/model/SetInstanceRecordConfigRequest.cc
	src/model/SetInstanceRecordConfigResult.cc
	src/model/ViewInstanceRecordsRequest.cc
	src/model/ViewInstanceRecordsResult.cc )

add_library(ecs-workbench ${LIB_TYPE}
	${ecs-workbench_public_header}
	${ecs-workbench_public_header_model}
	${ecs-workbench_src})

set_target_properties(ecs-workbench
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ecs-workbench
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(ecs-workbench
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_ECS_WORKBENCH_LIBRARY)
endif()

target_include_directories(ecs-workbench
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(ecs-workbench
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(ecs-workbench
		jsoncpp)
	target_include_directories(ecs-workbench
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(ecs-workbench
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(ecs-workbench
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(ecs-workbench
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(ecs-workbench
		jsoncpp)
endif()

install(FILES ${ecs-workbench_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ecs-workbench)
install(FILES ${ecs-workbench_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ecs-workbench/model)
install(TARGETS ecs-workbench
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)