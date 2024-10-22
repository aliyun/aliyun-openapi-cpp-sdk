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

set(eais_public_header 
	include/alibabacloud/eais/EaisClient.h
	include/alibabacloud/eais/EaisExport.h )

set(eais_public_header_model 
	include/alibabacloud/eais/model/AttachEaiRequest.h
	include/alibabacloud/eais/model/AttachEaiResult.h
	include/alibabacloud/eais/model/AttachEaisEiRequest.h
	include/alibabacloud/eais/model/AttachEaisEiResult.h
	include/alibabacloud/eais/model/ChangeResourceGroupRequest.h
	include/alibabacloud/eais/model/ChangeResourceGroupResult.h
	include/alibabacloud/eais/model/CreateEaiRequest.h
	include/alibabacloud/eais/model/CreateEaiResult.h
	include/alibabacloud/eais/model/CreateEaiEciRequest.h
	include/alibabacloud/eais/model/CreateEaiEciResult.h
	include/alibabacloud/eais/model/CreateEaiEcsRequest.h
	include/alibabacloud/eais/model/CreateEaiEcsResult.h
	include/alibabacloud/eais/model/CreateEaiJupyterRequest.h
	include/alibabacloud/eais/model/CreateEaiJupyterResult.h
	include/alibabacloud/eais/model/CreateEaisEiRequest.h
	include/alibabacloud/eais/model/CreateEaisEiResult.h
	include/alibabacloud/eais/model/DeleteEaiRequest.h
	include/alibabacloud/eais/model/DeleteEaiResult.h
	include/alibabacloud/eais/model/DeleteEaiAllRequest.h
	include/alibabacloud/eais/model/DeleteEaiAllResult.h
	include/alibabacloud/eais/model/DeleteEaisEiRequest.h
	include/alibabacloud/eais/model/DeleteEaisEiResult.h
	include/alibabacloud/eais/model/DescribeEaisRequest.h
	include/alibabacloud/eais/model/DescribeEaisResult.h
	include/alibabacloud/eais/model/DescribeRegionsRequest.h
	include/alibabacloud/eais/model/DescribeRegionsResult.h
	include/alibabacloud/eais/model/DetachEaiRequest.h
	include/alibabacloud/eais/model/DetachEaiResult.h
	include/alibabacloud/eais/model/DetachEaisEiRequest.h
	include/alibabacloud/eais/model/DetachEaisEiResult.h
	include/alibabacloud/eais/model/GetInstanceMetricsRequest.h
	include/alibabacloud/eais/model/GetInstanceMetricsResult.h
	include/alibabacloud/eais/model/ListTagResourcesRequest.h
	include/alibabacloud/eais/model/ListTagResourcesResult.h
	include/alibabacloud/eais/model/StartEaiJupyterRequest.h
	include/alibabacloud/eais/model/StartEaiJupyterResult.h
	include/alibabacloud/eais/model/StartEaisEiRequest.h
	include/alibabacloud/eais/model/StartEaisEiResult.h
	include/alibabacloud/eais/model/StopEaiJupyterRequest.h
	include/alibabacloud/eais/model/StopEaiJupyterResult.h
	include/alibabacloud/eais/model/StopEaisEiRequest.h
	include/alibabacloud/eais/model/StopEaisEiResult.h
	include/alibabacloud/eais/model/TagResourcesRequest.h
	include/alibabacloud/eais/model/TagResourcesResult.h
	include/alibabacloud/eais/model/UntagResourcesRequest.h
	include/alibabacloud/eais/model/UntagResourcesResult.h )

set(eais_src 
	src/EaisClient.cc
	src/model/AttachEaiRequest.cc
	src/model/AttachEaiResult.cc
	src/model/AttachEaisEiRequest.cc
	src/model/AttachEaisEiResult.cc
	src/model/ChangeResourceGroupRequest.cc
	src/model/ChangeResourceGroupResult.cc
	src/model/CreateEaiRequest.cc
	src/model/CreateEaiResult.cc
	src/model/CreateEaiEciRequest.cc
	src/model/CreateEaiEciResult.cc
	src/model/CreateEaiEcsRequest.cc
	src/model/CreateEaiEcsResult.cc
	src/model/CreateEaiJupyterRequest.cc
	src/model/CreateEaiJupyterResult.cc
	src/model/CreateEaisEiRequest.cc
	src/model/CreateEaisEiResult.cc
	src/model/DeleteEaiRequest.cc
	src/model/DeleteEaiResult.cc
	src/model/DeleteEaiAllRequest.cc
	src/model/DeleteEaiAllResult.cc
	src/model/DeleteEaisEiRequest.cc
	src/model/DeleteEaisEiResult.cc
	src/model/DescribeEaisRequest.cc
	src/model/DescribeEaisResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DetachEaiRequest.cc
	src/model/DetachEaiResult.cc
	src/model/DetachEaisEiRequest.cc
	src/model/DetachEaisEiResult.cc
	src/model/GetInstanceMetricsRequest.cc
	src/model/GetInstanceMetricsResult.cc
	src/model/ListTagResourcesRequest.cc
	src/model/ListTagResourcesResult.cc
	src/model/StartEaiJupyterRequest.cc
	src/model/StartEaiJupyterResult.cc
	src/model/StartEaisEiRequest.cc
	src/model/StartEaisEiResult.cc
	src/model/StopEaiJupyterRequest.cc
	src/model/StopEaiJupyterResult.cc
	src/model/StopEaisEiRequest.cc
	src/model/StopEaisEiResult.cc
	src/model/TagResourcesRequest.cc
	src/model/TagResourcesResult.cc
	src/model/UntagResourcesRequest.cc
	src/model/UntagResourcesResult.cc )

add_library(eais ${LIB_TYPE}
	${eais_public_header}
	${eais_public_header_model}
	${eais_src})

set_target_properties(eais
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}eais
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(eais
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_EAIS_LIBRARY)
endif()

target_include_directories(eais
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(eais
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(eais
		jsoncpp)
	target_include_directories(eais
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(eais
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(eais
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(eais
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(eais
		jsoncpp)
endif()

install(FILES ${eais_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/eais)
install(FILES ${eais_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/eais/model)
install(TARGETS eais
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)