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
	include/alibabacloud/cloudesl/model/AddCompanyTemplateRequest.h
	include/alibabacloud/cloudesl/model/AddCompanyTemplateResult.h
	include/alibabacloud/cloudesl/model/AddMaterialRequest.h
	include/alibabacloud/cloudesl/model/AddMaterialResult.h
	include/alibabacloud/cloudesl/model/AddUserRequest.h
	include/alibabacloud/cloudesl/model/AddUserResult.h
	include/alibabacloud/cloudesl/model/ApplyCompanyTemplateVersionToStoresRequest.h
	include/alibabacloud/cloudesl/model/ApplyCompanyTemplateVersionToStoresResult.h
	include/alibabacloud/cloudesl/model/ApplyImageDitheringRequest.h
	include/alibabacloud/cloudesl/model/ApplyImageDitheringResult.h
	include/alibabacloud/cloudesl/model/AssignUserRequest.h
	include/alibabacloud/cloudesl/model/AssignUserResult.h
	include/alibabacloud/cloudesl/model/BatchInsertItemsRequest.h
	include/alibabacloud/cloudesl/model/BatchInsertItemsResult.h
	include/alibabacloud/cloudesl/model/BatchUpdateEventRequest.h
	include/alibabacloud/cloudesl/model/BatchUpdateEventResult.h
	include/alibabacloud/cloudesl/model/BindDeviceLayoutRequest.h
	include/alibabacloud/cloudesl/model/BindDeviceLayoutResult.h
	include/alibabacloud/cloudesl/model/BindEslDeviceRequest.h
	include/alibabacloud/cloudesl/model/BindEslDeviceResult.h
	include/alibabacloud/cloudesl/model/CheckServiceLinkedRoleForDeletingRequest.h
	include/alibabacloud/cloudesl/model/CheckServiceLinkedRoleForDeletingResult.h
	include/alibabacloud/cloudesl/model/CopyCompanyTemplateViewRequest.h
	include/alibabacloud/cloudesl/model/CopyCompanyTemplateViewResult.h
	include/alibabacloud/cloudesl/model/CopyLayoutRequest.h
	include/alibabacloud/cloudesl/model/CopyLayoutResult.h
	include/alibabacloud/cloudesl/model/CopyTemplateGroupRequest.h
	include/alibabacloud/cloudesl/model/CopyTemplateGroupResult.h
	include/alibabacloud/cloudesl/model/CreateStoreRequest.h
	include/alibabacloud/cloudesl/model/CreateStoreResult.h
	include/alibabacloud/cloudesl/model/DeleteApDeviceRequest.h
	include/alibabacloud/cloudesl/model/DeleteApDeviceResult.h
	include/alibabacloud/cloudesl/model/DeleteCompanyTemplateRequest.h
	include/alibabacloud/cloudesl/model/DeleteCompanyTemplateResult.h
	include/alibabacloud/cloudesl/model/DeleteItemRequest.h
	include/alibabacloud/cloudesl/model/DeleteItemResult.h
	include/alibabacloud/cloudesl/model/DeleteLayoutRequest.h
	include/alibabacloud/cloudesl/model/DeleteLayoutResult.h
	include/alibabacloud/cloudesl/model/DeleteMaterialRequest.h
	include/alibabacloud/cloudesl/model/DeleteMaterialResult.h
	include/alibabacloud/cloudesl/model/DeleteStoreRequest.h
	include/alibabacloud/cloudesl/model/DeleteStoreResult.h
	include/alibabacloud/cloudesl/model/DeleteTemplateGroupRequest.h
	include/alibabacloud/cloudesl/model/DeleteTemplateGroupResult.h
	include/alibabacloud/cloudesl/model/DeleteUserRequest.h
	include/alibabacloud/cloudesl/model/DeleteUserResult.h
	include/alibabacloud/cloudesl/model/DescribeApDevicesRequest.h
	include/alibabacloud/cloudesl/model/DescribeApDevicesResult.h
	include/alibabacloud/cloudesl/model/DescribeAvailableEslModelsRequest.h
	include/alibabacloud/cloudesl/model/DescribeAvailableEslModelsResult.h
	include/alibabacloud/cloudesl/model/DescribeBindersRequest.h
	include/alibabacloud/cloudesl/model/DescribeBindersResult.h
	include/alibabacloud/cloudesl/model/DescribeCompanyTemplateAttributeRequest.h
	include/alibabacloud/cloudesl/model/DescribeCompanyTemplateAttributeResult.h
	include/alibabacloud/cloudesl/model/DescribeCompanyTemplateVersionsRequest.h
	include/alibabacloud/cloudesl/model/DescribeCompanyTemplateVersionsResult.h
	include/alibabacloud/cloudesl/model/DescribeCompanyTemplateViewRequest.h
	include/alibabacloud/cloudesl/model/DescribeCompanyTemplateViewResult.h
	include/alibabacloud/cloudesl/model/DescribeEslDevicesRequest.h
	include/alibabacloud/cloudesl/model/DescribeEslDevicesResult.h
	include/alibabacloud/cloudesl/model/DescribeEslModelByTemplateVersionRequest.h
	include/alibabacloud/cloudesl/model/DescribeEslModelByTemplateVersionResult.h
	include/alibabacloud/cloudesl/model/DescribeEventReasonRequest.h
	include/alibabacloud/cloudesl/model/DescribeEventReasonResult.h
	include/alibabacloud/cloudesl/model/DescribeEventsRequest.h
	include/alibabacloud/cloudesl/model/DescribeEventsResult.h
	include/alibabacloud/cloudesl/model/DescribeItemMaterialsRequest.h
	include/alibabacloud/cloudesl/model/DescribeItemMaterialsResult.h
	include/alibabacloud/cloudesl/model/DescribeItemsRequest.h
	include/alibabacloud/cloudesl/model/DescribeItemsResult.h
	include/alibabacloud/cloudesl/model/DescribeMaterialsRequest.h
	include/alibabacloud/cloudesl/model/DescribeMaterialsResult.h
	include/alibabacloud/cloudesl/model/DescribeNotificationConfigRequest.h
	include/alibabacloud/cloudesl/model/DescribeNotificationConfigResult.h
	include/alibabacloud/cloudesl/model/DescribeStoreByTemplateVersionRequest.h
	include/alibabacloud/cloudesl/model/DescribeStoreByTemplateVersionResult.h
	include/alibabacloud/cloudesl/model/DescribeStoreConfigRequest.h
	include/alibabacloud/cloudesl/model/DescribeStoreConfigResult.h
	include/alibabacloud/cloudesl/model/DescribeStoresRequest.h
	include/alibabacloud/cloudesl/model/DescribeStoresResult.h
	include/alibabacloud/cloudesl/model/DescribeTemplateByModelRequest.h
	include/alibabacloud/cloudesl/model/DescribeTemplateByModelResult.h
	include/alibabacloud/cloudesl/model/DescribeUserLogRequest.h
	include/alibabacloud/cloudesl/model/DescribeUserLogResult.h
	include/alibabacloud/cloudesl/model/DescribeUsersRequest.h
	include/alibabacloud/cloudesl/model/DescribeUsersResult.h
	include/alibabacloud/cloudesl/model/ExportEslDevicesRequest.h
	include/alibabacloud/cloudesl/model/ExportEslDevicesResult.h
	include/alibabacloud/cloudesl/model/GetAddMaterialStatusRequest.h
	include/alibabacloud/cloudesl/model/GetAddMaterialStatusResult.h
	include/alibabacloud/cloudesl/model/GetCompanyTemplatePictureRequest.h
	include/alibabacloud/cloudesl/model/GetCompanyTemplatePictureResult.h
	include/alibabacloud/cloudesl/model/GetCompanyTemplatePictureByJobRequest.h
	include/alibabacloud/cloudesl/model/GetCompanyTemplatePictureByJobResult.h
	include/alibabacloud/cloudesl/model/GetCompanyTemplatePictureNewRequest.h
	include/alibabacloud/cloudesl/model/GetCompanyTemplatePictureNewResult.h
	include/alibabacloud/cloudesl/model/GetEslDevicesRequest.h
	include/alibabacloud/cloudesl/model/GetEslDevicesResult.h
	include/alibabacloud/cloudesl/model/GetItemMaterialRequest.h
	include/alibabacloud/cloudesl/model/GetItemMaterialResult.h
	include/alibabacloud/cloudesl/model/GetUserRequest.h
	include/alibabacloud/cloudesl/model/GetUserResult.h
	include/alibabacloud/cloudesl/model/QueryContainerListRequest.h
	include/alibabacloud/cloudesl/model/QueryContainerListResult.h
	include/alibabacloud/cloudesl/model/QueryLayoutByDeviceRequest.h
	include/alibabacloud/cloudesl/model/QueryLayoutByDeviceResult.h
	include/alibabacloud/cloudesl/model/QueryLayoutDetailRequest.h
	include/alibabacloud/cloudesl/model/QueryLayoutDetailResult.h
	include/alibabacloud/cloudesl/model/QueryTemplateGroupListRequest.h
	include/alibabacloud/cloudesl/model/QueryTemplateGroupListResult.h
	include/alibabacloud/cloudesl/model/QueryTemplateListByGroupIdRequest.h
	include/alibabacloud/cloudesl/model/QueryTemplateListByGroupIdResult.h
	include/alibabacloud/cloudesl/model/SaveLayoutRequest.h
	include/alibabacloud/cloudesl/model/SaveLayoutResult.h
	include/alibabacloud/cloudesl/model/SaveTemplateGroupRequest.h
	include/alibabacloud/cloudesl/model/SaveTemplateGroupResult.h
	include/alibabacloud/cloudesl/model/SyncAddMaterialRequest.h
	include/alibabacloud/cloudesl/model/SyncAddMaterialResult.h
	include/alibabacloud/cloudesl/model/UnassignUserRequest.h
	include/alibabacloud/cloudesl/model/UnassignUserResult.h
	include/alibabacloud/cloudesl/model/UnbindEslDeviceRequest.h
	include/alibabacloud/cloudesl/model/UnbindEslDeviceResult.h
	include/alibabacloud/cloudesl/model/UpdateCompanyTemplateRequest.h
	include/alibabacloud/cloudesl/model/UpdateCompanyTemplateResult.h
	include/alibabacloud/cloudesl/model/UpdateCompanyTemplateViewRequest.h
	include/alibabacloud/cloudesl/model/UpdateCompanyTemplateViewResult.h
	include/alibabacloud/cloudesl/model/UpdateEslDeviceLightRequest.h
	include/alibabacloud/cloudesl/model/UpdateEslDeviceLightResult.h
	include/alibabacloud/cloudesl/model/UpdateItemMaterialRequest.h
	include/alibabacloud/cloudesl/model/UpdateItemMaterialResult.h
	include/alibabacloud/cloudesl/model/UpdateNotificationConfigRequest.h
	include/alibabacloud/cloudesl/model/UpdateNotificationConfigResult.h
	include/alibabacloud/cloudesl/model/UpdateStoreRequest.h
	include/alibabacloud/cloudesl/model/UpdateStoreResult.h
	include/alibabacloud/cloudesl/model/UpdateStoreConfigRequest.h
	include/alibabacloud/cloudesl/model/UpdateStoreConfigResult.h
	include/alibabacloud/cloudesl/model/VerifyNotificationConfigRequest.h
	include/alibabacloud/cloudesl/model/VerifyNotificationConfigResult.h )

set(cloudesl_src 
	src/CloudeslClient.cc
	src/model/ActivateApDeviceRequest.cc
	src/model/ActivateApDeviceResult.cc
	src/model/AddApDeviceRequest.cc
	src/model/AddApDeviceResult.cc
	src/model/AddCompanyTemplateRequest.cc
	src/model/AddCompanyTemplateResult.cc
	src/model/AddMaterialRequest.cc
	src/model/AddMaterialResult.cc
	src/model/AddUserRequest.cc
	src/model/AddUserResult.cc
	src/model/ApplyCompanyTemplateVersionToStoresRequest.cc
	src/model/ApplyCompanyTemplateVersionToStoresResult.cc
	src/model/ApplyImageDitheringRequest.cc
	src/model/ApplyImageDitheringResult.cc
	src/model/AssignUserRequest.cc
	src/model/AssignUserResult.cc
	src/model/BatchInsertItemsRequest.cc
	src/model/BatchInsertItemsResult.cc
	src/model/BatchUpdateEventRequest.cc
	src/model/BatchUpdateEventResult.cc
	src/model/BindDeviceLayoutRequest.cc
	src/model/BindDeviceLayoutResult.cc
	src/model/BindEslDeviceRequest.cc
	src/model/BindEslDeviceResult.cc
	src/model/CheckServiceLinkedRoleForDeletingRequest.cc
	src/model/CheckServiceLinkedRoleForDeletingResult.cc
	src/model/CopyCompanyTemplateViewRequest.cc
	src/model/CopyCompanyTemplateViewResult.cc
	src/model/CopyLayoutRequest.cc
	src/model/CopyLayoutResult.cc
	src/model/CopyTemplateGroupRequest.cc
	src/model/CopyTemplateGroupResult.cc
	src/model/CreateStoreRequest.cc
	src/model/CreateStoreResult.cc
	src/model/DeleteApDeviceRequest.cc
	src/model/DeleteApDeviceResult.cc
	src/model/DeleteCompanyTemplateRequest.cc
	src/model/DeleteCompanyTemplateResult.cc
	src/model/DeleteItemRequest.cc
	src/model/DeleteItemResult.cc
	src/model/DeleteLayoutRequest.cc
	src/model/DeleteLayoutResult.cc
	src/model/DeleteMaterialRequest.cc
	src/model/DeleteMaterialResult.cc
	src/model/DeleteStoreRequest.cc
	src/model/DeleteStoreResult.cc
	src/model/DeleteTemplateGroupRequest.cc
	src/model/DeleteTemplateGroupResult.cc
	src/model/DeleteUserRequest.cc
	src/model/DeleteUserResult.cc
	src/model/DescribeApDevicesRequest.cc
	src/model/DescribeApDevicesResult.cc
	src/model/DescribeAvailableEslModelsRequest.cc
	src/model/DescribeAvailableEslModelsResult.cc
	src/model/DescribeBindersRequest.cc
	src/model/DescribeBindersResult.cc
	src/model/DescribeCompanyTemplateAttributeRequest.cc
	src/model/DescribeCompanyTemplateAttributeResult.cc
	src/model/DescribeCompanyTemplateVersionsRequest.cc
	src/model/DescribeCompanyTemplateVersionsResult.cc
	src/model/DescribeCompanyTemplateViewRequest.cc
	src/model/DescribeCompanyTemplateViewResult.cc
	src/model/DescribeEslDevicesRequest.cc
	src/model/DescribeEslDevicesResult.cc
	src/model/DescribeEslModelByTemplateVersionRequest.cc
	src/model/DescribeEslModelByTemplateVersionResult.cc
	src/model/DescribeEventReasonRequest.cc
	src/model/DescribeEventReasonResult.cc
	src/model/DescribeEventsRequest.cc
	src/model/DescribeEventsResult.cc
	src/model/DescribeItemMaterialsRequest.cc
	src/model/DescribeItemMaterialsResult.cc
	src/model/DescribeItemsRequest.cc
	src/model/DescribeItemsResult.cc
	src/model/DescribeMaterialsRequest.cc
	src/model/DescribeMaterialsResult.cc
	src/model/DescribeNotificationConfigRequest.cc
	src/model/DescribeNotificationConfigResult.cc
	src/model/DescribeStoreByTemplateVersionRequest.cc
	src/model/DescribeStoreByTemplateVersionResult.cc
	src/model/DescribeStoreConfigRequest.cc
	src/model/DescribeStoreConfigResult.cc
	src/model/DescribeStoresRequest.cc
	src/model/DescribeStoresResult.cc
	src/model/DescribeTemplateByModelRequest.cc
	src/model/DescribeTemplateByModelResult.cc
	src/model/DescribeUserLogRequest.cc
	src/model/DescribeUserLogResult.cc
	src/model/DescribeUsersRequest.cc
	src/model/DescribeUsersResult.cc
	src/model/ExportEslDevicesRequest.cc
	src/model/ExportEslDevicesResult.cc
	src/model/GetAddMaterialStatusRequest.cc
	src/model/GetAddMaterialStatusResult.cc
	src/model/GetCompanyTemplatePictureRequest.cc
	src/model/GetCompanyTemplatePictureResult.cc
	src/model/GetCompanyTemplatePictureByJobRequest.cc
	src/model/GetCompanyTemplatePictureByJobResult.cc
	src/model/GetCompanyTemplatePictureNewRequest.cc
	src/model/GetCompanyTemplatePictureNewResult.cc
	src/model/GetEslDevicesRequest.cc
	src/model/GetEslDevicesResult.cc
	src/model/GetItemMaterialRequest.cc
	src/model/GetItemMaterialResult.cc
	src/model/GetUserRequest.cc
	src/model/GetUserResult.cc
	src/model/QueryContainerListRequest.cc
	src/model/QueryContainerListResult.cc
	src/model/QueryLayoutByDeviceRequest.cc
	src/model/QueryLayoutByDeviceResult.cc
	src/model/QueryLayoutDetailRequest.cc
	src/model/QueryLayoutDetailResult.cc
	src/model/QueryTemplateGroupListRequest.cc
	src/model/QueryTemplateGroupListResult.cc
	src/model/QueryTemplateListByGroupIdRequest.cc
	src/model/QueryTemplateListByGroupIdResult.cc
	src/model/SaveLayoutRequest.cc
	src/model/SaveLayoutResult.cc
	src/model/SaveTemplateGroupRequest.cc
	src/model/SaveTemplateGroupResult.cc
	src/model/SyncAddMaterialRequest.cc
	src/model/SyncAddMaterialResult.cc
	src/model/UnassignUserRequest.cc
	src/model/UnassignUserResult.cc
	src/model/UnbindEslDeviceRequest.cc
	src/model/UnbindEslDeviceResult.cc
	src/model/UpdateCompanyTemplateRequest.cc
	src/model/UpdateCompanyTemplateResult.cc
	src/model/UpdateCompanyTemplateViewRequest.cc
	src/model/UpdateCompanyTemplateViewResult.cc
	src/model/UpdateEslDeviceLightRequest.cc
	src/model/UpdateEslDeviceLightResult.cc
	src/model/UpdateItemMaterialRequest.cc
	src/model/UpdateItemMaterialResult.cc
	src/model/UpdateNotificationConfigRequest.cc
	src/model/UpdateNotificationConfigResult.cc
	src/model/UpdateStoreRequest.cc
	src/model/UpdateStoreResult.cc
	src/model/UpdateStoreConfigRequest.cc
	src/model/UpdateStoreConfigResult.cc
	src/model/VerifyNotificationConfigRequest.cc
	src/model/VerifyNotificationConfigResult.cc )

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