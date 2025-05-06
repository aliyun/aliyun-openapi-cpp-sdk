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

#ifndef ALIBABACLOUD_ITAG_ITAGCLIENT_H_
#define ALIBABACLOUD_ITAG_ITAGCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "ItagExport.h"
#include "model/AbandonItemRequest.h"
#include "model/AbandonItemResult.h"
#include "model/AbandonItemByAdminRequest.h"
#include "model/AbandonItemByAdminResult.h"
#include "model/AcceptSamplingTaskRequest.h"
#include "model/AcceptSamplingTaskResult.h"
#include "model/AddMemberOrGroupTaskRequest.h"
#include "model/AddMemberOrGroupTaskResult.h"
#include "model/AddUserRequest.h"
#include "model/AddUserResult.h"
#include "model/AddUserToGroupRequest.h"
#include "model/AddUserToGroupResult.h"
#include "model/AddUserToTntRequest.h"
#include "model/AddUserToTntResult.h"
#include "model/AppendDataToDatasetRequest.h"
#include "model/AppendDataToDatasetResult.h"
#include "model/AsyncDownloadMarkResultRequest.h"
#include "model/AsyncDownloadMarkResultResult.h"
#include "model/BatchRejectTaskRequest.h"
#include "model/BatchRejectTaskResult.h"
#include "model/CanCommitRequest.h"
#include "model/CanCommitResult.h"
#include "model/CheckModelRequest.h"
#include "model/CheckModelResult.h"
#include "model/CommitSubTaskRequest.h"
#include "model/CommitSubTaskResult.h"
#include "model/CreateDatasetRequest.h"
#include "model/CreateDatasetResult.h"
#include "model/CreateModelRequest.h"
#include "model/CreateModelResult.h"
#include "model/CreateOptionTemplateRequest.h"
#include "model/CreateOptionTemplateResult.h"
#include "model/CreateOrUpdateTntConfigRequest.h"
#include "model/CreateOrUpdateTntConfigResult.h"
#include "model/CreateTaskRequest.h"
#include "model/CreateTaskResult.h"
#include "model/CreateUserGroupRequest.h"
#include "model/CreateUserGroupResult.h"
#include "model/DeleteFeedbackRequest.h"
#include "model/DeleteFeedbackResult.h"
#include "model/DeleteModelRequest.h"
#include "model/DeleteModelResult.h"
#include "model/DeleteOptionTemplateRequest.h"
#include "model/DeleteOptionTemplateResult.h"
#include "model/DeleteTaskRequest.h"
#include "model/DeleteTaskResult.h"
#include "model/DeleteUserGroupRequest.h"
#include "model/DeleteUserGroupResult.h"
#include "model/DiscardSubTaskRequest.h"
#include "model/DiscardSubTaskResult.h"
#include "model/DownloadIntPersonSummaryRequest.h"
#include "model/DownloadIntPersonSummaryResult.h"
#include "model/ExportOptionTemplateRequest.h"
#include "model/ExportOptionTemplateResult.h"
#include "model/ExtendUserAuthInTaskRequest.h"
#include "model/ExtendUserAuthInTaskResult.h"
#include "model/FetchVideoMarkResultRequest.h"
#include "model/FetchVideoMarkResultResult.h"
#include "model/FlowInstanceCallbackRequest.h"
#include "model/FlowInstanceCallbackResult.h"
#include "model/GetAssignedCheckTaskSummaryRequest.h"
#include "model/GetAssignedCheckTaskSummaryResult.h"
#include "model/GetBizPersonSummaryRequest.h"
#include "model/GetBizPersonSummaryResult.h"
#include "model/GetBizSummaryRequest.h"
#include "model/GetBizSummaryResult.h"
#include "model/GetCheckUserDetailRequest.h"
#include "model/GetCheckUserDetailResult.h"
#include "model/GetCheckUserEfficiencyRequest.h"
#include "model/GetCheckUserEfficiencyResult.h"
#include "model/GetCheckUserSummaryRequest.h"
#include "model/GetCheckUserSummaryResult.h"
#include "model/GetCommitSummaryRequest.h"
#include "model/GetCommitSummaryResult.h"
#include "model/GetDatasetProxyRequest.h"
#include "model/GetDatasetProxyResult.h"
#include "model/GetFlowJobRequest.h"
#include "model/GetFlowJobResult.h"
#include "model/GetGroupHandlingSummaryRequest.h"
#include "model/GetGroupHandlingSummaryResult.h"
#include "model/GetGroupTaskDetailRequest.h"
#include "model/GetGroupTaskDetailResult.h"
#include "model/GetGroupTaskPersonDetailRequest.h"
#include "model/GetGroupTaskPersonDetailResult.h"
#include "model/GetHistoryMarkResultRequest.h"
#include "model/GetHistoryMarkResultResult.h"
#include "model/GetIntWholeSummaryRequest.h"
#include "model/GetIntWholeSummaryResult.h"
#include "model/GetMarkPersonDetailRequest.h"
#include "model/GetMarkPersonDetailResult.h"
#include "model/GetMarkPersonHandlingSummaryRequest.h"
#include "model/GetMarkPersonHandlingSummaryResult.h"
#include "model/GetMarkQuantityRequest.h"
#include "model/GetMarkQuantityResult.h"
#include "model/GetMarkResultRequest.h"
#include "model/GetMarkResultResult.h"
#include "model/GetMarkUserDetailRequest.h"
#include "model/GetMarkUserDetailResult.h"
#include "model/GetMarkUserEfficiencyRequest.h"
#include "model/GetMarkUserEfficiencyResult.h"
#include "model/GetMarkUserSummaryRequest.h"
#include "model/GetMarkUserSummaryResult.h"
#include "model/GetModelByIdRequest.h"
#include "model/GetModelByIdResult.h"
#include "model/GetOptionTemplateRequest.h"
#include "model/GetOptionTemplateResult.h"
#include "model/GetOrCreateTntInstByBizNoRequest.h"
#include "model/GetOrCreateTntInstByBizNoResult.h"
#include "model/GetPersonSummaryRequest.h"
#include "model/GetPersonSummaryResult.h"
#include "model/GetSamplingSummaryRequest.h"
#include "model/GetSamplingSummaryResult.h"
#include "model/GetSubTaskDownloadSystemResultRequest.h"
#include "model/GetSubTaskDownloadSystemResultResult.h"
#include "model/GetSubTaskDownloadUserResultRequest.h"
#include "model/GetSubTaskDownloadUserResultResult.h"
#include "model/GetSubTaskSummaryRequest.h"
#include "model/GetSubTaskSummaryResult.h"
#include "model/GetTaskRequest.h"
#include "model/GetTaskResult.h"
#include "model/GetTaskPersonSummaryRequest.h"
#include "model/GetTaskPersonSummaryResult.h"
#include "model/GetTaskProcessInfoRequest.h"
#include "model/GetTaskProcessInfoResult.h"
#include "model/GetTaskStatTypesRequest.h"
#include "model/GetTaskStatTypesResult.h"
#include "model/GetTaskSummaryRequest.h"
#include "model/GetTaskSummaryResult.h"
#include "model/GetTntConfListValueRequest.h"
#include "model/GetTntConfListValueResult.h"
#include "model/GetTntUserRoleRequest.h"
#include "model/GetTntUserRoleResult.h"
#include "model/GetUpdateTimeRequest.h"
#include "model/GetUpdateTimeResult.h"
#include "model/GetUserRequest.h"
#include "model/GetUserResult.h"
#include "model/GetUserMarkItemInfoRequest.h"
#include "model/GetUserMarkItemInfoResult.h"
#include "model/ImportOptionTemplateRequest.h"
#include "model/ImportOptionTemplateResult.h"
#include "model/InitSamplingUserSubTaskRequest.h"
#include "model/InitSamplingUserSubTaskResult.h"
#include "model/ListAssignedSubUserTaskRequest.h"
#include "model/ListAssignedSubUserTaskResult.h"
#include "model/ListCheckTaskRequest.h"
#include "model/ListCheckTaskResult.h"
#include "model/ListDatasetFieldsRequest.h"
#include "model/ListDatasetFieldsResult.h"
#include "model/ListFinishedSubUserTaskRequest.h"
#include "model/ListFinishedSubUserTaskResult.h"
#include "model/ListMarkableTaskRequest.h"
#include "model/ListMarkableTaskResult.h"
#include "model/ListSamplingHandlerUserRequest.h"
#include "model/ListSamplingHandlerUserResult.h"
#include "model/ListSamplingResultMetaRequest.h"
#include "model/ListSamplingResultMetaResult.h"
#include "model/ListSamplingUsersRequest.h"
#include "model/ListSamplingUsersResult.h"
#include "model/ListTntConfigRequest.h"
#include "model/ListTntConfigResult.h"
#include "model/ListWorkNodeUsersRequest.h"
#include "model/ListWorkNodeUsersResult.h"
#include "model/ManualCalReportRequest.h"
#include "model/ManualCalReportResult.h"
#include "model/MngReleaseUserSubTaskRequest.h"
#include "model/MngReleaseUserSubTaskResult.h"
#include "model/OfflineTaskRequest.h"
#include "model/OfflineTaskResult.h"
#include "model/OnlineTaskRequest.h"
#include "model/OnlineTaskResult.h"
#include "model/PageViewDataMetaRequest.h"
#include "model/PageViewDataMetaResult.h"
#include "model/PageViewDatasetProxyRequest.h"
#include "model/PageViewDatasetProxyResult.h"
#include "model/PageViewFlowJobRequest.h"
#include "model/PageViewFlowJobResult.h"
#include "model/PageViewModelRequest.h"
#include "model/PageViewModelResult.h"
#include "model/PageViewMyTntRequest.h"
#include "model/PageViewMyTntResult.h"
#include "model/PageViewOptionTemplateRequest.h"
#include "model/PageViewOptionTemplateResult.h"
#include "model/PageViewSubTaskItemRequest.h"
#include "model/PageViewSubTaskItemResult.h"
#include "model/PageViewTaskRequest.h"
#include "model/PageViewTaskResult.h"
#include "model/PageViewTntUserRequest.h"
#include "model/PageViewTntUserResult.h"
#include "model/PageViewUserRequest.h"
#include "model/PageViewUserResult.h"
#include "model/PageViewUserGroupRequest.h"
#include "model/PageViewUserGroupResult.h"
#include "model/PageviewSubTaskRequest.h"
#include "model/PageviewSubTaskResult.h"
#include "model/PollingSampleMarkItemsRequest.h"
#include "model/PollingSampleMarkItemsResult.h"
#include "model/PreviewTaskTemplateRequest.h"
#include "model/PreviewTaskTemplateResult.h"
#include "model/ProxyRobotServiceRequest.h"
#include "model/ProxyRobotServiceResult.h"
#include "model/QueryMarkableSubTaskRequest.h"
#include "model/QueryMarkableSubTaskResult.h"
#include "model/QuerySampleMarkItemsRequest.h"
#include "model/QuerySampleMarkItemsResult.h"
#include "model/QuerySamplingPoolSizeRequest.h"
#include "model/QuerySamplingPoolSizeResult.h"
#include "model/QuerySkipUserSubTaskRequest.h"
#include "model/QuerySkipUserSubTaskResult.h"
#include "model/RejectSamplingTaskRequest.h"
#include "model/RejectSamplingTaskResult.h"
#include "model/RejectSubTaskRequest.h"
#include "model/RejectSubTaskResult.h"
#include "model/ReleaseUserSubTaskRequest.h"
#include "model/ReleaseUserSubTaskResult.h"
#include "model/RemoveMemberOrGroupTaskRequest.h"
#include "model/RemoveMemberOrGroupTaskResult.h"
#include "model/RemoveUserInGroupRequest.h"
#include "model/RemoveUserInGroupResult.h"
#include "model/RemoveUserInTntRequest.h"
#include "model/RemoveUserInTntResult.h"
#include "model/SamplingSubUserTaskListRequest.h"
#include "model/SamplingSubUserTaskListResult.h"
#include "model/SkipFinishedRequest.h"
#include "model/SkipFinishedResult.h"
#include "model/SkipUserSubTaskRequest.h"
#include "model/SkipUserSubTaskResult.h"
#include "model/TaskStageStatRequest.h"
#include "model/TaskStageStatResult.h"
#include "model/TestRequestRequest.h"
#include "model/TestRequestResult.h"
#include "model/TransferUserSubTaskRequest.h"
#include "model/TransferUserSubTaskResult.h"
#include "model/UnpassFeedbackRequest.h"
#include "model/UnpassFeedbackResult.h"
#include "model/UpdateDatasetStateMsgRequest.h"
#include "model/UpdateDatasetStateMsgResult.h"
#include "model/UpdateMarkResultRequest.h"
#include "model/UpdateMarkResultResult.h"
#include "model/UpdateMarkResultByAdminRequest.h"
#include "model/UpdateMarkResultByAdminResult.h"
#include "model/UpdateModelRequest.h"
#include "model/UpdateModelResult.h"
#include "model/UpdateTaskRequest.h"
#include "model/UpdateTaskResult.h"
#include "model/UpdateTaskDataRequest.h"
#include "model/UpdateTaskDataResult.h"
#include "model/UpdateTaskTemplateRequest.h"
#include "model/UpdateTaskTemplateResult.h"
#include "model/UpdateTemplateRequest.h"
#include "model/UpdateTemplateResult.h"
#include "model/UpdateUserNameRequest.h"
#include "model/UpdateUserNameResult.h"
#include "model/UpdateUserRoleInTntRequest.h"
#include "model/UpdateUserRoleInTntResult.h"
#include "model/UserSubTaskTimerRequest.h"
#include "model/UserSubTaskTimerResult.h"


namespace AlibabaCloud
{
	namespace Itag
	{
		class ALIBABACLOUD_ITAG_EXPORT ItagClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::AbandonItemResult> AbandonItemOutcome;
			typedef std::future<AbandonItemOutcome> AbandonItemOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::AbandonItemRequest&, const AbandonItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AbandonItemAsyncHandler;
			typedef Outcome<Error, Model::AbandonItemByAdminResult> AbandonItemByAdminOutcome;
			typedef std::future<AbandonItemByAdminOutcome> AbandonItemByAdminOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::AbandonItemByAdminRequest&, const AbandonItemByAdminOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AbandonItemByAdminAsyncHandler;
			typedef Outcome<Error, Model::AcceptSamplingTaskResult> AcceptSamplingTaskOutcome;
			typedef std::future<AcceptSamplingTaskOutcome> AcceptSamplingTaskOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::AcceptSamplingTaskRequest&, const AcceptSamplingTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AcceptSamplingTaskAsyncHandler;
			typedef Outcome<Error, Model::AddMemberOrGroupTaskResult> AddMemberOrGroupTaskOutcome;
			typedef std::future<AddMemberOrGroupTaskOutcome> AddMemberOrGroupTaskOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::AddMemberOrGroupTaskRequest&, const AddMemberOrGroupTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddMemberOrGroupTaskAsyncHandler;
			typedef Outcome<Error, Model::AddUserResult> AddUserOutcome;
			typedef std::future<AddUserOutcome> AddUserOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::AddUserRequest&, const AddUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddUserAsyncHandler;
			typedef Outcome<Error, Model::AddUserToGroupResult> AddUserToGroupOutcome;
			typedef std::future<AddUserToGroupOutcome> AddUserToGroupOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::AddUserToGroupRequest&, const AddUserToGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddUserToGroupAsyncHandler;
			typedef Outcome<Error, Model::AddUserToTntResult> AddUserToTntOutcome;
			typedef std::future<AddUserToTntOutcome> AddUserToTntOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::AddUserToTntRequest&, const AddUserToTntOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddUserToTntAsyncHandler;
			typedef Outcome<Error, Model::AppendDataToDatasetResult> AppendDataToDatasetOutcome;
			typedef std::future<AppendDataToDatasetOutcome> AppendDataToDatasetOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::AppendDataToDatasetRequest&, const AppendDataToDatasetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AppendDataToDatasetAsyncHandler;
			typedef Outcome<Error, Model::AsyncDownloadMarkResultResult> AsyncDownloadMarkResultOutcome;
			typedef std::future<AsyncDownloadMarkResultOutcome> AsyncDownloadMarkResultOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::AsyncDownloadMarkResultRequest&, const AsyncDownloadMarkResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AsyncDownloadMarkResultAsyncHandler;
			typedef Outcome<Error, Model::BatchRejectTaskResult> BatchRejectTaskOutcome;
			typedef std::future<BatchRejectTaskOutcome> BatchRejectTaskOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::BatchRejectTaskRequest&, const BatchRejectTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchRejectTaskAsyncHandler;
			typedef Outcome<Error, Model::CanCommitResult> CanCommitOutcome;
			typedef std::future<CanCommitOutcome> CanCommitOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::CanCommitRequest&, const CanCommitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CanCommitAsyncHandler;
			typedef Outcome<Error, Model::CheckModelResult> CheckModelOutcome;
			typedef std::future<CheckModelOutcome> CheckModelOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::CheckModelRequest&, const CheckModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckModelAsyncHandler;
			typedef Outcome<Error, Model::CommitSubTaskResult> CommitSubTaskOutcome;
			typedef std::future<CommitSubTaskOutcome> CommitSubTaskOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::CommitSubTaskRequest&, const CommitSubTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CommitSubTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateDatasetResult> CreateDatasetOutcome;
			typedef std::future<CreateDatasetOutcome> CreateDatasetOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::CreateDatasetRequest&, const CreateDatasetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatasetAsyncHandler;
			typedef Outcome<Error, Model::CreateModelResult> CreateModelOutcome;
			typedef std::future<CreateModelOutcome> CreateModelOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::CreateModelRequest&, const CreateModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateModelAsyncHandler;
			typedef Outcome<Error, Model::CreateOptionTemplateResult> CreateOptionTemplateOutcome;
			typedef std::future<CreateOptionTemplateOutcome> CreateOptionTemplateOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::CreateOptionTemplateRequest&, const CreateOptionTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOptionTemplateAsyncHandler;
			typedef Outcome<Error, Model::CreateOrUpdateTntConfigResult> CreateOrUpdateTntConfigOutcome;
			typedef std::future<CreateOrUpdateTntConfigOutcome> CreateOrUpdateTntConfigOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::CreateOrUpdateTntConfigRequest&, const CreateOrUpdateTntConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrUpdateTntConfigAsyncHandler;
			typedef Outcome<Error, Model::CreateTaskResult> CreateTaskOutcome;
			typedef std::future<CreateTaskOutcome> CreateTaskOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::CreateTaskRequest&, const CreateTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateUserGroupResult> CreateUserGroupOutcome;
			typedef std::future<CreateUserGroupOutcome> CreateUserGroupOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::CreateUserGroupRequest&, const CreateUserGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteFeedbackResult> DeleteFeedbackOutcome;
			typedef std::future<DeleteFeedbackOutcome> DeleteFeedbackOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::DeleteFeedbackRequest&, const DeleteFeedbackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFeedbackAsyncHandler;
			typedef Outcome<Error, Model::DeleteModelResult> DeleteModelOutcome;
			typedef std::future<DeleteModelOutcome> DeleteModelOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::DeleteModelRequest&, const DeleteModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteModelAsyncHandler;
			typedef Outcome<Error, Model::DeleteOptionTemplateResult> DeleteOptionTemplateOutcome;
			typedef std::future<DeleteOptionTemplateOutcome> DeleteOptionTemplateOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::DeleteOptionTemplateRequest&, const DeleteOptionTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOptionTemplateAsyncHandler;
			typedef Outcome<Error, Model::DeleteTaskResult> DeleteTaskOutcome;
			typedef std::future<DeleteTaskOutcome> DeleteTaskOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::DeleteTaskRequest&, const DeleteTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTaskAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserGroupResult> DeleteUserGroupOutcome;
			typedef std::future<DeleteUserGroupOutcome> DeleteUserGroupOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::DeleteUserGroupRequest&, const DeleteUserGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserGroupAsyncHandler;
			typedef Outcome<Error, Model::DiscardSubTaskResult> DiscardSubTaskOutcome;
			typedef std::future<DiscardSubTaskOutcome> DiscardSubTaskOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::DiscardSubTaskRequest&, const DiscardSubTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DiscardSubTaskAsyncHandler;
			typedef Outcome<Error, Model::DownloadIntPersonSummaryResult> DownloadIntPersonSummaryOutcome;
			typedef std::future<DownloadIntPersonSummaryOutcome> DownloadIntPersonSummaryOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::DownloadIntPersonSummaryRequest&, const DownloadIntPersonSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DownloadIntPersonSummaryAsyncHandler;
			typedef Outcome<Error, Model::ExportOptionTemplateResult> ExportOptionTemplateOutcome;
			typedef std::future<ExportOptionTemplateOutcome> ExportOptionTemplateOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::ExportOptionTemplateRequest&, const ExportOptionTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportOptionTemplateAsyncHandler;
			typedef Outcome<Error, Model::ExtendUserAuthInTaskResult> ExtendUserAuthInTaskOutcome;
			typedef std::future<ExtendUserAuthInTaskOutcome> ExtendUserAuthInTaskOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::ExtendUserAuthInTaskRequest&, const ExtendUserAuthInTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExtendUserAuthInTaskAsyncHandler;
			typedef Outcome<Error, Model::FetchVideoMarkResultResult> FetchVideoMarkResultOutcome;
			typedef std::future<FetchVideoMarkResultOutcome> FetchVideoMarkResultOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::FetchVideoMarkResultRequest&, const FetchVideoMarkResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FetchVideoMarkResultAsyncHandler;
			typedef Outcome<Error, Model::FlowInstanceCallbackResult> FlowInstanceCallbackOutcome;
			typedef std::future<FlowInstanceCallbackOutcome> FlowInstanceCallbackOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::FlowInstanceCallbackRequest&, const FlowInstanceCallbackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FlowInstanceCallbackAsyncHandler;
			typedef Outcome<Error, Model::GetAssignedCheckTaskSummaryResult> GetAssignedCheckTaskSummaryOutcome;
			typedef std::future<GetAssignedCheckTaskSummaryOutcome> GetAssignedCheckTaskSummaryOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetAssignedCheckTaskSummaryRequest&, const GetAssignedCheckTaskSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAssignedCheckTaskSummaryAsyncHandler;
			typedef Outcome<Error, Model::GetBizPersonSummaryResult> GetBizPersonSummaryOutcome;
			typedef std::future<GetBizPersonSummaryOutcome> GetBizPersonSummaryOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetBizPersonSummaryRequest&, const GetBizPersonSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBizPersonSummaryAsyncHandler;
			typedef Outcome<Error, Model::GetBizSummaryResult> GetBizSummaryOutcome;
			typedef std::future<GetBizSummaryOutcome> GetBizSummaryOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetBizSummaryRequest&, const GetBizSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBizSummaryAsyncHandler;
			typedef Outcome<Error, Model::GetCheckUserDetailResult> GetCheckUserDetailOutcome;
			typedef std::future<GetCheckUserDetailOutcome> GetCheckUserDetailOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetCheckUserDetailRequest&, const GetCheckUserDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCheckUserDetailAsyncHandler;
			typedef Outcome<Error, Model::GetCheckUserEfficiencyResult> GetCheckUserEfficiencyOutcome;
			typedef std::future<GetCheckUserEfficiencyOutcome> GetCheckUserEfficiencyOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetCheckUserEfficiencyRequest&, const GetCheckUserEfficiencyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCheckUserEfficiencyAsyncHandler;
			typedef Outcome<Error, Model::GetCheckUserSummaryResult> GetCheckUserSummaryOutcome;
			typedef std::future<GetCheckUserSummaryOutcome> GetCheckUserSummaryOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetCheckUserSummaryRequest&, const GetCheckUserSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCheckUserSummaryAsyncHandler;
			typedef Outcome<Error, Model::GetCommitSummaryResult> GetCommitSummaryOutcome;
			typedef std::future<GetCommitSummaryOutcome> GetCommitSummaryOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetCommitSummaryRequest&, const GetCommitSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCommitSummaryAsyncHandler;
			typedef Outcome<Error, Model::GetDatasetProxyResult> GetDatasetProxyOutcome;
			typedef std::future<GetDatasetProxyOutcome> GetDatasetProxyOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetDatasetProxyRequest&, const GetDatasetProxyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDatasetProxyAsyncHandler;
			typedef Outcome<Error, Model::GetFlowJobResult> GetFlowJobOutcome;
			typedef std::future<GetFlowJobOutcome> GetFlowJobOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetFlowJobRequest&, const GetFlowJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFlowJobAsyncHandler;
			typedef Outcome<Error, Model::GetGroupHandlingSummaryResult> GetGroupHandlingSummaryOutcome;
			typedef std::future<GetGroupHandlingSummaryOutcome> GetGroupHandlingSummaryOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetGroupHandlingSummaryRequest&, const GetGroupHandlingSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGroupHandlingSummaryAsyncHandler;
			typedef Outcome<Error, Model::GetGroupTaskDetailResult> GetGroupTaskDetailOutcome;
			typedef std::future<GetGroupTaskDetailOutcome> GetGroupTaskDetailOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetGroupTaskDetailRequest&, const GetGroupTaskDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGroupTaskDetailAsyncHandler;
			typedef Outcome<Error, Model::GetGroupTaskPersonDetailResult> GetGroupTaskPersonDetailOutcome;
			typedef std::future<GetGroupTaskPersonDetailOutcome> GetGroupTaskPersonDetailOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetGroupTaskPersonDetailRequest&, const GetGroupTaskPersonDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGroupTaskPersonDetailAsyncHandler;
			typedef Outcome<Error, Model::GetHistoryMarkResultResult> GetHistoryMarkResultOutcome;
			typedef std::future<GetHistoryMarkResultOutcome> GetHistoryMarkResultOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetHistoryMarkResultRequest&, const GetHistoryMarkResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetHistoryMarkResultAsyncHandler;
			typedef Outcome<Error, Model::GetIntWholeSummaryResult> GetIntWholeSummaryOutcome;
			typedef std::future<GetIntWholeSummaryOutcome> GetIntWholeSummaryOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetIntWholeSummaryRequest&, const GetIntWholeSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetIntWholeSummaryAsyncHandler;
			typedef Outcome<Error, Model::GetMarkPersonDetailResult> GetMarkPersonDetailOutcome;
			typedef std::future<GetMarkPersonDetailOutcome> GetMarkPersonDetailOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetMarkPersonDetailRequest&, const GetMarkPersonDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMarkPersonDetailAsyncHandler;
			typedef Outcome<Error, Model::GetMarkPersonHandlingSummaryResult> GetMarkPersonHandlingSummaryOutcome;
			typedef std::future<GetMarkPersonHandlingSummaryOutcome> GetMarkPersonHandlingSummaryOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetMarkPersonHandlingSummaryRequest&, const GetMarkPersonHandlingSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMarkPersonHandlingSummaryAsyncHandler;
			typedef Outcome<Error, Model::GetMarkQuantityResult> GetMarkQuantityOutcome;
			typedef std::future<GetMarkQuantityOutcome> GetMarkQuantityOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetMarkQuantityRequest&, const GetMarkQuantityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMarkQuantityAsyncHandler;
			typedef Outcome<Error, Model::GetMarkResultResult> GetMarkResultOutcome;
			typedef std::future<GetMarkResultOutcome> GetMarkResultOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetMarkResultRequest&, const GetMarkResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMarkResultAsyncHandler;
			typedef Outcome<Error, Model::GetMarkUserDetailResult> GetMarkUserDetailOutcome;
			typedef std::future<GetMarkUserDetailOutcome> GetMarkUserDetailOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetMarkUserDetailRequest&, const GetMarkUserDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMarkUserDetailAsyncHandler;
			typedef Outcome<Error, Model::GetMarkUserEfficiencyResult> GetMarkUserEfficiencyOutcome;
			typedef std::future<GetMarkUserEfficiencyOutcome> GetMarkUserEfficiencyOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetMarkUserEfficiencyRequest&, const GetMarkUserEfficiencyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMarkUserEfficiencyAsyncHandler;
			typedef Outcome<Error, Model::GetMarkUserSummaryResult> GetMarkUserSummaryOutcome;
			typedef std::future<GetMarkUserSummaryOutcome> GetMarkUserSummaryOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetMarkUserSummaryRequest&, const GetMarkUserSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMarkUserSummaryAsyncHandler;
			typedef Outcome<Error, Model::GetModelByIdResult> GetModelByIdOutcome;
			typedef std::future<GetModelByIdOutcome> GetModelByIdOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetModelByIdRequest&, const GetModelByIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetModelByIdAsyncHandler;
			typedef Outcome<Error, Model::GetOptionTemplateResult> GetOptionTemplateOutcome;
			typedef std::future<GetOptionTemplateOutcome> GetOptionTemplateOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetOptionTemplateRequest&, const GetOptionTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOptionTemplateAsyncHandler;
			typedef Outcome<Error, Model::GetOrCreateTntInstByBizNoResult> GetOrCreateTntInstByBizNoOutcome;
			typedef std::future<GetOrCreateTntInstByBizNoOutcome> GetOrCreateTntInstByBizNoOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetOrCreateTntInstByBizNoRequest&, const GetOrCreateTntInstByBizNoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOrCreateTntInstByBizNoAsyncHandler;
			typedef Outcome<Error, Model::GetPersonSummaryResult> GetPersonSummaryOutcome;
			typedef std::future<GetPersonSummaryOutcome> GetPersonSummaryOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetPersonSummaryRequest&, const GetPersonSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPersonSummaryAsyncHandler;
			typedef Outcome<Error, Model::GetSamplingSummaryResult> GetSamplingSummaryOutcome;
			typedef std::future<GetSamplingSummaryOutcome> GetSamplingSummaryOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetSamplingSummaryRequest&, const GetSamplingSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSamplingSummaryAsyncHandler;
			typedef Outcome<Error, Model::GetSubTaskDownloadSystemResultResult> GetSubTaskDownloadSystemResultOutcome;
			typedef std::future<GetSubTaskDownloadSystemResultOutcome> GetSubTaskDownloadSystemResultOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetSubTaskDownloadSystemResultRequest&, const GetSubTaskDownloadSystemResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSubTaskDownloadSystemResultAsyncHandler;
			typedef Outcome<Error, Model::GetSubTaskDownloadUserResultResult> GetSubTaskDownloadUserResultOutcome;
			typedef std::future<GetSubTaskDownloadUserResultOutcome> GetSubTaskDownloadUserResultOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetSubTaskDownloadUserResultRequest&, const GetSubTaskDownloadUserResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSubTaskDownloadUserResultAsyncHandler;
			typedef Outcome<Error, Model::GetSubTaskSummaryResult> GetSubTaskSummaryOutcome;
			typedef std::future<GetSubTaskSummaryOutcome> GetSubTaskSummaryOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetSubTaskSummaryRequest&, const GetSubTaskSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSubTaskSummaryAsyncHandler;
			typedef Outcome<Error, Model::GetTaskResult> GetTaskOutcome;
			typedef std::future<GetTaskOutcome> GetTaskOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetTaskRequest&, const GetTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTaskAsyncHandler;
			typedef Outcome<Error, Model::GetTaskPersonSummaryResult> GetTaskPersonSummaryOutcome;
			typedef std::future<GetTaskPersonSummaryOutcome> GetTaskPersonSummaryOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetTaskPersonSummaryRequest&, const GetTaskPersonSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTaskPersonSummaryAsyncHandler;
			typedef Outcome<Error, Model::GetTaskProcessInfoResult> GetTaskProcessInfoOutcome;
			typedef std::future<GetTaskProcessInfoOutcome> GetTaskProcessInfoOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetTaskProcessInfoRequest&, const GetTaskProcessInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTaskProcessInfoAsyncHandler;
			typedef Outcome<Error, Model::GetTaskStatTypesResult> GetTaskStatTypesOutcome;
			typedef std::future<GetTaskStatTypesOutcome> GetTaskStatTypesOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetTaskStatTypesRequest&, const GetTaskStatTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTaskStatTypesAsyncHandler;
			typedef Outcome<Error, Model::GetTaskSummaryResult> GetTaskSummaryOutcome;
			typedef std::future<GetTaskSummaryOutcome> GetTaskSummaryOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetTaskSummaryRequest&, const GetTaskSummaryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTaskSummaryAsyncHandler;
			typedef Outcome<Error, Model::GetTntConfListValueResult> GetTntConfListValueOutcome;
			typedef std::future<GetTntConfListValueOutcome> GetTntConfListValueOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetTntConfListValueRequest&, const GetTntConfListValueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTntConfListValueAsyncHandler;
			typedef Outcome<Error, Model::GetTntUserRoleResult> GetTntUserRoleOutcome;
			typedef std::future<GetTntUserRoleOutcome> GetTntUserRoleOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetTntUserRoleRequest&, const GetTntUserRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTntUserRoleAsyncHandler;
			typedef Outcome<Error, Model::GetUpdateTimeResult> GetUpdateTimeOutcome;
			typedef std::future<GetUpdateTimeOutcome> GetUpdateTimeOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetUpdateTimeRequest&, const GetUpdateTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUpdateTimeAsyncHandler;
			typedef Outcome<Error, Model::GetUserResult> GetUserOutcome;
			typedef std::future<GetUserOutcome> GetUserOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetUserRequest&, const GetUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserAsyncHandler;
			typedef Outcome<Error, Model::GetUserMarkItemInfoResult> GetUserMarkItemInfoOutcome;
			typedef std::future<GetUserMarkItemInfoOutcome> GetUserMarkItemInfoOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::GetUserMarkItemInfoRequest&, const GetUserMarkItemInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserMarkItemInfoAsyncHandler;
			typedef Outcome<Error, Model::ImportOptionTemplateResult> ImportOptionTemplateOutcome;
			typedef std::future<ImportOptionTemplateOutcome> ImportOptionTemplateOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::ImportOptionTemplateRequest&, const ImportOptionTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportOptionTemplateAsyncHandler;
			typedef Outcome<Error, Model::InitSamplingUserSubTaskResult> InitSamplingUserSubTaskOutcome;
			typedef std::future<InitSamplingUserSubTaskOutcome> InitSamplingUserSubTaskOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::InitSamplingUserSubTaskRequest&, const InitSamplingUserSubTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InitSamplingUserSubTaskAsyncHandler;
			typedef Outcome<Error, Model::ListAssignedSubUserTaskResult> ListAssignedSubUserTaskOutcome;
			typedef std::future<ListAssignedSubUserTaskOutcome> ListAssignedSubUserTaskOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::ListAssignedSubUserTaskRequest&, const ListAssignedSubUserTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAssignedSubUserTaskAsyncHandler;
			typedef Outcome<Error, Model::ListCheckTaskResult> ListCheckTaskOutcome;
			typedef std::future<ListCheckTaskOutcome> ListCheckTaskOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::ListCheckTaskRequest&, const ListCheckTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCheckTaskAsyncHandler;
			typedef Outcome<Error, Model::ListDatasetFieldsResult> ListDatasetFieldsOutcome;
			typedef std::future<ListDatasetFieldsOutcome> ListDatasetFieldsOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::ListDatasetFieldsRequest&, const ListDatasetFieldsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDatasetFieldsAsyncHandler;
			typedef Outcome<Error, Model::ListFinishedSubUserTaskResult> ListFinishedSubUserTaskOutcome;
			typedef std::future<ListFinishedSubUserTaskOutcome> ListFinishedSubUserTaskOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::ListFinishedSubUserTaskRequest&, const ListFinishedSubUserTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFinishedSubUserTaskAsyncHandler;
			typedef Outcome<Error, Model::ListMarkableTaskResult> ListMarkableTaskOutcome;
			typedef std::future<ListMarkableTaskOutcome> ListMarkableTaskOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::ListMarkableTaskRequest&, const ListMarkableTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMarkableTaskAsyncHandler;
			typedef Outcome<Error, Model::ListSamplingHandlerUserResult> ListSamplingHandlerUserOutcome;
			typedef std::future<ListSamplingHandlerUserOutcome> ListSamplingHandlerUserOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::ListSamplingHandlerUserRequest&, const ListSamplingHandlerUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSamplingHandlerUserAsyncHandler;
			typedef Outcome<Error, Model::ListSamplingResultMetaResult> ListSamplingResultMetaOutcome;
			typedef std::future<ListSamplingResultMetaOutcome> ListSamplingResultMetaOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::ListSamplingResultMetaRequest&, const ListSamplingResultMetaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSamplingResultMetaAsyncHandler;
			typedef Outcome<Error, Model::ListSamplingUsersResult> ListSamplingUsersOutcome;
			typedef std::future<ListSamplingUsersOutcome> ListSamplingUsersOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::ListSamplingUsersRequest&, const ListSamplingUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSamplingUsersAsyncHandler;
			typedef Outcome<Error, Model::ListTntConfigResult> ListTntConfigOutcome;
			typedef std::future<ListTntConfigOutcome> ListTntConfigOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::ListTntConfigRequest&, const ListTntConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTntConfigAsyncHandler;
			typedef Outcome<Error, Model::ListWorkNodeUsersResult> ListWorkNodeUsersOutcome;
			typedef std::future<ListWorkNodeUsersOutcome> ListWorkNodeUsersOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::ListWorkNodeUsersRequest&, const ListWorkNodeUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListWorkNodeUsersAsyncHandler;
			typedef Outcome<Error, Model::ManualCalReportResult> ManualCalReportOutcome;
			typedef std::future<ManualCalReportOutcome> ManualCalReportOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::ManualCalReportRequest&, const ManualCalReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ManualCalReportAsyncHandler;
			typedef Outcome<Error, Model::MngReleaseUserSubTaskResult> MngReleaseUserSubTaskOutcome;
			typedef std::future<MngReleaseUserSubTaskOutcome> MngReleaseUserSubTaskOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::MngReleaseUserSubTaskRequest&, const MngReleaseUserSubTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MngReleaseUserSubTaskAsyncHandler;
			typedef Outcome<Error, Model::OfflineTaskResult> OfflineTaskOutcome;
			typedef std::future<OfflineTaskOutcome> OfflineTaskOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::OfflineTaskRequest&, const OfflineTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OfflineTaskAsyncHandler;
			typedef Outcome<Error, Model::OnlineTaskResult> OnlineTaskOutcome;
			typedef std::future<OnlineTaskOutcome> OnlineTaskOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::OnlineTaskRequest&, const OnlineTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OnlineTaskAsyncHandler;
			typedef Outcome<Error, Model::PageViewDataMetaResult> PageViewDataMetaOutcome;
			typedef std::future<PageViewDataMetaOutcome> PageViewDataMetaOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::PageViewDataMetaRequest&, const PageViewDataMetaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PageViewDataMetaAsyncHandler;
			typedef Outcome<Error, Model::PageViewDatasetProxyResult> PageViewDatasetProxyOutcome;
			typedef std::future<PageViewDatasetProxyOutcome> PageViewDatasetProxyOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::PageViewDatasetProxyRequest&, const PageViewDatasetProxyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PageViewDatasetProxyAsyncHandler;
			typedef Outcome<Error, Model::PageViewFlowJobResult> PageViewFlowJobOutcome;
			typedef std::future<PageViewFlowJobOutcome> PageViewFlowJobOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::PageViewFlowJobRequest&, const PageViewFlowJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PageViewFlowJobAsyncHandler;
			typedef Outcome<Error, Model::PageViewModelResult> PageViewModelOutcome;
			typedef std::future<PageViewModelOutcome> PageViewModelOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::PageViewModelRequest&, const PageViewModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PageViewModelAsyncHandler;
			typedef Outcome<Error, Model::PageViewMyTntResult> PageViewMyTntOutcome;
			typedef std::future<PageViewMyTntOutcome> PageViewMyTntOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::PageViewMyTntRequest&, const PageViewMyTntOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PageViewMyTntAsyncHandler;
			typedef Outcome<Error, Model::PageViewOptionTemplateResult> PageViewOptionTemplateOutcome;
			typedef std::future<PageViewOptionTemplateOutcome> PageViewOptionTemplateOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::PageViewOptionTemplateRequest&, const PageViewOptionTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PageViewOptionTemplateAsyncHandler;
			typedef Outcome<Error, Model::PageViewSubTaskItemResult> PageViewSubTaskItemOutcome;
			typedef std::future<PageViewSubTaskItemOutcome> PageViewSubTaskItemOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::PageViewSubTaskItemRequest&, const PageViewSubTaskItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PageViewSubTaskItemAsyncHandler;
			typedef Outcome<Error, Model::PageViewTaskResult> PageViewTaskOutcome;
			typedef std::future<PageViewTaskOutcome> PageViewTaskOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::PageViewTaskRequest&, const PageViewTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PageViewTaskAsyncHandler;
			typedef Outcome<Error, Model::PageViewTntUserResult> PageViewTntUserOutcome;
			typedef std::future<PageViewTntUserOutcome> PageViewTntUserOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::PageViewTntUserRequest&, const PageViewTntUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PageViewTntUserAsyncHandler;
			typedef Outcome<Error, Model::PageViewUserResult> PageViewUserOutcome;
			typedef std::future<PageViewUserOutcome> PageViewUserOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::PageViewUserRequest&, const PageViewUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PageViewUserAsyncHandler;
			typedef Outcome<Error, Model::PageViewUserGroupResult> PageViewUserGroupOutcome;
			typedef std::future<PageViewUserGroupOutcome> PageViewUserGroupOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::PageViewUserGroupRequest&, const PageViewUserGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PageViewUserGroupAsyncHandler;
			typedef Outcome<Error, Model::PageviewSubTaskResult> PageviewSubTaskOutcome;
			typedef std::future<PageviewSubTaskOutcome> PageviewSubTaskOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::PageviewSubTaskRequest&, const PageviewSubTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PageviewSubTaskAsyncHandler;
			typedef Outcome<Error, Model::PollingSampleMarkItemsResult> PollingSampleMarkItemsOutcome;
			typedef std::future<PollingSampleMarkItemsOutcome> PollingSampleMarkItemsOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::PollingSampleMarkItemsRequest&, const PollingSampleMarkItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PollingSampleMarkItemsAsyncHandler;
			typedef Outcome<Error, Model::PreviewTaskTemplateResult> PreviewTaskTemplateOutcome;
			typedef std::future<PreviewTaskTemplateOutcome> PreviewTaskTemplateOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::PreviewTaskTemplateRequest&, const PreviewTaskTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PreviewTaskTemplateAsyncHandler;
			typedef Outcome<Error, Model::ProxyRobotServiceResult> ProxyRobotServiceOutcome;
			typedef std::future<ProxyRobotServiceOutcome> ProxyRobotServiceOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::ProxyRobotServiceRequest&, const ProxyRobotServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ProxyRobotServiceAsyncHandler;
			typedef Outcome<Error, Model::QueryMarkableSubTaskResult> QueryMarkableSubTaskOutcome;
			typedef std::future<QueryMarkableSubTaskOutcome> QueryMarkableSubTaskOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::QueryMarkableSubTaskRequest&, const QueryMarkableSubTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMarkableSubTaskAsyncHandler;
			typedef Outcome<Error, Model::QuerySampleMarkItemsResult> QuerySampleMarkItemsOutcome;
			typedef std::future<QuerySampleMarkItemsOutcome> QuerySampleMarkItemsOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::QuerySampleMarkItemsRequest&, const QuerySampleMarkItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySampleMarkItemsAsyncHandler;
			typedef Outcome<Error, Model::QuerySamplingPoolSizeResult> QuerySamplingPoolSizeOutcome;
			typedef std::future<QuerySamplingPoolSizeOutcome> QuerySamplingPoolSizeOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::QuerySamplingPoolSizeRequest&, const QuerySamplingPoolSizeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySamplingPoolSizeAsyncHandler;
			typedef Outcome<Error, Model::QuerySkipUserSubTaskResult> QuerySkipUserSubTaskOutcome;
			typedef std::future<QuerySkipUserSubTaskOutcome> QuerySkipUserSubTaskOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::QuerySkipUserSubTaskRequest&, const QuerySkipUserSubTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySkipUserSubTaskAsyncHandler;
			typedef Outcome<Error, Model::RejectSamplingTaskResult> RejectSamplingTaskOutcome;
			typedef std::future<RejectSamplingTaskOutcome> RejectSamplingTaskOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::RejectSamplingTaskRequest&, const RejectSamplingTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RejectSamplingTaskAsyncHandler;
			typedef Outcome<Error, Model::RejectSubTaskResult> RejectSubTaskOutcome;
			typedef std::future<RejectSubTaskOutcome> RejectSubTaskOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::RejectSubTaskRequest&, const RejectSubTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RejectSubTaskAsyncHandler;
			typedef Outcome<Error, Model::ReleaseUserSubTaskResult> ReleaseUserSubTaskOutcome;
			typedef std::future<ReleaseUserSubTaskOutcome> ReleaseUserSubTaskOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::ReleaseUserSubTaskRequest&, const ReleaseUserSubTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseUserSubTaskAsyncHandler;
			typedef Outcome<Error, Model::RemoveMemberOrGroupTaskResult> RemoveMemberOrGroupTaskOutcome;
			typedef std::future<RemoveMemberOrGroupTaskOutcome> RemoveMemberOrGroupTaskOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::RemoveMemberOrGroupTaskRequest&, const RemoveMemberOrGroupTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveMemberOrGroupTaskAsyncHandler;
			typedef Outcome<Error, Model::RemoveUserInGroupResult> RemoveUserInGroupOutcome;
			typedef std::future<RemoveUserInGroupOutcome> RemoveUserInGroupOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::RemoveUserInGroupRequest&, const RemoveUserInGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUserInGroupAsyncHandler;
			typedef Outcome<Error, Model::RemoveUserInTntResult> RemoveUserInTntOutcome;
			typedef std::future<RemoveUserInTntOutcome> RemoveUserInTntOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::RemoveUserInTntRequest&, const RemoveUserInTntOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUserInTntAsyncHandler;
			typedef Outcome<Error, Model::SamplingSubUserTaskListResult> SamplingSubUserTaskListOutcome;
			typedef std::future<SamplingSubUserTaskListOutcome> SamplingSubUserTaskListOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::SamplingSubUserTaskListRequest&, const SamplingSubUserTaskListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SamplingSubUserTaskListAsyncHandler;
			typedef Outcome<Error, Model::SkipFinishedResult> SkipFinishedOutcome;
			typedef std::future<SkipFinishedOutcome> SkipFinishedOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::SkipFinishedRequest&, const SkipFinishedOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SkipFinishedAsyncHandler;
			typedef Outcome<Error, Model::SkipUserSubTaskResult> SkipUserSubTaskOutcome;
			typedef std::future<SkipUserSubTaskOutcome> SkipUserSubTaskOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::SkipUserSubTaskRequest&, const SkipUserSubTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SkipUserSubTaskAsyncHandler;
			typedef Outcome<Error, Model::TaskStageStatResult> TaskStageStatOutcome;
			typedef std::future<TaskStageStatOutcome> TaskStageStatOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::TaskStageStatRequest&, const TaskStageStatOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TaskStageStatAsyncHandler;
			typedef Outcome<Error, Model::TestRequestResult> TestRequestOutcome;
			typedef std::future<TestRequestOutcome> TestRequestOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::TestRequestRequest&, const TestRequestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TestRequestAsyncHandler;
			typedef Outcome<Error, Model::TransferUserSubTaskResult> TransferUserSubTaskOutcome;
			typedef std::future<TransferUserSubTaskOutcome> TransferUserSubTaskOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::TransferUserSubTaskRequest&, const TransferUserSubTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TransferUserSubTaskAsyncHandler;
			typedef Outcome<Error, Model::UnpassFeedbackResult> UnpassFeedbackOutcome;
			typedef std::future<UnpassFeedbackOutcome> UnpassFeedbackOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::UnpassFeedbackRequest&, const UnpassFeedbackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnpassFeedbackAsyncHandler;
			typedef Outcome<Error, Model::UpdateDatasetStateMsgResult> UpdateDatasetStateMsgOutcome;
			typedef std::future<UpdateDatasetStateMsgOutcome> UpdateDatasetStateMsgOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::UpdateDatasetStateMsgRequest&, const UpdateDatasetStateMsgOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDatasetStateMsgAsyncHandler;
			typedef Outcome<Error, Model::UpdateMarkResultResult> UpdateMarkResultOutcome;
			typedef std::future<UpdateMarkResultOutcome> UpdateMarkResultOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::UpdateMarkResultRequest&, const UpdateMarkResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMarkResultAsyncHandler;
			typedef Outcome<Error, Model::UpdateMarkResultByAdminResult> UpdateMarkResultByAdminOutcome;
			typedef std::future<UpdateMarkResultByAdminOutcome> UpdateMarkResultByAdminOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::UpdateMarkResultByAdminRequest&, const UpdateMarkResultByAdminOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMarkResultByAdminAsyncHandler;
			typedef Outcome<Error, Model::UpdateModelResult> UpdateModelOutcome;
			typedef std::future<UpdateModelOutcome> UpdateModelOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::UpdateModelRequest&, const UpdateModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateModelAsyncHandler;
			typedef Outcome<Error, Model::UpdateTaskResult> UpdateTaskOutcome;
			typedef std::future<UpdateTaskOutcome> UpdateTaskOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::UpdateTaskRequest&, const UpdateTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTaskAsyncHandler;
			typedef Outcome<Error, Model::UpdateTaskDataResult> UpdateTaskDataOutcome;
			typedef std::future<UpdateTaskDataOutcome> UpdateTaskDataOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::UpdateTaskDataRequest&, const UpdateTaskDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTaskDataAsyncHandler;
			typedef Outcome<Error, Model::UpdateTaskTemplateResult> UpdateTaskTemplateOutcome;
			typedef std::future<UpdateTaskTemplateOutcome> UpdateTaskTemplateOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::UpdateTaskTemplateRequest&, const UpdateTaskTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTaskTemplateAsyncHandler;
			typedef Outcome<Error, Model::UpdateTemplateResult> UpdateTemplateOutcome;
			typedef std::future<UpdateTemplateOutcome> UpdateTemplateOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::UpdateTemplateRequest&, const UpdateTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTemplateAsyncHandler;
			typedef Outcome<Error, Model::UpdateUserNameResult> UpdateUserNameOutcome;
			typedef std::future<UpdateUserNameOutcome> UpdateUserNameOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::UpdateUserNameRequest&, const UpdateUserNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserNameAsyncHandler;
			typedef Outcome<Error, Model::UpdateUserRoleInTntResult> UpdateUserRoleInTntOutcome;
			typedef std::future<UpdateUserRoleInTntOutcome> UpdateUserRoleInTntOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::UpdateUserRoleInTntRequest&, const UpdateUserRoleInTntOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserRoleInTntAsyncHandler;
			typedef Outcome<Error, Model::UserSubTaskTimerResult> UserSubTaskTimerOutcome;
			typedef std::future<UserSubTaskTimerOutcome> UserSubTaskTimerOutcomeCallable;
			typedef std::function<void(const ItagClient*, const Model::UserSubTaskTimerRequest&, const UserSubTaskTimerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UserSubTaskTimerAsyncHandler;

			ItagClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ItagClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ItagClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ItagClient();
			AbandonItemOutcome abandonItem(const Model::AbandonItemRequest &request)const;
			void abandonItemAsync(const Model::AbandonItemRequest& request, const AbandonItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AbandonItemOutcomeCallable abandonItemCallable(const Model::AbandonItemRequest& request) const;
			AbandonItemByAdminOutcome abandonItemByAdmin(const Model::AbandonItemByAdminRequest &request)const;
			void abandonItemByAdminAsync(const Model::AbandonItemByAdminRequest& request, const AbandonItemByAdminAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AbandonItemByAdminOutcomeCallable abandonItemByAdminCallable(const Model::AbandonItemByAdminRequest& request) const;
			AcceptSamplingTaskOutcome acceptSamplingTask(const Model::AcceptSamplingTaskRequest &request)const;
			void acceptSamplingTaskAsync(const Model::AcceptSamplingTaskRequest& request, const AcceptSamplingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AcceptSamplingTaskOutcomeCallable acceptSamplingTaskCallable(const Model::AcceptSamplingTaskRequest& request) const;
			AddMemberOrGroupTaskOutcome addMemberOrGroupTask(const Model::AddMemberOrGroupTaskRequest &request)const;
			void addMemberOrGroupTaskAsync(const Model::AddMemberOrGroupTaskRequest& request, const AddMemberOrGroupTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddMemberOrGroupTaskOutcomeCallable addMemberOrGroupTaskCallable(const Model::AddMemberOrGroupTaskRequest& request) const;
			AddUserOutcome addUser(const Model::AddUserRequest &request)const;
			void addUserAsync(const Model::AddUserRequest& request, const AddUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddUserOutcomeCallable addUserCallable(const Model::AddUserRequest& request) const;
			AddUserToGroupOutcome addUserToGroup(const Model::AddUserToGroupRequest &request)const;
			void addUserToGroupAsync(const Model::AddUserToGroupRequest& request, const AddUserToGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddUserToGroupOutcomeCallable addUserToGroupCallable(const Model::AddUserToGroupRequest& request) const;
			AddUserToTntOutcome addUserToTnt(const Model::AddUserToTntRequest &request)const;
			void addUserToTntAsync(const Model::AddUserToTntRequest& request, const AddUserToTntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddUserToTntOutcomeCallable addUserToTntCallable(const Model::AddUserToTntRequest& request) const;
			AppendDataToDatasetOutcome appendDataToDataset(const Model::AppendDataToDatasetRequest &request)const;
			void appendDataToDatasetAsync(const Model::AppendDataToDatasetRequest& request, const AppendDataToDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AppendDataToDatasetOutcomeCallable appendDataToDatasetCallable(const Model::AppendDataToDatasetRequest& request) const;
			AsyncDownloadMarkResultOutcome asyncDownloadMarkResult(const Model::AsyncDownloadMarkResultRequest &request)const;
			void asyncDownloadMarkResultAsync(const Model::AsyncDownloadMarkResultRequest& request, const AsyncDownloadMarkResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AsyncDownloadMarkResultOutcomeCallable asyncDownloadMarkResultCallable(const Model::AsyncDownloadMarkResultRequest& request) const;
			BatchRejectTaskOutcome batchRejectTask(const Model::BatchRejectTaskRequest &request)const;
			void batchRejectTaskAsync(const Model::BatchRejectTaskRequest& request, const BatchRejectTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchRejectTaskOutcomeCallable batchRejectTaskCallable(const Model::BatchRejectTaskRequest& request) const;
			CanCommitOutcome canCommit(const Model::CanCommitRequest &request)const;
			void canCommitAsync(const Model::CanCommitRequest& request, const CanCommitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CanCommitOutcomeCallable canCommitCallable(const Model::CanCommitRequest& request) const;
			CheckModelOutcome checkModel(const Model::CheckModelRequest &request)const;
			void checkModelAsync(const Model::CheckModelRequest& request, const CheckModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckModelOutcomeCallable checkModelCallable(const Model::CheckModelRequest& request) const;
			CommitSubTaskOutcome commitSubTask(const Model::CommitSubTaskRequest &request)const;
			void commitSubTaskAsync(const Model::CommitSubTaskRequest& request, const CommitSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CommitSubTaskOutcomeCallable commitSubTaskCallable(const Model::CommitSubTaskRequest& request) const;
			CreateDatasetOutcome createDataset(const Model::CreateDatasetRequest &request)const;
			void createDatasetAsync(const Model::CreateDatasetRequest& request, const CreateDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDatasetOutcomeCallable createDatasetCallable(const Model::CreateDatasetRequest& request) const;
			CreateModelOutcome createModel(const Model::CreateModelRequest &request)const;
			void createModelAsync(const Model::CreateModelRequest& request, const CreateModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateModelOutcomeCallable createModelCallable(const Model::CreateModelRequest& request) const;
			CreateOptionTemplateOutcome createOptionTemplate(const Model::CreateOptionTemplateRequest &request)const;
			void createOptionTemplateAsync(const Model::CreateOptionTemplateRequest& request, const CreateOptionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOptionTemplateOutcomeCallable createOptionTemplateCallable(const Model::CreateOptionTemplateRequest& request) const;
			CreateOrUpdateTntConfigOutcome createOrUpdateTntConfig(const Model::CreateOrUpdateTntConfigRequest &request)const;
			void createOrUpdateTntConfigAsync(const Model::CreateOrUpdateTntConfigRequest& request, const CreateOrUpdateTntConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrUpdateTntConfigOutcomeCallable createOrUpdateTntConfigCallable(const Model::CreateOrUpdateTntConfigRequest& request) const;
			CreateTaskOutcome createTask(const Model::CreateTaskRequest &request)const;
			void createTaskAsync(const Model::CreateTaskRequest& request, const CreateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTaskOutcomeCallable createTaskCallable(const Model::CreateTaskRequest& request) const;
			CreateUserGroupOutcome createUserGroup(const Model::CreateUserGroupRequest &request)const;
			void createUserGroupAsync(const Model::CreateUserGroupRequest& request, const CreateUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUserGroupOutcomeCallable createUserGroupCallable(const Model::CreateUserGroupRequest& request) const;
			DeleteFeedbackOutcome deleteFeedback(const Model::DeleteFeedbackRequest &request)const;
			void deleteFeedbackAsync(const Model::DeleteFeedbackRequest& request, const DeleteFeedbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFeedbackOutcomeCallable deleteFeedbackCallable(const Model::DeleteFeedbackRequest& request) const;
			DeleteModelOutcome deleteModel(const Model::DeleteModelRequest &request)const;
			void deleteModelAsync(const Model::DeleteModelRequest& request, const DeleteModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteModelOutcomeCallable deleteModelCallable(const Model::DeleteModelRequest& request) const;
			DeleteOptionTemplateOutcome deleteOptionTemplate(const Model::DeleteOptionTemplateRequest &request)const;
			void deleteOptionTemplateAsync(const Model::DeleteOptionTemplateRequest& request, const DeleteOptionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteOptionTemplateOutcomeCallable deleteOptionTemplateCallable(const Model::DeleteOptionTemplateRequest& request) const;
			DeleteTaskOutcome deleteTask(const Model::DeleteTaskRequest &request)const;
			void deleteTaskAsync(const Model::DeleteTaskRequest& request, const DeleteTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTaskOutcomeCallable deleteTaskCallable(const Model::DeleteTaskRequest& request) const;
			DeleteUserGroupOutcome deleteUserGroup(const Model::DeleteUserGroupRequest &request)const;
			void deleteUserGroupAsync(const Model::DeleteUserGroupRequest& request, const DeleteUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserGroupOutcomeCallable deleteUserGroupCallable(const Model::DeleteUserGroupRequest& request) const;
			DiscardSubTaskOutcome discardSubTask(const Model::DiscardSubTaskRequest &request)const;
			void discardSubTaskAsync(const Model::DiscardSubTaskRequest& request, const DiscardSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DiscardSubTaskOutcomeCallable discardSubTaskCallable(const Model::DiscardSubTaskRequest& request) const;
			DownloadIntPersonSummaryOutcome downloadIntPersonSummary(const Model::DownloadIntPersonSummaryRequest &request)const;
			void downloadIntPersonSummaryAsync(const Model::DownloadIntPersonSummaryRequest& request, const DownloadIntPersonSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DownloadIntPersonSummaryOutcomeCallable downloadIntPersonSummaryCallable(const Model::DownloadIntPersonSummaryRequest& request) const;
			ExportOptionTemplateOutcome exportOptionTemplate(const Model::ExportOptionTemplateRequest &request)const;
			void exportOptionTemplateAsync(const Model::ExportOptionTemplateRequest& request, const ExportOptionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportOptionTemplateOutcomeCallable exportOptionTemplateCallable(const Model::ExportOptionTemplateRequest& request) const;
			ExtendUserAuthInTaskOutcome extendUserAuthInTask(const Model::ExtendUserAuthInTaskRequest &request)const;
			void extendUserAuthInTaskAsync(const Model::ExtendUserAuthInTaskRequest& request, const ExtendUserAuthInTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExtendUserAuthInTaskOutcomeCallable extendUserAuthInTaskCallable(const Model::ExtendUserAuthInTaskRequest& request) const;
			FetchVideoMarkResultOutcome fetchVideoMarkResult(const Model::FetchVideoMarkResultRequest &request)const;
			void fetchVideoMarkResultAsync(const Model::FetchVideoMarkResultRequest& request, const FetchVideoMarkResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FetchVideoMarkResultOutcomeCallable fetchVideoMarkResultCallable(const Model::FetchVideoMarkResultRequest& request) const;
			FlowInstanceCallbackOutcome flowInstanceCallback(const Model::FlowInstanceCallbackRequest &request)const;
			void flowInstanceCallbackAsync(const Model::FlowInstanceCallbackRequest& request, const FlowInstanceCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FlowInstanceCallbackOutcomeCallable flowInstanceCallbackCallable(const Model::FlowInstanceCallbackRequest& request) const;
			GetAssignedCheckTaskSummaryOutcome getAssignedCheckTaskSummary(const Model::GetAssignedCheckTaskSummaryRequest &request)const;
			void getAssignedCheckTaskSummaryAsync(const Model::GetAssignedCheckTaskSummaryRequest& request, const GetAssignedCheckTaskSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAssignedCheckTaskSummaryOutcomeCallable getAssignedCheckTaskSummaryCallable(const Model::GetAssignedCheckTaskSummaryRequest& request) const;
			GetBizPersonSummaryOutcome getBizPersonSummary(const Model::GetBizPersonSummaryRequest &request)const;
			void getBizPersonSummaryAsync(const Model::GetBizPersonSummaryRequest& request, const GetBizPersonSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBizPersonSummaryOutcomeCallable getBizPersonSummaryCallable(const Model::GetBizPersonSummaryRequest& request) const;
			GetBizSummaryOutcome getBizSummary(const Model::GetBizSummaryRequest &request)const;
			void getBizSummaryAsync(const Model::GetBizSummaryRequest& request, const GetBizSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBizSummaryOutcomeCallable getBizSummaryCallable(const Model::GetBizSummaryRequest& request) const;
			GetCheckUserDetailOutcome getCheckUserDetail(const Model::GetCheckUserDetailRequest &request)const;
			void getCheckUserDetailAsync(const Model::GetCheckUserDetailRequest& request, const GetCheckUserDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCheckUserDetailOutcomeCallable getCheckUserDetailCallable(const Model::GetCheckUserDetailRequest& request) const;
			GetCheckUserEfficiencyOutcome getCheckUserEfficiency(const Model::GetCheckUserEfficiencyRequest &request)const;
			void getCheckUserEfficiencyAsync(const Model::GetCheckUserEfficiencyRequest& request, const GetCheckUserEfficiencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCheckUserEfficiencyOutcomeCallable getCheckUserEfficiencyCallable(const Model::GetCheckUserEfficiencyRequest& request) const;
			GetCheckUserSummaryOutcome getCheckUserSummary(const Model::GetCheckUserSummaryRequest &request)const;
			void getCheckUserSummaryAsync(const Model::GetCheckUserSummaryRequest& request, const GetCheckUserSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCheckUserSummaryOutcomeCallable getCheckUserSummaryCallable(const Model::GetCheckUserSummaryRequest& request) const;
			GetCommitSummaryOutcome getCommitSummary(const Model::GetCommitSummaryRequest &request)const;
			void getCommitSummaryAsync(const Model::GetCommitSummaryRequest& request, const GetCommitSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCommitSummaryOutcomeCallable getCommitSummaryCallable(const Model::GetCommitSummaryRequest& request) const;
			GetDatasetProxyOutcome getDatasetProxy(const Model::GetDatasetProxyRequest &request)const;
			void getDatasetProxyAsync(const Model::GetDatasetProxyRequest& request, const GetDatasetProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDatasetProxyOutcomeCallable getDatasetProxyCallable(const Model::GetDatasetProxyRequest& request) const;
			GetFlowJobOutcome getFlowJob(const Model::GetFlowJobRequest &request)const;
			void getFlowJobAsync(const Model::GetFlowJobRequest& request, const GetFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFlowJobOutcomeCallable getFlowJobCallable(const Model::GetFlowJobRequest& request) const;
			GetGroupHandlingSummaryOutcome getGroupHandlingSummary(const Model::GetGroupHandlingSummaryRequest &request)const;
			void getGroupHandlingSummaryAsync(const Model::GetGroupHandlingSummaryRequest& request, const GetGroupHandlingSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGroupHandlingSummaryOutcomeCallable getGroupHandlingSummaryCallable(const Model::GetGroupHandlingSummaryRequest& request) const;
			GetGroupTaskDetailOutcome getGroupTaskDetail(const Model::GetGroupTaskDetailRequest &request)const;
			void getGroupTaskDetailAsync(const Model::GetGroupTaskDetailRequest& request, const GetGroupTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGroupTaskDetailOutcomeCallable getGroupTaskDetailCallable(const Model::GetGroupTaskDetailRequest& request) const;
			GetGroupTaskPersonDetailOutcome getGroupTaskPersonDetail(const Model::GetGroupTaskPersonDetailRequest &request)const;
			void getGroupTaskPersonDetailAsync(const Model::GetGroupTaskPersonDetailRequest& request, const GetGroupTaskPersonDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGroupTaskPersonDetailOutcomeCallable getGroupTaskPersonDetailCallable(const Model::GetGroupTaskPersonDetailRequest& request) const;
			GetHistoryMarkResultOutcome getHistoryMarkResult(const Model::GetHistoryMarkResultRequest &request)const;
			void getHistoryMarkResultAsync(const Model::GetHistoryMarkResultRequest& request, const GetHistoryMarkResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetHistoryMarkResultOutcomeCallable getHistoryMarkResultCallable(const Model::GetHistoryMarkResultRequest& request) const;
			GetIntWholeSummaryOutcome getIntWholeSummary(const Model::GetIntWholeSummaryRequest &request)const;
			void getIntWholeSummaryAsync(const Model::GetIntWholeSummaryRequest& request, const GetIntWholeSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetIntWholeSummaryOutcomeCallable getIntWholeSummaryCallable(const Model::GetIntWholeSummaryRequest& request) const;
			GetMarkPersonDetailOutcome getMarkPersonDetail(const Model::GetMarkPersonDetailRequest &request)const;
			void getMarkPersonDetailAsync(const Model::GetMarkPersonDetailRequest& request, const GetMarkPersonDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMarkPersonDetailOutcomeCallable getMarkPersonDetailCallable(const Model::GetMarkPersonDetailRequest& request) const;
			GetMarkPersonHandlingSummaryOutcome getMarkPersonHandlingSummary(const Model::GetMarkPersonHandlingSummaryRequest &request)const;
			void getMarkPersonHandlingSummaryAsync(const Model::GetMarkPersonHandlingSummaryRequest& request, const GetMarkPersonHandlingSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMarkPersonHandlingSummaryOutcomeCallable getMarkPersonHandlingSummaryCallable(const Model::GetMarkPersonHandlingSummaryRequest& request) const;
			GetMarkQuantityOutcome getMarkQuantity(const Model::GetMarkQuantityRequest &request)const;
			void getMarkQuantityAsync(const Model::GetMarkQuantityRequest& request, const GetMarkQuantityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMarkQuantityOutcomeCallable getMarkQuantityCallable(const Model::GetMarkQuantityRequest& request) const;
			GetMarkResultOutcome getMarkResult(const Model::GetMarkResultRequest &request)const;
			void getMarkResultAsync(const Model::GetMarkResultRequest& request, const GetMarkResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMarkResultOutcomeCallable getMarkResultCallable(const Model::GetMarkResultRequest& request) const;
			GetMarkUserDetailOutcome getMarkUserDetail(const Model::GetMarkUserDetailRequest &request)const;
			void getMarkUserDetailAsync(const Model::GetMarkUserDetailRequest& request, const GetMarkUserDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMarkUserDetailOutcomeCallable getMarkUserDetailCallable(const Model::GetMarkUserDetailRequest& request) const;
			GetMarkUserEfficiencyOutcome getMarkUserEfficiency(const Model::GetMarkUserEfficiencyRequest &request)const;
			void getMarkUserEfficiencyAsync(const Model::GetMarkUserEfficiencyRequest& request, const GetMarkUserEfficiencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMarkUserEfficiencyOutcomeCallable getMarkUserEfficiencyCallable(const Model::GetMarkUserEfficiencyRequest& request) const;
			GetMarkUserSummaryOutcome getMarkUserSummary(const Model::GetMarkUserSummaryRequest &request)const;
			void getMarkUserSummaryAsync(const Model::GetMarkUserSummaryRequest& request, const GetMarkUserSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMarkUserSummaryOutcomeCallable getMarkUserSummaryCallable(const Model::GetMarkUserSummaryRequest& request) const;
			GetModelByIdOutcome getModelById(const Model::GetModelByIdRequest &request)const;
			void getModelByIdAsync(const Model::GetModelByIdRequest& request, const GetModelByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetModelByIdOutcomeCallable getModelByIdCallable(const Model::GetModelByIdRequest& request) const;
			GetOptionTemplateOutcome getOptionTemplate(const Model::GetOptionTemplateRequest &request)const;
			void getOptionTemplateAsync(const Model::GetOptionTemplateRequest& request, const GetOptionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOptionTemplateOutcomeCallable getOptionTemplateCallable(const Model::GetOptionTemplateRequest& request) const;
			GetOrCreateTntInstByBizNoOutcome getOrCreateTntInstByBizNo(const Model::GetOrCreateTntInstByBizNoRequest &request)const;
			void getOrCreateTntInstByBizNoAsync(const Model::GetOrCreateTntInstByBizNoRequest& request, const GetOrCreateTntInstByBizNoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOrCreateTntInstByBizNoOutcomeCallable getOrCreateTntInstByBizNoCallable(const Model::GetOrCreateTntInstByBizNoRequest& request) const;
			GetPersonSummaryOutcome getPersonSummary(const Model::GetPersonSummaryRequest &request)const;
			void getPersonSummaryAsync(const Model::GetPersonSummaryRequest& request, const GetPersonSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPersonSummaryOutcomeCallable getPersonSummaryCallable(const Model::GetPersonSummaryRequest& request) const;
			GetSamplingSummaryOutcome getSamplingSummary(const Model::GetSamplingSummaryRequest &request)const;
			void getSamplingSummaryAsync(const Model::GetSamplingSummaryRequest& request, const GetSamplingSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSamplingSummaryOutcomeCallable getSamplingSummaryCallable(const Model::GetSamplingSummaryRequest& request) const;
			GetSubTaskDownloadSystemResultOutcome getSubTaskDownloadSystemResult(const Model::GetSubTaskDownloadSystemResultRequest &request)const;
			void getSubTaskDownloadSystemResultAsync(const Model::GetSubTaskDownloadSystemResultRequest& request, const GetSubTaskDownloadSystemResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSubTaskDownloadSystemResultOutcomeCallable getSubTaskDownloadSystemResultCallable(const Model::GetSubTaskDownloadSystemResultRequest& request) const;
			GetSubTaskDownloadUserResultOutcome getSubTaskDownloadUserResult(const Model::GetSubTaskDownloadUserResultRequest &request)const;
			void getSubTaskDownloadUserResultAsync(const Model::GetSubTaskDownloadUserResultRequest& request, const GetSubTaskDownloadUserResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSubTaskDownloadUserResultOutcomeCallable getSubTaskDownloadUserResultCallable(const Model::GetSubTaskDownloadUserResultRequest& request) const;
			GetSubTaskSummaryOutcome getSubTaskSummary(const Model::GetSubTaskSummaryRequest &request)const;
			void getSubTaskSummaryAsync(const Model::GetSubTaskSummaryRequest& request, const GetSubTaskSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSubTaskSummaryOutcomeCallable getSubTaskSummaryCallable(const Model::GetSubTaskSummaryRequest& request) const;
			GetTaskOutcome getTask(const Model::GetTaskRequest &request)const;
			void getTaskAsync(const Model::GetTaskRequest& request, const GetTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTaskOutcomeCallable getTaskCallable(const Model::GetTaskRequest& request) const;
			GetTaskPersonSummaryOutcome getTaskPersonSummary(const Model::GetTaskPersonSummaryRequest &request)const;
			void getTaskPersonSummaryAsync(const Model::GetTaskPersonSummaryRequest& request, const GetTaskPersonSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTaskPersonSummaryOutcomeCallable getTaskPersonSummaryCallable(const Model::GetTaskPersonSummaryRequest& request) const;
			GetTaskProcessInfoOutcome getTaskProcessInfo(const Model::GetTaskProcessInfoRequest &request)const;
			void getTaskProcessInfoAsync(const Model::GetTaskProcessInfoRequest& request, const GetTaskProcessInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTaskProcessInfoOutcomeCallable getTaskProcessInfoCallable(const Model::GetTaskProcessInfoRequest& request) const;
			GetTaskStatTypesOutcome getTaskStatTypes(const Model::GetTaskStatTypesRequest &request)const;
			void getTaskStatTypesAsync(const Model::GetTaskStatTypesRequest& request, const GetTaskStatTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTaskStatTypesOutcomeCallable getTaskStatTypesCallable(const Model::GetTaskStatTypesRequest& request) const;
			GetTaskSummaryOutcome getTaskSummary(const Model::GetTaskSummaryRequest &request)const;
			void getTaskSummaryAsync(const Model::GetTaskSummaryRequest& request, const GetTaskSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTaskSummaryOutcomeCallable getTaskSummaryCallable(const Model::GetTaskSummaryRequest& request) const;
			GetTntConfListValueOutcome getTntConfListValue(const Model::GetTntConfListValueRequest &request)const;
			void getTntConfListValueAsync(const Model::GetTntConfListValueRequest& request, const GetTntConfListValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTntConfListValueOutcomeCallable getTntConfListValueCallable(const Model::GetTntConfListValueRequest& request) const;
			GetTntUserRoleOutcome getTntUserRole(const Model::GetTntUserRoleRequest &request)const;
			void getTntUserRoleAsync(const Model::GetTntUserRoleRequest& request, const GetTntUserRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTntUserRoleOutcomeCallable getTntUserRoleCallable(const Model::GetTntUserRoleRequest& request) const;
			GetUpdateTimeOutcome getUpdateTime(const Model::GetUpdateTimeRequest &request)const;
			void getUpdateTimeAsync(const Model::GetUpdateTimeRequest& request, const GetUpdateTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUpdateTimeOutcomeCallable getUpdateTimeCallable(const Model::GetUpdateTimeRequest& request) const;
			GetUserOutcome getUser(const Model::GetUserRequest &request)const;
			void getUserAsync(const Model::GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserOutcomeCallable getUserCallable(const Model::GetUserRequest& request) const;
			GetUserMarkItemInfoOutcome getUserMarkItemInfo(const Model::GetUserMarkItemInfoRequest &request)const;
			void getUserMarkItemInfoAsync(const Model::GetUserMarkItemInfoRequest& request, const GetUserMarkItemInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserMarkItemInfoOutcomeCallable getUserMarkItemInfoCallable(const Model::GetUserMarkItemInfoRequest& request) const;
			ImportOptionTemplateOutcome importOptionTemplate(const Model::ImportOptionTemplateRequest &request)const;
			void importOptionTemplateAsync(const Model::ImportOptionTemplateRequest& request, const ImportOptionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportOptionTemplateOutcomeCallable importOptionTemplateCallable(const Model::ImportOptionTemplateRequest& request) const;
			InitSamplingUserSubTaskOutcome initSamplingUserSubTask(const Model::InitSamplingUserSubTaskRequest &request)const;
			void initSamplingUserSubTaskAsync(const Model::InitSamplingUserSubTaskRequest& request, const InitSamplingUserSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InitSamplingUserSubTaskOutcomeCallable initSamplingUserSubTaskCallable(const Model::InitSamplingUserSubTaskRequest& request) const;
			ListAssignedSubUserTaskOutcome listAssignedSubUserTask(const Model::ListAssignedSubUserTaskRequest &request)const;
			void listAssignedSubUserTaskAsync(const Model::ListAssignedSubUserTaskRequest& request, const ListAssignedSubUserTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAssignedSubUserTaskOutcomeCallable listAssignedSubUserTaskCallable(const Model::ListAssignedSubUserTaskRequest& request) const;
			ListCheckTaskOutcome listCheckTask(const Model::ListCheckTaskRequest &request)const;
			void listCheckTaskAsync(const Model::ListCheckTaskRequest& request, const ListCheckTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCheckTaskOutcomeCallable listCheckTaskCallable(const Model::ListCheckTaskRequest& request) const;
			ListDatasetFieldsOutcome listDatasetFields(const Model::ListDatasetFieldsRequest &request)const;
			void listDatasetFieldsAsync(const Model::ListDatasetFieldsRequest& request, const ListDatasetFieldsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDatasetFieldsOutcomeCallable listDatasetFieldsCallable(const Model::ListDatasetFieldsRequest& request) const;
			ListFinishedSubUserTaskOutcome listFinishedSubUserTask(const Model::ListFinishedSubUserTaskRequest &request)const;
			void listFinishedSubUserTaskAsync(const Model::ListFinishedSubUserTaskRequest& request, const ListFinishedSubUserTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFinishedSubUserTaskOutcomeCallable listFinishedSubUserTaskCallable(const Model::ListFinishedSubUserTaskRequest& request) const;
			ListMarkableTaskOutcome listMarkableTask(const Model::ListMarkableTaskRequest &request)const;
			void listMarkableTaskAsync(const Model::ListMarkableTaskRequest& request, const ListMarkableTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMarkableTaskOutcomeCallable listMarkableTaskCallable(const Model::ListMarkableTaskRequest& request) const;
			ListSamplingHandlerUserOutcome listSamplingHandlerUser(const Model::ListSamplingHandlerUserRequest &request)const;
			void listSamplingHandlerUserAsync(const Model::ListSamplingHandlerUserRequest& request, const ListSamplingHandlerUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSamplingHandlerUserOutcomeCallable listSamplingHandlerUserCallable(const Model::ListSamplingHandlerUserRequest& request) const;
			ListSamplingResultMetaOutcome listSamplingResultMeta(const Model::ListSamplingResultMetaRequest &request)const;
			void listSamplingResultMetaAsync(const Model::ListSamplingResultMetaRequest& request, const ListSamplingResultMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSamplingResultMetaOutcomeCallable listSamplingResultMetaCallable(const Model::ListSamplingResultMetaRequest& request) const;
			ListSamplingUsersOutcome listSamplingUsers(const Model::ListSamplingUsersRequest &request)const;
			void listSamplingUsersAsync(const Model::ListSamplingUsersRequest& request, const ListSamplingUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSamplingUsersOutcomeCallable listSamplingUsersCallable(const Model::ListSamplingUsersRequest& request) const;
			ListTntConfigOutcome listTntConfig(const Model::ListTntConfigRequest &request)const;
			void listTntConfigAsync(const Model::ListTntConfigRequest& request, const ListTntConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTntConfigOutcomeCallable listTntConfigCallable(const Model::ListTntConfigRequest& request) const;
			ListWorkNodeUsersOutcome listWorkNodeUsers(const Model::ListWorkNodeUsersRequest &request)const;
			void listWorkNodeUsersAsync(const Model::ListWorkNodeUsersRequest& request, const ListWorkNodeUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListWorkNodeUsersOutcomeCallable listWorkNodeUsersCallable(const Model::ListWorkNodeUsersRequest& request) const;
			ManualCalReportOutcome manualCalReport(const Model::ManualCalReportRequest &request)const;
			void manualCalReportAsync(const Model::ManualCalReportRequest& request, const ManualCalReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ManualCalReportOutcomeCallable manualCalReportCallable(const Model::ManualCalReportRequest& request) const;
			MngReleaseUserSubTaskOutcome mngReleaseUserSubTask(const Model::MngReleaseUserSubTaskRequest &request)const;
			void mngReleaseUserSubTaskAsync(const Model::MngReleaseUserSubTaskRequest& request, const MngReleaseUserSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MngReleaseUserSubTaskOutcomeCallable mngReleaseUserSubTaskCallable(const Model::MngReleaseUserSubTaskRequest& request) const;
			OfflineTaskOutcome offlineTask(const Model::OfflineTaskRequest &request)const;
			void offlineTaskAsync(const Model::OfflineTaskRequest& request, const OfflineTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OfflineTaskOutcomeCallable offlineTaskCallable(const Model::OfflineTaskRequest& request) const;
			OnlineTaskOutcome onlineTask(const Model::OnlineTaskRequest &request)const;
			void onlineTaskAsync(const Model::OnlineTaskRequest& request, const OnlineTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OnlineTaskOutcomeCallable onlineTaskCallable(const Model::OnlineTaskRequest& request) const;
			PageViewDataMetaOutcome pageViewDataMeta(const Model::PageViewDataMetaRequest &request)const;
			void pageViewDataMetaAsync(const Model::PageViewDataMetaRequest& request, const PageViewDataMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PageViewDataMetaOutcomeCallable pageViewDataMetaCallable(const Model::PageViewDataMetaRequest& request) const;
			PageViewDatasetProxyOutcome pageViewDatasetProxy(const Model::PageViewDatasetProxyRequest &request)const;
			void pageViewDatasetProxyAsync(const Model::PageViewDatasetProxyRequest& request, const PageViewDatasetProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PageViewDatasetProxyOutcomeCallable pageViewDatasetProxyCallable(const Model::PageViewDatasetProxyRequest& request) const;
			PageViewFlowJobOutcome pageViewFlowJob(const Model::PageViewFlowJobRequest &request)const;
			void pageViewFlowJobAsync(const Model::PageViewFlowJobRequest& request, const PageViewFlowJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PageViewFlowJobOutcomeCallable pageViewFlowJobCallable(const Model::PageViewFlowJobRequest& request) const;
			PageViewModelOutcome pageViewModel(const Model::PageViewModelRequest &request)const;
			void pageViewModelAsync(const Model::PageViewModelRequest& request, const PageViewModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PageViewModelOutcomeCallable pageViewModelCallable(const Model::PageViewModelRequest& request) const;
			PageViewMyTntOutcome pageViewMyTnt(const Model::PageViewMyTntRequest &request)const;
			void pageViewMyTntAsync(const Model::PageViewMyTntRequest& request, const PageViewMyTntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PageViewMyTntOutcomeCallable pageViewMyTntCallable(const Model::PageViewMyTntRequest& request) const;
			PageViewOptionTemplateOutcome pageViewOptionTemplate(const Model::PageViewOptionTemplateRequest &request)const;
			void pageViewOptionTemplateAsync(const Model::PageViewOptionTemplateRequest& request, const PageViewOptionTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PageViewOptionTemplateOutcomeCallable pageViewOptionTemplateCallable(const Model::PageViewOptionTemplateRequest& request) const;
			PageViewSubTaskItemOutcome pageViewSubTaskItem(const Model::PageViewSubTaskItemRequest &request)const;
			void pageViewSubTaskItemAsync(const Model::PageViewSubTaskItemRequest& request, const PageViewSubTaskItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PageViewSubTaskItemOutcomeCallable pageViewSubTaskItemCallable(const Model::PageViewSubTaskItemRequest& request) const;
			PageViewTaskOutcome pageViewTask(const Model::PageViewTaskRequest &request)const;
			void pageViewTaskAsync(const Model::PageViewTaskRequest& request, const PageViewTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PageViewTaskOutcomeCallable pageViewTaskCallable(const Model::PageViewTaskRequest& request) const;
			PageViewTntUserOutcome pageViewTntUser(const Model::PageViewTntUserRequest &request)const;
			void pageViewTntUserAsync(const Model::PageViewTntUserRequest& request, const PageViewTntUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PageViewTntUserOutcomeCallable pageViewTntUserCallable(const Model::PageViewTntUserRequest& request) const;
			PageViewUserOutcome pageViewUser(const Model::PageViewUserRequest &request)const;
			void pageViewUserAsync(const Model::PageViewUserRequest& request, const PageViewUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PageViewUserOutcomeCallable pageViewUserCallable(const Model::PageViewUserRequest& request) const;
			PageViewUserGroupOutcome pageViewUserGroup(const Model::PageViewUserGroupRequest &request)const;
			void pageViewUserGroupAsync(const Model::PageViewUserGroupRequest& request, const PageViewUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PageViewUserGroupOutcomeCallable pageViewUserGroupCallable(const Model::PageViewUserGroupRequest& request) const;
			PageviewSubTaskOutcome pageviewSubTask(const Model::PageviewSubTaskRequest &request)const;
			void pageviewSubTaskAsync(const Model::PageviewSubTaskRequest& request, const PageviewSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PageviewSubTaskOutcomeCallable pageviewSubTaskCallable(const Model::PageviewSubTaskRequest& request) const;
			PollingSampleMarkItemsOutcome pollingSampleMarkItems(const Model::PollingSampleMarkItemsRequest &request)const;
			void pollingSampleMarkItemsAsync(const Model::PollingSampleMarkItemsRequest& request, const PollingSampleMarkItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PollingSampleMarkItemsOutcomeCallable pollingSampleMarkItemsCallable(const Model::PollingSampleMarkItemsRequest& request) const;
			PreviewTaskTemplateOutcome previewTaskTemplate(const Model::PreviewTaskTemplateRequest &request)const;
			void previewTaskTemplateAsync(const Model::PreviewTaskTemplateRequest& request, const PreviewTaskTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PreviewTaskTemplateOutcomeCallable previewTaskTemplateCallable(const Model::PreviewTaskTemplateRequest& request) const;
			ProxyRobotServiceOutcome proxyRobotService(const Model::ProxyRobotServiceRequest &request)const;
			void proxyRobotServiceAsync(const Model::ProxyRobotServiceRequest& request, const ProxyRobotServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ProxyRobotServiceOutcomeCallable proxyRobotServiceCallable(const Model::ProxyRobotServiceRequest& request) const;
			QueryMarkableSubTaskOutcome queryMarkableSubTask(const Model::QueryMarkableSubTaskRequest &request)const;
			void queryMarkableSubTaskAsync(const Model::QueryMarkableSubTaskRequest& request, const QueryMarkableSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMarkableSubTaskOutcomeCallable queryMarkableSubTaskCallable(const Model::QueryMarkableSubTaskRequest& request) const;
			QuerySampleMarkItemsOutcome querySampleMarkItems(const Model::QuerySampleMarkItemsRequest &request)const;
			void querySampleMarkItemsAsync(const Model::QuerySampleMarkItemsRequest& request, const QuerySampleMarkItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySampleMarkItemsOutcomeCallable querySampleMarkItemsCallable(const Model::QuerySampleMarkItemsRequest& request) const;
			QuerySamplingPoolSizeOutcome querySamplingPoolSize(const Model::QuerySamplingPoolSizeRequest &request)const;
			void querySamplingPoolSizeAsync(const Model::QuerySamplingPoolSizeRequest& request, const QuerySamplingPoolSizeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySamplingPoolSizeOutcomeCallable querySamplingPoolSizeCallable(const Model::QuerySamplingPoolSizeRequest& request) const;
			QuerySkipUserSubTaskOutcome querySkipUserSubTask(const Model::QuerySkipUserSubTaskRequest &request)const;
			void querySkipUserSubTaskAsync(const Model::QuerySkipUserSubTaskRequest& request, const QuerySkipUserSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySkipUserSubTaskOutcomeCallable querySkipUserSubTaskCallable(const Model::QuerySkipUserSubTaskRequest& request) const;
			RejectSamplingTaskOutcome rejectSamplingTask(const Model::RejectSamplingTaskRequest &request)const;
			void rejectSamplingTaskAsync(const Model::RejectSamplingTaskRequest& request, const RejectSamplingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RejectSamplingTaskOutcomeCallable rejectSamplingTaskCallable(const Model::RejectSamplingTaskRequest& request) const;
			RejectSubTaskOutcome rejectSubTask(const Model::RejectSubTaskRequest &request)const;
			void rejectSubTaskAsync(const Model::RejectSubTaskRequest& request, const RejectSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RejectSubTaskOutcomeCallable rejectSubTaskCallable(const Model::RejectSubTaskRequest& request) const;
			ReleaseUserSubTaskOutcome releaseUserSubTask(const Model::ReleaseUserSubTaskRequest &request)const;
			void releaseUserSubTaskAsync(const Model::ReleaseUserSubTaskRequest& request, const ReleaseUserSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseUserSubTaskOutcomeCallable releaseUserSubTaskCallable(const Model::ReleaseUserSubTaskRequest& request) const;
			RemoveMemberOrGroupTaskOutcome removeMemberOrGroupTask(const Model::RemoveMemberOrGroupTaskRequest &request)const;
			void removeMemberOrGroupTaskAsync(const Model::RemoveMemberOrGroupTaskRequest& request, const RemoveMemberOrGroupTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveMemberOrGroupTaskOutcomeCallable removeMemberOrGroupTaskCallable(const Model::RemoveMemberOrGroupTaskRequest& request) const;
			RemoveUserInGroupOutcome removeUserInGroup(const Model::RemoveUserInGroupRequest &request)const;
			void removeUserInGroupAsync(const Model::RemoveUserInGroupRequest& request, const RemoveUserInGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveUserInGroupOutcomeCallable removeUserInGroupCallable(const Model::RemoveUserInGroupRequest& request) const;
			RemoveUserInTntOutcome removeUserInTnt(const Model::RemoveUserInTntRequest &request)const;
			void removeUserInTntAsync(const Model::RemoveUserInTntRequest& request, const RemoveUserInTntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveUserInTntOutcomeCallable removeUserInTntCallable(const Model::RemoveUserInTntRequest& request) const;
			SamplingSubUserTaskListOutcome samplingSubUserTaskList(const Model::SamplingSubUserTaskListRequest &request)const;
			void samplingSubUserTaskListAsync(const Model::SamplingSubUserTaskListRequest& request, const SamplingSubUserTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SamplingSubUserTaskListOutcomeCallable samplingSubUserTaskListCallable(const Model::SamplingSubUserTaskListRequest& request) const;
			SkipFinishedOutcome skipFinished(const Model::SkipFinishedRequest &request)const;
			void skipFinishedAsync(const Model::SkipFinishedRequest& request, const SkipFinishedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SkipFinishedOutcomeCallable skipFinishedCallable(const Model::SkipFinishedRequest& request) const;
			SkipUserSubTaskOutcome skipUserSubTask(const Model::SkipUserSubTaskRequest &request)const;
			void skipUserSubTaskAsync(const Model::SkipUserSubTaskRequest& request, const SkipUserSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SkipUserSubTaskOutcomeCallable skipUserSubTaskCallable(const Model::SkipUserSubTaskRequest& request) const;
			TaskStageStatOutcome taskStageStat(const Model::TaskStageStatRequest &request)const;
			void taskStageStatAsync(const Model::TaskStageStatRequest& request, const TaskStageStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TaskStageStatOutcomeCallable taskStageStatCallable(const Model::TaskStageStatRequest& request) const;
			TestRequestOutcome testRequest(const Model::TestRequestRequest &request)const;
			void testRequestAsync(const Model::TestRequestRequest& request, const TestRequestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TestRequestOutcomeCallable testRequestCallable(const Model::TestRequestRequest& request) const;
			TransferUserSubTaskOutcome transferUserSubTask(const Model::TransferUserSubTaskRequest &request)const;
			void transferUserSubTaskAsync(const Model::TransferUserSubTaskRequest& request, const TransferUserSubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TransferUserSubTaskOutcomeCallable transferUserSubTaskCallable(const Model::TransferUserSubTaskRequest& request) const;
			UnpassFeedbackOutcome unpassFeedback(const Model::UnpassFeedbackRequest &request)const;
			void unpassFeedbackAsync(const Model::UnpassFeedbackRequest& request, const UnpassFeedbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnpassFeedbackOutcomeCallable unpassFeedbackCallable(const Model::UnpassFeedbackRequest& request) const;
			UpdateDatasetStateMsgOutcome updateDatasetStateMsg(const Model::UpdateDatasetStateMsgRequest &request)const;
			void updateDatasetStateMsgAsync(const Model::UpdateDatasetStateMsgRequest& request, const UpdateDatasetStateMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDatasetStateMsgOutcomeCallable updateDatasetStateMsgCallable(const Model::UpdateDatasetStateMsgRequest& request) const;
			UpdateMarkResultOutcome updateMarkResult(const Model::UpdateMarkResultRequest &request)const;
			void updateMarkResultAsync(const Model::UpdateMarkResultRequest& request, const UpdateMarkResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMarkResultOutcomeCallable updateMarkResultCallable(const Model::UpdateMarkResultRequest& request) const;
			UpdateMarkResultByAdminOutcome updateMarkResultByAdmin(const Model::UpdateMarkResultByAdminRequest &request)const;
			void updateMarkResultByAdminAsync(const Model::UpdateMarkResultByAdminRequest& request, const UpdateMarkResultByAdminAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMarkResultByAdminOutcomeCallable updateMarkResultByAdminCallable(const Model::UpdateMarkResultByAdminRequest& request) const;
			UpdateModelOutcome updateModel(const Model::UpdateModelRequest &request)const;
			void updateModelAsync(const Model::UpdateModelRequest& request, const UpdateModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateModelOutcomeCallable updateModelCallable(const Model::UpdateModelRequest& request) const;
			UpdateTaskOutcome updateTask(const Model::UpdateTaskRequest &request)const;
			void updateTaskAsync(const Model::UpdateTaskRequest& request, const UpdateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTaskOutcomeCallable updateTaskCallable(const Model::UpdateTaskRequest& request) const;
			UpdateTaskDataOutcome updateTaskData(const Model::UpdateTaskDataRequest &request)const;
			void updateTaskDataAsync(const Model::UpdateTaskDataRequest& request, const UpdateTaskDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTaskDataOutcomeCallable updateTaskDataCallable(const Model::UpdateTaskDataRequest& request) const;
			UpdateTaskTemplateOutcome updateTaskTemplate(const Model::UpdateTaskTemplateRequest &request)const;
			void updateTaskTemplateAsync(const Model::UpdateTaskTemplateRequest& request, const UpdateTaskTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTaskTemplateOutcomeCallable updateTaskTemplateCallable(const Model::UpdateTaskTemplateRequest& request) const;
			UpdateTemplateOutcome updateTemplate(const Model::UpdateTemplateRequest &request)const;
			void updateTemplateAsync(const Model::UpdateTemplateRequest& request, const UpdateTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTemplateOutcomeCallable updateTemplateCallable(const Model::UpdateTemplateRequest& request) const;
			UpdateUserNameOutcome updateUserName(const Model::UpdateUserNameRequest &request)const;
			void updateUserNameAsync(const Model::UpdateUserNameRequest& request, const UpdateUserNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateUserNameOutcomeCallable updateUserNameCallable(const Model::UpdateUserNameRequest& request) const;
			UpdateUserRoleInTntOutcome updateUserRoleInTnt(const Model::UpdateUserRoleInTntRequest &request)const;
			void updateUserRoleInTntAsync(const Model::UpdateUserRoleInTntRequest& request, const UpdateUserRoleInTntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateUserRoleInTntOutcomeCallable updateUserRoleInTntCallable(const Model::UpdateUserRoleInTntRequest& request) const;
			UserSubTaskTimerOutcome userSubTaskTimer(const Model::UserSubTaskTimerRequest &request)const;
			void userSubTaskTimerAsync(const Model::UserSubTaskTimerRequest& request, const UserSubTaskTimerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UserSubTaskTimerOutcomeCallable userSubTaskTimerCallable(const Model::UserSubTaskTimerRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ITAG_ITAGCLIENT_H_
