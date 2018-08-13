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

set(smartag_public_header 
	include/alibabacloud/smartag/SmartagClient.h
	include/alibabacloud/smartag/SmartagExport.h )

set(smartag_public_header_model 
	include/alibabacloud/smartag/model/DescribeSmartAccessGatewaysRequest.h
	include/alibabacloud/smartag/model/DescribeSmartAccessGatewaysResult.h
	include/alibabacloud/smartag/model/SwitchCloudBoxHaStateRequest.h
	include/alibabacloud/smartag/model/SwitchCloudBoxHaStateResult.h
	include/alibabacloud/smartag/model/UnbindSmartAccessGatewayRequest.h
	include/alibabacloud/smartag/model/UnbindSmartAccessGatewayResult.h
	include/alibabacloud/smartag/model/CreateSmartAccessGatewayRequest.h
	include/alibabacloud/smartag/model/CreateSmartAccessGatewayResult.h
	include/alibabacloud/smartag/model/DeleteDedicatedLineBackupRequest.h
	include/alibabacloud/smartag/model/DeleteDedicatedLineBackupResult.h
	include/alibabacloud/smartag/model/UnlockSmartAccessGatewayRequest.h
	include/alibabacloud/smartag/model/UnlockSmartAccessGatewayResult.h
	include/alibabacloud/smartag/model/ActivateSmartAccessGatewayRequest.h
	include/alibabacloud/smartag/model/ActivateSmartAccessGatewayResult.h
	include/alibabacloud/smartag/model/CreateDedicatedLineBackupRequest.h
	include/alibabacloud/smartag/model/CreateDedicatedLineBackupResult.h
	include/alibabacloud/smartag/model/DescribeSmartAccessGatewayHaRequest.h
	include/alibabacloud/smartag/model/DescribeSmartAccessGatewayHaResult.h
	include/alibabacloud/smartag/model/ModifyCloudConnectNetworkRequest.h
	include/alibabacloud/smartag/model/ModifyCloudConnectNetworkResult.h
	include/alibabacloud/smartag/model/DeleteCloudConnectNetworkRequest.h
	include/alibabacloud/smartag/model/DeleteCloudConnectNetworkResult.h
	include/alibabacloud/smartag/model/CreateCloudConnectNetworkRequest.h
	include/alibabacloud/smartag/model/CreateCloudConnectNetworkResult.h
	include/alibabacloud/smartag/model/RebootSmartAccessGatewayRequest.h
	include/alibabacloud/smartag/model/RebootSmartAccessGatewayResult.h
	include/alibabacloud/smartag/model/BindSmartAccessGatewayRequest.h
	include/alibabacloud/smartag/model/BindSmartAccessGatewayResult.h
	include/alibabacloud/smartag/model/DescribeRegionsRequest.h
	include/alibabacloud/smartag/model/DescribeRegionsResult.h
	include/alibabacloud/smartag/model/GetSmartAccessGatewayUseLimitRequest.h
	include/alibabacloud/smartag/model/GetSmartAccessGatewayUseLimitResult.h
	include/alibabacloud/smartag/model/ModifySmartAccessGatewayRequest.h
	include/alibabacloud/smartag/model/ModifySmartAccessGatewayResult.h
	include/alibabacloud/smartag/model/DescribeCloudConnectNetworksRequest.h
	include/alibabacloud/smartag/model/DescribeCloudConnectNetworksResult.h
	include/alibabacloud/smartag/model/DescribeSmartAccessGatewayVersionsRequest.h
	include/alibabacloud/smartag/model/DescribeSmartAccessGatewayVersionsResult.h
	include/alibabacloud/smartag/model/UpdateSmartAccessGatewayVersionRequest.h
	include/alibabacloud/smartag/model/UpdateSmartAccessGatewayVersionResult.h
	include/alibabacloud/smartag/model/GetCloudConnectNetworkUseLimitRequest.h
	include/alibabacloud/smartag/model/GetCloudConnectNetworkUseLimitResult.h )

set(smartag_src 
	src/SmartagClient.cc
	src/model/DescribeSmartAccessGatewaysRequest.cc
	src/model/DescribeSmartAccessGatewaysResult.cc
	src/model/SwitchCloudBoxHaStateRequest.cc
	src/model/SwitchCloudBoxHaStateResult.cc
	src/model/UnbindSmartAccessGatewayRequest.cc
	src/model/UnbindSmartAccessGatewayResult.cc
	src/model/CreateSmartAccessGatewayRequest.cc
	src/model/CreateSmartAccessGatewayResult.cc
	src/model/DeleteDedicatedLineBackupRequest.cc
	src/model/DeleteDedicatedLineBackupResult.cc
	src/model/UnlockSmartAccessGatewayRequest.cc
	src/model/UnlockSmartAccessGatewayResult.cc
	src/model/ActivateSmartAccessGatewayRequest.cc
	src/model/ActivateSmartAccessGatewayResult.cc
	src/model/CreateDedicatedLineBackupRequest.cc
	src/model/CreateDedicatedLineBackupResult.cc
	src/model/DescribeSmartAccessGatewayHaRequest.cc
	src/model/DescribeSmartAccessGatewayHaResult.cc
	src/model/ModifyCloudConnectNetworkRequest.cc
	src/model/ModifyCloudConnectNetworkResult.cc
	src/model/DeleteCloudConnectNetworkRequest.cc
	src/model/DeleteCloudConnectNetworkResult.cc
	src/model/CreateCloudConnectNetworkRequest.cc
	src/model/CreateCloudConnectNetworkResult.cc
	src/model/RebootSmartAccessGatewayRequest.cc
	src/model/RebootSmartAccessGatewayResult.cc
	src/model/BindSmartAccessGatewayRequest.cc
	src/model/BindSmartAccessGatewayResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/GetSmartAccessGatewayUseLimitRequest.cc
	src/model/GetSmartAccessGatewayUseLimitResult.cc
	src/model/ModifySmartAccessGatewayRequest.cc
	src/model/ModifySmartAccessGatewayResult.cc
	src/model/DescribeCloudConnectNetworksRequest.cc
	src/model/DescribeCloudConnectNetworksResult.cc
	src/model/DescribeSmartAccessGatewayVersionsRequest.cc
	src/model/DescribeSmartAccessGatewayVersionsResult.cc
	src/model/UpdateSmartAccessGatewayVersionRequest.cc
	src/model/UpdateSmartAccessGatewayVersionResult.cc
	src/model/GetCloudConnectNetworkUseLimitRequest.cc
	src/model/GetCloudConnectNetworkUseLimitResult.cc )

add_library(smartag ${LIB_TYPE}
	${smartag_public_header}
	${smartag_public_header_model}
	${smartag_src})

set_target_properties(smartag
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}smartag
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(smartag
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_SMARTAG_LIBRARY)
endif()

target_include_directories(smartag
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(smartag
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(smartag
		jsoncpp)
	target_include_directories(smartag
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(smartag
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(smartag
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(smartag
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(smartag
		jsoncpp)
endif()

install(FILES ${smartag_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/smartag)
install(FILES ${smartag_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/smartag/model)
install(TARGETS smartag
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)