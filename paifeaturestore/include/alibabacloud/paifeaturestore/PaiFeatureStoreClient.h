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

#ifndef ALIBABACLOUD_PAIFEATURESTORE_PAIFEATURESTORECLIENT_H_
#define ALIBABACLOUD_PAIFEATURESTORE_PAIFEATURESTORECLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "PaiFeatureStoreExport.h"
#include "model/CheckInstanceDatasourceRequest.h"
#include "model/CheckInstanceDatasourceResult.h"
#include "model/CheckModelFeatureFGFeatureRequest.h"
#include "model/CheckModelFeatureFGFeatureResult.h"
#include "model/CreateDatasourceRequest.h"
#include "model/CreateDatasourceResult.h"
#include "model/CreateFeatureEntityRequest.h"
#include "model/CreateFeatureEntityResult.h"
#include "model/CreateFeatureViewRequest.h"
#include "model/CreateFeatureViewResult.h"
#include "model/CreateInstanceRequest.h"
#include "model/CreateInstanceResult.h"
#include "model/CreateLLMConfigRequest.h"
#include "model/CreateLLMConfigResult.h"
#include "model/CreateLabelTableRequest.h"
#include "model/CreateLabelTableResult.h"
#include "model/CreateModelFeatureRequest.h"
#include "model/CreateModelFeatureResult.h"
#include "model/CreateProjectRequest.h"
#include "model/CreateProjectResult.h"
#include "model/CreateServiceIdentityRoleRequest.h"
#include "model/CreateServiceIdentityRoleResult.h"
#include "model/DeleteDatasourceRequest.h"
#include "model/DeleteDatasourceResult.h"
#include "model/DeleteFeatureEntityRequest.h"
#include "model/DeleteFeatureEntityResult.h"
#include "model/DeleteFeatureViewRequest.h"
#include "model/DeleteFeatureViewResult.h"
#include "model/DeleteLLMConfigRequest.h"
#include "model/DeleteLLMConfigResult.h"
#include "model/DeleteLabelTableRequest.h"
#include "model/DeleteLabelTableResult.h"
#include "model/DeleteModelFeatureRequest.h"
#include "model/DeleteModelFeatureResult.h"
#include "model/DeleteProjectRequest.h"
#include "model/DeleteProjectResult.h"
#include "model/ExportModelFeatureTrainingSetTableRequest.h"
#include "model/ExportModelFeatureTrainingSetTableResult.h"
#include "model/GetDatasourceRequest.h"
#include "model/GetDatasourceResult.h"
#include "model/GetDatasourceTableRequest.h"
#include "model/GetDatasourceTableResult.h"
#include "model/GetFeatureEntityRequest.h"
#include "model/GetFeatureEntityResult.h"
#include "model/GetFeatureViewRequest.h"
#include "model/GetFeatureViewResult.h"
#include "model/GetInstanceRequest.h"
#include "model/GetInstanceResult.h"
#include "model/GetLLMConfigRequest.h"
#include "model/GetLLMConfigResult.h"
#include "model/GetLabelTableRequest.h"
#include "model/GetLabelTableResult.h"
#include "model/GetModelFeatureRequest.h"
#include "model/GetModelFeatureResult.h"
#include "model/GetModelFeatureFGFeatureRequest.h"
#include "model/GetModelFeatureFGFeatureResult.h"
#include "model/GetModelFeatureFGInfoRequest.h"
#include "model/GetModelFeatureFGInfoResult.h"
#include "model/GetProjectRequest.h"
#include "model/GetProjectResult.h"
#include "model/GetProjectFeatureEntityRequest.h"
#include "model/GetProjectFeatureEntityResult.h"
#include "model/GetServiceIdentityRoleRequest.h"
#include "model/GetServiceIdentityRoleResult.h"
#include "model/GetTaskRequest.h"
#include "model/GetTaskResult.h"
#include "model/ListDatasourceFeatureViewsRequest.h"
#include "model/ListDatasourceFeatureViewsResult.h"
#include "model/ListDatasourceTablesRequest.h"
#include "model/ListDatasourceTablesResult.h"
#include "model/ListDatasourcesRequest.h"
#include "model/ListDatasourcesResult.h"
#include "model/ListFeatureEntitiesRequest.h"
#include "model/ListFeatureEntitiesResult.h"
#include "model/ListFeatureViewFieldRelationshipsRequest.h"
#include "model/ListFeatureViewFieldRelationshipsResult.h"
#include "model/ListFeatureViewOnlineFeaturesRequest.h"
#include "model/ListFeatureViewOnlineFeaturesResult.h"
#include "model/ListFeatureViewRelationshipsRequest.h"
#include "model/ListFeatureViewRelationshipsResult.h"
#include "model/ListFeatureViewsRequest.h"
#include "model/ListFeatureViewsResult.h"
#include "model/ListInstancesRequest.h"
#include "model/ListInstancesResult.h"
#include "model/ListLLMConfigsRequest.h"
#include "model/ListLLMConfigsResult.h"
#include "model/ListLabelTablesRequest.h"
#include "model/ListLabelTablesResult.h"
#include "model/ListModelFeatureAvailableFeaturesRequest.h"
#include "model/ListModelFeatureAvailableFeaturesResult.h"
#include "model/ListModelFeaturesRequest.h"
#include "model/ListModelFeaturesResult.h"
#include "model/ListProjectFeatureViewsRequest.h"
#include "model/ListProjectFeatureViewsResult.h"
#include "model/ListProjectFeaturesRequest.h"
#include "model/ListProjectFeaturesResult.h"
#include "model/ListProjectsRequest.h"
#include "model/ListProjectsResult.h"
#include "model/ListTaskLogsRequest.h"
#include "model/ListTaskLogsResult.h"
#include "model/ListTasksRequest.h"
#include "model/ListTasksResult.h"
#include "model/PublishFeatureViewTableRequest.h"
#include "model/PublishFeatureViewTableResult.h"
#include "model/StopTaskRequest.h"
#include "model/StopTaskResult.h"
#include "model/UpdateDatasourceRequest.h"
#include "model/UpdateDatasourceResult.h"
#include "model/UpdateLLMConfigRequest.h"
#include "model/UpdateLLMConfigResult.h"
#include "model/UpdateLabelTableRequest.h"
#include "model/UpdateLabelTableResult.h"
#include "model/UpdateModelFeatureRequest.h"
#include "model/UpdateModelFeatureResult.h"
#include "model/UpdateModelFeatureFGFeatureRequest.h"
#include "model/UpdateModelFeatureFGFeatureResult.h"
#include "model/UpdateProjectRequest.h"
#include "model/UpdateProjectResult.h"
#include "model/WriteFeatureViewTableRequest.h"
#include "model/WriteFeatureViewTableResult.h"


namespace AlibabaCloud
{
	namespace PaiFeatureStore
	{
		class ALIBABACLOUD_PAIFEATURESTORE_EXPORT PaiFeatureStoreClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::CheckInstanceDatasourceResult> CheckInstanceDatasourceOutcome;
			typedef std::future<CheckInstanceDatasourceOutcome> CheckInstanceDatasourceOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::CheckInstanceDatasourceRequest&, const CheckInstanceDatasourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckInstanceDatasourceAsyncHandler;
			typedef Outcome<Error, Model::CheckModelFeatureFGFeatureResult> CheckModelFeatureFGFeatureOutcome;
			typedef std::future<CheckModelFeatureFGFeatureOutcome> CheckModelFeatureFGFeatureOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::CheckModelFeatureFGFeatureRequest&, const CheckModelFeatureFGFeatureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckModelFeatureFGFeatureAsyncHandler;
			typedef Outcome<Error, Model::CreateDatasourceResult> CreateDatasourceOutcome;
			typedef std::future<CreateDatasourceOutcome> CreateDatasourceOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::CreateDatasourceRequest&, const CreateDatasourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatasourceAsyncHandler;
			typedef Outcome<Error, Model::CreateFeatureEntityResult> CreateFeatureEntityOutcome;
			typedef std::future<CreateFeatureEntityOutcome> CreateFeatureEntityOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::CreateFeatureEntityRequest&, const CreateFeatureEntityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFeatureEntityAsyncHandler;
			typedef Outcome<Error, Model::CreateFeatureViewResult> CreateFeatureViewOutcome;
			typedef std::future<CreateFeatureViewOutcome> CreateFeatureViewOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::CreateFeatureViewRequest&, const CreateFeatureViewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFeatureViewAsyncHandler;
			typedef Outcome<Error, Model::CreateInstanceResult> CreateInstanceOutcome;
			typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::CreateInstanceRequest&, const CreateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateLLMConfigResult> CreateLLMConfigOutcome;
			typedef std::future<CreateLLMConfigOutcome> CreateLLMConfigOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::CreateLLMConfigRequest&, const CreateLLMConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLLMConfigAsyncHandler;
			typedef Outcome<Error, Model::CreateLabelTableResult> CreateLabelTableOutcome;
			typedef std::future<CreateLabelTableOutcome> CreateLabelTableOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::CreateLabelTableRequest&, const CreateLabelTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLabelTableAsyncHandler;
			typedef Outcome<Error, Model::CreateModelFeatureResult> CreateModelFeatureOutcome;
			typedef std::future<CreateModelFeatureOutcome> CreateModelFeatureOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::CreateModelFeatureRequest&, const CreateModelFeatureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateModelFeatureAsyncHandler;
			typedef Outcome<Error, Model::CreateProjectResult> CreateProjectOutcome;
			typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::CreateProjectRequest&, const CreateProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectAsyncHandler;
			typedef Outcome<Error, Model::CreateServiceIdentityRoleResult> CreateServiceIdentityRoleOutcome;
			typedef std::future<CreateServiceIdentityRoleOutcome> CreateServiceIdentityRoleOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::CreateServiceIdentityRoleRequest&, const CreateServiceIdentityRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceIdentityRoleAsyncHandler;
			typedef Outcome<Error, Model::DeleteDatasourceResult> DeleteDatasourceOutcome;
			typedef std::future<DeleteDatasourceOutcome> DeleteDatasourceOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::DeleteDatasourceRequest&, const DeleteDatasourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDatasourceAsyncHandler;
			typedef Outcome<Error, Model::DeleteFeatureEntityResult> DeleteFeatureEntityOutcome;
			typedef std::future<DeleteFeatureEntityOutcome> DeleteFeatureEntityOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::DeleteFeatureEntityRequest&, const DeleteFeatureEntityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFeatureEntityAsyncHandler;
			typedef Outcome<Error, Model::DeleteFeatureViewResult> DeleteFeatureViewOutcome;
			typedef std::future<DeleteFeatureViewOutcome> DeleteFeatureViewOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::DeleteFeatureViewRequest&, const DeleteFeatureViewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFeatureViewAsyncHandler;
			typedef Outcome<Error, Model::DeleteLLMConfigResult> DeleteLLMConfigOutcome;
			typedef std::future<DeleteLLMConfigOutcome> DeleteLLMConfigOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::DeleteLLMConfigRequest&, const DeleteLLMConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLLMConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteLabelTableResult> DeleteLabelTableOutcome;
			typedef std::future<DeleteLabelTableOutcome> DeleteLabelTableOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::DeleteLabelTableRequest&, const DeleteLabelTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLabelTableAsyncHandler;
			typedef Outcome<Error, Model::DeleteModelFeatureResult> DeleteModelFeatureOutcome;
			typedef std::future<DeleteModelFeatureOutcome> DeleteModelFeatureOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::DeleteModelFeatureRequest&, const DeleteModelFeatureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteModelFeatureAsyncHandler;
			typedef Outcome<Error, Model::DeleteProjectResult> DeleteProjectOutcome;
			typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::DeleteProjectRequest&, const DeleteProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectAsyncHandler;
			typedef Outcome<Error, Model::ExportModelFeatureTrainingSetTableResult> ExportModelFeatureTrainingSetTableOutcome;
			typedef std::future<ExportModelFeatureTrainingSetTableOutcome> ExportModelFeatureTrainingSetTableOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::ExportModelFeatureTrainingSetTableRequest&, const ExportModelFeatureTrainingSetTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportModelFeatureTrainingSetTableAsyncHandler;
			typedef Outcome<Error, Model::GetDatasourceResult> GetDatasourceOutcome;
			typedef std::future<GetDatasourceOutcome> GetDatasourceOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::GetDatasourceRequest&, const GetDatasourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDatasourceAsyncHandler;
			typedef Outcome<Error, Model::GetDatasourceTableResult> GetDatasourceTableOutcome;
			typedef std::future<GetDatasourceTableOutcome> GetDatasourceTableOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::GetDatasourceTableRequest&, const GetDatasourceTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDatasourceTableAsyncHandler;
			typedef Outcome<Error, Model::GetFeatureEntityResult> GetFeatureEntityOutcome;
			typedef std::future<GetFeatureEntityOutcome> GetFeatureEntityOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::GetFeatureEntityRequest&, const GetFeatureEntityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFeatureEntityAsyncHandler;
			typedef Outcome<Error, Model::GetFeatureViewResult> GetFeatureViewOutcome;
			typedef std::future<GetFeatureViewOutcome> GetFeatureViewOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::GetFeatureViewRequest&, const GetFeatureViewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFeatureViewAsyncHandler;
			typedef Outcome<Error, Model::GetInstanceResult> GetInstanceOutcome;
			typedef std::future<GetInstanceOutcome> GetInstanceOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::GetInstanceRequest&, const GetInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstanceAsyncHandler;
			typedef Outcome<Error, Model::GetLLMConfigResult> GetLLMConfigOutcome;
			typedef std::future<GetLLMConfigOutcome> GetLLMConfigOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::GetLLMConfigRequest&, const GetLLMConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLLMConfigAsyncHandler;
			typedef Outcome<Error, Model::GetLabelTableResult> GetLabelTableOutcome;
			typedef std::future<GetLabelTableOutcome> GetLabelTableOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::GetLabelTableRequest&, const GetLabelTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLabelTableAsyncHandler;
			typedef Outcome<Error, Model::GetModelFeatureResult> GetModelFeatureOutcome;
			typedef std::future<GetModelFeatureOutcome> GetModelFeatureOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::GetModelFeatureRequest&, const GetModelFeatureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetModelFeatureAsyncHandler;
			typedef Outcome<Error, Model::GetModelFeatureFGFeatureResult> GetModelFeatureFGFeatureOutcome;
			typedef std::future<GetModelFeatureFGFeatureOutcome> GetModelFeatureFGFeatureOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::GetModelFeatureFGFeatureRequest&, const GetModelFeatureFGFeatureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetModelFeatureFGFeatureAsyncHandler;
			typedef Outcome<Error, Model::GetModelFeatureFGInfoResult> GetModelFeatureFGInfoOutcome;
			typedef std::future<GetModelFeatureFGInfoOutcome> GetModelFeatureFGInfoOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::GetModelFeatureFGInfoRequest&, const GetModelFeatureFGInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetModelFeatureFGInfoAsyncHandler;
			typedef Outcome<Error, Model::GetProjectResult> GetProjectOutcome;
			typedef std::future<GetProjectOutcome> GetProjectOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::GetProjectRequest&, const GetProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetProjectAsyncHandler;
			typedef Outcome<Error, Model::GetProjectFeatureEntityResult> GetProjectFeatureEntityOutcome;
			typedef std::future<GetProjectFeatureEntityOutcome> GetProjectFeatureEntityOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::GetProjectFeatureEntityRequest&, const GetProjectFeatureEntityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetProjectFeatureEntityAsyncHandler;
			typedef Outcome<Error, Model::GetServiceIdentityRoleResult> GetServiceIdentityRoleOutcome;
			typedef std::future<GetServiceIdentityRoleOutcome> GetServiceIdentityRoleOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::GetServiceIdentityRoleRequest&, const GetServiceIdentityRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceIdentityRoleAsyncHandler;
			typedef Outcome<Error, Model::GetTaskResult> GetTaskOutcome;
			typedef std::future<GetTaskOutcome> GetTaskOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::GetTaskRequest&, const GetTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTaskAsyncHandler;
			typedef Outcome<Error, Model::ListDatasourceFeatureViewsResult> ListDatasourceFeatureViewsOutcome;
			typedef std::future<ListDatasourceFeatureViewsOutcome> ListDatasourceFeatureViewsOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::ListDatasourceFeatureViewsRequest&, const ListDatasourceFeatureViewsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDatasourceFeatureViewsAsyncHandler;
			typedef Outcome<Error, Model::ListDatasourceTablesResult> ListDatasourceTablesOutcome;
			typedef std::future<ListDatasourceTablesOutcome> ListDatasourceTablesOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::ListDatasourceTablesRequest&, const ListDatasourceTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDatasourceTablesAsyncHandler;
			typedef Outcome<Error, Model::ListDatasourcesResult> ListDatasourcesOutcome;
			typedef std::future<ListDatasourcesOutcome> ListDatasourcesOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::ListDatasourcesRequest&, const ListDatasourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDatasourcesAsyncHandler;
			typedef Outcome<Error, Model::ListFeatureEntitiesResult> ListFeatureEntitiesOutcome;
			typedef std::future<ListFeatureEntitiesOutcome> ListFeatureEntitiesOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::ListFeatureEntitiesRequest&, const ListFeatureEntitiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFeatureEntitiesAsyncHandler;
			typedef Outcome<Error, Model::ListFeatureViewFieldRelationshipsResult> ListFeatureViewFieldRelationshipsOutcome;
			typedef std::future<ListFeatureViewFieldRelationshipsOutcome> ListFeatureViewFieldRelationshipsOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::ListFeatureViewFieldRelationshipsRequest&, const ListFeatureViewFieldRelationshipsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFeatureViewFieldRelationshipsAsyncHandler;
			typedef Outcome<Error, Model::ListFeatureViewOnlineFeaturesResult> ListFeatureViewOnlineFeaturesOutcome;
			typedef std::future<ListFeatureViewOnlineFeaturesOutcome> ListFeatureViewOnlineFeaturesOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::ListFeatureViewOnlineFeaturesRequest&, const ListFeatureViewOnlineFeaturesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFeatureViewOnlineFeaturesAsyncHandler;
			typedef Outcome<Error, Model::ListFeatureViewRelationshipsResult> ListFeatureViewRelationshipsOutcome;
			typedef std::future<ListFeatureViewRelationshipsOutcome> ListFeatureViewRelationshipsOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::ListFeatureViewRelationshipsRequest&, const ListFeatureViewRelationshipsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFeatureViewRelationshipsAsyncHandler;
			typedef Outcome<Error, Model::ListFeatureViewsResult> ListFeatureViewsOutcome;
			typedef std::future<ListFeatureViewsOutcome> ListFeatureViewsOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::ListFeatureViewsRequest&, const ListFeatureViewsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFeatureViewsAsyncHandler;
			typedef Outcome<Error, Model::ListInstancesResult> ListInstancesOutcome;
			typedef std::future<ListInstancesOutcome> ListInstancesOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::ListInstancesRequest&, const ListInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListLLMConfigsResult> ListLLMConfigsOutcome;
			typedef std::future<ListLLMConfigsOutcome> ListLLMConfigsOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::ListLLMConfigsRequest&, const ListLLMConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLLMConfigsAsyncHandler;
			typedef Outcome<Error, Model::ListLabelTablesResult> ListLabelTablesOutcome;
			typedef std::future<ListLabelTablesOutcome> ListLabelTablesOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::ListLabelTablesRequest&, const ListLabelTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLabelTablesAsyncHandler;
			typedef Outcome<Error, Model::ListModelFeatureAvailableFeaturesResult> ListModelFeatureAvailableFeaturesOutcome;
			typedef std::future<ListModelFeatureAvailableFeaturesOutcome> ListModelFeatureAvailableFeaturesOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::ListModelFeatureAvailableFeaturesRequest&, const ListModelFeatureAvailableFeaturesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListModelFeatureAvailableFeaturesAsyncHandler;
			typedef Outcome<Error, Model::ListModelFeaturesResult> ListModelFeaturesOutcome;
			typedef std::future<ListModelFeaturesOutcome> ListModelFeaturesOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::ListModelFeaturesRequest&, const ListModelFeaturesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListModelFeaturesAsyncHandler;
			typedef Outcome<Error, Model::ListProjectFeatureViewsResult> ListProjectFeatureViewsOutcome;
			typedef std::future<ListProjectFeatureViewsOutcome> ListProjectFeatureViewsOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::ListProjectFeatureViewsRequest&, const ListProjectFeatureViewsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProjectFeatureViewsAsyncHandler;
			typedef Outcome<Error, Model::ListProjectFeaturesResult> ListProjectFeaturesOutcome;
			typedef std::future<ListProjectFeaturesOutcome> ListProjectFeaturesOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::ListProjectFeaturesRequest&, const ListProjectFeaturesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProjectFeaturesAsyncHandler;
			typedef Outcome<Error, Model::ListProjectsResult> ListProjectsOutcome;
			typedef std::future<ListProjectsOutcome> ListProjectsOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::ListProjectsRequest&, const ListProjectsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProjectsAsyncHandler;
			typedef Outcome<Error, Model::ListTaskLogsResult> ListTaskLogsOutcome;
			typedef std::future<ListTaskLogsOutcome> ListTaskLogsOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::ListTaskLogsRequest&, const ListTaskLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTaskLogsAsyncHandler;
			typedef Outcome<Error, Model::ListTasksResult> ListTasksOutcome;
			typedef std::future<ListTasksOutcome> ListTasksOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::ListTasksRequest&, const ListTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTasksAsyncHandler;
			typedef Outcome<Error, Model::PublishFeatureViewTableResult> PublishFeatureViewTableOutcome;
			typedef std::future<PublishFeatureViewTableOutcome> PublishFeatureViewTableOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::PublishFeatureViewTableRequest&, const PublishFeatureViewTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PublishFeatureViewTableAsyncHandler;
			typedef Outcome<Error, Model::StopTaskResult> StopTaskOutcome;
			typedef std::future<StopTaskOutcome> StopTaskOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::StopTaskRequest&, const StopTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopTaskAsyncHandler;
			typedef Outcome<Error, Model::UpdateDatasourceResult> UpdateDatasourceOutcome;
			typedef std::future<UpdateDatasourceOutcome> UpdateDatasourceOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::UpdateDatasourceRequest&, const UpdateDatasourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDatasourceAsyncHandler;
			typedef Outcome<Error, Model::UpdateLLMConfigResult> UpdateLLMConfigOutcome;
			typedef std::future<UpdateLLMConfigOutcome> UpdateLLMConfigOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::UpdateLLMConfigRequest&, const UpdateLLMConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLLMConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateLabelTableResult> UpdateLabelTableOutcome;
			typedef std::future<UpdateLabelTableOutcome> UpdateLabelTableOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::UpdateLabelTableRequest&, const UpdateLabelTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLabelTableAsyncHandler;
			typedef Outcome<Error, Model::UpdateModelFeatureResult> UpdateModelFeatureOutcome;
			typedef std::future<UpdateModelFeatureOutcome> UpdateModelFeatureOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::UpdateModelFeatureRequest&, const UpdateModelFeatureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateModelFeatureAsyncHandler;
			typedef Outcome<Error, Model::UpdateModelFeatureFGFeatureResult> UpdateModelFeatureFGFeatureOutcome;
			typedef std::future<UpdateModelFeatureFGFeatureOutcome> UpdateModelFeatureFGFeatureOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::UpdateModelFeatureFGFeatureRequest&, const UpdateModelFeatureFGFeatureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateModelFeatureFGFeatureAsyncHandler;
			typedef Outcome<Error, Model::UpdateProjectResult> UpdateProjectOutcome;
			typedef std::future<UpdateProjectOutcome> UpdateProjectOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::UpdateProjectRequest&, const UpdateProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProjectAsyncHandler;
			typedef Outcome<Error, Model::WriteFeatureViewTableResult> WriteFeatureViewTableOutcome;
			typedef std::future<WriteFeatureViewTableOutcome> WriteFeatureViewTableOutcomeCallable;
			typedef std::function<void(const PaiFeatureStoreClient*, const Model::WriteFeatureViewTableRequest&, const WriteFeatureViewTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> WriteFeatureViewTableAsyncHandler;

			PaiFeatureStoreClient(const Credentials &credentials, const ClientConfiguration &configuration);
			PaiFeatureStoreClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			PaiFeatureStoreClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~PaiFeatureStoreClient();
			CheckInstanceDatasourceOutcome checkInstanceDatasource(const Model::CheckInstanceDatasourceRequest &request)const;
			void checkInstanceDatasourceAsync(const Model::CheckInstanceDatasourceRequest& request, const CheckInstanceDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckInstanceDatasourceOutcomeCallable checkInstanceDatasourceCallable(const Model::CheckInstanceDatasourceRequest& request) const;
			CheckModelFeatureFGFeatureOutcome checkModelFeatureFGFeature(const Model::CheckModelFeatureFGFeatureRequest &request)const;
			void checkModelFeatureFGFeatureAsync(const Model::CheckModelFeatureFGFeatureRequest& request, const CheckModelFeatureFGFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckModelFeatureFGFeatureOutcomeCallable checkModelFeatureFGFeatureCallable(const Model::CheckModelFeatureFGFeatureRequest& request) const;
			CreateDatasourceOutcome createDatasource(const Model::CreateDatasourceRequest &request)const;
			void createDatasourceAsync(const Model::CreateDatasourceRequest& request, const CreateDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDatasourceOutcomeCallable createDatasourceCallable(const Model::CreateDatasourceRequest& request) const;
			CreateFeatureEntityOutcome createFeatureEntity(const Model::CreateFeatureEntityRequest &request)const;
			void createFeatureEntityAsync(const Model::CreateFeatureEntityRequest& request, const CreateFeatureEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFeatureEntityOutcomeCallable createFeatureEntityCallable(const Model::CreateFeatureEntityRequest& request) const;
			CreateFeatureViewOutcome createFeatureView(const Model::CreateFeatureViewRequest &request)const;
			void createFeatureViewAsync(const Model::CreateFeatureViewRequest& request, const CreateFeatureViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFeatureViewOutcomeCallable createFeatureViewCallable(const Model::CreateFeatureViewRequest& request) const;
			CreateInstanceOutcome createInstance(const Model::CreateInstanceRequest &request)const;
			void createInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstanceOutcomeCallable createInstanceCallable(const Model::CreateInstanceRequest& request) const;
			CreateLLMConfigOutcome createLLMConfig(const Model::CreateLLMConfigRequest &request)const;
			void createLLMConfigAsync(const Model::CreateLLMConfigRequest& request, const CreateLLMConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLLMConfigOutcomeCallable createLLMConfigCallable(const Model::CreateLLMConfigRequest& request) const;
			CreateLabelTableOutcome createLabelTable(const Model::CreateLabelTableRequest &request)const;
			void createLabelTableAsync(const Model::CreateLabelTableRequest& request, const CreateLabelTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLabelTableOutcomeCallable createLabelTableCallable(const Model::CreateLabelTableRequest& request) const;
			CreateModelFeatureOutcome createModelFeature(const Model::CreateModelFeatureRequest &request)const;
			void createModelFeatureAsync(const Model::CreateModelFeatureRequest& request, const CreateModelFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateModelFeatureOutcomeCallable createModelFeatureCallable(const Model::CreateModelFeatureRequest& request) const;
			CreateProjectOutcome createProject(const Model::CreateProjectRequest &request)const;
			void createProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateProjectOutcomeCallable createProjectCallable(const Model::CreateProjectRequest& request) const;
			CreateServiceIdentityRoleOutcome createServiceIdentityRole(const Model::CreateServiceIdentityRoleRequest &request)const;
			void createServiceIdentityRoleAsync(const Model::CreateServiceIdentityRoleRequest& request, const CreateServiceIdentityRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateServiceIdentityRoleOutcomeCallable createServiceIdentityRoleCallable(const Model::CreateServiceIdentityRoleRequest& request) const;
			DeleteDatasourceOutcome deleteDatasource(const Model::DeleteDatasourceRequest &request)const;
			void deleteDatasourceAsync(const Model::DeleteDatasourceRequest& request, const DeleteDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDatasourceOutcomeCallable deleteDatasourceCallable(const Model::DeleteDatasourceRequest& request) const;
			DeleteFeatureEntityOutcome deleteFeatureEntity(const Model::DeleteFeatureEntityRequest &request)const;
			void deleteFeatureEntityAsync(const Model::DeleteFeatureEntityRequest& request, const DeleteFeatureEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFeatureEntityOutcomeCallable deleteFeatureEntityCallable(const Model::DeleteFeatureEntityRequest& request) const;
			DeleteFeatureViewOutcome deleteFeatureView(const Model::DeleteFeatureViewRequest &request)const;
			void deleteFeatureViewAsync(const Model::DeleteFeatureViewRequest& request, const DeleteFeatureViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFeatureViewOutcomeCallable deleteFeatureViewCallable(const Model::DeleteFeatureViewRequest& request) const;
			DeleteLLMConfigOutcome deleteLLMConfig(const Model::DeleteLLMConfigRequest &request)const;
			void deleteLLMConfigAsync(const Model::DeleteLLMConfigRequest& request, const DeleteLLMConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLLMConfigOutcomeCallable deleteLLMConfigCallable(const Model::DeleteLLMConfigRequest& request) const;
			DeleteLabelTableOutcome deleteLabelTable(const Model::DeleteLabelTableRequest &request)const;
			void deleteLabelTableAsync(const Model::DeleteLabelTableRequest& request, const DeleteLabelTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLabelTableOutcomeCallable deleteLabelTableCallable(const Model::DeleteLabelTableRequest& request) const;
			DeleteModelFeatureOutcome deleteModelFeature(const Model::DeleteModelFeatureRequest &request)const;
			void deleteModelFeatureAsync(const Model::DeleteModelFeatureRequest& request, const DeleteModelFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteModelFeatureOutcomeCallable deleteModelFeatureCallable(const Model::DeleteModelFeatureRequest& request) const;
			DeleteProjectOutcome deleteProject(const Model::DeleteProjectRequest &request)const;
			void deleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteProjectOutcomeCallable deleteProjectCallable(const Model::DeleteProjectRequest& request) const;
			ExportModelFeatureTrainingSetTableOutcome exportModelFeatureTrainingSetTable(const Model::ExportModelFeatureTrainingSetTableRequest &request)const;
			void exportModelFeatureTrainingSetTableAsync(const Model::ExportModelFeatureTrainingSetTableRequest& request, const ExportModelFeatureTrainingSetTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportModelFeatureTrainingSetTableOutcomeCallable exportModelFeatureTrainingSetTableCallable(const Model::ExportModelFeatureTrainingSetTableRequest& request) const;
			GetDatasourceOutcome getDatasource(const Model::GetDatasourceRequest &request)const;
			void getDatasourceAsync(const Model::GetDatasourceRequest& request, const GetDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDatasourceOutcomeCallable getDatasourceCallable(const Model::GetDatasourceRequest& request) const;
			GetDatasourceTableOutcome getDatasourceTable(const Model::GetDatasourceTableRequest &request)const;
			void getDatasourceTableAsync(const Model::GetDatasourceTableRequest& request, const GetDatasourceTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDatasourceTableOutcomeCallable getDatasourceTableCallable(const Model::GetDatasourceTableRequest& request) const;
			GetFeatureEntityOutcome getFeatureEntity(const Model::GetFeatureEntityRequest &request)const;
			void getFeatureEntityAsync(const Model::GetFeatureEntityRequest& request, const GetFeatureEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFeatureEntityOutcomeCallable getFeatureEntityCallable(const Model::GetFeatureEntityRequest& request) const;
			GetFeatureViewOutcome getFeatureView(const Model::GetFeatureViewRequest &request)const;
			void getFeatureViewAsync(const Model::GetFeatureViewRequest& request, const GetFeatureViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFeatureViewOutcomeCallable getFeatureViewCallable(const Model::GetFeatureViewRequest& request) const;
			GetInstanceOutcome getInstance(const Model::GetInstanceRequest &request)const;
			void getInstanceAsync(const Model::GetInstanceRequest& request, const GetInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstanceOutcomeCallable getInstanceCallable(const Model::GetInstanceRequest& request) const;
			GetLLMConfigOutcome getLLMConfig(const Model::GetLLMConfigRequest &request)const;
			void getLLMConfigAsync(const Model::GetLLMConfigRequest& request, const GetLLMConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLLMConfigOutcomeCallable getLLMConfigCallable(const Model::GetLLMConfigRequest& request) const;
			GetLabelTableOutcome getLabelTable(const Model::GetLabelTableRequest &request)const;
			void getLabelTableAsync(const Model::GetLabelTableRequest& request, const GetLabelTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLabelTableOutcomeCallable getLabelTableCallable(const Model::GetLabelTableRequest& request) const;
			GetModelFeatureOutcome getModelFeature(const Model::GetModelFeatureRequest &request)const;
			void getModelFeatureAsync(const Model::GetModelFeatureRequest& request, const GetModelFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetModelFeatureOutcomeCallable getModelFeatureCallable(const Model::GetModelFeatureRequest& request) const;
			GetModelFeatureFGFeatureOutcome getModelFeatureFGFeature(const Model::GetModelFeatureFGFeatureRequest &request)const;
			void getModelFeatureFGFeatureAsync(const Model::GetModelFeatureFGFeatureRequest& request, const GetModelFeatureFGFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetModelFeatureFGFeatureOutcomeCallable getModelFeatureFGFeatureCallable(const Model::GetModelFeatureFGFeatureRequest& request) const;
			GetModelFeatureFGInfoOutcome getModelFeatureFGInfo(const Model::GetModelFeatureFGInfoRequest &request)const;
			void getModelFeatureFGInfoAsync(const Model::GetModelFeatureFGInfoRequest& request, const GetModelFeatureFGInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetModelFeatureFGInfoOutcomeCallable getModelFeatureFGInfoCallable(const Model::GetModelFeatureFGInfoRequest& request) const;
			GetProjectOutcome getProject(const Model::GetProjectRequest &request)const;
			void getProjectAsync(const Model::GetProjectRequest& request, const GetProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetProjectOutcomeCallable getProjectCallable(const Model::GetProjectRequest& request) const;
			GetProjectFeatureEntityOutcome getProjectFeatureEntity(const Model::GetProjectFeatureEntityRequest &request)const;
			void getProjectFeatureEntityAsync(const Model::GetProjectFeatureEntityRequest& request, const GetProjectFeatureEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetProjectFeatureEntityOutcomeCallable getProjectFeatureEntityCallable(const Model::GetProjectFeatureEntityRequest& request) const;
			GetServiceIdentityRoleOutcome getServiceIdentityRole(const Model::GetServiceIdentityRoleRequest &request)const;
			void getServiceIdentityRoleAsync(const Model::GetServiceIdentityRoleRequest& request, const GetServiceIdentityRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetServiceIdentityRoleOutcomeCallable getServiceIdentityRoleCallable(const Model::GetServiceIdentityRoleRequest& request) const;
			GetTaskOutcome getTask(const Model::GetTaskRequest &request)const;
			void getTaskAsync(const Model::GetTaskRequest& request, const GetTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTaskOutcomeCallable getTaskCallable(const Model::GetTaskRequest& request) const;
			ListDatasourceFeatureViewsOutcome listDatasourceFeatureViews(const Model::ListDatasourceFeatureViewsRequest &request)const;
			void listDatasourceFeatureViewsAsync(const Model::ListDatasourceFeatureViewsRequest& request, const ListDatasourceFeatureViewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDatasourceFeatureViewsOutcomeCallable listDatasourceFeatureViewsCallable(const Model::ListDatasourceFeatureViewsRequest& request) const;
			ListDatasourceTablesOutcome listDatasourceTables(const Model::ListDatasourceTablesRequest &request)const;
			void listDatasourceTablesAsync(const Model::ListDatasourceTablesRequest& request, const ListDatasourceTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDatasourceTablesOutcomeCallable listDatasourceTablesCallable(const Model::ListDatasourceTablesRequest& request) const;
			ListDatasourcesOutcome listDatasources(const Model::ListDatasourcesRequest &request)const;
			void listDatasourcesAsync(const Model::ListDatasourcesRequest& request, const ListDatasourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDatasourcesOutcomeCallable listDatasourcesCallable(const Model::ListDatasourcesRequest& request) const;
			ListFeatureEntitiesOutcome listFeatureEntities(const Model::ListFeatureEntitiesRequest &request)const;
			void listFeatureEntitiesAsync(const Model::ListFeatureEntitiesRequest& request, const ListFeatureEntitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFeatureEntitiesOutcomeCallable listFeatureEntitiesCallable(const Model::ListFeatureEntitiesRequest& request) const;
			ListFeatureViewFieldRelationshipsOutcome listFeatureViewFieldRelationships(const Model::ListFeatureViewFieldRelationshipsRequest &request)const;
			void listFeatureViewFieldRelationshipsAsync(const Model::ListFeatureViewFieldRelationshipsRequest& request, const ListFeatureViewFieldRelationshipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFeatureViewFieldRelationshipsOutcomeCallable listFeatureViewFieldRelationshipsCallable(const Model::ListFeatureViewFieldRelationshipsRequest& request) const;
			ListFeatureViewOnlineFeaturesOutcome listFeatureViewOnlineFeatures(const Model::ListFeatureViewOnlineFeaturesRequest &request)const;
			void listFeatureViewOnlineFeaturesAsync(const Model::ListFeatureViewOnlineFeaturesRequest& request, const ListFeatureViewOnlineFeaturesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFeatureViewOnlineFeaturesOutcomeCallable listFeatureViewOnlineFeaturesCallable(const Model::ListFeatureViewOnlineFeaturesRequest& request) const;
			ListFeatureViewRelationshipsOutcome listFeatureViewRelationships(const Model::ListFeatureViewRelationshipsRequest &request)const;
			void listFeatureViewRelationshipsAsync(const Model::ListFeatureViewRelationshipsRequest& request, const ListFeatureViewRelationshipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFeatureViewRelationshipsOutcomeCallable listFeatureViewRelationshipsCallable(const Model::ListFeatureViewRelationshipsRequest& request) const;
			ListFeatureViewsOutcome listFeatureViews(const Model::ListFeatureViewsRequest &request)const;
			void listFeatureViewsAsync(const Model::ListFeatureViewsRequest& request, const ListFeatureViewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFeatureViewsOutcomeCallable listFeatureViewsCallable(const Model::ListFeatureViewsRequest& request) const;
			ListInstancesOutcome listInstances(const Model::ListInstancesRequest &request)const;
			void listInstancesAsync(const Model::ListInstancesRequest& request, const ListInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstancesOutcomeCallable listInstancesCallable(const Model::ListInstancesRequest& request) const;
			ListLLMConfigsOutcome listLLMConfigs(const Model::ListLLMConfigsRequest &request)const;
			void listLLMConfigsAsync(const Model::ListLLMConfigsRequest& request, const ListLLMConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLLMConfigsOutcomeCallable listLLMConfigsCallable(const Model::ListLLMConfigsRequest& request) const;
			ListLabelTablesOutcome listLabelTables(const Model::ListLabelTablesRequest &request)const;
			void listLabelTablesAsync(const Model::ListLabelTablesRequest& request, const ListLabelTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLabelTablesOutcomeCallable listLabelTablesCallable(const Model::ListLabelTablesRequest& request) const;
			ListModelFeatureAvailableFeaturesOutcome listModelFeatureAvailableFeatures(const Model::ListModelFeatureAvailableFeaturesRequest &request)const;
			void listModelFeatureAvailableFeaturesAsync(const Model::ListModelFeatureAvailableFeaturesRequest& request, const ListModelFeatureAvailableFeaturesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListModelFeatureAvailableFeaturesOutcomeCallable listModelFeatureAvailableFeaturesCallable(const Model::ListModelFeatureAvailableFeaturesRequest& request) const;
			ListModelFeaturesOutcome listModelFeatures(const Model::ListModelFeaturesRequest &request)const;
			void listModelFeaturesAsync(const Model::ListModelFeaturesRequest& request, const ListModelFeaturesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListModelFeaturesOutcomeCallable listModelFeaturesCallable(const Model::ListModelFeaturesRequest& request) const;
			ListProjectFeatureViewsOutcome listProjectFeatureViews(const Model::ListProjectFeatureViewsRequest &request)const;
			void listProjectFeatureViewsAsync(const Model::ListProjectFeatureViewsRequest& request, const ListProjectFeatureViewsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProjectFeatureViewsOutcomeCallable listProjectFeatureViewsCallable(const Model::ListProjectFeatureViewsRequest& request) const;
			ListProjectFeaturesOutcome listProjectFeatures(const Model::ListProjectFeaturesRequest &request)const;
			void listProjectFeaturesAsync(const Model::ListProjectFeaturesRequest& request, const ListProjectFeaturesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProjectFeaturesOutcomeCallable listProjectFeaturesCallable(const Model::ListProjectFeaturesRequest& request) const;
			ListProjectsOutcome listProjects(const Model::ListProjectsRequest &request)const;
			void listProjectsAsync(const Model::ListProjectsRequest& request, const ListProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProjectsOutcomeCallable listProjectsCallable(const Model::ListProjectsRequest& request) const;
			ListTaskLogsOutcome listTaskLogs(const Model::ListTaskLogsRequest &request)const;
			void listTaskLogsAsync(const Model::ListTaskLogsRequest& request, const ListTaskLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTaskLogsOutcomeCallable listTaskLogsCallable(const Model::ListTaskLogsRequest& request) const;
			ListTasksOutcome listTasks(const Model::ListTasksRequest &request)const;
			void listTasksAsync(const Model::ListTasksRequest& request, const ListTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTasksOutcomeCallable listTasksCallable(const Model::ListTasksRequest& request) const;
			PublishFeatureViewTableOutcome publishFeatureViewTable(const Model::PublishFeatureViewTableRequest &request)const;
			void publishFeatureViewTableAsync(const Model::PublishFeatureViewTableRequest& request, const PublishFeatureViewTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PublishFeatureViewTableOutcomeCallable publishFeatureViewTableCallable(const Model::PublishFeatureViewTableRequest& request) const;
			StopTaskOutcome stopTask(const Model::StopTaskRequest &request)const;
			void stopTaskAsync(const Model::StopTaskRequest& request, const StopTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopTaskOutcomeCallable stopTaskCallable(const Model::StopTaskRequest& request) const;
			UpdateDatasourceOutcome updateDatasource(const Model::UpdateDatasourceRequest &request)const;
			void updateDatasourceAsync(const Model::UpdateDatasourceRequest& request, const UpdateDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDatasourceOutcomeCallable updateDatasourceCallable(const Model::UpdateDatasourceRequest& request) const;
			UpdateLLMConfigOutcome updateLLMConfig(const Model::UpdateLLMConfigRequest &request)const;
			void updateLLMConfigAsync(const Model::UpdateLLMConfigRequest& request, const UpdateLLMConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLLMConfigOutcomeCallable updateLLMConfigCallable(const Model::UpdateLLMConfigRequest& request) const;
			UpdateLabelTableOutcome updateLabelTable(const Model::UpdateLabelTableRequest &request)const;
			void updateLabelTableAsync(const Model::UpdateLabelTableRequest& request, const UpdateLabelTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLabelTableOutcomeCallable updateLabelTableCallable(const Model::UpdateLabelTableRequest& request) const;
			UpdateModelFeatureOutcome updateModelFeature(const Model::UpdateModelFeatureRequest &request)const;
			void updateModelFeatureAsync(const Model::UpdateModelFeatureRequest& request, const UpdateModelFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateModelFeatureOutcomeCallable updateModelFeatureCallable(const Model::UpdateModelFeatureRequest& request) const;
			UpdateModelFeatureFGFeatureOutcome updateModelFeatureFGFeature(const Model::UpdateModelFeatureFGFeatureRequest &request)const;
			void updateModelFeatureFGFeatureAsync(const Model::UpdateModelFeatureFGFeatureRequest& request, const UpdateModelFeatureFGFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateModelFeatureFGFeatureOutcomeCallable updateModelFeatureFGFeatureCallable(const Model::UpdateModelFeatureFGFeatureRequest& request) const;
			UpdateProjectOutcome updateProject(const Model::UpdateProjectRequest &request)const;
			void updateProjectAsync(const Model::UpdateProjectRequest& request, const UpdateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateProjectOutcomeCallable updateProjectCallable(const Model::UpdateProjectRequest& request) const;
			WriteFeatureViewTableOutcome writeFeatureViewTable(const Model::WriteFeatureViewTableRequest &request)const;
			void writeFeatureViewTableAsync(const Model::WriteFeatureViewTableRequest& request, const WriteFeatureViewTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			WriteFeatureViewTableOutcomeCallable writeFeatureViewTableCallable(const Model::WriteFeatureViewTableRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_PAIFEATURESTORE_PAIFEATURESTORECLIENT_H_
