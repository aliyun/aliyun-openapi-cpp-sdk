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

#ifndef ALIBABACLOUD_VERVERICA_VERVERICACLIENT_H_
#define ALIBABACLOUD_VERVERICA_VERVERICACLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "VervericaExport.h"
#include "model/CreateConnectorRequest.h"
#include "model/CreateConnectorResult.h"
#include "model/CreateDeploymentRequest.h"
#include "model/CreateDeploymentResult.h"
#include "model/CreateFormatRequest.h"
#include "model/CreateFormatResult.h"
#include "model/CreateMemberRequest.h"
#include "model/CreateMemberResult.h"
#include "model/CreateSavepointRequest.h"
#include "model/CreateSavepointResult.h"
#include "model/CreateSecretValueRequest.h"
#include "model/CreateSecretValueResult.h"
#include "model/CreateUdfArtifactRequest.h"
#include "model/CreateUdfArtifactResult.h"
#include "model/DatabaseExistsRequest.h"
#include "model/DatabaseExistsResult.h"
#include "model/DeleteArtifactRequest.h"
#include "model/DeleteArtifactResult.h"
#include "model/DeleteConnectorRequest.h"
#include "model/DeleteConnectorResult.h"
#include "model/DeleteDeploymentRequest.h"
#include "model/DeleteDeploymentResult.h"
#include "model/DeleteFormatRequest.h"
#include "model/DeleteFormatResult.h"
#include "model/DeleteMemberRequest.h"
#include "model/DeleteMemberResult.h"
#include "model/DeleteSecretValueRequest.h"
#include "model/DeleteSecretValueResult.h"
#include "model/DeleteUdfArtifactRequest.h"
#include "model/DeleteUdfArtifactResult.h"
#include "model/ExecuteSqlScriptRequest.h"
#include "model/ExecuteSqlScriptResult.h"
#include "model/ExecuteSqlscriptsStatementsRequest.h"
#include "model/ExecuteSqlscriptsStatementsResult.h"
#include "model/ForcefullyCreateLockRequest.h"
#include "model/ForcefullyCreateLockResult.h"
#include "model/FunctionExistsRequest.h"
#include "model/FunctionExistsResult.h"
#include "model/GenerateResourcePlanRequest.h"
#include "model/GenerateResourcePlanResult.h"
#include "model/GetArtifactMetadataRequest.h"
#include "model/GetArtifactMetadataResult.h"
#include "model/GetCatalogRequest.h"
#include "model/GetCatalogResult.h"
#include "model/GetDatabaseRequest.h"
#include "model/GetDatabaseResult.h"
#include "model/GetDefaultDatabaseRequest.h"
#include "model/GetDefaultDatabaseResult.h"
#include "model/GetDeploymentRequest.h"
#include "model/GetDeploymentResult.h"
#include "model/GetDeploymentDefaultsRequest.h"
#include "model/GetDeploymentDefaultsResult.h"
#include "model/GetFunctionRequest.h"
#include "model/GetFunctionResult.h"
#include "model/GetGlobalDeploymentDefaultsRequest.h"
#include "model/GetGlobalDeploymentDefaultsResult.h"
#include "model/GetResourcePlanRequest.h"
#include "model/GetResourcePlanResult.h"
#include "model/GetTableRequest.h"
#include "model/GetTableResult.h"
#include "model/GetUdfArtifactRequest.h"
#include "model/GetUdfArtifactResult.h"
#include "model/ListArtifactsRequest.h"
#include "model/ListArtifactsResult.h"
#include "model/ListCatalogsRequest.h"
#include "model/ListCatalogsResult.h"
#include "model/ListConnectorsRequest.h"
#include "model/ListConnectorsResult.h"
#include "model/ListDatabasesRequest.h"
#include "model/ListDatabasesResult.h"
#include "model/ListDeploymentTargetsRequest.h"
#include "model/ListDeploymentTargetsResult.h"
#include "model/ListDeploymentsRequest.h"
#include "model/ListDeploymentsResult.h"
#include "model/ListFlinkVersionsRequest.h"
#include "model/ListFlinkVersionsResult.h"
#include "model/ListFormatsRequest.h"
#include "model/ListFormatsResult.h"
#include "model/ListFunctionsRequest.h"
#include "model/ListFunctionsResult.h"
#include "model/ListJobsRequest.h"
#include "model/ListJobsResult.h"
#include "model/ListNamespacesRequest.h"
#include "model/ListNamespacesResult.h"
#include "model/ListSavepointsRequest.h"
#include "model/ListSavepointsResult.h"
#include "model/ListSecretValuesRequest.h"
#include "model/ListSecretValuesResult.h"
#include "model/ListSessionClustersRequest.h"
#include "model/ListSessionClustersResult.h"
#include "model/ListTablesRequest.h"
#include "model/ListTablesResult.h"
#include "model/ParseConnectorRequest.h"
#include "model/ParseConnectorResult.h"
#include "model/ParseFormatRequest.h"
#include "model/ParseFormatResult.h"
#include "model/ReplaceDeploymentRequest.h"
#include "model/ReplaceDeploymentResult.h"
#include "model/SetDeploymentResourceModeRequest.h"
#include "model/SetDeploymentResourceModeResult.h"
#include "model/TableExistsRequest.h"
#include "model/TableExistsResult.h"
#include "model/UpdateConnectorRequest.h"
#include "model/UpdateConnectorResult.h"
#include "model/UpdateDeploymentRequest.h"
#include "model/UpdateDeploymentResult.h"
#include "model/UpdateDeploymentDesiredStateRequest.h"
#include "model/UpdateDeploymentDesiredStateResult.h"
#include "model/UpdateFormatRequest.h"
#include "model/UpdateFormatResult.h"
#include "model/UpdateMemberRequest.h"
#include "model/UpdateMemberResult.h"
#include "model/UpdateUdfArtifactRequest.h"
#include "model/UpdateUdfArtifactResult.h"
#include "model/ValidateSqlScriptRequest.h"
#include "model/ValidateSqlScriptResult.h"


namespace AlibabaCloud
{
	namespace Ververica
	{
		class ALIBABACLOUD_VERVERICA_EXPORT VervericaClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateConnectorResult> CreateConnectorOutcome;
			typedef std::future<CreateConnectorOutcome> CreateConnectorOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::CreateConnectorRequest&, const CreateConnectorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateConnectorAsyncHandler;
			typedef Outcome<Error, Model::CreateDeploymentResult> CreateDeploymentOutcome;
			typedef std::future<CreateDeploymentOutcome> CreateDeploymentOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::CreateDeploymentRequest&, const CreateDeploymentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeploymentAsyncHandler;
			typedef Outcome<Error, Model::CreateFormatResult> CreateFormatOutcome;
			typedef std::future<CreateFormatOutcome> CreateFormatOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::CreateFormatRequest&, const CreateFormatOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFormatAsyncHandler;
			typedef Outcome<Error, Model::CreateMemberResult> CreateMemberOutcome;
			typedef std::future<CreateMemberOutcome> CreateMemberOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::CreateMemberRequest&, const CreateMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMemberAsyncHandler;
			typedef Outcome<Error, Model::CreateSavepointResult> CreateSavepointOutcome;
			typedef std::future<CreateSavepointOutcome> CreateSavepointOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::CreateSavepointRequest&, const CreateSavepointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSavepointAsyncHandler;
			typedef Outcome<Error, Model::CreateSecretValueResult> CreateSecretValueOutcome;
			typedef std::future<CreateSecretValueOutcome> CreateSecretValueOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::CreateSecretValueRequest&, const CreateSecretValueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecretValueAsyncHandler;
			typedef Outcome<Error, Model::CreateUdfArtifactResult> CreateUdfArtifactOutcome;
			typedef std::future<CreateUdfArtifactOutcome> CreateUdfArtifactOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::CreateUdfArtifactRequest&, const CreateUdfArtifactOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUdfArtifactAsyncHandler;
			typedef Outcome<Error, Model::DatabaseExistsResult> DatabaseExistsOutcome;
			typedef std::future<DatabaseExistsOutcome> DatabaseExistsOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::DatabaseExistsRequest&, const DatabaseExistsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DatabaseExistsAsyncHandler;
			typedef Outcome<Error, Model::DeleteArtifactResult> DeleteArtifactOutcome;
			typedef std::future<DeleteArtifactOutcome> DeleteArtifactOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::DeleteArtifactRequest&, const DeleteArtifactOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteArtifactAsyncHandler;
			typedef Outcome<Error, Model::DeleteConnectorResult> DeleteConnectorOutcome;
			typedef std::future<DeleteConnectorOutcome> DeleteConnectorOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::DeleteConnectorRequest&, const DeleteConnectorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConnectorAsyncHandler;
			typedef Outcome<Error, Model::DeleteDeploymentResult> DeleteDeploymentOutcome;
			typedef std::future<DeleteDeploymentOutcome> DeleteDeploymentOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::DeleteDeploymentRequest&, const DeleteDeploymentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeploymentAsyncHandler;
			typedef Outcome<Error, Model::DeleteFormatResult> DeleteFormatOutcome;
			typedef std::future<DeleteFormatOutcome> DeleteFormatOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::DeleteFormatRequest&, const DeleteFormatOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFormatAsyncHandler;
			typedef Outcome<Error, Model::DeleteMemberResult> DeleteMemberOutcome;
			typedef std::future<DeleteMemberOutcome> DeleteMemberOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::DeleteMemberRequest&, const DeleteMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMemberAsyncHandler;
			typedef Outcome<Error, Model::DeleteSecretValueResult> DeleteSecretValueOutcome;
			typedef std::future<DeleteSecretValueOutcome> DeleteSecretValueOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::DeleteSecretValueRequest&, const DeleteSecretValueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecretValueAsyncHandler;
			typedef Outcome<Error, Model::DeleteUdfArtifactResult> DeleteUdfArtifactOutcome;
			typedef std::future<DeleteUdfArtifactOutcome> DeleteUdfArtifactOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::DeleteUdfArtifactRequest&, const DeleteUdfArtifactOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUdfArtifactAsyncHandler;
			typedef Outcome<Error, Model::ExecuteSqlScriptResult> ExecuteSqlScriptOutcome;
			typedef std::future<ExecuteSqlScriptOutcome> ExecuteSqlScriptOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::ExecuteSqlScriptRequest&, const ExecuteSqlScriptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteSqlScriptAsyncHandler;
			typedef Outcome<Error, Model::ExecuteSqlscriptsStatementsResult> ExecuteSqlscriptsStatementsOutcome;
			typedef std::future<ExecuteSqlscriptsStatementsOutcome> ExecuteSqlscriptsStatementsOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::ExecuteSqlscriptsStatementsRequest&, const ExecuteSqlscriptsStatementsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteSqlscriptsStatementsAsyncHandler;
			typedef Outcome<Error, Model::ForcefullyCreateLockResult> ForcefullyCreateLockOutcome;
			typedef std::future<ForcefullyCreateLockOutcome> ForcefullyCreateLockOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::ForcefullyCreateLockRequest&, const ForcefullyCreateLockOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ForcefullyCreateLockAsyncHandler;
			typedef Outcome<Error, Model::FunctionExistsResult> FunctionExistsOutcome;
			typedef std::future<FunctionExistsOutcome> FunctionExistsOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::FunctionExistsRequest&, const FunctionExistsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FunctionExistsAsyncHandler;
			typedef Outcome<Error, Model::GenerateResourcePlanResult> GenerateResourcePlanOutcome;
			typedef std::future<GenerateResourcePlanOutcome> GenerateResourcePlanOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::GenerateResourcePlanRequest&, const GenerateResourcePlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateResourcePlanAsyncHandler;
			typedef Outcome<Error, Model::GetArtifactMetadataResult> GetArtifactMetadataOutcome;
			typedef std::future<GetArtifactMetadataOutcome> GetArtifactMetadataOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::GetArtifactMetadataRequest&, const GetArtifactMetadataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetArtifactMetadataAsyncHandler;
			typedef Outcome<Error, Model::GetCatalogResult> GetCatalogOutcome;
			typedef std::future<GetCatalogOutcome> GetCatalogOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::GetCatalogRequest&, const GetCatalogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCatalogAsyncHandler;
			typedef Outcome<Error, Model::GetDatabaseResult> GetDatabaseOutcome;
			typedef std::future<GetDatabaseOutcome> GetDatabaseOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::GetDatabaseRequest&, const GetDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDatabaseAsyncHandler;
			typedef Outcome<Error, Model::GetDefaultDatabaseResult> GetDefaultDatabaseOutcome;
			typedef std::future<GetDefaultDatabaseOutcome> GetDefaultDatabaseOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::GetDefaultDatabaseRequest&, const GetDefaultDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDefaultDatabaseAsyncHandler;
			typedef Outcome<Error, Model::GetDeploymentResult> GetDeploymentOutcome;
			typedef std::future<GetDeploymentOutcome> GetDeploymentOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::GetDeploymentRequest&, const GetDeploymentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDeploymentAsyncHandler;
			typedef Outcome<Error, Model::GetDeploymentDefaultsResult> GetDeploymentDefaultsOutcome;
			typedef std::future<GetDeploymentDefaultsOutcome> GetDeploymentDefaultsOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::GetDeploymentDefaultsRequest&, const GetDeploymentDefaultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDeploymentDefaultsAsyncHandler;
			typedef Outcome<Error, Model::GetFunctionResult> GetFunctionOutcome;
			typedef std::future<GetFunctionOutcome> GetFunctionOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::GetFunctionRequest&, const GetFunctionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFunctionAsyncHandler;
			typedef Outcome<Error, Model::GetGlobalDeploymentDefaultsResult> GetGlobalDeploymentDefaultsOutcome;
			typedef std::future<GetGlobalDeploymentDefaultsOutcome> GetGlobalDeploymentDefaultsOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::GetGlobalDeploymentDefaultsRequest&, const GetGlobalDeploymentDefaultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGlobalDeploymentDefaultsAsyncHandler;
			typedef Outcome<Error, Model::GetResourcePlanResult> GetResourcePlanOutcome;
			typedef std::future<GetResourcePlanOutcome> GetResourcePlanOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::GetResourcePlanRequest&, const GetResourcePlanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetResourcePlanAsyncHandler;
			typedef Outcome<Error, Model::GetTableResult> GetTableOutcome;
			typedef std::future<GetTableOutcome> GetTableOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::GetTableRequest&, const GetTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTableAsyncHandler;
			typedef Outcome<Error, Model::GetUdfArtifactResult> GetUdfArtifactOutcome;
			typedef std::future<GetUdfArtifactOutcome> GetUdfArtifactOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::GetUdfArtifactRequest&, const GetUdfArtifactOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUdfArtifactAsyncHandler;
			typedef Outcome<Error, Model::ListArtifactsResult> ListArtifactsOutcome;
			typedef std::future<ListArtifactsOutcome> ListArtifactsOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::ListArtifactsRequest&, const ListArtifactsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListArtifactsAsyncHandler;
			typedef Outcome<Error, Model::ListCatalogsResult> ListCatalogsOutcome;
			typedef std::future<ListCatalogsOutcome> ListCatalogsOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::ListCatalogsRequest&, const ListCatalogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCatalogsAsyncHandler;
			typedef Outcome<Error, Model::ListConnectorsResult> ListConnectorsOutcome;
			typedef std::future<ListConnectorsOutcome> ListConnectorsOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::ListConnectorsRequest&, const ListConnectorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListConnectorsAsyncHandler;
			typedef Outcome<Error, Model::ListDatabasesResult> ListDatabasesOutcome;
			typedef std::future<ListDatabasesOutcome> ListDatabasesOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::ListDatabasesRequest&, const ListDatabasesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDatabasesAsyncHandler;
			typedef Outcome<Error, Model::ListDeploymentTargetsResult> ListDeploymentTargetsOutcome;
			typedef std::future<ListDeploymentTargetsOutcome> ListDeploymentTargetsOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::ListDeploymentTargetsRequest&, const ListDeploymentTargetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDeploymentTargetsAsyncHandler;
			typedef Outcome<Error, Model::ListDeploymentsResult> ListDeploymentsOutcome;
			typedef std::future<ListDeploymentsOutcome> ListDeploymentsOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::ListDeploymentsRequest&, const ListDeploymentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDeploymentsAsyncHandler;
			typedef Outcome<Error, Model::ListFlinkVersionsResult> ListFlinkVersionsOutcome;
			typedef std::future<ListFlinkVersionsOutcome> ListFlinkVersionsOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::ListFlinkVersionsRequest&, const ListFlinkVersionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlinkVersionsAsyncHandler;
			typedef Outcome<Error, Model::ListFormatsResult> ListFormatsOutcome;
			typedef std::future<ListFormatsOutcome> ListFormatsOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::ListFormatsRequest&, const ListFormatsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFormatsAsyncHandler;
			typedef Outcome<Error, Model::ListFunctionsResult> ListFunctionsOutcome;
			typedef std::future<ListFunctionsOutcome> ListFunctionsOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::ListFunctionsRequest&, const ListFunctionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFunctionsAsyncHandler;
			typedef Outcome<Error, Model::ListJobsResult> ListJobsOutcome;
			typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::ListJobsRequest&, const ListJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobsAsyncHandler;
			typedef Outcome<Error, Model::ListNamespacesResult> ListNamespacesOutcome;
			typedef std::future<ListNamespacesOutcome> ListNamespacesOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::ListNamespacesRequest&, const ListNamespacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNamespacesAsyncHandler;
			typedef Outcome<Error, Model::ListSavepointsResult> ListSavepointsOutcome;
			typedef std::future<ListSavepointsOutcome> ListSavepointsOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::ListSavepointsRequest&, const ListSavepointsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSavepointsAsyncHandler;
			typedef Outcome<Error, Model::ListSecretValuesResult> ListSecretValuesOutcome;
			typedef std::future<ListSecretValuesOutcome> ListSecretValuesOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::ListSecretValuesRequest&, const ListSecretValuesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSecretValuesAsyncHandler;
			typedef Outcome<Error, Model::ListSessionClustersResult> ListSessionClustersOutcome;
			typedef std::future<ListSessionClustersOutcome> ListSessionClustersOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::ListSessionClustersRequest&, const ListSessionClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSessionClustersAsyncHandler;
			typedef Outcome<Error, Model::ListTablesResult> ListTablesOutcome;
			typedef std::future<ListTablesOutcome> ListTablesOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::ListTablesRequest&, const ListTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTablesAsyncHandler;
			typedef Outcome<Error, Model::ParseConnectorResult> ParseConnectorOutcome;
			typedef std::future<ParseConnectorOutcome> ParseConnectorOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::ParseConnectorRequest&, const ParseConnectorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ParseConnectorAsyncHandler;
			typedef Outcome<Error, Model::ParseFormatResult> ParseFormatOutcome;
			typedef std::future<ParseFormatOutcome> ParseFormatOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::ParseFormatRequest&, const ParseFormatOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ParseFormatAsyncHandler;
			typedef Outcome<Error, Model::ReplaceDeploymentResult> ReplaceDeploymentOutcome;
			typedef std::future<ReplaceDeploymentOutcome> ReplaceDeploymentOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::ReplaceDeploymentRequest&, const ReplaceDeploymentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceDeploymentAsyncHandler;
			typedef Outcome<Error, Model::SetDeploymentResourceModeResult> SetDeploymentResourceModeOutcome;
			typedef std::future<SetDeploymentResourceModeOutcome> SetDeploymentResourceModeOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::SetDeploymentResourceModeRequest&, const SetDeploymentResourceModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDeploymentResourceModeAsyncHandler;
			typedef Outcome<Error, Model::TableExistsResult> TableExistsOutcome;
			typedef std::future<TableExistsOutcome> TableExistsOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::TableExistsRequest&, const TableExistsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TableExistsAsyncHandler;
			typedef Outcome<Error, Model::UpdateConnectorResult> UpdateConnectorOutcome;
			typedef std::future<UpdateConnectorOutcome> UpdateConnectorOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::UpdateConnectorRequest&, const UpdateConnectorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateConnectorAsyncHandler;
			typedef Outcome<Error, Model::UpdateDeploymentResult> UpdateDeploymentOutcome;
			typedef std::future<UpdateDeploymentOutcome> UpdateDeploymentOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::UpdateDeploymentRequest&, const UpdateDeploymentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDeploymentAsyncHandler;
			typedef Outcome<Error, Model::UpdateDeploymentDesiredStateResult> UpdateDeploymentDesiredStateOutcome;
			typedef std::future<UpdateDeploymentDesiredStateOutcome> UpdateDeploymentDesiredStateOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::UpdateDeploymentDesiredStateRequest&, const UpdateDeploymentDesiredStateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDeploymentDesiredStateAsyncHandler;
			typedef Outcome<Error, Model::UpdateFormatResult> UpdateFormatOutcome;
			typedef std::future<UpdateFormatOutcome> UpdateFormatOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::UpdateFormatRequest&, const UpdateFormatOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFormatAsyncHandler;
			typedef Outcome<Error, Model::UpdateMemberResult> UpdateMemberOutcome;
			typedef std::future<UpdateMemberOutcome> UpdateMemberOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::UpdateMemberRequest&, const UpdateMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMemberAsyncHandler;
			typedef Outcome<Error, Model::UpdateUdfArtifactResult> UpdateUdfArtifactOutcome;
			typedef std::future<UpdateUdfArtifactOutcome> UpdateUdfArtifactOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::UpdateUdfArtifactRequest&, const UpdateUdfArtifactOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUdfArtifactAsyncHandler;
			typedef Outcome<Error, Model::ValidateSqlScriptResult> ValidateSqlScriptOutcome;
			typedef std::future<ValidateSqlScriptOutcome> ValidateSqlScriptOutcomeCallable;
			typedef std::function<void(const VervericaClient*, const Model::ValidateSqlScriptRequest&, const ValidateSqlScriptOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ValidateSqlScriptAsyncHandler;

			VervericaClient(const Credentials &credentials, const ClientConfiguration &configuration);
			VervericaClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			VervericaClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~VervericaClient();
			CreateConnectorOutcome createConnector(const Model::CreateConnectorRequest &request)const;
			void createConnectorAsync(const Model::CreateConnectorRequest& request, const CreateConnectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateConnectorOutcomeCallable createConnectorCallable(const Model::CreateConnectorRequest& request) const;
			CreateDeploymentOutcome createDeployment(const Model::CreateDeploymentRequest &request)const;
			void createDeploymentAsync(const Model::CreateDeploymentRequest& request, const CreateDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDeploymentOutcomeCallable createDeploymentCallable(const Model::CreateDeploymentRequest& request) const;
			CreateFormatOutcome createFormat(const Model::CreateFormatRequest &request)const;
			void createFormatAsync(const Model::CreateFormatRequest& request, const CreateFormatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFormatOutcomeCallable createFormatCallable(const Model::CreateFormatRequest& request) const;
			CreateMemberOutcome createMember(const Model::CreateMemberRequest &request)const;
			void createMemberAsync(const Model::CreateMemberRequest& request, const CreateMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMemberOutcomeCallable createMemberCallable(const Model::CreateMemberRequest& request) const;
			CreateSavepointOutcome createSavepoint(const Model::CreateSavepointRequest &request)const;
			void createSavepointAsync(const Model::CreateSavepointRequest& request, const CreateSavepointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSavepointOutcomeCallable createSavepointCallable(const Model::CreateSavepointRequest& request) const;
			CreateSecretValueOutcome createSecretValue(const Model::CreateSecretValueRequest &request)const;
			void createSecretValueAsync(const Model::CreateSecretValueRequest& request, const CreateSecretValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSecretValueOutcomeCallable createSecretValueCallable(const Model::CreateSecretValueRequest& request) const;
			CreateUdfArtifactOutcome createUdfArtifact(const Model::CreateUdfArtifactRequest &request)const;
			void createUdfArtifactAsync(const Model::CreateUdfArtifactRequest& request, const CreateUdfArtifactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUdfArtifactOutcomeCallable createUdfArtifactCallable(const Model::CreateUdfArtifactRequest& request) const;
			DatabaseExistsOutcome databaseExists(const Model::DatabaseExistsRequest &request)const;
			void databaseExistsAsync(const Model::DatabaseExistsRequest& request, const DatabaseExistsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DatabaseExistsOutcomeCallable databaseExistsCallable(const Model::DatabaseExistsRequest& request) const;
			DeleteArtifactOutcome deleteArtifact(const Model::DeleteArtifactRequest &request)const;
			void deleteArtifactAsync(const Model::DeleteArtifactRequest& request, const DeleteArtifactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteArtifactOutcomeCallable deleteArtifactCallable(const Model::DeleteArtifactRequest& request) const;
			DeleteConnectorOutcome deleteConnector(const Model::DeleteConnectorRequest &request)const;
			void deleteConnectorAsync(const Model::DeleteConnectorRequest& request, const DeleteConnectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteConnectorOutcomeCallable deleteConnectorCallable(const Model::DeleteConnectorRequest& request) const;
			DeleteDeploymentOutcome deleteDeployment(const Model::DeleteDeploymentRequest &request)const;
			void deleteDeploymentAsync(const Model::DeleteDeploymentRequest& request, const DeleteDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDeploymentOutcomeCallable deleteDeploymentCallable(const Model::DeleteDeploymentRequest& request) const;
			DeleteFormatOutcome deleteFormat(const Model::DeleteFormatRequest &request)const;
			void deleteFormatAsync(const Model::DeleteFormatRequest& request, const DeleteFormatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFormatOutcomeCallable deleteFormatCallable(const Model::DeleteFormatRequest& request) const;
			DeleteMemberOutcome deleteMember(const Model::DeleteMemberRequest &request)const;
			void deleteMemberAsync(const Model::DeleteMemberRequest& request, const DeleteMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMemberOutcomeCallable deleteMemberCallable(const Model::DeleteMemberRequest& request) const;
			DeleteSecretValueOutcome deleteSecretValue(const Model::DeleteSecretValueRequest &request)const;
			void deleteSecretValueAsync(const Model::DeleteSecretValueRequest& request, const DeleteSecretValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSecretValueOutcomeCallable deleteSecretValueCallable(const Model::DeleteSecretValueRequest& request) const;
			DeleteUdfArtifactOutcome deleteUdfArtifact(const Model::DeleteUdfArtifactRequest &request)const;
			void deleteUdfArtifactAsync(const Model::DeleteUdfArtifactRequest& request, const DeleteUdfArtifactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUdfArtifactOutcomeCallable deleteUdfArtifactCallable(const Model::DeleteUdfArtifactRequest& request) const;
			ExecuteSqlScriptOutcome executeSqlScript(const Model::ExecuteSqlScriptRequest &request)const;
			void executeSqlScriptAsync(const Model::ExecuteSqlScriptRequest& request, const ExecuteSqlScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecuteSqlScriptOutcomeCallable executeSqlScriptCallable(const Model::ExecuteSqlScriptRequest& request) const;
			ExecuteSqlscriptsStatementsOutcome executeSqlscriptsStatements(const Model::ExecuteSqlscriptsStatementsRequest &request)const;
			void executeSqlscriptsStatementsAsync(const Model::ExecuteSqlscriptsStatementsRequest& request, const ExecuteSqlscriptsStatementsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecuteSqlscriptsStatementsOutcomeCallable executeSqlscriptsStatementsCallable(const Model::ExecuteSqlscriptsStatementsRequest& request) const;
			ForcefullyCreateLockOutcome forcefullyCreateLock(const Model::ForcefullyCreateLockRequest &request)const;
			void forcefullyCreateLockAsync(const Model::ForcefullyCreateLockRequest& request, const ForcefullyCreateLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ForcefullyCreateLockOutcomeCallable forcefullyCreateLockCallable(const Model::ForcefullyCreateLockRequest& request) const;
			FunctionExistsOutcome functionExists(const Model::FunctionExistsRequest &request)const;
			void functionExistsAsync(const Model::FunctionExistsRequest& request, const FunctionExistsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FunctionExistsOutcomeCallable functionExistsCallable(const Model::FunctionExistsRequest& request) const;
			GenerateResourcePlanOutcome generateResourcePlan(const Model::GenerateResourcePlanRequest &request)const;
			void generateResourcePlanAsync(const Model::GenerateResourcePlanRequest& request, const GenerateResourcePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateResourcePlanOutcomeCallable generateResourcePlanCallable(const Model::GenerateResourcePlanRequest& request) const;
			GetArtifactMetadataOutcome getArtifactMetadata(const Model::GetArtifactMetadataRequest &request)const;
			void getArtifactMetadataAsync(const Model::GetArtifactMetadataRequest& request, const GetArtifactMetadataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetArtifactMetadataOutcomeCallable getArtifactMetadataCallable(const Model::GetArtifactMetadataRequest& request) const;
			GetCatalogOutcome getCatalog(const Model::GetCatalogRequest &request)const;
			void getCatalogAsync(const Model::GetCatalogRequest& request, const GetCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCatalogOutcomeCallable getCatalogCallable(const Model::GetCatalogRequest& request) const;
			GetDatabaseOutcome getDatabase(const Model::GetDatabaseRequest &request)const;
			void getDatabaseAsync(const Model::GetDatabaseRequest& request, const GetDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDatabaseOutcomeCallable getDatabaseCallable(const Model::GetDatabaseRequest& request) const;
			GetDefaultDatabaseOutcome getDefaultDatabase(const Model::GetDefaultDatabaseRequest &request)const;
			void getDefaultDatabaseAsync(const Model::GetDefaultDatabaseRequest& request, const GetDefaultDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDefaultDatabaseOutcomeCallable getDefaultDatabaseCallable(const Model::GetDefaultDatabaseRequest& request) const;
			GetDeploymentOutcome getDeployment(const Model::GetDeploymentRequest &request)const;
			void getDeploymentAsync(const Model::GetDeploymentRequest& request, const GetDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDeploymentOutcomeCallable getDeploymentCallable(const Model::GetDeploymentRequest& request) const;
			GetDeploymentDefaultsOutcome getDeploymentDefaults(const Model::GetDeploymentDefaultsRequest &request)const;
			void getDeploymentDefaultsAsync(const Model::GetDeploymentDefaultsRequest& request, const GetDeploymentDefaultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDeploymentDefaultsOutcomeCallable getDeploymentDefaultsCallable(const Model::GetDeploymentDefaultsRequest& request) const;
			GetFunctionOutcome getFunction(const Model::GetFunctionRequest &request)const;
			void getFunctionAsync(const Model::GetFunctionRequest& request, const GetFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFunctionOutcomeCallable getFunctionCallable(const Model::GetFunctionRequest& request) const;
			GetGlobalDeploymentDefaultsOutcome getGlobalDeploymentDefaults(const Model::GetGlobalDeploymentDefaultsRequest &request)const;
			void getGlobalDeploymentDefaultsAsync(const Model::GetGlobalDeploymentDefaultsRequest& request, const GetGlobalDeploymentDefaultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGlobalDeploymentDefaultsOutcomeCallable getGlobalDeploymentDefaultsCallable(const Model::GetGlobalDeploymentDefaultsRequest& request) const;
			GetResourcePlanOutcome getResourcePlan(const Model::GetResourcePlanRequest &request)const;
			void getResourcePlanAsync(const Model::GetResourcePlanRequest& request, const GetResourcePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetResourcePlanOutcomeCallable getResourcePlanCallable(const Model::GetResourcePlanRequest& request) const;
			GetTableOutcome getTable(const Model::GetTableRequest &request)const;
			void getTableAsync(const Model::GetTableRequest& request, const GetTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTableOutcomeCallable getTableCallable(const Model::GetTableRequest& request) const;
			GetUdfArtifactOutcome getUdfArtifact(const Model::GetUdfArtifactRequest &request)const;
			void getUdfArtifactAsync(const Model::GetUdfArtifactRequest& request, const GetUdfArtifactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUdfArtifactOutcomeCallable getUdfArtifactCallable(const Model::GetUdfArtifactRequest& request) const;
			ListArtifactsOutcome listArtifacts(const Model::ListArtifactsRequest &request)const;
			void listArtifactsAsync(const Model::ListArtifactsRequest& request, const ListArtifactsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListArtifactsOutcomeCallable listArtifactsCallable(const Model::ListArtifactsRequest& request) const;
			ListCatalogsOutcome listCatalogs(const Model::ListCatalogsRequest &request)const;
			void listCatalogsAsync(const Model::ListCatalogsRequest& request, const ListCatalogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCatalogsOutcomeCallable listCatalogsCallable(const Model::ListCatalogsRequest& request) const;
			ListConnectorsOutcome listConnectors(const Model::ListConnectorsRequest &request)const;
			void listConnectorsAsync(const Model::ListConnectorsRequest& request, const ListConnectorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListConnectorsOutcomeCallable listConnectorsCallable(const Model::ListConnectorsRequest& request) const;
			ListDatabasesOutcome listDatabases(const Model::ListDatabasesRequest &request)const;
			void listDatabasesAsync(const Model::ListDatabasesRequest& request, const ListDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDatabasesOutcomeCallable listDatabasesCallable(const Model::ListDatabasesRequest& request) const;
			ListDeploymentTargetsOutcome listDeploymentTargets(const Model::ListDeploymentTargetsRequest &request)const;
			void listDeploymentTargetsAsync(const Model::ListDeploymentTargetsRequest& request, const ListDeploymentTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDeploymentTargetsOutcomeCallable listDeploymentTargetsCallable(const Model::ListDeploymentTargetsRequest& request) const;
			ListDeploymentsOutcome listDeployments(const Model::ListDeploymentsRequest &request)const;
			void listDeploymentsAsync(const Model::ListDeploymentsRequest& request, const ListDeploymentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDeploymentsOutcomeCallable listDeploymentsCallable(const Model::ListDeploymentsRequest& request) const;
			ListFlinkVersionsOutcome listFlinkVersions(const Model::ListFlinkVersionsRequest &request)const;
			void listFlinkVersionsAsync(const Model::ListFlinkVersionsRequest& request, const ListFlinkVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlinkVersionsOutcomeCallable listFlinkVersionsCallable(const Model::ListFlinkVersionsRequest& request) const;
			ListFormatsOutcome listFormats(const Model::ListFormatsRequest &request)const;
			void listFormatsAsync(const Model::ListFormatsRequest& request, const ListFormatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFormatsOutcomeCallable listFormatsCallable(const Model::ListFormatsRequest& request) const;
			ListFunctionsOutcome listFunctions(const Model::ListFunctionsRequest &request)const;
			void listFunctionsAsync(const Model::ListFunctionsRequest& request, const ListFunctionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFunctionsOutcomeCallable listFunctionsCallable(const Model::ListFunctionsRequest& request) const;
			ListJobsOutcome listJobs(const Model::ListJobsRequest &request)const;
			void listJobsAsync(const Model::ListJobsRequest& request, const ListJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobsOutcomeCallable listJobsCallable(const Model::ListJobsRequest& request) const;
			ListNamespacesOutcome listNamespaces(const Model::ListNamespacesRequest &request)const;
			void listNamespacesAsync(const Model::ListNamespacesRequest& request, const ListNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNamespacesOutcomeCallable listNamespacesCallable(const Model::ListNamespacesRequest& request) const;
			ListSavepointsOutcome listSavepoints(const Model::ListSavepointsRequest &request)const;
			void listSavepointsAsync(const Model::ListSavepointsRequest& request, const ListSavepointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSavepointsOutcomeCallable listSavepointsCallable(const Model::ListSavepointsRequest& request) const;
			ListSecretValuesOutcome listSecretValues(const Model::ListSecretValuesRequest &request)const;
			void listSecretValuesAsync(const Model::ListSecretValuesRequest& request, const ListSecretValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSecretValuesOutcomeCallable listSecretValuesCallable(const Model::ListSecretValuesRequest& request) const;
			ListSessionClustersOutcome listSessionClusters(const Model::ListSessionClustersRequest &request)const;
			void listSessionClustersAsync(const Model::ListSessionClustersRequest& request, const ListSessionClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSessionClustersOutcomeCallable listSessionClustersCallable(const Model::ListSessionClustersRequest& request) const;
			ListTablesOutcome listTables(const Model::ListTablesRequest &request)const;
			void listTablesAsync(const Model::ListTablesRequest& request, const ListTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTablesOutcomeCallable listTablesCallable(const Model::ListTablesRequest& request) const;
			ParseConnectorOutcome parseConnector(const Model::ParseConnectorRequest &request)const;
			void parseConnectorAsync(const Model::ParseConnectorRequest& request, const ParseConnectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ParseConnectorOutcomeCallable parseConnectorCallable(const Model::ParseConnectorRequest& request) const;
			ParseFormatOutcome parseFormat(const Model::ParseFormatRequest &request)const;
			void parseFormatAsync(const Model::ParseFormatRequest& request, const ParseFormatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ParseFormatOutcomeCallable parseFormatCallable(const Model::ParseFormatRequest& request) const;
			ReplaceDeploymentOutcome replaceDeployment(const Model::ReplaceDeploymentRequest &request)const;
			void replaceDeploymentAsync(const Model::ReplaceDeploymentRequest& request, const ReplaceDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReplaceDeploymentOutcomeCallable replaceDeploymentCallable(const Model::ReplaceDeploymentRequest& request) const;
			SetDeploymentResourceModeOutcome setDeploymentResourceMode(const Model::SetDeploymentResourceModeRequest &request)const;
			void setDeploymentResourceModeAsync(const Model::SetDeploymentResourceModeRequest& request, const SetDeploymentResourceModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDeploymentResourceModeOutcomeCallable setDeploymentResourceModeCallable(const Model::SetDeploymentResourceModeRequest& request) const;
			TableExistsOutcome tableExists(const Model::TableExistsRequest &request)const;
			void tableExistsAsync(const Model::TableExistsRequest& request, const TableExistsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TableExistsOutcomeCallable tableExistsCallable(const Model::TableExistsRequest& request) const;
			UpdateConnectorOutcome updateConnector(const Model::UpdateConnectorRequest &request)const;
			void updateConnectorAsync(const Model::UpdateConnectorRequest& request, const UpdateConnectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateConnectorOutcomeCallable updateConnectorCallable(const Model::UpdateConnectorRequest& request) const;
			UpdateDeploymentOutcome updateDeployment(const Model::UpdateDeploymentRequest &request)const;
			void updateDeploymentAsync(const Model::UpdateDeploymentRequest& request, const UpdateDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDeploymentOutcomeCallable updateDeploymentCallable(const Model::UpdateDeploymentRequest& request) const;
			UpdateDeploymentDesiredStateOutcome updateDeploymentDesiredState(const Model::UpdateDeploymentDesiredStateRequest &request)const;
			void updateDeploymentDesiredStateAsync(const Model::UpdateDeploymentDesiredStateRequest& request, const UpdateDeploymentDesiredStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDeploymentDesiredStateOutcomeCallable updateDeploymentDesiredStateCallable(const Model::UpdateDeploymentDesiredStateRequest& request) const;
			UpdateFormatOutcome updateFormat(const Model::UpdateFormatRequest &request)const;
			void updateFormatAsync(const Model::UpdateFormatRequest& request, const UpdateFormatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateFormatOutcomeCallable updateFormatCallable(const Model::UpdateFormatRequest& request) const;
			UpdateMemberOutcome updateMember(const Model::UpdateMemberRequest &request)const;
			void updateMemberAsync(const Model::UpdateMemberRequest& request, const UpdateMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMemberOutcomeCallable updateMemberCallable(const Model::UpdateMemberRequest& request) const;
			UpdateUdfArtifactOutcome updateUdfArtifact(const Model::UpdateUdfArtifactRequest &request)const;
			void updateUdfArtifactAsync(const Model::UpdateUdfArtifactRequest& request, const UpdateUdfArtifactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateUdfArtifactOutcomeCallable updateUdfArtifactCallable(const Model::UpdateUdfArtifactRequest& request) const;
			ValidateSqlScriptOutcome validateSqlScript(const Model::ValidateSqlScriptRequest &request)const;
			void validateSqlScriptAsync(const Model::ValidateSqlScriptRequest& request, const ValidateSqlScriptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ValidateSqlScriptOutcomeCallable validateSqlScriptCallable(const Model::ValidateSqlScriptRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_VERVERICA_VERVERICACLIENT_H_
