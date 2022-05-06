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

set(rtc_public_header 
	include/alibabacloud/rtc/RtcClient.h
	include/alibabacloud/rtc/RtcExport.h )

set(rtc_public_header_model 
	include/alibabacloud/rtc/model/AddRecordTemplateRequest.h
	include/alibabacloud/rtc/model/AddRecordTemplateResult.h
	include/alibabacloud/rtc/model/CreateAutoLiveStreamRuleRequest.h
	include/alibabacloud/rtc/model/CreateAutoLiveStreamRuleResult.h
	include/alibabacloud/rtc/model/CreateEventSubscribeRequest.h
	include/alibabacloud/rtc/model/CreateEventSubscribeResult.h
	include/alibabacloud/rtc/model/CreateMPULayoutRequest.h
	include/alibabacloud/rtc/model/CreateMPULayoutResult.h
	include/alibabacloud/rtc/model/DeleteAutoLiveStreamRuleRequest.h
	include/alibabacloud/rtc/model/DeleteAutoLiveStreamRuleResult.h
	include/alibabacloud/rtc/model/DeleteChannelRequest.h
	include/alibabacloud/rtc/model/DeleteChannelResult.h
	include/alibabacloud/rtc/model/DeleteEventSubscribeRequest.h
	include/alibabacloud/rtc/model/DeleteEventSubscribeResult.h
	include/alibabacloud/rtc/model/DeleteMPULayoutRequest.h
	include/alibabacloud/rtc/model/DeleteMPULayoutResult.h
	include/alibabacloud/rtc/model/DeleteRecordTemplateRequest.h
	include/alibabacloud/rtc/model/DeleteRecordTemplateResult.h
	include/alibabacloud/rtc/model/DescribeAppKeyRequest.h
	include/alibabacloud/rtc/model/DescribeAppKeyResult.h
	include/alibabacloud/rtc/model/DescribeAppsRequest.h
	include/alibabacloud/rtc/model/DescribeAppsResult.h
	include/alibabacloud/rtc/model/DescribeAutoLiveStreamRuleRequest.h
	include/alibabacloud/rtc/model/DescribeAutoLiveStreamRuleResult.h
	include/alibabacloud/rtc/model/DescribeChannelParticipantsRequest.h
	include/alibabacloud/rtc/model/DescribeChannelParticipantsResult.h
	include/alibabacloud/rtc/model/DescribeChannelUsersRequest.h
	include/alibabacloud/rtc/model/DescribeChannelUsersResult.h
	include/alibabacloud/rtc/model/DescribeMPULayoutInfoListRequest.h
	include/alibabacloud/rtc/model/DescribeMPULayoutInfoListResult.h
	include/alibabacloud/rtc/model/DescribeRecordFilesRequest.h
	include/alibabacloud/rtc/model/DescribeRecordFilesResult.h
	include/alibabacloud/rtc/model/DescribeRecordTemplatesRequest.h
	include/alibabacloud/rtc/model/DescribeRecordTemplatesResult.h
	include/alibabacloud/rtc/model/DescribeUserInfoInChannelRequest.h
	include/alibabacloud/rtc/model/DescribeUserInfoInChannelResult.h
	include/alibabacloud/rtc/model/DisableAutoLiveStreamRuleRequest.h
	include/alibabacloud/rtc/model/DisableAutoLiveStreamRuleResult.h
	include/alibabacloud/rtc/model/EnableAutoLiveStreamRuleRequest.h
	include/alibabacloud/rtc/model/EnableAutoLiveStreamRuleResult.h
	include/alibabacloud/rtc/model/GetMPUTaskStatusRequest.h
	include/alibabacloud/rtc/model/GetMPUTaskStatusResult.h
	include/alibabacloud/rtc/model/ModifyAppRequest.h
	include/alibabacloud/rtc/model/ModifyAppResult.h
	include/alibabacloud/rtc/model/ModifyMPULayoutRequest.h
	include/alibabacloud/rtc/model/ModifyMPULayoutResult.h
	include/alibabacloud/rtc/model/RemoveTerminalsRequest.h
	include/alibabacloud/rtc/model/RemoveTerminalsResult.h
	include/alibabacloud/rtc/model/StartMPUTaskRequest.h
	include/alibabacloud/rtc/model/StartMPUTaskResult.h
	include/alibabacloud/rtc/model/StartRecordTaskRequest.h
	include/alibabacloud/rtc/model/StartRecordTaskResult.h
	include/alibabacloud/rtc/model/StopMPUTaskRequest.h
	include/alibabacloud/rtc/model/StopMPUTaskResult.h
	include/alibabacloud/rtc/model/StopRecordTaskRequest.h
	include/alibabacloud/rtc/model/StopRecordTaskResult.h
	include/alibabacloud/rtc/model/UpdateAutoLiveStreamRuleRequest.h
	include/alibabacloud/rtc/model/UpdateAutoLiveStreamRuleResult.h
	include/alibabacloud/rtc/model/UpdateMPUTaskRequest.h
	include/alibabacloud/rtc/model/UpdateMPUTaskResult.h
	include/alibabacloud/rtc/model/UpdateRecordTaskRequest.h
	include/alibabacloud/rtc/model/UpdateRecordTaskResult.h
	include/alibabacloud/rtc/model/UpdateRecordTemplateRequest.h
	include/alibabacloud/rtc/model/UpdateRecordTemplateResult.h )

set(rtc_src 
	src/RtcClient.cc
	src/model/AddRecordTemplateRequest.cc
	src/model/AddRecordTemplateResult.cc
	src/model/CreateAutoLiveStreamRuleRequest.cc
	src/model/CreateAutoLiveStreamRuleResult.cc
	src/model/CreateEventSubscribeRequest.cc
	src/model/CreateEventSubscribeResult.cc
	src/model/CreateMPULayoutRequest.cc
	src/model/CreateMPULayoutResult.cc
	src/model/DeleteAutoLiveStreamRuleRequest.cc
	src/model/DeleteAutoLiveStreamRuleResult.cc
	src/model/DeleteChannelRequest.cc
	src/model/DeleteChannelResult.cc
	src/model/DeleteEventSubscribeRequest.cc
	src/model/DeleteEventSubscribeResult.cc
	src/model/DeleteMPULayoutRequest.cc
	src/model/DeleteMPULayoutResult.cc
	src/model/DeleteRecordTemplateRequest.cc
	src/model/DeleteRecordTemplateResult.cc
	src/model/DescribeAppKeyRequest.cc
	src/model/DescribeAppKeyResult.cc
	src/model/DescribeAppsRequest.cc
	src/model/DescribeAppsResult.cc
	src/model/DescribeAutoLiveStreamRuleRequest.cc
	src/model/DescribeAutoLiveStreamRuleResult.cc
	src/model/DescribeChannelParticipantsRequest.cc
	src/model/DescribeChannelParticipantsResult.cc
	src/model/DescribeChannelUsersRequest.cc
	src/model/DescribeChannelUsersResult.cc
	src/model/DescribeMPULayoutInfoListRequest.cc
	src/model/DescribeMPULayoutInfoListResult.cc
	src/model/DescribeRecordFilesRequest.cc
	src/model/DescribeRecordFilesResult.cc
	src/model/DescribeRecordTemplatesRequest.cc
	src/model/DescribeRecordTemplatesResult.cc
	src/model/DescribeUserInfoInChannelRequest.cc
	src/model/DescribeUserInfoInChannelResult.cc
	src/model/DisableAutoLiveStreamRuleRequest.cc
	src/model/DisableAutoLiveStreamRuleResult.cc
	src/model/EnableAutoLiveStreamRuleRequest.cc
	src/model/EnableAutoLiveStreamRuleResult.cc
	src/model/GetMPUTaskStatusRequest.cc
	src/model/GetMPUTaskStatusResult.cc
	src/model/ModifyAppRequest.cc
	src/model/ModifyAppResult.cc
	src/model/ModifyMPULayoutRequest.cc
	src/model/ModifyMPULayoutResult.cc
	src/model/RemoveTerminalsRequest.cc
	src/model/RemoveTerminalsResult.cc
	src/model/StartMPUTaskRequest.cc
	src/model/StartMPUTaskResult.cc
	src/model/StartRecordTaskRequest.cc
	src/model/StartRecordTaskResult.cc
	src/model/StopMPUTaskRequest.cc
	src/model/StopMPUTaskResult.cc
	src/model/StopRecordTaskRequest.cc
	src/model/StopRecordTaskResult.cc
	src/model/UpdateAutoLiveStreamRuleRequest.cc
	src/model/UpdateAutoLiveStreamRuleResult.cc
	src/model/UpdateMPUTaskRequest.cc
	src/model/UpdateMPUTaskResult.cc
	src/model/UpdateRecordTaskRequest.cc
	src/model/UpdateRecordTaskResult.cc
	src/model/UpdateRecordTemplateRequest.cc
	src/model/UpdateRecordTemplateResult.cc )

add_library(rtc ${LIB_TYPE}
	${rtc_public_header}
	${rtc_public_header_model}
	${rtc_src})

set_target_properties(rtc
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}rtc
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(rtc
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_RTC_LIBRARY)
endif()

target_include_directories(rtc
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(rtc
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(rtc
		jsoncpp)
	target_include_directories(rtc
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(rtc
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(rtc
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(rtc
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(rtc
		jsoncpp)
endif()

install(FILES ${rtc_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/rtc)
install(FILES ${rtc_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/rtc/model)
install(TARGETS rtc
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)