/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_SCSP_SCSPCLIENT_H_
#define ALIBABACLOUD_SCSP_SCSPCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "ScspExport.h"
#include "model/AnswerCallRequest.h"
#include "model/AnswerCallResult.h"
#include "model/AppMessagePushRequest.h"
#include "model/AppMessagePushResult.h"
#include "model/AssignTicketRequest.h"
#include "model/AssignTicketResult.h"
#include "model/ChangeChatAgentStatusRequest.h"
#include "model/ChangeChatAgentStatusResult.h"
#include "model/CloseTicketRequest.h"
#include "model/CloseTicketResult.h"
#include "model/CreateAgentRequest.h"
#include "model/CreateAgentResult.h"
#include "model/CreateCustomerRequest.h"
#include "model/CreateCustomerResult.h"
#include "model/CreateEntityIvrRouteRequest.h"
#include "model/CreateEntityIvrRouteResult.h"
#include "model/CreateOuterCallCenterDataRequest.h"
#include "model/CreateOuterCallCenterDataResult.h"
#include "model/CreateRoleRequest.h"
#include "model/CreateRoleResult.h"
#include "model/CreateSkillGroupRequest.h"
#include "model/CreateSkillGroupResult.h"
#include "model/CreateThirdSsoAgentRequest.h"
#include "model/CreateThirdSsoAgentResult.h"
#include "model/CreateTicketRequest.h"
#include "model/CreateTicketResult.h"
#include "model/CreateTicketWithBizDataRequest.h"
#include "model/CreateTicketWithBizDataResult.h"
#include "model/DeleteAgentRequest.h"
#include "model/DeleteAgentResult.h"
#include "model/DeleteEntityRouteRequest.h"
#include "model/DeleteEntityRouteResult.h"
#include "model/DisableRoleRequest.h"
#include "model/DisableRoleResult.h"
#include "model/EditEntityRouteRequest.h"
#include "model/EditEntityRouteResult.h"
#include "model/EnableRoleRequest.h"
#include "model/EnableRoleResult.h"
#include "model/ExecuteActivityRequest.h"
#include "model/ExecuteActivityResult.h"
#include "model/FetchCallRequest.h"
#include "model/FetchCallResult.h"
#include "model/FinishHotlineServiceRequest.h"
#include "model/FinishHotlineServiceResult.h"
#include "model/GenerateWebSocketSignRequest.h"
#include "model/GenerateWebSocketSignResult.h"
#include "model/GetAgentRequest.h"
#include "model/GetAgentResult.h"
#include "model/GetAuthInfoRequest.h"
#include "model/GetAuthInfoResult.h"
#include "model/GetCMSIdByForeignIdRequest.h"
#include "model/GetCMSIdByForeignIdResult.h"
#include "model/GetCallsPerDayRequest.h"
#include "model/GetCallsPerDayResult.h"
#include "model/GetEntityRouteRequest.h"
#include "model/GetEntityRouteResult.h"
#include "model/GetEntityRouteListRequest.h"
#include "model/GetEntityRouteListResult.h"
#include "model/GetEntityTagRelationRequest.h"
#include "model/GetEntityTagRelationResult.h"
#include "model/GetGrantedRoleIdsRequest.h"
#include "model/GetGrantedRoleIdsResult.h"
#include "model/GetHotlineAgentDetailRequest.h"
#include "model/GetHotlineAgentDetailResult.h"
#include "model/GetHotlineAgentDetailReportRequest.h"
#include "model/GetHotlineAgentDetailReportResult.h"
#include "model/GetHotlineAgentStatusRequest.h"
#include "model/GetHotlineAgentStatusResult.h"
#include "model/GetHotlineGroupDetailReportRequest.h"
#include "model/GetHotlineGroupDetailReportResult.h"
#include "model/GetHotlineWaitingNumberRequest.h"
#include "model/GetHotlineWaitingNumberResult.h"
#include "model/GetNumLocationRequest.h"
#include "model/GetNumLocationResult.h"
#include "model/GetOutbounNumListRequest.h"
#include "model/GetOutbounNumListResult.h"
#include "model/GetOuterCallCenterDataListRequest.h"
#include "model/GetOuterCallCenterDataListResult.h"
#include "model/GetTagListRequest.h"
#include "model/GetTagListResult.h"
#include "model/GetTicketTemplateSchemaRequest.h"
#include "model/GetTicketTemplateSchemaResult.h"
#include "model/GetUserTokenRequest.h"
#include "model/GetUserTokenResult.h"
#include "model/GrantRolesRequest.h"
#include "model/GrantRolesResult.h"
#include "model/HangupCallRequest.h"
#include "model/HangupCallResult.h"
#include "model/HangupThirdCallRequest.h"
#include "model/HangupThirdCallResult.h"
#include "model/HoldCallRequest.h"
#include "model/HoldCallResult.h"
#include "model/JoinThirdCallRequest.h"
#include "model/JoinThirdCallResult.h"
#include "model/ListAgentBySkillGroupIdRequest.h"
#include "model/ListAgentBySkillGroupIdResult.h"
#include "model/ListHotlineRecordRequest.h"
#include "model/ListHotlineRecordResult.h"
#include "model/ListOutboundPhoneNumberRequest.h"
#include "model/ListOutboundPhoneNumberResult.h"
#include "model/ListSkillGroupRequest.h"
#include "model/ListSkillGroupResult.h"
#include "model/QueryHotlineSessionRequest.h"
#include "model/QueryHotlineSessionResult.h"
#include "model/QueryRingDetailListRequest.h"
#include "model/QueryRingDetailListResult.h"
#include "model/QueryServiceConfigRequest.h"
#include "model/QueryServiceConfigResult.h"
#include "model/QuerySkillGroupsRequest.h"
#include "model/QuerySkillGroupsResult.h"
#include "model/QueryTicketActionsRequest.h"
#include "model/QueryTicketActionsResult.h"
#include "model/QueryTicketCountRequest.h"
#include "model/QueryTicketCountResult.h"
#include "model/QueryTicketsRequest.h"
#include "model/QueryTicketsResult.h"
#include "model/RemoveSkillGroupRequest.h"
#include "model/RemoveSkillGroupResult.h"
#include "model/SearchTicketByIdRequest.h"
#include "model/SearchTicketByIdResult.h"
#include "model/SearchTicketByPhoneRequest.h"
#include "model/SearchTicketByPhoneResult.h"
#include "model/SearchTicketListRequest.h"
#include "model/SearchTicketListResult.h"
#include "model/SendHotlineHeartBeatRequest.h"
#include "model/SendHotlineHeartBeatResult.h"
#include "model/SendOutboundCommandRequest.h"
#include "model/SendOutboundCommandResult.h"
#include "model/StartCallRequest.h"
#include "model/StartCallResult.h"
#include "model/StartCallV2Request.h"
#include "model/StartCallV2Result.h"
#include "model/StartChatWorkRequest.h"
#include "model/StartChatWorkResult.h"
#include "model/StartHotlineServiceRequest.h"
#include "model/StartHotlineServiceResult.h"
#include "model/SuspendHotlineServiceRequest.h"
#include "model/SuspendHotlineServiceResult.h"
#include "model/TransferCallToAgentRequest.h"
#include "model/TransferCallToAgentResult.h"
#include "model/TransferCallToPhoneRequest.h"
#include "model/TransferCallToPhoneResult.h"
#include "model/TransferCallToSkillGroupRequest.h"
#include "model/TransferCallToSkillGroupResult.h"
#include "model/TransferToThirdCallRequest.h"
#include "model/TransferToThirdCallResult.h"
#include "model/UpdateAgentRequest.h"
#include "model/UpdateAgentResult.h"
#include "model/UpdateCustomerRequest.h"
#include "model/UpdateCustomerResult.h"
#include "model/UpdateEntityTagRelationRequest.h"
#include "model/UpdateEntityTagRelationResult.h"
#include "model/UpdateRingStatusRequest.h"
#include "model/UpdateRingStatusResult.h"
#include "model/UpdateRoleRequest.h"
#include "model/UpdateRoleResult.h"
#include "model/UpdateSkillGroupRequest.h"
#include "model/UpdateSkillGroupResult.h"
#include "model/UpdateTicketRequest.h"
#include "model/UpdateTicketResult.h"


namespace AlibabaCloud
{
	namespace Scsp
	{
		class ALIBABACLOUD_SCSP_EXPORT ScspClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AnswerCallResult> AnswerCallOutcome;
			typedef std::future<AnswerCallOutcome> AnswerCallOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::AnswerCallRequest&, const AnswerCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AnswerCallAsyncHandler;
			typedef Outcome<Error, Model::AppMessagePushResult> AppMessagePushOutcome;
			typedef std::future<AppMessagePushOutcome> AppMessagePushOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::AppMessagePushRequest&, const AppMessagePushOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AppMessagePushAsyncHandler;
			typedef Outcome<Error, Model::AssignTicketResult> AssignTicketOutcome;
			typedef std::future<AssignTicketOutcome> AssignTicketOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::AssignTicketRequest&, const AssignTicketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssignTicketAsyncHandler;
			typedef Outcome<Error, Model::ChangeChatAgentStatusResult> ChangeChatAgentStatusOutcome;
			typedef std::future<ChangeChatAgentStatusOutcome> ChangeChatAgentStatusOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::ChangeChatAgentStatusRequest&, const ChangeChatAgentStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeChatAgentStatusAsyncHandler;
			typedef Outcome<Error, Model::CloseTicketResult> CloseTicketOutcome;
			typedef std::future<CloseTicketOutcome> CloseTicketOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::CloseTicketRequest&, const CloseTicketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloseTicketAsyncHandler;
			typedef Outcome<Error, Model::CreateAgentResult> CreateAgentOutcome;
			typedef std::future<CreateAgentOutcome> CreateAgentOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::CreateAgentRequest&, const CreateAgentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAgentAsyncHandler;
			typedef Outcome<Error, Model::CreateCustomerResult> CreateCustomerOutcome;
			typedef std::future<CreateCustomerOutcome> CreateCustomerOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::CreateCustomerRequest&, const CreateCustomerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomerAsyncHandler;
			typedef Outcome<Error, Model::CreateEntityIvrRouteResult> CreateEntityIvrRouteOutcome;
			typedef std::future<CreateEntityIvrRouteOutcome> CreateEntityIvrRouteOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::CreateEntityIvrRouteRequest&, const CreateEntityIvrRouteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEntityIvrRouteAsyncHandler;
			typedef Outcome<Error, Model::CreateOuterCallCenterDataResult> CreateOuterCallCenterDataOutcome;
			typedef std::future<CreateOuterCallCenterDataOutcome> CreateOuterCallCenterDataOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::CreateOuterCallCenterDataRequest&, const CreateOuterCallCenterDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOuterCallCenterDataAsyncHandler;
			typedef Outcome<Error, Model::CreateRoleResult> CreateRoleOutcome;
			typedef std::future<CreateRoleOutcome> CreateRoleOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::CreateRoleRequest&, const CreateRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRoleAsyncHandler;
			typedef Outcome<Error, Model::CreateSkillGroupResult> CreateSkillGroupOutcome;
			typedef std::future<CreateSkillGroupOutcome> CreateSkillGroupOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::CreateSkillGroupRequest&, const CreateSkillGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSkillGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateThirdSsoAgentResult> CreateThirdSsoAgentOutcome;
			typedef std::future<CreateThirdSsoAgentOutcome> CreateThirdSsoAgentOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::CreateThirdSsoAgentRequest&, const CreateThirdSsoAgentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateThirdSsoAgentAsyncHandler;
			typedef Outcome<Error, Model::CreateTicketResult> CreateTicketOutcome;
			typedef std::future<CreateTicketOutcome> CreateTicketOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::CreateTicketRequest&, const CreateTicketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTicketAsyncHandler;
			typedef Outcome<Error, Model::CreateTicketWithBizDataResult> CreateTicketWithBizDataOutcome;
			typedef std::future<CreateTicketWithBizDataOutcome> CreateTicketWithBizDataOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::CreateTicketWithBizDataRequest&, const CreateTicketWithBizDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTicketWithBizDataAsyncHandler;
			typedef Outcome<Error, Model::DeleteAgentResult> DeleteAgentOutcome;
			typedef std::future<DeleteAgentOutcome> DeleteAgentOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::DeleteAgentRequest&, const DeleteAgentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAgentAsyncHandler;
			typedef Outcome<Error, Model::DeleteEntityRouteResult> DeleteEntityRouteOutcome;
			typedef std::future<DeleteEntityRouteOutcome> DeleteEntityRouteOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::DeleteEntityRouteRequest&, const DeleteEntityRouteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEntityRouteAsyncHandler;
			typedef Outcome<Error, Model::DisableRoleResult> DisableRoleOutcome;
			typedef std::future<DisableRoleOutcome> DisableRoleOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::DisableRoleRequest&, const DisableRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableRoleAsyncHandler;
			typedef Outcome<Error, Model::EditEntityRouteResult> EditEntityRouteOutcome;
			typedef std::future<EditEntityRouteOutcome> EditEntityRouteOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::EditEntityRouteRequest&, const EditEntityRouteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EditEntityRouteAsyncHandler;
			typedef Outcome<Error, Model::EnableRoleResult> EnableRoleOutcome;
			typedef std::future<EnableRoleOutcome> EnableRoleOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::EnableRoleRequest&, const EnableRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableRoleAsyncHandler;
			typedef Outcome<Error, Model::ExecuteActivityResult> ExecuteActivityOutcome;
			typedef std::future<ExecuteActivityOutcome> ExecuteActivityOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::ExecuteActivityRequest&, const ExecuteActivityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteActivityAsyncHandler;
			typedef Outcome<Error, Model::FetchCallResult> FetchCallOutcome;
			typedef std::future<FetchCallOutcome> FetchCallOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::FetchCallRequest&, const FetchCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FetchCallAsyncHandler;
			typedef Outcome<Error, Model::FinishHotlineServiceResult> FinishHotlineServiceOutcome;
			typedef std::future<FinishHotlineServiceOutcome> FinishHotlineServiceOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::FinishHotlineServiceRequest&, const FinishHotlineServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FinishHotlineServiceAsyncHandler;
			typedef Outcome<Error, Model::GenerateWebSocketSignResult> GenerateWebSocketSignOutcome;
			typedef std::future<GenerateWebSocketSignOutcome> GenerateWebSocketSignOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::GenerateWebSocketSignRequest&, const GenerateWebSocketSignOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateWebSocketSignAsyncHandler;
			typedef Outcome<Error, Model::GetAgentResult> GetAgentOutcome;
			typedef std::future<GetAgentOutcome> GetAgentOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::GetAgentRequest&, const GetAgentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAgentAsyncHandler;
			typedef Outcome<Error, Model::GetAuthInfoResult> GetAuthInfoOutcome;
			typedef std::future<GetAuthInfoOutcome> GetAuthInfoOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::GetAuthInfoRequest&, const GetAuthInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAuthInfoAsyncHandler;
			typedef Outcome<Error, Model::GetCMSIdByForeignIdResult> GetCMSIdByForeignIdOutcome;
			typedef std::future<GetCMSIdByForeignIdOutcome> GetCMSIdByForeignIdOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::GetCMSIdByForeignIdRequest&, const GetCMSIdByForeignIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCMSIdByForeignIdAsyncHandler;
			typedef Outcome<Error, Model::GetCallsPerDayResult> GetCallsPerDayOutcome;
			typedef std::future<GetCallsPerDayOutcome> GetCallsPerDayOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::GetCallsPerDayRequest&, const GetCallsPerDayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCallsPerDayAsyncHandler;
			typedef Outcome<Error, Model::GetEntityRouteResult> GetEntityRouteOutcome;
			typedef std::future<GetEntityRouteOutcome> GetEntityRouteOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::GetEntityRouteRequest&, const GetEntityRouteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEntityRouteAsyncHandler;
			typedef Outcome<Error, Model::GetEntityRouteListResult> GetEntityRouteListOutcome;
			typedef std::future<GetEntityRouteListOutcome> GetEntityRouteListOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::GetEntityRouteListRequest&, const GetEntityRouteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEntityRouteListAsyncHandler;
			typedef Outcome<Error, Model::GetEntityTagRelationResult> GetEntityTagRelationOutcome;
			typedef std::future<GetEntityTagRelationOutcome> GetEntityTagRelationOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::GetEntityTagRelationRequest&, const GetEntityTagRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEntityTagRelationAsyncHandler;
			typedef Outcome<Error, Model::GetGrantedRoleIdsResult> GetGrantedRoleIdsOutcome;
			typedef std::future<GetGrantedRoleIdsOutcome> GetGrantedRoleIdsOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::GetGrantedRoleIdsRequest&, const GetGrantedRoleIdsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGrantedRoleIdsAsyncHandler;
			typedef Outcome<Error, Model::GetHotlineAgentDetailResult> GetHotlineAgentDetailOutcome;
			typedef std::future<GetHotlineAgentDetailOutcome> GetHotlineAgentDetailOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::GetHotlineAgentDetailRequest&, const GetHotlineAgentDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetHotlineAgentDetailAsyncHandler;
			typedef Outcome<Error, Model::GetHotlineAgentDetailReportResult> GetHotlineAgentDetailReportOutcome;
			typedef std::future<GetHotlineAgentDetailReportOutcome> GetHotlineAgentDetailReportOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::GetHotlineAgentDetailReportRequest&, const GetHotlineAgentDetailReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetHotlineAgentDetailReportAsyncHandler;
			typedef Outcome<Error, Model::GetHotlineAgentStatusResult> GetHotlineAgentStatusOutcome;
			typedef std::future<GetHotlineAgentStatusOutcome> GetHotlineAgentStatusOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::GetHotlineAgentStatusRequest&, const GetHotlineAgentStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetHotlineAgentStatusAsyncHandler;
			typedef Outcome<Error, Model::GetHotlineGroupDetailReportResult> GetHotlineGroupDetailReportOutcome;
			typedef std::future<GetHotlineGroupDetailReportOutcome> GetHotlineGroupDetailReportOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::GetHotlineGroupDetailReportRequest&, const GetHotlineGroupDetailReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetHotlineGroupDetailReportAsyncHandler;
			typedef Outcome<Error, Model::GetHotlineWaitingNumberResult> GetHotlineWaitingNumberOutcome;
			typedef std::future<GetHotlineWaitingNumberOutcome> GetHotlineWaitingNumberOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::GetHotlineWaitingNumberRequest&, const GetHotlineWaitingNumberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetHotlineWaitingNumberAsyncHandler;
			typedef Outcome<Error, Model::GetNumLocationResult> GetNumLocationOutcome;
			typedef std::future<GetNumLocationOutcome> GetNumLocationOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::GetNumLocationRequest&, const GetNumLocationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNumLocationAsyncHandler;
			typedef Outcome<Error, Model::GetOutbounNumListResult> GetOutbounNumListOutcome;
			typedef std::future<GetOutbounNumListOutcome> GetOutbounNumListOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::GetOutbounNumListRequest&, const GetOutbounNumListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOutbounNumListAsyncHandler;
			typedef Outcome<Error, Model::GetOuterCallCenterDataListResult> GetOuterCallCenterDataListOutcome;
			typedef std::future<GetOuterCallCenterDataListOutcome> GetOuterCallCenterDataListOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::GetOuterCallCenterDataListRequest&, const GetOuterCallCenterDataListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOuterCallCenterDataListAsyncHandler;
			typedef Outcome<Error, Model::GetTagListResult> GetTagListOutcome;
			typedef std::future<GetTagListOutcome> GetTagListOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::GetTagListRequest&, const GetTagListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTagListAsyncHandler;
			typedef Outcome<Error, Model::GetTicketTemplateSchemaResult> GetTicketTemplateSchemaOutcome;
			typedef std::future<GetTicketTemplateSchemaOutcome> GetTicketTemplateSchemaOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::GetTicketTemplateSchemaRequest&, const GetTicketTemplateSchemaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTicketTemplateSchemaAsyncHandler;
			typedef Outcome<Error, Model::GetUserTokenResult> GetUserTokenOutcome;
			typedef std::future<GetUserTokenOutcome> GetUserTokenOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::GetUserTokenRequest&, const GetUserTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserTokenAsyncHandler;
			typedef Outcome<Error, Model::GrantRolesResult> GrantRolesOutcome;
			typedef std::future<GrantRolesOutcome> GrantRolesOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::GrantRolesRequest&, const GrantRolesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantRolesAsyncHandler;
			typedef Outcome<Error, Model::HangupCallResult> HangupCallOutcome;
			typedef std::future<HangupCallOutcome> HangupCallOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::HangupCallRequest&, const HangupCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HangupCallAsyncHandler;
			typedef Outcome<Error, Model::HangupThirdCallResult> HangupThirdCallOutcome;
			typedef std::future<HangupThirdCallOutcome> HangupThirdCallOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::HangupThirdCallRequest&, const HangupThirdCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HangupThirdCallAsyncHandler;
			typedef Outcome<Error, Model::HoldCallResult> HoldCallOutcome;
			typedef std::future<HoldCallOutcome> HoldCallOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::HoldCallRequest&, const HoldCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> HoldCallAsyncHandler;
			typedef Outcome<Error, Model::JoinThirdCallResult> JoinThirdCallOutcome;
			typedef std::future<JoinThirdCallOutcome> JoinThirdCallOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::JoinThirdCallRequest&, const JoinThirdCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> JoinThirdCallAsyncHandler;
			typedef Outcome<Error, Model::ListAgentBySkillGroupIdResult> ListAgentBySkillGroupIdOutcome;
			typedef std::future<ListAgentBySkillGroupIdOutcome> ListAgentBySkillGroupIdOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::ListAgentBySkillGroupIdRequest&, const ListAgentBySkillGroupIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAgentBySkillGroupIdAsyncHandler;
			typedef Outcome<Error, Model::ListHotlineRecordResult> ListHotlineRecordOutcome;
			typedef std::future<ListHotlineRecordOutcome> ListHotlineRecordOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::ListHotlineRecordRequest&, const ListHotlineRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListHotlineRecordAsyncHandler;
			typedef Outcome<Error, Model::ListOutboundPhoneNumberResult> ListOutboundPhoneNumberOutcome;
			typedef std::future<ListOutboundPhoneNumberOutcome> ListOutboundPhoneNumberOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::ListOutboundPhoneNumberRequest&, const ListOutboundPhoneNumberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOutboundPhoneNumberAsyncHandler;
			typedef Outcome<Error, Model::ListSkillGroupResult> ListSkillGroupOutcome;
			typedef std::future<ListSkillGroupOutcome> ListSkillGroupOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::ListSkillGroupRequest&, const ListSkillGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSkillGroupAsyncHandler;
			typedef Outcome<Error, Model::QueryHotlineSessionResult> QueryHotlineSessionOutcome;
			typedef std::future<QueryHotlineSessionOutcome> QueryHotlineSessionOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::QueryHotlineSessionRequest&, const QueryHotlineSessionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryHotlineSessionAsyncHandler;
			typedef Outcome<Error, Model::QueryRingDetailListResult> QueryRingDetailListOutcome;
			typedef std::future<QueryRingDetailListOutcome> QueryRingDetailListOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::QueryRingDetailListRequest&, const QueryRingDetailListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRingDetailListAsyncHandler;
			typedef Outcome<Error, Model::QueryServiceConfigResult> QueryServiceConfigOutcome;
			typedef std::future<QueryServiceConfigOutcome> QueryServiceConfigOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::QueryServiceConfigRequest&, const QueryServiceConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryServiceConfigAsyncHandler;
			typedef Outcome<Error, Model::QuerySkillGroupsResult> QuerySkillGroupsOutcome;
			typedef std::future<QuerySkillGroupsOutcome> QuerySkillGroupsOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::QuerySkillGroupsRequest&, const QuerySkillGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySkillGroupsAsyncHandler;
			typedef Outcome<Error, Model::QueryTicketActionsResult> QueryTicketActionsOutcome;
			typedef std::future<QueryTicketActionsOutcome> QueryTicketActionsOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::QueryTicketActionsRequest&, const QueryTicketActionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTicketActionsAsyncHandler;
			typedef Outcome<Error, Model::QueryTicketCountResult> QueryTicketCountOutcome;
			typedef std::future<QueryTicketCountOutcome> QueryTicketCountOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::QueryTicketCountRequest&, const QueryTicketCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTicketCountAsyncHandler;
			typedef Outcome<Error, Model::QueryTicketsResult> QueryTicketsOutcome;
			typedef std::future<QueryTicketsOutcome> QueryTicketsOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::QueryTicketsRequest&, const QueryTicketsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTicketsAsyncHandler;
			typedef Outcome<Error, Model::RemoveSkillGroupResult> RemoveSkillGroupOutcome;
			typedef std::future<RemoveSkillGroupOutcome> RemoveSkillGroupOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::RemoveSkillGroupRequest&, const RemoveSkillGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveSkillGroupAsyncHandler;
			typedef Outcome<Error, Model::SearchTicketByIdResult> SearchTicketByIdOutcome;
			typedef std::future<SearchTicketByIdOutcome> SearchTicketByIdOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::SearchTicketByIdRequest&, const SearchTicketByIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchTicketByIdAsyncHandler;
			typedef Outcome<Error, Model::SearchTicketByPhoneResult> SearchTicketByPhoneOutcome;
			typedef std::future<SearchTicketByPhoneOutcome> SearchTicketByPhoneOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::SearchTicketByPhoneRequest&, const SearchTicketByPhoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchTicketByPhoneAsyncHandler;
			typedef Outcome<Error, Model::SearchTicketListResult> SearchTicketListOutcome;
			typedef std::future<SearchTicketListOutcome> SearchTicketListOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::SearchTicketListRequest&, const SearchTicketListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchTicketListAsyncHandler;
			typedef Outcome<Error, Model::SendHotlineHeartBeatResult> SendHotlineHeartBeatOutcome;
			typedef std::future<SendHotlineHeartBeatOutcome> SendHotlineHeartBeatOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::SendHotlineHeartBeatRequest&, const SendHotlineHeartBeatOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendHotlineHeartBeatAsyncHandler;
			typedef Outcome<Error, Model::SendOutboundCommandResult> SendOutboundCommandOutcome;
			typedef std::future<SendOutboundCommandOutcome> SendOutboundCommandOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::SendOutboundCommandRequest&, const SendOutboundCommandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendOutboundCommandAsyncHandler;
			typedef Outcome<Error, Model::StartCallResult> StartCallOutcome;
			typedef std::future<StartCallOutcome> StartCallOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::StartCallRequest&, const StartCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartCallAsyncHandler;
			typedef Outcome<Error, Model::StartCallV2Result> StartCallV2Outcome;
			typedef std::future<StartCallV2Outcome> StartCallV2OutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::StartCallV2Request&, const StartCallV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartCallV2AsyncHandler;
			typedef Outcome<Error, Model::StartChatWorkResult> StartChatWorkOutcome;
			typedef std::future<StartChatWorkOutcome> StartChatWorkOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::StartChatWorkRequest&, const StartChatWorkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartChatWorkAsyncHandler;
			typedef Outcome<Error, Model::StartHotlineServiceResult> StartHotlineServiceOutcome;
			typedef std::future<StartHotlineServiceOutcome> StartHotlineServiceOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::StartHotlineServiceRequest&, const StartHotlineServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartHotlineServiceAsyncHandler;
			typedef Outcome<Error, Model::SuspendHotlineServiceResult> SuspendHotlineServiceOutcome;
			typedef std::future<SuspendHotlineServiceOutcome> SuspendHotlineServiceOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::SuspendHotlineServiceRequest&, const SuspendHotlineServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SuspendHotlineServiceAsyncHandler;
			typedef Outcome<Error, Model::TransferCallToAgentResult> TransferCallToAgentOutcome;
			typedef std::future<TransferCallToAgentOutcome> TransferCallToAgentOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::TransferCallToAgentRequest&, const TransferCallToAgentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TransferCallToAgentAsyncHandler;
			typedef Outcome<Error, Model::TransferCallToPhoneResult> TransferCallToPhoneOutcome;
			typedef std::future<TransferCallToPhoneOutcome> TransferCallToPhoneOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::TransferCallToPhoneRequest&, const TransferCallToPhoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TransferCallToPhoneAsyncHandler;
			typedef Outcome<Error, Model::TransferCallToSkillGroupResult> TransferCallToSkillGroupOutcome;
			typedef std::future<TransferCallToSkillGroupOutcome> TransferCallToSkillGroupOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::TransferCallToSkillGroupRequest&, const TransferCallToSkillGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TransferCallToSkillGroupAsyncHandler;
			typedef Outcome<Error, Model::TransferToThirdCallResult> TransferToThirdCallOutcome;
			typedef std::future<TransferToThirdCallOutcome> TransferToThirdCallOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::TransferToThirdCallRequest&, const TransferToThirdCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TransferToThirdCallAsyncHandler;
			typedef Outcome<Error, Model::UpdateAgentResult> UpdateAgentOutcome;
			typedef std::future<UpdateAgentOutcome> UpdateAgentOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::UpdateAgentRequest&, const UpdateAgentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAgentAsyncHandler;
			typedef Outcome<Error, Model::UpdateCustomerResult> UpdateCustomerOutcome;
			typedef std::future<UpdateCustomerOutcome> UpdateCustomerOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::UpdateCustomerRequest&, const UpdateCustomerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCustomerAsyncHandler;
			typedef Outcome<Error, Model::UpdateEntityTagRelationResult> UpdateEntityTagRelationOutcome;
			typedef std::future<UpdateEntityTagRelationOutcome> UpdateEntityTagRelationOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::UpdateEntityTagRelationRequest&, const UpdateEntityTagRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEntityTagRelationAsyncHandler;
			typedef Outcome<Error, Model::UpdateRingStatusResult> UpdateRingStatusOutcome;
			typedef std::future<UpdateRingStatusOutcome> UpdateRingStatusOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::UpdateRingStatusRequest&, const UpdateRingStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRingStatusAsyncHandler;
			typedef Outcome<Error, Model::UpdateRoleResult> UpdateRoleOutcome;
			typedef std::future<UpdateRoleOutcome> UpdateRoleOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::UpdateRoleRequest&, const UpdateRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRoleAsyncHandler;
			typedef Outcome<Error, Model::UpdateSkillGroupResult> UpdateSkillGroupOutcome;
			typedef std::future<UpdateSkillGroupOutcome> UpdateSkillGroupOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::UpdateSkillGroupRequest&, const UpdateSkillGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSkillGroupAsyncHandler;
			typedef Outcome<Error, Model::UpdateTicketResult> UpdateTicketOutcome;
			typedef std::future<UpdateTicketOutcome> UpdateTicketOutcomeCallable;
			typedef std::function<void(const ScspClient*, const Model::UpdateTicketRequest&, const UpdateTicketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTicketAsyncHandler;

			ScspClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ScspClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ScspClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ScspClient();
			AnswerCallOutcome answerCall(const Model::AnswerCallRequest &request)const;
			void answerCallAsync(const Model::AnswerCallRequest& request, const AnswerCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AnswerCallOutcomeCallable answerCallCallable(const Model::AnswerCallRequest& request) const;
			AppMessagePushOutcome appMessagePush(const Model::AppMessagePushRequest &request)const;
			void appMessagePushAsync(const Model::AppMessagePushRequest& request, const AppMessagePushAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AppMessagePushOutcomeCallable appMessagePushCallable(const Model::AppMessagePushRequest& request) const;
			AssignTicketOutcome assignTicket(const Model::AssignTicketRequest &request)const;
			void assignTicketAsync(const Model::AssignTicketRequest& request, const AssignTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssignTicketOutcomeCallable assignTicketCallable(const Model::AssignTicketRequest& request) const;
			ChangeChatAgentStatusOutcome changeChatAgentStatus(const Model::ChangeChatAgentStatusRequest &request)const;
			void changeChatAgentStatusAsync(const Model::ChangeChatAgentStatusRequest& request, const ChangeChatAgentStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeChatAgentStatusOutcomeCallable changeChatAgentStatusCallable(const Model::ChangeChatAgentStatusRequest& request) const;
			CloseTicketOutcome closeTicket(const Model::CloseTicketRequest &request)const;
			void closeTicketAsync(const Model::CloseTicketRequest& request, const CloseTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloseTicketOutcomeCallable closeTicketCallable(const Model::CloseTicketRequest& request) const;
			CreateAgentOutcome createAgent(const Model::CreateAgentRequest &request)const;
			void createAgentAsync(const Model::CreateAgentRequest& request, const CreateAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAgentOutcomeCallable createAgentCallable(const Model::CreateAgentRequest& request) const;
			CreateCustomerOutcome createCustomer(const Model::CreateCustomerRequest &request)const;
			void createCustomerAsync(const Model::CreateCustomerRequest& request, const CreateCustomerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCustomerOutcomeCallable createCustomerCallable(const Model::CreateCustomerRequest& request) const;
			CreateEntityIvrRouteOutcome createEntityIvrRoute(const Model::CreateEntityIvrRouteRequest &request)const;
			void createEntityIvrRouteAsync(const Model::CreateEntityIvrRouteRequest& request, const CreateEntityIvrRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEntityIvrRouteOutcomeCallable createEntityIvrRouteCallable(const Model::CreateEntityIvrRouteRequest& request) const;
			CreateOuterCallCenterDataOutcome createOuterCallCenterData(const Model::CreateOuterCallCenterDataRequest &request)const;
			void createOuterCallCenterDataAsync(const Model::CreateOuterCallCenterDataRequest& request, const CreateOuterCallCenterDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOuterCallCenterDataOutcomeCallable createOuterCallCenterDataCallable(const Model::CreateOuterCallCenterDataRequest& request) const;
			CreateRoleOutcome createRole(const Model::CreateRoleRequest &request)const;
			void createRoleAsync(const Model::CreateRoleRequest& request, const CreateRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRoleOutcomeCallable createRoleCallable(const Model::CreateRoleRequest& request) const;
			CreateSkillGroupOutcome createSkillGroup(const Model::CreateSkillGroupRequest &request)const;
			void createSkillGroupAsync(const Model::CreateSkillGroupRequest& request, const CreateSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSkillGroupOutcomeCallable createSkillGroupCallable(const Model::CreateSkillGroupRequest& request) const;
			CreateThirdSsoAgentOutcome createThirdSsoAgent(const Model::CreateThirdSsoAgentRequest &request)const;
			void createThirdSsoAgentAsync(const Model::CreateThirdSsoAgentRequest& request, const CreateThirdSsoAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateThirdSsoAgentOutcomeCallable createThirdSsoAgentCallable(const Model::CreateThirdSsoAgentRequest& request) const;
			CreateTicketOutcome createTicket(const Model::CreateTicketRequest &request)const;
			void createTicketAsync(const Model::CreateTicketRequest& request, const CreateTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTicketOutcomeCallable createTicketCallable(const Model::CreateTicketRequest& request) const;
			CreateTicketWithBizDataOutcome createTicketWithBizData(const Model::CreateTicketWithBizDataRequest &request)const;
			void createTicketWithBizDataAsync(const Model::CreateTicketWithBizDataRequest& request, const CreateTicketWithBizDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTicketWithBizDataOutcomeCallable createTicketWithBizDataCallable(const Model::CreateTicketWithBizDataRequest& request) const;
			DeleteAgentOutcome deleteAgent(const Model::DeleteAgentRequest &request)const;
			void deleteAgentAsync(const Model::DeleteAgentRequest& request, const DeleteAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAgentOutcomeCallable deleteAgentCallable(const Model::DeleteAgentRequest& request) const;
			DeleteEntityRouteOutcome deleteEntityRoute(const Model::DeleteEntityRouteRequest &request)const;
			void deleteEntityRouteAsync(const Model::DeleteEntityRouteRequest& request, const DeleteEntityRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEntityRouteOutcomeCallable deleteEntityRouteCallable(const Model::DeleteEntityRouteRequest& request) const;
			DisableRoleOutcome disableRole(const Model::DisableRoleRequest &request)const;
			void disableRoleAsync(const Model::DisableRoleRequest& request, const DisableRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableRoleOutcomeCallable disableRoleCallable(const Model::DisableRoleRequest& request) const;
			EditEntityRouteOutcome editEntityRoute(const Model::EditEntityRouteRequest &request)const;
			void editEntityRouteAsync(const Model::EditEntityRouteRequest& request, const EditEntityRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EditEntityRouteOutcomeCallable editEntityRouteCallable(const Model::EditEntityRouteRequest& request) const;
			EnableRoleOutcome enableRole(const Model::EnableRoleRequest &request)const;
			void enableRoleAsync(const Model::EnableRoleRequest& request, const EnableRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableRoleOutcomeCallable enableRoleCallable(const Model::EnableRoleRequest& request) const;
			ExecuteActivityOutcome executeActivity(const Model::ExecuteActivityRequest &request)const;
			void executeActivityAsync(const Model::ExecuteActivityRequest& request, const ExecuteActivityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecuteActivityOutcomeCallable executeActivityCallable(const Model::ExecuteActivityRequest& request) const;
			FetchCallOutcome fetchCall(const Model::FetchCallRequest &request)const;
			void fetchCallAsync(const Model::FetchCallRequest& request, const FetchCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FetchCallOutcomeCallable fetchCallCallable(const Model::FetchCallRequest& request) const;
			FinishHotlineServiceOutcome finishHotlineService(const Model::FinishHotlineServiceRequest &request)const;
			void finishHotlineServiceAsync(const Model::FinishHotlineServiceRequest& request, const FinishHotlineServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FinishHotlineServiceOutcomeCallable finishHotlineServiceCallable(const Model::FinishHotlineServiceRequest& request) const;
			GenerateWebSocketSignOutcome generateWebSocketSign(const Model::GenerateWebSocketSignRequest &request)const;
			void generateWebSocketSignAsync(const Model::GenerateWebSocketSignRequest& request, const GenerateWebSocketSignAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateWebSocketSignOutcomeCallable generateWebSocketSignCallable(const Model::GenerateWebSocketSignRequest& request) const;
			GetAgentOutcome getAgent(const Model::GetAgentRequest &request)const;
			void getAgentAsync(const Model::GetAgentRequest& request, const GetAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAgentOutcomeCallable getAgentCallable(const Model::GetAgentRequest& request) const;
			GetAuthInfoOutcome getAuthInfo(const Model::GetAuthInfoRequest &request)const;
			void getAuthInfoAsync(const Model::GetAuthInfoRequest& request, const GetAuthInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAuthInfoOutcomeCallable getAuthInfoCallable(const Model::GetAuthInfoRequest& request) const;
			GetCMSIdByForeignIdOutcome getCMSIdByForeignId(const Model::GetCMSIdByForeignIdRequest &request)const;
			void getCMSIdByForeignIdAsync(const Model::GetCMSIdByForeignIdRequest& request, const GetCMSIdByForeignIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCMSIdByForeignIdOutcomeCallable getCMSIdByForeignIdCallable(const Model::GetCMSIdByForeignIdRequest& request) const;
			GetCallsPerDayOutcome getCallsPerDay(const Model::GetCallsPerDayRequest &request)const;
			void getCallsPerDayAsync(const Model::GetCallsPerDayRequest& request, const GetCallsPerDayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCallsPerDayOutcomeCallable getCallsPerDayCallable(const Model::GetCallsPerDayRequest& request) const;
			GetEntityRouteOutcome getEntityRoute(const Model::GetEntityRouteRequest &request)const;
			void getEntityRouteAsync(const Model::GetEntityRouteRequest& request, const GetEntityRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEntityRouteOutcomeCallable getEntityRouteCallable(const Model::GetEntityRouteRequest& request) const;
			GetEntityRouteListOutcome getEntityRouteList(const Model::GetEntityRouteListRequest &request)const;
			void getEntityRouteListAsync(const Model::GetEntityRouteListRequest& request, const GetEntityRouteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEntityRouteListOutcomeCallable getEntityRouteListCallable(const Model::GetEntityRouteListRequest& request) const;
			GetEntityTagRelationOutcome getEntityTagRelation(const Model::GetEntityTagRelationRequest &request)const;
			void getEntityTagRelationAsync(const Model::GetEntityTagRelationRequest& request, const GetEntityTagRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEntityTagRelationOutcomeCallable getEntityTagRelationCallable(const Model::GetEntityTagRelationRequest& request) const;
			GetGrantedRoleIdsOutcome getGrantedRoleIds(const Model::GetGrantedRoleIdsRequest &request)const;
			void getGrantedRoleIdsAsync(const Model::GetGrantedRoleIdsRequest& request, const GetGrantedRoleIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGrantedRoleIdsOutcomeCallable getGrantedRoleIdsCallable(const Model::GetGrantedRoleIdsRequest& request) const;
			GetHotlineAgentDetailOutcome getHotlineAgentDetail(const Model::GetHotlineAgentDetailRequest &request)const;
			void getHotlineAgentDetailAsync(const Model::GetHotlineAgentDetailRequest& request, const GetHotlineAgentDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetHotlineAgentDetailOutcomeCallable getHotlineAgentDetailCallable(const Model::GetHotlineAgentDetailRequest& request) const;
			GetHotlineAgentDetailReportOutcome getHotlineAgentDetailReport(const Model::GetHotlineAgentDetailReportRequest &request)const;
			void getHotlineAgentDetailReportAsync(const Model::GetHotlineAgentDetailReportRequest& request, const GetHotlineAgentDetailReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetHotlineAgentDetailReportOutcomeCallable getHotlineAgentDetailReportCallable(const Model::GetHotlineAgentDetailReportRequest& request) const;
			GetHotlineAgentStatusOutcome getHotlineAgentStatus(const Model::GetHotlineAgentStatusRequest &request)const;
			void getHotlineAgentStatusAsync(const Model::GetHotlineAgentStatusRequest& request, const GetHotlineAgentStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetHotlineAgentStatusOutcomeCallable getHotlineAgentStatusCallable(const Model::GetHotlineAgentStatusRequest& request) const;
			GetHotlineGroupDetailReportOutcome getHotlineGroupDetailReport(const Model::GetHotlineGroupDetailReportRequest &request)const;
			void getHotlineGroupDetailReportAsync(const Model::GetHotlineGroupDetailReportRequest& request, const GetHotlineGroupDetailReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetHotlineGroupDetailReportOutcomeCallable getHotlineGroupDetailReportCallable(const Model::GetHotlineGroupDetailReportRequest& request) const;
			GetHotlineWaitingNumberOutcome getHotlineWaitingNumber(const Model::GetHotlineWaitingNumberRequest &request)const;
			void getHotlineWaitingNumberAsync(const Model::GetHotlineWaitingNumberRequest& request, const GetHotlineWaitingNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetHotlineWaitingNumberOutcomeCallable getHotlineWaitingNumberCallable(const Model::GetHotlineWaitingNumberRequest& request) const;
			GetNumLocationOutcome getNumLocation(const Model::GetNumLocationRequest &request)const;
			void getNumLocationAsync(const Model::GetNumLocationRequest& request, const GetNumLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNumLocationOutcomeCallable getNumLocationCallable(const Model::GetNumLocationRequest& request) const;
			GetOutbounNumListOutcome getOutbounNumList(const Model::GetOutbounNumListRequest &request)const;
			void getOutbounNumListAsync(const Model::GetOutbounNumListRequest& request, const GetOutbounNumListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOutbounNumListOutcomeCallable getOutbounNumListCallable(const Model::GetOutbounNumListRequest& request) const;
			GetOuterCallCenterDataListOutcome getOuterCallCenterDataList(const Model::GetOuterCallCenterDataListRequest &request)const;
			void getOuterCallCenterDataListAsync(const Model::GetOuterCallCenterDataListRequest& request, const GetOuterCallCenterDataListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOuterCallCenterDataListOutcomeCallable getOuterCallCenterDataListCallable(const Model::GetOuterCallCenterDataListRequest& request) const;
			GetTagListOutcome getTagList(const Model::GetTagListRequest &request)const;
			void getTagListAsync(const Model::GetTagListRequest& request, const GetTagListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTagListOutcomeCallable getTagListCallable(const Model::GetTagListRequest& request) const;
			GetTicketTemplateSchemaOutcome getTicketTemplateSchema(const Model::GetTicketTemplateSchemaRequest &request)const;
			void getTicketTemplateSchemaAsync(const Model::GetTicketTemplateSchemaRequest& request, const GetTicketTemplateSchemaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTicketTemplateSchemaOutcomeCallable getTicketTemplateSchemaCallable(const Model::GetTicketTemplateSchemaRequest& request) const;
			GetUserTokenOutcome getUserToken(const Model::GetUserTokenRequest &request)const;
			void getUserTokenAsync(const Model::GetUserTokenRequest& request, const GetUserTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserTokenOutcomeCallable getUserTokenCallable(const Model::GetUserTokenRequest& request) const;
			GrantRolesOutcome grantRoles(const Model::GrantRolesRequest &request)const;
			void grantRolesAsync(const Model::GrantRolesRequest& request, const GrantRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrantRolesOutcomeCallable grantRolesCallable(const Model::GrantRolesRequest& request) const;
			HangupCallOutcome hangupCall(const Model::HangupCallRequest &request)const;
			void hangupCallAsync(const Model::HangupCallRequest& request, const HangupCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HangupCallOutcomeCallable hangupCallCallable(const Model::HangupCallRequest& request) const;
			HangupThirdCallOutcome hangupThirdCall(const Model::HangupThirdCallRequest &request)const;
			void hangupThirdCallAsync(const Model::HangupThirdCallRequest& request, const HangupThirdCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HangupThirdCallOutcomeCallable hangupThirdCallCallable(const Model::HangupThirdCallRequest& request) const;
			HoldCallOutcome holdCall(const Model::HoldCallRequest &request)const;
			void holdCallAsync(const Model::HoldCallRequest& request, const HoldCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			HoldCallOutcomeCallable holdCallCallable(const Model::HoldCallRequest& request) const;
			JoinThirdCallOutcome joinThirdCall(const Model::JoinThirdCallRequest &request)const;
			void joinThirdCallAsync(const Model::JoinThirdCallRequest& request, const JoinThirdCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			JoinThirdCallOutcomeCallable joinThirdCallCallable(const Model::JoinThirdCallRequest& request) const;
			ListAgentBySkillGroupIdOutcome listAgentBySkillGroupId(const Model::ListAgentBySkillGroupIdRequest &request)const;
			void listAgentBySkillGroupIdAsync(const Model::ListAgentBySkillGroupIdRequest& request, const ListAgentBySkillGroupIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAgentBySkillGroupIdOutcomeCallable listAgentBySkillGroupIdCallable(const Model::ListAgentBySkillGroupIdRequest& request) const;
			ListHotlineRecordOutcome listHotlineRecord(const Model::ListHotlineRecordRequest &request)const;
			void listHotlineRecordAsync(const Model::ListHotlineRecordRequest& request, const ListHotlineRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListHotlineRecordOutcomeCallable listHotlineRecordCallable(const Model::ListHotlineRecordRequest& request) const;
			ListOutboundPhoneNumberOutcome listOutboundPhoneNumber(const Model::ListOutboundPhoneNumberRequest &request)const;
			void listOutboundPhoneNumberAsync(const Model::ListOutboundPhoneNumberRequest& request, const ListOutboundPhoneNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOutboundPhoneNumberOutcomeCallable listOutboundPhoneNumberCallable(const Model::ListOutboundPhoneNumberRequest& request) const;
			ListSkillGroupOutcome listSkillGroup(const Model::ListSkillGroupRequest &request)const;
			void listSkillGroupAsync(const Model::ListSkillGroupRequest& request, const ListSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSkillGroupOutcomeCallable listSkillGroupCallable(const Model::ListSkillGroupRequest& request) const;
			QueryHotlineSessionOutcome queryHotlineSession(const Model::QueryHotlineSessionRequest &request)const;
			void queryHotlineSessionAsync(const Model::QueryHotlineSessionRequest& request, const QueryHotlineSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryHotlineSessionOutcomeCallable queryHotlineSessionCallable(const Model::QueryHotlineSessionRequest& request) const;
			QueryRingDetailListOutcome queryRingDetailList(const Model::QueryRingDetailListRequest &request)const;
			void queryRingDetailListAsync(const Model::QueryRingDetailListRequest& request, const QueryRingDetailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRingDetailListOutcomeCallable queryRingDetailListCallable(const Model::QueryRingDetailListRequest& request) const;
			QueryServiceConfigOutcome queryServiceConfig(const Model::QueryServiceConfigRequest &request)const;
			void queryServiceConfigAsync(const Model::QueryServiceConfigRequest& request, const QueryServiceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryServiceConfigOutcomeCallable queryServiceConfigCallable(const Model::QueryServiceConfigRequest& request) const;
			QuerySkillGroupsOutcome querySkillGroups(const Model::QuerySkillGroupsRequest &request)const;
			void querySkillGroupsAsync(const Model::QuerySkillGroupsRequest& request, const QuerySkillGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySkillGroupsOutcomeCallable querySkillGroupsCallable(const Model::QuerySkillGroupsRequest& request) const;
			QueryTicketActionsOutcome queryTicketActions(const Model::QueryTicketActionsRequest &request)const;
			void queryTicketActionsAsync(const Model::QueryTicketActionsRequest& request, const QueryTicketActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTicketActionsOutcomeCallable queryTicketActionsCallable(const Model::QueryTicketActionsRequest& request) const;
			QueryTicketCountOutcome queryTicketCount(const Model::QueryTicketCountRequest &request)const;
			void queryTicketCountAsync(const Model::QueryTicketCountRequest& request, const QueryTicketCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTicketCountOutcomeCallable queryTicketCountCallable(const Model::QueryTicketCountRequest& request) const;
			QueryTicketsOutcome queryTickets(const Model::QueryTicketsRequest &request)const;
			void queryTicketsAsync(const Model::QueryTicketsRequest& request, const QueryTicketsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTicketsOutcomeCallable queryTicketsCallable(const Model::QueryTicketsRequest& request) const;
			RemoveSkillGroupOutcome removeSkillGroup(const Model::RemoveSkillGroupRequest &request)const;
			void removeSkillGroupAsync(const Model::RemoveSkillGroupRequest& request, const RemoveSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveSkillGroupOutcomeCallable removeSkillGroupCallable(const Model::RemoveSkillGroupRequest& request) const;
			SearchTicketByIdOutcome searchTicketById(const Model::SearchTicketByIdRequest &request)const;
			void searchTicketByIdAsync(const Model::SearchTicketByIdRequest& request, const SearchTicketByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchTicketByIdOutcomeCallable searchTicketByIdCallable(const Model::SearchTicketByIdRequest& request) const;
			SearchTicketByPhoneOutcome searchTicketByPhone(const Model::SearchTicketByPhoneRequest &request)const;
			void searchTicketByPhoneAsync(const Model::SearchTicketByPhoneRequest& request, const SearchTicketByPhoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchTicketByPhoneOutcomeCallable searchTicketByPhoneCallable(const Model::SearchTicketByPhoneRequest& request) const;
			SearchTicketListOutcome searchTicketList(const Model::SearchTicketListRequest &request)const;
			void searchTicketListAsync(const Model::SearchTicketListRequest& request, const SearchTicketListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchTicketListOutcomeCallable searchTicketListCallable(const Model::SearchTicketListRequest& request) const;
			SendHotlineHeartBeatOutcome sendHotlineHeartBeat(const Model::SendHotlineHeartBeatRequest &request)const;
			void sendHotlineHeartBeatAsync(const Model::SendHotlineHeartBeatRequest& request, const SendHotlineHeartBeatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendHotlineHeartBeatOutcomeCallable sendHotlineHeartBeatCallable(const Model::SendHotlineHeartBeatRequest& request) const;
			SendOutboundCommandOutcome sendOutboundCommand(const Model::SendOutboundCommandRequest &request)const;
			void sendOutboundCommandAsync(const Model::SendOutboundCommandRequest& request, const SendOutboundCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendOutboundCommandOutcomeCallable sendOutboundCommandCallable(const Model::SendOutboundCommandRequest& request) const;
			StartCallOutcome startCall(const Model::StartCallRequest &request)const;
			void startCallAsync(const Model::StartCallRequest& request, const StartCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartCallOutcomeCallable startCallCallable(const Model::StartCallRequest& request) const;
			StartCallV2Outcome startCallV2(const Model::StartCallV2Request &request)const;
			void startCallV2Async(const Model::StartCallV2Request& request, const StartCallV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartCallV2OutcomeCallable startCallV2Callable(const Model::StartCallV2Request& request) const;
			StartChatWorkOutcome startChatWork(const Model::StartChatWorkRequest &request)const;
			void startChatWorkAsync(const Model::StartChatWorkRequest& request, const StartChatWorkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartChatWorkOutcomeCallable startChatWorkCallable(const Model::StartChatWorkRequest& request) const;
			StartHotlineServiceOutcome startHotlineService(const Model::StartHotlineServiceRequest &request)const;
			void startHotlineServiceAsync(const Model::StartHotlineServiceRequest& request, const StartHotlineServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartHotlineServiceOutcomeCallable startHotlineServiceCallable(const Model::StartHotlineServiceRequest& request) const;
			SuspendHotlineServiceOutcome suspendHotlineService(const Model::SuspendHotlineServiceRequest &request)const;
			void suspendHotlineServiceAsync(const Model::SuspendHotlineServiceRequest& request, const SuspendHotlineServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SuspendHotlineServiceOutcomeCallable suspendHotlineServiceCallable(const Model::SuspendHotlineServiceRequest& request) const;
			TransferCallToAgentOutcome transferCallToAgent(const Model::TransferCallToAgentRequest &request)const;
			void transferCallToAgentAsync(const Model::TransferCallToAgentRequest& request, const TransferCallToAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TransferCallToAgentOutcomeCallable transferCallToAgentCallable(const Model::TransferCallToAgentRequest& request) const;
			TransferCallToPhoneOutcome transferCallToPhone(const Model::TransferCallToPhoneRequest &request)const;
			void transferCallToPhoneAsync(const Model::TransferCallToPhoneRequest& request, const TransferCallToPhoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TransferCallToPhoneOutcomeCallable transferCallToPhoneCallable(const Model::TransferCallToPhoneRequest& request) const;
			TransferCallToSkillGroupOutcome transferCallToSkillGroup(const Model::TransferCallToSkillGroupRequest &request)const;
			void transferCallToSkillGroupAsync(const Model::TransferCallToSkillGroupRequest& request, const TransferCallToSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TransferCallToSkillGroupOutcomeCallable transferCallToSkillGroupCallable(const Model::TransferCallToSkillGroupRequest& request) const;
			TransferToThirdCallOutcome transferToThirdCall(const Model::TransferToThirdCallRequest &request)const;
			void transferToThirdCallAsync(const Model::TransferToThirdCallRequest& request, const TransferToThirdCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TransferToThirdCallOutcomeCallable transferToThirdCallCallable(const Model::TransferToThirdCallRequest& request) const;
			UpdateAgentOutcome updateAgent(const Model::UpdateAgentRequest &request)const;
			void updateAgentAsync(const Model::UpdateAgentRequest& request, const UpdateAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAgentOutcomeCallable updateAgentCallable(const Model::UpdateAgentRequest& request) const;
			UpdateCustomerOutcome updateCustomer(const Model::UpdateCustomerRequest &request)const;
			void updateCustomerAsync(const Model::UpdateCustomerRequest& request, const UpdateCustomerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCustomerOutcomeCallable updateCustomerCallable(const Model::UpdateCustomerRequest& request) const;
			UpdateEntityTagRelationOutcome updateEntityTagRelation(const Model::UpdateEntityTagRelationRequest &request)const;
			void updateEntityTagRelationAsync(const Model::UpdateEntityTagRelationRequest& request, const UpdateEntityTagRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEntityTagRelationOutcomeCallable updateEntityTagRelationCallable(const Model::UpdateEntityTagRelationRequest& request) const;
			UpdateRingStatusOutcome updateRingStatus(const Model::UpdateRingStatusRequest &request)const;
			void updateRingStatusAsync(const Model::UpdateRingStatusRequest& request, const UpdateRingStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRingStatusOutcomeCallable updateRingStatusCallable(const Model::UpdateRingStatusRequest& request) const;
			UpdateRoleOutcome updateRole(const Model::UpdateRoleRequest &request)const;
			void updateRoleAsync(const Model::UpdateRoleRequest& request, const UpdateRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRoleOutcomeCallable updateRoleCallable(const Model::UpdateRoleRequest& request) const;
			UpdateSkillGroupOutcome updateSkillGroup(const Model::UpdateSkillGroupRequest &request)const;
			void updateSkillGroupAsync(const Model::UpdateSkillGroupRequest& request, const UpdateSkillGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSkillGroupOutcomeCallable updateSkillGroupCallable(const Model::UpdateSkillGroupRequest& request) const;
			UpdateTicketOutcome updateTicket(const Model::UpdateTicketRequest &request)const;
			void updateTicketAsync(const Model::UpdateTicketRequest& request, const UpdateTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTicketOutcomeCallable updateTicketCallable(const Model::UpdateTicketRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_SCSP_SCSPCLIENT_H_
