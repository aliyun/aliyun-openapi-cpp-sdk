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

#ifndef ALIBABACLOUD_ALIYUNCVC_ALIYUNCVCCLIENT_H_
#define ALIBABACLOUD_ALIYUNCVC_ALIYUNCVCCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "AliyuncvcExport.h"
#include "model/ActiveDeviceRequest.h"
#include "model/ActiveDeviceResult.h"
#include "model/ActiveMeetingRequest.h"
#include "model/ActiveMeetingResult.h"
#include "model/ActiveMeetingCodeRequest.h"
#include "model/ActiveMeetingCodeResult.h"
#include "model/BatchCreateDeviceRequest.h"
#include "model/BatchCreateDeviceResult.h"
#include "model/BatchDeleteDevicesRequest.h"
#include "model/BatchDeleteDevicesResult.h"
#include "model/CallDeviceRequest.h"
#include "model/CallDeviceResult.h"
#include "model/CheckMeetingCodeRequest.h"
#include "model/CheckMeetingCodeResult.h"
#include "model/CreateDeviceMeetingRequest.h"
#include "model/CreateDeviceMeetingResult.h"
#include "model/CreateEvaluationRequest.h"
#include "model/CreateEvaluationResult.h"
#include "model/CreateLiveRequest.h"
#include "model/CreateLiveResult.h"
#include "model/CreateMeetingRequest.h"
#include "model/CreateMeetingResult.h"
#include "model/CreateMeetingInternationalRequest.h"
#include "model/CreateMeetingInternationalResult.h"
#include "model/CreateUserRequest.h"
#include "model/CreateUserResult.h"
#include "model/CreateUserEvaluationsRequest.h"
#include "model/CreateUserEvaluationsResult.h"
#include "model/CreateUserInternationalRequest.h"
#include "model/CreateUserInternationalResult.h"
#include "model/DeleteDeviceRequest.h"
#include "model/DeleteDeviceResult.h"
#include "model/DeleteLiveRequest.h"
#include "model/DeleteLiveResult.h"
#include "model/DeleteMeetingRequest.h"
#include "model/DeleteMeetingResult.h"
#include "model/DeleteUserRequest.h"
#include "model/DeleteUserResult.h"
#include "model/EndDeviceMeetingRequest.h"
#include "model/EndDeviceMeetingResult.h"
#include "model/EndLiveRequest.h"
#include "model/EndLiveResult.h"
#include "model/GetDeviceActiveCodeRequest.h"
#include "model/GetDeviceActiveCodeResult.h"
#include "model/GetDeviceTokenRequest.h"
#include "model/GetDeviceTokenResult.h"
#include "model/GetMeetingRequest.h"
#include "model/GetMeetingResult.h"
#include "model/GetMeetingInternationalRequest.h"
#include "model/GetMeetingInternationalResult.h"
#include "model/GetMeetingMemberRequest.h"
#include "model/GetMeetingMemberResult.h"
#include "model/GetMembersRequest.h"
#include "model/GetMembersResult.h"
#include "model/GetUserRequest.h"
#include "model/GetUserResult.h"
#include "model/JoinDeviceMeetingRequest.h"
#include "model/JoinDeviceMeetingResult.h"
#include "model/JoinLiveRequest.h"
#include "model/JoinLiveResult.h"
#include "model/JoinMeetingRequest.h"
#include "model/JoinMeetingResult.h"
#include "model/JoinMeetingInternationalRequest.h"
#include "model/JoinMeetingInternationalResult.h"
#include "model/ListCommoditiesRequest.h"
#include "model/ListCommoditiesResult.h"
#include "model/ListDeviceIpRequest.h"
#include "model/ListDeviceIpResult.h"
#include "model/ListDevicesRequest.h"
#include "model/ListDevicesResult.h"
#include "model/ListEvaluationsRequest.h"
#include "model/ListEvaluationsResult.h"
#include "model/ListIsvStatisticsRequest.h"
#include "model/ListIsvStatisticsResult.h"
#include "model/ListMembersRequest.h"
#include "model/ListMembersResult.h"
#include "model/ListUsersRequest.h"
#include "model/ListUsersResult.h"
#include "model/ModifyMeetingPasswordRequest.h"
#include "model/ModifyMeetingPasswordResult.h"
#include "model/ModifyMeetingPasswordInternationalRequest.h"
#include "model/ModifyMeetingPasswordInternationalResult.h"
#include "model/QueryIsvUserInfoRequest.h"
#include "model/QueryIsvUserInfoResult.h"
#include "model/QueryMeetingInfoRequest.h"
#include "model/QueryMeetingInfoResult.h"
#include "model/QueryMemberRecordRequest.h"
#include "model/QueryMemberRecordResult.h"
#include "model/QueryStatisticsRequest.h"
#include "model/QueryStatisticsResult.h"
#include "model/QueryUserBuyAttributeRequest.h"
#include "model/QueryUserBuyAttributeResult.h"
#include "model/QueryUserEvaluationRequest.h"
#include "model/QueryUserEvaluationResult.h"
#include "model/QueryUserInfoRequest.h"
#include "model/QueryUserInfoResult.h"
#include "model/QueryUserListRequest.h"
#include "model/QueryUserListResult.h"
#include "model/RegisterDeviceRequest.h"
#include "model/RegisterDeviceResult.h"
#include "model/RegisterUemDeviceRequest.h"
#include "model/RegisterUemDeviceResult.h"
#include "model/RemoveMeetingRequest.h"
#include "model/RemoveMeetingResult.h"
#include "model/StartLiveRequest.h"
#include "model/StartLiveResult.h"
#include "model/UpdateDeviceHeartBeatRequest.h"
#include "model/UpdateDeviceHeartBeatResult.h"
#include "model/UpdateGonggeLayoutRequest.h"
#include "model/UpdateGonggeLayoutResult.h"
#include "model/UpdateLivePasswordRequest.h"
#include "model/UpdateLivePasswordResult.h"


namespace AlibabaCloud
{
	namespace Aliyuncvc
	{
		class ALIBABACLOUD_ALIYUNCVC_EXPORT AliyuncvcClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ActiveDeviceResult> ActiveDeviceOutcome;
			typedef std::future<ActiveDeviceOutcome> ActiveDeviceOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::ActiveDeviceRequest&, const ActiveDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ActiveDeviceAsyncHandler;
			typedef Outcome<Error, Model::ActiveMeetingResult> ActiveMeetingOutcome;
			typedef std::future<ActiveMeetingOutcome> ActiveMeetingOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::ActiveMeetingRequest&, const ActiveMeetingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ActiveMeetingAsyncHandler;
			typedef Outcome<Error, Model::ActiveMeetingCodeResult> ActiveMeetingCodeOutcome;
			typedef std::future<ActiveMeetingCodeOutcome> ActiveMeetingCodeOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::ActiveMeetingCodeRequest&, const ActiveMeetingCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ActiveMeetingCodeAsyncHandler;
			typedef Outcome<Error, Model::BatchCreateDeviceResult> BatchCreateDeviceOutcome;
			typedef std::future<BatchCreateDeviceOutcome> BatchCreateDeviceOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::BatchCreateDeviceRequest&, const BatchCreateDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchCreateDeviceAsyncHandler;
			typedef Outcome<Error, Model::BatchDeleteDevicesResult> BatchDeleteDevicesOutcome;
			typedef std::future<BatchDeleteDevicesOutcome> BatchDeleteDevicesOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::BatchDeleteDevicesRequest&, const BatchDeleteDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteDevicesAsyncHandler;
			typedef Outcome<Error, Model::CallDeviceResult> CallDeviceOutcome;
			typedef std::future<CallDeviceOutcome> CallDeviceOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::CallDeviceRequest&, const CallDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CallDeviceAsyncHandler;
			typedef Outcome<Error, Model::CheckMeetingCodeResult> CheckMeetingCodeOutcome;
			typedef std::future<CheckMeetingCodeOutcome> CheckMeetingCodeOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::CheckMeetingCodeRequest&, const CheckMeetingCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckMeetingCodeAsyncHandler;
			typedef Outcome<Error, Model::CreateDeviceMeetingResult> CreateDeviceMeetingOutcome;
			typedef std::future<CreateDeviceMeetingOutcome> CreateDeviceMeetingOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::CreateDeviceMeetingRequest&, const CreateDeviceMeetingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeviceMeetingAsyncHandler;
			typedef Outcome<Error, Model::CreateEvaluationResult> CreateEvaluationOutcome;
			typedef std::future<CreateEvaluationOutcome> CreateEvaluationOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::CreateEvaluationRequest&, const CreateEvaluationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEvaluationAsyncHandler;
			typedef Outcome<Error, Model::CreateLiveResult> CreateLiveOutcome;
			typedef std::future<CreateLiveOutcome> CreateLiveOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::CreateLiveRequest&, const CreateLiveOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveAsyncHandler;
			typedef Outcome<Error, Model::CreateMeetingResult> CreateMeetingOutcome;
			typedef std::future<CreateMeetingOutcome> CreateMeetingOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::CreateMeetingRequest&, const CreateMeetingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMeetingAsyncHandler;
			typedef Outcome<Error, Model::CreateMeetingInternationalResult> CreateMeetingInternationalOutcome;
			typedef std::future<CreateMeetingInternationalOutcome> CreateMeetingInternationalOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::CreateMeetingInternationalRequest&, const CreateMeetingInternationalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMeetingInternationalAsyncHandler;
			typedef Outcome<Error, Model::CreateUserResult> CreateUserOutcome;
			typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::CreateUserRequest&, const CreateUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserAsyncHandler;
			typedef Outcome<Error, Model::CreateUserEvaluationsResult> CreateUserEvaluationsOutcome;
			typedef std::future<CreateUserEvaluationsOutcome> CreateUserEvaluationsOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::CreateUserEvaluationsRequest&, const CreateUserEvaluationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserEvaluationsAsyncHandler;
			typedef Outcome<Error, Model::CreateUserInternationalResult> CreateUserInternationalOutcome;
			typedef std::future<CreateUserInternationalOutcome> CreateUserInternationalOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::CreateUserInternationalRequest&, const CreateUserInternationalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserInternationalAsyncHandler;
			typedef Outcome<Error, Model::DeleteDeviceResult> DeleteDeviceOutcome;
			typedef std::future<DeleteDeviceOutcome> DeleteDeviceOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::DeleteDeviceRequest&, const DeleteDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceAsyncHandler;
			typedef Outcome<Error, Model::DeleteLiveResult> DeleteLiveOutcome;
			typedef std::future<DeleteLiveOutcome> DeleteLiveOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::DeleteLiveRequest&, const DeleteLiveOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLiveAsyncHandler;
			typedef Outcome<Error, Model::DeleteMeetingResult> DeleteMeetingOutcome;
			typedef std::future<DeleteMeetingOutcome> DeleteMeetingOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::DeleteMeetingRequest&, const DeleteMeetingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMeetingAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserResult> DeleteUserOutcome;
			typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::DeleteUserRequest&, const DeleteUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserAsyncHandler;
			typedef Outcome<Error, Model::EndDeviceMeetingResult> EndDeviceMeetingOutcome;
			typedef std::future<EndDeviceMeetingOutcome> EndDeviceMeetingOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::EndDeviceMeetingRequest&, const EndDeviceMeetingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EndDeviceMeetingAsyncHandler;
			typedef Outcome<Error, Model::EndLiveResult> EndLiveOutcome;
			typedef std::future<EndLiveOutcome> EndLiveOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::EndLiveRequest&, const EndLiveOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EndLiveAsyncHandler;
			typedef Outcome<Error, Model::GetDeviceActiveCodeResult> GetDeviceActiveCodeOutcome;
			typedef std::future<GetDeviceActiveCodeOutcome> GetDeviceActiveCodeOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::GetDeviceActiveCodeRequest&, const GetDeviceActiveCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDeviceActiveCodeAsyncHandler;
			typedef Outcome<Error, Model::GetDeviceTokenResult> GetDeviceTokenOutcome;
			typedef std::future<GetDeviceTokenOutcome> GetDeviceTokenOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::GetDeviceTokenRequest&, const GetDeviceTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDeviceTokenAsyncHandler;
			typedef Outcome<Error, Model::GetMeetingResult> GetMeetingOutcome;
			typedef std::future<GetMeetingOutcome> GetMeetingOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::GetMeetingRequest&, const GetMeetingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMeetingAsyncHandler;
			typedef Outcome<Error, Model::GetMeetingInternationalResult> GetMeetingInternationalOutcome;
			typedef std::future<GetMeetingInternationalOutcome> GetMeetingInternationalOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::GetMeetingInternationalRequest&, const GetMeetingInternationalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMeetingInternationalAsyncHandler;
			typedef Outcome<Error, Model::GetMeetingMemberResult> GetMeetingMemberOutcome;
			typedef std::future<GetMeetingMemberOutcome> GetMeetingMemberOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::GetMeetingMemberRequest&, const GetMeetingMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMeetingMemberAsyncHandler;
			typedef Outcome<Error, Model::GetMembersResult> GetMembersOutcome;
			typedef std::future<GetMembersOutcome> GetMembersOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::GetMembersRequest&, const GetMembersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMembersAsyncHandler;
			typedef Outcome<Error, Model::GetUserResult> GetUserOutcome;
			typedef std::future<GetUserOutcome> GetUserOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::GetUserRequest&, const GetUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserAsyncHandler;
			typedef Outcome<Error, Model::JoinDeviceMeetingResult> JoinDeviceMeetingOutcome;
			typedef std::future<JoinDeviceMeetingOutcome> JoinDeviceMeetingOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::JoinDeviceMeetingRequest&, const JoinDeviceMeetingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> JoinDeviceMeetingAsyncHandler;
			typedef Outcome<Error, Model::JoinLiveResult> JoinLiveOutcome;
			typedef std::future<JoinLiveOutcome> JoinLiveOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::JoinLiveRequest&, const JoinLiveOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> JoinLiveAsyncHandler;
			typedef Outcome<Error, Model::JoinMeetingResult> JoinMeetingOutcome;
			typedef std::future<JoinMeetingOutcome> JoinMeetingOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::JoinMeetingRequest&, const JoinMeetingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> JoinMeetingAsyncHandler;
			typedef Outcome<Error, Model::JoinMeetingInternationalResult> JoinMeetingInternationalOutcome;
			typedef std::future<JoinMeetingInternationalOutcome> JoinMeetingInternationalOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::JoinMeetingInternationalRequest&, const JoinMeetingInternationalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> JoinMeetingInternationalAsyncHandler;
			typedef Outcome<Error, Model::ListCommoditiesResult> ListCommoditiesOutcome;
			typedef std::future<ListCommoditiesOutcome> ListCommoditiesOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::ListCommoditiesRequest&, const ListCommoditiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCommoditiesAsyncHandler;
			typedef Outcome<Error, Model::ListDeviceIpResult> ListDeviceIpOutcome;
			typedef std::future<ListDeviceIpOutcome> ListDeviceIpOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::ListDeviceIpRequest&, const ListDeviceIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDeviceIpAsyncHandler;
			typedef Outcome<Error, Model::ListDevicesResult> ListDevicesOutcome;
			typedef std::future<ListDevicesOutcome> ListDevicesOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::ListDevicesRequest&, const ListDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDevicesAsyncHandler;
			typedef Outcome<Error, Model::ListEvaluationsResult> ListEvaluationsOutcome;
			typedef std::future<ListEvaluationsOutcome> ListEvaluationsOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::ListEvaluationsRequest&, const ListEvaluationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEvaluationsAsyncHandler;
			typedef Outcome<Error, Model::ListIsvStatisticsResult> ListIsvStatisticsOutcome;
			typedef std::future<ListIsvStatisticsOutcome> ListIsvStatisticsOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::ListIsvStatisticsRequest&, const ListIsvStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListIsvStatisticsAsyncHandler;
			typedef Outcome<Error, Model::ListMembersResult> ListMembersOutcome;
			typedef std::future<ListMembersOutcome> ListMembersOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::ListMembersRequest&, const ListMembersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMembersAsyncHandler;
			typedef Outcome<Error, Model::ListUsersResult> ListUsersOutcome;
			typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::ListUsersRequest&, const ListUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersAsyncHandler;
			typedef Outcome<Error, Model::ModifyMeetingPasswordResult> ModifyMeetingPasswordOutcome;
			typedef std::future<ModifyMeetingPasswordOutcome> ModifyMeetingPasswordOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::ModifyMeetingPasswordRequest&, const ModifyMeetingPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMeetingPasswordAsyncHandler;
			typedef Outcome<Error, Model::ModifyMeetingPasswordInternationalResult> ModifyMeetingPasswordInternationalOutcome;
			typedef std::future<ModifyMeetingPasswordInternationalOutcome> ModifyMeetingPasswordInternationalOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::ModifyMeetingPasswordInternationalRequest&, const ModifyMeetingPasswordInternationalOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMeetingPasswordInternationalAsyncHandler;
			typedef Outcome<Error, Model::QueryIsvUserInfoResult> QueryIsvUserInfoOutcome;
			typedef std::future<QueryIsvUserInfoOutcome> QueryIsvUserInfoOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::QueryIsvUserInfoRequest&, const QueryIsvUserInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryIsvUserInfoAsyncHandler;
			typedef Outcome<Error, Model::QueryMeetingInfoResult> QueryMeetingInfoOutcome;
			typedef std::future<QueryMeetingInfoOutcome> QueryMeetingInfoOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::QueryMeetingInfoRequest&, const QueryMeetingInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMeetingInfoAsyncHandler;
			typedef Outcome<Error, Model::QueryMemberRecordResult> QueryMemberRecordOutcome;
			typedef std::future<QueryMemberRecordOutcome> QueryMemberRecordOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::QueryMemberRecordRequest&, const QueryMemberRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMemberRecordAsyncHandler;
			typedef Outcome<Error, Model::QueryStatisticsResult> QueryStatisticsOutcome;
			typedef std::future<QueryStatisticsOutcome> QueryStatisticsOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::QueryStatisticsRequest&, const QueryStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryStatisticsAsyncHandler;
			typedef Outcome<Error, Model::QueryUserBuyAttributeResult> QueryUserBuyAttributeOutcome;
			typedef std::future<QueryUserBuyAttributeOutcome> QueryUserBuyAttributeOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::QueryUserBuyAttributeRequest&, const QueryUserBuyAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryUserBuyAttributeAsyncHandler;
			typedef Outcome<Error, Model::QueryUserEvaluationResult> QueryUserEvaluationOutcome;
			typedef std::future<QueryUserEvaluationOutcome> QueryUserEvaluationOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::QueryUserEvaluationRequest&, const QueryUserEvaluationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryUserEvaluationAsyncHandler;
			typedef Outcome<Error, Model::QueryUserInfoResult> QueryUserInfoOutcome;
			typedef std::future<QueryUserInfoOutcome> QueryUserInfoOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::QueryUserInfoRequest&, const QueryUserInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryUserInfoAsyncHandler;
			typedef Outcome<Error, Model::QueryUserListResult> QueryUserListOutcome;
			typedef std::future<QueryUserListOutcome> QueryUserListOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::QueryUserListRequest&, const QueryUserListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryUserListAsyncHandler;
			typedef Outcome<Error, Model::RegisterDeviceResult> RegisterDeviceOutcome;
			typedef std::future<RegisterDeviceOutcome> RegisterDeviceOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::RegisterDeviceRequest&, const RegisterDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RegisterDeviceAsyncHandler;
			typedef Outcome<Error, Model::RegisterUemDeviceResult> RegisterUemDeviceOutcome;
			typedef std::future<RegisterUemDeviceOutcome> RegisterUemDeviceOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::RegisterUemDeviceRequest&, const RegisterUemDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RegisterUemDeviceAsyncHandler;
			typedef Outcome<Error, Model::RemoveMeetingResult> RemoveMeetingOutcome;
			typedef std::future<RemoveMeetingOutcome> RemoveMeetingOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::RemoveMeetingRequest&, const RemoveMeetingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveMeetingAsyncHandler;
			typedef Outcome<Error, Model::StartLiveResult> StartLiveOutcome;
			typedef std::future<StartLiveOutcome> StartLiveOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::StartLiveRequest&, const StartLiveOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartLiveAsyncHandler;
			typedef Outcome<Error, Model::UpdateDeviceHeartBeatResult> UpdateDeviceHeartBeatOutcome;
			typedef std::future<UpdateDeviceHeartBeatOutcome> UpdateDeviceHeartBeatOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::UpdateDeviceHeartBeatRequest&, const UpdateDeviceHeartBeatOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDeviceHeartBeatAsyncHandler;
			typedef Outcome<Error, Model::UpdateGonggeLayoutResult> UpdateGonggeLayoutOutcome;
			typedef std::future<UpdateGonggeLayoutOutcome> UpdateGonggeLayoutOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::UpdateGonggeLayoutRequest&, const UpdateGonggeLayoutOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGonggeLayoutAsyncHandler;
			typedef Outcome<Error, Model::UpdateLivePasswordResult> UpdateLivePasswordOutcome;
			typedef std::future<UpdateLivePasswordOutcome> UpdateLivePasswordOutcomeCallable;
			typedef std::function<void(const AliyuncvcClient*, const Model::UpdateLivePasswordRequest&, const UpdateLivePasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLivePasswordAsyncHandler;

			AliyuncvcClient(const Credentials &credentials, const ClientConfiguration &configuration);
			AliyuncvcClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			AliyuncvcClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~AliyuncvcClient();
			ActiveDeviceOutcome activeDevice(const Model::ActiveDeviceRequest &request)const;
			void activeDeviceAsync(const Model::ActiveDeviceRequest& request, const ActiveDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ActiveDeviceOutcomeCallable activeDeviceCallable(const Model::ActiveDeviceRequest& request) const;
			ActiveMeetingOutcome activeMeeting(const Model::ActiveMeetingRequest &request)const;
			void activeMeetingAsync(const Model::ActiveMeetingRequest& request, const ActiveMeetingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ActiveMeetingOutcomeCallable activeMeetingCallable(const Model::ActiveMeetingRequest& request) const;
			ActiveMeetingCodeOutcome activeMeetingCode(const Model::ActiveMeetingCodeRequest &request)const;
			void activeMeetingCodeAsync(const Model::ActiveMeetingCodeRequest& request, const ActiveMeetingCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ActiveMeetingCodeOutcomeCallable activeMeetingCodeCallable(const Model::ActiveMeetingCodeRequest& request) const;
			BatchCreateDeviceOutcome batchCreateDevice(const Model::BatchCreateDeviceRequest &request)const;
			void batchCreateDeviceAsync(const Model::BatchCreateDeviceRequest& request, const BatchCreateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchCreateDeviceOutcomeCallable batchCreateDeviceCallable(const Model::BatchCreateDeviceRequest& request) const;
			BatchDeleteDevicesOutcome batchDeleteDevices(const Model::BatchDeleteDevicesRequest &request)const;
			void batchDeleteDevicesAsync(const Model::BatchDeleteDevicesRequest& request, const BatchDeleteDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchDeleteDevicesOutcomeCallable batchDeleteDevicesCallable(const Model::BatchDeleteDevicesRequest& request) const;
			CallDeviceOutcome callDevice(const Model::CallDeviceRequest &request)const;
			void callDeviceAsync(const Model::CallDeviceRequest& request, const CallDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CallDeviceOutcomeCallable callDeviceCallable(const Model::CallDeviceRequest& request) const;
			CheckMeetingCodeOutcome checkMeetingCode(const Model::CheckMeetingCodeRequest &request)const;
			void checkMeetingCodeAsync(const Model::CheckMeetingCodeRequest& request, const CheckMeetingCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckMeetingCodeOutcomeCallable checkMeetingCodeCallable(const Model::CheckMeetingCodeRequest& request) const;
			CreateDeviceMeetingOutcome createDeviceMeeting(const Model::CreateDeviceMeetingRequest &request)const;
			void createDeviceMeetingAsync(const Model::CreateDeviceMeetingRequest& request, const CreateDeviceMeetingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDeviceMeetingOutcomeCallable createDeviceMeetingCallable(const Model::CreateDeviceMeetingRequest& request) const;
			CreateEvaluationOutcome createEvaluation(const Model::CreateEvaluationRequest &request)const;
			void createEvaluationAsync(const Model::CreateEvaluationRequest& request, const CreateEvaluationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEvaluationOutcomeCallable createEvaluationCallable(const Model::CreateEvaluationRequest& request) const;
			CreateLiveOutcome createLive(const Model::CreateLiveRequest &request)const;
			void createLiveAsync(const Model::CreateLiveRequest& request, const CreateLiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLiveOutcomeCallable createLiveCallable(const Model::CreateLiveRequest& request) const;
			CreateMeetingOutcome createMeeting(const Model::CreateMeetingRequest &request)const;
			void createMeetingAsync(const Model::CreateMeetingRequest& request, const CreateMeetingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMeetingOutcomeCallable createMeetingCallable(const Model::CreateMeetingRequest& request) const;
			CreateMeetingInternationalOutcome createMeetingInternational(const Model::CreateMeetingInternationalRequest &request)const;
			void createMeetingInternationalAsync(const Model::CreateMeetingInternationalRequest& request, const CreateMeetingInternationalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMeetingInternationalOutcomeCallable createMeetingInternationalCallable(const Model::CreateMeetingInternationalRequest& request) const;
			CreateUserOutcome createUser(const Model::CreateUserRequest &request)const;
			void createUserAsync(const Model::CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUserOutcomeCallable createUserCallable(const Model::CreateUserRequest& request) const;
			CreateUserEvaluationsOutcome createUserEvaluations(const Model::CreateUserEvaluationsRequest &request)const;
			void createUserEvaluationsAsync(const Model::CreateUserEvaluationsRequest& request, const CreateUserEvaluationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUserEvaluationsOutcomeCallable createUserEvaluationsCallable(const Model::CreateUserEvaluationsRequest& request) const;
			CreateUserInternationalOutcome createUserInternational(const Model::CreateUserInternationalRequest &request)const;
			void createUserInternationalAsync(const Model::CreateUserInternationalRequest& request, const CreateUserInternationalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUserInternationalOutcomeCallable createUserInternationalCallable(const Model::CreateUserInternationalRequest& request) const;
			DeleteDeviceOutcome deleteDevice(const Model::DeleteDeviceRequest &request)const;
			void deleteDeviceAsync(const Model::DeleteDeviceRequest& request, const DeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDeviceOutcomeCallable deleteDeviceCallable(const Model::DeleteDeviceRequest& request) const;
			DeleteLiveOutcome deleteLive(const Model::DeleteLiveRequest &request)const;
			void deleteLiveAsync(const Model::DeleteLiveRequest& request, const DeleteLiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLiveOutcomeCallable deleteLiveCallable(const Model::DeleteLiveRequest& request) const;
			DeleteMeetingOutcome deleteMeeting(const Model::DeleteMeetingRequest &request)const;
			void deleteMeetingAsync(const Model::DeleteMeetingRequest& request, const DeleteMeetingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMeetingOutcomeCallable deleteMeetingCallable(const Model::DeleteMeetingRequest& request) const;
			DeleteUserOutcome deleteUser(const Model::DeleteUserRequest &request)const;
			void deleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserOutcomeCallable deleteUserCallable(const Model::DeleteUserRequest& request) const;
			EndDeviceMeetingOutcome endDeviceMeeting(const Model::EndDeviceMeetingRequest &request)const;
			void endDeviceMeetingAsync(const Model::EndDeviceMeetingRequest& request, const EndDeviceMeetingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EndDeviceMeetingOutcomeCallable endDeviceMeetingCallable(const Model::EndDeviceMeetingRequest& request) const;
			EndLiveOutcome endLive(const Model::EndLiveRequest &request)const;
			void endLiveAsync(const Model::EndLiveRequest& request, const EndLiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EndLiveOutcomeCallable endLiveCallable(const Model::EndLiveRequest& request) const;
			GetDeviceActiveCodeOutcome getDeviceActiveCode(const Model::GetDeviceActiveCodeRequest &request)const;
			void getDeviceActiveCodeAsync(const Model::GetDeviceActiveCodeRequest& request, const GetDeviceActiveCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDeviceActiveCodeOutcomeCallable getDeviceActiveCodeCallable(const Model::GetDeviceActiveCodeRequest& request) const;
			GetDeviceTokenOutcome getDeviceToken(const Model::GetDeviceTokenRequest &request)const;
			void getDeviceTokenAsync(const Model::GetDeviceTokenRequest& request, const GetDeviceTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDeviceTokenOutcomeCallable getDeviceTokenCallable(const Model::GetDeviceTokenRequest& request) const;
			GetMeetingOutcome getMeeting(const Model::GetMeetingRequest &request)const;
			void getMeetingAsync(const Model::GetMeetingRequest& request, const GetMeetingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMeetingOutcomeCallable getMeetingCallable(const Model::GetMeetingRequest& request) const;
			GetMeetingInternationalOutcome getMeetingInternational(const Model::GetMeetingInternationalRequest &request)const;
			void getMeetingInternationalAsync(const Model::GetMeetingInternationalRequest& request, const GetMeetingInternationalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMeetingInternationalOutcomeCallable getMeetingInternationalCallable(const Model::GetMeetingInternationalRequest& request) const;
			GetMeetingMemberOutcome getMeetingMember(const Model::GetMeetingMemberRequest &request)const;
			void getMeetingMemberAsync(const Model::GetMeetingMemberRequest& request, const GetMeetingMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMeetingMemberOutcomeCallable getMeetingMemberCallable(const Model::GetMeetingMemberRequest& request) const;
			GetMembersOutcome getMembers(const Model::GetMembersRequest &request)const;
			void getMembersAsync(const Model::GetMembersRequest& request, const GetMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMembersOutcomeCallable getMembersCallable(const Model::GetMembersRequest& request) const;
			GetUserOutcome getUser(const Model::GetUserRequest &request)const;
			void getUserAsync(const Model::GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserOutcomeCallable getUserCallable(const Model::GetUserRequest& request) const;
			JoinDeviceMeetingOutcome joinDeviceMeeting(const Model::JoinDeviceMeetingRequest &request)const;
			void joinDeviceMeetingAsync(const Model::JoinDeviceMeetingRequest& request, const JoinDeviceMeetingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			JoinDeviceMeetingOutcomeCallable joinDeviceMeetingCallable(const Model::JoinDeviceMeetingRequest& request) const;
			JoinLiveOutcome joinLive(const Model::JoinLiveRequest &request)const;
			void joinLiveAsync(const Model::JoinLiveRequest& request, const JoinLiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			JoinLiveOutcomeCallable joinLiveCallable(const Model::JoinLiveRequest& request) const;
			JoinMeetingOutcome joinMeeting(const Model::JoinMeetingRequest &request)const;
			void joinMeetingAsync(const Model::JoinMeetingRequest& request, const JoinMeetingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			JoinMeetingOutcomeCallable joinMeetingCallable(const Model::JoinMeetingRequest& request) const;
			JoinMeetingInternationalOutcome joinMeetingInternational(const Model::JoinMeetingInternationalRequest &request)const;
			void joinMeetingInternationalAsync(const Model::JoinMeetingInternationalRequest& request, const JoinMeetingInternationalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			JoinMeetingInternationalOutcomeCallable joinMeetingInternationalCallable(const Model::JoinMeetingInternationalRequest& request) const;
			ListCommoditiesOutcome listCommodities(const Model::ListCommoditiesRequest &request)const;
			void listCommoditiesAsync(const Model::ListCommoditiesRequest& request, const ListCommoditiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCommoditiesOutcomeCallable listCommoditiesCallable(const Model::ListCommoditiesRequest& request) const;
			ListDeviceIpOutcome listDeviceIp(const Model::ListDeviceIpRequest &request)const;
			void listDeviceIpAsync(const Model::ListDeviceIpRequest& request, const ListDeviceIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDeviceIpOutcomeCallable listDeviceIpCallable(const Model::ListDeviceIpRequest& request) const;
			ListDevicesOutcome listDevices(const Model::ListDevicesRequest &request)const;
			void listDevicesAsync(const Model::ListDevicesRequest& request, const ListDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDevicesOutcomeCallable listDevicesCallable(const Model::ListDevicesRequest& request) const;
			ListEvaluationsOutcome listEvaluations(const Model::ListEvaluationsRequest &request)const;
			void listEvaluationsAsync(const Model::ListEvaluationsRequest& request, const ListEvaluationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEvaluationsOutcomeCallable listEvaluationsCallable(const Model::ListEvaluationsRequest& request) const;
			ListIsvStatisticsOutcome listIsvStatistics(const Model::ListIsvStatisticsRequest &request)const;
			void listIsvStatisticsAsync(const Model::ListIsvStatisticsRequest& request, const ListIsvStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListIsvStatisticsOutcomeCallable listIsvStatisticsCallable(const Model::ListIsvStatisticsRequest& request) const;
			ListMembersOutcome listMembers(const Model::ListMembersRequest &request)const;
			void listMembersAsync(const Model::ListMembersRequest& request, const ListMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMembersOutcomeCallable listMembersCallable(const Model::ListMembersRequest& request) const;
			ListUsersOutcome listUsers(const Model::ListUsersRequest &request)const;
			void listUsersAsync(const Model::ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUsersOutcomeCallable listUsersCallable(const Model::ListUsersRequest& request) const;
			ModifyMeetingPasswordOutcome modifyMeetingPassword(const Model::ModifyMeetingPasswordRequest &request)const;
			void modifyMeetingPasswordAsync(const Model::ModifyMeetingPasswordRequest& request, const ModifyMeetingPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyMeetingPasswordOutcomeCallable modifyMeetingPasswordCallable(const Model::ModifyMeetingPasswordRequest& request) const;
			ModifyMeetingPasswordInternationalOutcome modifyMeetingPasswordInternational(const Model::ModifyMeetingPasswordInternationalRequest &request)const;
			void modifyMeetingPasswordInternationalAsync(const Model::ModifyMeetingPasswordInternationalRequest& request, const ModifyMeetingPasswordInternationalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyMeetingPasswordInternationalOutcomeCallable modifyMeetingPasswordInternationalCallable(const Model::ModifyMeetingPasswordInternationalRequest& request) const;
			QueryIsvUserInfoOutcome queryIsvUserInfo(const Model::QueryIsvUserInfoRequest &request)const;
			void queryIsvUserInfoAsync(const Model::QueryIsvUserInfoRequest& request, const QueryIsvUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryIsvUserInfoOutcomeCallable queryIsvUserInfoCallable(const Model::QueryIsvUserInfoRequest& request) const;
			QueryMeetingInfoOutcome queryMeetingInfo(const Model::QueryMeetingInfoRequest &request)const;
			void queryMeetingInfoAsync(const Model::QueryMeetingInfoRequest& request, const QueryMeetingInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMeetingInfoOutcomeCallable queryMeetingInfoCallable(const Model::QueryMeetingInfoRequest& request) const;
			QueryMemberRecordOutcome queryMemberRecord(const Model::QueryMemberRecordRequest &request)const;
			void queryMemberRecordAsync(const Model::QueryMemberRecordRequest& request, const QueryMemberRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMemberRecordOutcomeCallable queryMemberRecordCallable(const Model::QueryMemberRecordRequest& request) const;
			QueryStatisticsOutcome queryStatistics(const Model::QueryStatisticsRequest &request)const;
			void queryStatisticsAsync(const Model::QueryStatisticsRequest& request, const QueryStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryStatisticsOutcomeCallable queryStatisticsCallable(const Model::QueryStatisticsRequest& request) const;
			QueryUserBuyAttributeOutcome queryUserBuyAttribute(const Model::QueryUserBuyAttributeRequest &request)const;
			void queryUserBuyAttributeAsync(const Model::QueryUserBuyAttributeRequest& request, const QueryUserBuyAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryUserBuyAttributeOutcomeCallable queryUserBuyAttributeCallable(const Model::QueryUserBuyAttributeRequest& request) const;
			QueryUserEvaluationOutcome queryUserEvaluation(const Model::QueryUserEvaluationRequest &request)const;
			void queryUserEvaluationAsync(const Model::QueryUserEvaluationRequest& request, const QueryUserEvaluationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryUserEvaluationOutcomeCallable queryUserEvaluationCallable(const Model::QueryUserEvaluationRequest& request) const;
			QueryUserInfoOutcome queryUserInfo(const Model::QueryUserInfoRequest &request)const;
			void queryUserInfoAsync(const Model::QueryUserInfoRequest& request, const QueryUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryUserInfoOutcomeCallable queryUserInfoCallable(const Model::QueryUserInfoRequest& request) const;
			QueryUserListOutcome queryUserList(const Model::QueryUserListRequest &request)const;
			void queryUserListAsync(const Model::QueryUserListRequest& request, const QueryUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryUserListOutcomeCallable queryUserListCallable(const Model::QueryUserListRequest& request) const;
			RegisterDeviceOutcome registerDevice(const Model::RegisterDeviceRequest &request)const;
			void registerDeviceAsync(const Model::RegisterDeviceRequest& request, const RegisterDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RegisterDeviceOutcomeCallable registerDeviceCallable(const Model::RegisterDeviceRequest& request) const;
			RegisterUemDeviceOutcome registerUemDevice(const Model::RegisterUemDeviceRequest &request)const;
			void registerUemDeviceAsync(const Model::RegisterUemDeviceRequest& request, const RegisterUemDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RegisterUemDeviceOutcomeCallable registerUemDeviceCallable(const Model::RegisterUemDeviceRequest& request) const;
			RemoveMeetingOutcome removeMeeting(const Model::RemoveMeetingRequest &request)const;
			void removeMeetingAsync(const Model::RemoveMeetingRequest& request, const RemoveMeetingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveMeetingOutcomeCallable removeMeetingCallable(const Model::RemoveMeetingRequest& request) const;
			StartLiveOutcome startLive(const Model::StartLiveRequest &request)const;
			void startLiveAsync(const Model::StartLiveRequest& request, const StartLiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartLiveOutcomeCallable startLiveCallable(const Model::StartLiveRequest& request) const;
			UpdateDeviceHeartBeatOutcome updateDeviceHeartBeat(const Model::UpdateDeviceHeartBeatRequest &request)const;
			void updateDeviceHeartBeatAsync(const Model::UpdateDeviceHeartBeatRequest& request, const UpdateDeviceHeartBeatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDeviceHeartBeatOutcomeCallable updateDeviceHeartBeatCallable(const Model::UpdateDeviceHeartBeatRequest& request) const;
			UpdateGonggeLayoutOutcome updateGonggeLayout(const Model::UpdateGonggeLayoutRequest &request)const;
			void updateGonggeLayoutAsync(const Model::UpdateGonggeLayoutRequest& request, const UpdateGonggeLayoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGonggeLayoutOutcomeCallable updateGonggeLayoutCallable(const Model::UpdateGonggeLayoutRequest& request) const;
			UpdateLivePasswordOutcome updateLivePassword(const Model::UpdateLivePasswordRequest &request)const;
			void updateLivePasswordAsync(const Model::UpdateLivePasswordRequest& request, const UpdateLivePasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLivePasswordOutcomeCallable updateLivePasswordCallable(const Model::UpdateLivePasswordRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ALIYUNCVC_ALIYUNCVCCLIENT_H_
