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

set(hsm_public_header 
	include/alibabacloud/hsm/HsmClient.h
	include/alibabacloud/hsm/HsmExport.h )

set(hsm_public_header_model 
	include/alibabacloud/hsm/model/ConfigNetworkRequest.h
	include/alibabacloud/hsm/model/ConfigNetworkResult.h
	include/alibabacloud/hsm/model/ConfigWhiteListRequest.h
	include/alibabacloud/hsm/model/ConfigWhiteListResult.h
	include/alibabacloud/hsm/model/CreateInstanceRequest.h
	include/alibabacloud/hsm/model/CreateInstanceResult.h
	include/alibabacloud/hsm/model/DescribeInstancesRequest.h
	include/alibabacloud/hsm/model/DescribeInstancesResult.h
	include/alibabacloud/hsm/model/DescribeRegionsRequest.h
	include/alibabacloud/hsm/model/DescribeRegionsResult.h
	include/alibabacloud/hsm/model/ModifyInstanceRequest.h
	include/alibabacloud/hsm/model/ModifyInstanceResult.h
	include/alibabacloud/hsm/model/MoveResourceGroupRequest.h
	include/alibabacloud/hsm/model/MoveResourceGroupResult.h
	include/alibabacloud/hsm/model/ReleaseInstanceRequest.h
	include/alibabacloud/hsm/model/ReleaseInstanceResult.h
	include/alibabacloud/hsm/model/RenewInstanceRequest.h
	include/alibabacloud/hsm/model/RenewInstanceResult.h )

set(hsm_src 
	src/HsmClient.cc
	src/model/ConfigNetworkRequest.cc
	src/model/ConfigNetworkResult.cc
	src/model/ConfigWhiteListRequest.cc
	src/model/ConfigWhiteListResult.cc
	src/model/CreateInstanceRequest.cc
	src/model/CreateInstanceResult.cc
	src/model/DescribeInstancesRequest.cc
	src/model/DescribeInstancesResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/ModifyInstanceRequest.cc
	src/model/ModifyInstanceResult.cc
	src/model/MoveResourceGroupRequest.cc
	src/model/MoveResourceGroupResult.cc
	src/model/ReleaseInstanceRequest.cc
	src/model/ReleaseInstanceResult.cc
	src/model/RenewInstanceRequest.cc
	src/model/RenewInstanceResult.cc )

add_library(hsm ${LIB_TYPE}
	${hsm_public_header}
	${hsm_public_header_model}
	${hsm_src})

set_target_properties(hsm
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}hsm
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(hsm
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_HSM_LIBRARY)
endif()

target_include_directories(hsm
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(hsm
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(hsm
		jsoncpp)
	target_include_directories(hsm
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(hsm
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(hsm
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(hsm
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(hsm
		jsoncpp)
endif()

install(FILES ${hsm_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/hsm)
install(FILES ${hsm_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/hsm/model)
install(TARGETS hsm
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)