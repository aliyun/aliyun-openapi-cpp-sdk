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
	include/alibabacloud/ccc/model/AddNumbersToSkillGroupRequest.h
	include/alibabacloud/ccc/model/AddNumbersToSkillGroupResult.h
	include/alibabacloud/ccc/model/AddPersonalNumbersToUserRequest.h
	include/alibabacloud/ccc/model/AddPersonalNumbersToUserResult.h
	include/alibabacloud/ccc/model/AddPhoneNumberToSkillGroupsRequest.h
	include/alibabacloud/ccc/model/AddPhoneNumberToSkillGroupsResult.h
	include/alibabacloud/ccc/model/AddPhoneNumbersRequest.h
	include/alibabacloud/ccc/model/AddPhoneNumbersResult.h
	include/alibabacloud/ccc/model/AddSkillGroupsToUserRequest.h
	include/alibabacloud/ccc/model/AddSkillGroupsToUserResult.h
	include/alibabacloud/ccc/model/AddUsersToSkillGroupRequest.h
	include/alibabacloud/ccc/model/AddUsersToSkillGroupResult.h
	include/alibabacloud/ccc/model/AnswerCallRequest.h
	include/alibabacloud/ccc/model/AnswerCallResult.h
	include/alibabacloud/ccc/model/AssignUsersRequest.h
	include/alibabacloud/ccc/model/AssignUsersResult.h
	include/alibabacloud/ccc/model/BargeInCallRequest.h
	include/alibabacloud/ccc/model/BargeInCallResult.h
	include/alibabacloud/ccc/model/BlindTransferRequest.h
	include/alibabacloud/ccc/model/BlindTransferResult.h
	include/alibabacloud/ccc/model/CancelAttendedTransferRequest.h
	include/alibabacloud/ccc/model/CancelAttendedTransferResult.h
	include/alibabacloud/ccc/model/ChangeWorkModeRequest.h
	include/alibabacloud/ccc/model/ChangeWorkModeResult.h
	include/alibabacloud/ccc/model/CoachCallRequest.h
	include/alibabacloud/ccc/model/CoachCallResult.h
	include/alibabacloud/ccc/model/CompleteAttendedTransferRequest.h
	include/alibabacloud/ccc/model/CompleteAttendedTransferResult.h
	include/alibabacloud/ccc/model/CreateSkillGroupRequest.h
	include/alibabacloud/ccc/model/CreateSkillGroupResult.h
	include/alibabacloud/ccc/model/CreateUserRequest.h
	include/alibabacloud/ccc/model/CreateUserResult.h
	include/alibabacloud/ccc/model/DeleteSkillGroupRequest.h
	include/alibabacloud/ccc/model/DeleteSkillGroupResult.h
	include/alibabacloud/ccc/model/GetCallDetailRecordRequest.h
	include/alibabacloud/ccc/model/GetCallDetailRecordResult.h
	include/alibabacloud/ccc/model/GetHistoricalCallerReportRequest.h
	include/alibabacloud/ccc/model/GetHistoricalCallerReportResult.h
	include/alibabacloud/ccc/model/GetHistoricalInstanceReportRequest.h
	include/alibabacloud/ccc/model/GetHistoricalInstanceReportResult.h
	include/alibabacloud/ccc/model/GetInstanceRequest.h
	include/alibabacloud/ccc/model/GetInstanceResult.h
	include/alibabacloud/ccc/model/GetInstanceTrendingReportRequest.h
	include/alibabacloud/ccc/model/GetInstanceTrendingReportResult.h
	include/alibabacloud/ccc/model/GetLoginDetailsRequest.h
	include/alibabacloud/ccc/model/GetLoginDetailsResult.h
	include/alibabacloud/ccc/model/GetMonoRecordingRequest.h
	include/alibabacloud/ccc/model/GetMonoRecordingResult.h
	include/alibabacloud/ccc/model/GetMultiChannelRecordingRequest.h
	include/alibabacloud/ccc/model/GetMultiChannelRecordingResult.h
	include/alibabacloud/ccc/model/GetNumberLocationRequest.h
	include/alibabacloud/ccc/model/GetNumberLocationResult.h
	include/alibabacloud/ccc/model/GetRealtimeInstanceStatesRequest.h
	include/alibabacloud/ccc/model/GetRealtimeInstanceStatesResult.h
	include/alibabacloud/ccc/model/GetTurnCredentialsRequest.h
	include/alibabacloud/ccc/model/GetTurnCredentialsResult.h
	include/alibabacloud/ccc/model/GetTurnServerListRequest.h
	include/alibabacloud/ccc/model/GetTurnServerListResult.h
	include/alibabacloud/ccc/model/GetUserRequest.h
	include/alibabacloud/ccc/model/GetUserResult.h
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
	include/alibabacloud/ccc/model/ListAgentStateLogsRequest.h
	include/alibabacloud/ccc/model/ListAgentStateLogsResult.h
	include/alibabacloud/ccc/model/ListBriefSkillGroupsRequest.h
	include/alibabacloud/ccc/model/ListBriefSkillGroupsResult.h
	include/alibabacloud/ccc/model/ListCallDetailRecordsRequest.h
	include/alibabacloud/ccc/model/ListCallDetailRecordsResult.h
	include/alibabacloud/ccc/model/ListConfigItemsRequest.h
	include/alibabacloud/ccc/model/ListConfigItemsResult.h
	include/alibabacloud/ccc/model/ListContactFlowsRequest.h
	include/alibabacloud/ccc/model/ListContactFlowsResult.h
	include/alibabacloud/ccc/model/ListDevicesRequest.h
	include/alibabacloud/ccc/model/ListDevicesResult.h
	include/alibabacloud/ccc/model/ListHistoricalAgentReportRequest.h
	include/alibabacloud/ccc/model/ListHistoricalAgentReportResult.h
	include/alibabacloud/ccc/model/ListHistoricalSkillGroupReportRequest.h
	include/alibabacloud/ccc/model/ListHistoricalSkillGroupReportResult.h
	include/alibabacloud/ccc/model/ListInstancesOfUserRequest.h
	include/alibabacloud/ccc/model/ListInstancesOfUserResult.h
	include/alibabacloud/ccc/model/ListIntervalAgentReportRequest.h
	include/alibabacloud/ccc/model/ListIntervalAgentReportResult.h
	include/alibabacloud/ccc/model/ListIntervalInstanceReportRequest.h
	include/alibabacloud/ccc/model/ListIntervalInstanceReportResult.h
	include/alibabacloud/ccc/model/ListIntervalSkillGroupReportRequest.h
	include/alibabacloud/ccc/model/ListIntervalSkillGroupReportResult.h
	include/alibabacloud/ccc/model/ListIvrTrackingDetailsRequest.h
	include/alibabacloud/ccc/model/ListIvrTrackingDetailsResult.h
	include/alibabacloud/ccc/model/ListOutboundNumbersOfUserRequest.h
	include/alibabacloud/ccc/model/ListOutboundNumbersOfUserResult.h
	include/alibabacloud/ccc/model/ListPersonalNumbersOfUserRequest.h
	include/alibabacloud/ccc/model/ListPersonalNumbersOfUserResult.h
	include/alibabacloud/ccc/model/ListPhoneNumbersRequest.h
	include/alibabacloud/ccc/model/ListPhoneNumbersResult.h
	include/alibabacloud/ccc/model/ListPhoneNumbersOfSkillGroupRequest.h
	include/alibabacloud/ccc/model/ListPhoneNumbersOfSkillGroupResult.h
	include/alibabacloud/ccc/model/ListPrivilegesOfUserRequest.h
	include/alibabacloud/ccc/model/ListPrivilegesOfUserResult.h
	include/alibabacloud/ccc/model/ListRealtimeAgentStatesRequest.h
	include/alibabacloud/ccc/model/ListRealtimeAgentStatesResult.h
	include/alibabacloud/ccc/model/ListRealtimeSkillGroupStatesRequest.h
	include/alibabacloud/ccc/model/ListRealtimeSkillGroupStatesResult.h
	include/alibabacloud/ccc/model/ListRecentCallDetailRecordsRequest.h
	include/alibabacloud/ccc/model/ListRecentCallDetailRecordsResult.h
	include/alibabacloud/ccc/model/ListRolesRequest.h
	include/alibabacloud/ccc/model/ListRolesResult.h
	include/alibabacloud/ccc/model/ListSkillGroupsRequest.h
	include/alibabacloud/ccc/model/ListSkillGroupsResult.h
	include/alibabacloud/ccc/model/ListSkillLevelsOfUserRequest.h
	include/alibabacloud/ccc/model/ListSkillLevelsOfUserResult.h
	include/alibabacloud/ccc/model/ListUserLevelsOfSkillGroupRequest.h
	include/alibabacloud/ccc/model/ListUserLevelsOfSkillGroupResult.h
	include/alibabacloud/ccc/model/ListUsersRequest.h
	include/alibabacloud/ccc/model/ListUsersResult.h
	include/alibabacloud/ccc/model/MakeCallRequest.h
	include/alibabacloud/ccc/model/MakeCallResult.h
	include/alibabacloud/ccc/model/ModifyPhoneNumberRequest.h
	include/alibabacloud/ccc/model/ModifyPhoneNumberResult.h
	include/alibabacloud/ccc/model/ModifySkillGroupRequest.h
	include/alibabacloud/ccc/model/ModifySkillGroupResult.h
	include/alibabacloud/ccc/model/ModifySkillLevelsOfUserRequest.h
	include/alibabacloud/ccc/model/ModifySkillLevelsOfUserResult.h
	include/alibabacloud/ccc/model/ModifyUserRequest.h
	include/alibabacloud/ccc/model/ModifyUserResult.h
	include/alibabacloud/ccc/model/ModifyUserLevelsOfSkillGroupRequest.h
	include/alibabacloud/ccc/model/ModifyUserLevelsOfSkillGroupResult.h
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
	include/alibabacloud/ccc/model/RemovePersonalNumbersFromUserRequest.h
	include/alibabacloud/ccc/model/RemovePersonalNumbersFromUserResult.h
	include/alibabacloud/ccc/model/RemovePhoneNumberFromSkillGroupsRequest.h
	include/alibabacloud/ccc/model/RemovePhoneNumberFromSkillGroupsResult.h
	include/alibabacloud/ccc/model/RemovePhoneNumbersRequest.h
	include/alibabacloud/ccc/model/RemovePhoneNumbersResult.h
	include/alibabacloud/ccc/model/RemovePhoneNumbersFromSkillGroupRequest.h
	include/alibabacloud/ccc/model/RemovePhoneNumbersFromSkillGroupResult.h
	include/alibabacloud/ccc/model/RemoveSkillGroupsFromUserRequest.h
	include/alibabacloud/ccc/model/RemoveSkillGroupsFromUserResult.h
	include/alibabacloud/ccc/model/RemoveUsersRequest.h
	include/alibabacloud/ccc/model/RemoveUsersResult.h
	include/alibabacloud/ccc/model/RemoveUsersFromSkillGroupRequest.h
	include/alibabacloud/ccc/model/RemoveUsersFromSkillGroupResult.h
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
	include/alibabacloud/ccc/model/StartBack2BackCallRequest.h
	include/alibabacloud/ccc/model/StartBack2BackCallResult.h
	include/alibabacloud/ccc/model/TakeBreakRequest.h
	include/alibabacloud/ccc/model/TakeBreakResult.h
	include/alibabacloud/ccc/model/UnmuteCallRequest.h
	include/alibabacloud/ccc/model/UnmuteCallResult.h )

set(ccc_src 
	src/CCCClient.cc
	src/model/AddNumbersToSkillGroupRequest.cc
	src/model/AddNumbersToSkillGroupResult.cc
	src/model/AddPersonalNumbersToUserRequest.cc
	src/model/AddPersonalNumbersToUserResult.cc
	src/model/AddPhoneNumberToSkillGroupsRequest.cc
	src/model/AddPhoneNumberToSkillGroupsResult.cc
	src/model/AddPhoneNumbersRequest.cc
	src/model/AddPhoneNumbersResult.cc
	src/model/AddSkillGroupsToUserRequest.cc
	src/model/AddSkillGroupsToUserResult.cc
	src/model/AddUsersToSkillGroupRequest.cc
	src/model/AddUsersToSkillGroupResult.cc
	src/model/AnswerCallRequest.cc
	src/model/AnswerCallResult.cc
	src/model/AssignUsersRequest.cc
	src/model/AssignUsersResult.cc
	src/model/BargeInCallRequest.cc
	src/model/BargeInCallResult.cc
	src/model/BlindTransferRequest.cc
	src/model/BlindTransferResult.cc
	src/model/CancelAttendedTransferRequest.cc
	src/model/CancelAttendedTransferResult.cc
	src/model/ChangeWorkModeRequest.cc
	src/model/ChangeWorkModeResult.cc
	src/model/CoachCallRequest.cc
	src/model/CoachCallResult.cc
	src/model/CompleteAttendedTransferRequest.cc
	src/model/CompleteAttendedTransferResult.cc
	src/model/CreateSkillGroupRequest.cc
	src/model/CreateSkillGroupResult.cc
	src/model/CreateUserRequest.cc
	src/model/CreateUserResult.cc
	src/model/DeleteSkillGroupRequest.cc
	src/model/DeleteSkillGroupResult.cc
	src/model/GetCallDetailRecordRequest.cc
	src/model/GetCallDetailRecordResult.cc
	src/model/GetHistoricalCallerReportRequest.cc
	src/model/GetHistoricalCallerReportResult.cc
	src/model/GetHistoricalInstanceReportRequest.cc
	src/model/GetHistoricalInstanceReportResult.cc
	src/model/GetInstanceRequest.cc
	src/model/GetInstanceResult.cc
	src/model/GetInstanceTrendingReportRequest.cc
	src/model/GetInstanceTrendingReportResult.cc
	src/model/GetLoginDetailsRequest.cc
	src/model/GetLoginDetailsResult.cc
	src/model/GetMonoRecordingRequest.cc
	src/model/GetMonoRecordingResult.cc
	src/model/GetMultiChannelRecordingRequest.cc
	src/model/GetMultiChannelRecordingResult.cc
	src/model/GetNumberLocationRequest.cc
	src/model/GetNumberLocationResult.cc
	src/model/GetRealtimeInstanceStatesRequest.cc
	src/model/GetRealtimeInstanceStatesResult.cc
	src/model/GetTurnCredentialsRequest.cc
	src/model/GetTurnCredentialsResult.cc
	src/model/GetTurnServerListRequest.cc
	src/model/GetTurnServerListResult.cc
	src/model/GetUserRequest.cc
	src/model/GetUserResult.cc
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
	src/model/ListAgentStateLogsRequest.cc
	src/model/ListAgentStateLogsResult.cc
	src/model/ListBriefSkillGroupsRequest.cc
	src/model/ListBriefSkillGroupsResult.cc
	src/model/ListCallDetailRecordsRequest.cc
	src/model/ListCallDetailRecordsResult.cc
	src/model/ListConfigItemsRequest.cc
	src/model/ListConfigItemsResult.cc
	src/model/ListContactFlowsRequest.cc
	src/model/ListContactFlowsResult.cc
	src/model/ListDevicesRequest.cc
	src/model/ListDevicesResult.cc
	src/model/ListHistoricalAgentReportRequest.cc
	src/model/ListHistoricalAgentReportResult.cc
	src/model/ListHistoricalSkillGroupReportRequest.cc
	src/model/ListHistoricalSkillGroupReportResult.cc
	src/model/ListInstancesOfUserRequest.cc
	src/model/ListInstancesOfUserResult.cc
	src/model/ListIntervalAgentReportRequest.cc
	src/model/ListIntervalAgentReportResult.cc
	src/model/ListIntervalInstanceReportRequest.cc
	src/model/ListIntervalInstanceReportResult.cc
	src/model/ListIntervalSkillGroupReportRequest.cc
	src/model/ListIntervalSkillGroupReportResult.cc
	src/model/ListIvrTrackingDetailsRequest.cc
	src/model/ListIvrTrackingDetailsResult.cc
	src/model/ListOutboundNumbersOfUserRequest.cc
	src/model/ListOutboundNumbersOfUserResult.cc
	src/model/ListPersonalNumbersOfUserRequest.cc
	src/model/ListPersonalNumbersOfUserResult.cc
	src/model/ListPhoneNumbersRequest.cc
	src/model/ListPhoneNumbersResult.cc
	src/model/ListPhoneNumbersOfSkillGroupRequest.cc
	src/model/ListPhoneNumbersOfSkillGroupResult.cc
	src/model/ListPrivilegesOfUserRequest.cc
	src/model/ListPrivilegesOfUserResult.cc
	src/model/ListRealtimeAgentStatesRequest.cc
	src/model/ListRealtimeAgentStatesResult.cc
	src/model/ListRealtimeSkillGroupStatesRequest.cc
	src/model/ListRealtimeSkillGroupStatesResult.cc
	src/model/ListRecentCallDetailRecordsRequest.cc
	src/model/ListRecentCallDetailRecordsResult.cc
	src/model/ListRolesRequest.cc
	src/model/ListRolesResult.cc
	src/model/ListSkillGroupsRequest.cc
	src/model/ListSkillGroupsResult.cc
	src/model/ListSkillLevelsOfUserRequest.cc
	src/model/ListSkillLevelsOfUserResult.cc
	src/model/ListUserLevelsOfSkillGroupRequest.cc
	src/model/ListUserLevelsOfSkillGroupResult.cc
	src/model/ListUsersRequest.cc
	src/model/ListUsersResult.cc
	src/model/MakeCallRequest.cc
	src/model/MakeCallResult.cc
	src/model/ModifyPhoneNumberRequest.cc
	src/model/ModifyPhoneNumberResult.cc
	src/model/ModifySkillGroupRequest.cc
	src/model/ModifySkillGroupResult.cc
	src/model/ModifySkillLevelsOfUserRequest.cc
	src/model/ModifySkillLevelsOfUserResult.cc
	src/model/ModifyUserRequest.cc
	src/model/ModifyUserResult.cc
	src/model/ModifyUserLevelsOfSkillGroupRequest.cc
	src/model/ModifyUserLevelsOfSkillGroupResult.cc
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
	src/model/RemovePersonalNumbersFromUserRequest.cc
	src/model/RemovePersonalNumbersFromUserResult.cc
	src/model/RemovePhoneNumberFromSkillGroupsRequest.cc
	src/model/RemovePhoneNumberFromSkillGroupsResult.cc
	src/model/RemovePhoneNumbersRequest.cc
	src/model/RemovePhoneNumbersResult.cc
	src/model/RemovePhoneNumbersFromSkillGroupRequest.cc
	src/model/RemovePhoneNumbersFromSkillGroupResult.cc
	src/model/RemoveSkillGroupsFromUserRequest.cc
	src/model/RemoveSkillGroupsFromUserResult.cc
	src/model/RemoveUsersRequest.cc
	src/model/RemoveUsersResult.cc
	src/model/RemoveUsersFromSkillGroupRequest.cc
	src/model/RemoveUsersFromSkillGroupResult.cc
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
	src/model/StartBack2BackCallRequest.cc
	src/model/StartBack2BackCallResult.cc
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