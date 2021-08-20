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

#ifndef ALIBABACLOUD_DYVMSAPI_DYVMSAPICLIENT_H_
#define ALIBABACLOUD_DYVMSAPI_DYVMSAPICLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "DyvmsapiExport.h"
#include "model/AddRtcAccountRequest.h"
#include "model/AddRtcAccountResult.h"
#include "model/AddVirtualNumberRelationRequest.h"
#include "model/AddVirtualNumberRelationResult.h"
#include "model/BatchRobotSmartCallRequest.h"
#include "model/BatchRobotSmartCallResult.h"
#include "model/BindNumberAndVoipIdRequest.h"
#include "model/BindNumberAndVoipIdResult.h"
#include "model/CancelCallRequest.h"
#include "model/CancelCallResult.h"
#include "model/CancelOrderRobotTaskRequest.h"
#include "model/CancelOrderRobotTaskResult.h"
#include "model/CancelRobotTaskRequest.h"
#include "model/CancelRobotTaskResult.h"
#include "model/ClickToDialRequest.h"
#include "model/ClickToDialResult.h"
#include "model/CloseSipAccountRequest.h"
#include "model/CloseSipAccountResult.h"
#include "model/CreateCallTaskRequest.h"
#include "model/CreateCallTaskResult.h"
#include "model/CreateRobotTaskRequest.h"
#include "model/CreateRobotTaskResult.h"
#include "model/CreateSipAccountRequest.h"
#include "model/CreateSipAccountResult.h"
#include "model/DeleteRobotTaskRequest.h"
#include "model/DeleteRobotTaskResult.h"
#include "model/DescribeRecordDataRequest.h"
#include "model/DescribeRecordDataResult.h"
#include "model/DoRtcNumberAuthRequest.h"
#include "model/DoRtcNumberAuthResult.h"
#include "model/DoubleCallSeatRequest.h"
#include "model/DoubleCallSeatResult.h"
#include "model/ExecuteCallTaskRequest.h"
#include "model/ExecuteCallTaskResult.h"
#include "model/GetCallInfoRequest.h"
#include "model/GetCallInfoResult.h"
#include "model/GetHotlineQualificationByOrderRequest.h"
#include "model/GetHotlineQualificationByOrderResult.h"
#include "model/GetRtcTokenRequest.h"
#include "model/GetRtcTokenResult.h"
#include "model/GetTokenRequest.h"
#include "model/GetTokenResult.h"
#include "model/IvrCallRequest.h"
#include "model/IvrCallResult.h"
#include "model/ListCallTaskRequest.h"
#include "model/ListCallTaskResult.h"
#include "model/ListCallTaskDetailRequest.h"
#include "model/ListCallTaskDetailResult.h"
#include "model/ListHotlineTransferNumberRequest.h"
#include "model/ListHotlineTransferNumberResult.h"
#include "model/ListHotlineTransferRegisterFileRequest.h"
#include "model/ListHotlineTransferRegisterFileResult.h"
#include "model/ListOrderedNumbersRequest.h"
#include "model/ListOrderedNumbersResult.h"
#include "model/ListOutboundStrategiesRequest.h"
#include "model/ListOutboundStrategiesResult.h"
#include "model/ListRobotTaskCallsRequest.h"
#include "model/ListRobotTaskCallsResult.h"
#include "model/QueryCallDetailByCallIdRequest.h"
#include "model/QueryCallDetailByCallIdResult.h"
#include "model/QueryCallDetailByTaskIdRequest.h"
#include "model/QueryCallDetailByTaskIdResult.h"
#include "model/QueryCallInPoolTransferConfigRequest.h"
#include "model/QueryCallInPoolTransferConfigResult.h"
#include "model/QueryCallInTransferRecordRequest.h"
#include "model/QueryCallInTransferRecordResult.h"
#include "model/QueryRobotInfoListRequest.h"
#include "model/QueryRobotInfoListResult.h"
#include "model/QueryRobotTaskCallDetailRequest.h"
#include "model/QueryRobotTaskCallDetailResult.h"
#include "model/QueryRobotTaskCallListRequest.h"
#include "model/QueryRobotTaskCallListResult.h"
#include "model/QueryRobotTaskDetailRequest.h"
#include "model/QueryRobotTaskDetailResult.h"
#include "model/QueryRobotTaskListRequest.h"
#include "model/QueryRobotTaskListResult.h"
#include "model/QueryRobotv2AllListRequest.h"
#include "model/QueryRobotv2AllListResult.h"
#include "model/QueryRtcNumberAuthStatusRequest.h"
#include "model/QueryRtcNumberAuthStatusResult.h"
#include "model/QueryVirtualNumberRequest.h"
#include "model/QueryVirtualNumberResult.h"
#include "model/QueryVirtualNumberRelationRequest.h"
#include "model/QueryVirtualNumberRelationResult.h"
#include "model/QueryVoipNumberBindInfosRequest.h"
#include "model/QueryVoipNumberBindInfosResult.h"
#include "model/ReportVoipProblemsRequest.h"
#include "model/ReportVoipProblemsResult.h"
#include "model/SendVerificationRequest.h"
#include "model/SendVerificationResult.h"
#include "model/SetTransferCalleePoolConfigRequest.h"
#include "model/SetTransferCalleePoolConfigResult.h"
#include "model/SingleCallByTtsRequest.h"
#include "model/SingleCallByTtsResult.h"
#include "model/SingleCallByVoiceRequest.h"
#include "model/SingleCallByVoiceResult.h"
#include "model/SmartCallRequest.h"
#include "model/SmartCallResult.h"
#include "model/SmartCallOperateRequest.h"
#include "model/SmartCallOperateResult.h"
#include "model/StartMicroOutboundRequest.h"
#include "model/StartMicroOutboundResult.h"
#include "model/StartRobotTaskRequest.h"
#include "model/StartRobotTaskResult.h"
#include "model/StopRobotTaskRequest.h"
#include "model/StopRobotTaskResult.h"
#include "model/SubmitHotlineTransferRegisterRequest.h"
#include "model/SubmitHotlineTransferRegisterResult.h"
#include "model/UnbindNumberAndVoipIdRequest.h"
#include "model/UnbindNumberAndVoipIdResult.h"
#include "model/UndoRtcNumberAuthRequest.h"
#include "model/UndoRtcNumberAuthResult.h"
#include "model/UploadRobotTaskCalledFileRequest.h"
#include "model/UploadRobotTaskCalledFileResult.h"
#include "model/VoipAddAccountRequest.h"
#include "model/VoipAddAccountResult.h"
#include "model/VoipGetTokenRequest.h"
#include "model/VoipGetTokenResult.h"


namespace AlibabaCloud
{
	namespace Dyvmsapi
	{
		class ALIBABACLOUD_DYVMSAPI_EXPORT DyvmsapiClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddRtcAccountResult> AddRtcAccountOutcome;
			typedef std::future<AddRtcAccountOutcome> AddRtcAccountOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::AddRtcAccountRequest&, const AddRtcAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddRtcAccountAsyncHandler;
			typedef Outcome<Error, Model::AddVirtualNumberRelationResult> AddVirtualNumberRelationOutcome;
			typedef std::future<AddVirtualNumberRelationOutcome> AddVirtualNumberRelationOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::AddVirtualNumberRelationRequest&, const AddVirtualNumberRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddVirtualNumberRelationAsyncHandler;
			typedef Outcome<Error, Model::BatchRobotSmartCallResult> BatchRobotSmartCallOutcome;
			typedef std::future<BatchRobotSmartCallOutcome> BatchRobotSmartCallOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::BatchRobotSmartCallRequest&, const BatchRobotSmartCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchRobotSmartCallAsyncHandler;
			typedef Outcome<Error, Model::BindNumberAndVoipIdResult> BindNumberAndVoipIdOutcome;
			typedef std::future<BindNumberAndVoipIdOutcome> BindNumberAndVoipIdOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::BindNumberAndVoipIdRequest&, const BindNumberAndVoipIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindNumberAndVoipIdAsyncHandler;
			typedef Outcome<Error, Model::CancelCallResult> CancelCallOutcome;
			typedef std::future<CancelCallOutcome> CancelCallOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::CancelCallRequest&, const CancelCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelCallAsyncHandler;
			typedef Outcome<Error, Model::CancelOrderRobotTaskResult> CancelOrderRobotTaskOutcome;
			typedef std::future<CancelOrderRobotTaskOutcome> CancelOrderRobotTaskOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::CancelOrderRobotTaskRequest&, const CancelOrderRobotTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelOrderRobotTaskAsyncHandler;
			typedef Outcome<Error, Model::CancelRobotTaskResult> CancelRobotTaskOutcome;
			typedef std::future<CancelRobotTaskOutcome> CancelRobotTaskOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::CancelRobotTaskRequest&, const CancelRobotTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelRobotTaskAsyncHandler;
			typedef Outcome<Error, Model::ClickToDialResult> ClickToDialOutcome;
			typedef std::future<ClickToDialOutcome> ClickToDialOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::ClickToDialRequest&, const ClickToDialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ClickToDialAsyncHandler;
			typedef Outcome<Error, Model::CloseSipAccountResult> CloseSipAccountOutcome;
			typedef std::future<CloseSipAccountOutcome> CloseSipAccountOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::CloseSipAccountRequest&, const CloseSipAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloseSipAccountAsyncHandler;
			typedef Outcome<Error, Model::CreateCallTaskResult> CreateCallTaskOutcome;
			typedef std::future<CreateCallTaskOutcome> CreateCallTaskOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::CreateCallTaskRequest&, const CreateCallTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCallTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateRobotTaskResult> CreateRobotTaskOutcome;
			typedef std::future<CreateRobotTaskOutcome> CreateRobotTaskOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::CreateRobotTaskRequest&, const CreateRobotTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRobotTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateSipAccountResult> CreateSipAccountOutcome;
			typedef std::future<CreateSipAccountOutcome> CreateSipAccountOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::CreateSipAccountRequest&, const CreateSipAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSipAccountAsyncHandler;
			typedef Outcome<Error, Model::DeleteRobotTaskResult> DeleteRobotTaskOutcome;
			typedef std::future<DeleteRobotTaskOutcome> DeleteRobotTaskOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::DeleteRobotTaskRequest&, const DeleteRobotTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRobotTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeRecordDataResult> DescribeRecordDataOutcome;
			typedef std::future<DescribeRecordDataOutcome> DescribeRecordDataOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::DescribeRecordDataRequest&, const DescribeRecordDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRecordDataAsyncHandler;
			typedef Outcome<Error, Model::DoRtcNumberAuthResult> DoRtcNumberAuthOutcome;
			typedef std::future<DoRtcNumberAuthOutcome> DoRtcNumberAuthOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::DoRtcNumberAuthRequest&, const DoRtcNumberAuthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DoRtcNumberAuthAsyncHandler;
			typedef Outcome<Error, Model::DoubleCallSeatResult> DoubleCallSeatOutcome;
			typedef std::future<DoubleCallSeatOutcome> DoubleCallSeatOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::DoubleCallSeatRequest&, const DoubleCallSeatOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DoubleCallSeatAsyncHandler;
			typedef Outcome<Error, Model::ExecuteCallTaskResult> ExecuteCallTaskOutcome;
			typedef std::future<ExecuteCallTaskOutcome> ExecuteCallTaskOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::ExecuteCallTaskRequest&, const ExecuteCallTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteCallTaskAsyncHandler;
			typedef Outcome<Error, Model::GetCallInfoResult> GetCallInfoOutcome;
			typedef std::future<GetCallInfoOutcome> GetCallInfoOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::GetCallInfoRequest&, const GetCallInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCallInfoAsyncHandler;
			typedef Outcome<Error, Model::GetHotlineQualificationByOrderResult> GetHotlineQualificationByOrderOutcome;
			typedef std::future<GetHotlineQualificationByOrderOutcome> GetHotlineQualificationByOrderOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::GetHotlineQualificationByOrderRequest&, const GetHotlineQualificationByOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetHotlineQualificationByOrderAsyncHandler;
			typedef Outcome<Error, Model::GetRtcTokenResult> GetRtcTokenOutcome;
			typedef std::future<GetRtcTokenOutcome> GetRtcTokenOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::GetRtcTokenRequest&, const GetRtcTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRtcTokenAsyncHandler;
			typedef Outcome<Error, Model::GetTokenResult> GetTokenOutcome;
			typedef std::future<GetTokenOutcome> GetTokenOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::GetTokenRequest&, const GetTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTokenAsyncHandler;
			typedef Outcome<Error, Model::IvrCallResult> IvrCallOutcome;
			typedef std::future<IvrCallOutcome> IvrCallOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::IvrCallRequest&, const IvrCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> IvrCallAsyncHandler;
			typedef Outcome<Error, Model::ListCallTaskResult> ListCallTaskOutcome;
			typedef std::future<ListCallTaskOutcome> ListCallTaskOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::ListCallTaskRequest&, const ListCallTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCallTaskAsyncHandler;
			typedef Outcome<Error, Model::ListCallTaskDetailResult> ListCallTaskDetailOutcome;
			typedef std::future<ListCallTaskDetailOutcome> ListCallTaskDetailOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::ListCallTaskDetailRequest&, const ListCallTaskDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCallTaskDetailAsyncHandler;
			typedef Outcome<Error, Model::ListHotlineTransferNumberResult> ListHotlineTransferNumberOutcome;
			typedef std::future<ListHotlineTransferNumberOutcome> ListHotlineTransferNumberOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::ListHotlineTransferNumberRequest&, const ListHotlineTransferNumberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListHotlineTransferNumberAsyncHandler;
			typedef Outcome<Error, Model::ListHotlineTransferRegisterFileResult> ListHotlineTransferRegisterFileOutcome;
			typedef std::future<ListHotlineTransferRegisterFileOutcome> ListHotlineTransferRegisterFileOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::ListHotlineTransferRegisterFileRequest&, const ListHotlineTransferRegisterFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListHotlineTransferRegisterFileAsyncHandler;
			typedef Outcome<Error, Model::ListOrderedNumbersResult> ListOrderedNumbersOutcome;
			typedef std::future<ListOrderedNumbersOutcome> ListOrderedNumbersOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::ListOrderedNumbersRequest&, const ListOrderedNumbersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOrderedNumbersAsyncHandler;
			typedef Outcome<Error, Model::ListOutboundStrategiesResult> ListOutboundStrategiesOutcome;
			typedef std::future<ListOutboundStrategiesOutcome> ListOutboundStrategiesOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::ListOutboundStrategiesRequest&, const ListOutboundStrategiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOutboundStrategiesAsyncHandler;
			typedef Outcome<Error, Model::ListRobotTaskCallsResult> ListRobotTaskCallsOutcome;
			typedef std::future<ListRobotTaskCallsOutcome> ListRobotTaskCallsOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::ListRobotTaskCallsRequest&, const ListRobotTaskCallsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRobotTaskCallsAsyncHandler;
			typedef Outcome<Error, Model::QueryCallDetailByCallIdResult> QueryCallDetailByCallIdOutcome;
			typedef std::future<QueryCallDetailByCallIdOutcome> QueryCallDetailByCallIdOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::QueryCallDetailByCallIdRequest&, const QueryCallDetailByCallIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCallDetailByCallIdAsyncHandler;
			typedef Outcome<Error, Model::QueryCallDetailByTaskIdResult> QueryCallDetailByTaskIdOutcome;
			typedef std::future<QueryCallDetailByTaskIdOutcome> QueryCallDetailByTaskIdOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::QueryCallDetailByTaskIdRequest&, const QueryCallDetailByTaskIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCallDetailByTaskIdAsyncHandler;
			typedef Outcome<Error, Model::QueryCallInPoolTransferConfigResult> QueryCallInPoolTransferConfigOutcome;
			typedef std::future<QueryCallInPoolTransferConfigOutcome> QueryCallInPoolTransferConfigOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::QueryCallInPoolTransferConfigRequest&, const QueryCallInPoolTransferConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCallInPoolTransferConfigAsyncHandler;
			typedef Outcome<Error, Model::QueryCallInTransferRecordResult> QueryCallInTransferRecordOutcome;
			typedef std::future<QueryCallInTransferRecordOutcome> QueryCallInTransferRecordOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::QueryCallInTransferRecordRequest&, const QueryCallInTransferRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCallInTransferRecordAsyncHandler;
			typedef Outcome<Error, Model::QueryRobotInfoListResult> QueryRobotInfoListOutcome;
			typedef std::future<QueryRobotInfoListOutcome> QueryRobotInfoListOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::QueryRobotInfoListRequest&, const QueryRobotInfoListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRobotInfoListAsyncHandler;
			typedef Outcome<Error, Model::QueryRobotTaskCallDetailResult> QueryRobotTaskCallDetailOutcome;
			typedef std::future<QueryRobotTaskCallDetailOutcome> QueryRobotTaskCallDetailOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::QueryRobotTaskCallDetailRequest&, const QueryRobotTaskCallDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRobotTaskCallDetailAsyncHandler;
			typedef Outcome<Error, Model::QueryRobotTaskCallListResult> QueryRobotTaskCallListOutcome;
			typedef std::future<QueryRobotTaskCallListOutcome> QueryRobotTaskCallListOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::QueryRobotTaskCallListRequest&, const QueryRobotTaskCallListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRobotTaskCallListAsyncHandler;
			typedef Outcome<Error, Model::QueryRobotTaskDetailResult> QueryRobotTaskDetailOutcome;
			typedef std::future<QueryRobotTaskDetailOutcome> QueryRobotTaskDetailOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::QueryRobotTaskDetailRequest&, const QueryRobotTaskDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRobotTaskDetailAsyncHandler;
			typedef Outcome<Error, Model::QueryRobotTaskListResult> QueryRobotTaskListOutcome;
			typedef std::future<QueryRobotTaskListOutcome> QueryRobotTaskListOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::QueryRobotTaskListRequest&, const QueryRobotTaskListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRobotTaskListAsyncHandler;
			typedef Outcome<Error, Model::QueryRobotv2AllListResult> QueryRobotv2AllListOutcome;
			typedef std::future<QueryRobotv2AllListOutcome> QueryRobotv2AllListOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::QueryRobotv2AllListRequest&, const QueryRobotv2AllListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRobotv2AllListAsyncHandler;
			typedef Outcome<Error, Model::QueryRtcNumberAuthStatusResult> QueryRtcNumberAuthStatusOutcome;
			typedef std::future<QueryRtcNumberAuthStatusOutcome> QueryRtcNumberAuthStatusOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::QueryRtcNumberAuthStatusRequest&, const QueryRtcNumberAuthStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRtcNumberAuthStatusAsyncHandler;
			typedef Outcome<Error, Model::QueryVirtualNumberResult> QueryVirtualNumberOutcome;
			typedef std::future<QueryVirtualNumberOutcome> QueryVirtualNumberOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::QueryVirtualNumberRequest&, const QueryVirtualNumberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryVirtualNumberAsyncHandler;
			typedef Outcome<Error, Model::QueryVirtualNumberRelationResult> QueryVirtualNumberRelationOutcome;
			typedef std::future<QueryVirtualNumberRelationOutcome> QueryVirtualNumberRelationOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::QueryVirtualNumberRelationRequest&, const QueryVirtualNumberRelationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryVirtualNumberRelationAsyncHandler;
			typedef Outcome<Error, Model::QueryVoipNumberBindInfosResult> QueryVoipNumberBindInfosOutcome;
			typedef std::future<QueryVoipNumberBindInfosOutcome> QueryVoipNumberBindInfosOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::QueryVoipNumberBindInfosRequest&, const QueryVoipNumberBindInfosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryVoipNumberBindInfosAsyncHandler;
			typedef Outcome<Error, Model::ReportVoipProblemsResult> ReportVoipProblemsOutcome;
			typedef std::future<ReportVoipProblemsOutcome> ReportVoipProblemsOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::ReportVoipProblemsRequest&, const ReportVoipProblemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReportVoipProblemsAsyncHandler;
			typedef Outcome<Error, Model::SendVerificationResult> SendVerificationOutcome;
			typedef std::future<SendVerificationOutcome> SendVerificationOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::SendVerificationRequest&, const SendVerificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendVerificationAsyncHandler;
			typedef Outcome<Error, Model::SetTransferCalleePoolConfigResult> SetTransferCalleePoolConfigOutcome;
			typedef std::future<SetTransferCalleePoolConfigOutcome> SetTransferCalleePoolConfigOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::SetTransferCalleePoolConfigRequest&, const SetTransferCalleePoolConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetTransferCalleePoolConfigAsyncHandler;
			typedef Outcome<Error, Model::SingleCallByTtsResult> SingleCallByTtsOutcome;
			typedef std::future<SingleCallByTtsOutcome> SingleCallByTtsOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::SingleCallByTtsRequest&, const SingleCallByTtsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SingleCallByTtsAsyncHandler;
			typedef Outcome<Error, Model::SingleCallByVoiceResult> SingleCallByVoiceOutcome;
			typedef std::future<SingleCallByVoiceOutcome> SingleCallByVoiceOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::SingleCallByVoiceRequest&, const SingleCallByVoiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SingleCallByVoiceAsyncHandler;
			typedef Outcome<Error, Model::SmartCallResult> SmartCallOutcome;
			typedef std::future<SmartCallOutcome> SmartCallOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::SmartCallRequest&, const SmartCallOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SmartCallAsyncHandler;
			typedef Outcome<Error, Model::SmartCallOperateResult> SmartCallOperateOutcome;
			typedef std::future<SmartCallOperateOutcome> SmartCallOperateOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::SmartCallOperateRequest&, const SmartCallOperateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SmartCallOperateAsyncHandler;
			typedef Outcome<Error, Model::StartMicroOutboundResult> StartMicroOutboundOutcome;
			typedef std::future<StartMicroOutboundOutcome> StartMicroOutboundOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::StartMicroOutboundRequest&, const StartMicroOutboundOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartMicroOutboundAsyncHandler;
			typedef Outcome<Error, Model::StartRobotTaskResult> StartRobotTaskOutcome;
			typedef std::future<StartRobotTaskOutcome> StartRobotTaskOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::StartRobotTaskRequest&, const StartRobotTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartRobotTaskAsyncHandler;
			typedef Outcome<Error, Model::StopRobotTaskResult> StopRobotTaskOutcome;
			typedef std::future<StopRobotTaskOutcome> StopRobotTaskOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::StopRobotTaskRequest&, const StopRobotTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopRobotTaskAsyncHandler;
			typedef Outcome<Error, Model::SubmitHotlineTransferRegisterResult> SubmitHotlineTransferRegisterOutcome;
			typedef std::future<SubmitHotlineTransferRegisterOutcome> SubmitHotlineTransferRegisterOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::SubmitHotlineTransferRegisterRequest&, const SubmitHotlineTransferRegisterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitHotlineTransferRegisterAsyncHandler;
			typedef Outcome<Error, Model::UnbindNumberAndVoipIdResult> UnbindNumberAndVoipIdOutcome;
			typedef std::future<UnbindNumberAndVoipIdOutcome> UnbindNumberAndVoipIdOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::UnbindNumberAndVoipIdRequest&, const UnbindNumberAndVoipIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindNumberAndVoipIdAsyncHandler;
			typedef Outcome<Error, Model::UndoRtcNumberAuthResult> UndoRtcNumberAuthOutcome;
			typedef std::future<UndoRtcNumberAuthOutcome> UndoRtcNumberAuthOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::UndoRtcNumberAuthRequest&, const UndoRtcNumberAuthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UndoRtcNumberAuthAsyncHandler;
			typedef Outcome<Error, Model::UploadRobotTaskCalledFileResult> UploadRobotTaskCalledFileOutcome;
			typedef std::future<UploadRobotTaskCalledFileOutcome> UploadRobotTaskCalledFileOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::UploadRobotTaskCalledFileRequest&, const UploadRobotTaskCalledFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadRobotTaskCalledFileAsyncHandler;
			typedef Outcome<Error, Model::VoipAddAccountResult> VoipAddAccountOutcome;
			typedef std::future<VoipAddAccountOutcome> VoipAddAccountOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::VoipAddAccountRequest&, const VoipAddAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VoipAddAccountAsyncHandler;
			typedef Outcome<Error, Model::VoipGetTokenResult> VoipGetTokenOutcome;
			typedef std::future<VoipGetTokenOutcome> VoipGetTokenOutcomeCallable;
			typedef std::function<void(const DyvmsapiClient*, const Model::VoipGetTokenRequest&, const VoipGetTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VoipGetTokenAsyncHandler;

			DyvmsapiClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DyvmsapiClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DyvmsapiClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DyvmsapiClient();
			AddRtcAccountOutcome addRtcAccount(const Model::AddRtcAccountRequest &request)const;
			void addRtcAccountAsync(const Model::AddRtcAccountRequest& request, const AddRtcAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddRtcAccountOutcomeCallable addRtcAccountCallable(const Model::AddRtcAccountRequest& request) const;
			AddVirtualNumberRelationOutcome addVirtualNumberRelation(const Model::AddVirtualNumberRelationRequest &request)const;
			void addVirtualNumberRelationAsync(const Model::AddVirtualNumberRelationRequest& request, const AddVirtualNumberRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddVirtualNumberRelationOutcomeCallable addVirtualNumberRelationCallable(const Model::AddVirtualNumberRelationRequest& request) const;
			BatchRobotSmartCallOutcome batchRobotSmartCall(const Model::BatchRobotSmartCallRequest &request)const;
			void batchRobotSmartCallAsync(const Model::BatchRobotSmartCallRequest& request, const BatchRobotSmartCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchRobotSmartCallOutcomeCallable batchRobotSmartCallCallable(const Model::BatchRobotSmartCallRequest& request) const;
			BindNumberAndVoipIdOutcome bindNumberAndVoipId(const Model::BindNumberAndVoipIdRequest &request)const;
			void bindNumberAndVoipIdAsync(const Model::BindNumberAndVoipIdRequest& request, const BindNumberAndVoipIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindNumberAndVoipIdOutcomeCallable bindNumberAndVoipIdCallable(const Model::BindNumberAndVoipIdRequest& request) const;
			CancelCallOutcome cancelCall(const Model::CancelCallRequest &request)const;
			void cancelCallAsync(const Model::CancelCallRequest& request, const CancelCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelCallOutcomeCallable cancelCallCallable(const Model::CancelCallRequest& request) const;
			CancelOrderRobotTaskOutcome cancelOrderRobotTask(const Model::CancelOrderRobotTaskRequest &request)const;
			void cancelOrderRobotTaskAsync(const Model::CancelOrderRobotTaskRequest& request, const CancelOrderRobotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelOrderRobotTaskOutcomeCallable cancelOrderRobotTaskCallable(const Model::CancelOrderRobotTaskRequest& request) const;
			CancelRobotTaskOutcome cancelRobotTask(const Model::CancelRobotTaskRequest &request)const;
			void cancelRobotTaskAsync(const Model::CancelRobotTaskRequest& request, const CancelRobotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelRobotTaskOutcomeCallable cancelRobotTaskCallable(const Model::CancelRobotTaskRequest& request) const;
			ClickToDialOutcome clickToDial(const Model::ClickToDialRequest &request)const;
			void clickToDialAsync(const Model::ClickToDialRequest& request, const ClickToDialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ClickToDialOutcomeCallable clickToDialCallable(const Model::ClickToDialRequest& request) const;
			CloseSipAccountOutcome closeSipAccount(const Model::CloseSipAccountRequest &request)const;
			void closeSipAccountAsync(const Model::CloseSipAccountRequest& request, const CloseSipAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloseSipAccountOutcomeCallable closeSipAccountCallable(const Model::CloseSipAccountRequest& request) const;
			CreateCallTaskOutcome createCallTask(const Model::CreateCallTaskRequest &request)const;
			void createCallTaskAsync(const Model::CreateCallTaskRequest& request, const CreateCallTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCallTaskOutcomeCallable createCallTaskCallable(const Model::CreateCallTaskRequest& request) const;
			CreateRobotTaskOutcome createRobotTask(const Model::CreateRobotTaskRequest &request)const;
			void createRobotTaskAsync(const Model::CreateRobotTaskRequest& request, const CreateRobotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRobotTaskOutcomeCallable createRobotTaskCallable(const Model::CreateRobotTaskRequest& request) const;
			CreateSipAccountOutcome createSipAccount(const Model::CreateSipAccountRequest &request)const;
			void createSipAccountAsync(const Model::CreateSipAccountRequest& request, const CreateSipAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSipAccountOutcomeCallable createSipAccountCallable(const Model::CreateSipAccountRequest& request) const;
			DeleteRobotTaskOutcome deleteRobotTask(const Model::DeleteRobotTaskRequest &request)const;
			void deleteRobotTaskAsync(const Model::DeleteRobotTaskRequest& request, const DeleteRobotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRobotTaskOutcomeCallable deleteRobotTaskCallable(const Model::DeleteRobotTaskRequest& request) const;
			DescribeRecordDataOutcome describeRecordData(const Model::DescribeRecordDataRequest &request)const;
			void describeRecordDataAsync(const Model::DescribeRecordDataRequest& request, const DescribeRecordDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRecordDataOutcomeCallable describeRecordDataCallable(const Model::DescribeRecordDataRequest& request) const;
			DoRtcNumberAuthOutcome doRtcNumberAuth(const Model::DoRtcNumberAuthRequest &request)const;
			void doRtcNumberAuthAsync(const Model::DoRtcNumberAuthRequest& request, const DoRtcNumberAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DoRtcNumberAuthOutcomeCallable doRtcNumberAuthCallable(const Model::DoRtcNumberAuthRequest& request) const;
			DoubleCallSeatOutcome doubleCallSeat(const Model::DoubleCallSeatRequest &request)const;
			void doubleCallSeatAsync(const Model::DoubleCallSeatRequest& request, const DoubleCallSeatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DoubleCallSeatOutcomeCallable doubleCallSeatCallable(const Model::DoubleCallSeatRequest& request) const;
			ExecuteCallTaskOutcome executeCallTask(const Model::ExecuteCallTaskRequest &request)const;
			void executeCallTaskAsync(const Model::ExecuteCallTaskRequest& request, const ExecuteCallTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecuteCallTaskOutcomeCallable executeCallTaskCallable(const Model::ExecuteCallTaskRequest& request) const;
			GetCallInfoOutcome getCallInfo(const Model::GetCallInfoRequest &request)const;
			void getCallInfoAsync(const Model::GetCallInfoRequest& request, const GetCallInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCallInfoOutcomeCallable getCallInfoCallable(const Model::GetCallInfoRequest& request) const;
			GetHotlineQualificationByOrderOutcome getHotlineQualificationByOrder(const Model::GetHotlineQualificationByOrderRequest &request)const;
			void getHotlineQualificationByOrderAsync(const Model::GetHotlineQualificationByOrderRequest& request, const GetHotlineQualificationByOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetHotlineQualificationByOrderOutcomeCallable getHotlineQualificationByOrderCallable(const Model::GetHotlineQualificationByOrderRequest& request) const;
			GetRtcTokenOutcome getRtcToken(const Model::GetRtcTokenRequest &request)const;
			void getRtcTokenAsync(const Model::GetRtcTokenRequest& request, const GetRtcTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRtcTokenOutcomeCallable getRtcTokenCallable(const Model::GetRtcTokenRequest& request) const;
			GetTokenOutcome getToken(const Model::GetTokenRequest &request)const;
			void getTokenAsync(const Model::GetTokenRequest& request, const GetTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTokenOutcomeCallable getTokenCallable(const Model::GetTokenRequest& request) const;
			IvrCallOutcome ivrCall(const Model::IvrCallRequest &request)const;
			void ivrCallAsync(const Model::IvrCallRequest& request, const IvrCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			IvrCallOutcomeCallable ivrCallCallable(const Model::IvrCallRequest& request) const;
			ListCallTaskOutcome listCallTask(const Model::ListCallTaskRequest &request)const;
			void listCallTaskAsync(const Model::ListCallTaskRequest& request, const ListCallTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCallTaskOutcomeCallable listCallTaskCallable(const Model::ListCallTaskRequest& request) const;
			ListCallTaskDetailOutcome listCallTaskDetail(const Model::ListCallTaskDetailRequest &request)const;
			void listCallTaskDetailAsync(const Model::ListCallTaskDetailRequest& request, const ListCallTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCallTaskDetailOutcomeCallable listCallTaskDetailCallable(const Model::ListCallTaskDetailRequest& request) const;
			ListHotlineTransferNumberOutcome listHotlineTransferNumber(const Model::ListHotlineTransferNumberRequest &request)const;
			void listHotlineTransferNumberAsync(const Model::ListHotlineTransferNumberRequest& request, const ListHotlineTransferNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListHotlineTransferNumberOutcomeCallable listHotlineTransferNumberCallable(const Model::ListHotlineTransferNumberRequest& request) const;
			ListHotlineTransferRegisterFileOutcome listHotlineTransferRegisterFile(const Model::ListHotlineTransferRegisterFileRequest &request)const;
			void listHotlineTransferRegisterFileAsync(const Model::ListHotlineTransferRegisterFileRequest& request, const ListHotlineTransferRegisterFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListHotlineTransferRegisterFileOutcomeCallable listHotlineTransferRegisterFileCallable(const Model::ListHotlineTransferRegisterFileRequest& request) const;
			ListOrderedNumbersOutcome listOrderedNumbers(const Model::ListOrderedNumbersRequest &request)const;
			void listOrderedNumbersAsync(const Model::ListOrderedNumbersRequest& request, const ListOrderedNumbersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOrderedNumbersOutcomeCallable listOrderedNumbersCallable(const Model::ListOrderedNumbersRequest& request) const;
			ListOutboundStrategiesOutcome listOutboundStrategies(const Model::ListOutboundStrategiesRequest &request)const;
			void listOutboundStrategiesAsync(const Model::ListOutboundStrategiesRequest& request, const ListOutboundStrategiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOutboundStrategiesOutcomeCallable listOutboundStrategiesCallable(const Model::ListOutboundStrategiesRequest& request) const;
			ListRobotTaskCallsOutcome listRobotTaskCalls(const Model::ListRobotTaskCallsRequest &request)const;
			void listRobotTaskCallsAsync(const Model::ListRobotTaskCallsRequest& request, const ListRobotTaskCallsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRobotTaskCallsOutcomeCallable listRobotTaskCallsCallable(const Model::ListRobotTaskCallsRequest& request) const;
			QueryCallDetailByCallIdOutcome queryCallDetailByCallId(const Model::QueryCallDetailByCallIdRequest &request)const;
			void queryCallDetailByCallIdAsync(const Model::QueryCallDetailByCallIdRequest& request, const QueryCallDetailByCallIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCallDetailByCallIdOutcomeCallable queryCallDetailByCallIdCallable(const Model::QueryCallDetailByCallIdRequest& request) const;
			QueryCallDetailByTaskIdOutcome queryCallDetailByTaskId(const Model::QueryCallDetailByTaskIdRequest &request)const;
			void queryCallDetailByTaskIdAsync(const Model::QueryCallDetailByTaskIdRequest& request, const QueryCallDetailByTaskIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCallDetailByTaskIdOutcomeCallable queryCallDetailByTaskIdCallable(const Model::QueryCallDetailByTaskIdRequest& request) const;
			QueryCallInPoolTransferConfigOutcome queryCallInPoolTransferConfig(const Model::QueryCallInPoolTransferConfigRequest &request)const;
			void queryCallInPoolTransferConfigAsync(const Model::QueryCallInPoolTransferConfigRequest& request, const QueryCallInPoolTransferConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCallInPoolTransferConfigOutcomeCallable queryCallInPoolTransferConfigCallable(const Model::QueryCallInPoolTransferConfigRequest& request) const;
			QueryCallInTransferRecordOutcome queryCallInTransferRecord(const Model::QueryCallInTransferRecordRequest &request)const;
			void queryCallInTransferRecordAsync(const Model::QueryCallInTransferRecordRequest& request, const QueryCallInTransferRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCallInTransferRecordOutcomeCallable queryCallInTransferRecordCallable(const Model::QueryCallInTransferRecordRequest& request) const;
			QueryRobotInfoListOutcome queryRobotInfoList(const Model::QueryRobotInfoListRequest &request)const;
			void queryRobotInfoListAsync(const Model::QueryRobotInfoListRequest& request, const QueryRobotInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRobotInfoListOutcomeCallable queryRobotInfoListCallable(const Model::QueryRobotInfoListRequest& request) const;
			QueryRobotTaskCallDetailOutcome queryRobotTaskCallDetail(const Model::QueryRobotTaskCallDetailRequest &request)const;
			void queryRobotTaskCallDetailAsync(const Model::QueryRobotTaskCallDetailRequest& request, const QueryRobotTaskCallDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRobotTaskCallDetailOutcomeCallable queryRobotTaskCallDetailCallable(const Model::QueryRobotTaskCallDetailRequest& request) const;
			QueryRobotTaskCallListOutcome queryRobotTaskCallList(const Model::QueryRobotTaskCallListRequest &request)const;
			void queryRobotTaskCallListAsync(const Model::QueryRobotTaskCallListRequest& request, const QueryRobotTaskCallListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRobotTaskCallListOutcomeCallable queryRobotTaskCallListCallable(const Model::QueryRobotTaskCallListRequest& request) const;
			QueryRobotTaskDetailOutcome queryRobotTaskDetail(const Model::QueryRobotTaskDetailRequest &request)const;
			void queryRobotTaskDetailAsync(const Model::QueryRobotTaskDetailRequest& request, const QueryRobotTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRobotTaskDetailOutcomeCallable queryRobotTaskDetailCallable(const Model::QueryRobotTaskDetailRequest& request) const;
			QueryRobotTaskListOutcome queryRobotTaskList(const Model::QueryRobotTaskListRequest &request)const;
			void queryRobotTaskListAsync(const Model::QueryRobotTaskListRequest& request, const QueryRobotTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRobotTaskListOutcomeCallable queryRobotTaskListCallable(const Model::QueryRobotTaskListRequest& request) const;
			QueryRobotv2AllListOutcome queryRobotv2AllList(const Model::QueryRobotv2AllListRequest &request)const;
			void queryRobotv2AllListAsync(const Model::QueryRobotv2AllListRequest& request, const QueryRobotv2AllListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRobotv2AllListOutcomeCallable queryRobotv2AllListCallable(const Model::QueryRobotv2AllListRequest& request) const;
			QueryRtcNumberAuthStatusOutcome queryRtcNumberAuthStatus(const Model::QueryRtcNumberAuthStatusRequest &request)const;
			void queryRtcNumberAuthStatusAsync(const Model::QueryRtcNumberAuthStatusRequest& request, const QueryRtcNumberAuthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRtcNumberAuthStatusOutcomeCallable queryRtcNumberAuthStatusCallable(const Model::QueryRtcNumberAuthStatusRequest& request) const;
			QueryVirtualNumberOutcome queryVirtualNumber(const Model::QueryVirtualNumberRequest &request)const;
			void queryVirtualNumberAsync(const Model::QueryVirtualNumberRequest& request, const QueryVirtualNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryVirtualNumberOutcomeCallable queryVirtualNumberCallable(const Model::QueryVirtualNumberRequest& request) const;
			QueryVirtualNumberRelationOutcome queryVirtualNumberRelation(const Model::QueryVirtualNumberRelationRequest &request)const;
			void queryVirtualNumberRelationAsync(const Model::QueryVirtualNumberRelationRequest& request, const QueryVirtualNumberRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryVirtualNumberRelationOutcomeCallable queryVirtualNumberRelationCallable(const Model::QueryVirtualNumberRelationRequest& request) const;
			QueryVoipNumberBindInfosOutcome queryVoipNumberBindInfos(const Model::QueryVoipNumberBindInfosRequest &request)const;
			void queryVoipNumberBindInfosAsync(const Model::QueryVoipNumberBindInfosRequest& request, const QueryVoipNumberBindInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryVoipNumberBindInfosOutcomeCallable queryVoipNumberBindInfosCallable(const Model::QueryVoipNumberBindInfosRequest& request) const;
			ReportVoipProblemsOutcome reportVoipProblems(const Model::ReportVoipProblemsRequest &request)const;
			void reportVoipProblemsAsync(const Model::ReportVoipProblemsRequest& request, const ReportVoipProblemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReportVoipProblemsOutcomeCallable reportVoipProblemsCallable(const Model::ReportVoipProblemsRequest& request) const;
			SendVerificationOutcome sendVerification(const Model::SendVerificationRequest &request)const;
			void sendVerificationAsync(const Model::SendVerificationRequest& request, const SendVerificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendVerificationOutcomeCallable sendVerificationCallable(const Model::SendVerificationRequest& request) const;
			SetTransferCalleePoolConfigOutcome setTransferCalleePoolConfig(const Model::SetTransferCalleePoolConfigRequest &request)const;
			void setTransferCalleePoolConfigAsync(const Model::SetTransferCalleePoolConfigRequest& request, const SetTransferCalleePoolConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetTransferCalleePoolConfigOutcomeCallable setTransferCalleePoolConfigCallable(const Model::SetTransferCalleePoolConfigRequest& request) const;
			SingleCallByTtsOutcome singleCallByTts(const Model::SingleCallByTtsRequest &request)const;
			void singleCallByTtsAsync(const Model::SingleCallByTtsRequest& request, const SingleCallByTtsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SingleCallByTtsOutcomeCallable singleCallByTtsCallable(const Model::SingleCallByTtsRequest& request) const;
			SingleCallByVoiceOutcome singleCallByVoice(const Model::SingleCallByVoiceRequest &request)const;
			void singleCallByVoiceAsync(const Model::SingleCallByVoiceRequest& request, const SingleCallByVoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SingleCallByVoiceOutcomeCallable singleCallByVoiceCallable(const Model::SingleCallByVoiceRequest& request) const;
			SmartCallOutcome smartCall(const Model::SmartCallRequest &request)const;
			void smartCallAsync(const Model::SmartCallRequest& request, const SmartCallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SmartCallOutcomeCallable smartCallCallable(const Model::SmartCallRequest& request) const;
			SmartCallOperateOutcome smartCallOperate(const Model::SmartCallOperateRequest &request)const;
			void smartCallOperateAsync(const Model::SmartCallOperateRequest& request, const SmartCallOperateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SmartCallOperateOutcomeCallable smartCallOperateCallable(const Model::SmartCallOperateRequest& request) const;
			StartMicroOutboundOutcome startMicroOutbound(const Model::StartMicroOutboundRequest &request)const;
			void startMicroOutboundAsync(const Model::StartMicroOutboundRequest& request, const StartMicroOutboundAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartMicroOutboundOutcomeCallable startMicroOutboundCallable(const Model::StartMicroOutboundRequest& request) const;
			StartRobotTaskOutcome startRobotTask(const Model::StartRobotTaskRequest &request)const;
			void startRobotTaskAsync(const Model::StartRobotTaskRequest& request, const StartRobotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartRobotTaskOutcomeCallable startRobotTaskCallable(const Model::StartRobotTaskRequest& request) const;
			StopRobotTaskOutcome stopRobotTask(const Model::StopRobotTaskRequest &request)const;
			void stopRobotTaskAsync(const Model::StopRobotTaskRequest& request, const StopRobotTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopRobotTaskOutcomeCallable stopRobotTaskCallable(const Model::StopRobotTaskRequest& request) const;
			SubmitHotlineTransferRegisterOutcome submitHotlineTransferRegister(const Model::SubmitHotlineTransferRegisterRequest &request)const;
			void submitHotlineTransferRegisterAsync(const Model::SubmitHotlineTransferRegisterRequest& request, const SubmitHotlineTransferRegisterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitHotlineTransferRegisterOutcomeCallable submitHotlineTransferRegisterCallable(const Model::SubmitHotlineTransferRegisterRequest& request) const;
			UnbindNumberAndVoipIdOutcome unbindNumberAndVoipId(const Model::UnbindNumberAndVoipIdRequest &request)const;
			void unbindNumberAndVoipIdAsync(const Model::UnbindNumberAndVoipIdRequest& request, const UnbindNumberAndVoipIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindNumberAndVoipIdOutcomeCallable unbindNumberAndVoipIdCallable(const Model::UnbindNumberAndVoipIdRequest& request) const;
			UndoRtcNumberAuthOutcome undoRtcNumberAuth(const Model::UndoRtcNumberAuthRequest &request)const;
			void undoRtcNumberAuthAsync(const Model::UndoRtcNumberAuthRequest& request, const UndoRtcNumberAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UndoRtcNumberAuthOutcomeCallable undoRtcNumberAuthCallable(const Model::UndoRtcNumberAuthRequest& request) const;
			UploadRobotTaskCalledFileOutcome uploadRobotTaskCalledFile(const Model::UploadRobotTaskCalledFileRequest &request)const;
			void uploadRobotTaskCalledFileAsync(const Model::UploadRobotTaskCalledFileRequest& request, const UploadRobotTaskCalledFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadRobotTaskCalledFileOutcomeCallable uploadRobotTaskCalledFileCallable(const Model::UploadRobotTaskCalledFileRequest& request) const;
			VoipAddAccountOutcome voipAddAccount(const Model::VoipAddAccountRequest &request)const;
			void voipAddAccountAsync(const Model::VoipAddAccountRequest& request, const VoipAddAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VoipAddAccountOutcomeCallable voipAddAccountCallable(const Model::VoipAddAccountRequest& request) const;
			VoipGetTokenOutcome voipGetToken(const Model::VoipGetTokenRequest &request)const;
			void voipGetTokenAsync(const Model::VoipGetTokenRequest& request, const VoipGetTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VoipGetTokenOutcomeCallable voipGetTokenCallable(const Model::VoipGetTokenRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DYVMSAPI_DYVMSAPICLIENT_H_
