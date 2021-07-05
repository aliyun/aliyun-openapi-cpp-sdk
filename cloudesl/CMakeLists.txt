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

set(cloudesl_public_header 
	include/alibabacloud/cloudesl/CloudeslClient.h
	include/alibabacloud/cloudesl/CloudeslExport.h )

set(cloudesl_public_header_model 
	include/alibabacloud/cloudesl/model/ActivateApDeviceRequest.h
	include/alibabacloud/cloudesl/model/ActivateApDeviceResult.h
	include/alibabacloud/cloudesl/model/AddApDeviceRequest.h
	include/alibabacloud/cloudesl/model/AddApDeviceResult.h
	include/alibabacloud/cloudesl/model/AddUserRequest.h
	include/alibabacloud/cloudesl/model/AddUserResult.h
	include/alibabacloud/cloudesl/model/AssignUserRequest.h
	include/alibabacloud/cloudesl/model/AssignUserResult.h
	include/alibabacloud/cloudesl/model/BatchInsertItemsRequest.h
	include/alibabacloud/cloudesl/model/BatchInsertItemsResult.h
	include/alibabacloud/cloudesl/model/BindEslDeviceRequest.h
	include/alibabacloud/cloudesl/model/BindEslDeviceResult.h
	include/alibabacloud/cloudesl/model/CreateStoreRequest.h
	include/alibabacloud/cloudesl/model/CreateStoreResult.h
	include/alibabacloud/cloudesl/model/DeleteApDeviceRequest.h
	include/alibabacloud/cloudesl/model/DeleteApDeviceResult.h
	include/alibabacloud/cloudesl/model/DeleteItemRequest.h
	include/alibabacloud/cloudesl/model/DeleteItemResult.h
	include/alibabacloud/cloudesl/model/DeleteStoreRequest.h
	include/alibabacloud/cloudesl/model/DeleteStoreResult.h
	include/alibabacloud/cloudesl/model/DeleteUserRequest.h
	include/alibabacloud/cloudesl/model/DeleteUserResult.h
	include/alibabacloud/cloudesl/model/DescribeApDevicesRequest.h
	include/alibabacloud/cloudesl/model/DescribeApDevicesResult.h
	include/alibabacloud/cloudesl/model/DescribeBindersRequest.h
	include/alibabacloud/cloudesl/model/DescribeBindersResult.h
	include/alibabacloud/cloudesl/model/DescribeClientPackageRequest.h
	include/alibabacloud/cloudesl/model/DescribeClientPackageResult.h
	include/alibabacloud/cloudesl/model/DescribeEslDevicesRequest.h
	include/alibabacloud/cloudesl/model/DescribeEslDevicesResult.h
	include/alibabacloud/cloudesl/model/DescribeItemsRequest.h
	include/alibabacloud/cloudesl/model/DescribeItemsResult.h
	include/alibabacloud/cloudesl/model/DescribeStoreConfigRequest.h
	include/alibabacloud/cloudesl/model/DescribeStoreConfigResult.h
	include/alibabacloud/cloudesl/model/DescribeStoresRequest.h
	include/alibabacloud/cloudesl/model/DescribeStoresResult.h
	include/alibabacloud/cloudesl/model/DescribeUserLogRequest.h
	include/alibabacloud/cloudesl/model/DescribeUserLogResult.h
	include/alibabacloud/cloudesl/model/DescribeUsersRequest.h
	include/alibabacloud/cloudesl/model/DescribeUsersResult.h
	include/alibabacloud/cloudesl/model/GetUserRequest.h
	include/alibabacloud/cloudesl/model/GetUserResult.h
	include/alibabacloud/cloudesl/model/UnassignUserRequest.h
	include/alibabacloud/cloudesl/model/UnassignUserResult.h
	include/alibabacloud/cloudesl/model/UnbindEslDeviceRequest.h
	include/alibabacloud/cloudesl/model/UnbindEslDeviceResult.h
	include/alibabacloud/cloudesl/model/UpdateEslDeviceLightRequest.h
	include/alibabacloud/cloudesl/model/UpdateEslDeviceLightResult.h
	include/alibabacloud/cloudesl/model/UpdateStoreRequest.h
	include/alibabacloud/cloudesl/model/UpdateStoreResult.h
	include/alibabacloud/cloudesl/model/UpdateStoreConfigRequest.h
	include/alibabacloud/cloudesl/model/UpdateStoreConfigResult.h )

set(cloudesl_src 
	src/CloudeslClient.cc
	src/model/ActivateApDeviceRequest.cc
	src/model/ActivateApDeviceResult.cc
	src/model/AddApDeviceRequest.cc
	src/model/AddApDeviceResult.cc
	src/model/AddUserRequest.cc
	src/model/AddUserResult.cc
	src/model/AssignUserRequest.cc
	src/model/AssignUserResult.cc
	src/model/BatchInsertItemsRequest.cc
	src/model/BatchInsertItemsResult.cc
	src/model/BindEslDeviceRequest.cc
	src/model/BindEslDeviceResult.cc
	src/model/CreateStoreRequest.cc
	src/model/CreateStoreResult.cc
	src/model/DeleteApDeviceRequest.cc
	src/model/DeleteApDeviceResult.cc
	src/model/DeleteItemRequest.cc
	src/model/DeleteItemResult.cc
	src/model/DeleteStoreRequest.cc
	src/model/DeleteStoreResult.cc
	src/model/DeleteUserRequest.cc
	src/model/DeleteUserResult.cc
	src/model/DescribeApDevicesRequest.cc
	src/model/DescribeApDevicesResult.cc
	src/model/DescribeBindersRequest.cc
	src/model/DescribeBindersResult.cc
	src/model/DescribeClientPackageRequest.cc
	src/model/DescribeClientPackageResult.cc
	src/model/DescribeEslDevicesRequest.cc
	src/model/DescribeEslDevicesResult.cc
	src/model/DescribeItemsRequest.cc
	src/model/DescribeItemsResult.cc
	src/model/DescribeStoreConfigRequest.cc
	src/model/DescribeStoreConfigResult.cc
	src/model/DescribeStoresRequest.cc
	src/model/DescribeStoresResult.cc
	src/model/DescribeUserLogRequest.cc
	src/model/DescribeUserLogResult.cc
	src/model/DescribeUsersRequest.cc
	src/model/DescribeUsersResult.cc
	src/model/GetUserRequest.cc
	src/model/GetUserResult.cc
	src/model/UnassignUserRequest.cc
	src/model/UnassignUserResult.cc
	src/model/UnbindEslDeviceRequest.cc
	src/model/UnbindEslDeviceResult.cc
	src/model/UpdateEslDeviceLightRequest.cc
	src/model/UpdateEslDeviceLightResult.cc
	src/model/UpdateStoreRequest.cc
	src/model/UpdateStoreResult.cc
	src/model/UpdateStoreConfigRequest.cc
	src/model/UpdateStoreConfigResult.cc )

add_library(cloudesl ${LIB_TYPE}
	${cloudesl_public_header}
	${cloudesl_public_header_model}
	${cloudesl_src})

set_target_properties(cloudesl
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cloudesl
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(cloudesl
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_CLOUDESL_LIBRARY)
endif()

target_include_directories(cloudesl
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(cloudesl
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(cloudesl
		jsoncpp)
	target_include_directories(cloudesl
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(cloudesl
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(cloudesl
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(cloudesl
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(cloudesl
		jsoncpp)
endif()

install(FILES ${cloudesl_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cloudesl)
install(FILES ${cloudesl_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cloudesl/model)
install(TARGETS cloudesl
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)