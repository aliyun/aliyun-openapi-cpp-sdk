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
	include/alibabacloud/cloudesl/model/ActivateApServiceRequest.h
	include/alibabacloud/cloudesl/model/ActivateApServiceResult.h
	include/alibabacloud/cloudesl/model/ActivateApService2Request.h
	include/alibabacloud/cloudesl/model/ActivateApService2Result.h
	include/alibabacloud/cloudesl/model/BatchInsertItemsRequest.h
	include/alibabacloud/cloudesl/model/BatchInsertItemsResult.h
	include/alibabacloud/cloudesl/model/BindApStoreServiceRequest.h
	include/alibabacloud/cloudesl/model/BindApStoreServiceResult.h
	include/alibabacloud/cloudesl/model/BindEslDeviceRequest.h
	include/alibabacloud/cloudesl/model/BindEslDeviceResult.h
	include/alibabacloud/cloudesl/model/BindEslDeviceShelfRequest.h
	include/alibabacloud/cloudesl/model/BindEslDeviceShelfResult.h
	include/alibabacloud/cloudesl/model/CreateStoreRequest.h
	include/alibabacloud/cloudesl/model/CreateStoreResult.h
	include/alibabacloud/cloudesl/model/DeleteApServiceRequest.h
	include/alibabacloud/cloudesl/model/DeleteApServiceResult.h
	include/alibabacloud/cloudesl/model/DeleteEslDeviceRequest.h
	include/alibabacloud/cloudesl/model/DeleteEslDeviceResult.h
	include/alibabacloud/cloudesl/model/DeleteItemRequest.h
	include/alibabacloud/cloudesl/model/DeleteItemResult.h
	include/alibabacloud/cloudesl/model/DeleteItemBySkuIdRequest.h
	include/alibabacloud/cloudesl/model/DeleteItemBySkuIdResult.h
	include/alibabacloud/cloudesl/model/DeleteStoreRequest.h
	include/alibabacloud/cloudesl/model/DeleteStoreResult.h
	include/alibabacloud/cloudesl/model/DescribeAlarmsRequest.h
	include/alibabacloud/cloudesl/model/DescribeAlarmsResult.h
	include/alibabacloud/cloudesl/model/DescribeCompanyRequest.h
	include/alibabacloud/cloudesl/model/DescribeCompanyResult.h
	include/alibabacloud/cloudesl/model/DescribeEslDevicesRequest.h
	include/alibabacloud/cloudesl/model/DescribeEslDevicesResult.h
	include/alibabacloud/cloudesl/model/DescribeItemsRequest.h
	include/alibabacloud/cloudesl/model/DescribeItemsResult.h
	include/alibabacloud/cloudesl/model/DescribeStoresRequest.h
	include/alibabacloud/cloudesl/model/DescribeStoresResult.h
	include/alibabacloud/cloudesl/model/DescribeUserOperationLogRequest.h
	include/alibabacloud/cloudesl/model/DescribeUserOperationLogResult.h
	include/alibabacloud/cloudesl/model/DescribeUserRamPolicyRequest.h
	include/alibabacloud/cloudesl/model/DescribeUserRamPolicyResult.h
	include/alibabacloud/cloudesl/model/SearchApServiceRequest.h
	include/alibabacloud/cloudesl/model/SearchApServiceResult.h
	include/alibabacloud/cloudesl/model/UnbindEslDeviceRequest.h
	include/alibabacloud/cloudesl/model/UnbindEslDeviceResult.h
	include/alibabacloud/cloudesl/model/UnbindEslDeviceShelfRequest.h
	include/alibabacloud/cloudesl/model/UnbindEslDeviceShelfResult.h
	include/alibabacloud/cloudesl/model/UpdateStoreRequest.h
	include/alibabacloud/cloudesl/model/UpdateStoreResult.h )

set(cloudesl_src 
	src/CloudeslClient.cc
	src/model/ActivateApServiceRequest.cc
	src/model/ActivateApServiceResult.cc
	src/model/ActivateApService2Request.cc
	src/model/ActivateApService2Result.cc
	src/model/BatchInsertItemsRequest.cc
	src/model/BatchInsertItemsResult.cc
	src/model/BindApStoreServiceRequest.cc
	src/model/BindApStoreServiceResult.cc
	src/model/BindEslDeviceRequest.cc
	src/model/BindEslDeviceResult.cc
	src/model/BindEslDeviceShelfRequest.cc
	src/model/BindEslDeviceShelfResult.cc
	src/model/CreateStoreRequest.cc
	src/model/CreateStoreResult.cc
	src/model/DeleteApServiceRequest.cc
	src/model/DeleteApServiceResult.cc
	src/model/DeleteEslDeviceRequest.cc
	src/model/DeleteEslDeviceResult.cc
	src/model/DeleteItemRequest.cc
	src/model/DeleteItemResult.cc
	src/model/DeleteItemBySkuIdRequest.cc
	src/model/DeleteItemBySkuIdResult.cc
	src/model/DeleteStoreRequest.cc
	src/model/DeleteStoreResult.cc
	src/model/DescribeAlarmsRequest.cc
	src/model/DescribeAlarmsResult.cc
	src/model/DescribeCompanyRequest.cc
	src/model/DescribeCompanyResult.cc
	src/model/DescribeEslDevicesRequest.cc
	src/model/DescribeEslDevicesResult.cc
	src/model/DescribeItemsRequest.cc
	src/model/DescribeItemsResult.cc
	src/model/DescribeStoresRequest.cc
	src/model/DescribeStoresResult.cc
	src/model/DescribeUserOperationLogRequest.cc
	src/model/DescribeUserOperationLogResult.cc
	src/model/DescribeUserRamPolicyRequest.cc
	src/model/DescribeUserRamPolicyResult.cc
	src/model/SearchApServiceRequest.cc
	src/model/SearchApServiceResult.cc
	src/model/UnbindEslDeviceRequest.cc
	src/model/UnbindEslDeviceResult.cc
	src/model/UnbindEslDeviceShelfRequest.cc
	src/model/UnbindEslDeviceShelfResult.cc
	src/model/UpdateStoreRequest.cc
	src/model/UpdateStoreResult.cc )

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