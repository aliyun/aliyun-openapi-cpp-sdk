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
set(cms_public_header
	include/alibabacloud/cms/model/ProfileSetRequest.h
	include/alibabacloud/cms/model/ProfileSetResult.h
	include/alibabacloud/cms/model/ListProductOfActiceAlertRequest.h
	include/alibabacloud/cms/model/ListProductOfActiceAlertResult.h
	include/alibabacloud/cms/model/DeleteCustomMetricRequest.h
	include/alibabacloud/cms/model/DeleteCustomMetricResult.h
	include/alibabacloud/cms/model/NodeUninstallRequest.h
	include/alibabacloud/cms/model/NodeUninstallResult.h
	include/alibabacloud/cms/model/QueryCustomEventCountRequest.h
	include/alibabacloud/cms/model/QueryCustomEventCountResult.h
	include/alibabacloud/cms/model/UpdateMyGroupInstancesRequest.h
	include/alibabacloud/cms/model/UpdateMyGroupInstancesResult.h
	include/alibabacloud/cms/model/ProfileGetRequest.h
	include/alibabacloud/cms/model/ProfileGetResult.h
	include/alibabacloud/cms/model/PutSystemEventRequest.h
	include/alibabacloud/cms/model/PutSystemEventResult.h
	include/alibabacloud/cms/model/QueryCustomMetricListRequest.h
	include/alibabacloud/cms/model/QueryCustomMetricListResult.h
	include/alibabacloud/cms/model/EnableActiveAlertRequest.h
	include/alibabacloud/cms/model/EnableActiveAlertResult.h
	include/alibabacloud/cms/model/QuerySystemEventDetailRequest.h
	include/alibabacloud/cms/model/QuerySystemEventDetailResult.h
	include/alibabacloud/cms/model/CreateNotifyPolicyRequest.h
	include/alibabacloud/cms/model/CreateNotifyPolicyResult.h
	include/alibabacloud/cms/model/DeleteAlarmRequest.h
	include/alibabacloud/cms/model/DeleteAlarmResult.h
	include/alibabacloud/cms/model/NodeListRequest.h
	include/alibabacloud/cms/model/NodeListResult.h
	include/alibabacloud/cms/model/NodeProcessesRequest.h
	include/alibabacloud/cms/model/NodeProcessesResult.h
	include/alibabacloud/cms/model/ListMyGroupCategoriesRequest.h
	include/alibabacloud/cms/model/ListMyGroupCategoriesResult.h
	include/alibabacloud/cms/model/QueryMetricListRequest.h
	include/alibabacloud/cms/model/QueryMetricListResult.h
	include/alibabacloud/cms/model/ListMyGroupInstancesDetailsRequest.h
	include/alibabacloud/cms/model/ListMyGroupInstancesDetailsResult.h
	include/alibabacloud/cms/model/DisableAlarmRequest.h
	include/alibabacloud/cms/model/DisableAlarmResult.h
	include/alibabacloud/cms/model/PutCustomMetricRequest.h
	include/alibabacloud/cms/model/PutCustomMetricResult.h
	include/alibabacloud/cms/model/DeleteMyGroupsRequest.h
	include/alibabacloud/cms/model/DeleteMyGroupsResult.h
	include/alibabacloud/cms/model/QueryMetricLastRequest.h
	include/alibabacloud/cms/model/QueryMetricLastResult.h
	include/alibabacloud/cms/model/QuerySystemEventHistogramRequest.h
	include/alibabacloud/cms/model/QuerySystemEventHistogramResult.h
	include/alibabacloud/cms/model/DescribeAlarmHistoryRequest.h
	include/alibabacloud/cms/model/DescribeAlarmHistoryResult.h
	include/alibabacloud/cms/model/NodeStatusRequest.h
	include/alibabacloud/cms/model/NodeStatusResult.h
	include/alibabacloud/cms/model/DeleteMyGroupInstancesRequest.h
	include/alibabacloud/cms/model/DeleteMyGroupInstancesResult.h
	include/alibabacloud/cms/model/ListProductOfActiveAlertRequest.h
	include/alibabacloud/cms/model/ListProductOfActiveAlertResult.h
	include/alibabacloud/cms/model/CreateMyGroupsRequest.h
	include/alibabacloud/cms/model/CreateMyGroupsResult.h
	include/alibabacloud/cms/model/CreateAlarmRequest.h
	include/alibabacloud/cms/model/CreateAlarmResult.h
	include/alibabacloud/cms/model/ListActiveAlertRuleRequest.h
	include/alibabacloud/cms/model/ListActiveAlertRuleResult.h
	include/alibabacloud/cms/model/ListMyGroupsRequest.h
	include/alibabacloud/cms/model/ListMyGroupsResult.h
	include/alibabacloud/cms/model/DeleteNotifyPolicyRequest.h
	include/alibabacloud/cms/model/DeleteNotifyPolicyResult.h
	include/alibabacloud/cms/model/AddMyGroupInstancesRequest.h
	include/alibabacloud/cms/model/AddMyGroupInstancesResult.h
	include/alibabacloud/cms/model/NodeProcessDeleteRequest.h
	include/alibabacloud/cms/model/NodeProcessDeleteResult.h
	include/alibabacloud/cms/model/UpdateMyGroupsRequest.h
	include/alibabacloud/cms/model/UpdateMyGroupsResult.h
	include/alibabacloud/cms/model/QuerySystemEventCountRequest.h
	include/alibabacloud/cms/model/QuerySystemEventCountResult.h
	include/alibabacloud/cms/model/ListMyGroupInstancesRequest.h
	include/alibabacloud/cms/model/ListMyGroupInstancesResult.h
	include/alibabacloud/cms/model/AccessKeyGetRequest.h
	include/alibabacloud/cms/model/AccessKeyGetResult.h
	include/alibabacloud/cms/model/EnableActiceAlertRequest.h
	include/alibabacloud/cms/model/EnableActiceAlertResult.h
	include/alibabacloud/cms/model/PutMetricDataRequest.h
	include/alibabacloud/cms/model/PutMetricDataResult.h
	include/alibabacloud/cms/model/DisableActiveAlertRequest.h
	include/alibabacloud/cms/model/DisableActiveAlertResult.h
	include/alibabacloud/cms/model/DisableActiceAlertRequest.h
	include/alibabacloud/cms/model/DisableActiceAlertResult.h
	include/alibabacloud/cms/model/ListAlarmRequest.h
	include/alibabacloud/cms/model/ListAlarmResult.h
	include/alibabacloud/cms/model/NodeInstallRequest.h
	include/alibabacloud/cms/model/NodeInstallResult.h
	include/alibabacloud/cms/model/QueryCustomEventHistogramRequest.h
	include/alibabacloud/cms/model/QueryCustomEventHistogramResult.h
	include/alibabacloud/cms/model/PutEventRequest.h
	include/alibabacloud/cms/model/PutEventResult.h
	include/alibabacloud/cms/model/ListAlarmHistoryRequest.h
	include/alibabacloud/cms/model/ListAlarmHistoryResult.h
	include/alibabacloud/cms/model/NodeStatusListRequest.h
	include/alibabacloud/cms/model/NodeStatusListResult.h
	include/alibabacloud/cms/model/ListContactGroupRequest.h
	include/alibabacloud/cms/model/ListContactGroupResult.h
	include/alibabacloud/cms/model/GetMyGroupsRequest.h
	include/alibabacloud/cms/model/GetMyGroupsResult.h
	include/alibabacloud/cms/model/ListNotifyPolicyRequest.h
	include/alibabacloud/cms/model/ListNotifyPolicyResult.h
	include/alibabacloud/cms/model/UpdateAlarmRequest.h
	include/alibabacloud/cms/model/UpdateAlarmResult.h
	include/alibabacloud/cms/model/NodeProcessCreateRequest.h
	include/alibabacloud/cms/model/NodeProcessCreateResult.h
	include/alibabacloud/cms/model/EnableAlarmRequest.h
	include/alibabacloud/cms/model/EnableAlarmResult.h
	include/alibabacloud/cms/model/QueryCustomEventDetailRequest.h
	include/alibabacloud/cms/model/QueryCustomEventDetailResult.h
	include/alibabacloud/cms/CmsClient.h
	include/alibabacloud/cms/CmsExport.h
	include/alibabacloud/cms/CmsRequest.h
	)

set(cms_src
	src/model/ProfileSetRequest.cc
	src/model/ProfileSetResult.cc
	src/model/ListProductOfActiceAlertRequest.cc
	src/model/ListProductOfActiceAlertResult.cc
	src/model/DeleteCustomMetricRequest.cc
	src/model/DeleteCustomMetricResult.cc
	src/model/NodeUninstallRequest.cc
	src/model/NodeUninstallResult.cc
	src/model/QueryCustomEventCountRequest.cc
	src/model/QueryCustomEventCountResult.cc
	src/model/UpdateMyGroupInstancesRequest.cc
	src/model/UpdateMyGroupInstancesResult.cc
	src/model/ProfileGetRequest.cc
	src/model/ProfileGetResult.cc
	src/model/PutSystemEventRequest.cc
	src/model/PutSystemEventResult.cc
	src/model/QueryCustomMetricListRequest.cc
	src/model/QueryCustomMetricListResult.cc
	src/model/EnableActiveAlertRequest.cc
	src/model/EnableActiveAlertResult.cc
	src/model/QuerySystemEventDetailRequest.cc
	src/model/QuerySystemEventDetailResult.cc
	src/model/CreateNotifyPolicyRequest.cc
	src/model/CreateNotifyPolicyResult.cc
	src/model/DeleteAlarmRequest.cc
	src/model/DeleteAlarmResult.cc
	src/model/NodeListRequest.cc
	src/model/NodeListResult.cc
	src/model/NodeProcessesRequest.cc
	src/model/NodeProcessesResult.cc
	src/model/ListMyGroupCategoriesRequest.cc
	src/model/ListMyGroupCategoriesResult.cc
	src/model/QueryMetricListRequest.cc
	src/model/QueryMetricListResult.cc
	src/model/ListMyGroupInstancesDetailsRequest.cc
	src/model/ListMyGroupInstancesDetailsResult.cc
	src/model/DisableAlarmRequest.cc
	src/model/DisableAlarmResult.cc
	src/model/PutCustomMetricRequest.cc
	src/model/PutCustomMetricResult.cc
	src/model/DeleteMyGroupsRequest.cc
	src/model/DeleteMyGroupsResult.cc
	src/model/QueryMetricLastRequest.cc
	src/model/QueryMetricLastResult.cc
	src/model/QuerySystemEventHistogramRequest.cc
	src/model/QuerySystemEventHistogramResult.cc
	src/model/DescribeAlarmHistoryRequest.cc
	src/model/DescribeAlarmHistoryResult.cc
	src/model/NodeStatusRequest.cc
	src/model/NodeStatusResult.cc
	src/model/DeleteMyGroupInstancesRequest.cc
	src/model/DeleteMyGroupInstancesResult.cc
	src/model/ListProductOfActiveAlertRequest.cc
	src/model/ListProductOfActiveAlertResult.cc
	src/model/CreateMyGroupsRequest.cc
	src/model/CreateMyGroupsResult.cc
	src/model/CreateAlarmRequest.cc
	src/model/CreateAlarmResult.cc
	src/model/ListActiveAlertRuleRequest.cc
	src/model/ListActiveAlertRuleResult.cc
	src/model/ListMyGroupsRequest.cc
	src/model/ListMyGroupsResult.cc
	src/model/DeleteNotifyPolicyRequest.cc
	src/model/DeleteNotifyPolicyResult.cc
	src/model/AddMyGroupInstancesRequest.cc
	src/model/AddMyGroupInstancesResult.cc
	src/model/NodeProcessDeleteRequest.cc
	src/model/NodeProcessDeleteResult.cc
	src/model/UpdateMyGroupsRequest.cc
	src/model/UpdateMyGroupsResult.cc
	src/model/QuerySystemEventCountRequest.cc
	src/model/QuerySystemEventCountResult.cc
	src/model/ListMyGroupInstancesRequest.cc
	src/model/ListMyGroupInstancesResult.cc
	src/model/AccessKeyGetRequest.cc
	src/model/AccessKeyGetResult.cc
	src/model/EnableActiceAlertRequest.cc
	src/model/EnableActiceAlertResult.cc
	src/model/PutMetricDataRequest.cc
	src/model/PutMetricDataResult.cc
	src/model/DisableActiveAlertRequest.cc
	src/model/DisableActiveAlertResult.cc
	src/model/DisableActiceAlertRequest.cc
	src/model/DisableActiceAlertResult.cc
	src/model/ListAlarmRequest.cc
	src/model/ListAlarmResult.cc
	src/model/NodeInstallRequest.cc
	src/model/NodeInstallResult.cc
	src/model/QueryCustomEventHistogramRequest.cc
	src/model/QueryCustomEventHistogramResult.cc
	src/model/PutEventRequest.cc
	src/model/PutEventResult.cc
	src/model/ListAlarmHistoryRequest.cc
	src/model/ListAlarmHistoryResult.cc
	src/model/NodeStatusListRequest.cc
	src/model/NodeStatusListResult.cc
	src/model/ListContactGroupRequest.cc
	src/model/ListContactGroupResult.cc
	src/model/GetMyGroupsRequest.cc
	src/model/GetMyGroupsResult.cc
	src/model/ListNotifyPolicyRequest.cc
	src/model/ListNotifyPolicyResult.cc
	src/model/UpdateAlarmRequest.cc
	src/model/UpdateAlarmResult.cc
	src/model/NodeProcessCreateRequest.cc
	src/model/NodeProcessCreateResult.cc
	src/model/EnableAlarmRequest.cc
	src/model/EnableAlarmResult.cc
	src/model/QueryCustomEventDetailRequest.cc
	src/model/QueryCustomEventDetailResult.cc
	src/CmsClient.cc
	src/CmsRequest.cc
	)

add_library(cms ${LIB_TYPE} ${cms_public_header} ${cms_src})

set_target_properties(cms
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}cms
	PUBLIC_HEADER "${cms_public_header}"
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(cms
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_CMS_LIBRARY)
endif()

target_include_directories(cms
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(cms
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(cms
		jsoncpp)
	target_include_directories(cms
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(cms
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(cms
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(cms
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(cms
		jsoncpp)
endif()

install(TARGETS cms
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/cms
	)
