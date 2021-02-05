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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_DATAWORKS_PUBLICCLIENT_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_DATAWORKS_PUBLICCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Dataworks_publicExport.h"
#include "model/AbolishDataServiceApiRequest.h"
#include "model/AbolishDataServiceApiResult.h"
#include "model/AddProjectMemberToRoleRequest.h"
#include "model/AddProjectMemberToRoleResult.h"
#include "model/AddToMetaCategoryRequest.h"
#include "model/AddToMetaCategoryResult.h"
#include "model/CheckMetaPartitionRequest.h"
#include "model/CheckMetaPartitionResult.h"
#include "model/CheckMetaTableRequest.h"
#include "model/CheckMetaTableResult.h"
#include "model/CreateBusinessRequest.h"
#include "model/CreateBusinessResult.h"
#include "model/CreateConnectionRequest.h"
#include "model/CreateConnectionResult.h"
#include "model/CreateDagComplementRequest.h"
#include "model/CreateDagComplementResult.h"
#include "model/CreateDagTestRequest.h"
#include "model/CreateDagTestResult.h"
#include "model/CreateDataServiceApiRequest.h"
#include "model/CreateDataServiceApiResult.h"
#include "model/CreateDataServiceApiAuthorityRequest.h"
#include "model/CreateDataServiceApiAuthorityResult.h"
#include "model/CreateDataServiceFolderRequest.h"
#include "model/CreateDataServiceFolderResult.h"
#include "model/CreateDataServiceGroupRequest.h"
#include "model/CreateDataServiceGroupResult.h"
#include "model/CreateFileRequest.h"
#include "model/CreateFileResult.h"
#include "model/CreateFolderRequest.h"
#include "model/CreateFolderResult.h"
#include "model/CreateManualDagRequest.h"
#include "model/CreateManualDagResult.h"
#include "model/CreateMetaCategoryRequest.h"
#include "model/CreateMetaCategoryResult.h"
#include "model/CreateProjectMemberRequest.h"
#include "model/CreateProjectMemberResult.h"
#include "model/CreateQualityEntityRequest.h"
#include "model/CreateQualityEntityResult.h"
#include "model/CreateQualityFollowerRequest.h"
#include "model/CreateQualityFollowerResult.h"
#include "model/CreateQualityRelativeNodeRequest.h"
#include "model/CreateQualityRelativeNodeResult.h"
#include "model/CreateQualityRuleRequest.h"
#include "model/CreateQualityRuleResult.h"
#include "model/CreateRemindRequest.h"
#include "model/CreateRemindResult.h"
#include "model/CreateTableRequest.h"
#include "model/CreateTableResult.h"
#include "model/CreateTableLevelRequest.h"
#include "model/CreateTableLevelResult.h"
#include "model/CreateTableThemeRequest.h"
#include "model/CreateTableThemeResult.h"
#include "model/CreateUdfFileRequest.h"
#include "model/CreateUdfFileResult.h"
#include "model/DeleteBusinessRequest.h"
#include "model/DeleteBusinessResult.h"
#include "model/DeleteConnectionRequest.h"
#include "model/DeleteConnectionResult.h"
#include "model/DeleteDataServiceApiRequest.h"
#include "model/DeleteDataServiceApiResult.h"
#include "model/DeleteDataServiceApiAuthorityRequest.h"
#include "model/DeleteDataServiceApiAuthorityResult.h"
#include "model/DeleteFileRequest.h"
#include "model/DeleteFileResult.h"
#include "model/DeleteFolderRequest.h"
#include "model/DeleteFolderResult.h"
#include "model/DeleteFromMetaCategoryRequest.h"
#include "model/DeleteFromMetaCategoryResult.h"
#include "model/DeleteMetaCategoryRequest.h"
#include "model/DeleteMetaCategoryResult.h"
#include "model/DeleteProjectMemberRequest.h"
#include "model/DeleteProjectMemberResult.h"
#include "model/DeleteQualityEntityRequest.h"
#include "model/DeleteQualityEntityResult.h"
#include "model/DeleteQualityFollowerRequest.h"
#include "model/DeleteQualityFollowerResult.h"
#include "model/DeleteQualityRelativeNodeRequest.h"
#include "model/DeleteQualityRelativeNodeResult.h"
#include "model/DeleteQualityRuleRequest.h"
#include "model/DeleteQualityRuleResult.h"
#include "model/DeleteRemindRequest.h"
#include "model/DeleteRemindResult.h"
#include "model/DeleteTableRequest.h"
#include "model/DeleteTableResult.h"
#include "model/DeleteTableLevelRequest.h"
#include "model/DeleteTableLevelResult.h"
#include "model/DeleteTableThemeRequest.h"
#include "model/DeleteTableThemeResult.h"
#include "model/DeployFileRequest.h"
#include "model/DeployFileResult.h"
#include "model/EstablishRelationTableToBusinessRequest.h"
#include "model/EstablishRelationTableToBusinessResult.h"
#include "model/GetBaselineConfigRequest.h"
#include "model/GetBaselineConfigResult.h"
#include "model/GetBaselineKeyPathRequest.h"
#include "model/GetBaselineKeyPathResult.h"
#include "model/GetBaselineStatusRequest.h"
#include "model/GetBaselineStatusResult.h"
#include "model/GetBusinessRequest.h"
#include "model/GetBusinessResult.h"
#include "model/GetDDLJobStatusRequest.h"
#include "model/GetDDLJobStatusResult.h"
#include "model/GetDagRequest.h"
#include "model/GetDagResult.h"
#include "model/GetDataServiceApiRequest.h"
#include "model/GetDataServiceApiResult.h"
#include "model/GetDataServiceApplicationRequest.h"
#include "model/GetDataServiceApplicationResult.h"
#include "model/GetDataServiceFolderRequest.h"
#include "model/GetDataServiceFolderResult.h"
#include "model/GetDataServiceGroupRequest.h"
#include "model/GetDataServiceGroupResult.h"
#include "model/GetDataServicePublishedApiRequest.h"
#include "model/GetDataServicePublishedApiResult.h"
#include "model/GetDeploymentRequest.h"
#include "model/GetDeploymentResult.h"
#include "model/GetFileRequest.h"
#include "model/GetFileResult.h"
#include "model/GetFileVersionRequest.h"
#include "model/GetFileVersionResult.h"
#include "model/GetFolderRequest.h"
#include "model/GetFolderResult.h"
#include "model/GetInstanceRequest.h"
#include "model/GetInstanceResult.h"
#include "model/GetInstanceConsumeTimeRankRequest.h"
#include "model/GetInstanceConsumeTimeRankResult.h"
#include "model/GetInstanceCountTrendRequest.h"
#include "model/GetInstanceCountTrendResult.h"
#include "model/GetInstanceErrorRankRequest.h"
#include "model/GetInstanceErrorRankResult.h"
#include "model/GetInstanceLogRequest.h"
#include "model/GetInstanceLogResult.h"
#include "model/GetInstanceStatusCountRequest.h"
#include "model/GetInstanceStatusCountResult.h"
#include "model/GetManualDagInstancesRequest.h"
#include "model/GetManualDagInstancesResult.h"
#include "model/GetMetaCategoryRequest.h"
#include "model/GetMetaCategoryResult.h"
#include "model/GetMetaColumnLineageRequest.h"
#include "model/GetMetaColumnLineageResult.h"
#include "model/GetMetaDBInfoRequest.h"
#include "model/GetMetaDBInfoResult.h"
#include "model/GetMetaDBTableListRequest.h"
#include "model/GetMetaDBTableListResult.h"
#include "model/GetMetaTableBasicInfoRequest.h"
#include "model/GetMetaTableBasicInfoResult.h"
#include "model/GetMetaTableChangeLogRequest.h"
#include "model/GetMetaTableChangeLogResult.h"
#include "model/GetMetaTableColumnRequest.h"
#include "model/GetMetaTableColumnResult.h"
#include "model/GetMetaTableFullInfoRequest.h"
#include "model/GetMetaTableFullInfoResult.h"
#include "model/GetMetaTableIntroWikiRequest.h"
#include "model/GetMetaTableIntroWikiResult.h"
#include "model/GetMetaTableLineageRequest.h"
#include "model/GetMetaTableLineageResult.h"
#include "model/GetMetaTableListByCategoryRequest.h"
#include "model/GetMetaTableListByCategoryResult.h"
#include "model/GetMetaTableOutputRequest.h"
#include "model/GetMetaTableOutputResult.h"
#include "model/GetMetaTablePartitionRequest.h"
#include "model/GetMetaTablePartitionResult.h"
#include "model/GetNodeRequest.h"
#include "model/GetNodeResult.h"
#include "model/GetNodeCodeRequest.h"
#include "model/GetNodeCodeResult.h"
#include "model/GetNodeOnBaselineRequest.h"
#include "model/GetNodeOnBaselineResult.h"
#include "model/GetNodeTypeListInfoRequest.h"
#include "model/GetNodeTypeListInfoResult.h"
#include "model/GetProjectDetailRequest.h"
#include "model/GetProjectDetailResult.h"
#include "model/GetQualityEntityRequest.h"
#include "model/GetQualityEntityResult.h"
#include "model/GetQualityFollowerRequest.h"
#include "model/GetQualityFollowerResult.h"
#include "model/GetQualityRuleRequest.h"
#include "model/GetQualityRuleResult.h"
#include "model/GetRemindRequest.h"
#include "model/GetRemindResult.h"
#include "model/GetSuccessInstanceTrendRequest.h"
#include "model/GetSuccessInstanceTrendResult.h"
#include "model/GetTopicRequest.h"
#include "model/GetTopicResult.h"
#include "model/GetTopicInfluenceRequest.h"
#include "model/GetTopicInfluenceResult.h"
#include "model/ListAlertMessagesRequest.h"
#include "model/ListAlertMessagesResult.h"
#include "model/ListBaselineConfigsRequest.h"
#include "model/ListBaselineConfigsResult.h"
#include "model/ListBaselineStatusesRequest.h"
#include "model/ListBaselineStatusesResult.h"
#include "model/ListBusinessRequest.h"
#include "model/ListBusinessResult.h"
#include "model/ListCalcEnginesRequest.h"
#include "model/ListCalcEnginesResult.h"
#include "model/ListConnectionsRequest.h"
#include "model/ListConnectionsResult.h"
#include "model/ListDataServiceApiAuthoritiesRequest.h"
#include "model/ListDataServiceApiAuthoritiesResult.h"
#include "model/ListDataServiceApisRequest.h"
#include "model/ListDataServiceApisResult.h"
#include "model/ListDataServiceApplicationsRequest.h"
#include "model/ListDataServiceApplicationsResult.h"
#include "model/ListDataServiceAuthorizedApisRequest.h"
#include "model/ListDataServiceAuthorizedApisResult.h"
#include "model/ListDataServiceFoldersRequest.h"
#include "model/ListDataServiceFoldersResult.h"
#include "model/ListDataServiceGroupsRequest.h"
#include "model/ListDataServiceGroupsResult.h"
#include "model/ListDataServicePublishedApisRequest.h"
#include "model/ListDataServicePublishedApisResult.h"
#include "model/ListFileVersionsRequest.h"
#include "model/ListFileVersionsResult.h"
#include "model/ListFilesRequest.h"
#include "model/ListFilesResult.h"
#include "model/ListFoldersRequest.h"
#include "model/ListFoldersResult.h"
#include "model/ListInstancesRequest.h"
#include "model/ListInstancesResult.h"
#include "model/ListMetaDBRequest.h"
#include "model/ListMetaDBResult.h"
#include "model/ListNodeIORequest.h"
#include "model/ListNodeIOResult.h"
#include "model/ListNodesRequest.h"
#include "model/ListNodesResult.h"
#include "model/ListProgramTypeCountRequest.h"
#include "model/ListProgramTypeCountResult.h"
#include "model/ListProjectMembersRequest.h"
#include "model/ListProjectMembersResult.h"
#include "model/ListProjectRolesRequest.h"
#include "model/ListProjectRolesResult.h"
#include "model/ListProjectsRequest.h"
#include "model/ListProjectsResult.h"
#include "model/ListQualityResultsByEntityRequest.h"
#include "model/ListQualityResultsByEntityResult.h"
#include "model/ListQualityResultsByRuleRequest.h"
#include "model/ListQualityResultsByRuleResult.h"
#include "model/ListQualityRulesRequest.h"
#include "model/ListQualityRulesResult.h"
#include "model/ListRemindsRequest.h"
#include "model/ListRemindsResult.h"
#include "model/ListResourceGroupsRequest.h"
#include "model/ListResourceGroupsResult.h"
#include "model/ListTableLevelRequest.h"
#include "model/ListTableLevelResult.h"
#include "model/ListTableThemeRequest.h"
#include "model/ListTableThemeResult.h"
#include "model/ListTopicsRequest.h"
#include "model/ListTopicsResult.h"
#include "model/PublishDataServiceApiRequest.h"
#include "model/PublishDataServiceApiResult.h"
#include "model/RemoveProjectMemberFromRoleRequest.h"
#include "model/RemoveProjectMemberFromRoleResult.h"
#include "model/RestartInstanceRequest.h"
#include "model/RestartInstanceResult.h"
#include "model/ResumeInstanceRequest.h"
#include "model/ResumeInstanceResult.h"
#include "model/RunTriggerNodeRequest.h"
#include "model/RunTriggerNodeResult.h"
#include "model/SearchMetaTablesRequest.h"
#include "model/SearchMetaTablesResult.h"
#include "model/SearchNodesByOutputRequest.h"
#include "model/SearchNodesByOutputResult.h"
#include "model/SetSuccessInstanceRequest.h"
#include "model/SetSuccessInstanceResult.h"
#include "model/StopInstanceRequest.h"
#include "model/StopInstanceResult.h"
#include "model/SubmitFileRequest.h"
#include "model/SubmitFileResult.h"
#include "model/SuspendInstanceRequest.h"
#include "model/SuspendInstanceResult.h"
#include "model/UpdateBusinessRequest.h"
#include "model/UpdateBusinessResult.h"
#include "model/UpdateConnectionRequest.h"
#include "model/UpdateConnectionResult.h"
#include "model/UpdateDataServiceApiRequest.h"
#include "model/UpdateDataServiceApiResult.h"
#include "model/UpdateFileRequest.h"
#include "model/UpdateFileResult.h"
#include "model/UpdateFolderRequest.h"
#include "model/UpdateFolderResult.h"
#include "model/UpdateMetaCategoryRequest.h"
#include "model/UpdateMetaCategoryResult.h"
#include "model/UpdateMetaTableRequest.h"
#include "model/UpdateMetaTableResult.h"
#include "model/UpdateMetaTableIntroWikiRequest.h"
#include "model/UpdateMetaTableIntroWikiResult.h"
#include "model/UpdateQualityFollowerRequest.h"
#include "model/UpdateQualityFollowerResult.h"
#include "model/UpdateQualityRuleRequest.h"
#include "model/UpdateQualityRuleResult.h"
#include "model/UpdateRemindRequest.h"
#include "model/UpdateRemindResult.h"
#include "model/UpdateTableRequest.h"
#include "model/UpdateTableResult.h"
#include "model/UpdateTableLevelRequest.h"
#include "model/UpdateTableLevelResult.h"
#include "model/UpdateTableModelInfoRequest.h"
#include "model/UpdateTableModelInfoResult.h"
#include "model/UpdateTableThemeRequest.h"
#include "model/UpdateTableThemeResult.h"
#include "model/UpdateUdfFileRequest.h"
#include "model/UpdateUdfFileResult.h"


namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT Dataworks_publicClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AbolishDataServiceApiResult> AbolishDataServiceApiOutcome;
			typedef std::future<AbolishDataServiceApiOutcome> AbolishDataServiceApiOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::AbolishDataServiceApiRequest&, const AbolishDataServiceApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AbolishDataServiceApiAsyncHandler;
			typedef Outcome<Error, Model::AddProjectMemberToRoleResult> AddProjectMemberToRoleOutcome;
			typedef std::future<AddProjectMemberToRoleOutcome> AddProjectMemberToRoleOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::AddProjectMemberToRoleRequest&, const AddProjectMemberToRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddProjectMemberToRoleAsyncHandler;
			typedef Outcome<Error, Model::AddToMetaCategoryResult> AddToMetaCategoryOutcome;
			typedef std::future<AddToMetaCategoryOutcome> AddToMetaCategoryOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::AddToMetaCategoryRequest&, const AddToMetaCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddToMetaCategoryAsyncHandler;
			typedef Outcome<Error, Model::CheckMetaPartitionResult> CheckMetaPartitionOutcome;
			typedef std::future<CheckMetaPartitionOutcome> CheckMetaPartitionOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CheckMetaPartitionRequest&, const CheckMetaPartitionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckMetaPartitionAsyncHandler;
			typedef Outcome<Error, Model::CheckMetaTableResult> CheckMetaTableOutcome;
			typedef std::future<CheckMetaTableOutcome> CheckMetaTableOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CheckMetaTableRequest&, const CheckMetaTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckMetaTableAsyncHandler;
			typedef Outcome<Error, Model::CreateBusinessResult> CreateBusinessOutcome;
			typedef std::future<CreateBusinessOutcome> CreateBusinessOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateBusinessRequest&, const CreateBusinessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBusinessAsyncHandler;
			typedef Outcome<Error, Model::CreateConnectionResult> CreateConnectionOutcome;
			typedef std::future<CreateConnectionOutcome> CreateConnectionOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateConnectionRequest&, const CreateConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateConnectionAsyncHandler;
			typedef Outcome<Error, Model::CreateDagComplementResult> CreateDagComplementOutcome;
			typedef std::future<CreateDagComplementOutcome> CreateDagComplementOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateDagComplementRequest&, const CreateDagComplementOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDagComplementAsyncHandler;
			typedef Outcome<Error, Model::CreateDagTestResult> CreateDagTestOutcome;
			typedef std::future<CreateDagTestOutcome> CreateDagTestOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateDagTestRequest&, const CreateDagTestOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDagTestAsyncHandler;
			typedef Outcome<Error, Model::CreateDataServiceApiResult> CreateDataServiceApiOutcome;
			typedef std::future<CreateDataServiceApiOutcome> CreateDataServiceApiOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateDataServiceApiRequest&, const CreateDataServiceApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataServiceApiAsyncHandler;
			typedef Outcome<Error, Model::CreateDataServiceApiAuthorityResult> CreateDataServiceApiAuthorityOutcome;
			typedef std::future<CreateDataServiceApiAuthorityOutcome> CreateDataServiceApiAuthorityOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateDataServiceApiAuthorityRequest&, const CreateDataServiceApiAuthorityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataServiceApiAuthorityAsyncHandler;
			typedef Outcome<Error, Model::CreateDataServiceFolderResult> CreateDataServiceFolderOutcome;
			typedef std::future<CreateDataServiceFolderOutcome> CreateDataServiceFolderOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateDataServiceFolderRequest&, const CreateDataServiceFolderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataServiceFolderAsyncHandler;
			typedef Outcome<Error, Model::CreateDataServiceGroupResult> CreateDataServiceGroupOutcome;
			typedef std::future<CreateDataServiceGroupOutcome> CreateDataServiceGroupOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateDataServiceGroupRequest&, const CreateDataServiceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDataServiceGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateFileResult> CreateFileOutcome;
			typedef std::future<CreateFileOutcome> CreateFileOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateFileRequest&, const CreateFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFileAsyncHandler;
			typedef Outcome<Error, Model::CreateFolderResult> CreateFolderOutcome;
			typedef std::future<CreateFolderOutcome> CreateFolderOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateFolderRequest&, const CreateFolderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFolderAsyncHandler;
			typedef Outcome<Error, Model::CreateManualDagResult> CreateManualDagOutcome;
			typedef std::future<CreateManualDagOutcome> CreateManualDagOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateManualDagRequest&, const CreateManualDagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateManualDagAsyncHandler;
			typedef Outcome<Error, Model::CreateMetaCategoryResult> CreateMetaCategoryOutcome;
			typedef std::future<CreateMetaCategoryOutcome> CreateMetaCategoryOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateMetaCategoryRequest&, const CreateMetaCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMetaCategoryAsyncHandler;
			typedef Outcome<Error, Model::CreateProjectMemberResult> CreateProjectMemberOutcome;
			typedef std::future<CreateProjectMemberOutcome> CreateProjectMemberOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateProjectMemberRequest&, const CreateProjectMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectMemberAsyncHandler;
			typedef Outcome<Error, Model::CreateQualityEntityResult> CreateQualityEntityOutcome;
			typedef std::future<CreateQualityEntityOutcome> CreateQualityEntityOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateQualityEntityRequest&, const CreateQualityEntityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateQualityEntityAsyncHandler;
			typedef Outcome<Error, Model::CreateQualityFollowerResult> CreateQualityFollowerOutcome;
			typedef std::future<CreateQualityFollowerOutcome> CreateQualityFollowerOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateQualityFollowerRequest&, const CreateQualityFollowerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateQualityFollowerAsyncHandler;
			typedef Outcome<Error, Model::CreateQualityRelativeNodeResult> CreateQualityRelativeNodeOutcome;
			typedef std::future<CreateQualityRelativeNodeOutcome> CreateQualityRelativeNodeOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateQualityRelativeNodeRequest&, const CreateQualityRelativeNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateQualityRelativeNodeAsyncHandler;
			typedef Outcome<Error, Model::CreateQualityRuleResult> CreateQualityRuleOutcome;
			typedef std::future<CreateQualityRuleOutcome> CreateQualityRuleOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateQualityRuleRequest&, const CreateQualityRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateQualityRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateRemindResult> CreateRemindOutcome;
			typedef std::future<CreateRemindOutcome> CreateRemindOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateRemindRequest&, const CreateRemindOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRemindAsyncHandler;
			typedef Outcome<Error, Model::CreateTableResult> CreateTableOutcome;
			typedef std::future<CreateTableOutcome> CreateTableOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateTableRequest&, const CreateTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTableAsyncHandler;
			typedef Outcome<Error, Model::CreateTableLevelResult> CreateTableLevelOutcome;
			typedef std::future<CreateTableLevelOutcome> CreateTableLevelOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateTableLevelRequest&, const CreateTableLevelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTableLevelAsyncHandler;
			typedef Outcome<Error, Model::CreateTableThemeResult> CreateTableThemeOutcome;
			typedef std::future<CreateTableThemeOutcome> CreateTableThemeOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateTableThemeRequest&, const CreateTableThemeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTableThemeAsyncHandler;
			typedef Outcome<Error, Model::CreateUdfFileResult> CreateUdfFileOutcome;
			typedef std::future<CreateUdfFileOutcome> CreateUdfFileOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::CreateUdfFileRequest&, const CreateUdfFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUdfFileAsyncHandler;
			typedef Outcome<Error, Model::DeleteBusinessResult> DeleteBusinessOutcome;
			typedef std::future<DeleteBusinessOutcome> DeleteBusinessOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteBusinessRequest&, const DeleteBusinessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBusinessAsyncHandler;
			typedef Outcome<Error, Model::DeleteConnectionResult> DeleteConnectionOutcome;
			typedef std::future<DeleteConnectionOutcome> DeleteConnectionOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteConnectionRequest&, const DeleteConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConnectionAsyncHandler;
			typedef Outcome<Error, Model::DeleteDataServiceApiResult> DeleteDataServiceApiOutcome;
			typedef std::future<DeleteDataServiceApiOutcome> DeleteDataServiceApiOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteDataServiceApiRequest&, const DeleteDataServiceApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataServiceApiAsyncHandler;
			typedef Outcome<Error, Model::DeleteDataServiceApiAuthorityResult> DeleteDataServiceApiAuthorityOutcome;
			typedef std::future<DeleteDataServiceApiAuthorityOutcome> DeleteDataServiceApiAuthorityOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteDataServiceApiAuthorityRequest&, const DeleteDataServiceApiAuthorityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDataServiceApiAuthorityAsyncHandler;
			typedef Outcome<Error, Model::DeleteFileResult> DeleteFileOutcome;
			typedef std::future<DeleteFileOutcome> DeleteFileOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteFileRequest&, const DeleteFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFileAsyncHandler;
			typedef Outcome<Error, Model::DeleteFolderResult> DeleteFolderOutcome;
			typedef std::future<DeleteFolderOutcome> DeleteFolderOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteFolderRequest&, const DeleteFolderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFolderAsyncHandler;
			typedef Outcome<Error, Model::DeleteFromMetaCategoryResult> DeleteFromMetaCategoryOutcome;
			typedef std::future<DeleteFromMetaCategoryOutcome> DeleteFromMetaCategoryOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteFromMetaCategoryRequest&, const DeleteFromMetaCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFromMetaCategoryAsyncHandler;
			typedef Outcome<Error, Model::DeleteMetaCategoryResult> DeleteMetaCategoryOutcome;
			typedef std::future<DeleteMetaCategoryOutcome> DeleteMetaCategoryOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteMetaCategoryRequest&, const DeleteMetaCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMetaCategoryAsyncHandler;
			typedef Outcome<Error, Model::DeleteProjectMemberResult> DeleteProjectMemberOutcome;
			typedef std::future<DeleteProjectMemberOutcome> DeleteProjectMemberOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteProjectMemberRequest&, const DeleteProjectMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectMemberAsyncHandler;
			typedef Outcome<Error, Model::DeleteQualityEntityResult> DeleteQualityEntityOutcome;
			typedef std::future<DeleteQualityEntityOutcome> DeleteQualityEntityOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteQualityEntityRequest&, const DeleteQualityEntityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQualityEntityAsyncHandler;
			typedef Outcome<Error, Model::DeleteQualityFollowerResult> DeleteQualityFollowerOutcome;
			typedef std::future<DeleteQualityFollowerOutcome> DeleteQualityFollowerOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteQualityFollowerRequest&, const DeleteQualityFollowerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQualityFollowerAsyncHandler;
			typedef Outcome<Error, Model::DeleteQualityRelativeNodeResult> DeleteQualityRelativeNodeOutcome;
			typedef std::future<DeleteQualityRelativeNodeOutcome> DeleteQualityRelativeNodeOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteQualityRelativeNodeRequest&, const DeleteQualityRelativeNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQualityRelativeNodeAsyncHandler;
			typedef Outcome<Error, Model::DeleteQualityRuleResult> DeleteQualityRuleOutcome;
			typedef std::future<DeleteQualityRuleOutcome> DeleteQualityRuleOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteQualityRuleRequest&, const DeleteQualityRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQualityRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteRemindResult> DeleteRemindOutcome;
			typedef std::future<DeleteRemindOutcome> DeleteRemindOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteRemindRequest&, const DeleteRemindOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRemindAsyncHandler;
			typedef Outcome<Error, Model::DeleteTableResult> DeleteTableOutcome;
			typedef std::future<DeleteTableOutcome> DeleteTableOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteTableRequest&, const DeleteTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTableAsyncHandler;
			typedef Outcome<Error, Model::DeleteTableLevelResult> DeleteTableLevelOutcome;
			typedef std::future<DeleteTableLevelOutcome> DeleteTableLevelOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteTableLevelRequest&, const DeleteTableLevelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTableLevelAsyncHandler;
			typedef Outcome<Error, Model::DeleteTableThemeResult> DeleteTableThemeOutcome;
			typedef std::future<DeleteTableThemeOutcome> DeleteTableThemeOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeleteTableThemeRequest&, const DeleteTableThemeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTableThemeAsyncHandler;
			typedef Outcome<Error, Model::DeployFileResult> DeployFileOutcome;
			typedef std::future<DeployFileOutcome> DeployFileOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::DeployFileRequest&, const DeployFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeployFileAsyncHandler;
			typedef Outcome<Error, Model::EstablishRelationTableToBusinessResult> EstablishRelationTableToBusinessOutcome;
			typedef std::future<EstablishRelationTableToBusinessOutcome> EstablishRelationTableToBusinessOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::EstablishRelationTableToBusinessRequest&, const EstablishRelationTableToBusinessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EstablishRelationTableToBusinessAsyncHandler;
			typedef Outcome<Error, Model::GetBaselineConfigResult> GetBaselineConfigOutcome;
			typedef std::future<GetBaselineConfigOutcome> GetBaselineConfigOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetBaselineConfigRequest&, const GetBaselineConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBaselineConfigAsyncHandler;
			typedef Outcome<Error, Model::GetBaselineKeyPathResult> GetBaselineKeyPathOutcome;
			typedef std::future<GetBaselineKeyPathOutcome> GetBaselineKeyPathOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetBaselineKeyPathRequest&, const GetBaselineKeyPathOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBaselineKeyPathAsyncHandler;
			typedef Outcome<Error, Model::GetBaselineStatusResult> GetBaselineStatusOutcome;
			typedef std::future<GetBaselineStatusOutcome> GetBaselineStatusOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetBaselineStatusRequest&, const GetBaselineStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBaselineStatusAsyncHandler;
			typedef Outcome<Error, Model::GetBusinessResult> GetBusinessOutcome;
			typedef std::future<GetBusinessOutcome> GetBusinessOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetBusinessRequest&, const GetBusinessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBusinessAsyncHandler;
			typedef Outcome<Error, Model::GetDDLJobStatusResult> GetDDLJobStatusOutcome;
			typedef std::future<GetDDLJobStatusOutcome> GetDDLJobStatusOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetDDLJobStatusRequest&, const GetDDLJobStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDDLJobStatusAsyncHandler;
			typedef Outcome<Error, Model::GetDagResult> GetDagOutcome;
			typedef std::future<GetDagOutcome> GetDagOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetDagRequest&, const GetDagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDagAsyncHandler;
			typedef Outcome<Error, Model::GetDataServiceApiResult> GetDataServiceApiOutcome;
			typedef std::future<GetDataServiceApiOutcome> GetDataServiceApiOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetDataServiceApiRequest&, const GetDataServiceApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDataServiceApiAsyncHandler;
			typedef Outcome<Error, Model::GetDataServiceApplicationResult> GetDataServiceApplicationOutcome;
			typedef std::future<GetDataServiceApplicationOutcome> GetDataServiceApplicationOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetDataServiceApplicationRequest&, const GetDataServiceApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDataServiceApplicationAsyncHandler;
			typedef Outcome<Error, Model::GetDataServiceFolderResult> GetDataServiceFolderOutcome;
			typedef std::future<GetDataServiceFolderOutcome> GetDataServiceFolderOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetDataServiceFolderRequest&, const GetDataServiceFolderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDataServiceFolderAsyncHandler;
			typedef Outcome<Error, Model::GetDataServiceGroupResult> GetDataServiceGroupOutcome;
			typedef std::future<GetDataServiceGroupOutcome> GetDataServiceGroupOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetDataServiceGroupRequest&, const GetDataServiceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDataServiceGroupAsyncHandler;
			typedef Outcome<Error, Model::GetDataServicePublishedApiResult> GetDataServicePublishedApiOutcome;
			typedef std::future<GetDataServicePublishedApiOutcome> GetDataServicePublishedApiOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetDataServicePublishedApiRequest&, const GetDataServicePublishedApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDataServicePublishedApiAsyncHandler;
			typedef Outcome<Error, Model::GetDeploymentResult> GetDeploymentOutcome;
			typedef std::future<GetDeploymentOutcome> GetDeploymentOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetDeploymentRequest&, const GetDeploymentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDeploymentAsyncHandler;
			typedef Outcome<Error, Model::GetFileResult> GetFileOutcome;
			typedef std::future<GetFileOutcome> GetFileOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetFileRequest&, const GetFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFileAsyncHandler;
			typedef Outcome<Error, Model::GetFileVersionResult> GetFileVersionOutcome;
			typedef std::future<GetFileVersionOutcome> GetFileVersionOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetFileVersionRequest&, const GetFileVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFileVersionAsyncHandler;
			typedef Outcome<Error, Model::GetFolderResult> GetFolderOutcome;
			typedef std::future<GetFolderOutcome> GetFolderOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetFolderRequest&, const GetFolderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFolderAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceResult> GetInstanceOutcome;
			typedef std::future<GetInstanceOutcome> GetInstanceOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetInstanceRequest&, const GetInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceConsumeTimeRankResult> GetInstanceConsumeTimeRankOutcome;
			typedef std::future<GetInstanceConsumeTimeRankOutcome> GetInstanceConsumeTimeRankOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetInstanceConsumeTimeRankRequest&, const GetInstanceConsumeTimeRankOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceConsumeTimeRankAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceCountTrendResult> GetInstanceCountTrendOutcome;
			typedef std::future<GetInstanceCountTrendOutcome> GetInstanceCountTrendOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetInstanceCountTrendRequest&, const GetInstanceCountTrendOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceCountTrendAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceErrorRankResult> GetInstanceErrorRankOutcome;
			typedef std::future<GetInstanceErrorRankOutcome> GetInstanceErrorRankOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetInstanceErrorRankRequest&, const GetInstanceErrorRankOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceErrorRankAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceLogResult> GetInstanceLogOutcome;
			typedef std::future<GetInstanceLogOutcome> GetInstanceLogOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetInstanceLogRequest&, const GetInstanceLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceLogAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceStatusCountResult> GetInstanceStatusCountOutcome;
			typedef std::future<GetInstanceStatusCountOutcome> GetInstanceStatusCountOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetInstanceStatusCountRequest&, const GetInstanceStatusCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceStatusCountAsyncHandler;
			typedef Outcome<Error, Model::GetManualDagInstancesResult> GetManualDagInstancesOutcome;
			typedef std::future<GetManualDagInstancesOutcome> GetManualDagInstancesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetManualDagInstancesRequest&, const GetManualDagInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetManualDagInstancesAsyncHandler;
			typedef Outcome<Error, Model::GetMetaCategoryResult> GetMetaCategoryOutcome;
			typedef std::future<GetMetaCategoryOutcome> GetMetaCategoryOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetMetaCategoryRequest&, const GetMetaCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMetaCategoryAsyncHandler;
			typedef Outcome<Error, Model::GetMetaColumnLineageResult> GetMetaColumnLineageOutcome;
			typedef std::future<GetMetaColumnLineageOutcome> GetMetaColumnLineageOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetMetaColumnLineageRequest&, const GetMetaColumnLineageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMetaColumnLineageAsyncHandler;
			typedef Outcome<Error, Model::GetMetaDBInfoResult> GetMetaDBInfoOutcome;
			typedef std::future<GetMetaDBInfoOutcome> GetMetaDBInfoOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetMetaDBInfoRequest&, const GetMetaDBInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMetaDBInfoAsyncHandler;
			typedef Outcome<Error, Model::GetMetaDBTableListResult> GetMetaDBTableListOutcome;
			typedef std::future<GetMetaDBTableListOutcome> GetMetaDBTableListOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetMetaDBTableListRequest&, const GetMetaDBTableListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMetaDBTableListAsyncHandler;
			typedef Outcome<Error, Model::GetMetaTableBasicInfoResult> GetMetaTableBasicInfoOutcome;
			typedef std::future<GetMetaTableBasicInfoOutcome> GetMetaTableBasicInfoOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetMetaTableBasicInfoRequest&, const GetMetaTableBasicInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMetaTableBasicInfoAsyncHandler;
			typedef Outcome<Error, Model::GetMetaTableChangeLogResult> GetMetaTableChangeLogOutcome;
			typedef std::future<GetMetaTableChangeLogOutcome> GetMetaTableChangeLogOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetMetaTableChangeLogRequest&, const GetMetaTableChangeLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMetaTableChangeLogAsyncHandler;
			typedef Outcome<Error, Model::GetMetaTableColumnResult> GetMetaTableColumnOutcome;
			typedef std::future<GetMetaTableColumnOutcome> GetMetaTableColumnOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetMetaTableColumnRequest&, const GetMetaTableColumnOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMetaTableColumnAsyncHandler;
			typedef Outcome<Error, Model::GetMetaTableFullInfoResult> GetMetaTableFullInfoOutcome;
			typedef std::future<GetMetaTableFullInfoOutcome> GetMetaTableFullInfoOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetMetaTableFullInfoRequest&, const GetMetaTableFullInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMetaTableFullInfoAsyncHandler;
			typedef Outcome<Error, Model::GetMetaTableIntroWikiResult> GetMetaTableIntroWikiOutcome;
			typedef std::future<GetMetaTableIntroWikiOutcome> GetMetaTableIntroWikiOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetMetaTableIntroWikiRequest&, const GetMetaTableIntroWikiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMetaTableIntroWikiAsyncHandler;
			typedef Outcome<Error, Model::GetMetaTableLineageResult> GetMetaTableLineageOutcome;
			typedef std::future<GetMetaTableLineageOutcome> GetMetaTableLineageOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetMetaTableLineageRequest&, const GetMetaTableLineageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMetaTableLineageAsyncHandler;
			typedef Outcome<Error, Model::GetMetaTableListByCategoryResult> GetMetaTableListByCategoryOutcome;
			typedef std::future<GetMetaTableListByCategoryOutcome> GetMetaTableListByCategoryOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetMetaTableListByCategoryRequest&, const GetMetaTableListByCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMetaTableListByCategoryAsyncHandler;
			typedef Outcome<Error, Model::GetMetaTableOutputResult> GetMetaTableOutputOutcome;
			typedef std::future<GetMetaTableOutputOutcome> GetMetaTableOutputOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetMetaTableOutputRequest&, const GetMetaTableOutputOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMetaTableOutputAsyncHandler;
			typedef Outcome<Error, Model::GetMetaTablePartitionResult> GetMetaTablePartitionOutcome;
			typedef std::future<GetMetaTablePartitionOutcome> GetMetaTablePartitionOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetMetaTablePartitionRequest&, const GetMetaTablePartitionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMetaTablePartitionAsyncHandler;
			typedef Outcome<Error, Model::GetNodeResult> GetNodeOutcome;
			typedef std::future<GetNodeOutcome> GetNodeOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetNodeRequest&, const GetNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNodeAsyncHandler;
			typedef Outcome<Error, Model::GetNodeCodeResult> GetNodeCodeOutcome;
			typedef std::future<GetNodeCodeOutcome> GetNodeCodeOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetNodeCodeRequest&, const GetNodeCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNodeCodeAsyncHandler;
			typedef Outcome<Error, Model::GetNodeOnBaselineResult> GetNodeOnBaselineOutcome;
			typedef std::future<GetNodeOnBaselineOutcome> GetNodeOnBaselineOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetNodeOnBaselineRequest&, const GetNodeOnBaselineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNodeOnBaselineAsyncHandler;
			typedef Outcome<Error, Model::GetNodeTypeListInfoResult> GetNodeTypeListInfoOutcome;
			typedef std::future<GetNodeTypeListInfoOutcome> GetNodeTypeListInfoOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetNodeTypeListInfoRequest&, const GetNodeTypeListInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNodeTypeListInfoAsyncHandler;
			typedef Outcome<Error, Model::GetProjectDetailResult> GetProjectDetailOutcome;
			typedef std::future<GetProjectDetailOutcome> GetProjectDetailOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetProjectDetailRequest&, const GetProjectDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetProjectDetailAsyncHandler;
			typedef Outcome<Error, Model::GetQualityEntityResult> GetQualityEntityOutcome;
			typedef std::future<GetQualityEntityOutcome> GetQualityEntityOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetQualityEntityRequest&, const GetQualityEntityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetQualityEntityAsyncHandler;
			typedef Outcome<Error, Model::GetQualityFollowerResult> GetQualityFollowerOutcome;
			typedef std::future<GetQualityFollowerOutcome> GetQualityFollowerOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetQualityFollowerRequest&, const GetQualityFollowerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetQualityFollowerAsyncHandler;
			typedef Outcome<Error, Model::GetQualityRuleResult> GetQualityRuleOutcome;
			typedef std::future<GetQualityRuleOutcome> GetQualityRuleOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetQualityRuleRequest&, const GetQualityRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetQualityRuleAsyncHandler;
			typedef Outcome<Error, Model::GetRemindResult> GetRemindOutcome;
			typedef std::future<GetRemindOutcome> GetRemindOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetRemindRequest&, const GetRemindOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRemindAsyncHandler;
			typedef Outcome<Error, Model::GetSuccessInstanceTrendResult> GetSuccessInstanceTrendOutcome;
			typedef std::future<GetSuccessInstanceTrendOutcome> GetSuccessInstanceTrendOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetSuccessInstanceTrendRequest&, const GetSuccessInstanceTrendOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSuccessInstanceTrendAsyncHandler;
			typedef Outcome<Error, Model::GetTopicResult> GetTopicOutcome;
			typedef std::future<GetTopicOutcome> GetTopicOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetTopicRequest&, const GetTopicOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTopicAsyncHandler;
			typedef Outcome<Error, Model::GetTopicInfluenceResult> GetTopicInfluenceOutcome;
			typedef std::future<GetTopicInfluenceOutcome> GetTopicInfluenceOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::GetTopicInfluenceRequest&, const GetTopicInfluenceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTopicInfluenceAsyncHandler;
			typedef Outcome<Error, Model::ListAlertMessagesResult> ListAlertMessagesOutcome;
			typedef std::future<ListAlertMessagesOutcome> ListAlertMessagesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListAlertMessagesRequest&, const ListAlertMessagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAlertMessagesAsyncHandler;
			typedef Outcome<Error, Model::ListBaselineConfigsResult> ListBaselineConfigsOutcome;
			typedef std::future<ListBaselineConfigsOutcome> ListBaselineConfigsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListBaselineConfigsRequest&, const ListBaselineConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBaselineConfigsAsyncHandler;
			typedef Outcome<Error, Model::ListBaselineStatusesResult> ListBaselineStatusesOutcome;
			typedef std::future<ListBaselineStatusesOutcome> ListBaselineStatusesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListBaselineStatusesRequest&, const ListBaselineStatusesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBaselineStatusesAsyncHandler;
			typedef Outcome<Error, Model::ListBusinessResult> ListBusinessOutcome;
			typedef std::future<ListBusinessOutcome> ListBusinessOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListBusinessRequest&, const ListBusinessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBusinessAsyncHandler;
			typedef Outcome<Error, Model::ListCalcEnginesResult> ListCalcEnginesOutcome;
			typedef std::future<ListCalcEnginesOutcome> ListCalcEnginesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListCalcEnginesRequest&, const ListCalcEnginesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCalcEnginesAsyncHandler;
			typedef Outcome<Error, Model::ListConnectionsResult> ListConnectionsOutcome;
			typedef std::future<ListConnectionsOutcome> ListConnectionsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListConnectionsRequest&, const ListConnectionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListConnectionsAsyncHandler;
			typedef Outcome<Error, Model::ListDataServiceApiAuthoritiesResult> ListDataServiceApiAuthoritiesOutcome;
			typedef std::future<ListDataServiceApiAuthoritiesOutcome> ListDataServiceApiAuthoritiesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListDataServiceApiAuthoritiesRequest&, const ListDataServiceApiAuthoritiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataServiceApiAuthoritiesAsyncHandler;
			typedef Outcome<Error, Model::ListDataServiceApisResult> ListDataServiceApisOutcome;
			typedef std::future<ListDataServiceApisOutcome> ListDataServiceApisOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListDataServiceApisRequest&, const ListDataServiceApisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataServiceApisAsyncHandler;
			typedef Outcome<Error, Model::ListDataServiceApplicationsResult> ListDataServiceApplicationsOutcome;
			typedef std::future<ListDataServiceApplicationsOutcome> ListDataServiceApplicationsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListDataServiceApplicationsRequest&, const ListDataServiceApplicationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataServiceApplicationsAsyncHandler;
			typedef Outcome<Error, Model::ListDataServiceAuthorizedApisResult> ListDataServiceAuthorizedApisOutcome;
			typedef std::future<ListDataServiceAuthorizedApisOutcome> ListDataServiceAuthorizedApisOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListDataServiceAuthorizedApisRequest&, const ListDataServiceAuthorizedApisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataServiceAuthorizedApisAsyncHandler;
			typedef Outcome<Error, Model::ListDataServiceFoldersResult> ListDataServiceFoldersOutcome;
			typedef std::future<ListDataServiceFoldersOutcome> ListDataServiceFoldersOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListDataServiceFoldersRequest&, const ListDataServiceFoldersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataServiceFoldersAsyncHandler;
			typedef Outcome<Error, Model::ListDataServiceGroupsResult> ListDataServiceGroupsOutcome;
			typedef std::future<ListDataServiceGroupsOutcome> ListDataServiceGroupsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListDataServiceGroupsRequest&, const ListDataServiceGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataServiceGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListDataServicePublishedApisResult> ListDataServicePublishedApisOutcome;
			typedef std::future<ListDataServicePublishedApisOutcome> ListDataServicePublishedApisOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListDataServicePublishedApisRequest&, const ListDataServicePublishedApisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDataServicePublishedApisAsyncHandler;
			typedef Outcome<Error, Model::ListFileVersionsResult> ListFileVersionsOutcome;
			typedef std::future<ListFileVersionsOutcome> ListFileVersionsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListFileVersionsRequest&, const ListFileVersionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFileVersionsAsyncHandler;
			typedef Outcome<Error, Model::ListFilesResult> ListFilesOutcome;
			typedef std::future<ListFilesOutcome> ListFilesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListFilesRequest&, const ListFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFilesAsyncHandler;
			typedef Outcome<Error, Model::ListFoldersResult> ListFoldersOutcome;
			typedef std::future<ListFoldersOutcome> ListFoldersOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListFoldersRequest&, const ListFoldersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFoldersAsyncHandler;
			typedef Outcome<Error, Model::ListInstancesResult> ListInstancesOutcome;
			typedef std::future<ListInstancesOutcome> ListInstancesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListInstancesRequest&, const ListInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListMetaDBResult> ListMetaDBOutcome;
			typedef std::future<ListMetaDBOutcome> ListMetaDBOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListMetaDBRequest&, const ListMetaDBOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMetaDBAsyncHandler;
			typedef Outcome<Error, Model::ListNodeIOResult> ListNodeIOOutcome;
			typedef std::future<ListNodeIOOutcome> ListNodeIOOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListNodeIORequest&, const ListNodeIOOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNodeIOAsyncHandler;
			typedef Outcome<Error, Model::ListNodesResult> ListNodesOutcome;
			typedef std::future<ListNodesOutcome> ListNodesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListNodesRequest&, const ListNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNodesAsyncHandler;
			typedef Outcome<Error, Model::ListProgramTypeCountResult> ListProgramTypeCountOutcome;
			typedef std::future<ListProgramTypeCountOutcome> ListProgramTypeCountOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListProgramTypeCountRequest&, const ListProgramTypeCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProgramTypeCountAsyncHandler;
			typedef Outcome<Error, Model::ListProjectMembersResult> ListProjectMembersOutcome;
			typedef std::future<ListProjectMembersOutcome> ListProjectMembersOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListProjectMembersRequest&, const ListProjectMembersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProjectMembersAsyncHandler;
			typedef Outcome<Error, Model::ListProjectRolesResult> ListProjectRolesOutcome;
			typedef std::future<ListProjectRolesOutcome> ListProjectRolesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListProjectRolesRequest&, const ListProjectRolesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProjectRolesAsyncHandler;
			typedef Outcome<Error, Model::ListProjectsResult> ListProjectsOutcome;
			typedef std::future<ListProjectsOutcome> ListProjectsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListProjectsRequest&, const ListProjectsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProjectsAsyncHandler;
			typedef Outcome<Error, Model::ListQualityResultsByEntityResult> ListQualityResultsByEntityOutcome;
			typedef std::future<ListQualityResultsByEntityOutcome> ListQualityResultsByEntityOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListQualityResultsByEntityRequest&, const ListQualityResultsByEntityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListQualityResultsByEntityAsyncHandler;
			typedef Outcome<Error, Model::ListQualityResultsByRuleResult> ListQualityResultsByRuleOutcome;
			typedef std::future<ListQualityResultsByRuleOutcome> ListQualityResultsByRuleOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListQualityResultsByRuleRequest&, const ListQualityResultsByRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListQualityResultsByRuleAsyncHandler;
			typedef Outcome<Error, Model::ListQualityRulesResult> ListQualityRulesOutcome;
			typedef std::future<ListQualityRulesOutcome> ListQualityRulesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListQualityRulesRequest&, const ListQualityRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListQualityRulesAsyncHandler;
			typedef Outcome<Error, Model::ListRemindsResult> ListRemindsOutcome;
			typedef std::future<ListRemindsOutcome> ListRemindsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListRemindsRequest&, const ListRemindsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRemindsAsyncHandler;
			typedef Outcome<Error, Model::ListResourceGroupsResult> ListResourceGroupsOutcome;
			typedef std::future<ListResourceGroupsOutcome> ListResourceGroupsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListResourceGroupsRequest&, const ListResourceGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListResourceGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListTableLevelResult> ListTableLevelOutcome;
			typedef std::future<ListTableLevelOutcome> ListTableLevelOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListTableLevelRequest&, const ListTableLevelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTableLevelAsyncHandler;
			typedef Outcome<Error, Model::ListTableThemeResult> ListTableThemeOutcome;
			typedef std::future<ListTableThemeOutcome> ListTableThemeOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListTableThemeRequest&, const ListTableThemeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTableThemeAsyncHandler;
			typedef Outcome<Error, Model::ListTopicsResult> ListTopicsOutcome;
			typedef std::future<ListTopicsOutcome> ListTopicsOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ListTopicsRequest&, const ListTopicsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTopicsAsyncHandler;
			typedef Outcome<Error, Model::PublishDataServiceApiResult> PublishDataServiceApiOutcome;
			typedef std::future<PublishDataServiceApiOutcome> PublishDataServiceApiOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::PublishDataServiceApiRequest&, const PublishDataServiceApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PublishDataServiceApiAsyncHandler;
			typedef Outcome<Error, Model::RemoveProjectMemberFromRoleResult> RemoveProjectMemberFromRoleOutcome;
			typedef std::future<RemoveProjectMemberFromRoleOutcome> RemoveProjectMemberFromRoleOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::RemoveProjectMemberFromRoleRequest&, const RemoveProjectMemberFromRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveProjectMemberFromRoleAsyncHandler;
			typedef Outcome<Error, Model::RestartInstanceResult> RestartInstanceOutcome;
			typedef std::future<RestartInstanceOutcome> RestartInstanceOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::RestartInstanceRequest&, const RestartInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartInstanceAsyncHandler;
			typedef Outcome<Error, Model::ResumeInstanceResult> ResumeInstanceOutcome;
			typedef std::future<ResumeInstanceOutcome> ResumeInstanceOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::ResumeInstanceRequest&, const ResumeInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResumeInstanceAsyncHandler;
			typedef Outcome<Error, Model::RunTriggerNodeResult> RunTriggerNodeOutcome;
			typedef std::future<RunTriggerNodeOutcome> RunTriggerNodeOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::RunTriggerNodeRequest&, const RunTriggerNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunTriggerNodeAsyncHandler;
			typedef Outcome<Error, Model::SearchMetaTablesResult> SearchMetaTablesOutcome;
			typedef std::future<SearchMetaTablesOutcome> SearchMetaTablesOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::SearchMetaTablesRequest&, const SearchMetaTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchMetaTablesAsyncHandler;
			typedef Outcome<Error, Model::SearchNodesByOutputResult> SearchNodesByOutputOutcome;
			typedef std::future<SearchNodesByOutputOutcome> SearchNodesByOutputOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::SearchNodesByOutputRequest&, const SearchNodesByOutputOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchNodesByOutputAsyncHandler;
			typedef Outcome<Error, Model::SetSuccessInstanceResult> SetSuccessInstanceOutcome;
			typedef std::future<SetSuccessInstanceOutcome> SetSuccessInstanceOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::SetSuccessInstanceRequest&, const SetSuccessInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetSuccessInstanceAsyncHandler;
			typedef Outcome<Error, Model::StopInstanceResult> StopInstanceOutcome;
			typedef std::future<StopInstanceOutcome> StopInstanceOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::StopInstanceRequest&, const StopInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopInstanceAsyncHandler;
			typedef Outcome<Error, Model::SubmitFileResult> SubmitFileOutcome;
			typedef std::future<SubmitFileOutcome> SubmitFileOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::SubmitFileRequest&, const SubmitFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitFileAsyncHandler;
			typedef Outcome<Error, Model::SuspendInstanceResult> SuspendInstanceOutcome;
			typedef std::future<SuspendInstanceOutcome> SuspendInstanceOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::SuspendInstanceRequest&, const SuspendInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SuspendInstanceAsyncHandler;
			typedef Outcome<Error, Model::UpdateBusinessResult> UpdateBusinessOutcome;
			typedef std::future<UpdateBusinessOutcome> UpdateBusinessOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateBusinessRequest&, const UpdateBusinessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBusinessAsyncHandler;
			typedef Outcome<Error, Model::UpdateConnectionResult> UpdateConnectionOutcome;
			typedef std::future<UpdateConnectionOutcome> UpdateConnectionOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateConnectionRequest&, const UpdateConnectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateConnectionAsyncHandler;
			typedef Outcome<Error, Model::UpdateDataServiceApiResult> UpdateDataServiceApiOutcome;
			typedef std::future<UpdateDataServiceApiOutcome> UpdateDataServiceApiOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateDataServiceApiRequest&, const UpdateDataServiceApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDataServiceApiAsyncHandler;
			typedef Outcome<Error, Model::UpdateFileResult> UpdateFileOutcome;
			typedef std::future<UpdateFileOutcome> UpdateFileOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateFileRequest&, const UpdateFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFileAsyncHandler;
			typedef Outcome<Error, Model::UpdateFolderResult> UpdateFolderOutcome;
			typedef std::future<UpdateFolderOutcome> UpdateFolderOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateFolderRequest&, const UpdateFolderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFolderAsyncHandler;
			typedef Outcome<Error, Model::UpdateMetaCategoryResult> UpdateMetaCategoryOutcome;
			typedef std::future<UpdateMetaCategoryOutcome> UpdateMetaCategoryOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateMetaCategoryRequest&, const UpdateMetaCategoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMetaCategoryAsyncHandler;
			typedef Outcome<Error, Model::UpdateMetaTableResult> UpdateMetaTableOutcome;
			typedef std::future<UpdateMetaTableOutcome> UpdateMetaTableOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateMetaTableRequest&, const UpdateMetaTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMetaTableAsyncHandler;
			typedef Outcome<Error, Model::UpdateMetaTableIntroWikiResult> UpdateMetaTableIntroWikiOutcome;
			typedef std::future<UpdateMetaTableIntroWikiOutcome> UpdateMetaTableIntroWikiOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateMetaTableIntroWikiRequest&, const UpdateMetaTableIntroWikiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMetaTableIntroWikiAsyncHandler;
			typedef Outcome<Error, Model::UpdateQualityFollowerResult> UpdateQualityFollowerOutcome;
			typedef std::future<UpdateQualityFollowerOutcome> UpdateQualityFollowerOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateQualityFollowerRequest&, const UpdateQualityFollowerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateQualityFollowerAsyncHandler;
			typedef Outcome<Error, Model::UpdateQualityRuleResult> UpdateQualityRuleOutcome;
			typedef std::future<UpdateQualityRuleOutcome> UpdateQualityRuleOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateQualityRuleRequest&, const UpdateQualityRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateQualityRuleAsyncHandler;
			typedef Outcome<Error, Model::UpdateRemindResult> UpdateRemindOutcome;
			typedef std::future<UpdateRemindOutcome> UpdateRemindOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateRemindRequest&, const UpdateRemindOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRemindAsyncHandler;
			typedef Outcome<Error, Model::UpdateTableResult> UpdateTableOutcome;
			typedef std::future<UpdateTableOutcome> UpdateTableOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateTableRequest&, const UpdateTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTableAsyncHandler;
			typedef Outcome<Error, Model::UpdateTableLevelResult> UpdateTableLevelOutcome;
			typedef std::future<UpdateTableLevelOutcome> UpdateTableLevelOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateTableLevelRequest&, const UpdateTableLevelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTableLevelAsyncHandler;
			typedef Outcome<Error, Model::UpdateTableModelInfoResult> UpdateTableModelInfoOutcome;
			typedef std::future<UpdateTableModelInfoOutcome> UpdateTableModelInfoOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateTableModelInfoRequest&, const UpdateTableModelInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTableModelInfoAsyncHandler;
			typedef Outcome<Error, Model::UpdateTableThemeResult> UpdateTableThemeOutcome;
			typedef std::future<UpdateTableThemeOutcome> UpdateTableThemeOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateTableThemeRequest&, const UpdateTableThemeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTableThemeAsyncHandler;
			typedef Outcome<Error, Model::UpdateUdfFileResult> UpdateUdfFileOutcome;
			typedef std::future<UpdateUdfFileOutcome> UpdateUdfFileOutcomeCallable;
			typedef std::function<void(const Dataworks_publicClient*, const Model::UpdateUdfFileRequest&, const UpdateUdfFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUdfFileAsyncHandler;

			Dataworks_publicClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Dataworks_publicClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Dataworks_publicClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Dataworks_publicClient();
			AbolishDataServiceApiOutcome abolishDataServiceApi(const Model::AbolishDataServiceApiRequest &request)const;
			void abolishDataServiceApiAsync(const Model::AbolishDataServiceApiRequest& request, const AbolishDataServiceApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AbolishDataServiceApiOutcomeCallable abolishDataServiceApiCallable(const Model::AbolishDataServiceApiRequest& request) const;
			AddProjectMemberToRoleOutcome addProjectMemberToRole(const Model::AddProjectMemberToRoleRequest &request)const;
			void addProjectMemberToRoleAsync(const Model::AddProjectMemberToRoleRequest& request, const AddProjectMemberToRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddProjectMemberToRoleOutcomeCallable addProjectMemberToRoleCallable(const Model::AddProjectMemberToRoleRequest& request) const;
			AddToMetaCategoryOutcome addToMetaCategory(const Model::AddToMetaCategoryRequest &request)const;
			void addToMetaCategoryAsync(const Model::AddToMetaCategoryRequest& request, const AddToMetaCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddToMetaCategoryOutcomeCallable addToMetaCategoryCallable(const Model::AddToMetaCategoryRequest& request) const;
			CheckMetaPartitionOutcome checkMetaPartition(const Model::CheckMetaPartitionRequest &request)const;
			void checkMetaPartitionAsync(const Model::CheckMetaPartitionRequest& request, const CheckMetaPartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckMetaPartitionOutcomeCallable checkMetaPartitionCallable(const Model::CheckMetaPartitionRequest& request) const;
			CheckMetaTableOutcome checkMetaTable(const Model::CheckMetaTableRequest &request)const;
			void checkMetaTableAsync(const Model::CheckMetaTableRequest& request, const CheckMetaTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckMetaTableOutcomeCallable checkMetaTableCallable(const Model::CheckMetaTableRequest& request) const;
			CreateBusinessOutcome createBusiness(const Model::CreateBusinessRequest &request)const;
			void createBusinessAsync(const Model::CreateBusinessRequest& request, const CreateBusinessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBusinessOutcomeCallable createBusinessCallable(const Model::CreateBusinessRequest& request) const;
			CreateConnectionOutcome createConnection(const Model::CreateConnectionRequest &request)const;
			void createConnectionAsync(const Model::CreateConnectionRequest& request, const CreateConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateConnectionOutcomeCallable createConnectionCallable(const Model::CreateConnectionRequest& request) const;
			CreateDagComplementOutcome createDagComplement(const Model::CreateDagComplementRequest &request)const;
			void createDagComplementAsync(const Model::CreateDagComplementRequest& request, const CreateDagComplementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDagComplementOutcomeCallable createDagComplementCallable(const Model::CreateDagComplementRequest& request) const;
			CreateDagTestOutcome createDagTest(const Model::CreateDagTestRequest &request)const;
			void createDagTestAsync(const Model::CreateDagTestRequest& request, const CreateDagTestAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDagTestOutcomeCallable createDagTestCallable(const Model::CreateDagTestRequest& request) const;
			CreateDataServiceApiOutcome createDataServiceApi(const Model::CreateDataServiceApiRequest &request)const;
			void createDataServiceApiAsync(const Model::CreateDataServiceApiRequest& request, const CreateDataServiceApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDataServiceApiOutcomeCallable createDataServiceApiCallable(const Model::CreateDataServiceApiRequest& request) const;
			CreateDataServiceApiAuthorityOutcome createDataServiceApiAuthority(const Model::CreateDataServiceApiAuthorityRequest &request)const;
			void createDataServiceApiAuthorityAsync(const Model::CreateDataServiceApiAuthorityRequest& request, const CreateDataServiceApiAuthorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDataServiceApiAuthorityOutcomeCallable createDataServiceApiAuthorityCallable(const Model::CreateDataServiceApiAuthorityRequest& request) const;
			CreateDataServiceFolderOutcome createDataServiceFolder(const Model::CreateDataServiceFolderRequest &request)const;
			void createDataServiceFolderAsync(const Model::CreateDataServiceFolderRequest& request, const CreateDataServiceFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDataServiceFolderOutcomeCallable createDataServiceFolderCallable(const Model::CreateDataServiceFolderRequest& request) const;
			CreateDataServiceGroupOutcome createDataServiceGroup(const Model::CreateDataServiceGroupRequest &request)const;
			void createDataServiceGroupAsync(const Model::CreateDataServiceGroupRequest& request, const CreateDataServiceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDataServiceGroupOutcomeCallable createDataServiceGroupCallable(const Model::CreateDataServiceGroupRequest& request) const;
			CreateFileOutcome createFile(const Model::CreateFileRequest &request)const;
			void createFileAsync(const Model::CreateFileRequest& request, const CreateFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFileOutcomeCallable createFileCallable(const Model::CreateFileRequest& request) const;
			CreateFolderOutcome createFolder(const Model::CreateFolderRequest &request)const;
			void createFolderAsync(const Model::CreateFolderRequest& request, const CreateFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFolderOutcomeCallable createFolderCallable(const Model::CreateFolderRequest& request) const;
			CreateManualDagOutcome createManualDag(const Model::CreateManualDagRequest &request)const;
			void createManualDagAsync(const Model::CreateManualDagRequest& request, const CreateManualDagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateManualDagOutcomeCallable createManualDagCallable(const Model::CreateManualDagRequest& request) const;
			CreateMetaCategoryOutcome createMetaCategory(const Model::CreateMetaCategoryRequest &request)const;
			void createMetaCategoryAsync(const Model::CreateMetaCategoryRequest& request, const CreateMetaCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMetaCategoryOutcomeCallable createMetaCategoryCallable(const Model::CreateMetaCategoryRequest& request) const;
			CreateProjectMemberOutcome createProjectMember(const Model::CreateProjectMemberRequest &request)const;
			void createProjectMemberAsync(const Model::CreateProjectMemberRequest& request, const CreateProjectMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateProjectMemberOutcomeCallable createProjectMemberCallable(const Model::CreateProjectMemberRequest& request) const;
			CreateQualityEntityOutcome createQualityEntity(const Model::CreateQualityEntityRequest &request)const;
			void createQualityEntityAsync(const Model::CreateQualityEntityRequest& request, const CreateQualityEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateQualityEntityOutcomeCallable createQualityEntityCallable(const Model::CreateQualityEntityRequest& request) const;
			CreateQualityFollowerOutcome createQualityFollower(const Model::CreateQualityFollowerRequest &request)const;
			void createQualityFollowerAsync(const Model::CreateQualityFollowerRequest& request, const CreateQualityFollowerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateQualityFollowerOutcomeCallable createQualityFollowerCallable(const Model::CreateQualityFollowerRequest& request) const;
			CreateQualityRelativeNodeOutcome createQualityRelativeNode(const Model::CreateQualityRelativeNodeRequest &request)const;
			void createQualityRelativeNodeAsync(const Model::CreateQualityRelativeNodeRequest& request, const CreateQualityRelativeNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateQualityRelativeNodeOutcomeCallable createQualityRelativeNodeCallable(const Model::CreateQualityRelativeNodeRequest& request) const;
			CreateQualityRuleOutcome createQualityRule(const Model::CreateQualityRuleRequest &request)const;
			void createQualityRuleAsync(const Model::CreateQualityRuleRequest& request, const CreateQualityRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateQualityRuleOutcomeCallable createQualityRuleCallable(const Model::CreateQualityRuleRequest& request) const;
			CreateRemindOutcome createRemind(const Model::CreateRemindRequest &request)const;
			void createRemindAsync(const Model::CreateRemindRequest& request, const CreateRemindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRemindOutcomeCallable createRemindCallable(const Model::CreateRemindRequest& request) const;
			CreateTableOutcome createTable(const Model::CreateTableRequest &request)const;
			void createTableAsync(const Model::CreateTableRequest& request, const CreateTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTableOutcomeCallable createTableCallable(const Model::CreateTableRequest& request) const;
			CreateTableLevelOutcome createTableLevel(const Model::CreateTableLevelRequest &request)const;
			void createTableLevelAsync(const Model::CreateTableLevelRequest& request, const CreateTableLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTableLevelOutcomeCallable createTableLevelCallable(const Model::CreateTableLevelRequest& request) const;
			CreateTableThemeOutcome createTableTheme(const Model::CreateTableThemeRequest &request)const;
			void createTableThemeAsync(const Model::CreateTableThemeRequest& request, const CreateTableThemeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTableThemeOutcomeCallable createTableThemeCallable(const Model::CreateTableThemeRequest& request) const;
			CreateUdfFileOutcome createUdfFile(const Model::CreateUdfFileRequest &request)const;
			void createUdfFileAsync(const Model::CreateUdfFileRequest& request, const CreateUdfFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUdfFileOutcomeCallable createUdfFileCallable(const Model::CreateUdfFileRequest& request) const;
			DeleteBusinessOutcome deleteBusiness(const Model::DeleteBusinessRequest &request)const;
			void deleteBusinessAsync(const Model::DeleteBusinessRequest& request, const DeleteBusinessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBusinessOutcomeCallable deleteBusinessCallable(const Model::DeleteBusinessRequest& request) const;
			DeleteConnectionOutcome deleteConnection(const Model::DeleteConnectionRequest &request)const;
			void deleteConnectionAsync(const Model::DeleteConnectionRequest& request, const DeleteConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteConnectionOutcomeCallable deleteConnectionCallable(const Model::DeleteConnectionRequest& request) const;
			DeleteDataServiceApiOutcome deleteDataServiceApi(const Model::DeleteDataServiceApiRequest &request)const;
			void deleteDataServiceApiAsync(const Model::DeleteDataServiceApiRequest& request, const DeleteDataServiceApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDataServiceApiOutcomeCallable deleteDataServiceApiCallable(const Model::DeleteDataServiceApiRequest& request) const;
			DeleteDataServiceApiAuthorityOutcome deleteDataServiceApiAuthority(const Model::DeleteDataServiceApiAuthorityRequest &request)const;
			void deleteDataServiceApiAuthorityAsync(const Model::DeleteDataServiceApiAuthorityRequest& request, const DeleteDataServiceApiAuthorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDataServiceApiAuthorityOutcomeCallable deleteDataServiceApiAuthorityCallable(const Model::DeleteDataServiceApiAuthorityRequest& request) const;
			DeleteFileOutcome deleteFile(const Model::DeleteFileRequest &request)const;
			void deleteFileAsync(const Model::DeleteFileRequest& request, const DeleteFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFileOutcomeCallable deleteFileCallable(const Model::DeleteFileRequest& request) const;
			DeleteFolderOutcome deleteFolder(const Model::DeleteFolderRequest &request)const;
			void deleteFolderAsync(const Model::DeleteFolderRequest& request, const DeleteFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFolderOutcomeCallable deleteFolderCallable(const Model::DeleteFolderRequest& request) const;
			DeleteFromMetaCategoryOutcome deleteFromMetaCategory(const Model::DeleteFromMetaCategoryRequest &request)const;
			void deleteFromMetaCategoryAsync(const Model::DeleteFromMetaCategoryRequest& request, const DeleteFromMetaCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFromMetaCategoryOutcomeCallable deleteFromMetaCategoryCallable(const Model::DeleteFromMetaCategoryRequest& request) const;
			DeleteMetaCategoryOutcome deleteMetaCategory(const Model::DeleteMetaCategoryRequest &request)const;
			void deleteMetaCategoryAsync(const Model::DeleteMetaCategoryRequest& request, const DeleteMetaCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMetaCategoryOutcomeCallable deleteMetaCategoryCallable(const Model::DeleteMetaCategoryRequest& request) const;
			DeleteProjectMemberOutcome deleteProjectMember(const Model::DeleteProjectMemberRequest &request)const;
			void deleteProjectMemberAsync(const Model::DeleteProjectMemberRequest& request, const DeleteProjectMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteProjectMemberOutcomeCallable deleteProjectMemberCallable(const Model::DeleteProjectMemberRequest& request) const;
			DeleteQualityEntityOutcome deleteQualityEntity(const Model::DeleteQualityEntityRequest &request)const;
			void deleteQualityEntityAsync(const Model::DeleteQualityEntityRequest& request, const DeleteQualityEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteQualityEntityOutcomeCallable deleteQualityEntityCallable(const Model::DeleteQualityEntityRequest& request) const;
			DeleteQualityFollowerOutcome deleteQualityFollower(const Model::DeleteQualityFollowerRequest &request)const;
			void deleteQualityFollowerAsync(const Model::DeleteQualityFollowerRequest& request, const DeleteQualityFollowerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteQualityFollowerOutcomeCallable deleteQualityFollowerCallable(const Model::DeleteQualityFollowerRequest& request) const;
			DeleteQualityRelativeNodeOutcome deleteQualityRelativeNode(const Model::DeleteQualityRelativeNodeRequest &request)const;
			void deleteQualityRelativeNodeAsync(const Model::DeleteQualityRelativeNodeRequest& request, const DeleteQualityRelativeNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteQualityRelativeNodeOutcomeCallable deleteQualityRelativeNodeCallable(const Model::DeleteQualityRelativeNodeRequest& request) const;
			DeleteQualityRuleOutcome deleteQualityRule(const Model::DeleteQualityRuleRequest &request)const;
			void deleteQualityRuleAsync(const Model::DeleteQualityRuleRequest& request, const DeleteQualityRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteQualityRuleOutcomeCallable deleteQualityRuleCallable(const Model::DeleteQualityRuleRequest& request) const;
			DeleteRemindOutcome deleteRemind(const Model::DeleteRemindRequest &request)const;
			void deleteRemindAsync(const Model::DeleteRemindRequest& request, const DeleteRemindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRemindOutcomeCallable deleteRemindCallable(const Model::DeleteRemindRequest& request) const;
			DeleteTableOutcome deleteTable(const Model::DeleteTableRequest &request)const;
			void deleteTableAsync(const Model::DeleteTableRequest& request, const DeleteTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTableOutcomeCallable deleteTableCallable(const Model::DeleteTableRequest& request) const;
			DeleteTableLevelOutcome deleteTableLevel(const Model::DeleteTableLevelRequest &request)const;
			void deleteTableLevelAsync(const Model::DeleteTableLevelRequest& request, const DeleteTableLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTableLevelOutcomeCallable deleteTableLevelCallable(const Model::DeleteTableLevelRequest& request) const;
			DeleteTableThemeOutcome deleteTableTheme(const Model::DeleteTableThemeRequest &request)const;
			void deleteTableThemeAsync(const Model::DeleteTableThemeRequest& request, const DeleteTableThemeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTableThemeOutcomeCallable deleteTableThemeCallable(const Model::DeleteTableThemeRequest& request) const;
			DeployFileOutcome deployFile(const Model::DeployFileRequest &request)const;
			void deployFileAsync(const Model::DeployFileRequest& request, const DeployFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeployFileOutcomeCallable deployFileCallable(const Model::DeployFileRequest& request) const;
			EstablishRelationTableToBusinessOutcome establishRelationTableToBusiness(const Model::EstablishRelationTableToBusinessRequest &request)const;
			void establishRelationTableToBusinessAsync(const Model::EstablishRelationTableToBusinessRequest& request, const EstablishRelationTableToBusinessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EstablishRelationTableToBusinessOutcomeCallable establishRelationTableToBusinessCallable(const Model::EstablishRelationTableToBusinessRequest& request) const;
			GetBaselineConfigOutcome getBaselineConfig(const Model::GetBaselineConfigRequest &request)const;
			void getBaselineConfigAsync(const Model::GetBaselineConfigRequest& request, const GetBaselineConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBaselineConfigOutcomeCallable getBaselineConfigCallable(const Model::GetBaselineConfigRequest& request) const;
			GetBaselineKeyPathOutcome getBaselineKeyPath(const Model::GetBaselineKeyPathRequest &request)const;
			void getBaselineKeyPathAsync(const Model::GetBaselineKeyPathRequest& request, const GetBaselineKeyPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBaselineKeyPathOutcomeCallable getBaselineKeyPathCallable(const Model::GetBaselineKeyPathRequest& request) const;
			GetBaselineStatusOutcome getBaselineStatus(const Model::GetBaselineStatusRequest &request)const;
			void getBaselineStatusAsync(const Model::GetBaselineStatusRequest& request, const GetBaselineStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBaselineStatusOutcomeCallable getBaselineStatusCallable(const Model::GetBaselineStatusRequest& request) const;
			GetBusinessOutcome getBusiness(const Model::GetBusinessRequest &request)const;
			void getBusinessAsync(const Model::GetBusinessRequest& request, const GetBusinessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBusinessOutcomeCallable getBusinessCallable(const Model::GetBusinessRequest& request) const;
			GetDDLJobStatusOutcome getDDLJobStatus(const Model::GetDDLJobStatusRequest &request)const;
			void getDDLJobStatusAsync(const Model::GetDDLJobStatusRequest& request, const GetDDLJobStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDDLJobStatusOutcomeCallable getDDLJobStatusCallable(const Model::GetDDLJobStatusRequest& request) const;
			GetDagOutcome getDag(const Model::GetDagRequest &request)const;
			void getDagAsync(const Model::GetDagRequest& request, const GetDagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDagOutcomeCallable getDagCallable(const Model::GetDagRequest& request) const;
			GetDataServiceApiOutcome getDataServiceApi(const Model::GetDataServiceApiRequest &request)const;
			void getDataServiceApiAsync(const Model::GetDataServiceApiRequest& request, const GetDataServiceApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDataServiceApiOutcomeCallable getDataServiceApiCallable(const Model::GetDataServiceApiRequest& request) const;
			GetDataServiceApplicationOutcome getDataServiceApplication(const Model::GetDataServiceApplicationRequest &request)const;
			void getDataServiceApplicationAsync(const Model::GetDataServiceApplicationRequest& request, const GetDataServiceApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDataServiceApplicationOutcomeCallable getDataServiceApplicationCallable(const Model::GetDataServiceApplicationRequest& request) const;
			GetDataServiceFolderOutcome getDataServiceFolder(const Model::GetDataServiceFolderRequest &request)const;
			void getDataServiceFolderAsync(const Model::GetDataServiceFolderRequest& request, const GetDataServiceFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDataServiceFolderOutcomeCallable getDataServiceFolderCallable(const Model::GetDataServiceFolderRequest& request) const;
			GetDataServiceGroupOutcome getDataServiceGroup(const Model::GetDataServiceGroupRequest &request)const;
			void getDataServiceGroupAsync(const Model::GetDataServiceGroupRequest& request, const GetDataServiceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDataServiceGroupOutcomeCallable getDataServiceGroupCallable(const Model::GetDataServiceGroupRequest& request) const;
			GetDataServicePublishedApiOutcome getDataServicePublishedApi(const Model::GetDataServicePublishedApiRequest &request)const;
			void getDataServicePublishedApiAsync(const Model::GetDataServicePublishedApiRequest& request, const GetDataServicePublishedApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDataServicePublishedApiOutcomeCallable getDataServicePublishedApiCallable(const Model::GetDataServicePublishedApiRequest& request) const;
			GetDeploymentOutcome getDeployment(const Model::GetDeploymentRequest &request)const;
			void getDeploymentAsync(const Model::GetDeploymentRequest& request, const GetDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDeploymentOutcomeCallable getDeploymentCallable(const Model::GetDeploymentRequest& request) const;
			GetFileOutcome getFile(const Model::GetFileRequest &request)const;
			void getFileAsync(const Model::GetFileRequest& request, const GetFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFileOutcomeCallable getFileCallable(const Model::GetFileRequest& request) const;
			GetFileVersionOutcome getFileVersion(const Model::GetFileVersionRequest &request)const;
			void getFileVersionAsync(const Model::GetFileVersionRequest& request, const GetFileVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFileVersionOutcomeCallable getFileVersionCallable(const Model::GetFileVersionRequest& request) const;
			GetFolderOutcome getFolder(const Model::GetFolderRequest &request)const;
			void getFolderAsync(const Model::GetFolderRequest& request, const GetFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFolderOutcomeCallable getFolderCallable(const Model::GetFolderRequest& request) const;
			GetInstanceOutcome getInstance(const Model::GetInstanceRequest &request)const;
			void getInstanceAsync(const Model::GetInstanceRequest& request, const GetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceOutcomeCallable getInstanceCallable(const Model::GetInstanceRequest& request) const;
			GetInstanceConsumeTimeRankOutcome getInstanceConsumeTimeRank(const Model::GetInstanceConsumeTimeRankRequest &request)const;
			void getInstanceConsumeTimeRankAsync(const Model::GetInstanceConsumeTimeRankRequest& request, const GetInstanceConsumeTimeRankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceConsumeTimeRankOutcomeCallable getInstanceConsumeTimeRankCallable(const Model::GetInstanceConsumeTimeRankRequest& request) const;
			GetInstanceCountTrendOutcome getInstanceCountTrend(const Model::GetInstanceCountTrendRequest &request)const;
			void getInstanceCountTrendAsync(const Model::GetInstanceCountTrendRequest& request, const GetInstanceCountTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceCountTrendOutcomeCallable getInstanceCountTrendCallable(const Model::GetInstanceCountTrendRequest& request) const;
			GetInstanceErrorRankOutcome getInstanceErrorRank(const Model::GetInstanceErrorRankRequest &request)const;
			void getInstanceErrorRankAsync(const Model::GetInstanceErrorRankRequest& request, const GetInstanceErrorRankAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceErrorRankOutcomeCallable getInstanceErrorRankCallable(const Model::GetInstanceErrorRankRequest& request) const;
			GetInstanceLogOutcome getInstanceLog(const Model::GetInstanceLogRequest &request)const;
			void getInstanceLogAsync(const Model::GetInstanceLogRequest& request, const GetInstanceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceLogOutcomeCallable getInstanceLogCallable(const Model::GetInstanceLogRequest& request) const;
			GetInstanceStatusCountOutcome getInstanceStatusCount(const Model::GetInstanceStatusCountRequest &request)const;
			void getInstanceStatusCountAsync(const Model::GetInstanceStatusCountRequest& request, const GetInstanceStatusCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceStatusCountOutcomeCallable getInstanceStatusCountCallable(const Model::GetInstanceStatusCountRequest& request) const;
			GetManualDagInstancesOutcome getManualDagInstances(const Model::GetManualDagInstancesRequest &request)const;
			void getManualDagInstancesAsync(const Model::GetManualDagInstancesRequest& request, const GetManualDagInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetManualDagInstancesOutcomeCallable getManualDagInstancesCallable(const Model::GetManualDagInstancesRequest& request) const;
			GetMetaCategoryOutcome getMetaCategory(const Model::GetMetaCategoryRequest &request)const;
			void getMetaCategoryAsync(const Model::GetMetaCategoryRequest& request, const GetMetaCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMetaCategoryOutcomeCallable getMetaCategoryCallable(const Model::GetMetaCategoryRequest& request) const;
			GetMetaColumnLineageOutcome getMetaColumnLineage(const Model::GetMetaColumnLineageRequest &request)const;
			void getMetaColumnLineageAsync(const Model::GetMetaColumnLineageRequest& request, const GetMetaColumnLineageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMetaColumnLineageOutcomeCallable getMetaColumnLineageCallable(const Model::GetMetaColumnLineageRequest& request) const;
			GetMetaDBInfoOutcome getMetaDBInfo(const Model::GetMetaDBInfoRequest &request)const;
			void getMetaDBInfoAsync(const Model::GetMetaDBInfoRequest& request, const GetMetaDBInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMetaDBInfoOutcomeCallable getMetaDBInfoCallable(const Model::GetMetaDBInfoRequest& request) const;
			GetMetaDBTableListOutcome getMetaDBTableList(const Model::GetMetaDBTableListRequest &request)const;
			void getMetaDBTableListAsync(const Model::GetMetaDBTableListRequest& request, const GetMetaDBTableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMetaDBTableListOutcomeCallable getMetaDBTableListCallable(const Model::GetMetaDBTableListRequest& request) const;
			GetMetaTableBasicInfoOutcome getMetaTableBasicInfo(const Model::GetMetaTableBasicInfoRequest &request)const;
			void getMetaTableBasicInfoAsync(const Model::GetMetaTableBasicInfoRequest& request, const GetMetaTableBasicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMetaTableBasicInfoOutcomeCallable getMetaTableBasicInfoCallable(const Model::GetMetaTableBasicInfoRequest& request) const;
			GetMetaTableChangeLogOutcome getMetaTableChangeLog(const Model::GetMetaTableChangeLogRequest &request)const;
			void getMetaTableChangeLogAsync(const Model::GetMetaTableChangeLogRequest& request, const GetMetaTableChangeLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMetaTableChangeLogOutcomeCallable getMetaTableChangeLogCallable(const Model::GetMetaTableChangeLogRequest& request) const;
			GetMetaTableColumnOutcome getMetaTableColumn(const Model::GetMetaTableColumnRequest &request)const;
			void getMetaTableColumnAsync(const Model::GetMetaTableColumnRequest& request, const GetMetaTableColumnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMetaTableColumnOutcomeCallable getMetaTableColumnCallable(const Model::GetMetaTableColumnRequest& request) const;
			GetMetaTableFullInfoOutcome getMetaTableFullInfo(const Model::GetMetaTableFullInfoRequest &request)const;
			void getMetaTableFullInfoAsync(const Model::GetMetaTableFullInfoRequest& request, const GetMetaTableFullInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMetaTableFullInfoOutcomeCallable getMetaTableFullInfoCallable(const Model::GetMetaTableFullInfoRequest& request) const;
			GetMetaTableIntroWikiOutcome getMetaTableIntroWiki(const Model::GetMetaTableIntroWikiRequest &request)const;
			void getMetaTableIntroWikiAsync(const Model::GetMetaTableIntroWikiRequest& request, const GetMetaTableIntroWikiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMetaTableIntroWikiOutcomeCallable getMetaTableIntroWikiCallable(const Model::GetMetaTableIntroWikiRequest& request) const;
			GetMetaTableLineageOutcome getMetaTableLineage(const Model::GetMetaTableLineageRequest &request)const;
			void getMetaTableLineageAsync(const Model::GetMetaTableLineageRequest& request, const GetMetaTableLineageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMetaTableLineageOutcomeCallable getMetaTableLineageCallable(const Model::GetMetaTableLineageRequest& request) const;
			GetMetaTableListByCategoryOutcome getMetaTableListByCategory(const Model::GetMetaTableListByCategoryRequest &request)const;
			void getMetaTableListByCategoryAsync(const Model::GetMetaTableListByCategoryRequest& request, const GetMetaTableListByCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMetaTableListByCategoryOutcomeCallable getMetaTableListByCategoryCallable(const Model::GetMetaTableListByCategoryRequest& request) const;
			GetMetaTableOutputOutcome getMetaTableOutput(const Model::GetMetaTableOutputRequest &request)const;
			void getMetaTableOutputAsync(const Model::GetMetaTableOutputRequest& request, const GetMetaTableOutputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMetaTableOutputOutcomeCallable getMetaTableOutputCallable(const Model::GetMetaTableOutputRequest& request) const;
			GetMetaTablePartitionOutcome getMetaTablePartition(const Model::GetMetaTablePartitionRequest &request)const;
			void getMetaTablePartitionAsync(const Model::GetMetaTablePartitionRequest& request, const GetMetaTablePartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMetaTablePartitionOutcomeCallable getMetaTablePartitionCallable(const Model::GetMetaTablePartitionRequest& request) const;
			GetNodeOutcome getNode(const Model::GetNodeRequest &request)const;
			void getNodeAsync(const Model::GetNodeRequest& request, const GetNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNodeOutcomeCallable getNodeCallable(const Model::GetNodeRequest& request) const;
			GetNodeCodeOutcome getNodeCode(const Model::GetNodeCodeRequest &request)const;
			void getNodeCodeAsync(const Model::GetNodeCodeRequest& request, const GetNodeCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNodeCodeOutcomeCallable getNodeCodeCallable(const Model::GetNodeCodeRequest& request) const;
			GetNodeOnBaselineOutcome getNodeOnBaseline(const Model::GetNodeOnBaselineRequest &request)const;
			void getNodeOnBaselineAsync(const Model::GetNodeOnBaselineRequest& request, const GetNodeOnBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNodeOnBaselineOutcomeCallable getNodeOnBaselineCallable(const Model::GetNodeOnBaselineRequest& request) const;
			GetNodeTypeListInfoOutcome getNodeTypeListInfo(const Model::GetNodeTypeListInfoRequest &request)const;
			void getNodeTypeListInfoAsync(const Model::GetNodeTypeListInfoRequest& request, const GetNodeTypeListInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNodeTypeListInfoOutcomeCallable getNodeTypeListInfoCallable(const Model::GetNodeTypeListInfoRequest& request) const;
			GetProjectDetailOutcome getProjectDetail(const Model::GetProjectDetailRequest &request)const;
			void getProjectDetailAsync(const Model::GetProjectDetailRequest& request, const GetProjectDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetProjectDetailOutcomeCallable getProjectDetailCallable(const Model::GetProjectDetailRequest& request) const;
			GetQualityEntityOutcome getQualityEntity(const Model::GetQualityEntityRequest &request)const;
			void getQualityEntityAsync(const Model::GetQualityEntityRequest& request, const GetQualityEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetQualityEntityOutcomeCallable getQualityEntityCallable(const Model::GetQualityEntityRequest& request) const;
			GetQualityFollowerOutcome getQualityFollower(const Model::GetQualityFollowerRequest &request)const;
			void getQualityFollowerAsync(const Model::GetQualityFollowerRequest& request, const GetQualityFollowerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetQualityFollowerOutcomeCallable getQualityFollowerCallable(const Model::GetQualityFollowerRequest& request) const;
			GetQualityRuleOutcome getQualityRule(const Model::GetQualityRuleRequest &request)const;
			void getQualityRuleAsync(const Model::GetQualityRuleRequest& request, const GetQualityRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetQualityRuleOutcomeCallable getQualityRuleCallable(const Model::GetQualityRuleRequest& request) const;
			GetRemindOutcome getRemind(const Model::GetRemindRequest &request)const;
			void getRemindAsync(const Model::GetRemindRequest& request, const GetRemindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRemindOutcomeCallable getRemindCallable(const Model::GetRemindRequest& request) const;
			GetSuccessInstanceTrendOutcome getSuccessInstanceTrend(const Model::GetSuccessInstanceTrendRequest &request)const;
			void getSuccessInstanceTrendAsync(const Model::GetSuccessInstanceTrendRequest& request, const GetSuccessInstanceTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSuccessInstanceTrendOutcomeCallable getSuccessInstanceTrendCallable(const Model::GetSuccessInstanceTrendRequest& request) const;
			GetTopicOutcome getTopic(const Model::GetTopicRequest &request)const;
			void getTopicAsync(const Model::GetTopicRequest& request, const GetTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTopicOutcomeCallable getTopicCallable(const Model::GetTopicRequest& request) const;
			GetTopicInfluenceOutcome getTopicInfluence(const Model::GetTopicInfluenceRequest &request)const;
			void getTopicInfluenceAsync(const Model::GetTopicInfluenceRequest& request, const GetTopicInfluenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTopicInfluenceOutcomeCallable getTopicInfluenceCallable(const Model::GetTopicInfluenceRequest& request) const;
			ListAlertMessagesOutcome listAlertMessages(const Model::ListAlertMessagesRequest &request)const;
			void listAlertMessagesAsync(const Model::ListAlertMessagesRequest& request, const ListAlertMessagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAlertMessagesOutcomeCallable listAlertMessagesCallable(const Model::ListAlertMessagesRequest& request) const;
			ListBaselineConfigsOutcome listBaselineConfigs(const Model::ListBaselineConfigsRequest &request)const;
			void listBaselineConfigsAsync(const Model::ListBaselineConfigsRequest& request, const ListBaselineConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBaselineConfigsOutcomeCallable listBaselineConfigsCallable(const Model::ListBaselineConfigsRequest& request) const;
			ListBaselineStatusesOutcome listBaselineStatuses(const Model::ListBaselineStatusesRequest &request)const;
			void listBaselineStatusesAsync(const Model::ListBaselineStatusesRequest& request, const ListBaselineStatusesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBaselineStatusesOutcomeCallable listBaselineStatusesCallable(const Model::ListBaselineStatusesRequest& request) const;
			ListBusinessOutcome listBusiness(const Model::ListBusinessRequest &request)const;
			void listBusinessAsync(const Model::ListBusinessRequest& request, const ListBusinessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBusinessOutcomeCallable listBusinessCallable(const Model::ListBusinessRequest& request) const;
			ListCalcEnginesOutcome listCalcEngines(const Model::ListCalcEnginesRequest &request)const;
			void listCalcEnginesAsync(const Model::ListCalcEnginesRequest& request, const ListCalcEnginesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCalcEnginesOutcomeCallable listCalcEnginesCallable(const Model::ListCalcEnginesRequest& request) const;
			ListConnectionsOutcome listConnections(const Model::ListConnectionsRequest &request)const;
			void listConnectionsAsync(const Model::ListConnectionsRequest& request, const ListConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListConnectionsOutcomeCallable listConnectionsCallable(const Model::ListConnectionsRequest& request) const;
			ListDataServiceApiAuthoritiesOutcome listDataServiceApiAuthorities(const Model::ListDataServiceApiAuthoritiesRequest &request)const;
			void listDataServiceApiAuthoritiesAsync(const Model::ListDataServiceApiAuthoritiesRequest& request, const ListDataServiceApiAuthoritiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataServiceApiAuthoritiesOutcomeCallable listDataServiceApiAuthoritiesCallable(const Model::ListDataServiceApiAuthoritiesRequest& request) const;
			ListDataServiceApisOutcome listDataServiceApis(const Model::ListDataServiceApisRequest &request)const;
			void listDataServiceApisAsync(const Model::ListDataServiceApisRequest& request, const ListDataServiceApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataServiceApisOutcomeCallable listDataServiceApisCallable(const Model::ListDataServiceApisRequest& request) const;
			ListDataServiceApplicationsOutcome listDataServiceApplications(const Model::ListDataServiceApplicationsRequest &request)const;
			void listDataServiceApplicationsAsync(const Model::ListDataServiceApplicationsRequest& request, const ListDataServiceApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataServiceApplicationsOutcomeCallable listDataServiceApplicationsCallable(const Model::ListDataServiceApplicationsRequest& request) const;
			ListDataServiceAuthorizedApisOutcome listDataServiceAuthorizedApis(const Model::ListDataServiceAuthorizedApisRequest &request)const;
			void listDataServiceAuthorizedApisAsync(const Model::ListDataServiceAuthorizedApisRequest& request, const ListDataServiceAuthorizedApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataServiceAuthorizedApisOutcomeCallable listDataServiceAuthorizedApisCallable(const Model::ListDataServiceAuthorizedApisRequest& request) const;
			ListDataServiceFoldersOutcome listDataServiceFolders(const Model::ListDataServiceFoldersRequest &request)const;
			void listDataServiceFoldersAsync(const Model::ListDataServiceFoldersRequest& request, const ListDataServiceFoldersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataServiceFoldersOutcomeCallable listDataServiceFoldersCallable(const Model::ListDataServiceFoldersRequest& request) const;
			ListDataServiceGroupsOutcome listDataServiceGroups(const Model::ListDataServiceGroupsRequest &request)const;
			void listDataServiceGroupsAsync(const Model::ListDataServiceGroupsRequest& request, const ListDataServiceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataServiceGroupsOutcomeCallable listDataServiceGroupsCallable(const Model::ListDataServiceGroupsRequest& request) const;
			ListDataServicePublishedApisOutcome listDataServicePublishedApis(const Model::ListDataServicePublishedApisRequest &request)const;
			void listDataServicePublishedApisAsync(const Model::ListDataServicePublishedApisRequest& request, const ListDataServicePublishedApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDataServicePublishedApisOutcomeCallable listDataServicePublishedApisCallable(const Model::ListDataServicePublishedApisRequest& request) const;
			ListFileVersionsOutcome listFileVersions(const Model::ListFileVersionsRequest &request)const;
			void listFileVersionsAsync(const Model::ListFileVersionsRequest& request, const ListFileVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFileVersionsOutcomeCallable listFileVersionsCallable(const Model::ListFileVersionsRequest& request) const;
			ListFilesOutcome listFiles(const Model::ListFilesRequest &request)const;
			void listFilesAsync(const Model::ListFilesRequest& request, const ListFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFilesOutcomeCallable listFilesCallable(const Model::ListFilesRequest& request) const;
			ListFoldersOutcome listFolders(const Model::ListFoldersRequest &request)const;
			void listFoldersAsync(const Model::ListFoldersRequest& request, const ListFoldersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFoldersOutcomeCallable listFoldersCallable(const Model::ListFoldersRequest& request) const;
			ListInstancesOutcome listInstances(const Model::ListInstancesRequest &request)const;
			void listInstancesAsync(const Model::ListInstancesRequest& request, const ListInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstancesOutcomeCallable listInstancesCallable(const Model::ListInstancesRequest& request) const;
			ListMetaDBOutcome listMetaDB(const Model::ListMetaDBRequest &request)const;
			void listMetaDBAsync(const Model::ListMetaDBRequest& request, const ListMetaDBAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMetaDBOutcomeCallable listMetaDBCallable(const Model::ListMetaDBRequest& request) const;
			ListNodeIOOutcome listNodeIO(const Model::ListNodeIORequest &request)const;
			void listNodeIOAsync(const Model::ListNodeIORequest& request, const ListNodeIOAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNodeIOOutcomeCallable listNodeIOCallable(const Model::ListNodeIORequest& request) const;
			ListNodesOutcome listNodes(const Model::ListNodesRequest &request)const;
			void listNodesAsync(const Model::ListNodesRequest& request, const ListNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNodesOutcomeCallable listNodesCallable(const Model::ListNodesRequest& request) const;
			ListProgramTypeCountOutcome listProgramTypeCount(const Model::ListProgramTypeCountRequest &request)const;
			void listProgramTypeCountAsync(const Model::ListProgramTypeCountRequest& request, const ListProgramTypeCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProgramTypeCountOutcomeCallable listProgramTypeCountCallable(const Model::ListProgramTypeCountRequest& request) const;
			ListProjectMembersOutcome listProjectMembers(const Model::ListProjectMembersRequest &request)const;
			void listProjectMembersAsync(const Model::ListProjectMembersRequest& request, const ListProjectMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProjectMembersOutcomeCallable listProjectMembersCallable(const Model::ListProjectMembersRequest& request) const;
			ListProjectRolesOutcome listProjectRoles(const Model::ListProjectRolesRequest &request)const;
			void listProjectRolesAsync(const Model::ListProjectRolesRequest& request, const ListProjectRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProjectRolesOutcomeCallable listProjectRolesCallable(const Model::ListProjectRolesRequest& request) const;
			ListProjectsOutcome listProjects(const Model::ListProjectsRequest &request)const;
			void listProjectsAsync(const Model::ListProjectsRequest& request, const ListProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProjectsOutcomeCallable listProjectsCallable(const Model::ListProjectsRequest& request) const;
			ListQualityResultsByEntityOutcome listQualityResultsByEntity(const Model::ListQualityResultsByEntityRequest &request)const;
			void listQualityResultsByEntityAsync(const Model::ListQualityResultsByEntityRequest& request, const ListQualityResultsByEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListQualityResultsByEntityOutcomeCallable listQualityResultsByEntityCallable(const Model::ListQualityResultsByEntityRequest& request) const;
			ListQualityResultsByRuleOutcome listQualityResultsByRule(const Model::ListQualityResultsByRuleRequest &request)const;
			void listQualityResultsByRuleAsync(const Model::ListQualityResultsByRuleRequest& request, const ListQualityResultsByRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListQualityResultsByRuleOutcomeCallable listQualityResultsByRuleCallable(const Model::ListQualityResultsByRuleRequest& request) const;
			ListQualityRulesOutcome listQualityRules(const Model::ListQualityRulesRequest &request)const;
			void listQualityRulesAsync(const Model::ListQualityRulesRequest& request, const ListQualityRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListQualityRulesOutcomeCallable listQualityRulesCallable(const Model::ListQualityRulesRequest& request) const;
			ListRemindsOutcome listReminds(const Model::ListRemindsRequest &request)const;
			void listRemindsAsync(const Model::ListRemindsRequest& request, const ListRemindsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRemindsOutcomeCallable listRemindsCallable(const Model::ListRemindsRequest& request) const;
			ListResourceGroupsOutcome listResourceGroups(const Model::ListResourceGroupsRequest &request)const;
			void listResourceGroupsAsync(const Model::ListResourceGroupsRequest& request, const ListResourceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListResourceGroupsOutcomeCallable listResourceGroupsCallable(const Model::ListResourceGroupsRequest& request) const;
			ListTableLevelOutcome listTableLevel(const Model::ListTableLevelRequest &request)const;
			void listTableLevelAsync(const Model::ListTableLevelRequest& request, const ListTableLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTableLevelOutcomeCallable listTableLevelCallable(const Model::ListTableLevelRequest& request) const;
			ListTableThemeOutcome listTableTheme(const Model::ListTableThemeRequest &request)const;
			void listTableThemeAsync(const Model::ListTableThemeRequest& request, const ListTableThemeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTableThemeOutcomeCallable listTableThemeCallable(const Model::ListTableThemeRequest& request) const;
			ListTopicsOutcome listTopics(const Model::ListTopicsRequest &request)const;
			void listTopicsAsync(const Model::ListTopicsRequest& request, const ListTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTopicsOutcomeCallable listTopicsCallable(const Model::ListTopicsRequest& request) const;
			PublishDataServiceApiOutcome publishDataServiceApi(const Model::PublishDataServiceApiRequest &request)const;
			void publishDataServiceApiAsync(const Model::PublishDataServiceApiRequest& request, const PublishDataServiceApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PublishDataServiceApiOutcomeCallable publishDataServiceApiCallable(const Model::PublishDataServiceApiRequest& request) const;
			RemoveProjectMemberFromRoleOutcome removeProjectMemberFromRole(const Model::RemoveProjectMemberFromRoleRequest &request)const;
			void removeProjectMemberFromRoleAsync(const Model::RemoveProjectMemberFromRoleRequest& request, const RemoveProjectMemberFromRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveProjectMemberFromRoleOutcomeCallable removeProjectMemberFromRoleCallable(const Model::RemoveProjectMemberFromRoleRequest& request) const;
			RestartInstanceOutcome restartInstance(const Model::RestartInstanceRequest &request)const;
			void restartInstanceAsync(const Model::RestartInstanceRequest& request, const RestartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartInstanceOutcomeCallable restartInstanceCallable(const Model::RestartInstanceRequest& request) const;
			ResumeInstanceOutcome resumeInstance(const Model::ResumeInstanceRequest &request)const;
			void resumeInstanceAsync(const Model::ResumeInstanceRequest& request, const ResumeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResumeInstanceOutcomeCallable resumeInstanceCallable(const Model::ResumeInstanceRequest& request) const;
			RunTriggerNodeOutcome runTriggerNode(const Model::RunTriggerNodeRequest &request)const;
			void runTriggerNodeAsync(const Model::RunTriggerNodeRequest& request, const RunTriggerNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunTriggerNodeOutcomeCallable runTriggerNodeCallable(const Model::RunTriggerNodeRequest& request) const;
			SearchMetaTablesOutcome searchMetaTables(const Model::SearchMetaTablesRequest &request)const;
			void searchMetaTablesAsync(const Model::SearchMetaTablesRequest& request, const SearchMetaTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchMetaTablesOutcomeCallable searchMetaTablesCallable(const Model::SearchMetaTablesRequest& request) const;
			SearchNodesByOutputOutcome searchNodesByOutput(const Model::SearchNodesByOutputRequest &request)const;
			void searchNodesByOutputAsync(const Model::SearchNodesByOutputRequest& request, const SearchNodesByOutputAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchNodesByOutputOutcomeCallable searchNodesByOutputCallable(const Model::SearchNodesByOutputRequest& request) const;
			SetSuccessInstanceOutcome setSuccessInstance(const Model::SetSuccessInstanceRequest &request)const;
			void setSuccessInstanceAsync(const Model::SetSuccessInstanceRequest& request, const SetSuccessInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetSuccessInstanceOutcomeCallable setSuccessInstanceCallable(const Model::SetSuccessInstanceRequest& request) const;
			StopInstanceOutcome stopInstance(const Model::StopInstanceRequest &request)const;
			void stopInstanceAsync(const Model::StopInstanceRequest& request, const StopInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopInstanceOutcomeCallable stopInstanceCallable(const Model::StopInstanceRequest& request) const;
			SubmitFileOutcome submitFile(const Model::SubmitFileRequest &request)const;
			void submitFileAsync(const Model::SubmitFileRequest& request, const SubmitFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitFileOutcomeCallable submitFileCallable(const Model::SubmitFileRequest& request) const;
			SuspendInstanceOutcome suspendInstance(const Model::SuspendInstanceRequest &request)const;
			void suspendInstanceAsync(const Model::SuspendInstanceRequest& request, const SuspendInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SuspendInstanceOutcomeCallable suspendInstanceCallable(const Model::SuspendInstanceRequest& request) const;
			UpdateBusinessOutcome updateBusiness(const Model::UpdateBusinessRequest &request)const;
			void updateBusinessAsync(const Model::UpdateBusinessRequest& request, const UpdateBusinessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateBusinessOutcomeCallable updateBusinessCallable(const Model::UpdateBusinessRequest& request) const;
			UpdateConnectionOutcome updateConnection(const Model::UpdateConnectionRequest &request)const;
			void updateConnectionAsync(const Model::UpdateConnectionRequest& request, const UpdateConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateConnectionOutcomeCallable updateConnectionCallable(const Model::UpdateConnectionRequest& request) const;
			UpdateDataServiceApiOutcome updateDataServiceApi(const Model::UpdateDataServiceApiRequest &request)const;
			void updateDataServiceApiAsync(const Model::UpdateDataServiceApiRequest& request, const UpdateDataServiceApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDataServiceApiOutcomeCallable updateDataServiceApiCallable(const Model::UpdateDataServiceApiRequest& request) const;
			UpdateFileOutcome updateFile(const Model::UpdateFileRequest &request)const;
			void updateFileAsync(const Model::UpdateFileRequest& request, const UpdateFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateFileOutcomeCallable updateFileCallable(const Model::UpdateFileRequest& request) const;
			UpdateFolderOutcome updateFolder(const Model::UpdateFolderRequest &request)const;
			void updateFolderAsync(const Model::UpdateFolderRequest& request, const UpdateFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateFolderOutcomeCallable updateFolderCallable(const Model::UpdateFolderRequest& request) const;
			UpdateMetaCategoryOutcome updateMetaCategory(const Model::UpdateMetaCategoryRequest &request)const;
			void updateMetaCategoryAsync(const Model::UpdateMetaCategoryRequest& request, const UpdateMetaCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMetaCategoryOutcomeCallable updateMetaCategoryCallable(const Model::UpdateMetaCategoryRequest& request) const;
			UpdateMetaTableOutcome updateMetaTable(const Model::UpdateMetaTableRequest &request)const;
			void updateMetaTableAsync(const Model::UpdateMetaTableRequest& request, const UpdateMetaTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMetaTableOutcomeCallable updateMetaTableCallable(const Model::UpdateMetaTableRequest& request) const;
			UpdateMetaTableIntroWikiOutcome updateMetaTableIntroWiki(const Model::UpdateMetaTableIntroWikiRequest &request)const;
			void updateMetaTableIntroWikiAsync(const Model::UpdateMetaTableIntroWikiRequest& request, const UpdateMetaTableIntroWikiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMetaTableIntroWikiOutcomeCallable updateMetaTableIntroWikiCallable(const Model::UpdateMetaTableIntroWikiRequest& request) const;
			UpdateQualityFollowerOutcome updateQualityFollower(const Model::UpdateQualityFollowerRequest &request)const;
			void updateQualityFollowerAsync(const Model::UpdateQualityFollowerRequest& request, const UpdateQualityFollowerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateQualityFollowerOutcomeCallable updateQualityFollowerCallable(const Model::UpdateQualityFollowerRequest& request) const;
			UpdateQualityRuleOutcome updateQualityRule(const Model::UpdateQualityRuleRequest &request)const;
			void updateQualityRuleAsync(const Model::UpdateQualityRuleRequest& request, const UpdateQualityRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateQualityRuleOutcomeCallable updateQualityRuleCallable(const Model::UpdateQualityRuleRequest& request) const;
			UpdateRemindOutcome updateRemind(const Model::UpdateRemindRequest &request)const;
			void updateRemindAsync(const Model::UpdateRemindRequest& request, const UpdateRemindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRemindOutcomeCallable updateRemindCallable(const Model::UpdateRemindRequest& request) const;
			UpdateTableOutcome updateTable(const Model::UpdateTableRequest &request)const;
			void updateTableAsync(const Model::UpdateTableRequest& request, const UpdateTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTableOutcomeCallable updateTableCallable(const Model::UpdateTableRequest& request) const;
			UpdateTableLevelOutcome updateTableLevel(const Model::UpdateTableLevelRequest &request)const;
			void updateTableLevelAsync(const Model::UpdateTableLevelRequest& request, const UpdateTableLevelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTableLevelOutcomeCallable updateTableLevelCallable(const Model::UpdateTableLevelRequest& request) const;
			UpdateTableModelInfoOutcome updateTableModelInfo(const Model::UpdateTableModelInfoRequest &request)const;
			void updateTableModelInfoAsync(const Model::UpdateTableModelInfoRequest& request, const UpdateTableModelInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTableModelInfoOutcomeCallable updateTableModelInfoCallable(const Model::UpdateTableModelInfoRequest& request) const;
			UpdateTableThemeOutcome updateTableTheme(const Model::UpdateTableThemeRequest &request)const;
			void updateTableThemeAsync(const Model::UpdateTableThemeRequest& request, const UpdateTableThemeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTableThemeOutcomeCallable updateTableThemeCallable(const Model::UpdateTableThemeRequest& request) const;
			UpdateUdfFileOutcome updateUdfFile(const Model::UpdateUdfFileRequest &request)const;
			void updateUdfFileAsync(const Model::UpdateUdfFileRequest& request, const UpdateUdfFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateUdfFileOutcomeCallable updateUdfFileCallable(const Model::UpdateUdfFileRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_DATAWORKS_PUBLICCLIENT_H_
