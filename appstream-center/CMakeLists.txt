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

set(appstream-center_public_header 
	include/alibabacloud/appstream-center/Appstream_centerClient.h
	include/alibabacloud/appstream-center/Appstream_centerExport.h )

set(appstream-center_public_header_model 
	include/alibabacloud/appstream-center/model/ApproveOtaTaskRequest.h
	include/alibabacloud/appstream-center/model/ApproveOtaTaskResult.h
	include/alibabacloud/appstream-center/model/AuthorizeInstanceGroupRequest.h
	include/alibabacloud/appstream-center/model/AuthorizeInstanceGroupResult.h
	include/alibabacloud/appstream-center/model/CancelOtaTaskRequest.h
	include/alibabacloud/appstream-center/model/CancelOtaTaskResult.h
	include/alibabacloud/appstream-center/model/CreateAppInstanceGroupRequest.h
	include/alibabacloud/appstream-center/model/CreateAppInstanceGroupResult.h
	include/alibabacloud/appstream-center/model/DeleteAppInstanceGroupRequest.h
	include/alibabacloud/appstream-center/model/DeleteAppInstanceGroupResult.h
	include/alibabacloud/appstream-center/model/DeleteAppInstancesRequest.h
	include/alibabacloud/appstream-center/model/DeleteAppInstancesResult.h
	include/alibabacloud/appstream-center/model/GetAppInstanceGroupRequest.h
	include/alibabacloud/appstream-center/model/GetAppInstanceGroupResult.h
	include/alibabacloud/appstream-center/model/GetConnectionTicketRequest.h
	include/alibabacloud/appstream-center/model/GetConnectionTicketResult.h
	include/alibabacloud/appstream-center/model/GetOtaTaskByTaskIdRequest.h
	include/alibabacloud/appstream-center/model/GetOtaTaskByTaskIdResult.h
	include/alibabacloud/appstream-center/model/GetResourcePriceRequest.h
	include/alibabacloud/appstream-center/model/GetResourcePriceResult.h
	include/alibabacloud/appstream-center/model/GetResourceRenewPriceRequest.h
	include/alibabacloud/appstream-center/model/GetResourceRenewPriceResult.h
	include/alibabacloud/appstream-center/model/ListAppInstanceGroupRequest.h
	include/alibabacloud/appstream-center/model/ListAppInstanceGroupResult.h
	include/alibabacloud/appstream-center/model/ListAppInstancesRequest.h
	include/alibabacloud/appstream-center/model/ListAppInstancesResult.h
	include/alibabacloud/appstream-center/model/ListNodeInstanceTypeRequest.h
	include/alibabacloud/appstream-center/model/ListNodeInstanceTypeResult.h
	include/alibabacloud/appstream-center/model/ListOtaTaskRequest.h
	include/alibabacloud/appstream-center/model/ListOtaTaskResult.h
	include/alibabacloud/appstream-center/model/ListRegionsRequest.h
	include/alibabacloud/appstream-center/model/ListRegionsResult.h
	include/alibabacloud/appstream-center/model/ListTenantConfigRequest.h
	include/alibabacloud/appstream-center/model/ListTenantConfigResult.h
	include/alibabacloud/appstream-center/model/LogOffAllSessionsInAppInstanceGroupRequest.h
	include/alibabacloud/appstream-center/model/LogOffAllSessionsInAppInstanceGroupResult.h
	include/alibabacloud/appstream-center/model/ModifyAppInstanceGroupAttributeRequest.h
	include/alibabacloud/appstream-center/model/ModifyAppInstanceGroupAttributeResult.h
	include/alibabacloud/appstream-center/model/ModifyNodePoolAttributeRequest.h
	include/alibabacloud/appstream-center/model/ModifyNodePoolAttributeResult.h
	include/alibabacloud/appstream-center/model/ModifyTenantConfigRequest.h
	include/alibabacloud/appstream-center/model/ModifyTenantConfigResult.h
	include/alibabacloud/appstream-center/model/PageListAppInstanceGroupUserRequest.h
	include/alibabacloud/appstream-center/model/PageListAppInstanceGroupUserResult.h
	include/alibabacloud/appstream-center/model/RenewAppInstanceGroupRequest.h
	include/alibabacloud/appstream-center/model/RenewAppInstanceGroupResult.h
	include/alibabacloud/appstream-center/model/UnbindRequest.h
	include/alibabacloud/appstream-center/model/UnbindResult.h
	include/alibabacloud/appstream-center/model/UpdateAppInstanceGroupImageRequest.h
	include/alibabacloud/appstream-center/model/UpdateAppInstanceGroupImageResult.h )

set(appstream-center_src 
	src/Appstream-centerClient.cc
	src/model/ApproveOtaTaskRequest.cc
	src/model/ApproveOtaTaskResult.cc
	src/model/AuthorizeInstanceGroupRequest.cc
	src/model/AuthorizeInstanceGroupResult.cc
	src/model/CancelOtaTaskRequest.cc
	src/model/CancelOtaTaskResult.cc
	src/model/CreateAppInstanceGroupRequest.cc
	src/model/CreateAppInstanceGroupResult.cc
	src/model/DeleteAppInstanceGroupRequest.cc
	src/model/DeleteAppInstanceGroupResult.cc
	src/model/DeleteAppInstancesRequest.cc
	src/model/DeleteAppInstancesResult.cc
	src/model/GetAppInstanceGroupRequest.cc
	src/model/GetAppInstanceGroupResult.cc
	src/model/GetConnectionTicketRequest.cc
	src/model/GetConnectionTicketResult.cc
	src/model/GetOtaTaskByTaskIdRequest.cc
	src/model/GetOtaTaskByTaskIdResult.cc
	src/model/GetResourcePriceRequest.cc
	src/model/GetResourcePriceResult.cc
	src/model/GetResourceRenewPriceRequest.cc
	src/model/GetResourceRenewPriceResult.cc
	src/model/ListAppInstanceGroupRequest.cc
	src/model/ListAppInstanceGroupResult.cc
	src/model/ListAppInstancesRequest.cc
	src/model/ListAppInstancesResult.cc
	src/model/ListNodeInstanceTypeRequest.cc
	src/model/ListNodeInstanceTypeResult.cc
	src/model/ListOtaTaskRequest.cc
	src/model/ListOtaTaskResult.cc
	src/model/ListRegionsRequest.cc
	src/model/ListRegionsResult.cc
	src/model/ListTenantConfigRequest.cc
	src/model/ListTenantConfigResult.cc
	src/model/LogOffAllSessionsInAppInstanceGroupRequest.cc
	src/model/LogOffAllSessionsInAppInstanceGroupResult.cc
	src/model/ModifyAppInstanceGroupAttributeRequest.cc
	src/model/ModifyAppInstanceGroupAttributeResult.cc
	src/model/ModifyNodePoolAttributeRequest.cc
	src/model/ModifyNodePoolAttributeResult.cc
	src/model/ModifyTenantConfigRequest.cc
	src/model/ModifyTenantConfigResult.cc
	src/model/PageListAppInstanceGroupUserRequest.cc
	src/model/PageListAppInstanceGroupUserResult.cc
	src/model/RenewAppInstanceGroupRequest.cc
	src/model/RenewAppInstanceGroupResult.cc
	src/model/UnbindRequest.cc
	src/model/UnbindResult.cc
	src/model/UpdateAppInstanceGroupImageRequest.cc
	src/model/UpdateAppInstanceGroupImageResult.cc )

add_library(appstream-center ${LIB_TYPE}
	${appstream-center_public_header}
	${appstream-center_public_header_model}
	${appstream-center_src})

set_target_properties(appstream-center
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}appstream-center
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(appstream-center
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_APPSTREAM_CENTER_LIBRARY)
endif()

target_include_directories(appstream-center
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(appstream-center
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(appstream-center
		jsoncpp)
	target_include_directories(appstream-center
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(appstream-center
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(appstream-center
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(appstream-center
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(appstream-center
		jsoncpp)
endif()

install(FILES ${appstream-center_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/appstream-center)
install(FILES ${appstream-center_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/appstream-center/model)
install(TARGETS appstream-center
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)