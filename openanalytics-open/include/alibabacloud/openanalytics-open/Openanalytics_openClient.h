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

#ifndef ALIBABACLOUD_OPENANALYTICS_OPEN_OPENANALYTICS_OPENCLIENT_H_
#define ALIBABACLOUD_OPENANALYTICS_OPEN_OPENANALYTICS_OPENCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Openanalytics_openExport.h"
#include "model/AddAccountRequest.h"
#include "model/AddAccountResult.h"
#include "model/AddEndPointRequest.h"
#include "model/AddEndPointResult.h"
#include "model/AddPartitionsRequest.h"
#include "model/AddPartitionsResult.h"
#include "model/AlterDatabaseRequest.h"
#include "model/AlterDatabaseResult.h"
#include "model/AlterTableRequest.h"
#include "model/AlterTableResult.h"
#include "model/BindingRamUidToDlaAccountRequest.h"
#include "model/BindingRamUidToDlaAccountResult.h"
#include "model/CreateDatabaseRequest.h"
#include "model/CreateDatabaseResult.h"
#include "model/CreateInstanceRequest.h"
#include "model/CreateInstanceResult.h"
#include "model/CreateServiceLinkedRoleRequest.h"
#include "model/CreateServiceLinkedRoleResult.h"
#include "model/CreateTableRequest.h"
#include "model/CreateTableResult.h"
#include "model/CreateUserNetConfigRequest.h"
#include "model/CreateUserNetConfigResult.h"
#include "model/CreateVirtualClusterForSparkRequest.h"
#include "model/CreateVirtualClusterForSparkResult.h"
#include "model/DecodeStsTokenRequest.h"
#include "model/DecodeStsTokenResult.h"
#include "model/DeleteAccountRequest.h"
#include "model/DeleteAccountResult.h"
#include "model/DeleteUserNetConfigRequest.h"
#include "model/DeleteUserNetConfigResult.h"
#include "model/DescribeCapacityRequest.h"
#include "model/DescribeCapacityResult.h"
#include "model/DescribeDataLakeAnalyticsServiceRequest.h"
#include "model/DescribeDataLakeAnalyticsServiceResult.h"
#include "model/DescribeRegionListRequest.h"
#include "model/DescribeRegionListResult.h"
#include "model/DescribeVirtualClusterRequest.h"
#include "model/DescribeVirtualClusterResult.h"
#include "model/DescribeVirtualClusterV2Request.h"
#include "model/DescribeVirtualClusterV2Result.h"
#include "model/DestroyVirtualClusterRequest.h"
#include "model/DestroyVirtualClusterResult.h"
#include "model/DropDatabaseRequest.h"
#include "model/DropDatabaseResult.h"
#include "model/DropPartitionRequest.h"
#include "model/DropPartitionResult.h"
#include "model/DropTableRequest.h"
#include "model/DropTableResult.h"
#include "model/ForbidAutomaticMetaSyncAsIntegrationAccountRequest.h"
#include "model/ForbidAutomaticMetaSyncAsIntegrationAccountResult.h"
#include "model/GetAllDatabasesRequest.h"
#include "model/GetAllDatabasesResult.h"
#include "model/GetAllTablesRequest.h"
#include "model/GetAllTablesResult.h"
#include "model/GetAllowIPRequest.h"
#include "model/GetAllowIPResult.h"
#include "model/GetConsolePermissionRequest.h"
#include "model/GetConsolePermissionResult.h"
#include "model/GetDLAServiceStatusRequest.h"
#include "model/GetDLAServiceStatusResult.h"
#include "model/GetDatabaseRequest.h"
#include "model/GetDatabaseResult.h"
#include "model/GetEndPointRequest.h"
#include "model/GetEndPointResult.h"
#include "model/GetEndPointByDomainRequest.h"
#include "model/GetEndPointByDomainResult.h"
#include "model/GetJobDetailRequest.h"
#include "model/GetJobDetailResult.h"
#include "model/GetJobLogRequest.h"
#include "model/GetJobLogResult.h"
#include "model/GetJobStatusRequest.h"
#include "model/GetJobStatusResult.h"
#include "model/GetPartitionRequest.h"
#include "model/GetPartitionResult.h"
#include "model/GetPartitionsRequest.h"
#include "model/GetPartitionsResult.h"
#include "model/GetRegionStatusRequest.h"
#include "model/GetRegionStatusResult.h"
#include "model/GetServiceLinkedRoleStatusRequest.h"
#include "model/GetServiceLinkedRoleStatusResult.h"
#include "model/GetTableRequest.h"
#include "model/GetTableResult.h"
#include "model/GrantPrivilegesRequest.h"
#include "model/GrantPrivilegesResult.h"
#include "model/InitializeDLAServiceRequest.h"
#include "model/InitializeDLAServiceResult.h"
#include "model/InitializeRegionRequest.h"
#include "model/InitializeRegionResult.h"
#include "model/KillSparkJobRequest.h"
#include "model/KillSparkJobResult.h"
#include "model/ListAlreadyBingingRamUidRequest.h"
#include "model/ListAlreadyBingingRamUidResult.h"
#include "model/ListModulesReleaseRequest.h"
#include "model/ListModulesReleaseResult.h"
#include "model/ListResourcesSpecRequest.h"
#include "model/ListResourcesSpecResult.h"
#include "model/ListSparkJobRequest.h"
#include "model/ListSparkJobResult.h"
#include "model/ListVirtualClustersRequest.h"
#include "model/ListVirtualClustersResult.h"
#include "model/ModifyVirtualClusterRequest.h"
#include "model/ModifyVirtualClusterResult.h"
#include "model/ModifyVirtualClusterForSparkRequest.h"
#include "model/ModifyVirtualClusterForSparkResult.h"
#include "model/OpenDataLakeAnalyticsServiceRequest.h"
#include "model/OpenDataLakeAnalyticsServiceResult.h"
#include "model/QueryAccountListRequest.h"
#include "model/QueryAccountListResult.h"
#include "model/QueryDataSourceDefRequest.h"
#include "model/QueryDataSourceDefResult.h"
#include "model/QueryDiscountListRequest.h"
#include "model/QueryDiscountListResult.h"
#include "model/QueryEndPointListRequest.h"
#include "model/QueryEndPointListResult.h"
#include "model/QueryServiceAccountListRequest.h"
#include "model/QueryServiceAccountListResult.h"
#include "model/QueryTaskSumRequest.h"
#include "model/QueryTaskSumResult.h"
#include "model/ReleaseInstanceRequest.h"
#include "model/ReleaseInstanceResult.h"
#include "model/RemoveEndPointRequest.h"
#include "model/RemoveEndPointResult.h"
#include "model/ResetMainPasswordRequest.h"
#include "model/ResetMainPasswordResult.h"
#include "model/RevokePrivilegesRequest.h"
#include "model/RevokePrivilegesResult.h"
#include "model/SetAllowIPRequest.h"
#include "model/SetAllowIPResult.h"
#include "model/SetCapacityLimitPolicyRequest.h"
#include "model/SetCapacityLimitPolicyResult.h"
#include "model/SetRelationWithBizRequest.h"
#include "model/SetRelationWithBizResult.h"
#include "model/SetTrafficLimitPolicyRequest.h"
#include "model/SetTrafficLimitPolicyResult.h"
#include "model/StartVirtualClusterRequest.h"
#include "model/StartVirtualClusterResult.h"
#include "model/StopVirtualClusterRequest.h"
#include "model/StopVirtualClusterResult.h"
#include "model/SubmitSparkJobRequest.h"
#include "model/SubmitSparkJobResult.h"
#include "model/UnSubscribeRegionRequest.h"
#include "model/UnSubscribeRegionResult.h"
#include "model/UpdateAccountPasswordRequest.h"
#include "model/UpdateAccountPasswordResult.h"


namespace AlibabaCloud
{
	namespace Openanalytics_open
	{
		class ALIBABACLOUD_OPENANALYTICS_OPEN_EXPORT Openanalytics_openClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddAccountResult> AddAccountOutcome;
			typedef std::future<AddAccountOutcome> AddAccountOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::AddAccountRequest&, const AddAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddAccountAsyncHandler;
			typedef Outcome<Error, Model::AddEndPointResult> AddEndPointOutcome;
			typedef std::future<AddEndPointOutcome> AddEndPointOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::AddEndPointRequest&, const AddEndPointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddEndPointAsyncHandler;
			typedef Outcome<Error, Model::AddPartitionsResult> AddPartitionsOutcome;
			typedef std::future<AddPartitionsOutcome> AddPartitionsOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::AddPartitionsRequest&, const AddPartitionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddPartitionsAsyncHandler;
			typedef Outcome<Error, Model::AlterDatabaseResult> AlterDatabaseOutcome;
			typedef std::future<AlterDatabaseOutcome> AlterDatabaseOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::AlterDatabaseRequest&, const AlterDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AlterDatabaseAsyncHandler;
			typedef Outcome<Error, Model::AlterTableResult> AlterTableOutcome;
			typedef std::future<AlterTableOutcome> AlterTableOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::AlterTableRequest&, const AlterTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AlterTableAsyncHandler;
			typedef Outcome<Error, Model::BindingRamUidToDlaAccountResult> BindingRamUidToDlaAccountOutcome;
			typedef std::future<BindingRamUidToDlaAccountOutcome> BindingRamUidToDlaAccountOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::BindingRamUidToDlaAccountRequest&, const BindingRamUidToDlaAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindingRamUidToDlaAccountAsyncHandler;
			typedef Outcome<Error, Model::CreateDatabaseResult> CreateDatabaseOutcome;
			typedef std::future<CreateDatabaseOutcome> CreateDatabaseOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::CreateDatabaseRequest&, const CreateDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatabaseAsyncHandler;
			typedef Outcome<Error, Model::CreateInstanceResult> CreateInstanceOutcome;
			typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::CreateInstanceRequest&, const CreateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateServiceLinkedRoleResult> CreateServiceLinkedRoleOutcome;
			typedef std::future<CreateServiceLinkedRoleOutcome> CreateServiceLinkedRoleOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::CreateServiceLinkedRoleRequest&, const CreateServiceLinkedRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceLinkedRoleAsyncHandler;
			typedef Outcome<Error, Model::CreateTableResult> CreateTableOutcome;
			typedef std::future<CreateTableOutcome> CreateTableOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::CreateTableRequest&, const CreateTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTableAsyncHandler;
			typedef Outcome<Error, Model::CreateUserNetConfigResult> CreateUserNetConfigOutcome;
			typedef std::future<CreateUserNetConfigOutcome> CreateUserNetConfigOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::CreateUserNetConfigRequest&, const CreateUserNetConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserNetConfigAsyncHandler;
			typedef Outcome<Error, Model::CreateVirtualClusterForSparkResult> CreateVirtualClusterForSparkOutcome;
			typedef std::future<CreateVirtualClusterForSparkOutcome> CreateVirtualClusterForSparkOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::CreateVirtualClusterForSparkRequest&, const CreateVirtualClusterForSparkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVirtualClusterForSparkAsyncHandler;
			typedef Outcome<Error, Model::DecodeStsTokenResult> DecodeStsTokenOutcome;
			typedef std::future<DecodeStsTokenOutcome> DecodeStsTokenOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::DecodeStsTokenRequest&, const DecodeStsTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DecodeStsTokenAsyncHandler;
			typedef Outcome<Error, Model::DeleteAccountResult> DeleteAccountOutcome;
			typedef std::future<DeleteAccountOutcome> DeleteAccountOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::DeleteAccountRequest&, const DeleteAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserNetConfigResult> DeleteUserNetConfigOutcome;
			typedef std::future<DeleteUserNetConfigOutcome> DeleteUserNetConfigOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::DeleteUserNetConfigRequest&, const DeleteUserNetConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserNetConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeCapacityResult> DescribeCapacityOutcome;
			typedef std::future<DescribeCapacityOutcome> DescribeCapacityOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::DescribeCapacityRequest&, const DescribeCapacityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCapacityAsyncHandler;
			typedef Outcome<Error, Model::DescribeDataLakeAnalyticsServiceResult> DescribeDataLakeAnalyticsServiceOutcome;
			typedef std::future<DescribeDataLakeAnalyticsServiceOutcome> DescribeDataLakeAnalyticsServiceOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::DescribeDataLakeAnalyticsServiceRequest&, const DescribeDataLakeAnalyticsServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDataLakeAnalyticsServiceAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionListResult> DescribeRegionListOutcome;
			typedef std::future<DescribeRegionListOutcome> DescribeRegionListOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::DescribeRegionListRequest&, const DescribeRegionListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionListAsyncHandler;
			typedef Outcome<Error, Model::DescribeVirtualClusterResult> DescribeVirtualClusterOutcome;
			typedef std::future<DescribeVirtualClusterOutcome> DescribeVirtualClusterOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::DescribeVirtualClusterRequest&, const DescribeVirtualClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVirtualClusterAsyncHandler;
			typedef Outcome<Error, Model::DescribeVirtualClusterV2Result> DescribeVirtualClusterV2Outcome;
			typedef std::future<DescribeVirtualClusterV2Outcome> DescribeVirtualClusterV2OutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::DescribeVirtualClusterV2Request&, const DescribeVirtualClusterV2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVirtualClusterV2AsyncHandler;
			typedef Outcome<Error, Model::DestroyVirtualClusterResult> DestroyVirtualClusterOutcome;
			typedef std::future<DestroyVirtualClusterOutcome> DestroyVirtualClusterOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::DestroyVirtualClusterRequest&, const DestroyVirtualClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DestroyVirtualClusterAsyncHandler;
			typedef Outcome<Error, Model::DropDatabaseResult> DropDatabaseOutcome;
			typedef std::future<DropDatabaseOutcome> DropDatabaseOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::DropDatabaseRequest&, const DropDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DropDatabaseAsyncHandler;
			typedef Outcome<Error, Model::DropPartitionResult> DropPartitionOutcome;
			typedef std::future<DropPartitionOutcome> DropPartitionOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::DropPartitionRequest&, const DropPartitionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DropPartitionAsyncHandler;
			typedef Outcome<Error, Model::DropTableResult> DropTableOutcome;
			typedef std::future<DropTableOutcome> DropTableOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::DropTableRequest&, const DropTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DropTableAsyncHandler;
			typedef Outcome<Error, Model::ForbidAutomaticMetaSyncAsIntegrationAccountResult> ForbidAutomaticMetaSyncAsIntegrationAccountOutcome;
			typedef std::future<ForbidAutomaticMetaSyncAsIntegrationAccountOutcome> ForbidAutomaticMetaSyncAsIntegrationAccountOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::ForbidAutomaticMetaSyncAsIntegrationAccountRequest&, const ForbidAutomaticMetaSyncAsIntegrationAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ForbidAutomaticMetaSyncAsIntegrationAccountAsyncHandler;
			typedef Outcome<Error, Model::GetAllDatabasesResult> GetAllDatabasesOutcome;
			typedef std::future<GetAllDatabasesOutcome> GetAllDatabasesOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::GetAllDatabasesRequest&, const GetAllDatabasesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAllDatabasesAsyncHandler;
			typedef Outcome<Error, Model::GetAllTablesResult> GetAllTablesOutcome;
			typedef std::future<GetAllTablesOutcome> GetAllTablesOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::GetAllTablesRequest&, const GetAllTablesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAllTablesAsyncHandler;
			typedef Outcome<Error, Model::GetAllowIPResult> GetAllowIPOutcome;
			typedef std::future<GetAllowIPOutcome> GetAllowIPOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::GetAllowIPRequest&, const GetAllowIPOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAllowIPAsyncHandler;
			typedef Outcome<Error, Model::GetConsolePermissionResult> GetConsolePermissionOutcome;
			typedef std::future<GetConsolePermissionOutcome> GetConsolePermissionOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::GetConsolePermissionRequest&, const GetConsolePermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetConsolePermissionAsyncHandler;
			typedef Outcome<Error, Model::GetDLAServiceStatusResult> GetDLAServiceStatusOutcome;
			typedef std::future<GetDLAServiceStatusOutcome> GetDLAServiceStatusOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::GetDLAServiceStatusRequest&, const GetDLAServiceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDLAServiceStatusAsyncHandler;
			typedef Outcome<Error, Model::GetDatabaseResult> GetDatabaseOutcome;
			typedef std::future<GetDatabaseOutcome> GetDatabaseOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::GetDatabaseRequest&, const GetDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDatabaseAsyncHandler;
			typedef Outcome<Error, Model::GetEndPointResult> GetEndPointOutcome;
			typedef std::future<GetEndPointOutcome> GetEndPointOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::GetEndPointRequest&, const GetEndPointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEndPointAsyncHandler;
			typedef Outcome<Error, Model::GetEndPointByDomainResult> GetEndPointByDomainOutcome;
			typedef std::future<GetEndPointByDomainOutcome> GetEndPointByDomainOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::GetEndPointByDomainRequest&, const GetEndPointByDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEndPointByDomainAsyncHandler;
			typedef Outcome<Error, Model::GetJobDetailResult> GetJobDetailOutcome;
			typedef std::future<GetJobDetailOutcome> GetJobDetailOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::GetJobDetailRequest&, const GetJobDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobDetailAsyncHandler;
			typedef Outcome<Error, Model::GetJobLogResult> GetJobLogOutcome;
			typedef std::future<GetJobLogOutcome> GetJobLogOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::GetJobLogRequest&, const GetJobLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobLogAsyncHandler;
			typedef Outcome<Error, Model::GetJobStatusResult> GetJobStatusOutcome;
			typedef std::future<GetJobStatusOutcome> GetJobStatusOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::GetJobStatusRequest&, const GetJobStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobStatusAsyncHandler;
			typedef Outcome<Error, Model::GetPartitionResult> GetPartitionOutcome;
			typedef std::future<GetPartitionOutcome> GetPartitionOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::GetPartitionRequest&, const GetPartitionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPartitionAsyncHandler;
			typedef Outcome<Error, Model::GetPartitionsResult> GetPartitionsOutcome;
			typedef std::future<GetPartitionsOutcome> GetPartitionsOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::GetPartitionsRequest&, const GetPartitionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPartitionsAsyncHandler;
			typedef Outcome<Error, Model::GetRegionStatusResult> GetRegionStatusOutcome;
			typedef std::future<GetRegionStatusOutcome> GetRegionStatusOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::GetRegionStatusRequest&, const GetRegionStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRegionStatusAsyncHandler;
			typedef Outcome<Error, Model::GetServiceLinkedRoleStatusResult> GetServiceLinkedRoleStatusOutcome;
			typedef std::future<GetServiceLinkedRoleStatusOutcome> GetServiceLinkedRoleStatusOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::GetServiceLinkedRoleStatusRequest&, const GetServiceLinkedRoleStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceLinkedRoleStatusAsyncHandler;
			typedef Outcome<Error, Model::GetTableResult> GetTableOutcome;
			typedef std::future<GetTableOutcome> GetTableOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::GetTableRequest&, const GetTableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTableAsyncHandler;
			typedef Outcome<Error, Model::GrantPrivilegesResult> GrantPrivilegesOutcome;
			typedef std::future<GrantPrivilegesOutcome> GrantPrivilegesOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::GrantPrivilegesRequest&, const GrantPrivilegesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantPrivilegesAsyncHandler;
			typedef Outcome<Error, Model::InitializeDLAServiceResult> InitializeDLAServiceOutcome;
			typedef std::future<InitializeDLAServiceOutcome> InitializeDLAServiceOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::InitializeDLAServiceRequest&, const InitializeDLAServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InitializeDLAServiceAsyncHandler;
			typedef Outcome<Error, Model::InitializeRegionResult> InitializeRegionOutcome;
			typedef std::future<InitializeRegionOutcome> InitializeRegionOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::InitializeRegionRequest&, const InitializeRegionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InitializeRegionAsyncHandler;
			typedef Outcome<Error, Model::KillSparkJobResult> KillSparkJobOutcome;
			typedef std::future<KillSparkJobOutcome> KillSparkJobOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::KillSparkJobRequest&, const KillSparkJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> KillSparkJobAsyncHandler;
			typedef Outcome<Error, Model::ListAlreadyBingingRamUidResult> ListAlreadyBingingRamUidOutcome;
			typedef std::future<ListAlreadyBingingRamUidOutcome> ListAlreadyBingingRamUidOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::ListAlreadyBingingRamUidRequest&, const ListAlreadyBingingRamUidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAlreadyBingingRamUidAsyncHandler;
			typedef Outcome<Error, Model::ListModulesReleaseResult> ListModulesReleaseOutcome;
			typedef std::future<ListModulesReleaseOutcome> ListModulesReleaseOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::ListModulesReleaseRequest&, const ListModulesReleaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListModulesReleaseAsyncHandler;
			typedef Outcome<Error, Model::ListResourcesSpecResult> ListResourcesSpecOutcome;
			typedef std::future<ListResourcesSpecOutcome> ListResourcesSpecOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::ListResourcesSpecRequest&, const ListResourcesSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListResourcesSpecAsyncHandler;
			typedef Outcome<Error, Model::ListSparkJobResult> ListSparkJobOutcome;
			typedef std::future<ListSparkJobOutcome> ListSparkJobOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::ListSparkJobRequest&, const ListSparkJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSparkJobAsyncHandler;
			typedef Outcome<Error, Model::ListVirtualClustersResult> ListVirtualClustersOutcome;
			typedef std::future<ListVirtualClustersOutcome> ListVirtualClustersOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::ListVirtualClustersRequest&, const ListVirtualClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVirtualClustersAsyncHandler;
			typedef Outcome<Error, Model::ModifyVirtualClusterResult> ModifyVirtualClusterOutcome;
			typedef std::future<ModifyVirtualClusterOutcome> ModifyVirtualClusterOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::ModifyVirtualClusterRequest&, const ModifyVirtualClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVirtualClusterAsyncHandler;
			typedef Outcome<Error, Model::ModifyVirtualClusterForSparkResult> ModifyVirtualClusterForSparkOutcome;
			typedef std::future<ModifyVirtualClusterForSparkOutcome> ModifyVirtualClusterForSparkOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::ModifyVirtualClusterForSparkRequest&, const ModifyVirtualClusterForSparkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVirtualClusterForSparkAsyncHandler;
			typedef Outcome<Error, Model::OpenDataLakeAnalyticsServiceResult> OpenDataLakeAnalyticsServiceOutcome;
			typedef std::future<OpenDataLakeAnalyticsServiceOutcome> OpenDataLakeAnalyticsServiceOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::OpenDataLakeAnalyticsServiceRequest&, const OpenDataLakeAnalyticsServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenDataLakeAnalyticsServiceAsyncHandler;
			typedef Outcome<Error, Model::QueryAccountListResult> QueryAccountListOutcome;
			typedef std::future<QueryAccountListOutcome> QueryAccountListOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::QueryAccountListRequest&, const QueryAccountListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryAccountListAsyncHandler;
			typedef Outcome<Error, Model::QueryDataSourceDefResult> QueryDataSourceDefOutcome;
			typedef std::future<QueryDataSourceDefOutcome> QueryDataSourceDefOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::QueryDataSourceDefRequest&, const QueryDataSourceDefOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDataSourceDefAsyncHandler;
			typedef Outcome<Error, Model::QueryDiscountListResult> QueryDiscountListOutcome;
			typedef std::future<QueryDiscountListOutcome> QueryDiscountListOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::QueryDiscountListRequest&, const QueryDiscountListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDiscountListAsyncHandler;
			typedef Outcome<Error, Model::QueryEndPointListResult> QueryEndPointListOutcome;
			typedef std::future<QueryEndPointListOutcome> QueryEndPointListOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::QueryEndPointListRequest&, const QueryEndPointListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryEndPointListAsyncHandler;
			typedef Outcome<Error, Model::QueryServiceAccountListResult> QueryServiceAccountListOutcome;
			typedef std::future<QueryServiceAccountListOutcome> QueryServiceAccountListOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::QueryServiceAccountListRequest&, const QueryServiceAccountListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryServiceAccountListAsyncHandler;
			typedef Outcome<Error, Model::QueryTaskSumResult> QueryTaskSumOutcome;
			typedef std::future<QueryTaskSumOutcome> QueryTaskSumOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::QueryTaskSumRequest&, const QueryTaskSumOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryTaskSumAsyncHandler;
			typedef Outcome<Error, Model::ReleaseInstanceResult> ReleaseInstanceOutcome;
			typedef std::future<ReleaseInstanceOutcome> ReleaseInstanceOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::ReleaseInstanceRequest&, const ReleaseInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseInstanceAsyncHandler;
			typedef Outcome<Error, Model::RemoveEndPointResult> RemoveEndPointOutcome;
			typedef std::future<RemoveEndPointOutcome> RemoveEndPointOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::RemoveEndPointRequest&, const RemoveEndPointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveEndPointAsyncHandler;
			typedef Outcome<Error, Model::ResetMainPasswordResult> ResetMainPasswordOutcome;
			typedef std::future<ResetMainPasswordOutcome> ResetMainPasswordOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::ResetMainPasswordRequest&, const ResetMainPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetMainPasswordAsyncHandler;
			typedef Outcome<Error, Model::RevokePrivilegesResult> RevokePrivilegesOutcome;
			typedef std::future<RevokePrivilegesOutcome> RevokePrivilegesOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::RevokePrivilegesRequest&, const RevokePrivilegesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokePrivilegesAsyncHandler;
			typedef Outcome<Error, Model::SetAllowIPResult> SetAllowIPOutcome;
			typedef std::future<SetAllowIPOutcome> SetAllowIPOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::SetAllowIPRequest&, const SetAllowIPOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetAllowIPAsyncHandler;
			typedef Outcome<Error, Model::SetCapacityLimitPolicyResult> SetCapacityLimitPolicyOutcome;
			typedef std::future<SetCapacityLimitPolicyOutcome> SetCapacityLimitPolicyOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::SetCapacityLimitPolicyRequest&, const SetCapacityLimitPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetCapacityLimitPolicyAsyncHandler;
			typedef Outcome<Error, Model::SetRelationWithBizResult> SetRelationWithBizOutcome;
			typedef std::future<SetRelationWithBizOutcome> SetRelationWithBizOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::SetRelationWithBizRequest&, const SetRelationWithBizOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetRelationWithBizAsyncHandler;
			typedef Outcome<Error, Model::SetTrafficLimitPolicyResult> SetTrafficLimitPolicyOutcome;
			typedef std::future<SetTrafficLimitPolicyOutcome> SetTrafficLimitPolicyOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::SetTrafficLimitPolicyRequest&, const SetTrafficLimitPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetTrafficLimitPolicyAsyncHandler;
			typedef Outcome<Error, Model::StartVirtualClusterResult> StartVirtualClusterOutcome;
			typedef std::future<StartVirtualClusterOutcome> StartVirtualClusterOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::StartVirtualClusterRequest&, const StartVirtualClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartVirtualClusterAsyncHandler;
			typedef Outcome<Error, Model::StopVirtualClusterResult> StopVirtualClusterOutcome;
			typedef std::future<StopVirtualClusterOutcome> StopVirtualClusterOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::StopVirtualClusterRequest&, const StopVirtualClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopVirtualClusterAsyncHandler;
			typedef Outcome<Error, Model::SubmitSparkJobResult> SubmitSparkJobOutcome;
			typedef std::future<SubmitSparkJobOutcome> SubmitSparkJobOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::SubmitSparkJobRequest&, const SubmitSparkJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitSparkJobAsyncHandler;
			typedef Outcome<Error, Model::UnSubscribeRegionResult> UnSubscribeRegionOutcome;
			typedef std::future<UnSubscribeRegionOutcome> UnSubscribeRegionOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::UnSubscribeRegionRequest&, const UnSubscribeRegionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnSubscribeRegionAsyncHandler;
			typedef Outcome<Error, Model::UpdateAccountPasswordResult> UpdateAccountPasswordOutcome;
			typedef std::future<UpdateAccountPasswordOutcome> UpdateAccountPasswordOutcomeCallable;
			typedef std::function<void(const Openanalytics_openClient*, const Model::UpdateAccountPasswordRequest&, const UpdateAccountPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAccountPasswordAsyncHandler;

			Openanalytics_openClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Openanalytics_openClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Openanalytics_openClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Openanalytics_openClient();
			AddAccountOutcome addAccount(const Model::AddAccountRequest &request)const;
			void addAccountAsync(const Model::AddAccountRequest& request, const AddAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddAccountOutcomeCallable addAccountCallable(const Model::AddAccountRequest& request) const;
			AddEndPointOutcome addEndPoint(const Model::AddEndPointRequest &request)const;
			void addEndPointAsync(const Model::AddEndPointRequest& request, const AddEndPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddEndPointOutcomeCallable addEndPointCallable(const Model::AddEndPointRequest& request) const;
			AddPartitionsOutcome addPartitions(const Model::AddPartitionsRequest &request)const;
			void addPartitionsAsync(const Model::AddPartitionsRequest& request, const AddPartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddPartitionsOutcomeCallable addPartitionsCallable(const Model::AddPartitionsRequest& request) const;
			AlterDatabaseOutcome alterDatabase(const Model::AlterDatabaseRequest &request)const;
			void alterDatabaseAsync(const Model::AlterDatabaseRequest& request, const AlterDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AlterDatabaseOutcomeCallable alterDatabaseCallable(const Model::AlterDatabaseRequest& request) const;
			AlterTableOutcome alterTable(const Model::AlterTableRequest &request)const;
			void alterTableAsync(const Model::AlterTableRequest& request, const AlterTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AlterTableOutcomeCallable alterTableCallable(const Model::AlterTableRequest& request) const;
			BindingRamUidToDlaAccountOutcome bindingRamUidToDlaAccount(const Model::BindingRamUidToDlaAccountRequest &request)const;
			void bindingRamUidToDlaAccountAsync(const Model::BindingRamUidToDlaAccountRequest& request, const BindingRamUidToDlaAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindingRamUidToDlaAccountOutcomeCallable bindingRamUidToDlaAccountCallable(const Model::BindingRamUidToDlaAccountRequest& request) const;
			CreateDatabaseOutcome createDatabase(const Model::CreateDatabaseRequest &request)const;
			void createDatabaseAsync(const Model::CreateDatabaseRequest& request, const CreateDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDatabaseOutcomeCallable createDatabaseCallable(const Model::CreateDatabaseRequest& request) const;
			CreateInstanceOutcome createInstance(const Model::CreateInstanceRequest &request)const;
			void createInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstanceOutcomeCallable createInstanceCallable(const Model::CreateInstanceRequest& request) const;
			CreateServiceLinkedRoleOutcome createServiceLinkedRole(const Model::CreateServiceLinkedRoleRequest &request)const;
			void createServiceLinkedRoleAsync(const Model::CreateServiceLinkedRoleRequest& request, const CreateServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateServiceLinkedRoleOutcomeCallable createServiceLinkedRoleCallable(const Model::CreateServiceLinkedRoleRequest& request) const;
			CreateTableOutcome createTable(const Model::CreateTableRequest &request)const;
			void createTableAsync(const Model::CreateTableRequest& request, const CreateTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTableOutcomeCallable createTableCallable(const Model::CreateTableRequest& request) const;
			CreateUserNetConfigOutcome createUserNetConfig(const Model::CreateUserNetConfigRequest &request)const;
			void createUserNetConfigAsync(const Model::CreateUserNetConfigRequest& request, const CreateUserNetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUserNetConfigOutcomeCallable createUserNetConfigCallable(const Model::CreateUserNetConfigRequest& request) const;
			CreateVirtualClusterForSparkOutcome createVirtualClusterForSpark(const Model::CreateVirtualClusterForSparkRequest &request)const;
			void createVirtualClusterForSparkAsync(const Model::CreateVirtualClusterForSparkRequest& request, const CreateVirtualClusterForSparkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVirtualClusterForSparkOutcomeCallable createVirtualClusterForSparkCallable(const Model::CreateVirtualClusterForSparkRequest& request) const;
			DecodeStsTokenOutcome decodeStsToken(const Model::DecodeStsTokenRequest &request)const;
			void decodeStsTokenAsync(const Model::DecodeStsTokenRequest& request, const DecodeStsTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DecodeStsTokenOutcomeCallable decodeStsTokenCallable(const Model::DecodeStsTokenRequest& request) const;
			DeleteAccountOutcome deleteAccount(const Model::DeleteAccountRequest &request)const;
			void deleteAccountAsync(const Model::DeleteAccountRequest& request, const DeleteAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAccountOutcomeCallable deleteAccountCallable(const Model::DeleteAccountRequest& request) const;
			DeleteUserNetConfigOutcome deleteUserNetConfig(const Model::DeleteUserNetConfigRequest &request)const;
			void deleteUserNetConfigAsync(const Model::DeleteUserNetConfigRequest& request, const DeleteUserNetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserNetConfigOutcomeCallable deleteUserNetConfigCallable(const Model::DeleteUserNetConfigRequest& request) const;
			DescribeCapacityOutcome describeCapacity(const Model::DescribeCapacityRequest &request)const;
			void describeCapacityAsync(const Model::DescribeCapacityRequest& request, const DescribeCapacityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCapacityOutcomeCallable describeCapacityCallable(const Model::DescribeCapacityRequest& request) const;
			DescribeDataLakeAnalyticsServiceOutcome describeDataLakeAnalyticsService(const Model::DescribeDataLakeAnalyticsServiceRequest &request)const;
			void describeDataLakeAnalyticsServiceAsync(const Model::DescribeDataLakeAnalyticsServiceRequest& request, const DescribeDataLakeAnalyticsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDataLakeAnalyticsServiceOutcomeCallable describeDataLakeAnalyticsServiceCallable(const Model::DescribeDataLakeAnalyticsServiceRequest& request) const;
			DescribeRegionListOutcome describeRegionList(const Model::DescribeRegionListRequest &request)const;
			void describeRegionListAsync(const Model::DescribeRegionListRequest& request, const DescribeRegionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionListOutcomeCallable describeRegionListCallable(const Model::DescribeRegionListRequest& request) const;
			DescribeVirtualClusterOutcome describeVirtualCluster(const Model::DescribeVirtualClusterRequest &request)const;
			void describeVirtualClusterAsync(const Model::DescribeVirtualClusterRequest& request, const DescribeVirtualClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVirtualClusterOutcomeCallable describeVirtualClusterCallable(const Model::DescribeVirtualClusterRequest& request) const;
			DescribeVirtualClusterV2Outcome describeVirtualClusterV2(const Model::DescribeVirtualClusterV2Request &request)const;
			void describeVirtualClusterV2Async(const Model::DescribeVirtualClusterV2Request& request, const DescribeVirtualClusterV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVirtualClusterV2OutcomeCallable describeVirtualClusterV2Callable(const Model::DescribeVirtualClusterV2Request& request) const;
			DestroyVirtualClusterOutcome destroyVirtualCluster(const Model::DestroyVirtualClusterRequest &request)const;
			void destroyVirtualClusterAsync(const Model::DestroyVirtualClusterRequest& request, const DestroyVirtualClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DestroyVirtualClusterOutcomeCallable destroyVirtualClusterCallable(const Model::DestroyVirtualClusterRequest& request) const;
			DropDatabaseOutcome dropDatabase(const Model::DropDatabaseRequest &request)const;
			void dropDatabaseAsync(const Model::DropDatabaseRequest& request, const DropDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DropDatabaseOutcomeCallable dropDatabaseCallable(const Model::DropDatabaseRequest& request) const;
			DropPartitionOutcome dropPartition(const Model::DropPartitionRequest &request)const;
			void dropPartitionAsync(const Model::DropPartitionRequest& request, const DropPartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DropPartitionOutcomeCallable dropPartitionCallable(const Model::DropPartitionRequest& request) const;
			DropTableOutcome dropTable(const Model::DropTableRequest &request)const;
			void dropTableAsync(const Model::DropTableRequest& request, const DropTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DropTableOutcomeCallable dropTableCallable(const Model::DropTableRequest& request) const;
			ForbidAutomaticMetaSyncAsIntegrationAccountOutcome forbidAutomaticMetaSyncAsIntegrationAccount(const Model::ForbidAutomaticMetaSyncAsIntegrationAccountRequest &request)const;
			void forbidAutomaticMetaSyncAsIntegrationAccountAsync(const Model::ForbidAutomaticMetaSyncAsIntegrationAccountRequest& request, const ForbidAutomaticMetaSyncAsIntegrationAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ForbidAutomaticMetaSyncAsIntegrationAccountOutcomeCallable forbidAutomaticMetaSyncAsIntegrationAccountCallable(const Model::ForbidAutomaticMetaSyncAsIntegrationAccountRequest& request) const;
			GetAllDatabasesOutcome getAllDatabases(const Model::GetAllDatabasesRequest &request)const;
			void getAllDatabasesAsync(const Model::GetAllDatabasesRequest& request, const GetAllDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAllDatabasesOutcomeCallable getAllDatabasesCallable(const Model::GetAllDatabasesRequest& request) const;
			GetAllTablesOutcome getAllTables(const Model::GetAllTablesRequest &request)const;
			void getAllTablesAsync(const Model::GetAllTablesRequest& request, const GetAllTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAllTablesOutcomeCallable getAllTablesCallable(const Model::GetAllTablesRequest& request) const;
			GetAllowIPOutcome getAllowIP(const Model::GetAllowIPRequest &request)const;
			void getAllowIPAsync(const Model::GetAllowIPRequest& request, const GetAllowIPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAllowIPOutcomeCallable getAllowIPCallable(const Model::GetAllowIPRequest& request) const;
			GetConsolePermissionOutcome getConsolePermission(const Model::GetConsolePermissionRequest &request)const;
			void getConsolePermissionAsync(const Model::GetConsolePermissionRequest& request, const GetConsolePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetConsolePermissionOutcomeCallable getConsolePermissionCallable(const Model::GetConsolePermissionRequest& request) const;
			GetDLAServiceStatusOutcome getDLAServiceStatus(const Model::GetDLAServiceStatusRequest &request)const;
			void getDLAServiceStatusAsync(const Model::GetDLAServiceStatusRequest& request, const GetDLAServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDLAServiceStatusOutcomeCallable getDLAServiceStatusCallable(const Model::GetDLAServiceStatusRequest& request) const;
			GetDatabaseOutcome getDatabase(const Model::GetDatabaseRequest &request)const;
			void getDatabaseAsync(const Model::GetDatabaseRequest& request, const GetDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDatabaseOutcomeCallable getDatabaseCallable(const Model::GetDatabaseRequest& request) const;
			GetEndPointOutcome getEndPoint(const Model::GetEndPointRequest &request)const;
			void getEndPointAsync(const Model::GetEndPointRequest& request, const GetEndPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEndPointOutcomeCallable getEndPointCallable(const Model::GetEndPointRequest& request) const;
			GetEndPointByDomainOutcome getEndPointByDomain(const Model::GetEndPointByDomainRequest &request)const;
			void getEndPointByDomainAsync(const Model::GetEndPointByDomainRequest& request, const GetEndPointByDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEndPointByDomainOutcomeCallable getEndPointByDomainCallable(const Model::GetEndPointByDomainRequest& request) const;
			GetJobDetailOutcome getJobDetail(const Model::GetJobDetailRequest &request)const;
			void getJobDetailAsync(const Model::GetJobDetailRequest& request, const GetJobDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobDetailOutcomeCallable getJobDetailCallable(const Model::GetJobDetailRequest& request) const;
			GetJobLogOutcome getJobLog(const Model::GetJobLogRequest &request)const;
			void getJobLogAsync(const Model::GetJobLogRequest& request, const GetJobLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobLogOutcomeCallable getJobLogCallable(const Model::GetJobLogRequest& request) const;
			GetJobStatusOutcome getJobStatus(const Model::GetJobStatusRequest &request)const;
			void getJobStatusAsync(const Model::GetJobStatusRequest& request, const GetJobStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobStatusOutcomeCallable getJobStatusCallable(const Model::GetJobStatusRequest& request) const;
			GetPartitionOutcome getPartition(const Model::GetPartitionRequest &request)const;
			void getPartitionAsync(const Model::GetPartitionRequest& request, const GetPartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPartitionOutcomeCallable getPartitionCallable(const Model::GetPartitionRequest& request) const;
			GetPartitionsOutcome getPartitions(const Model::GetPartitionsRequest &request)const;
			void getPartitionsAsync(const Model::GetPartitionsRequest& request, const GetPartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPartitionsOutcomeCallable getPartitionsCallable(const Model::GetPartitionsRequest& request) const;
			GetRegionStatusOutcome getRegionStatus(const Model::GetRegionStatusRequest &request)const;
			void getRegionStatusAsync(const Model::GetRegionStatusRequest& request, const GetRegionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRegionStatusOutcomeCallable getRegionStatusCallable(const Model::GetRegionStatusRequest& request) const;
			GetServiceLinkedRoleStatusOutcome getServiceLinkedRoleStatus(const Model::GetServiceLinkedRoleStatusRequest &request)const;
			void getServiceLinkedRoleStatusAsync(const Model::GetServiceLinkedRoleStatusRequest& request, const GetServiceLinkedRoleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetServiceLinkedRoleStatusOutcomeCallable getServiceLinkedRoleStatusCallable(const Model::GetServiceLinkedRoleStatusRequest& request) const;
			GetTableOutcome getTable(const Model::GetTableRequest &request)const;
			void getTableAsync(const Model::GetTableRequest& request, const GetTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTableOutcomeCallable getTableCallable(const Model::GetTableRequest& request) const;
			GrantPrivilegesOutcome grantPrivileges(const Model::GrantPrivilegesRequest &request)const;
			void grantPrivilegesAsync(const Model::GrantPrivilegesRequest& request, const GrantPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrantPrivilegesOutcomeCallable grantPrivilegesCallable(const Model::GrantPrivilegesRequest& request) const;
			InitializeDLAServiceOutcome initializeDLAService(const Model::InitializeDLAServiceRequest &request)const;
			void initializeDLAServiceAsync(const Model::InitializeDLAServiceRequest& request, const InitializeDLAServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InitializeDLAServiceOutcomeCallable initializeDLAServiceCallable(const Model::InitializeDLAServiceRequest& request) const;
			InitializeRegionOutcome initializeRegion(const Model::InitializeRegionRequest &request)const;
			void initializeRegionAsync(const Model::InitializeRegionRequest& request, const InitializeRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InitializeRegionOutcomeCallable initializeRegionCallable(const Model::InitializeRegionRequest& request) const;
			KillSparkJobOutcome killSparkJob(const Model::KillSparkJobRequest &request)const;
			void killSparkJobAsync(const Model::KillSparkJobRequest& request, const KillSparkJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			KillSparkJobOutcomeCallable killSparkJobCallable(const Model::KillSparkJobRequest& request) const;
			ListAlreadyBingingRamUidOutcome listAlreadyBingingRamUid(const Model::ListAlreadyBingingRamUidRequest &request)const;
			void listAlreadyBingingRamUidAsync(const Model::ListAlreadyBingingRamUidRequest& request, const ListAlreadyBingingRamUidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAlreadyBingingRamUidOutcomeCallable listAlreadyBingingRamUidCallable(const Model::ListAlreadyBingingRamUidRequest& request) const;
			ListModulesReleaseOutcome listModulesRelease(const Model::ListModulesReleaseRequest &request)const;
			void listModulesReleaseAsync(const Model::ListModulesReleaseRequest& request, const ListModulesReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListModulesReleaseOutcomeCallable listModulesReleaseCallable(const Model::ListModulesReleaseRequest& request) const;
			ListResourcesSpecOutcome listResourcesSpec(const Model::ListResourcesSpecRequest &request)const;
			void listResourcesSpecAsync(const Model::ListResourcesSpecRequest& request, const ListResourcesSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListResourcesSpecOutcomeCallable listResourcesSpecCallable(const Model::ListResourcesSpecRequest& request) const;
			ListSparkJobOutcome listSparkJob(const Model::ListSparkJobRequest &request)const;
			void listSparkJobAsync(const Model::ListSparkJobRequest& request, const ListSparkJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSparkJobOutcomeCallable listSparkJobCallable(const Model::ListSparkJobRequest& request) const;
			ListVirtualClustersOutcome listVirtualClusters(const Model::ListVirtualClustersRequest &request)const;
			void listVirtualClustersAsync(const Model::ListVirtualClustersRequest& request, const ListVirtualClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVirtualClustersOutcomeCallable listVirtualClustersCallable(const Model::ListVirtualClustersRequest& request) const;
			ModifyVirtualClusterOutcome modifyVirtualCluster(const Model::ModifyVirtualClusterRequest &request)const;
			void modifyVirtualClusterAsync(const Model::ModifyVirtualClusterRequest& request, const ModifyVirtualClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVirtualClusterOutcomeCallable modifyVirtualClusterCallable(const Model::ModifyVirtualClusterRequest& request) const;
			ModifyVirtualClusterForSparkOutcome modifyVirtualClusterForSpark(const Model::ModifyVirtualClusterForSparkRequest &request)const;
			void modifyVirtualClusterForSparkAsync(const Model::ModifyVirtualClusterForSparkRequest& request, const ModifyVirtualClusterForSparkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVirtualClusterForSparkOutcomeCallable modifyVirtualClusterForSparkCallable(const Model::ModifyVirtualClusterForSparkRequest& request) const;
			OpenDataLakeAnalyticsServiceOutcome openDataLakeAnalyticsService(const Model::OpenDataLakeAnalyticsServiceRequest &request)const;
			void openDataLakeAnalyticsServiceAsync(const Model::OpenDataLakeAnalyticsServiceRequest& request, const OpenDataLakeAnalyticsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenDataLakeAnalyticsServiceOutcomeCallable openDataLakeAnalyticsServiceCallable(const Model::OpenDataLakeAnalyticsServiceRequest& request) const;
			QueryAccountListOutcome queryAccountList(const Model::QueryAccountListRequest &request)const;
			void queryAccountListAsync(const Model::QueryAccountListRequest& request, const QueryAccountListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryAccountListOutcomeCallable queryAccountListCallable(const Model::QueryAccountListRequest& request) const;
			QueryDataSourceDefOutcome queryDataSourceDef(const Model::QueryDataSourceDefRequest &request)const;
			void queryDataSourceDefAsync(const Model::QueryDataSourceDefRequest& request, const QueryDataSourceDefAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDataSourceDefOutcomeCallable queryDataSourceDefCallable(const Model::QueryDataSourceDefRequest& request) const;
			QueryDiscountListOutcome queryDiscountList(const Model::QueryDiscountListRequest &request)const;
			void queryDiscountListAsync(const Model::QueryDiscountListRequest& request, const QueryDiscountListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDiscountListOutcomeCallable queryDiscountListCallable(const Model::QueryDiscountListRequest& request) const;
			QueryEndPointListOutcome queryEndPointList(const Model::QueryEndPointListRequest &request)const;
			void queryEndPointListAsync(const Model::QueryEndPointListRequest& request, const QueryEndPointListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryEndPointListOutcomeCallable queryEndPointListCallable(const Model::QueryEndPointListRequest& request) const;
			QueryServiceAccountListOutcome queryServiceAccountList(const Model::QueryServiceAccountListRequest &request)const;
			void queryServiceAccountListAsync(const Model::QueryServiceAccountListRequest& request, const QueryServiceAccountListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryServiceAccountListOutcomeCallable queryServiceAccountListCallable(const Model::QueryServiceAccountListRequest& request) const;
			QueryTaskSumOutcome queryTaskSum(const Model::QueryTaskSumRequest &request)const;
			void queryTaskSumAsync(const Model::QueryTaskSumRequest& request, const QueryTaskSumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryTaskSumOutcomeCallable queryTaskSumCallable(const Model::QueryTaskSumRequest& request) const;
			ReleaseInstanceOutcome releaseInstance(const Model::ReleaseInstanceRequest &request)const;
			void releaseInstanceAsync(const Model::ReleaseInstanceRequest& request, const ReleaseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseInstanceOutcomeCallable releaseInstanceCallable(const Model::ReleaseInstanceRequest& request) const;
			RemoveEndPointOutcome removeEndPoint(const Model::RemoveEndPointRequest &request)const;
			void removeEndPointAsync(const Model::RemoveEndPointRequest& request, const RemoveEndPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveEndPointOutcomeCallable removeEndPointCallable(const Model::RemoveEndPointRequest& request) const;
			ResetMainPasswordOutcome resetMainPassword(const Model::ResetMainPasswordRequest &request)const;
			void resetMainPasswordAsync(const Model::ResetMainPasswordRequest& request, const ResetMainPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetMainPasswordOutcomeCallable resetMainPasswordCallable(const Model::ResetMainPasswordRequest& request) const;
			RevokePrivilegesOutcome revokePrivileges(const Model::RevokePrivilegesRequest &request)const;
			void revokePrivilegesAsync(const Model::RevokePrivilegesRequest& request, const RevokePrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokePrivilegesOutcomeCallable revokePrivilegesCallable(const Model::RevokePrivilegesRequest& request) const;
			SetAllowIPOutcome setAllowIP(const Model::SetAllowIPRequest &request)const;
			void setAllowIPAsync(const Model::SetAllowIPRequest& request, const SetAllowIPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetAllowIPOutcomeCallable setAllowIPCallable(const Model::SetAllowIPRequest& request) const;
			SetCapacityLimitPolicyOutcome setCapacityLimitPolicy(const Model::SetCapacityLimitPolicyRequest &request)const;
			void setCapacityLimitPolicyAsync(const Model::SetCapacityLimitPolicyRequest& request, const SetCapacityLimitPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetCapacityLimitPolicyOutcomeCallable setCapacityLimitPolicyCallable(const Model::SetCapacityLimitPolicyRequest& request) const;
			SetRelationWithBizOutcome setRelationWithBiz(const Model::SetRelationWithBizRequest &request)const;
			void setRelationWithBizAsync(const Model::SetRelationWithBizRequest& request, const SetRelationWithBizAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetRelationWithBizOutcomeCallable setRelationWithBizCallable(const Model::SetRelationWithBizRequest& request) const;
			SetTrafficLimitPolicyOutcome setTrafficLimitPolicy(const Model::SetTrafficLimitPolicyRequest &request)const;
			void setTrafficLimitPolicyAsync(const Model::SetTrafficLimitPolicyRequest& request, const SetTrafficLimitPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetTrafficLimitPolicyOutcomeCallable setTrafficLimitPolicyCallable(const Model::SetTrafficLimitPolicyRequest& request) const;
			StartVirtualClusterOutcome startVirtualCluster(const Model::StartVirtualClusterRequest &request)const;
			void startVirtualClusterAsync(const Model::StartVirtualClusterRequest& request, const StartVirtualClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartVirtualClusterOutcomeCallable startVirtualClusterCallable(const Model::StartVirtualClusterRequest& request) const;
			StopVirtualClusterOutcome stopVirtualCluster(const Model::StopVirtualClusterRequest &request)const;
			void stopVirtualClusterAsync(const Model::StopVirtualClusterRequest& request, const StopVirtualClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopVirtualClusterOutcomeCallable stopVirtualClusterCallable(const Model::StopVirtualClusterRequest& request) const;
			SubmitSparkJobOutcome submitSparkJob(const Model::SubmitSparkJobRequest &request)const;
			void submitSparkJobAsync(const Model::SubmitSparkJobRequest& request, const SubmitSparkJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitSparkJobOutcomeCallable submitSparkJobCallable(const Model::SubmitSparkJobRequest& request) const;
			UnSubscribeRegionOutcome unSubscribeRegion(const Model::UnSubscribeRegionRequest &request)const;
			void unSubscribeRegionAsync(const Model::UnSubscribeRegionRequest& request, const UnSubscribeRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnSubscribeRegionOutcomeCallable unSubscribeRegionCallable(const Model::UnSubscribeRegionRequest& request) const;
			UpdateAccountPasswordOutcome updateAccountPassword(const Model::UpdateAccountPasswordRequest &request)const;
			void updateAccountPasswordAsync(const Model::UpdateAccountPasswordRequest& request, const UpdateAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAccountPasswordOutcomeCallable updateAccountPasswordCallable(const Model::UpdateAccountPasswordRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_OPENANALYTICS_OPEN_OPENANALYTICS_OPENCLIENT_H_
