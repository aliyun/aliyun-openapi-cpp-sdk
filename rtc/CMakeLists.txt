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
	include/alibabacloud/rtc/model/CreateChannelRequest.h
	include/alibabacloud/rtc/model/CreateChannelResult.h
	include/alibabacloud/rtc/model/CreateChannelTokenRequest.h
	include/alibabacloud/rtc/model/CreateChannelTokenResult.h
	include/alibabacloud/rtc/model/CreateConferenceRequest.h
	include/alibabacloud/rtc/model/CreateConferenceResult.h
	include/alibabacloud/rtc/model/CreateTemplateRequest.h
	include/alibabacloud/rtc/model/CreateTemplateResult.h
	include/alibabacloud/rtc/model/DeleteChannelRequest.h
	include/alibabacloud/rtc/model/DeleteChannelResult.h
	include/alibabacloud/rtc/model/DeleteConferenceRequest.h
	include/alibabacloud/rtc/model/DeleteConferenceResult.h
	include/alibabacloud/rtc/model/DeleteTemplateRequest.h
	include/alibabacloud/rtc/model/DeleteTemplateResult.h
	include/alibabacloud/rtc/model/DescribeAppsRequest.h
	include/alibabacloud/rtc/model/DescribeAppsResult.h
	include/alibabacloud/rtc/model/DescribeChannelParticipantsRequest.h
	include/alibabacloud/rtc/model/DescribeChannelParticipantsResult.h
	include/alibabacloud/rtc/model/DescribeConferenceAuthInfoRequest.h
	include/alibabacloud/rtc/model/DescribeConferenceAuthInfoResult.h
	include/alibabacloud/rtc/model/DescribeRealTimeRecordDetailRequest.h
	include/alibabacloud/rtc/model/DescribeRealTimeRecordDetailResult.h
	include/alibabacloud/rtc/model/DescribeRealTimeRecordListRequest.h
	include/alibabacloud/rtc/model/DescribeRealTimeRecordListResult.h
	include/alibabacloud/rtc/model/DescribeRecordDetailRequest.h
	include/alibabacloud/rtc/model/DescribeRecordDetailResult.h
	include/alibabacloud/rtc/model/DescribeRecordListRequest.h
	include/alibabacloud/rtc/model/DescribeRecordListResult.h
	include/alibabacloud/rtc/model/DescribeRtcChannelCntDataRequest.h
	include/alibabacloud/rtc/model/DescribeRtcChannelCntDataResult.h
	include/alibabacloud/rtc/model/DescribeRtcChannelListRequest.h
	include/alibabacloud/rtc/model/DescribeRtcChannelListResult.h
	include/alibabacloud/rtc/model/DescribeRtcChannelMetricRequest.h
	include/alibabacloud/rtc/model/DescribeRtcChannelMetricResult.h
	include/alibabacloud/rtc/model/DescribeRtcChannelUserListRequest.h
	include/alibabacloud/rtc/model/DescribeRtcChannelUserListResult.h
	include/alibabacloud/rtc/model/DescribeRtcDurationDataRequest.h
	include/alibabacloud/rtc/model/DescribeRtcDurationDataResult.h
	include/alibabacloud/rtc/model/DescribeRtcPeakChannelCntDataRequest.h
	include/alibabacloud/rtc/model/DescribeRtcPeakChannelCntDataResult.h
	include/alibabacloud/rtc/model/DescribeRtcPeakUserCntDataRequest.h
	include/alibabacloud/rtc/model/DescribeRtcPeakUserCntDataResult.h
	include/alibabacloud/rtc/model/DescribeRtcUserCntDataRequest.h
	include/alibabacloud/rtc/model/DescribeRtcUserCntDataResult.h
	include/alibabacloud/rtc/model/DescribeStatisRequest.h
	include/alibabacloud/rtc/model/DescribeStatisResult.h
	include/alibabacloud/rtc/model/GetAllTemplateRequest.h
	include/alibabacloud/rtc/model/GetAllTemplateResult.h
	include/alibabacloud/rtc/model/GetMPUTaskStatusRequest.h
	include/alibabacloud/rtc/model/GetMPUTaskStatusResult.h
	include/alibabacloud/rtc/model/GetTaskParamRequest.h
	include/alibabacloud/rtc/model/GetTaskParamResult.h
	include/alibabacloud/rtc/model/GetTaskStatusRequest.h
	include/alibabacloud/rtc/model/GetTaskStatusResult.h
	include/alibabacloud/rtc/model/GetTemplateInfoRequest.h
	include/alibabacloud/rtc/model/GetTemplateInfoResult.h
	include/alibabacloud/rtc/model/ModifyAppRequest.h
	include/alibabacloud/rtc/model/ModifyAppResult.h
	include/alibabacloud/rtc/model/ModifyConferenceRequest.h
	include/alibabacloud/rtc/model/ModifyConferenceResult.h
	include/alibabacloud/rtc/model/MuteAudioRequest.h
	include/alibabacloud/rtc/model/MuteAudioResult.h
	include/alibabacloud/rtc/model/MuteAudioAllRequest.h
	include/alibabacloud/rtc/model/MuteAudioAllResult.h
	include/alibabacloud/rtc/model/ReceiveNotifyRequest.h
	include/alibabacloud/rtc/model/ReceiveNotifyResult.h
	include/alibabacloud/rtc/model/RemoveParticipantsRequest.h
	include/alibabacloud/rtc/model/RemoveParticipantsResult.h
	include/alibabacloud/rtc/model/RemoveTerminalsRequest.h
	include/alibabacloud/rtc/model/RemoveTerminalsResult.h
	include/alibabacloud/rtc/model/StartMPUTaskRequest.h
	include/alibabacloud/rtc/model/StartMPUTaskResult.h
	include/alibabacloud/rtc/model/StartTaskRequest.h
	include/alibabacloud/rtc/model/StartTaskResult.h
	include/alibabacloud/rtc/model/StopMPUTaskRequest.h
	include/alibabacloud/rtc/model/StopMPUTaskResult.h
	include/alibabacloud/rtc/model/StopTaskRequest.h
	include/alibabacloud/rtc/model/StopTaskResult.h
	include/alibabacloud/rtc/model/UnmuteAudioRequest.h
	include/alibabacloud/rtc/model/UnmuteAudioResult.h
	include/alibabacloud/rtc/model/UnmuteAudioAllRequest.h
	include/alibabacloud/rtc/model/UnmuteAudioAllResult.h
	include/alibabacloud/rtc/model/UpdateChannelRequest.h
	include/alibabacloud/rtc/model/UpdateChannelResult.h
	include/alibabacloud/rtc/model/UpdateMPULayoutRequest.h
	include/alibabacloud/rtc/model/UpdateMPULayoutResult.h
	include/alibabacloud/rtc/model/UpdateTaskParamRequest.h
	include/alibabacloud/rtc/model/UpdateTaskParamResult.h )

set(rtc_src 
	src/RtcClient.cc
	src/model/CreateChannelRequest.cc
	src/model/CreateChannelResult.cc
	src/model/CreateChannelTokenRequest.cc
	src/model/CreateChannelTokenResult.cc
	src/model/CreateConferenceRequest.cc
	src/model/CreateConferenceResult.cc
	src/model/CreateTemplateRequest.cc
	src/model/CreateTemplateResult.cc
	src/model/DeleteChannelRequest.cc
	src/model/DeleteChannelResult.cc
	src/model/DeleteConferenceRequest.cc
	src/model/DeleteConferenceResult.cc
	src/model/DeleteTemplateRequest.cc
	src/model/DeleteTemplateResult.cc
	src/model/DescribeAppsRequest.cc
	src/model/DescribeAppsResult.cc
	src/model/DescribeChannelParticipantsRequest.cc
	src/model/DescribeChannelParticipantsResult.cc
	src/model/DescribeConferenceAuthInfoRequest.cc
	src/model/DescribeConferenceAuthInfoResult.cc
	src/model/DescribeRealTimeRecordDetailRequest.cc
	src/model/DescribeRealTimeRecordDetailResult.cc
	src/model/DescribeRealTimeRecordListRequest.cc
	src/model/DescribeRealTimeRecordListResult.cc
	src/model/DescribeRecordDetailRequest.cc
	src/model/DescribeRecordDetailResult.cc
	src/model/DescribeRecordListRequest.cc
	src/model/DescribeRecordListResult.cc
	src/model/DescribeRtcChannelCntDataRequest.cc
	src/model/DescribeRtcChannelCntDataResult.cc
	src/model/DescribeRtcChannelListRequest.cc
	src/model/DescribeRtcChannelListResult.cc
	src/model/DescribeRtcChannelMetricRequest.cc
	src/model/DescribeRtcChannelMetricResult.cc
	src/model/DescribeRtcChannelUserListRequest.cc
	src/model/DescribeRtcChannelUserListResult.cc
	src/model/DescribeRtcDurationDataRequest.cc
	src/model/DescribeRtcDurationDataResult.cc
	src/model/DescribeRtcPeakChannelCntDataRequest.cc
	src/model/DescribeRtcPeakChannelCntDataResult.cc
	src/model/DescribeRtcPeakUserCntDataRequest.cc
	src/model/DescribeRtcPeakUserCntDataResult.cc
	src/model/DescribeRtcUserCntDataRequest.cc
	src/model/DescribeRtcUserCntDataResult.cc
	src/model/DescribeStatisRequest.cc
	src/model/DescribeStatisResult.cc
	src/model/GetAllTemplateRequest.cc
	src/model/GetAllTemplateResult.cc
	src/model/GetMPUTaskStatusRequest.cc
	src/model/GetMPUTaskStatusResult.cc
	src/model/GetTaskParamRequest.cc
	src/model/GetTaskParamResult.cc
	src/model/GetTaskStatusRequest.cc
	src/model/GetTaskStatusResult.cc
	src/model/GetTemplateInfoRequest.cc
	src/model/GetTemplateInfoResult.cc
	src/model/ModifyAppRequest.cc
	src/model/ModifyAppResult.cc
	src/model/ModifyConferenceRequest.cc
	src/model/ModifyConferenceResult.cc
	src/model/MuteAudioRequest.cc
	src/model/MuteAudioResult.cc
	src/model/MuteAudioAllRequest.cc
	src/model/MuteAudioAllResult.cc
	src/model/ReceiveNotifyRequest.cc
	src/model/ReceiveNotifyResult.cc
	src/model/RemoveParticipantsRequest.cc
	src/model/RemoveParticipantsResult.cc
	src/model/RemoveTerminalsRequest.cc
	src/model/RemoveTerminalsResult.cc
	src/model/StartMPUTaskRequest.cc
	src/model/StartMPUTaskResult.cc
	src/model/StartTaskRequest.cc
	src/model/StartTaskResult.cc
	src/model/StopMPUTaskRequest.cc
	src/model/StopMPUTaskResult.cc
	src/model/StopTaskRequest.cc
	src/model/StopTaskResult.cc
	src/model/UnmuteAudioRequest.cc
	src/model/UnmuteAudioResult.cc
	src/model/UnmuteAudioAllRequest.cc
	src/model/UnmuteAudioAllResult.cc
	src/model/UpdateChannelRequest.cc
	src/model/UpdateChannelResult.cc
	src/model/UpdateMPULayoutRequest.cc
	src/model/UpdateMPULayoutResult.cc
	src/model/UpdateTaskParamRequest.cc
	src/model/UpdateTaskParamResult.cc )

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