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

set(ccc_public_header 
	include/alibabacloud/ccc/CCCClient.h
	include/alibabacloud/ccc/CCCExport.h )

set(ccc_public_header_model 
	include/alibabacloud/ccc/model/AnswerCallRequest.h
	include/alibabacloud/ccc/model/AnswerCallResult.h
	include/alibabacloud/ccc/model/BargeInCallRequest.h
	include/alibabacloud/ccc/model/BargeInCallResult.h
	include/alibabacloud/ccc/model/BlindTransferRequest.h
	include/alibabacloud/ccc/model/BlindTransferResult.h
	include/alibabacloud/ccc/model/CancelAttendedTransferRequest.h
	include/alibabacloud/ccc/model/CancelAttendedTransferResult.h
	include/alibabacloud/ccc/model/ChangeWorkModeRequest.h
	include/alibabacloud/ccc/model/ChangeWorkModeResult.h
	include/alibabacloud/ccc/model/CompleteAttendedTransferRequest.h
	include/alibabacloud/ccc/model/CompleteAttendedTransferResult.h
	include/alibabacloud/ccc/model/GetLoginDetailsRequest.h
	include/alibabacloud/ccc/model/GetLoginDetailsResult.h
	include/alibabacloud/ccc/model/GetNumberLocationRequest.h
	include/alibabacloud/ccc/model/GetNumberLocationResult.h
	include/alibabacloud/ccc/model/GetTurnCredentialsRequest.h
	include/alibabacloud/ccc/model/GetTurnCredentialsResult.h
	include/alibabacloud/ccc/model/GetTurnServerListRequest.h
	include/alibabacloud/ccc/model/GetTurnServerListResult.h
	include/alibabacloud/ccc/model/HoldCallRequest.h
	include/alibabacloud/ccc/model/HoldCallResult.h
	include/alibabacloud/ccc/model/InitiateAttendedTransferRequest.h
	include/alibabacloud/ccc/model/InitiateAttendedTransferResult.h
	include/alibabacloud/ccc/model/InterceptCallRequest.h
	include/alibabacloud/ccc/model/InterceptCallResult.h
	include/alibabacloud/ccc/model/LaunchAuthenticationRequest.h
	include/alibabacloud/ccc/model/LaunchAuthenticationResult.h
	include/alibabacloud/ccc/model/LaunchSurveyRequest.h
	include/alibabacloud/ccc/model/LaunchSurveyResult.h
	include/alibabacloud/ccc/model/ListBriefSkillGroupsRequest.h
	include/alibabacloud/ccc/model/ListBriefSkillGroupsResult.h
	include/alibabacloud/ccc/model/ListCallDetailRecordsRequest.h
	include/alibabacloud/ccc/model/ListCallDetailRecordsResult.h
	include/alibabacloud/ccc/model/ListConfigItemsRequest.h
	include/alibabacloud/ccc/model/ListConfigItemsResult.h
	include/alibabacloud/ccc/model/ListDevicesRequest.h
	include/alibabacloud/ccc/model/ListDevicesResult.h
	include/alibabacloud/ccc/model/ListHistoricalAgentReportRequest.h
	include/alibabacloud/ccc/model/ListHistoricalAgentReportResult.h
	include/alibabacloud/ccc/model/ListOutboundNumbersOfUserRequest.h
	include/alibabacloud/ccc/model/ListOutboundNumbersOfUserResult.h
	include/alibabacloud/ccc/model/ListPrivilegesOfUserRequest.h
	include/alibabacloud/ccc/model/ListPrivilegesOfUserResult.h
	include/alibabacloud/ccc/model/ListRealtimeAgentStatesRequest.h
	include/alibabacloud/ccc/model/ListRealtimeAgentStatesResult.h
	include/alibabacloud/ccc/model/ListRecentCallDetailRecordsRequest.h
	include/alibabacloud/ccc/model/ListRecentCallDetailRecordsResult.h
	include/alibabacloud/ccc/model/ListSkillLevelsOfUserRequest.h
	include/alibabacloud/ccc/model/ListSkillLevelsOfUserResult.h
	include/alibabacloud/ccc/model/MakeCallRequest.h
	include/alibabacloud/ccc/model/MakeCallResult.h
	include/alibabacloud/ccc/model/MonitorCallRequest.h
	include/alibabacloud/ccc/model/MonitorCallResult.h
	include/alibabacloud/ccc/model/MuteCallRequest.h
	include/alibabacloud/ccc/model/MuteCallResult.h
	include/alibabacloud/ccc/model/PickOutboundNumbersRequest.h
	include/alibabacloud/ccc/model/PickOutboundNumbersResult.h
	include/alibabacloud/ccc/model/PollUserStatusRequest.h
	include/alibabacloud/ccc/model/PollUserStatusResult.h
	include/alibabacloud/ccc/model/ReadyForServiceRequest.h
	include/alibabacloud/ccc/model/ReadyForServiceResult.h
	include/alibabacloud/ccc/model/RegisterDeviceRequest.h
	include/alibabacloud/ccc/model/RegisterDeviceResult.h
	include/alibabacloud/ccc/model/ReleaseCallRequest.h
	include/alibabacloud/ccc/model/ReleaseCallResult.h
	include/alibabacloud/ccc/model/ResetAgentStateRequest.h
	include/alibabacloud/ccc/model/ResetAgentStateResult.h
	include/alibabacloud/ccc/model/RetrieveCallRequest.h
	include/alibabacloud/ccc/model/RetrieveCallResult.h
	include/alibabacloud/ccc/model/SendDtmfSignalingRequest.h
	include/alibabacloud/ccc/model/SendDtmfSignalingResult.h
	include/alibabacloud/ccc/model/SignInGroupRequest.h
	include/alibabacloud/ccc/model/SignInGroupResult.h
	include/alibabacloud/ccc/model/SignOutGroupRequest.h
	include/alibabacloud/ccc/model/SignOutGroupResult.h
	include/alibabacloud/ccc/model/TakeBreakRequest.h
	include/alibabacloud/ccc/model/TakeBreakResult.h
	include/alibabacloud/ccc/model/UnmuteCallRequest.h
	include/alibabacloud/ccc/model/UnmuteCallResult.h )

set(ccc_src 
	src/CCCClient.cc
	src/model/AnswerCallRequest.cc
	src/model/AnswerCallResult.cc
	src/model/BargeInCallRequest.cc
	src/model/BargeInCallResult.cc
	src/model/BlindTransferRequest.cc
	src/model/BlindTransferResult.cc
	src/model/CancelAttendedTransferRequest.cc
	src/model/CancelAttendedTransferResult.cc
	src/model/ChangeWorkModeRequest.cc
	src/model/ChangeWorkModeResult.cc
	src/model/CompleteAttendedTransferRequest.cc
	src/model/CompleteAttendedTransferResult.cc
	src/model/GetLoginDetailsRequest.cc
	src/model/GetLoginDetailsResult.cc
	src/model/GetNumberLocationRequest.cc
	src/model/GetNumberLocationResult.cc
	src/model/GetTurnCredentialsRequest.cc
	src/model/GetTurnCredentialsResult.cc
	src/model/GetTurnServerListRequest.cc
	src/model/GetTurnServerListResult.cc
	src/model/HoldCallRequest.cc
	src/model/HoldCallResult.cc
	src/model/InitiateAttendedTransferRequest.cc
	src/model/InitiateAttendedTransferResult.cc
	src/model/InterceptCallRequest.cc
	src/model/InterceptCallResult.cc
	src/model/LaunchAuthenticationRequest.cc
	src/model/LaunchAuthenticationResult.cc
	src/model/LaunchSurveyRequest.cc
	src/model/LaunchSurveyResult.cc
	src/model/ListBriefSkillGroupsRequest.cc
	src/model/ListBriefSkillGroupsResult.cc
	src/model/ListCallDetailRecordsRequest.cc
	src/model/ListCallDetailRecordsResult.cc
	src/model/ListConfigItemsRequest.cc
	src/model/ListConfigItemsResult.cc
	src/model/ListDevicesRequest.cc
	src/model/ListDevicesResult.cc
	src/model/ListHistoricalAgentReportRequest.cc
	src/model/ListHistoricalAgentReportResult.cc
	src/model/ListOutboundNumbersOfUserRequest.cc
	src/model/ListOutboundNumbersOfUserResult.cc
	src/model/ListPrivilegesOfUserRequest.cc
	src/model/ListPrivilegesOfUserResult.cc
	src/model/ListRealtimeAgentStatesRequest.cc
	src/model/ListRealtimeAgentStatesResult.cc
	src/model/ListRecentCallDetailRecordsRequest.cc
	src/model/ListRecentCallDetailRecordsResult.cc
	src/model/ListSkillLevelsOfUserRequest.cc
	src/model/ListSkillLevelsOfUserResult.cc
	src/model/MakeCallRequest.cc
	src/model/MakeCallResult.cc
	src/model/MonitorCallRequest.cc
	src/model/MonitorCallResult.cc
	src/model/MuteCallRequest.cc
	src/model/MuteCallResult.cc
	src/model/PickOutboundNumbersRequest.cc
	src/model/PickOutboundNumbersResult.cc
	src/model/PollUserStatusRequest.cc
	src/model/PollUserStatusResult.cc
	src/model/ReadyForServiceRequest.cc
	src/model/ReadyForServiceResult.cc
	src/model/RegisterDeviceRequest.cc
	src/model/RegisterDeviceResult.cc
	src/model/ReleaseCallRequest.cc
	src/model/ReleaseCallResult.cc
	src/model/ResetAgentStateRequest.cc
	src/model/ResetAgentStateResult.cc
	src/model/RetrieveCallRequest.cc
	src/model/RetrieveCallResult.cc
	src/model/SendDtmfSignalingRequest.cc
	src/model/SendDtmfSignalingResult.cc
	src/model/SignInGroupRequest.cc
	src/model/SignInGroupResult.cc
	src/model/SignOutGroupRequest.cc
	src/model/SignOutGroupResult.cc
	src/model/TakeBreakRequest.cc
	src/model/TakeBreakResult.cc
	src/model/UnmuteCallRequest.cc
	src/model/UnmuteCallResult.cc )

add_library(ccc ${LIB_TYPE}
	${ccc_public_header}
	${ccc_public_header_model}
	${ccc_src})

set_target_properties(ccc
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ccc
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(ccc
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_CCC_LIBRARY)
endif()

target_include_directories(ccc
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(ccc
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(ccc
		jsoncpp)
	target_include_directories(ccc
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(ccc
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(ccc
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(ccc
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(ccc
		jsoncpp)
endif()

install(FILES ${ccc_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ccc)
install(FILES ${ccc_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ccc/model)
install(TARGETS ccc
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)