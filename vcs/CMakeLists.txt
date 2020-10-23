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

set(vcs_public_header 
	include/alibabacloud/vcs/VcsClient.h
	include/alibabacloud/vcs/VcsExport.h )

set(vcs_public_header_model 
	include/alibabacloud/vcs/model/AddDataSourceRequest.h
	include/alibabacloud/vcs/model/AddDataSourceResult.h
	include/alibabacloud/vcs/model/AddDeviceRequest.h
	include/alibabacloud/vcs/model/AddDeviceResult.h
	include/alibabacloud/vcs/model/AddMonitorRequest.h
	include/alibabacloud/vcs/model/AddMonitorResult.h
	include/alibabacloud/vcs/model/AddProfileRequest.h
	include/alibabacloud/vcs/model/AddProfileResult.h
	include/alibabacloud/vcs/model/AddProfileCatalogRequest.h
	include/alibabacloud/vcs/model/AddProfileCatalogResult.h
	include/alibabacloud/vcs/model/BindCorpGroupRequest.h
	include/alibabacloud/vcs/model/BindCorpGroupResult.h
	include/alibabacloud/vcs/model/BindPersonRequest.h
	include/alibabacloud/vcs/model/BindPersonResult.h
	include/alibabacloud/vcs/model/BindUserRequest.h
	include/alibabacloud/vcs/model/BindUserResult.h
	include/alibabacloud/vcs/model/CreateCorpRequest.h
	include/alibabacloud/vcs/model/CreateCorpResult.h
	include/alibabacloud/vcs/model/CreateCorpGroupRequest.h
	include/alibabacloud/vcs/model/CreateCorpGroupResult.h
	include/alibabacloud/vcs/model/CreateUserRequest.h
	include/alibabacloud/vcs/model/CreateUserResult.h
	include/alibabacloud/vcs/model/CreateUserGroupRequest.h
	include/alibabacloud/vcs/model/CreateUserGroupResult.h
	include/alibabacloud/vcs/model/CreateVideoComposeTaskRequest.h
	include/alibabacloud/vcs/model/CreateVideoComposeTaskResult.h
	include/alibabacloud/vcs/model/CreateVideoSummaryTaskRequest.h
	include/alibabacloud/vcs/model/CreateVideoSummaryTaskResult.h
	include/alibabacloud/vcs/model/DeleteCorpGroupRequest.h
	include/alibabacloud/vcs/model/DeleteCorpGroupResult.h
	include/alibabacloud/vcs/model/DeleteDataSourceRequest.h
	include/alibabacloud/vcs/model/DeleteDataSourceResult.h
	include/alibabacloud/vcs/model/DeleteDeviceRequest.h
	include/alibabacloud/vcs/model/DeleteDeviceResult.h
	include/alibabacloud/vcs/model/DeleteProfileRequest.h
	include/alibabacloud/vcs/model/DeleteProfileResult.h
	include/alibabacloud/vcs/model/DeleteProfileCatalogRequest.h
	include/alibabacloud/vcs/model/DeleteProfileCatalogResult.h
	include/alibabacloud/vcs/model/DeleteRecordsRequest.h
	include/alibabacloud/vcs/model/DeleteRecordsResult.h
	include/alibabacloud/vcs/model/DeleteUserRequest.h
	include/alibabacloud/vcs/model/DeleteUserResult.h
	include/alibabacloud/vcs/model/DeleteUserGroupRequest.h
	include/alibabacloud/vcs/model/DeleteUserGroupResult.h
	include/alibabacloud/vcs/model/DeleteVideoSummaryTaskRequest.h
	include/alibabacloud/vcs/model/DeleteVideoSummaryTaskResult.h
	include/alibabacloud/vcs/model/DescribeDevicesRequest.h
	include/alibabacloud/vcs/model/DescribeDevicesResult.h
	include/alibabacloud/vcs/model/GetBodyOptionsRequest.h
	include/alibabacloud/vcs/model/GetBodyOptionsResult.h
	include/alibabacloud/vcs/model/GetCatalogListRequest.h
	include/alibabacloud/vcs/model/GetCatalogListResult.h
	include/alibabacloud/vcs/model/GetDeviceConfigRequest.h
	include/alibabacloud/vcs/model/GetDeviceConfigResult.h
	include/alibabacloud/vcs/model/GetDeviceLiveUrlRequest.h
	include/alibabacloud/vcs/model/GetDeviceLiveUrlResult.h
	include/alibabacloud/vcs/model/GetDeviceVideoUrlRequest.h
	include/alibabacloud/vcs/model/GetDeviceVideoUrlResult.h
	include/alibabacloud/vcs/model/GetFaceModelResultRequest.h
	include/alibabacloud/vcs/model/GetFaceModelResultResult.h
	include/alibabacloud/vcs/model/GetFaceOptionsRequest.h
	include/alibabacloud/vcs/model/GetFaceOptionsResult.h
	include/alibabacloud/vcs/model/GetInventoryRequest.h
	include/alibabacloud/vcs/model/GetInventoryResult.h
	include/alibabacloud/vcs/model/GetMonitorListRequest.h
	include/alibabacloud/vcs/model/GetMonitorListResult.h
	include/alibabacloud/vcs/model/GetMonitorResultRequest.h
	include/alibabacloud/vcs/model/GetMonitorResultResult.h
	include/alibabacloud/vcs/model/GetPersonDetailRequest.h
	include/alibabacloud/vcs/model/GetPersonDetailResult.h
	include/alibabacloud/vcs/model/GetPersonListRequest.h
	include/alibabacloud/vcs/model/GetPersonListResult.h
	include/alibabacloud/vcs/model/GetProfileDetailRequest.h
	include/alibabacloud/vcs/model/GetProfileDetailResult.h
	include/alibabacloud/vcs/model/GetProfileListRequest.h
	include/alibabacloud/vcs/model/GetProfileListResult.h
	include/alibabacloud/vcs/model/GetUserDetailRequest.h
	include/alibabacloud/vcs/model/GetUserDetailResult.h
	include/alibabacloud/vcs/model/GetVideoComposeResultRequest.h
	include/alibabacloud/vcs/model/GetVideoComposeResultResult.h
	include/alibabacloud/vcs/model/GetVideoSummaryTaskResultRequest.h
	include/alibabacloud/vcs/model/GetVideoSummaryTaskResultResult.h
	include/alibabacloud/vcs/model/InvokeMotorModelRequest.h
	include/alibabacloud/vcs/model/InvokeMotorModelResult.h
	include/alibabacloud/vcs/model/ListBodyAlgorithmResultsRequest.h
	include/alibabacloud/vcs/model/ListBodyAlgorithmResultsResult.h
	include/alibabacloud/vcs/model/ListCorpGroupMetricsRequest.h
	include/alibabacloud/vcs/model/ListCorpGroupMetricsResult.h
	include/alibabacloud/vcs/model/ListCorpGroupsRequest.h
	include/alibabacloud/vcs/model/ListCorpGroupsResult.h
	include/alibabacloud/vcs/model/ListCorpMetricsRequest.h
	include/alibabacloud/vcs/model/ListCorpMetricsResult.h
	include/alibabacloud/vcs/model/ListCorpsRequest.h
	include/alibabacloud/vcs/model/ListCorpsResult.h
	include/alibabacloud/vcs/model/ListDeviceGroupsRequest.h
	include/alibabacloud/vcs/model/ListDeviceGroupsResult.h
	include/alibabacloud/vcs/model/ListDevicesRequest.h
	include/alibabacloud/vcs/model/ListDevicesResult.h
	include/alibabacloud/vcs/model/ListEventAlgorithmDetailsRequest.h
	include/alibabacloud/vcs/model/ListEventAlgorithmDetailsResult.h
	include/alibabacloud/vcs/model/ListEventAlgorithmResultsRequest.h
	include/alibabacloud/vcs/model/ListEventAlgorithmResultsResult.h
	include/alibabacloud/vcs/model/ListFaceAlgorithmResultsRequest.h
	include/alibabacloud/vcs/model/ListFaceAlgorithmResultsResult.h
	include/alibabacloud/vcs/model/ListMetricsRequest.h
	include/alibabacloud/vcs/model/ListMetricsResult.h
	include/alibabacloud/vcs/model/ListMotorAlgorithmResultsRequest.h
	include/alibabacloud/vcs/model/ListMotorAlgorithmResultsResult.h
	include/alibabacloud/vcs/model/ListPersonTraceRequest.h
	include/alibabacloud/vcs/model/ListPersonTraceResult.h
	include/alibabacloud/vcs/model/ListPersonTraceDetailsRequest.h
	include/alibabacloud/vcs/model/ListPersonTraceDetailsResult.h
	include/alibabacloud/vcs/model/ListPersonVisitCountRequest.h
	include/alibabacloud/vcs/model/ListPersonVisitCountResult.h
	include/alibabacloud/vcs/model/ListPersonsRequest.h
	include/alibabacloud/vcs/model/ListPersonsResult.h
	include/alibabacloud/vcs/model/ListSubscribeDeviceRequest.h
	include/alibabacloud/vcs/model/ListSubscribeDeviceResult.h
	include/alibabacloud/vcs/model/ListUserGroupsRequest.h
	include/alibabacloud/vcs/model/ListUserGroupsResult.h
	include/alibabacloud/vcs/model/ListUsersRequest.h
	include/alibabacloud/vcs/model/ListUsersResult.h
	include/alibabacloud/vcs/model/RecognizeFaceQualityRequest.h
	include/alibabacloud/vcs/model/RecognizeFaceQualityResult.h
	include/alibabacloud/vcs/model/RecognizeImageRequest.h
	include/alibabacloud/vcs/model/RecognizeImageResult.h
	include/alibabacloud/vcs/model/RegisterDeviceRequest.h
	include/alibabacloud/vcs/model/RegisterDeviceResult.h
	include/alibabacloud/vcs/model/ReportDeviceCapacityRequest.h
	include/alibabacloud/vcs/model/ReportDeviceCapacityResult.h
	include/alibabacloud/vcs/model/SaveVideoSummaryTaskVideoRequest.h
	include/alibabacloud/vcs/model/SaveVideoSummaryTaskVideoResult.h
	include/alibabacloud/vcs/model/SearchBodyRequest.h
	include/alibabacloud/vcs/model/SearchBodyResult.h
	include/alibabacloud/vcs/model/SearchFaceRequest.h
	include/alibabacloud/vcs/model/SearchFaceResult.h
	include/alibabacloud/vcs/model/SearchObjectRequest.h
	include/alibabacloud/vcs/model/SearchObjectResult.h
	include/alibabacloud/vcs/model/StopMonitorRequest.h
	include/alibabacloud/vcs/model/StopMonitorResult.h
	include/alibabacloud/vcs/model/SubscribeDeviceEventRequest.h
	include/alibabacloud/vcs/model/SubscribeDeviceEventResult.h
	include/alibabacloud/vcs/model/SubscribeSpaceEventRequest.h
	include/alibabacloud/vcs/model/SubscribeSpaceEventResult.h
	include/alibabacloud/vcs/model/SyncDeviceTimeRequest.h
	include/alibabacloud/vcs/model/SyncDeviceTimeResult.h
	include/alibabacloud/vcs/model/UnbindCorpGroupRequest.h
	include/alibabacloud/vcs/model/UnbindCorpGroupResult.h
	include/alibabacloud/vcs/model/UnbindPersonRequest.h
	include/alibabacloud/vcs/model/UnbindPersonResult.h
	include/alibabacloud/vcs/model/UnbindUserRequest.h
	include/alibabacloud/vcs/model/UnbindUserResult.h
	include/alibabacloud/vcs/model/UnsubscribeDeviceEventRequest.h
	include/alibabacloud/vcs/model/UnsubscribeDeviceEventResult.h
	include/alibabacloud/vcs/model/UnsubscribeSpaceEventRequest.h
	include/alibabacloud/vcs/model/UnsubscribeSpaceEventResult.h
	include/alibabacloud/vcs/model/UpdateCorpRequest.h
	include/alibabacloud/vcs/model/UpdateCorpResult.h
	include/alibabacloud/vcs/model/UpdateDeviceRequest.h
	include/alibabacloud/vcs/model/UpdateDeviceResult.h
	include/alibabacloud/vcs/model/UpdateMonitorRequest.h
	include/alibabacloud/vcs/model/UpdateMonitorResult.h
	include/alibabacloud/vcs/model/UpdateProfileRequest.h
	include/alibabacloud/vcs/model/UpdateProfileResult.h
	include/alibabacloud/vcs/model/UpdateProfileCatalogRequest.h
	include/alibabacloud/vcs/model/UpdateProfileCatalogResult.h
	include/alibabacloud/vcs/model/UpdateUserRequest.h
	include/alibabacloud/vcs/model/UpdateUserResult.h
	include/alibabacloud/vcs/model/UpdateUserGroupRequest.h
	include/alibabacloud/vcs/model/UpdateUserGroupResult.h
	include/alibabacloud/vcs/model/UploadFileRequest.h
	include/alibabacloud/vcs/model/UploadFileResult.h
	include/alibabacloud/vcs/model/UploadImageRequest.h
	include/alibabacloud/vcs/model/UploadImageResult.h )

set(vcs_src 
	src/VcsClient.cc
	src/model/AddDataSourceRequest.cc
	src/model/AddDataSourceResult.cc
	src/model/AddDeviceRequest.cc
	src/model/AddDeviceResult.cc
	src/model/AddMonitorRequest.cc
	src/model/AddMonitorResult.cc
	src/model/AddProfileRequest.cc
	src/model/AddProfileResult.cc
	src/model/AddProfileCatalogRequest.cc
	src/model/AddProfileCatalogResult.cc
	src/model/BindCorpGroupRequest.cc
	src/model/BindCorpGroupResult.cc
	src/model/BindPersonRequest.cc
	src/model/BindPersonResult.cc
	src/model/BindUserRequest.cc
	src/model/BindUserResult.cc
	src/model/CreateCorpRequest.cc
	src/model/CreateCorpResult.cc
	src/model/CreateCorpGroupRequest.cc
	src/model/CreateCorpGroupResult.cc
	src/model/CreateUserRequest.cc
	src/model/CreateUserResult.cc
	src/model/CreateUserGroupRequest.cc
	src/model/CreateUserGroupResult.cc
	src/model/CreateVideoComposeTaskRequest.cc
	src/model/CreateVideoComposeTaskResult.cc
	src/model/CreateVideoSummaryTaskRequest.cc
	src/model/CreateVideoSummaryTaskResult.cc
	src/model/DeleteCorpGroupRequest.cc
	src/model/DeleteCorpGroupResult.cc
	src/model/DeleteDataSourceRequest.cc
	src/model/DeleteDataSourceResult.cc
	src/model/DeleteDeviceRequest.cc
	src/model/DeleteDeviceResult.cc
	src/model/DeleteProfileRequest.cc
	src/model/DeleteProfileResult.cc
	src/model/DeleteProfileCatalogRequest.cc
	src/model/DeleteProfileCatalogResult.cc
	src/model/DeleteRecordsRequest.cc
	src/model/DeleteRecordsResult.cc
	src/model/DeleteUserRequest.cc
	src/model/DeleteUserResult.cc
	src/model/DeleteUserGroupRequest.cc
	src/model/DeleteUserGroupResult.cc
	src/model/DeleteVideoSummaryTaskRequest.cc
	src/model/DeleteVideoSummaryTaskResult.cc
	src/model/DescribeDevicesRequest.cc
	src/model/DescribeDevicesResult.cc
	src/model/GetBodyOptionsRequest.cc
	src/model/GetBodyOptionsResult.cc
	src/model/GetCatalogListRequest.cc
	src/model/GetCatalogListResult.cc
	src/model/GetDeviceConfigRequest.cc
	src/model/GetDeviceConfigResult.cc
	src/model/GetDeviceLiveUrlRequest.cc
	src/model/GetDeviceLiveUrlResult.cc
	src/model/GetDeviceVideoUrlRequest.cc
	src/model/GetDeviceVideoUrlResult.cc
	src/model/GetFaceModelResultRequest.cc
	src/model/GetFaceModelResultResult.cc
	src/model/GetFaceOptionsRequest.cc
	src/model/GetFaceOptionsResult.cc
	src/model/GetInventoryRequest.cc
	src/model/GetInventoryResult.cc
	src/model/GetMonitorListRequest.cc
	src/model/GetMonitorListResult.cc
	src/model/GetMonitorResultRequest.cc
	src/model/GetMonitorResultResult.cc
	src/model/GetPersonDetailRequest.cc
	src/model/GetPersonDetailResult.cc
	src/model/GetPersonListRequest.cc
	src/model/GetPersonListResult.cc
	src/model/GetProfileDetailRequest.cc
	src/model/GetProfileDetailResult.cc
	src/model/GetProfileListRequest.cc
	src/model/GetProfileListResult.cc
	src/model/GetUserDetailRequest.cc
	src/model/GetUserDetailResult.cc
	src/model/GetVideoComposeResultRequest.cc
	src/model/GetVideoComposeResultResult.cc
	src/model/GetVideoSummaryTaskResultRequest.cc
	src/model/GetVideoSummaryTaskResultResult.cc
	src/model/InvokeMotorModelRequest.cc
	src/model/InvokeMotorModelResult.cc
	src/model/ListBodyAlgorithmResultsRequest.cc
	src/model/ListBodyAlgorithmResultsResult.cc
	src/model/ListCorpGroupMetricsRequest.cc
	src/model/ListCorpGroupMetricsResult.cc
	src/model/ListCorpGroupsRequest.cc
	src/model/ListCorpGroupsResult.cc
	src/model/ListCorpMetricsRequest.cc
	src/model/ListCorpMetricsResult.cc
	src/model/ListCorpsRequest.cc
	src/model/ListCorpsResult.cc
	src/model/ListDeviceGroupsRequest.cc
	src/model/ListDeviceGroupsResult.cc
	src/model/ListDevicesRequest.cc
	src/model/ListDevicesResult.cc
	src/model/ListEventAlgorithmDetailsRequest.cc
	src/model/ListEventAlgorithmDetailsResult.cc
	src/model/ListEventAlgorithmResultsRequest.cc
	src/model/ListEventAlgorithmResultsResult.cc
	src/model/ListFaceAlgorithmResultsRequest.cc
	src/model/ListFaceAlgorithmResultsResult.cc
	src/model/ListMetricsRequest.cc
	src/model/ListMetricsResult.cc
	src/model/ListMotorAlgorithmResultsRequest.cc
	src/model/ListMotorAlgorithmResultsResult.cc
	src/model/ListPersonTraceRequest.cc
	src/model/ListPersonTraceResult.cc
	src/model/ListPersonTraceDetailsRequest.cc
	src/model/ListPersonTraceDetailsResult.cc
	src/model/ListPersonVisitCountRequest.cc
	src/model/ListPersonVisitCountResult.cc
	src/model/ListPersonsRequest.cc
	src/model/ListPersonsResult.cc
	src/model/ListSubscribeDeviceRequest.cc
	src/model/ListSubscribeDeviceResult.cc
	src/model/ListUserGroupsRequest.cc
	src/model/ListUserGroupsResult.cc
	src/model/ListUsersRequest.cc
	src/model/ListUsersResult.cc
	src/model/RecognizeFaceQualityRequest.cc
	src/model/RecognizeFaceQualityResult.cc
	src/model/RecognizeImageRequest.cc
	src/model/RecognizeImageResult.cc
	src/model/RegisterDeviceRequest.cc
	src/model/RegisterDeviceResult.cc
	src/model/ReportDeviceCapacityRequest.cc
	src/model/ReportDeviceCapacityResult.cc
	src/model/SaveVideoSummaryTaskVideoRequest.cc
	src/model/SaveVideoSummaryTaskVideoResult.cc
	src/model/SearchBodyRequest.cc
	src/model/SearchBodyResult.cc
	src/model/SearchFaceRequest.cc
	src/model/SearchFaceResult.cc
	src/model/SearchObjectRequest.cc
	src/model/SearchObjectResult.cc
	src/model/StopMonitorRequest.cc
	src/model/StopMonitorResult.cc
	src/model/SubscribeDeviceEventRequest.cc
	src/model/SubscribeDeviceEventResult.cc
	src/model/SubscribeSpaceEventRequest.cc
	src/model/SubscribeSpaceEventResult.cc
	src/model/SyncDeviceTimeRequest.cc
	src/model/SyncDeviceTimeResult.cc
	src/model/UnbindCorpGroupRequest.cc
	src/model/UnbindCorpGroupResult.cc
	src/model/UnbindPersonRequest.cc
	src/model/UnbindPersonResult.cc
	src/model/UnbindUserRequest.cc
	src/model/UnbindUserResult.cc
	src/model/UnsubscribeDeviceEventRequest.cc
	src/model/UnsubscribeDeviceEventResult.cc
	src/model/UnsubscribeSpaceEventRequest.cc
	src/model/UnsubscribeSpaceEventResult.cc
	src/model/UpdateCorpRequest.cc
	src/model/UpdateCorpResult.cc
	src/model/UpdateDeviceRequest.cc
	src/model/UpdateDeviceResult.cc
	src/model/UpdateMonitorRequest.cc
	src/model/UpdateMonitorResult.cc
	src/model/UpdateProfileRequest.cc
	src/model/UpdateProfileResult.cc
	src/model/UpdateProfileCatalogRequest.cc
	src/model/UpdateProfileCatalogResult.cc
	src/model/UpdateUserRequest.cc
	src/model/UpdateUserResult.cc
	src/model/UpdateUserGroupRequest.cc
	src/model/UpdateUserGroupResult.cc
	src/model/UploadFileRequest.cc
	src/model/UploadFileResult.cc
	src/model/UploadImageRequest.cc
	src/model/UploadImageResult.cc )

add_library(vcs ${LIB_TYPE}
	${vcs_public_header}
	${vcs_public_header_model}
	${vcs_src})

set_target_properties(vcs
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}vcs
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(vcs
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_VCS_LIBRARY)
endif()

target_include_directories(vcs
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(vcs
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(vcs
		jsoncpp)
	target_include_directories(vcs
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(vcs
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(vcs
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(vcs
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(vcs
		jsoncpp)
endif()

install(FILES ${vcs_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/vcs)
install(FILES ${vcs_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/vcs/model)
install(TARGETS vcs
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)