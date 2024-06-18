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

set(computenest_public_header 
	include/alibabacloud/computenest/ComputeNestClient.h
	include/alibabacloud/computenest/ComputeNestExport.h )

set(computenest_public_header_model 
	include/alibabacloud/computenest/model/ChangeResourceGroupRequest.h
	include/alibabacloud/computenest/model/ChangeResourceGroupResult.h
	include/alibabacloud/computenest/model/ContinueDeployServiceInstanceRequest.h
	include/alibabacloud/computenest/model/ContinueDeployServiceInstanceResult.h
	include/alibabacloud/computenest/model/CreateServiceInstanceRequest.h
	include/alibabacloud/computenest/model/CreateServiceInstanceResult.h
	include/alibabacloud/computenest/model/DeleteServiceInstancesRequest.h
	include/alibabacloud/computenest/model/DeleteServiceInstancesResult.h
	include/alibabacloud/computenest/model/GetServiceInstanceRequest.h
	include/alibabacloud/computenest/model/GetServiceInstanceResult.h
	include/alibabacloud/computenest/model/GetServiceTemplateParameterConstraintsRequest.h
	include/alibabacloud/computenest/model/GetServiceTemplateParameterConstraintsResult.h
	include/alibabacloud/computenest/model/ListServiceInstanceLogsRequest.h
	include/alibabacloud/computenest/model/ListServiceInstanceLogsResult.h
	include/alibabacloud/computenest/model/ListServiceInstanceResourcesRequest.h
	include/alibabacloud/computenest/model/ListServiceInstanceResourcesResult.h
	include/alibabacloud/computenest/model/ListServiceInstancesRequest.h
	include/alibabacloud/computenest/model/ListServiceInstancesResult.h
	include/alibabacloud/computenest/model/RestartServiceInstanceRequest.h
	include/alibabacloud/computenest/model/RestartServiceInstanceResult.h
	include/alibabacloud/computenest/model/StartServiceInstanceRequest.h
	include/alibabacloud/computenest/model/StartServiceInstanceResult.h
	include/alibabacloud/computenest/model/StopServiceInstanceRequest.h
	include/alibabacloud/computenest/model/StopServiceInstanceResult.h )

set(computenest_src 
	src/ComputeNestClient.cc
	src/model/ChangeResourceGroupRequest.cc
	src/model/ChangeResourceGroupResult.cc
	src/model/ContinueDeployServiceInstanceRequest.cc
	src/model/ContinueDeployServiceInstanceResult.cc
	src/model/CreateServiceInstanceRequest.cc
	src/model/CreateServiceInstanceResult.cc
	src/model/DeleteServiceInstancesRequest.cc
	src/model/DeleteServiceInstancesResult.cc
	src/model/GetServiceInstanceRequest.cc
	src/model/GetServiceInstanceResult.cc
	src/model/GetServiceTemplateParameterConstraintsRequest.cc
	src/model/GetServiceTemplateParameterConstraintsResult.cc
	src/model/ListServiceInstanceLogsRequest.cc
	src/model/ListServiceInstanceLogsResult.cc
	src/model/ListServiceInstanceResourcesRequest.cc
	src/model/ListServiceInstanceResourcesResult.cc
	src/model/ListServiceInstancesRequest.cc
	src/model/ListServiceInstancesResult.cc
	src/model/RestartServiceInstanceRequest.cc
	src/model/RestartServiceInstanceResult.cc
	src/model/StartServiceInstanceRequest.cc
	src/model/StartServiceInstanceResult.cc
	src/model/StopServiceInstanceRequest.cc
	src/model/StopServiceInstanceResult.cc )

add_library(computenest ${LIB_TYPE}
	${computenest_public_header}
	${computenest_public_header_model}
	${computenest_src})

set_target_properties(computenest
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}computenest
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(computenest
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_COMPUTENEST_LIBRARY)
endif()

target_include_directories(computenest
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(computenest
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(computenest
		jsoncpp)
	target_include_directories(computenest
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(computenest
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(computenest
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(computenest
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(computenest
		jsoncpp)
endif()

install(FILES ${computenest_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/computenest)
install(FILES ${computenest_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/computenest/model)
install(TARGETS computenest
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)