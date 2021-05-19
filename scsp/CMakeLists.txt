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

set(scsp_public_header 
	include/alibabacloud/scsp/ScspClient.h
	include/alibabacloud/scsp/ScspExport.h )

set(scsp_public_header_model 
	include/alibabacloud/scsp/model/AnswerCallRequest.h
	include/alibabacloud/scsp/model/AnswerCallResult.h
	include/alibabacloud/scsp/model/AppMessagePushRequest.h
	include/alibabacloud/scsp/model/AppMessagePushResult.h
	include/alibabacloud/scsp/model/AssignTicketRequest.h
	include/alibabacloud/scsp/model/AssignTicketResult.h
	include/alibabacloud/scsp/model/ChangeChatAgentStatusRequest.h
	include/alibabacloud/scsp/model/ChangeChatAgentStatusResult.h
	include/alibabacloud/scsp/model/CloseTicketRequest.h
	include/alibabacloud/scsp/model/CloseTicketResult.h
	include/alibabacloud/scsp/model/CreateAgentRequest.h
	include/alibabacloud/scsp/model/CreateAgentResult.h
	include/alibabacloud/scsp/model/CreateCustomerRequest.h
	include/alibabacloud/scsp/model/CreateCustomerResult.h
	include/alibabacloud/scsp/model/CreateEntityIvrRouteRequest.h
	include/alibabacloud/scsp/model/CreateEntityIvrRouteResult.h
	include/alibabacloud/scsp/model/CreateOuterCallCenterDataRequest.h
	include/alibabacloud/scsp/model/CreateOuterCallCenterDataResult.h
	include/alibabacloud/scsp/model/CreateRoleRequest.h
	include/alibabacloud/scsp/model/CreateRoleResult.h
	include/alibabacloud/scsp/model/CreateSkillGroupRequest.h
	include/alibabacloud/scsp/model/CreateSkillGroupResult.h
	include/alibabacloud/scsp/model/CreateThirdSsoAgentRequest.h
	include/alibabacloud/scsp/model/CreateThirdSsoAgentResult.h
	include/alibabacloud/scsp/model/CreateTicketRequest.h
	include/alibabacloud/scsp/model/CreateTicketResult.h
	include/alibabacloud/scsp/model/CreateTicketWithBizDataRequest.h
	include/alibabacloud/scsp/model/CreateTicketWithBizDataResult.h
	include/alibabacloud/scsp/model/DeleteAgentRequest.h
	include/alibabacloud/scsp/model/DeleteAgentResult.h
	include/alibabacloud/scsp/model/DeleteEntityRouteRequest.h
	include/alibabacloud/scsp/model/DeleteEntityRouteResult.h
	include/alibabacloud/scsp/model/DisableRoleRequest.h
	include/alibabacloud/scsp/model/DisableRoleResult.h
	include/alibabacloud/scsp/model/EditEntityRouteRequest.h
	include/alibabacloud/scsp/model/EditEntityRouteResult.h
	include/alibabacloud/scsp/model/EnableRoleRequest.h
	include/alibabacloud/scsp/model/EnableRoleResult.h
	include/alibabacloud/scsp/model/ExecuteActivityRequest.h
	include/alibabacloud/scsp/model/ExecuteActivityResult.h
	include/alibabacloud/scsp/model/FetchCallRequest.h
	include/alibabacloud/scsp/model/FetchCallResult.h
	include/alibabacloud/scsp/model/FinishHotlineServiceRequest.h
	include/alibabacloud/scsp/model/FinishHotlineServiceResult.h
	include/alibabacloud/scsp/model/GenerateWebSocketSignRequest.h
	include/alibabacloud/scsp/model/GenerateWebSocketSignResult.h
	include/alibabacloud/scsp/model/GetAgentRequest.h
	include/alibabacloud/scsp/model/GetAgentResult.h
	include/alibabacloud/scsp/model/GetAuthInfoRequest.h
	include/alibabacloud/scsp/model/GetAuthInfoResult.h
	include/alibabacloud/scsp/model/GetCMSIdByForeignIdRequest.h
	include/alibabacloud/scsp/model/GetCMSIdByForeignIdResult.h
	include/alibabacloud/scsp/model/GetCallsPerDayRequest.h
	include/alibabacloud/scsp/model/GetCallsPerDayResult.h
	include/alibabacloud/scsp/model/GetEntityRouteRequest.h
	include/alibabacloud/scsp/model/GetEntityRouteResult.h
	include/alibabacloud/scsp/model/GetEntityRouteListRequest.h
	include/alibabacloud/scsp/model/GetEntityRouteListResult.h
	include/alibabacloud/scsp/model/GetEntityTagRelationRequest.h
	include/alibabacloud/scsp/model/GetEntityTagRelationResult.h
	include/alibabacloud/scsp/model/GetGrantedRoleIdsRequest.h
	include/alibabacloud/scsp/model/GetGrantedRoleIdsResult.h
	include/alibabacloud/scsp/model/GetHotlineAgentDetailRequest.h
	include/alibabacloud/scsp/model/GetHotlineAgentDetailResult.h
	include/alibabacloud/scsp/model/GetHotlineAgentDetailReportRequest.h
	include/alibabacloud/scsp/model/GetHotlineAgentDetailReportResult.h
	include/alibabacloud/scsp/model/GetHotlineAgentStatusRequest.h
	include/alibabacloud/scsp/model/GetHotlineAgentStatusResult.h
	include/alibabacloud/scsp/model/GetHotlineGroupDetailReportRequest.h
	include/alibabacloud/scsp/model/GetHotlineGroupDetailReportResult.h
	include/alibabacloud/scsp/model/GetHotlineWaitingNumberRequest.h
	include/alibabacloud/scsp/model/GetHotlineWaitingNumberResult.h
	include/alibabacloud/scsp/model/GetNumLocationRequest.h
	include/alibabacloud/scsp/model/GetNumLocationResult.h
	include/alibabacloud/scsp/model/GetOutbounNumListRequest.h
	include/alibabacloud/scsp/model/GetOutbounNumListResult.h
	include/alibabacloud/scsp/model/GetOuterCallCenterDataListRequest.h
	include/alibabacloud/scsp/model/GetOuterCallCenterDataListResult.h
	include/alibabacloud/scsp/model/GetTagListRequest.h
	include/alibabacloud/scsp/model/GetTagListResult.h
	include/alibabacloud/scsp/model/GetTicketTemplateSchemaRequest.h
	include/alibabacloud/scsp/model/GetTicketTemplateSchemaResult.h
	include/alibabacloud/scsp/model/GetUserTokenRequest.h
	include/alibabacloud/scsp/model/GetUserTokenResult.h
	include/alibabacloud/scsp/model/GrantRolesRequest.h
	include/alibabacloud/scsp/model/GrantRolesResult.h
	include/alibabacloud/scsp/model/HangupCallRequest.h
	include/alibabacloud/scsp/model/HangupCallResult.h
	include/alibabacloud/scsp/model/HangupThirdCallRequest.h
	include/alibabacloud/scsp/model/HangupThirdCallResult.h
	include/alibabacloud/scsp/model/HoldCallRequest.h
	include/alibabacloud/scsp/model/HoldCallResult.h
	include/alibabacloud/scsp/model/JoinThirdCallRequest.h
	include/alibabacloud/scsp/model/JoinThirdCallResult.h
	include/alibabacloud/scsp/model/ListAgentBySkillGroupIdRequest.h
	include/alibabacloud/scsp/model/ListAgentBySkillGroupIdResult.h
	include/alibabacloud/scsp/model/ListHotlineRecordRequest.h
	include/alibabacloud/scsp/model/ListHotlineRecordResult.h
	include/alibabacloud/scsp/model/ListOutboundPhoneNumberRequest.h
	include/alibabacloud/scsp/model/ListOutboundPhoneNumberResult.h
	include/alibabacloud/scsp/model/ListSkillGroupRequest.h
	include/alibabacloud/scsp/model/ListSkillGroupResult.h
	include/alibabacloud/scsp/model/QueryHotlineSessionRequest.h
	include/alibabacloud/scsp/model/QueryHotlineSessionResult.h
	include/alibabacloud/scsp/model/QueryRingDetailListRequest.h
	include/alibabacloud/scsp/model/QueryRingDetailListResult.h
	include/alibabacloud/scsp/model/QueryServiceConfigRequest.h
	include/alibabacloud/scsp/model/QueryServiceConfigResult.h
	include/alibabacloud/scsp/model/QuerySkillGroupsRequest.h
	include/alibabacloud/scsp/model/QuerySkillGroupsResult.h
	include/alibabacloud/scsp/model/QueryTicketActionsRequest.h
	include/alibabacloud/scsp/model/QueryTicketActionsResult.h
	include/alibabacloud/scsp/model/QueryTicketCountRequest.h
	include/alibabacloud/scsp/model/QueryTicketCountResult.h
	include/alibabacloud/scsp/model/QueryTicketsRequest.h
	include/alibabacloud/scsp/model/QueryTicketsResult.h
	include/alibabacloud/scsp/model/RemoveSkillGroupRequest.h
	include/alibabacloud/scsp/model/RemoveSkillGroupResult.h
	include/alibabacloud/scsp/model/SearchTicketByIdRequest.h
	include/alibabacloud/scsp/model/SearchTicketByIdResult.h
	include/alibabacloud/scsp/model/SearchTicketByPhoneRequest.h
	include/alibabacloud/scsp/model/SearchTicketByPhoneResult.h
	include/alibabacloud/scsp/model/SearchTicketListRequest.h
	include/alibabacloud/scsp/model/SearchTicketListResult.h
	include/alibabacloud/scsp/model/SendHotlineHeartBeatRequest.h
	include/alibabacloud/scsp/model/SendHotlineHeartBeatResult.h
	include/alibabacloud/scsp/model/SendOutboundCommandRequest.h
	include/alibabacloud/scsp/model/SendOutboundCommandResult.h
	include/alibabacloud/scsp/model/StartCallRequest.h
	include/alibabacloud/scsp/model/StartCallResult.h
	include/alibabacloud/scsp/model/StartCallV2Request.h
	include/alibabacloud/scsp/model/StartCallV2Result.h
	include/alibabacloud/scsp/model/StartChatWorkRequest.h
	include/alibabacloud/scsp/model/StartChatWorkResult.h
	include/alibabacloud/scsp/model/StartHotlineServiceRequest.h
	include/alibabacloud/scsp/model/StartHotlineServiceResult.h
	include/alibabacloud/scsp/model/SuspendHotlineServiceRequest.h
	include/alibabacloud/scsp/model/SuspendHotlineServiceResult.h
	include/alibabacloud/scsp/model/TransferCallToAgentRequest.h
	include/alibabacloud/scsp/model/TransferCallToAgentResult.h
	include/alibabacloud/scsp/model/TransferCallToPhoneRequest.h
	include/alibabacloud/scsp/model/TransferCallToPhoneResult.h
	include/alibabacloud/scsp/model/TransferCallToSkillGroupRequest.h
	include/alibabacloud/scsp/model/TransferCallToSkillGroupResult.h
	include/alibabacloud/scsp/model/TransferToThirdCallRequest.h
	include/alibabacloud/scsp/model/TransferToThirdCallResult.h
	include/alibabacloud/scsp/model/UpdateAgentRequest.h
	include/alibabacloud/scsp/model/UpdateAgentResult.h
	include/alibabacloud/scsp/model/UpdateCustomerRequest.h
	include/alibabacloud/scsp/model/UpdateCustomerResult.h
	include/alibabacloud/scsp/model/UpdateEntityTagRelationRequest.h
	include/alibabacloud/scsp/model/UpdateEntityTagRelationResult.h
	include/alibabacloud/scsp/model/UpdateRingStatusRequest.h
	include/alibabacloud/scsp/model/UpdateRingStatusResult.h
	include/alibabacloud/scsp/model/UpdateRoleRequest.h
	include/alibabacloud/scsp/model/UpdateRoleResult.h
	include/alibabacloud/scsp/model/UpdateSkillGroupRequest.h
	include/alibabacloud/scsp/model/UpdateSkillGroupResult.h
	include/alibabacloud/scsp/model/UpdateTicketRequest.h
	include/alibabacloud/scsp/model/UpdateTicketResult.h )

set(scsp_src 
	src/ScspClient.cc
	src/model/AnswerCallRequest.cc
	src/model/AnswerCallResult.cc
	src/model/AppMessagePushRequest.cc
	src/model/AppMessagePushResult.cc
	src/model/AssignTicketRequest.cc
	src/model/AssignTicketResult.cc
	src/model/ChangeChatAgentStatusRequest.cc
	src/model/ChangeChatAgentStatusResult.cc
	src/model/CloseTicketRequest.cc
	src/model/CloseTicketResult.cc
	src/model/CreateAgentRequest.cc
	src/model/CreateAgentResult.cc
	src/model/CreateCustomerRequest.cc
	src/model/CreateCustomerResult.cc
	src/model/CreateEntityIvrRouteRequest.cc
	src/model/CreateEntityIvrRouteResult.cc
	src/model/CreateOuterCallCenterDataRequest.cc
	src/model/CreateOuterCallCenterDataResult.cc
	src/model/CreateRoleRequest.cc
	src/model/CreateRoleResult.cc
	src/model/CreateSkillGroupRequest.cc
	src/model/CreateSkillGroupResult.cc
	src/model/CreateThirdSsoAgentRequest.cc
	src/model/CreateThirdSsoAgentResult.cc
	src/model/CreateTicketRequest.cc
	src/model/CreateTicketResult.cc
	src/model/CreateTicketWithBizDataRequest.cc
	src/model/CreateTicketWithBizDataResult.cc
	src/model/DeleteAgentRequest.cc
	src/model/DeleteAgentResult.cc
	src/model/DeleteEntityRouteRequest.cc
	src/model/DeleteEntityRouteResult.cc
	src/model/DisableRoleRequest.cc
	src/model/DisableRoleResult.cc
	src/model/EditEntityRouteRequest.cc
	src/model/EditEntityRouteResult.cc
	src/model/EnableRoleRequest.cc
	src/model/EnableRoleResult.cc
	src/model/ExecuteActivityRequest.cc
	src/model/ExecuteActivityResult.cc
	src/model/FetchCallRequest.cc
	src/model/FetchCallResult.cc
	src/model/FinishHotlineServiceRequest.cc
	src/model/FinishHotlineServiceResult.cc
	src/model/GenerateWebSocketSignRequest.cc
	src/model/GenerateWebSocketSignResult.cc
	src/model/GetAgentRequest.cc
	src/model/GetAgentResult.cc
	src/model/GetAuthInfoRequest.cc
	src/model/GetAuthInfoResult.cc
	src/model/GetCMSIdByForeignIdRequest.cc
	src/model/GetCMSIdByForeignIdResult.cc
	src/model/GetCallsPerDayRequest.cc
	src/model/GetCallsPerDayResult.cc
	src/model/GetEntityRouteRequest.cc
	src/model/GetEntityRouteResult.cc
	src/model/GetEntityRouteListRequest.cc
	src/model/GetEntityRouteListResult.cc
	src/model/GetEntityTagRelationRequest.cc
	src/model/GetEntityTagRelationResult.cc
	src/model/GetGrantedRoleIdsRequest.cc
	src/model/GetGrantedRoleIdsResult.cc
	src/model/GetHotlineAgentDetailRequest.cc
	src/model/GetHotlineAgentDetailResult.cc
	src/model/GetHotlineAgentDetailReportRequest.cc
	src/model/GetHotlineAgentDetailReportResult.cc
	src/model/GetHotlineAgentStatusRequest.cc
	src/model/GetHotlineAgentStatusResult.cc
	src/model/GetHotlineGroupDetailReportRequest.cc
	src/model/GetHotlineGroupDetailReportResult.cc
	src/model/GetHotlineWaitingNumberRequest.cc
	src/model/GetHotlineWaitingNumberResult.cc
	src/model/GetNumLocationRequest.cc
	src/model/GetNumLocationResult.cc
	src/model/GetOutbounNumListRequest.cc
	src/model/GetOutbounNumListResult.cc
	src/model/GetOuterCallCenterDataListRequest.cc
	src/model/GetOuterCallCenterDataListResult.cc
	src/model/GetTagListRequest.cc
	src/model/GetTagListResult.cc
	src/model/GetTicketTemplateSchemaRequest.cc
	src/model/GetTicketTemplateSchemaResult.cc
	src/model/GetUserTokenRequest.cc
	src/model/GetUserTokenResult.cc
	src/model/GrantRolesRequest.cc
	src/model/GrantRolesResult.cc
	src/model/HangupCallRequest.cc
	src/model/HangupCallResult.cc
	src/model/HangupThirdCallRequest.cc
	src/model/HangupThirdCallResult.cc
	src/model/HoldCallRequest.cc
	src/model/HoldCallResult.cc
	src/model/JoinThirdCallRequest.cc
	src/model/JoinThirdCallResult.cc
	src/model/ListAgentBySkillGroupIdRequest.cc
	src/model/ListAgentBySkillGroupIdResult.cc
	src/model/ListHotlineRecordRequest.cc
	src/model/ListHotlineRecordResult.cc
	src/model/ListOutboundPhoneNumberRequest.cc
	src/model/ListOutboundPhoneNumberResult.cc
	src/model/ListSkillGroupRequest.cc
	src/model/ListSkillGroupResult.cc
	src/model/QueryHotlineSessionRequest.cc
	src/model/QueryHotlineSessionResult.cc
	src/model/QueryRingDetailListRequest.cc
	src/model/QueryRingDetailListResult.cc
	src/model/QueryServiceConfigRequest.cc
	src/model/QueryServiceConfigResult.cc
	src/model/QuerySkillGroupsRequest.cc
	src/model/QuerySkillGroupsResult.cc
	src/model/QueryTicketActionsRequest.cc
	src/model/QueryTicketActionsResult.cc
	src/model/QueryTicketCountRequest.cc
	src/model/QueryTicketCountResult.cc
	src/model/QueryTicketsRequest.cc
	src/model/QueryTicketsResult.cc
	src/model/RemoveSkillGroupRequest.cc
	src/model/RemoveSkillGroupResult.cc
	src/model/SearchTicketByIdRequest.cc
	src/model/SearchTicketByIdResult.cc
	src/model/SearchTicketByPhoneRequest.cc
	src/model/SearchTicketByPhoneResult.cc
	src/model/SearchTicketListRequest.cc
	src/model/SearchTicketListResult.cc
	src/model/SendHotlineHeartBeatRequest.cc
	src/model/SendHotlineHeartBeatResult.cc
	src/model/SendOutboundCommandRequest.cc
	src/model/SendOutboundCommandResult.cc
	src/model/StartCallRequest.cc
	src/model/StartCallResult.cc
	src/model/StartCallV2Request.cc
	src/model/StartCallV2Result.cc
	src/model/StartChatWorkRequest.cc
	src/model/StartChatWorkResult.cc
	src/model/StartHotlineServiceRequest.cc
	src/model/StartHotlineServiceResult.cc
	src/model/SuspendHotlineServiceRequest.cc
	src/model/SuspendHotlineServiceResult.cc
	src/model/TransferCallToAgentRequest.cc
	src/model/TransferCallToAgentResult.cc
	src/model/TransferCallToPhoneRequest.cc
	src/model/TransferCallToPhoneResult.cc
	src/model/TransferCallToSkillGroupRequest.cc
	src/model/TransferCallToSkillGroupResult.cc
	src/model/TransferToThirdCallRequest.cc
	src/model/TransferToThirdCallResult.cc
	src/model/UpdateAgentRequest.cc
	src/model/UpdateAgentResult.cc
	src/model/UpdateCustomerRequest.cc
	src/model/UpdateCustomerResult.cc
	src/model/UpdateEntityTagRelationRequest.cc
	src/model/UpdateEntityTagRelationResult.cc
	src/model/UpdateRingStatusRequest.cc
	src/model/UpdateRingStatusResult.cc
	src/model/UpdateRoleRequest.cc
	src/model/UpdateRoleResult.cc
	src/model/UpdateSkillGroupRequest.cc
	src/model/UpdateSkillGroupResult.cc
	src/model/UpdateTicketRequest.cc
	src/model/UpdateTicketResult.cc )

add_library(scsp ${LIB_TYPE}
	${scsp_public_header}
	${scsp_public_header_model}
	${scsp_src})

set_target_properties(scsp
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}scsp
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(scsp
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_SCSP_LIBRARY)
endif()

target_include_directories(scsp
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(scsp
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(scsp
		jsoncpp)
	target_include_directories(scsp
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(scsp
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(scsp
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(scsp
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(scsp
		jsoncpp)
endif()

install(FILES ${scsp_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/scsp)
install(FILES ${scsp_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/scsp/model)
install(TARGETS scsp
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)