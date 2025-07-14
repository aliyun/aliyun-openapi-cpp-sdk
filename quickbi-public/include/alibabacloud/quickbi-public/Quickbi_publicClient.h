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

#ifndef ALIBABACLOUD_QUICKBI_PUBLIC_QUICKBI_PUBLICCLIENT_H_
#define ALIBABACLOUD_QUICKBI_PUBLIC_QUICKBI_PUBLICCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Quickbi_publicExport.h"
#include "model/AddDataLevelPermissionRuleUsersRequest.h"
#include "model/AddDataLevelPermissionRuleUsersResult.h"
#include "model/AddDataLevelPermissionWhiteListRequest.h"
#include "model/AddDataLevelPermissionWhiteListResult.h"
#include "model/AddShareReportRequest.h"
#include "model/AddShareReportResult.h"
#include "model/AddUserRequest.h"
#include "model/AddUserResult.h"
#include "model/AddUserGroupMemberRequest.h"
#include "model/AddUserGroupMemberResult.h"
#include "model/AddUserGroupMembersRequest.h"
#include "model/AddUserGroupMembersResult.h"
#include "model/AddUserTagMetaRequest.h"
#include "model/AddUserTagMetaResult.h"
#include "model/AddUserToWorkspaceRequest.h"
#include "model/AddUserToWorkspaceResult.h"
#include "model/AddWorkspaceUsersRequest.h"
#include "model/AddWorkspaceUsersResult.h"
#include "model/AllotDatasetAccelerationTaskRequest.h"
#include "model/AllotDatasetAccelerationTaskResult.h"
#include "model/AuthorizeMenuRequest.h"
#include "model/AuthorizeMenuResult.h"
#include "model/BatchAddFeishuUsersRequest.h"
#include "model/BatchAddFeishuUsersResult.h"
#include "model/CancelAuthorizationMenuRequest.h"
#include "model/CancelAuthorizationMenuResult.h"
#include "model/CancelCollectionRequest.h"
#include "model/CancelCollectionResult.h"
#include "model/CancelReportShareRequest.h"
#include "model/CancelReportShareResult.h"
#include "model/ChangeVisibilityModelRequest.h"
#include "model/ChangeVisibilityModelResult.h"
#include "model/CheckReadableRequest.h"
#include "model/CheckReadableResult.h"
#include "model/CreateTicketRequest.h"
#include "model/CreateTicketResult.h"
#include "model/CreateTicket4CopilotRequest.h"
#include "model/CreateTicket4CopilotResult.h"
#include "model/CreateUserGroupRequest.h"
#include "model/CreateUserGroupResult.h"
#include "model/DataInterpretationRequest.h"
#include "model/DataInterpretationResult.h"
#include "model/DataSetBloodRequest.h"
#include "model/DataSetBloodResult.h"
#include "model/DataSourceBloodRequest.h"
#include "model/DataSourceBloodResult.h"
#include "model/DelayTicketExpireTimeRequest.h"
#include "model/DelayTicketExpireTimeResult.h"
#include "model/DeleteDataLevelPermissionRuleUsersRequest.h"
#include "model/DeleteDataLevelPermissionRuleUsersResult.h"
#include "model/DeleteDataLevelRuleConfigRequest.h"
#include "model/DeleteDataLevelRuleConfigResult.h"
#include "model/DeleteTicketRequest.h"
#include "model/DeleteTicketResult.h"
#include "model/DeleteUserRequest.h"
#include "model/DeleteUserResult.h"
#include "model/DeleteUserFromWorkspaceRequest.h"
#include "model/DeleteUserFromWorkspaceResult.h"
#include "model/DeleteUserGroupRequest.h"
#include "model/DeleteUserGroupResult.h"
#include "model/DeleteUserGroupMemberRequest.h"
#include "model/DeleteUserGroupMemberResult.h"
#include "model/DeleteUserGroupMembersRequest.h"
#include "model/DeleteUserGroupMembersResult.h"
#include "model/DeleteUserTagMetaRequest.h"
#include "model/DeleteUserTagMetaResult.h"
#include "model/GetDataSourceConnectionInfoRequest.h"
#include "model/GetDataSourceConnectionInfoResult.h"
#include "model/GetMailTaskStatusRequest.h"
#include "model/GetMailTaskStatusResult.h"
#include "model/GetUserGroupInfoRequest.h"
#include "model/GetUserGroupInfoResult.h"
#include "model/GetWorksEmbedListRequest.h"
#include "model/GetWorksEmbedListResult.h"
#include "model/ListApiDatasourceRequest.h"
#include "model/ListApiDatasourceResult.h"
#include "model/ListByUserGroupIdRequest.h"
#include "model/ListByUserGroupIdResult.h"
#include "model/ListCollectionsRequest.h"
#include "model/ListCollectionsResult.h"
#include "model/ListCubeDataLevelPermissionConfigRequest.h"
#include "model/ListCubeDataLevelPermissionConfigResult.h"
#include "model/ListDataLevelPermissionWhiteListRequest.h"
#include "model/ListDataLevelPermissionWhiteListResult.h"
#include "model/ListDataSourceRequest.h"
#include "model/ListDataSourceResult.h"
#include "model/ListFavoriteReportsRequest.h"
#include "model/ListFavoriteReportsResult.h"
#include "model/ListOrganizationRoleUsersRequest.h"
#include "model/ListOrganizationRoleUsersResult.h"
#include "model/ListOrganizationRolesRequest.h"
#include "model/ListOrganizationRolesResult.h"
#include "model/ListPortalMenuAuthorizationRequest.h"
#include "model/ListPortalMenuAuthorizationResult.h"
#include "model/ListPortalMenusRequest.h"
#include "model/ListPortalMenusResult.h"
#include "model/ListRecentViewReportsRequest.h"
#include "model/ListRecentViewReportsResult.h"
#include "model/ListSharedReportsRequest.h"
#include "model/ListSharedReportsResult.h"
#include "model/ListUserGroupsByUserIdRequest.h"
#include "model/ListUserGroupsByUserIdResult.h"
#include "model/ListWorkspaceRoleUsersRequest.h"
#include "model/ListWorkspaceRoleUsersResult.h"
#include "model/ListWorkspaceRolesRequest.h"
#include "model/ListWorkspaceRolesResult.h"
#include "model/ManualRunMailTaskRequest.h"
#include "model/ManualRunMailTaskResult.h"
#include "model/ModifyApiDatasourceParametersRequest.h"
#include "model/ModifyApiDatasourceParametersResult.h"
#include "model/ModifyCopilotEmbedConfigRequest.h"
#include "model/ModifyCopilotEmbedConfigResult.h"
#include "model/QueryApprovalInfoRequest.h"
#include "model/QueryApprovalInfoResult.h"
#include "model/QueryAuditLogRequest.h"
#include "model/QueryAuditLogResult.h"
#include "model/QueryComponentPerformanceRequest.h"
#include "model/QueryComponentPerformanceResult.h"
#include "model/QueryCopilotEmbedConfigRequest.h"
#include "model/QueryCopilotEmbedConfigResult.h"
#include "model/QueryCubeOptimizationRequest.h"
#include "model/QueryCubeOptimizationResult.h"
#include "model/QueryCubePerformanceRequest.h"
#include "model/QueryCubePerformanceResult.h"
#include "model/QueryDataRequest.h"
#include "model/QueryDataResult.h"
#include "model/QueryDataRangeRequest.h"
#include "model/QueryDataRangeResult.h"
#include "model/QueryDataServiceRequest.h"
#include "model/QueryDataServiceResult.h"
#include "model/QueryDataServiceListRequest.h"
#include "model/QueryDataServiceListResult.h"
#include "model/QueryDatasetDetailInfoRequest.h"
#include "model/QueryDatasetDetailInfoResult.h"
#include "model/QueryDatasetInfoRequest.h"
#include "model/QueryDatasetInfoResult.h"
#include "model/QueryDatasetListRequest.h"
#include "model/QueryDatasetListResult.h"
#include "model/QueryDatasetSmartqStatusRequest.h"
#include "model/QueryDatasetSmartqStatusResult.h"
#include "model/QueryDatasetSwitchInfoRequest.h"
#include "model/QueryDatasetSwitchInfoResult.h"
#include "model/QueryEmbeddedInfoRequest.h"
#include "model/QueryEmbeddedInfoResult.h"
#include "model/QueryEmbeddedStatusRequest.h"
#include "model/QueryEmbeddedStatusResult.h"
#include "model/QueryLlmCubeWithThemeListByUserIdRequest.h"
#include "model/QueryLlmCubeWithThemeListByUserIdResult.h"
#include "model/QueryOrganizationRoleConfigRequest.h"
#include "model/QueryOrganizationRoleConfigResult.h"
#include "model/QueryOrganizationWorkspaceListRequest.h"
#include "model/QueryOrganizationWorkspaceListResult.h"
#include "model/QueryReadableResourcesListByUserIdRequest.h"
#include "model/QueryReadableResourcesListByUserIdResult.h"
#include "model/QueryReadableResourcesListByUserIdV2Request.h"
#include "model/QueryReadableResourcesListByUserIdV2Result.h"
#include "model/QueryReportPerformanceRequest.h"
#include "model/QueryReportPerformanceResult.h"
#include "model/QueryShareListRequest.h"
#include "model/QueryShareListResult.h"
#include "model/QuerySharesToUserListRequest.h"
#include "model/QuerySharesToUserListResult.h"
#include "model/QuerySmartqPermissionByCubeIdRequest.h"
#include "model/QuerySmartqPermissionByCubeIdResult.h"
#include "model/QueryTicketInfoRequest.h"
#include "model/QueryTicketInfoResult.h"
#include "model/QueryUserGroupListByParentIdRequest.h"
#include "model/QueryUserGroupListByParentIdResult.h"
#include "model/QueryUserGroupMemberRequest.h"
#include "model/QueryUserGroupMemberResult.h"
#include "model/QueryUserInfoByAccountRequest.h"
#include "model/QueryUserInfoByAccountResult.h"
#include "model/QueryUserInfoByUserIdRequest.h"
#include "model/QueryUserInfoByUserIdResult.h"
#include "model/QueryUserListRequest.h"
#include "model/QueryUserListResult.h"
#include "model/QueryUserRoleInfoInWorkspaceRequest.h"
#include "model/QueryUserRoleInfoInWorkspaceResult.h"
#include "model/QueryUserTagMetaListRequest.h"
#include "model/QueryUserTagMetaListResult.h"
#include "model/QueryUserTagValueListRequest.h"
#include "model/QueryUserTagValueListResult.h"
#include "model/QueryWorksRequest.h"
#include "model/QueryWorksResult.h"
#include "model/QueryWorksBloodRelationshipRequest.h"
#include "model/QueryWorksBloodRelationshipResult.h"
#include "model/QueryWorksByOrganizationRequest.h"
#include "model/QueryWorksByOrganizationResult.h"
#include "model/QueryWorksByWorkspaceRequest.h"
#include "model/QueryWorksByWorkspaceResult.h"
#include "model/QueryWorkspaceRoleConfigRequest.h"
#include "model/QueryWorkspaceRoleConfigResult.h"
#include "model/QueryWorkspaceUserListRequest.h"
#include "model/QueryWorkspaceUserListResult.h"
#include "model/ResultCallbackRequest.h"
#include "model/ResultCallbackResult.h"
#include "model/SaveFavoritesRequest.h"
#include "model/SaveFavoritesResult.h"
#include "model/SetDataLevelPermissionExtraConfigRequest.h"
#include "model/SetDataLevelPermissionExtraConfigResult.h"
#include "model/SetDataLevelPermissionRuleConfigRequest.h"
#include "model/SetDataLevelPermissionRuleConfigResult.h"
#include "model/SetDataLevelPermissionWhiteListRequest.h"
#include "model/SetDataLevelPermissionWhiteListResult.h"
#include "model/SmartqAuthTransferRequest.h"
#include "model/SmartqAuthTransferResult.h"
#include "model/SmartqAuthorizeRequest.h"
#include "model/SmartqAuthorizeResult.h"
#include "model/SmartqQueryAbilityRequest.h"
#include "model/SmartqQueryAbilityResult.h"
#include "model/UpdateDataLevelPermissionStatusRequest.h"
#include "model/UpdateDataLevelPermissionStatusResult.h"
#include "model/UpdateEmbeddedStatusRequest.h"
#include "model/UpdateEmbeddedStatusResult.h"
#include "model/UpdateTicketNumRequest.h"
#include "model/UpdateTicketNumResult.h"
#include "model/UpdateUserRequest.h"
#include "model/UpdateUserResult.h"
#include "model/UpdateUserGroupRequest.h"
#include "model/UpdateUserGroupResult.h"
#include "model/UpdateUserTagMetaRequest.h"
#include "model/UpdateUserTagMetaResult.h"
#include "model/UpdateUserTagValueRequest.h"
#include "model/UpdateUserTagValueResult.h"
#include "model/UpdateWorkspaceUserRoleRequest.h"
#include "model/UpdateWorkspaceUserRoleResult.h"
#include "model/UpdateWorkspaceUsersRoleRequest.h"
#include "model/UpdateWorkspaceUsersRoleResult.h"
#include "model/WithdrawAllUserGroupsRequest.h"
#include "model/WithdrawAllUserGroupsResult.h"


namespace AlibabaCloud
{
	namespace Quickbi_public
	{
		class ALIBABACLOUD_QUICKBI_PUBLIC_EXPORT Quickbi_publicClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddDataLevelPermissionRuleUsersResult> AddDataLevelPermissionRuleUsersOutcome;
			typedef std::future<AddDataLevelPermissionRuleUsersOutcome> AddDataLevelPermissionRuleUsersOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::AddDataLevelPermissionRuleUsersRequest&, const AddDataLevelPermissionRuleUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddDataLevelPermissionRuleUsersAsyncHandler;
			typedef Outcome<Error, Model::AddDataLevelPermissionWhiteListResult> AddDataLevelPermissionWhiteListOutcome;
			typedef std::future<AddDataLevelPermissionWhiteListOutcome> AddDataLevelPermissionWhiteListOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::AddDataLevelPermissionWhiteListRequest&, const AddDataLevelPermissionWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddDataLevelPermissionWhiteListAsyncHandler;
			typedef Outcome<Error, Model::AddShareReportResult> AddShareReportOutcome;
			typedef std::future<AddShareReportOutcome> AddShareReportOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::AddShareReportRequest&, const AddShareReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddShareReportAsyncHandler;
			typedef Outcome<Error, Model::AddUserResult> AddUserOutcome;
			typedef std::future<AddUserOutcome> AddUserOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::AddUserRequest&, const AddUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddUserAsyncHandler;
			typedef Outcome<Error, Model::AddUserGroupMemberResult> AddUserGroupMemberOutcome;
			typedef std::future<AddUserGroupMemberOutcome> AddUserGroupMemberOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::AddUserGroupMemberRequest&, const AddUserGroupMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddUserGroupMemberAsyncHandler;
			typedef Outcome<Error, Model::AddUserGroupMembersResult> AddUserGroupMembersOutcome;
			typedef std::future<AddUserGroupMembersOutcome> AddUserGroupMembersOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::AddUserGroupMembersRequest&, const AddUserGroupMembersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddUserGroupMembersAsyncHandler;
			typedef Outcome<Error, Model::AddUserTagMetaResult> AddUserTagMetaOutcome;
			typedef std::future<AddUserTagMetaOutcome> AddUserTagMetaOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::AddUserTagMetaRequest&, const AddUserTagMetaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddUserTagMetaAsyncHandler;
			typedef Outcome<Error, Model::AddUserToWorkspaceResult> AddUserToWorkspaceOutcome;
			typedef std::future<AddUserToWorkspaceOutcome> AddUserToWorkspaceOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::AddUserToWorkspaceRequest&, const AddUserToWorkspaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddUserToWorkspaceAsyncHandler;
			typedef Outcome<Error, Model::AddWorkspaceUsersResult> AddWorkspaceUsersOutcome;
			typedef std::future<AddWorkspaceUsersOutcome> AddWorkspaceUsersOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::AddWorkspaceUsersRequest&, const AddWorkspaceUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddWorkspaceUsersAsyncHandler;
			typedef Outcome<Error, Model::AllotDatasetAccelerationTaskResult> AllotDatasetAccelerationTaskOutcome;
			typedef std::future<AllotDatasetAccelerationTaskOutcome> AllotDatasetAccelerationTaskOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::AllotDatasetAccelerationTaskRequest&, const AllotDatasetAccelerationTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllotDatasetAccelerationTaskAsyncHandler;
			typedef Outcome<Error, Model::AuthorizeMenuResult> AuthorizeMenuOutcome;
			typedef std::future<AuthorizeMenuOutcome> AuthorizeMenuOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::AuthorizeMenuRequest&, const AuthorizeMenuOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AuthorizeMenuAsyncHandler;
			typedef Outcome<Error, Model::BatchAddFeishuUsersResult> BatchAddFeishuUsersOutcome;
			typedef std::future<BatchAddFeishuUsersOutcome> BatchAddFeishuUsersOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::BatchAddFeishuUsersRequest&, const BatchAddFeishuUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchAddFeishuUsersAsyncHandler;
			typedef Outcome<Error, Model::CancelAuthorizationMenuResult> CancelAuthorizationMenuOutcome;
			typedef std::future<CancelAuthorizationMenuOutcome> CancelAuthorizationMenuOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::CancelAuthorizationMenuRequest&, const CancelAuthorizationMenuOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelAuthorizationMenuAsyncHandler;
			typedef Outcome<Error, Model::CancelCollectionResult> CancelCollectionOutcome;
			typedef std::future<CancelCollectionOutcome> CancelCollectionOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::CancelCollectionRequest&, const CancelCollectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelCollectionAsyncHandler;
			typedef Outcome<Error, Model::CancelReportShareResult> CancelReportShareOutcome;
			typedef std::future<CancelReportShareOutcome> CancelReportShareOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::CancelReportShareRequest&, const CancelReportShareOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelReportShareAsyncHandler;
			typedef Outcome<Error, Model::ChangeVisibilityModelResult> ChangeVisibilityModelOutcome;
			typedef std::future<ChangeVisibilityModelOutcome> ChangeVisibilityModelOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::ChangeVisibilityModelRequest&, const ChangeVisibilityModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeVisibilityModelAsyncHandler;
			typedef Outcome<Error, Model::CheckReadableResult> CheckReadableOutcome;
			typedef std::future<CheckReadableOutcome> CheckReadableOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::CheckReadableRequest&, const CheckReadableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckReadableAsyncHandler;
			typedef Outcome<Error, Model::CreateTicketResult> CreateTicketOutcome;
			typedef std::future<CreateTicketOutcome> CreateTicketOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::CreateTicketRequest&, const CreateTicketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTicketAsyncHandler;
			typedef Outcome<Error, Model::CreateTicket4CopilotResult> CreateTicket4CopilotOutcome;
			typedef std::future<CreateTicket4CopilotOutcome> CreateTicket4CopilotOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::CreateTicket4CopilotRequest&, const CreateTicket4CopilotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTicket4CopilotAsyncHandler;
			typedef Outcome<Error, Model::CreateUserGroupResult> CreateUserGroupOutcome;
			typedef std::future<CreateUserGroupOutcome> CreateUserGroupOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::CreateUserGroupRequest&, const CreateUserGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserGroupAsyncHandler;
			typedef Outcome<Error, Model::DataInterpretationResult> DataInterpretationOutcome;
			typedef std::future<DataInterpretationOutcome> DataInterpretationOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::DataInterpretationRequest&, const DataInterpretationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DataInterpretationAsyncHandler;
			typedef Outcome<Error, Model::DataSetBloodResult> DataSetBloodOutcome;
			typedef std::future<DataSetBloodOutcome> DataSetBloodOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::DataSetBloodRequest&, const DataSetBloodOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DataSetBloodAsyncHandler;
			typedef Outcome<Error, Model::DataSourceBloodResult> DataSourceBloodOutcome;
			typedef std::future<DataSourceBloodOutcome> DataSourceBloodOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::DataSourceBloodRequest&, const DataSourceBloodOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DataSourceBloodAsyncHandler;
			typedef Outcome<Error, Model::DelayTicketExpireTimeResult> DelayTicketExpireTimeOutcome;
			typedef std::future<DelayTicketExpireTimeOutcome> DelayTicketExpireTimeOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::DelayTicketExpireTimeRequest&, const DelayTicketExpireTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DelayTicketExpireTimeAsyncHandler;
			typedef Outcome<Error, Model::DeleteDataLevelPermissionRuleUsersResult> DeleteDataLevelPermissionRuleUsersOutcome;
			typedef std::future<DeleteDataLevelPermissionRuleUsersOutcome> DeleteDataLevelPermissionRuleUsersOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::DeleteDataLevelPermissionRuleUsersRequest&, const DeleteDataLevelPermissionRuleUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataLevelPermissionRuleUsersAsyncHandler;
			typedef Outcome<Error, Model::DeleteDataLevelRuleConfigResult> DeleteDataLevelRuleConfigOutcome;
			typedef std::future<DeleteDataLevelRuleConfigOutcome> DeleteDataLevelRuleConfigOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::DeleteDataLevelRuleConfigRequest&, const DeleteDataLevelRuleConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataLevelRuleConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteTicketResult> DeleteTicketOutcome;
			typedef std::future<DeleteTicketOutcome> DeleteTicketOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::DeleteTicketRequest&, const DeleteTicketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTicketAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserResult> DeleteUserOutcome;
			typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::DeleteUserRequest&, const DeleteUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserFromWorkspaceResult> DeleteUserFromWorkspaceOutcome;
			typedef std::future<DeleteUserFromWorkspaceOutcome> DeleteUserFromWorkspaceOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::DeleteUserFromWorkspaceRequest&, const DeleteUserFromWorkspaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserFromWorkspaceAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserGroupResult> DeleteUserGroupOutcome;
			typedef std::future<DeleteUserGroupOutcome> DeleteUserGroupOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::DeleteUserGroupRequest&, const DeleteUserGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserGroupMemberResult> DeleteUserGroupMemberOutcome;
			typedef std::future<DeleteUserGroupMemberOutcome> DeleteUserGroupMemberOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::DeleteUserGroupMemberRequest&, const DeleteUserGroupMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserGroupMemberAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserGroupMembersResult> DeleteUserGroupMembersOutcome;
			typedef std::future<DeleteUserGroupMembersOutcome> DeleteUserGroupMembersOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::DeleteUserGroupMembersRequest&, const DeleteUserGroupMembersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserGroupMembersAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserTagMetaResult> DeleteUserTagMetaOutcome;
			typedef std::future<DeleteUserTagMetaOutcome> DeleteUserTagMetaOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::DeleteUserTagMetaRequest&, const DeleteUserTagMetaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserTagMetaAsyncHandler;
			typedef Outcome<Error, Model::GetDataSourceConnectionInfoResult> GetDataSourceConnectionInfoOutcome;
			typedef std::future<GetDataSourceConnectionInfoOutcome> GetDataSourceConnectionInfoOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::GetDataSourceConnectionInfoRequest&, const GetDataSourceConnectionInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDataSourceConnectionInfoAsyncHandler;
			typedef Outcome<Error, Model::GetMailTaskStatusResult> GetMailTaskStatusOutcome;
			typedef std::future<GetMailTaskStatusOutcome> GetMailTaskStatusOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::GetMailTaskStatusRequest&, const GetMailTaskStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMailTaskStatusAsyncHandler;
			typedef Outcome<Error, Model::GetUserGroupInfoResult> GetUserGroupInfoOutcome;
			typedef std::future<GetUserGroupInfoOutcome> GetUserGroupInfoOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::GetUserGroupInfoRequest&, const GetUserGroupInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserGroupInfoAsyncHandler;
			typedef Outcome<Error, Model::GetWorksEmbedListResult> GetWorksEmbedListOutcome;
			typedef std::future<GetWorksEmbedListOutcome> GetWorksEmbedListOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::GetWorksEmbedListRequest&, const GetWorksEmbedListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWorksEmbedListAsyncHandler;
			typedef Outcome<Error, Model::ListApiDatasourceResult> ListApiDatasourceOutcome;
			typedef std::future<ListApiDatasourceOutcome> ListApiDatasourceOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::ListApiDatasourceRequest&, const ListApiDatasourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApiDatasourceAsyncHandler;
			typedef Outcome<Error, Model::ListByUserGroupIdResult> ListByUserGroupIdOutcome;
			typedef std::future<ListByUserGroupIdOutcome> ListByUserGroupIdOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::ListByUserGroupIdRequest&, const ListByUserGroupIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListByUserGroupIdAsyncHandler;
			typedef Outcome<Error, Model::ListCollectionsResult> ListCollectionsOutcome;
			typedef std::future<ListCollectionsOutcome> ListCollectionsOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::ListCollectionsRequest&, const ListCollectionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCollectionsAsyncHandler;
			typedef Outcome<Error, Model::ListCubeDataLevelPermissionConfigResult> ListCubeDataLevelPermissionConfigOutcome;
			typedef std::future<ListCubeDataLevelPermissionConfigOutcome> ListCubeDataLevelPermissionConfigOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::ListCubeDataLevelPermissionConfigRequest&, const ListCubeDataLevelPermissionConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCubeDataLevelPermissionConfigAsyncHandler;
			typedef Outcome<Error, Model::ListDataLevelPermissionWhiteListResult> ListDataLevelPermissionWhiteListOutcome;
			typedef std::future<ListDataLevelPermissionWhiteListOutcome> ListDataLevelPermissionWhiteListOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::ListDataLevelPermissionWhiteListRequest&, const ListDataLevelPermissionWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataLevelPermissionWhiteListAsyncHandler;
			typedef Outcome<Error, Model::ListDataSourceResult> ListDataSourceOutcome;
			typedef std::future<ListDataSourceOutcome> ListDataSourceOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::ListDataSourceRequest&, const ListDataSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataSourceAsyncHandler;
			typedef Outcome<Error, Model::ListFavoriteReportsResult> ListFavoriteReportsOutcome;
			typedef std::future<ListFavoriteReportsOutcome> ListFavoriteReportsOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::ListFavoriteReportsRequest&, const ListFavoriteReportsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFavoriteReportsAsyncHandler;
			typedef Outcome<Error, Model::ListOrganizationRoleUsersResult> ListOrganizationRoleUsersOutcome;
			typedef std::future<ListOrganizationRoleUsersOutcome> ListOrganizationRoleUsersOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::ListOrganizationRoleUsersRequest&, const ListOrganizationRoleUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOrganizationRoleUsersAsyncHandler;
			typedef Outcome<Error, Model::ListOrganizationRolesResult> ListOrganizationRolesOutcome;
			typedef std::future<ListOrganizationRolesOutcome> ListOrganizationRolesOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::ListOrganizationRolesRequest&, const ListOrganizationRolesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOrganizationRolesAsyncHandler;
			typedef Outcome<Error, Model::ListPortalMenuAuthorizationResult> ListPortalMenuAuthorizationOutcome;
			typedef std::future<ListPortalMenuAuthorizationOutcome> ListPortalMenuAuthorizationOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::ListPortalMenuAuthorizationRequest&, const ListPortalMenuAuthorizationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPortalMenuAuthorizationAsyncHandler;
			typedef Outcome<Error, Model::ListPortalMenusResult> ListPortalMenusOutcome;
			typedef std::future<ListPortalMenusOutcome> ListPortalMenusOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::ListPortalMenusRequest&, const ListPortalMenusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPortalMenusAsyncHandler;
			typedef Outcome<Error, Model::ListRecentViewReportsResult> ListRecentViewReportsOutcome;
			typedef std::future<ListRecentViewReportsOutcome> ListRecentViewReportsOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::ListRecentViewReportsRequest&, const ListRecentViewReportsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRecentViewReportsAsyncHandler;
			typedef Outcome<Error, Model::ListSharedReportsResult> ListSharedReportsOutcome;
			typedef std::future<ListSharedReportsOutcome> ListSharedReportsOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::ListSharedReportsRequest&, const ListSharedReportsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSharedReportsAsyncHandler;
			typedef Outcome<Error, Model::ListUserGroupsByUserIdResult> ListUserGroupsByUserIdOutcome;
			typedef std::future<ListUserGroupsByUserIdOutcome> ListUserGroupsByUserIdOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::ListUserGroupsByUserIdRequest&, const ListUserGroupsByUserIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserGroupsByUserIdAsyncHandler;
			typedef Outcome<Error, Model::ListWorkspaceRoleUsersResult> ListWorkspaceRoleUsersOutcome;
			typedef std::future<ListWorkspaceRoleUsersOutcome> ListWorkspaceRoleUsersOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::ListWorkspaceRoleUsersRequest&, const ListWorkspaceRoleUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListWorkspaceRoleUsersAsyncHandler;
			typedef Outcome<Error, Model::ListWorkspaceRolesResult> ListWorkspaceRolesOutcome;
			typedef std::future<ListWorkspaceRolesOutcome> ListWorkspaceRolesOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::ListWorkspaceRolesRequest&, const ListWorkspaceRolesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListWorkspaceRolesAsyncHandler;
			typedef Outcome<Error, Model::ManualRunMailTaskResult> ManualRunMailTaskOutcome;
			typedef std::future<ManualRunMailTaskOutcome> ManualRunMailTaskOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::ManualRunMailTaskRequest&, const ManualRunMailTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ManualRunMailTaskAsyncHandler;
			typedef Outcome<Error, Model::ModifyApiDatasourceParametersResult> ModifyApiDatasourceParametersOutcome;
			typedef std::future<ModifyApiDatasourceParametersOutcome> ModifyApiDatasourceParametersOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::ModifyApiDatasourceParametersRequest&, const ModifyApiDatasourceParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApiDatasourceParametersAsyncHandler;
			typedef Outcome<Error, Model::ModifyCopilotEmbedConfigResult> ModifyCopilotEmbedConfigOutcome;
			typedef std::future<ModifyCopilotEmbedConfigOutcome> ModifyCopilotEmbedConfigOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::ModifyCopilotEmbedConfigRequest&, const ModifyCopilotEmbedConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCopilotEmbedConfigAsyncHandler;
			typedef Outcome<Error, Model::QueryApprovalInfoResult> QueryApprovalInfoOutcome;
			typedef std::future<QueryApprovalInfoOutcome> QueryApprovalInfoOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryApprovalInfoRequest&, const QueryApprovalInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryApprovalInfoAsyncHandler;
			typedef Outcome<Error, Model::QueryAuditLogResult> QueryAuditLogOutcome;
			typedef std::future<QueryAuditLogOutcome> QueryAuditLogOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryAuditLogRequest&, const QueryAuditLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryAuditLogAsyncHandler;
			typedef Outcome<Error, Model::QueryComponentPerformanceResult> QueryComponentPerformanceOutcome;
			typedef std::future<QueryComponentPerformanceOutcome> QueryComponentPerformanceOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryComponentPerformanceRequest&, const QueryComponentPerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryComponentPerformanceAsyncHandler;
			typedef Outcome<Error, Model::QueryCopilotEmbedConfigResult> QueryCopilotEmbedConfigOutcome;
			typedef std::future<QueryCopilotEmbedConfigOutcome> QueryCopilotEmbedConfigOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryCopilotEmbedConfigRequest&, const QueryCopilotEmbedConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCopilotEmbedConfigAsyncHandler;
			typedef Outcome<Error, Model::QueryCubeOptimizationResult> QueryCubeOptimizationOutcome;
			typedef std::future<QueryCubeOptimizationOutcome> QueryCubeOptimizationOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryCubeOptimizationRequest&, const QueryCubeOptimizationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCubeOptimizationAsyncHandler;
			typedef Outcome<Error, Model::QueryCubePerformanceResult> QueryCubePerformanceOutcome;
			typedef std::future<QueryCubePerformanceOutcome> QueryCubePerformanceOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryCubePerformanceRequest&, const QueryCubePerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCubePerformanceAsyncHandler;
			typedef Outcome<Error, Model::QueryDataResult> QueryDataOutcome;
			typedef std::future<QueryDataOutcome> QueryDataOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryDataRequest&, const QueryDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDataAsyncHandler;
			typedef Outcome<Error, Model::QueryDataRangeResult> QueryDataRangeOutcome;
			typedef std::future<QueryDataRangeOutcome> QueryDataRangeOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryDataRangeRequest&, const QueryDataRangeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDataRangeAsyncHandler;
			typedef Outcome<Error, Model::QueryDataServiceResult> QueryDataServiceOutcome;
			typedef std::future<QueryDataServiceOutcome> QueryDataServiceOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryDataServiceRequest&, const QueryDataServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDataServiceAsyncHandler;
			typedef Outcome<Error, Model::QueryDataServiceListResult> QueryDataServiceListOutcome;
			typedef std::future<QueryDataServiceListOutcome> QueryDataServiceListOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryDataServiceListRequest&, const QueryDataServiceListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDataServiceListAsyncHandler;
			typedef Outcome<Error, Model::QueryDatasetDetailInfoResult> QueryDatasetDetailInfoOutcome;
			typedef std::future<QueryDatasetDetailInfoOutcome> QueryDatasetDetailInfoOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryDatasetDetailInfoRequest&, const QueryDatasetDetailInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDatasetDetailInfoAsyncHandler;
			typedef Outcome<Error, Model::QueryDatasetInfoResult> QueryDatasetInfoOutcome;
			typedef std::future<QueryDatasetInfoOutcome> QueryDatasetInfoOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryDatasetInfoRequest&, const QueryDatasetInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDatasetInfoAsyncHandler;
			typedef Outcome<Error, Model::QueryDatasetListResult> QueryDatasetListOutcome;
			typedef std::future<QueryDatasetListOutcome> QueryDatasetListOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryDatasetListRequest&, const QueryDatasetListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDatasetListAsyncHandler;
			typedef Outcome<Error, Model::QueryDatasetSmartqStatusResult> QueryDatasetSmartqStatusOutcome;
			typedef std::future<QueryDatasetSmartqStatusOutcome> QueryDatasetSmartqStatusOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryDatasetSmartqStatusRequest&, const QueryDatasetSmartqStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDatasetSmartqStatusAsyncHandler;
			typedef Outcome<Error, Model::QueryDatasetSwitchInfoResult> QueryDatasetSwitchInfoOutcome;
			typedef std::future<QueryDatasetSwitchInfoOutcome> QueryDatasetSwitchInfoOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryDatasetSwitchInfoRequest&, const QueryDatasetSwitchInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDatasetSwitchInfoAsyncHandler;
			typedef Outcome<Error, Model::QueryEmbeddedInfoResult> QueryEmbeddedInfoOutcome;
			typedef std::future<QueryEmbeddedInfoOutcome> QueryEmbeddedInfoOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryEmbeddedInfoRequest&, const QueryEmbeddedInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryEmbeddedInfoAsyncHandler;
			typedef Outcome<Error, Model::QueryEmbeddedStatusResult> QueryEmbeddedStatusOutcome;
			typedef std::future<QueryEmbeddedStatusOutcome> QueryEmbeddedStatusOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryEmbeddedStatusRequest&, const QueryEmbeddedStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryEmbeddedStatusAsyncHandler;
			typedef Outcome<Error, Model::QueryLlmCubeWithThemeListByUserIdResult> QueryLlmCubeWithThemeListByUserIdOutcome;
			typedef std::future<QueryLlmCubeWithThemeListByUserIdOutcome> QueryLlmCubeWithThemeListByUserIdOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryLlmCubeWithThemeListByUserIdRequest&, const QueryLlmCubeWithThemeListByUserIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryLlmCubeWithThemeListByUserIdAsyncHandler;
			typedef Outcome<Error, Model::QueryOrganizationRoleConfigResult> QueryOrganizationRoleConfigOutcome;
			typedef std::future<QueryOrganizationRoleConfigOutcome> QueryOrganizationRoleConfigOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryOrganizationRoleConfigRequest&, const QueryOrganizationRoleConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryOrganizationRoleConfigAsyncHandler;
			typedef Outcome<Error, Model::QueryOrganizationWorkspaceListResult> QueryOrganizationWorkspaceListOutcome;
			typedef std::future<QueryOrganizationWorkspaceListOutcome> QueryOrganizationWorkspaceListOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryOrganizationWorkspaceListRequest&, const QueryOrganizationWorkspaceListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryOrganizationWorkspaceListAsyncHandler;
			typedef Outcome<Error, Model::QueryReadableResourcesListByUserIdResult> QueryReadableResourcesListByUserIdOutcome;
			typedef std::future<QueryReadableResourcesListByUserIdOutcome> QueryReadableResourcesListByUserIdOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryReadableResourcesListByUserIdRequest&, const QueryReadableResourcesListByUserIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryReadableResourcesListByUserIdAsyncHandler;
			typedef Outcome<Error, Model::QueryReadableResourcesListByUserIdV2Result> QueryReadableResourcesListByUserIdV2Outcome;
			typedef std::future<QueryReadableResourcesListByUserIdV2Outcome> QueryReadableResourcesListByUserIdV2OutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryReadableResourcesListByUserIdV2Request&, const QueryReadableResourcesListByUserIdV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryReadableResourcesListByUserIdV2AsyncHandler;
			typedef Outcome<Error, Model::QueryReportPerformanceResult> QueryReportPerformanceOutcome;
			typedef std::future<QueryReportPerformanceOutcome> QueryReportPerformanceOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryReportPerformanceRequest&, const QueryReportPerformanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryReportPerformanceAsyncHandler;
			typedef Outcome<Error, Model::QueryShareListResult> QueryShareListOutcome;
			typedef std::future<QueryShareListOutcome> QueryShareListOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryShareListRequest&, const QueryShareListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryShareListAsyncHandler;
			typedef Outcome<Error, Model::QuerySharesToUserListResult> QuerySharesToUserListOutcome;
			typedef std::future<QuerySharesToUserListOutcome> QuerySharesToUserListOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QuerySharesToUserListRequest&, const QuerySharesToUserListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySharesToUserListAsyncHandler;
			typedef Outcome<Error, Model::QuerySmartqPermissionByCubeIdResult> QuerySmartqPermissionByCubeIdOutcome;
			typedef std::future<QuerySmartqPermissionByCubeIdOutcome> QuerySmartqPermissionByCubeIdOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QuerySmartqPermissionByCubeIdRequest&, const QuerySmartqPermissionByCubeIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySmartqPermissionByCubeIdAsyncHandler;
			typedef Outcome<Error, Model::QueryTicketInfoResult> QueryTicketInfoOutcome;
			typedef std::future<QueryTicketInfoOutcome> QueryTicketInfoOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryTicketInfoRequest&, const QueryTicketInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTicketInfoAsyncHandler;
			typedef Outcome<Error, Model::QueryUserGroupListByParentIdResult> QueryUserGroupListByParentIdOutcome;
			typedef std::future<QueryUserGroupListByParentIdOutcome> QueryUserGroupListByParentIdOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryUserGroupListByParentIdRequest&, const QueryUserGroupListByParentIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryUserGroupListByParentIdAsyncHandler;
			typedef Outcome<Error, Model::QueryUserGroupMemberResult> QueryUserGroupMemberOutcome;
			typedef std::future<QueryUserGroupMemberOutcome> QueryUserGroupMemberOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryUserGroupMemberRequest&, const QueryUserGroupMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryUserGroupMemberAsyncHandler;
			typedef Outcome<Error, Model::QueryUserInfoByAccountResult> QueryUserInfoByAccountOutcome;
			typedef std::future<QueryUserInfoByAccountOutcome> QueryUserInfoByAccountOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryUserInfoByAccountRequest&, const QueryUserInfoByAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryUserInfoByAccountAsyncHandler;
			typedef Outcome<Error, Model::QueryUserInfoByUserIdResult> QueryUserInfoByUserIdOutcome;
			typedef std::future<QueryUserInfoByUserIdOutcome> QueryUserInfoByUserIdOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryUserInfoByUserIdRequest&, const QueryUserInfoByUserIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryUserInfoByUserIdAsyncHandler;
			typedef Outcome<Error, Model::QueryUserListResult> QueryUserListOutcome;
			typedef std::future<QueryUserListOutcome> QueryUserListOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryUserListRequest&, const QueryUserListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryUserListAsyncHandler;
			typedef Outcome<Error, Model::QueryUserRoleInfoInWorkspaceResult> QueryUserRoleInfoInWorkspaceOutcome;
			typedef std::future<QueryUserRoleInfoInWorkspaceOutcome> QueryUserRoleInfoInWorkspaceOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryUserRoleInfoInWorkspaceRequest&, const QueryUserRoleInfoInWorkspaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryUserRoleInfoInWorkspaceAsyncHandler;
			typedef Outcome<Error, Model::QueryUserTagMetaListResult> QueryUserTagMetaListOutcome;
			typedef std::future<QueryUserTagMetaListOutcome> QueryUserTagMetaListOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryUserTagMetaListRequest&, const QueryUserTagMetaListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryUserTagMetaListAsyncHandler;
			typedef Outcome<Error, Model::QueryUserTagValueListResult> QueryUserTagValueListOutcome;
			typedef std::future<QueryUserTagValueListOutcome> QueryUserTagValueListOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryUserTagValueListRequest&, const QueryUserTagValueListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryUserTagValueListAsyncHandler;
			typedef Outcome<Error, Model::QueryWorksResult> QueryWorksOutcome;
			typedef std::future<QueryWorksOutcome> QueryWorksOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryWorksRequest&, const QueryWorksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryWorksAsyncHandler;
			typedef Outcome<Error, Model::QueryWorksBloodRelationshipResult> QueryWorksBloodRelationshipOutcome;
			typedef std::future<QueryWorksBloodRelationshipOutcome> QueryWorksBloodRelationshipOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryWorksBloodRelationshipRequest&, const QueryWorksBloodRelationshipOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryWorksBloodRelationshipAsyncHandler;
			typedef Outcome<Error, Model::QueryWorksByOrganizationResult> QueryWorksByOrganizationOutcome;
			typedef std::future<QueryWorksByOrganizationOutcome> QueryWorksByOrganizationOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryWorksByOrganizationRequest&, const QueryWorksByOrganizationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryWorksByOrganizationAsyncHandler;
			typedef Outcome<Error, Model::QueryWorksByWorkspaceResult> QueryWorksByWorkspaceOutcome;
			typedef std::future<QueryWorksByWorkspaceOutcome> QueryWorksByWorkspaceOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryWorksByWorkspaceRequest&, const QueryWorksByWorkspaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryWorksByWorkspaceAsyncHandler;
			typedef Outcome<Error, Model::QueryWorkspaceRoleConfigResult> QueryWorkspaceRoleConfigOutcome;
			typedef std::future<QueryWorkspaceRoleConfigOutcome> QueryWorkspaceRoleConfigOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryWorkspaceRoleConfigRequest&, const QueryWorkspaceRoleConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryWorkspaceRoleConfigAsyncHandler;
			typedef Outcome<Error, Model::QueryWorkspaceUserListResult> QueryWorkspaceUserListOutcome;
			typedef std::future<QueryWorkspaceUserListOutcome> QueryWorkspaceUserListOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::QueryWorkspaceUserListRequest&, const QueryWorkspaceUserListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryWorkspaceUserListAsyncHandler;
			typedef Outcome<Error, Model::ResultCallbackResult> ResultCallbackOutcome;
			typedef std::future<ResultCallbackOutcome> ResultCallbackOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::ResultCallbackRequest&, const ResultCallbackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResultCallbackAsyncHandler;
			typedef Outcome<Error, Model::SaveFavoritesResult> SaveFavoritesOutcome;
			typedef std::future<SaveFavoritesOutcome> SaveFavoritesOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::SaveFavoritesRequest&, const SaveFavoritesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveFavoritesAsyncHandler;
			typedef Outcome<Error, Model::SetDataLevelPermissionExtraConfigResult> SetDataLevelPermissionExtraConfigOutcome;
			typedef std::future<SetDataLevelPermissionExtraConfigOutcome> SetDataLevelPermissionExtraConfigOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::SetDataLevelPermissionExtraConfigRequest&, const SetDataLevelPermissionExtraConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDataLevelPermissionExtraConfigAsyncHandler;
			typedef Outcome<Error, Model::SetDataLevelPermissionRuleConfigResult> SetDataLevelPermissionRuleConfigOutcome;
			typedef std::future<SetDataLevelPermissionRuleConfigOutcome> SetDataLevelPermissionRuleConfigOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::SetDataLevelPermissionRuleConfigRequest&, const SetDataLevelPermissionRuleConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDataLevelPermissionRuleConfigAsyncHandler;
			typedef Outcome<Error, Model::SetDataLevelPermissionWhiteListResult> SetDataLevelPermissionWhiteListOutcome;
			typedef std::future<SetDataLevelPermissionWhiteListOutcome> SetDataLevelPermissionWhiteListOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::SetDataLevelPermissionWhiteListRequest&, const SetDataLevelPermissionWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDataLevelPermissionWhiteListAsyncHandler;
			typedef Outcome<Error, Model::SmartqAuthTransferResult> SmartqAuthTransferOutcome;
			typedef std::future<SmartqAuthTransferOutcome> SmartqAuthTransferOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::SmartqAuthTransferRequest&, const SmartqAuthTransferOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SmartqAuthTransferAsyncHandler;
			typedef Outcome<Error, Model::SmartqAuthorizeResult> SmartqAuthorizeOutcome;
			typedef std::future<SmartqAuthorizeOutcome> SmartqAuthorizeOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::SmartqAuthorizeRequest&, const SmartqAuthorizeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SmartqAuthorizeAsyncHandler;
			typedef Outcome<Error, Model::SmartqQueryAbilityResult> SmartqQueryAbilityOutcome;
			typedef std::future<SmartqQueryAbilityOutcome> SmartqQueryAbilityOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::SmartqQueryAbilityRequest&, const SmartqQueryAbilityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SmartqQueryAbilityAsyncHandler;
			typedef Outcome<Error, Model::UpdateDataLevelPermissionStatusResult> UpdateDataLevelPermissionStatusOutcome;
			typedef std::future<UpdateDataLevelPermissionStatusOutcome> UpdateDataLevelPermissionStatusOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::UpdateDataLevelPermissionStatusRequest&, const UpdateDataLevelPermissionStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDataLevelPermissionStatusAsyncHandler;
			typedef Outcome<Error, Model::UpdateEmbeddedStatusResult> UpdateEmbeddedStatusOutcome;
			typedef std::future<UpdateEmbeddedStatusOutcome> UpdateEmbeddedStatusOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::UpdateEmbeddedStatusRequest&, const UpdateEmbeddedStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEmbeddedStatusAsyncHandler;
			typedef Outcome<Error, Model::UpdateTicketNumResult> UpdateTicketNumOutcome;
			typedef std::future<UpdateTicketNumOutcome> UpdateTicketNumOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::UpdateTicketNumRequest&, const UpdateTicketNumOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTicketNumAsyncHandler;
			typedef Outcome<Error, Model::UpdateUserResult> UpdateUserOutcome;
			typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::UpdateUserRequest&, const UpdateUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserAsyncHandler;
			typedef Outcome<Error, Model::UpdateUserGroupResult> UpdateUserGroupOutcome;
			typedef std::future<UpdateUserGroupOutcome> UpdateUserGroupOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::UpdateUserGroupRequest&, const UpdateUserGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserGroupAsyncHandler;
			typedef Outcome<Error, Model::UpdateUserTagMetaResult> UpdateUserTagMetaOutcome;
			typedef std::future<UpdateUserTagMetaOutcome> UpdateUserTagMetaOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::UpdateUserTagMetaRequest&, const UpdateUserTagMetaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserTagMetaAsyncHandler;
			typedef Outcome<Error, Model::UpdateUserTagValueResult> UpdateUserTagValueOutcome;
			typedef std::future<UpdateUserTagValueOutcome> UpdateUserTagValueOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::UpdateUserTagValueRequest&, const UpdateUserTagValueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserTagValueAsyncHandler;
			typedef Outcome<Error, Model::UpdateWorkspaceUserRoleResult> UpdateWorkspaceUserRoleOutcome;
			typedef std::future<UpdateWorkspaceUserRoleOutcome> UpdateWorkspaceUserRoleOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::UpdateWorkspaceUserRoleRequest&, const UpdateWorkspaceUserRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWorkspaceUserRoleAsyncHandler;
			typedef Outcome<Error, Model::UpdateWorkspaceUsersRoleResult> UpdateWorkspaceUsersRoleOutcome;
			typedef std::future<UpdateWorkspaceUsersRoleOutcome> UpdateWorkspaceUsersRoleOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::UpdateWorkspaceUsersRoleRequest&, const UpdateWorkspaceUsersRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWorkspaceUsersRoleAsyncHandler;
			typedef Outcome<Error, Model::WithdrawAllUserGroupsResult> WithdrawAllUserGroupsOutcome;
			typedef std::future<WithdrawAllUserGroupsOutcome> WithdrawAllUserGroupsOutcomeCallable;
			typedef std::function<void(const Quickbi_publicClient*, const Model::WithdrawAllUserGroupsRequest&, const WithdrawAllUserGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> WithdrawAllUserGroupsAsyncHandler;

			Quickbi_publicClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Quickbi_publicClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Quickbi_publicClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Quickbi_publicClient();
			AddDataLevelPermissionRuleUsersOutcome addDataLevelPermissionRuleUsers(const Model::AddDataLevelPermissionRuleUsersRequest &request)const;
			void addDataLevelPermissionRuleUsersAsync(const Model::AddDataLevelPermissionRuleUsersRequest& request, const AddDataLevelPermissionRuleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddDataLevelPermissionRuleUsersOutcomeCallable addDataLevelPermissionRuleUsersCallable(const Model::AddDataLevelPermissionRuleUsersRequest& request) const;
			AddDataLevelPermissionWhiteListOutcome addDataLevelPermissionWhiteList(const Model::AddDataLevelPermissionWhiteListRequest &request)const;
			void addDataLevelPermissionWhiteListAsync(const Model::AddDataLevelPermissionWhiteListRequest& request, const AddDataLevelPermissionWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddDataLevelPermissionWhiteListOutcomeCallable addDataLevelPermissionWhiteListCallable(const Model::AddDataLevelPermissionWhiteListRequest& request) const;
			AddShareReportOutcome addShareReport(const Model::AddShareReportRequest &request)const;
			void addShareReportAsync(const Model::AddShareReportRequest& request, const AddShareReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddShareReportOutcomeCallable addShareReportCallable(const Model::AddShareReportRequest& request) const;
			AddUserOutcome addUser(const Model::AddUserRequest &request)const;
			void addUserAsync(const Model::AddUserRequest& request, const AddUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddUserOutcomeCallable addUserCallable(const Model::AddUserRequest& request) const;
			AddUserGroupMemberOutcome addUserGroupMember(const Model::AddUserGroupMemberRequest &request)const;
			void addUserGroupMemberAsync(const Model::AddUserGroupMemberRequest& request, const AddUserGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddUserGroupMemberOutcomeCallable addUserGroupMemberCallable(const Model::AddUserGroupMemberRequest& request) const;
			AddUserGroupMembersOutcome addUserGroupMembers(const Model::AddUserGroupMembersRequest &request)const;
			void addUserGroupMembersAsync(const Model::AddUserGroupMembersRequest& request, const AddUserGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddUserGroupMembersOutcomeCallable addUserGroupMembersCallable(const Model::AddUserGroupMembersRequest& request) const;
			AddUserTagMetaOutcome addUserTagMeta(const Model::AddUserTagMetaRequest &request)const;
			void addUserTagMetaAsync(const Model::AddUserTagMetaRequest& request, const AddUserTagMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddUserTagMetaOutcomeCallable addUserTagMetaCallable(const Model::AddUserTagMetaRequest& request) const;
			AddUserToWorkspaceOutcome addUserToWorkspace(const Model::AddUserToWorkspaceRequest &request)const;
			void addUserToWorkspaceAsync(const Model::AddUserToWorkspaceRequest& request, const AddUserToWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddUserToWorkspaceOutcomeCallable addUserToWorkspaceCallable(const Model::AddUserToWorkspaceRequest& request) const;
			AddWorkspaceUsersOutcome addWorkspaceUsers(const Model::AddWorkspaceUsersRequest &request)const;
			void addWorkspaceUsersAsync(const Model::AddWorkspaceUsersRequest& request, const AddWorkspaceUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddWorkspaceUsersOutcomeCallable addWorkspaceUsersCallable(const Model::AddWorkspaceUsersRequest& request) const;
			AllotDatasetAccelerationTaskOutcome allotDatasetAccelerationTask(const Model::AllotDatasetAccelerationTaskRequest &request)const;
			void allotDatasetAccelerationTaskAsync(const Model::AllotDatasetAccelerationTaskRequest& request, const AllotDatasetAccelerationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllotDatasetAccelerationTaskOutcomeCallable allotDatasetAccelerationTaskCallable(const Model::AllotDatasetAccelerationTaskRequest& request) const;
			AuthorizeMenuOutcome authorizeMenu(const Model::AuthorizeMenuRequest &request)const;
			void authorizeMenuAsync(const Model::AuthorizeMenuRequest& request, const AuthorizeMenuAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AuthorizeMenuOutcomeCallable authorizeMenuCallable(const Model::AuthorizeMenuRequest& request) const;
			BatchAddFeishuUsersOutcome batchAddFeishuUsers(const Model::BatchAddFeishuUsersRequest &request)const;
			void batchAddFeishuUsersAsync(const Model::BatchAddFeishuUsersRequest& request, const BatchAddFeishuUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchAddFeishuUsersOutcomeCallable batchAddFeishuUsersCallable(const Model::BatchAddFeishuUsersRequest& request) const;
			CancelAuthorizationMenuOutcome cancelAuthorizationMenu(const Model::CancelAuthorizationMenuRequest &request)const;
			void cancelAuthorizationMenuAsync(const Model::CancelAuthorizationMenuRequest& request, const CancelAuthorizationMenuAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelAuthorizationMenuOutcomeCallable cancelAuthorizationMenuCallable(const Model::CancelAuthorizationMenuRequest& request) const;
			CancelCollectionOutcome cancelCollection(const Model::CancelCollectionRequest &request)const;
			void cancelCollectionAsync(const Model::CancelCollectionRequest& request, const CancelCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelCollectionOutcomeCallable cancelCollectionCallable(const Model::CancelCollectionRequest& request) const;
			CancelReportShareOutcome cancelReportShare(const Model::CancelReportShareRequest &request)const;
			void cancelReportShareAsync(const Model::CancelReportShareRequest& request, const CancelReportShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelReportShareOutcomeCallable cancelReportShareCallable(const Model::CancelReportShareRequest& request) const;
			ChangeVisibilityModelOutcome changeVisibilityModel(const Model::ChangeVisibilityModelRequest &request)const;
			void changeVisibilityModelAsync(const Model::ChangeVisibilityModelRequest& request, const ChangeVisibilityModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeVisibilityModelOutcomeCallable changeVisibilityModelCallable(const Model::ChangeVisibilityModelRequest& request) const;
			CheckReadableOutcome checkReadable(const Model::CheckReadableRequest &request)const;
			void checkReadableAsync(const Model::CheckReadableRequest& request, const CheckReadableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckReadableOutcomeCallable checkReadableCallable(const Model::CheckReadableRequest& request) const;
			CreateTicketOutcome createTicket(const Model::CreateTicketRequest &request)const;
			void createTicketAsync(const Model::CreateTicketRequest& request, const CreateTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTicketOutcomeCallable createTicketCallable(const Model::CreateTicketRequest& request) const;
			CreateTicket4CopilotOutcome createTicket4Copilot(const Model::CreateTicket4CopilotRequest &request)const;
			void createTicket4CopilotAsync(const Model::CreateTicket4CopilotRequest& request, const CreateTicket4CopilotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTicket4CopilotOutcomeCallable createTicket4CopilotCallable(const Model::CreateTicket4CopilotRequest& request) const;
			CreateUserGroupOutcome createUserGroup(const Model::CreateUserGroupRequest &request)const;
			void createUserGroupAsync(const Model::CreateUserGroupRequest& request, const CreateUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUserGroupOutcomeCallable createUserGroupCallable(const Model::CreateUserGroupRequest& request) const;
			DataInterpretationOutcome dataInterpretation(const Model::DataInterpretationRequest &request)const;
			void dataInterpretationAsync(const Model::DataInterpretationRequest& request, const DataInterpretationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DataInterpretationOutcomeCallable dataInterpretationCallable(const Model::DataInterpretationRequest& request) const;
			DataSetBloodOutcome dataSetBlood(const Model::DataSetBloodRequest &request)const;
			void dataSetBloodAsync(const Model::DataSetBloodRequest& request, const DataSetBloodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DataSetBloodOutcomeCallable dataSetBloodCallable(const Model::DataSetBloodRequest& request) const;
			DataSourceBloodOutcome dataSourceBlood(const Model::DataSourceBloodRequest &request)const;
			void dataSourceBloodAsync(const Model::DataSourceBloodRequest& request, const DataSourceBloodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DataSourceBloodOutcomeCallable dataSourceBloodCallable(const Model::DataSourceBloodRequest& request) const;
			DelayTicketExpireTimeOutcome delayTicketExpireTime(const Model::DelayTicketExpireTimeRequest &request)const;
			void delayTicketExpireTimeAsync(const Model::DelayTicketExpireTimeRequest& request, const DelayTicketExpireTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DelayTicketExpireTimeOutcomeCallable delayTicketExpireTimeCallable(const Model::DelayTicketExpireTimeRequest& request) const;
			DeleteDataLevelPermissionRuleUsersOutcome deleteDataLevelPermissionRuleUsers(const Model::DeleteDataLevelPermissionRuleUsersRequest &request)const;
			void deleteDataLevelPermissionRuleUsersAsync(const Model::DeleteDataLevelPermissionRuleUsersRequest& request, const DeleteDataLevelPermissionRuleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDataLevelPermissionRuleUsersOutcomeCallable deleteDataLevelPermissionRuleUsersCallable(const Model::DeleteDataLevelPermissionRuleUsersRequest& request) const;
			DeleteDataLevelRuleConfigOutcome deleteDataLevelRuleConfig(const Model::DeleteDataLevelRuleConfigRequest &request)const;
			void deleteDataLevelRuleConfigAsync(const Model::DeleteDataLevelRuleConfigRequest& request, const DeleteDataLevelRuleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDataLevelRuleConfigOutcomeCallable deleteDataLevelRuleConfigCallable(const Model::DeleteDataLevelRuleConfigRequest& request) const;
			DeleteTicketOutcome deleteTicket(const Model::DeleteTicketRequest &request)const;
			void deleteTicketAsync(const Model::DeleteTicketRequest& request, const DeleteTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTicketOutcomeCallable deleteTicketCallable(const Model::DeleteTicketRequest& request) const;
			DeleteUserOutcome deleteUser(const Model::DeleteUserRequest &request)const;
			void deleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserOutcomeCallable deleteUserCallable(const Model::DeleteUserRequest& request) const;
			DeleteUserFromWorkspaceOutcome deleteUserFromWorkspace(const Model::DeleteUserFromWorkspaceRequest &request)const;
			void deleteUserFromWorkspaceAsync(const Model::DeleteUserFromWorkspaceRequest& request, const DeleteUserFromWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserFromWorkspaceOutcomeCallable deleteUserFromWorkspaceCallable(const Model::DeleteUserFromWorkspaceRequest& request) const;
			DeleteUserGroupOutcome deleteUserGroup(const Model::DeleteUserGroupRequest &request)const;
			void deleteUserGroupAsync(const Model::DeleteUserGroupRequest& request, const DeleteUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserGroupOutcomeCallable deleteUserGroupCallable(const Model::DeleteUserGroupRequest& request) const;
			DeleteUserGroupMemberOutcome deleteUserGroupMember(const Model::DeleteUserGroupMemberRequest &request)const;
			void deleteUserGroupMemberAsync(const Model::DeleteUserGroupMemberRequest& request, const DeleteUserGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserGroupMemberOutcomeCallable deleteUserGroupMemberCallable(const Model::DeleteUserGroupMemberRequest& request) const;
			DeleteUserGroupMembersOutcome deleteUserGroupMembers(const Model::DeleteUserGroupMembersRequest &request)const;
			void deleteUserGroupMembersAsync(const Model::DeleteUserGroupMembersRequest& request, const DeleteUserGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserGroupMembersOutcomeCallable deleteUserGroupMembersCallable(const Model::DeleteUserGroupMembersRequest& request) const;
			DeleteUserTagMetaOutcome deleteUserTagMeta(const Model::DeleteUserTagMetaRequest &request)const;
			void deleteUserTagMetaAsync(const Model::DeleteUserTagMetaRequest& request, const DeleteUserTagMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserTagMetaOutcomeCallable deleteUserTagMetaCallable(const Model::DeleteUserTagMetaRequest& request) const;
			GetDataSourceConnectionInfoOutcome getDataSourceConnectionInfo(const Model::GetDataSourceConnectionInfoRequest &request)const;
			void getDataSourceConnectionInfoAsync(const Model::GetDataSourceConnectionInfoRequest& request, const GetDataSourceConnectionInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDataSourceConnectionInfoOutcomeCallable getDataSourceConnectionInfoCallable(const Model::GetDataSourceConnectionInfoRequest& request) const;
			GetMailTaskStatusOutcome getMailTaskStatus(const Model::GetMailTaskStatusRequest &request)const;
			void getMailTaskStatusAsync(const Model::GetMailTaskStatusRequest& request, const GetMailTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMailTaskStatusOutcomeCallable getMailTaskStatusCallable(const Model::GetMailTaskStatusRequest& request) const;
			GetUserGroupInfoOutcome getUserGroupInfo(const Model::GetUserGroupInfoRequest &request)const;
			void getUserGroupInfoAsync(const Model::GetUserGroupInfoRequest& request, const GetUserGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserGroupInfoOutcomeCallable getUserGroupInfoCallable(const Model::GetUserGroupInfoRequest& request) const;
			GetWorksEmbedListOutcome getWorksEmbedList(const Model::GetWorksEmbedListRequest &request)const;
			void getWorksEmbedListAsync(const Model::GetWorksEmbedListRequest& request, const GetWorksEmbedListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWorksEmbedListOutcomeCallable getWorksEmbedListCallable(const Model::GetWorksEmbedListRequest& request) const;
			ListApiDatasourceOutcome listApiDatasource(const Model::ListApiDatasourceRequest &request)const;
			void listApiDatasourceAsync(const Model::ListApiDatasourceRequest& request, const ListApiDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApiDatasourceOutcomeCallable listApiDatasourceCallable(const Model::ListApiDatasourceRequest& request) const;
			ListByUserGroupIdOutcome listByUserGroupId(const Model::ListByUserGroupIdRequest &request)const;
			void listByUserGroupIdAsync(const Model::ListByUserGroupIdRequest& request, const ListByUserGroupIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListByUserGroupIdOutcomeCallable listByUserGroupIdCallable(const Model::ListByUserGroupIdRequest& request) const;
			ListCollectionsOutcome listCollections(const Model::ListCollectionsRequest &request)const;
			void listCollectionsAsync(const Model::ListCollectionsRequest& request, const ListCollectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCollectionsOutcomeCallable listCollectionsCallable(const Model::ListCollectionsRequest& request) const;
			ListCubeDataLevelPermissionConfigOutcome listCubeDataLevelPermissionConfig(const Model::ListCubeDataLevelPermissionConfigRequest &request)const;
			void listCubeDataLevelPermissionConfigAsync(const Model::ListCubeDataLevelPermissionConfigRequest& request, const ListCubeDataLevelPermissionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCubeDataLevelPermissionConfigOutcomeCallable listCubeDataLevelPermissionConfigCallable(const Model::ListCubeDataLevelPermissionConfigRequest& request) const;
			ListDataLevelPermissionWhiteListOutcome listDataLevelPermissionWhiteList(const Model::ListDataLevelPermissionWhiteListRequest &request)const;
			void listDataLevelPermissionWhiteListAsync(const Model::ListDataLevelPermissionWhiteListRequest& request, const ListDataLevelPermissionWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataLevelPermissionWhiteListOutcomeCallable listDataLevelPermissionWhiteListCallable(const Model::ListDataLevelPermissionWhiteListRequest& request) const;
			ListDataSourceOutcome listDataSource(const Model::ListDataSourceRequest &request)const;
			void listDataSourceAsync(const Model::ListDataSourceRequest& request, const ListDataSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataSourceOutcomeCallable listDataSourceCallable(const Model::ListDataSourceRequest& request) const;
			ListFavoriteReportsOutcome listFavoriteReports(const Model::ListFavoriteReportsRequest &request)const;
			void listFavoriteReportsAsync(const Model::ListFavoriteReportsRequest& request, const ListFavoriteReportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFavoriteReportsOutcomeCallable listFavoriteReportsCallable(const Model::ListFavoriteReportsRequest& request) const;
			ListOrganizationRoleUsersOutcome listOrganizationRoleUsers(const Model::ListOrganizationRoleUsersRequest &request)const;
			void listOrganizationRoleUsersAsync(const Model::ListOrganizationRoleUsersRequest& request, const ListOrganizationRoleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOrganizationRoleUsersOutcomeCallable listOrganizationRoleUsersCallable(const Model::ListOrganizationRoleUsersRequest& request) const;
			ListOrganizationRolesOutcome listOrganizationRoles(const Model::ListOrganizationRolesRequest &request)const;
			void listOrganizationRolesAsync(const Model::ListOrganizationRolesRequest& request, const ListOrganizationRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOrganizationRolesOutcomeCallable listOrganizationRolesCallable(const Model::ListOrganizationRolesRequest& request) const;
			ListPortalMenuAuthorizationOutcome listPortalMenuAuthorization(const Model::ListPortalMenuAuthorizationRequest &request)const;
			void listPortalMenuAuthorizationAsync(const Model::ListPortalMenuAuthorizationRequest& request, const ListPortalMenuAuthorizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPortalMenuAuthorizationOutcomeCallable listPortalMenuAuthorizationCallable(const Model::ListPortalMenuAuthorizationRequest& request) const;
			ListPortalMenusOutcome listPortalMenus(const Model::ListPortalMenusRequest &request)const;
			void listPortalMenusAsync(const Model::ListPortalMenusRequest& request, const ListPortalMenusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPortalMenusOutcomeCallable listPortalMenusCallable(const Model::ListPortalMenusRequest& request) const;
			ListRecentViewReportsOutcome listRecentViewReports(const Model::ListRecentViewReportsRequest &request)const;
			void listRecentViewReportsAsync(const Model::ListRecentViewReportsRequest& request, const ListRecentViewReportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRecentViewReportsOutcomeCallable listRecentViewReportsCallable(const Model::ListRecentViewReportsRequest& request) const;
			ListSharedReportsOutcome listSharedReports(const Model::ListSharedReportsRequest &request)const;
			void listSharedReportsAsync(const Model::ListSharedReportsRequest& request, const ListSharedReportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSharedReportsOutcomeCallable listSharedReportsCallable(const Model::ListSharedReportsRequest& request) const;
			ListUserGroupsByUserIdOutcome listUserGroupsByUserId(const Model::ListUserGroupsByUserIdRequest &request)const;
			void listUserGroupsByUserIdAsync(const Model::ListUserGroupsByUserIdRequest& request, const ListUserGroupsByUserIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserGroupsByUserIdOutcomeCallable listUserGroupsByUserIdCallable(const Model::ListUserGroupsByUserIdRequest& request) const;
			ListWorkspaceRoleUsersOutcome listWorkspaceRoleUsers(const Model::ListWorkspaceRoleUsersRequest &request)const;
			void listWorkspaceRoleUsersAsync(const Model::ListWorkspaceRoleUsersRequest& request, const ListWorkspaceRoleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListWorkspaceRoleUsersOutcomeCallable listWorkspaceRoleUsersCallable(const Model::ListWorkspaceRoleUsersRequest& request) const;
			ListWorkspaceRolesOutcome listWorkspaceRoles(const Model::ListWorkspaceRolesRequest &request)const;
			void listWorkspaceRolesAsync(const Model::ListWorkspaceRolesRequest& request, const ListWorkspaceRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListWorkspaceRolesOutcomeCallable listWorkspaceRolesCallable(const Model::ListWorkspaceRolesRequest& request) const;
			ManualRunMailTaskOutcome manualRunMailTask(const Model::ManualRunMailTaskRequest &request)const;
			void manualRunMailTaskAsync(const Model::ManualRunMailTaskRequest& request, const ManualRunMailTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ManualRunMailTaskOutcomeCallable manualRunMailTaskCallable(const Model::ManualRunMailTaskRequest& request) const;
			ModifyApiDatasourceParametersOutcome modifyApiDatasourceParameters(const Model::ModifyApiDatasourceParametersRequest &request)const;
			void modifyApiDatasourceParametersAsync(const Model::ModifyApiDatasourceParametersRequest& request, const ModifyApiDatasourceParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyApiDatasourceParametersOutcomeCallable modifyApiDatasourceParametersCallable(const Model::ModifyApiDatasourceParametersRequest& request) const;
			ModifyCopilotEmbedConfigOutcome modifyCopilotEmbedConfig(const Model::ModifyCopilotEmbedConfigRequest &request)const;
			void modifyCopilotEmbedConfigAsync(const Model::ModifyCopilotEmbedConfigRequest& request, const ModifyCopilotEmbedConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCopilotEmbedConfigOutcomeCallable modifyCopilotEmbedConfigCallable(const Model::ModifyCopilotEmbedConfigRequest& request) const;
			QueryApprovalInfoOutcome queryApprovalInfo(const Model::QueryApprovalInfoRequest &request)const;
			void queryApprovalInfoAsync(const Model::QueryApprovalInfoRequest& request, const QueryApprovalInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryApprovalInfoOutcomeCallable queryApprovalInfoCallable(const Model::QueryApprovalInfoRequest& request) const;
			QueryAuditLogOutcome queryAuditLog(const Model::QueryAuditLogRequest &request)const;
			void queryAuditLogAsync(const Model::QueryAuditLogRequest& request, const QueryAuditLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryAuditLogOutcomeCallable queryAuditLogCallable(const Model::QueryAuditLogRequest& request) const;
			QueryComponentPerformanceOutcome queryComponentPerformance(const Model::QueryComponentPerformanceRequest &request)const;
			void queryComponentPerformanceAsync(const Model::QueryComponentPerformanceRequest& request, const QueryComponentPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryComponentPerformanceOutcomeCallable queryComponentPerformanceCallable(const Model::QueryComponentPerformanceRequest& request) const;
			QueryCopilotEmbedConfigOutcome queryCopilotEmbedConfig(const Model::QueryCopilotEmbedConfigRequest &request)const;
			void queryCopilotEmbedConfigAsync(const Model::QueryCopilotEmbedConfigRequest& request, const QueryCopilotEmbedConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCopilotEmbedConfigOutcomeCallable queryCopilotEmbedConfigCallable(const Model::QueryCopilotEmbedConfigRequest& request) const;
			QueryCubeOptimizationOutcome queryCubeOptimization(const Model::QueryCubeOptimizationRequest &request)const;
			void queryCubeOptimizationAsync(const Model::QueryCubeOptimizationRequest& request, const QueryCubeOptimizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCubeOptimizationOutcomeCallable queryCubeOptimizationCallable(const Model::QueryCubeOptimizationRequest& request) const;
			QueryCubePerformanceOutcome queryCubePerformance(const Model::QueryCubePerformanceRequest &request)const;
			void queryCubePerformanceAsync(const Model::QueryCubePerformanceRequest& request, const QueryCubePerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCubePerformanceOutcomeCallable queryCubePerformanceCallable(const Model::QueryCubePerformanceRequest& request) const;
			QueryDataOutcome queryData(const Model::QueryDataRequest &request)const;
			void queryDataAsync(const Model::QueryDataRequest& request, const QueryDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDataOutcomeCallable queryDataCallable(const Model::QueryDataRequest& request) const;
			QueryDataRangeOutcome queryDataRange(const Model::QueryDataRangeRequest &request)const;
			void queryDataRangeAsync(const Model::QueryDataRangeRequest& request, const QueryDataRangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDataRangeOutcomeCallable queryDataRangeCallable(const Model::QueryDataRangeRequest& request) const;
			QueryDataServiceOutcome queryDataService(const Model::QueryDataServiceRequest &request)const;
			void queryDataServiceAsync(const Model::QueryDataServiceRequest& request, const QueryDataServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDataServiceOutcomeCallable queryDataServiceCallable(const Model::QueryDataServiceRequest& request) const;
			QueryDataServiceListOutcome queryDataServiceList(const Model::QueryDataServiceListRequest &request)const;
			void queryDataServiceListAsync(const Model::QueryDataServiceListRequest& request, const QueryDataServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDataServiceListOutcomeCallable queryDataServiceListCallable(const Model::QueryDataServiceListRequest& request) const;
			QueryDatasetDetailInfoOutcome queryDatasetDetailInfo(const Model::QueryDatasetDetailInfoRequest &request)const;
			void queryDatasetDetailInfoAsync(const Model::QueryDatasetDetailInfoRequest& request, const QueryDatasetDetailInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDatasetDetailInfoOutcomeCallable queryDatasetDetailInfoCallable(const Model::QueryDatasetDetailInfoRequest& request) const;
			QueryDatasetInfoOutcome queryDatasetInfo(const Model::QueryDatasetInfoRequest &request)const;
			void queryDatasetInfoAsync(const Model::QueryDatasetInfoRequest& request, const QueryDatasetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDatasetInfoOutcomeCallable queryDatasetInfoCallable(const Model::QueryDatasetInfoRequest& request) const;
			QueryDatasetListOutcome queryDatasetList(const Model::QueryDatasetListRequest &request)const;
			void queryDatasetListAsync(const Model::QueryDatasetListRequest& request, const QueryDatasetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDatasetListOutcomeCallable queryDatasetListCallable(const Model::QueryDatasetListRequest& request) const;
			QueryDatasetSmartqStatusOutcome queryDatasetSmartqStatus(const Model::QueryDatasetSmartqStatusRequest &request)const;
			void queryDatasetSmartqStatusAsync(const Model::QueryDatasetSmartqStatusRequest& request, const QueryDatasetSmartqStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDatasetSmartqStatusOutcomeCallable queryDatasetSmartqStatusCallable(const Model::QueryDatasetSmartqStatusRequest& request) const;
			QueryDatasetSwitchInfoOutcome queryDatasetSwitchInfo(const Model::QueryDatasetSwitchInfoRequest &request)const;
			void queryDatasetSwitchInfoAsync(const Model::QueryDatasetSwitchInfoRequest& request, const QueryDatasetSwitchInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDatasetSwitchInfoOutcomeCallable queryDatasetSwitchInfoCallable(const Model::QueryDatasetSwitchInfoRequest& request) const;
			QueryEmbeddedInfoOutcome queryEmbeddedInfo(const Model::QueryEmbeddedInfoRequest &request)const;
			void queryEmbeddedInfoAsync(const Model::QueryEmbeddedInfoRequest& request, const QueryEmbeddedInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryEmbeddedInfoOutcomeCallable queryEmbeddedInfoCallable(const Model::QueryEmbeddedInfoRequest& request) const;
			QueryEmbeddedStatusOutcome queryEmbeddedStatus(const Model::QueryEmbeddedStatusRequest &request)const;
			void queryEmbeddedStatusAsync(const Model::QueryEmbeddedStatusRequest& request, const QueryEmbeddedStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryEmbeddedStatusOutcomeCallable queryEmbeddedStatusCallable(const Model::QueryEmbeddedStatusRequest& request) const;
			QueryLlmCubeWithThemeListByUserIdOutcome queryLlmCubeWithThemeListByUserId(const Model::QueryLlmCubeWithThemeListByUserIdRequest &request)const;
			void queryLlmCubeWithThemeListByUserIdAsync(const Model::QueryLlmCubeWithThemeListByUserIdRequest& request, const QueryLlmCubeWithThemeListByUserIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryLlmCubeWithThemeListByUserIdOutcomeCallable queryLlmCubeWithThemeListByUserIdCallable(const Model::QueryLlmCubeWithThemeListByUserIdRequest& request) const;
			QueryOrganizationRoleConfigOutcome queryOrganizationRoleConfig(const Model::QueryOrganizationRoleConfigRequest &request)const;
			void queryOrganizationRoleConfigAsync(const Model::QueryOrganizationRoleConfigRequest& request, const QueryOrganizationRoleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryOrganizationRoleConfigOutcomeCallable queryOrganizationRoleConfigCallable(const Model::QueryOrganizationRoleConfigRequest& request) const;
			QueryOrganizationWorkspaceListOutcome queryOrganizationWorkspaceList(const Model::QueryOrganizationWorkspaceListRequest &request)const;
			void queryOrganizationWorkspaceListAsync(const Model::QueryOrganizationWorkspaceListRequest& request, const QueryOrganizationWorkspaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryOrganizationWorkspaceListOutcomeCallable queryOrganizationWorkspaceListCallable(const Model::QueryOrganizationWorkspaceListRequest& request) const;
			QueryReadableResourcesListByUserIdOutcome queryReadableResourcesListByUserId(const Model::QueryReadableResourcesListByUserIdRequest &request)const;
			void queryReadableResourcesListByUserIdAsync(const Model::QueryReadableResourcesListByUserIdRequest& request, const QueryReadableResourcesListByUserIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryReadableResourcesListByUserIdOutcomeCallable queryReadableResourcesListByUserIdCallable(const Model::QueryReadableResourcesListByUserIdRequest& request) const;
			QueryReadableResourcesListByUserIdV2Outcome queryReadableResourcesListByUserIdV2(const Model::QueryReadableResourcesListByUserIdV2Request &request)const;
			void queryReadableResourcesListByUserIdV2Async(const Model::QueryReadableResourcesListByUserIdV2Request& request, const QueryReadableResourcesListByUserIdV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryReadableResourcesListByUserIdV2OutcomeCallable queryReadableResourcesListByUserIdV2Callable(const Model::QueryReadableResourcesListByUserIdV2Request& request) const;
			QueryReportPerformanceOutcome queryReportPerformance(const Model::QueryReportPerformanceRequest &request)const;
			void queryReportPerformanceAsync(const Model::QueryReportPerformanceRequest& request, const QueryReportPerformanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryReportPerformanceOutcomeCallable queryReportPerformanceCallable(const Model::QueryReportPerformanceRequest& request) const;
			QueryShareListOutcome queryShareList(const Model::QueryShareListRequest &request)const;
			void queryShareListAsync(const Model::QueryShareListRequest& request, const QueryShareListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryShareListOutcomeCallable queryShareListCallable(const Model::QueryShareListRequest& request) const;
			QuerySharesToUserListOutcome querySharesToUserList(const Model::QuerySharesToUserListRequest &request)const;
			void querySharesToUserListAsync(const Model::QuerySharesToUserListRequest& request, const QuerySharesToUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySharesToUserListOutcomeCallable querySharesToUserListCallable(const Model::QuerySharesToUserListRequest& request) const;
			QuerySmartqPermissionByCubeIdOutcome querySmartqPermissionByCubeId(const Model::QuerySmartqPermissionByCubeIdRequest &request)const;
			void querySmartqPermissionByCubeIdAsync(const Model::QuerySmartqPermissionByCubeIdRequest& request, const QuerySmartqPermissionByCubeIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySmartqPermissionByCubeIdOutcomeCallable querySmartqPermissionByCubeIdCallable(const Model::QuerySmartqPermissionByCubeIdRequest& request) const;
			QueryTicketInfoOutcome queryTicketInfo(const Model::QueryTicketInfoRequest &request)const;
			void queryTicketInfoAsync(const Model::QueryTicketInfoRequest& request, const QueryTicketInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTicketInfoOutcomeCallable queryTicketInfoCallable(const Model::QueryTicketInfoRequest& request) const;
			QueryUserGroupListByParentIdOutcome queryUserGroupListByParentId(const Model::QueryUserGroupListByParentIdRequest &request)const;
			void queryUserGroupListByParentIdAsync(const Model::QueryUserGroupListByParentIdRequest& request, const QueryUserGroupListByParentIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryUserGroupListByParentIdOutcomeCallable queryUserGroupListByParentIdCallable(const Model::QueryUserGroupListByParentIdRequest& request) const;
			QueryUserGroupMemberOutcome queryUserGroupMember(const Model::QueryUserGroupMemberRequest &request)const;
			void queryUserGroupMemberAsync(const Model::QueryUserGroupMemberRequest& request, const QueryUserGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryUserGroupMemberOutcomeCallable queryUserGroupMemberCallable(const Model::QueryUserGroupMemberRequest& request) const;
			QueryUserInfoByAccountOutcome queryUserInfoByAccount(const Model::QueryUserInfoByAccountRequest &request)const;
			void queryUserInfoByAccountAsync(const Model::QueryUserInfoByAccountRequest& request, const QueryUserInfoByAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryUserInfoByAccountOutcomeCallable queryUserInfoByAccountCallable(const Model::QueryUserInfoByAccountRequest& request) const;
			QueryUserInfoByUserIdOutcome queryUserInfoByUserId(const Model::QueryUserInfoByUserIdRequest &request)const;
			void queryUserInfoByUserIdAsync(const Model::QueryUserInfoByUserIdRequest& request, const QueryUserInfoByUserIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryUserInfoByUserIdOutcomeCallable queryUserInfoByUserIdCallable(const Model::QueryUserInfoByUserIdRequest& request) const;
			QueryUserListOutcome queryUserList(const Model::QueryUserListRequest &request)const;
			void queryUserListAsync(const Model::QueryUserListRequest& request, const QueryUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryUserListOutcomeCallable queryUserListCallable(const Model::QueryUserListRequest& request) const;
			QueryUserRoleInfoInWorkspaceOutcome queryUserRoleInfoInWorkspace(const Model::QueryUserRoleInfoInWorkspaceRequest &request)const;
			void queryUserRoleInfoInWorkspaceAsync(const Model::QueryUserRoleInfoInWorkspaceRequest& request, const QueryUserRoleInfoInWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryUserRoleInfoInWorkspaceOutcomeCallable queryUserRoleInfoInWorkspaceCallable(const Model::QueryUserRoleInfoInWorkspaceRequest& request) const;
			QueryUserTagMetaListOutcome queryUserTagMetaList(const Model::QueryUserTagMetaListRequest &request)const;
			void queryUserTagMetaListAsync(const Model::QueryUserTagMetaListRequest& request, const QueryUserTagMetaListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryUserTagMetaListOutcomeCallable queryUserTagMetaListCallable(const Model::QueryUserTagMetaListRequest& request) const;
			QueryUserTagValueListOutcome queryUserTagValueList(const Model::QueryUserTagValueListRequest &request)const;
			void queryUserTagValueListAsync(const Model::QueryUserTagValueListRequest& request, const QueryUserTagValueListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryUserTagValueListOutcomeCallable queryUserTagValueListCallable(const Model::QueryUserTagValueListRequest& request) const;
			QueryWorksOutcome queryWorks(const Model::QueryWorksRequest &request)const;
			void queryWorksAsync(const Model::QueryWorksRequest& request, const QueryWorksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryWorksOutcomeCallable queryWorksCallable(const Model::QueryWorksRequest& request) const;
			QueryWorksBloodRelationshipOutcome queryWorksBloodRelationship(const Model::QueryWorksBloodRelationshipRequest &request)const;
			void queryWorksBloodRelationshipAsync(const Model::QueryWorksBloodRelationshipRequest& request, const QueryWorksBloodRelationshipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryWorksBloodRelationshipOutcomeCallable queryWorksBloodRelationshipCallable(const Model::QueryWorksBloodRelationshipRequest& request) const;
			QueryWorksByOrganizationOutcome queryWorksByOrganization(const Model::QueryWorksByOrganizationRequest &request)const;
			void queryWorksByOrganizationAsync(const Model::QueryWorksByOrganizationRequest& request, const QueryWorksByOrganizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryWorksByOrganizationOutcomeCallable queryWorksByOrganizationCallable(const Model::QueryWorksByOrganizationRequest& request) const;
			QueryWorksByWorkspaceOutcome queryWorksByWorkspace(const Model::QueryWorksByWorkspaceRequest &request)const;
			void queryWorksByWorkspaceAsync(const Model::QueryWorksByWorkspaceRequest& request, const QueryWorksByWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryWorksByWorkspaceOutcomeCallable queryWorksByWorkspaceCallable(const Model::QueryWorksByWorkspaceRequest& request) const;
			QueryWorkspaceRoleConfigOutcome queryWorkspaceRoleConfig(const Model::QueryWorkspaceRoleConfigRequest &request)const;
			void queryWorkspaceRoleConfigAsync(const Model::QueryWorkspaceRoleConfigRequest& request, const QueryWorkspaceRoleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryWorkspaceRoleConfigOutcomeCallable queryWorkspaceRoleConfigCallable(const Model::QueryWorkspaceRoleConfigRequest& request) const;
			QueryWorkspaceUserListOutcome queryWorkspaceUserList(const Model::QueryWorkspaceUserListRequest &request)const;
			void queryWorkspaceUserListAsync(const Model::QueryWorkspaceUserListRequest& request, const QueryWorkspaceUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryWorkspaceUserListOutcomeCallable queryWorkspaceUserListCallable(const Model::QueryWorkspaceUserListRequest& request) const;
			ResultCallbackOutcome resultCallback(const Model::ResultCallbackRequest &request)const;
			void resultCallbackAsync(const Model::ResultCallbackRequest& request, const ResultCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResultCallbackOutcomeCallable resultCallbackCallable(const Model::ResultCallbackRequest& request) const;
			SaveFavoritesOutcome saveFavorites(const Model::SaveFavoritesRequest &request)const;
			void saveFavoritesAsync(const Model::SaveFavoritesRequest& request, const SaveFavoritesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveFavoritesOutcomeCallable saveFavoritesCallable(const Model::SaveFavoritesRequest& request) const;
			SetDataLevelPermissionExtraConfigOutcome setDataLevelPermissionExtraConfig(const Model::SetDataLevelPermissionExtraConfigRequest &request)const;
			void setDataLevelPermissionExtraConfigAsync(const Model::SetDataLevelPermissionExtraConfigRequest& request, const SetDataLevelPermissionExtraConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDataLevelPermissionExtraConfigOutcomeCallable setDataLevelPermissionExtraConfigCallable(const Model::SetDataLevelPermissionExtraConfigRequest& request) const;
			SetDataLevelPermissionRuleConfigOutcome setDataLevelPermissionRuleConfig(const Model::SetDataLevelPermissionRuleConfigRequest &request)const;
			void setDataLevelPermissionRuleConfigAsync(const Model::SetDataLevelPermissionRuleConfigRequest& request, const SetDataLevelPermissionRuleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDataLevelPermissionRuleConfigOutcomeCallable setDataLevelPermissionRuleConfigCallable(const Model::SetDataLevelPermissionRuleConfigRequest& request) const;
			SetDataLevelPermissionWhiteListOutcome setDataLevelPermissionWhiteList(const Model::SetDataLevelPermissionWhiteListRequest &request)const;
			void setDataLevelPermissionWhiteListAsync(const Model::SetDataLevelPermissionWhiteListRequest& request, const SetDataLevelPermissionWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDataLevelPermissionWhiteListOutcomeCallable setDataLevelPermissionWhiteListCallable(const Model::SetDataLevelPermissionWhiteListRequest& request) const;
			SmartqAuthTransferOutcome smartqAuthTransfer(const Model::SmartqAuthTransferRequest &request)const;
			void smartqAuthTransferAsync(const Model::SmartqAuthTransferRequest& request, const SmartqAuthTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SmartqAuthTransferOutcomeCallable smartqAuthTransferCallable(const Model::SmartqAuthTransferRequest& request) const;
			SmartqAuthorizeOutcome smartqAuthorize(const Model::SmartqAuthorizeRequest &request)const;
			void smartqAuthorizeAsync(const Model::SmartqAuthorizeRequest& request, const SmartqAuthorizeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SmartqAuthorizeOutcomeCallable smartqAuthorizeCallable(const Model::SmartqAuthorizeRequest& request) const;
			SmartqQueryAbilityOutcome smartqQueryAbility(const Model::SmartqQueryAbilityRequest &request)const;
			void smartqQueryAbilityAsync(const Model::SmartqQueryAbilityRequest& request, const SmartqQueryAbilityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SmartqQueryAbilityOutcomeCallable smartqQueryAbilityCallable(const Model::SmartqQueryAbilityRequest& request) const;
			UpdateDataLevelPermissionStatusOutcome updateDataLevelPermissionStatus(const Model::UpdateDataLevelPermissionStatusRequest &request)const;
			void updateDataLevelPermissionStatusAsync(const Model::UpdateDataLevelPermissionStatusRequest& request, const UpdateDataLevelPermissionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDataLevelPermissionStatusOutcomeCallable updateDataLevelPermissionStatusCallable(const Model::UpdateDataLevelPermissionStatusRequest& request) const;
			UpdateEmbeddedStatusOutcome updateEmbeddedStatus(const Model::UpdateEmbeddedStatusRequest &request)const;
			void updateEmbeddedStatusAsync(const Model::UpdateEmbeddedStatusRequest& request, const UpdateEmbeddedStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEmbeddedStatusOutcomeCallable updateEmbeddedStatusCallable(const Model::UpdateEmbeddedStatusRequest& request) const;
			UpdateTicketNumOutcome updateTicketNum(const Model::UpdateTicketNumRequest &request)const;
			void updateTicketNumAsync(const Model::UpdateTicketNumRequest& request, const UpdateTicketNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTicketNumOutcomeCallable updateTicketNumCallable(const Model::UpdateTicketNumRequest& request) const;
			UpdateUserOutcome updateUser(const Model::UpdateUserRequest &request)const;
			void updateUserAsync(const Model::UpdateUserRequest& request, const UpdateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateUserOutcomeCallable updateUserCallable(const Model::UpdateUserRequest& request) const;
			UpdateUserGroupOutcome updateUserGroup(const Model::UpdateUserGroupRequest &request)const;
			void updateUserGroupAsync(const Model::UpdateUserGroupRequest& request, const UpdateUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateUserGroupOutcomeCallable updateUserGroupCallable(const Model::UpdateUserGroupRequest& request) const;
			UpdateUserTagMetaOutcome updateUserTagMeta(const Model::UpdateUserTagMetaRequest &request)const;
			void updateUserTagMetaAsync(const Model::UpdateUserTagMetaRequest& request, const UpdateUserTagMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateUserTagMetaOutcomeCallable updateUserTagMetaCallable(const Model::UpdateUserTagMetaRequest& request) const;
			UpdateUserTagValueOutcome updateUserTagValue(const Model::UpdateUserTagValueRequest &request)const;
			void updateUserTagValueAsync(const Model::UpdateUserTagValueRequest& request, const UpdateUserTagValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateUserTagValueOutcomeCallable updateUserTagValueCallable(const Model::UpdateUserTagValueRequest& request) const;
			UpdateWorkspaceUserRoleOutcome updateWorkspaceUserRole(const Model::UpdateWorkspaceUserRoleRequest &request)const;
			void updateWorkspaceUserRoleAsync(const Model::UpdateWorkspaceUserRoleRequest& request, const UpdateWorkspaceUserRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateWorkspaceUserRoleOutcomeCallable updateWorkspaceUserRoleCallable(const Model::UpdateWorkspaceUserRoleRequest& request) const;
			UpdateWorkspaceUsersRoleOutcome updateWorkspaceUsersRole(const Model::UpdateWorkspaceUsersRoleRequest &request)const;
			void updateWorkspaceUsersRoleAsync(const Model::UpdateWorkspaceUsersRoleRequest& request, const UpdateWorkspaceUsersRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateWorkspaceUsersRoleOutcomeCallable updateWorkspaceUsersRoleCallable(const Model::UpdateWorkspaceUsersRoleRequest& request) const;
			WithdrawAllUserGroupsOutcome withdrawAllUserGroups(const Model::WithdrawAllUserGroupsRequest &request)const;
			void withdrawAllUserGroupsAsync(const Model::WithdrawAllUserGroupsRequest& request, const WithdrawAllUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			WithdrawAllUserGroupsOutcomeCallable withdrawAllUserGroupsCallable(const Model::WithdrawAllUserGroupsRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_QUICKBI_PUBLIC_QUICKBI_PUBLICCLIENT_H_
