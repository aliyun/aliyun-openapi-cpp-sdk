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

#ifndef ALIBABACLOUD_RETAILCLOUD_RETAILCLOUDCLIENT_H_
#define ALIBABACLOUD_RETAILCLOUD_RETAILCLOUDCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "RetailcloudExport.h"
#include "model/AddClusterNodeRequest.h"
#include "model/AddClusterNodeResult.h"
#include "model/AllocatePodConfigRequest.h"
#include "model/AllocatePodConfigResult.h"
#include "model/BatchAddServersRequest.h"
#include "model/BatchAddServersResult.h"
#include "model/BindGroupRequest.h"
#include "model/BindGroupResult.h"
#include "model/BindNodeLabelRequest.h"
#include "model/BindNodeLabelResult.h"
#include "model/CloseDeployOrderRequest.h"
#include "model/CloseDeployOrderResult.h"
#include "model/CreateAccountRequest.h"
#include "model/CreateAccountResult.h"
#include "model/CreateAppRequest.h"
#include "model/CreateAppResult.h"
#include "model/CreateAppGroupRequest.h"
#include "model/CreateAppGroupResult.h"
#include "model/CreateAppMonitorsRequest.h"
#include "model/CreateAppMonitorsResult.h"
#include "model/CreateAppResourceAllocRequest.h"
#include "model/CreateAppResourceAllocResult.h"
#include "model/CreateClusterRequest.h"
#include "model/CreateClusterResult.h"
#include "model/CreateDbRequest.h"
#include "model/CreateDbResult.h"
#include "model/CreateDeployConfigRequest.h"
#include "model/CreateDeployConfigResult.h"
#include "model/CreateEnvironmentRequest.h"
#include "model/CreateEnvironmentResult.h"
#include "model/CreateNodeLabelRequest.h"
#include "model/CreateNodeLabelResult.h"
#include "model/CreatePersistentVolumeRequest.h"
#include "model/CreatePersistentVolumeResult.h"
#include "model/CreatePersistentVolumeClaimRequest.h"
#include "model/CreatePersistentVolumeClaimResult.h"
#include "model/CreateServiceRequest.h"
#include "model/CreateServiceResult.h"
#include "model/CreateSlbAPRequest.h"
#include "model/CreateSlbAPResult.h"
#include "model/DeleteAppDetailRequest.h"
#include "model/DeleteAppDetailResult.h"
#include "model/DeleteAppEnvironmentRequest.h"
#include "model/DeleteAppEnvironmentResult.h"
#include "model/DeleteAppGroupRequest.h"
#include "model/DeleteAppGroupResult.h"
#include "model/DeleteAppResourceAllocRequest.h"
#include "model/DeleteAppResourceAllocResult.h"
#include "model/DeleteClusterRequest.h"
#include "model/DeleteClusterResult.h"
#include "model/DeleteDatabaseRequest.h"
#include "model/DeleteDatabaseResult.h"
#include "model/DeleteDeployConfigRequest.h"
#include "model/DeleteDeployConfigResult.h"
#include "model/DeleteNodeLabelRequest.h"
#include "model/DeleteNodeLabelResult.h"
#include "model/DeletePersistentVolumeRequest.h"
#include "model/DeletePersistentVolumeResult.h"
#include "model/DeletePersistentVolumeClaimRequest.h"
#include "model/DeletePersistentVolumeClaimResult.h"
#include "model/DeleteRdsAccountRequest.h"
#include "model/DeleteRdsAccountResult.h"
#include "model/DeleteServiceRequest.h"
#include "model/DeleteServiceResult.h"
#include "model/DeleteSlbAPRequest.h"
#include "model/DeleteSlbAPResult.h"
#include "model/DeployAppRequest.h"
#include "model/DeployAppResult.h"
#include "model/DescribeAppDetailRequest.h"
#include "model/DescribeAppDetailResult.h"
#include "model/DescribeAppEnvironmentDetailRequest.h"
#include "model/DescribeAppEnvironmentDetailResult.h"
#include "model/DescribeAppMonitorMetricRequest.h"
#include "model/DescribeAppMonitorMetricResult.h"
#include "model/DescribeAppResourceAllocRequest.h"
#include "model/DescribeAppResourceAllocResult.h"
#include "model/DescribeClusterDetailRequest.h"
#include "model/DescribeClusterDetailResult.h"
#include "model/DescribeDatabasesRequest.h"
#include "model/DescribeDatabasesResult.h"
#include "model/DescribeDeployOrderDetailRequest.h"
#include "model/DescribeDeployOrderDetailResult.h"
#include "model/DescribeEventMonitorListRequest.h"
#include "model/DescribeEventMonitorListResult.h"
#include "model/DescribeJobLogRequest.h"
#include "model/DescribeJobLogResult.h"
#include "model/DescribePodContainerLogListRequest.h"
#include "model/DescribePodContainerLogListResult.h"
#include "model/DescribePodEventsRequest.h"
#include "model/DescribePodEventsResult.h"
#include "model/DescribePodLogRequest.h"
#include "model/DescribePodLogResult.h"
#include "model/DescribeRdsAccountsRequest.h"
#include "model/DescribeRdsAccountsResult.h"
#include "model/DescribeServiceDetailRequest.h"
#include "model/DescribeServiceDetailResult.h"
#include "model/DescribeSlbAPDetailRequest.h"
#include "model/DescribeSlbAPDetailResult.h"
#include "model/GetInstTransInfoRequest.h"
#include "model/GetInstTransInfoResult.h"
#include "model/GetRdsBackUpRequest.h"
#include "model/GetRdsBackUpResult.h"
#include "model/GrantDbToAccountRequest.h"
#include "model/GrantDbToAccountResult.h"
#include "model/ListAppRequest.h"
#include "model/ListAppResult.h"
#include "model/ListAppCmsGroupsRequest.h"
#include "model/ListAppCmsGroupsResult.h"
#include "model/ListAppEnvironmentRequest.h"
#include "model/ListAppEnvironmentResult.h"
#include "model/ListAppGroupRequest.h"
#include "model/ListAppGroupResult.h"
#include "model/ListAppGroupMappingRequest.h"
#include "model/ListAppGroupMappingResult.h"
#include "model/ListAppInstanceRequest.h"
#include "model/ListAppInstanceResult.h"
#include "model/ListAppResourceAllocsRequest.h"
#include "model/ListAppResourceAllocsResult.h"
#include "model/ListAvailableClusterNodeRequest.h"
#include "model/ListAvailableClusterNodeResult.h"
#include "model/ListClusterRequest.h"
#include "model/ListClusterResult.h"
#include "model/ListClusterNodeRequest.h"
#include "model/ListClusterNodeResult.h"
#include "model/ListDeployConfigRequest.h"
#include "model/ListDeployConfigResult.h"
#include "model/ListDeployOrdersRequest.h"
#include "model/ListDeployOrdersResult.h"
#include "model/ListJobHistoriesRequest.h"
#include "model/ListJobHistoriesResult.h"
#include "model/ListNodeLabelBindingsRequest.h"
#include "model/ListNodeLabelBindingsResult.h"
#include "model/ListNodeLabelsRequest.h"
#include "model/ListNodeLabelsResult.h"
#include "model/ListPersistentVolumeRequest.h"
#include "model/ListPersistentVolumeResult.h"
#include "model/ListPersistentVolumeClaimRequest.h"
#include "model/ListPersistentVolumeClaimResult.h"
#include "model/ListPodsRequest.h"
#include "model/ListPodsResult.h"
#include "model/ListServicesRequest.h"
#include "model/ListServicesResult.h"
#include "model/ListSlbAPsRequest.h"
#include "model/ListSlbAPsResult.h"
#include "model/ListUsersRequest.h"
#include "model/ListUsersResult.h"
#include "model/ModifyServiceRequest.h"
#include "model/ModifyServiceResult.h"
#include "model/ModifySlbAPRequest.h"
#include "model/ModifySlbAPResult.h"
#include "model/QueryClusterDetailRequest.h"
#include "model/QueryClusterDetailResult.h"
#include "model/RebuildAppInstanceRequest.h"
#include "model/RebuildAppInstanceResult.h"
#include "model/RemoveClusterNodeRequest.h"
#include "model/RemoveClusterNodeResult.h"
#include "model/ResetAccountPasswordRequest.h"
#include "model/ResetAccountPasswordResult.h"
#include "model/ResourceStatusNotifyRequest.h"
#include "model/ResourceStatusNotifyResult.h"
#include "model/ResumeDeployRequest.h"
#include "model/ResumeDeployResult.h"
#include "model/ScaleAppRequest.h"
#include "model/ScaleAppResult.h"
#include "model/SetDeployPauseTypeRequest.h"
#include "model/SetDeployPauseTypeResult.h"
#include "model/SubmitInfoRequest.h"
#include "model/SubmitInfoResult.h"
#include "model/SyncPodInfoRequest.h"
#include "model/SyncPodInfoResult.h"
#include "model/UnbindGroupRequest.h"
#include "model/UnbindGroupResult.h"
#include "model/UnbindNodeLabelRequest.h"
#include "model/UnbindNodeLabelResult.h"
#include "model/UpdateAppRequest.h"
#include "model/UpdateAppResult.h"
#include "model/UpdateAppMonitorsRequest.h"
#include "model/UpdateAppMonitorsResult.h"
#include "model/UpdateDeployConfigRequest.h"
#include "model/UpdateDeployConfigResult.h"
#include "model/UpdateEnvironmentRequest.h"
#include "model/UpdateEnvironmentResult.h"


namespace AlibabaCloud
{
	namespace Retailcloud
	{
		class ALIBABACLOUD_RETAILCLOUD_EXPORT RetailcloudClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddClusterNodeResult> AddClusterNodeOutcome;
			typedef std::future<AddClusterNodeOutcome> AddClusterNodeOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::AddClusterNodeRequest&, const AddClusterNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddClusterNodeAsyncHandler;
			typedef Outcome<Error, Model::AllocatePodConfigResult> AllocatePodConfigOutcome;
			typedef std::future<AllocatePodConfigOutcome> AllocatePodConfigOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::AllocatePodConfigRequest&, const AllocatePodConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AllocatePodConfigAsyncHandler;
			typedef Outcome<Error, Model::BatchAddServersResult> BatchAddServersOutcome;
			typedef std::future<BatchAddServersOutcome> BatchAddServersOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::BatchAddServersRequest&, const BatchAddServersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchAddServersAsyncHandler;
			typedef Outcome<Error, Model::BindGroupResult> BindGroupOutcome;
			typedef std::future<BindGroupOutcome> BindGroupOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::BindGroupRequest&, const BindGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindGroupAsyncHandler;
			typedef Outcome<Error, Model::BindNodeLabelResult> BindNodeLabelOutcome;
			typedef std::future<BindNodeLabelOutcome> BindNodeLabelOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::BindNodeLabelRequest&, const BindNodeLabelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindNodeLabelAsyncHandler;
			typedef Outcome<Error, Model::CloseDeployOrderResult> CloseDeployOrderOutcome;
			typedef std::future<CloseDeployOrderOutcome> CloseDeployOrderOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::CloseDeployOrderRequest&, const CloseDeployOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloseDeployOrderAsyncHandler;
			typedef Outcome<Error, Model::CreateAccountResult> CreateAccountOutcome;
			typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::CreateAccountRequest&, const CreateAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountAsyncHandler;
			typedef Outcome<Error, Model::CreateAppResult> CreateAppOutcome;
			typedef std::future<CreateAppOutcome> CreateAppOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::CreateAppRequest&, const CreateAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppAsyncHandler;
			typedef Outcome<Error, Model::CreateAppGroupResult> CreateAppGroupOutcome;
			typedef std::future<CreateAppGroupOutcome> CreateAppGroupOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::CreateAppGroupRequest&, const CreateAppGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateAppMonitorsResult> CreateAppMonitorsOutcome;
			typedef std::future<CreateAppMonitorsOutcome> CreateAppMonitorsOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::CreateAppMonitorsRequest&, const CreateAppMonitorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppMonitorsAsyncHandler;
			typedef Outcome<Error, Model::CreateAppResourceAllocResult> CreateAppResourceAllocOutcome;
			typedef std::future<CreateAppResourceAllocOutcome> CreateAppResourceAllocOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::CreateAppResourceAllocRequest&, const CreateAppResourceAllocOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppResourceAllocAsyncHandler;
			typedef Outcome<Error, Model::CreateClusterResult> CreateClusterOutcome;
			typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::CreateClusterRequest&, const CreateClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsyncHandler;
			typedef Outcome<Error, Model::CreateDbResult> CreateDbOutcome;
			typedef std::future<CreateDbOutcome> CreateDbOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::CreateDbRequest&, const CreateDbOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDbAsyncHandler;
			typedef Outcome<Error, Model::CreateDeployConfigResult> CreateDeployConfigOutcome;
			typedef std::future<CreateDeployConfigOutcome> CreateDeployConfigOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::CreateDeployConfigRequest&, const CreateDeployConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeployConfigAsyncHandler;
			typedef Outcome<Error, Model::CreateEnvironmentResult> CreateEnvironmentOutcome;
			typedef std::future<CreateEnvironmentOutcome> CreateEnvironmentOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::CreateEnvironmentRequest&, const CreateEnvironmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEnvironmentAsyncHandler;
			typedef Outcome<Error, Model::CreateNodeLabelResult> CreateNodeLabelOutcome;
			typedef std::future<CreateNodeLabelOutcome> CreateNodeLabelOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::CreateNodeLabelRequest&, const CreateNodeLabelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNodeLabelAsyncHandler;
			typedef Outcome<Error, Model::CreatePersistentVolumeResult> CreatePersistentVolumeOutcome;
			typedef std::future<CreatePersistentVolumeOutcome> CreatePersistentVolumeOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::CreatePersistentVolumeRequest&, const CreatePersistentVolumeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePersistentVolumeAsyncHandler;
			typedef Outcome<Error, Model::CreatePersistentVolumeClaimResult> CreatePersistentVolumeClaimOutcome;
			typedef std::future<CreatePersistentVolumeClaimOutcome> CreatePersistentVolumeClaimOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::CreatePersistentVolumeClaimRequest&, const CreatePersistentVolumeClaimOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePersistentVolumeClaimAsyncHandler;
			typedef Outcome<Error, Model::CreateServiceResult> CreateServiceOutcome;
			typedef std::future<CreateServiceOutcome> CreateServiceOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::CreateServiceRequest&, const CreateServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateServiceAsyncHandler;
			typedef Outcome<Error, Model::CreateSlbAPResult> CreateSlbAPOutcome;
			typedef std::future<CreateSlbAPOutcome> CreateSlbAPOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::CreateSlbAPRequest&, const CreateSlbAPOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSlbAPAsyncHandler;
			typedef Outcome<Error, Model::DeleteAppDetailResult> DeleteAppDetailOutcome;
			typedef std::future<DeleteAppDetailOutcome> DeleteAppDetailOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::DeleteAppDetailRequest&, const DeleteAppDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAppDetailAsyncHandler;
			typedef Outcome<Error, Model::DeleteAppEnvironmentResult> DeleteAppEnvironmentOutcome;
			typedef std::future<DeleteAppEnvironmentOutcome> DeleteAppEnvironmentOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::DeleteAppEnvironmentRequest&, const DeleteAppEnvironmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAppEnvironmentAsyncHandler;
			typedef Outcome<Error, Model::DeleteAppGroupResult> DeleteAppGroupOutcome;
			typedef std::future<DeleteAppGroupOutcome> DeleteAppGroupOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::DeleteAppGroupRequest&, const DeleteAppGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAppGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteAppResourceAllocResult> DeleteAppResourceAllocOutcome;
			typedef std::future<DeleteAppResourceAllocOutcome> DeleteAppResourceAllocOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::DeleteAppResourceAllocRequest&, const DeleteAppResourceAllocOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAppResourceAllocAsyncHandler;
			typedef Outcome<Error, Model::DeleteClusterResult> DeleteClusterOutcome;
			typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::DeleteClusterRequest&, const DeleteClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterAsyncHandler;
			typedef Outcome<Error, Model::DeleteDatabaseResult> DeleteDatabaseOutcome;
			typedef std::future<DeleteDatabaseOutcome> DeleteDatabaseOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::DeleteDatabaseRequest&, const DeleteDatabaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDatabaseAsyncHandler;
			typedef Outcome<Error, Model::DeleteDeployConfigResult> DeleteDeployConfigOutcome;
			typedef std::future<DeleteDeployConfigOutcome> DeleteDeployConfigOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::DeleteDeployConfigRequest&, const DeleteDeployConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeployConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteNodeLabelResult> DeleteNodeLabelOutcome;
			typedef std::future<DeleteNodeLabelOutcome> DeleteNodeLabelOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::DeleteNodeLabelRequest&, const DeleteNodeLabelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNodeLabelAsyncHandler;
			typedef Outcome<Error, Model::DeletePersistentVolumeResult> DeletePersistentVolumeOutcome;
			typedef std::future<DeletePersistentVolumeOutcome> DeletePersistentVolumeOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::DeletePersistentVolumeRequest&, const DeletePersistentVolumeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePersistentVolumeAsyncHandler;
			typedef Outcome<Error, Model::DeletePersistentVolumeClaimResult> DeletePersistentVolumeClaimOutcome;
			typedef std::future<DeletePersistentVolumeClaimOutcome> DeletePersistentVolumeClaimOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::DeletePersistentVolumeClaimRequest&, const DeletePersistentVolumeClaimOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePersistentVolumeClaimAsyncHandler;
			typedef Outcome<Error, Model::DeleteRdsAccountResult> DeleteRdsAccountOutcome;
			typedef std::future<DeleteRdsAccountOutcome> DeleteRdsAccountOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::DeleteRdsAccountRequest&, const DeleteRdsAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRdsAccountAsyncHandler;
			typedef Outcome<Error, Model::DeleteServiceResult> DeleteServiceOutcome;
			typedef std::future<DeleteServiceOutcome> DeleteServiceOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::DeleteServiceRequest&, const DeleteServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceAsyncHandler;
			typedef Outcome<Error, Model::DeleteSlbAPResult> DeleteSlbAPOutcome;
			typedef std::future<DeleteSlbAPOutcome> DeleteSlbAPOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::DeleteSlbAPRequest&, const DeleteSlbAPOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSlbAPAsyncHandler;
			typedef Outcome<Error, Model::DeployAppResult> DeployAppOutcome;
			typedef std::future<DeployAppOutcome> DeployAppOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::DeployAppRequest&, const DeployAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeployAppAsyncHandler;
			typedef Outcome<Error, Model::DescribeAppDetailResult> DescribeAppDetailOutcome;
			typedef std::future<DescribeAppDetailOutcome> DescribeAppDetailOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::DescribeAppDetailRequest&, const DescribeAppDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeAppEnvironmentDetailResult> DescribeAppEnvironmentDetailOutcome;
			typedef std::future<DescribeAppEnvironmentDetailOutcome> DescribeAppEnvironmentDetailOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::DescribeAppEnvironmentDetailRequest&, const DescribeAppEnvironmentDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppEnvironmentDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeAppMonitorMetricResult> DescribeAppMonitorMetricOutcome;
			typedef std::future<DescribeAppMonitorMetricOutcome> DescribeAppMonitorMetricOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::DescribeAppMonitorMetricRequest&, const DescribeAppMonitorMetricOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppMonitorMetricAsyncHandler;
			typedef Outcome<Error, Model::DescribeAppResourceAllocResult> DescribeAppResourceAllocOutcome;
			typedef std::future<DescribeAppResourceAllocOutcome> DescribeAppResourceAllocOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::DescribeAppResourceAllocRequest&, const DescribeAppResourceAllocOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppResourceAllocAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterDetailResult> DescribeClusterDetailOutcome;
			typedef std::future<DescribeClusterDetailOutcome> DescribeClusterDetailOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::DescribeClusterDetailRequest&, const DescribeClusterDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeDatabasesResult> DescribeDatabasesOutcome;
			typedef std::future<DescribeDatabasesOutcome> DescribeDatabasesOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::DescribeDatabasesRequest&, const DescribeDatabasesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatabasesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDeployOrderDetailResult> DescribeDeployOrderDetailOutcome;
			typedef std::future<DescribeDeployOrderDetailOutcome> DescribeDeployOrderDetailOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::DescribeDeployOrderDetailRequest&, const DescribeDeployOrderDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeployOrderDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeEventMonitorListResult> DescribeEventMonitorListOutcome;
			typedef std::future<DescribeEventMonitorListOutcome> DescribeEventMonitorListOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::DescribeEventMonitorListRequest&, const DescribeEventMonitorListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEventMonitorListAsyncHandler;
			typedef Outcome<Error, Model::DescribeJobLogResult> DescribeJobLogOutcome;
			typedef std::future<DescribeJobLogOutcome> DescribeJobLogOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::DescribeJobLogRequest&, const DescribeJobLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobLogAsyncHandler;
			typedef Outcome<Error, Model::DescribePodContainerLogListResult> DescribePodContainerLogListOutcome;
			typedef std::future<DescribePodContainerLogListOutcome> DescribePodContainerLogListOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::DescribePodContainerLogListRequest&, const DescribePodContainerLogListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePodContainerLogListAsyncHandler;
			typedef Outcome<Error, Model::DescribePodEventsResult> DescribePodEventsOutcome;
			typedef std::future<DescribePodEventsOutcome> DescribePodEventsOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::DescribePodEventsRequest&, const DescribePodEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePodEventsAsyncHandler;
			typedef Outcome<Error, Model::DescribePodLogResult> DescribePodLogOutcome;
			typedef std::future<DescribePodLogOutcome> DescribePodLogOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::DescribePodLogRequest&, const DescribePodLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePodLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeRdsAccountsResult> DescribeRdsAccountsOutcome;
			typedef std::future<DescribeRdsAccountsOutcome> DescribeRdsAccountsOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::DescribeRdsAccountsRequest&, const DescribeRdsAccountsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRdsAccountsAsyncHandler;
			typedef Outcome<Error, Model::DescribeServiceDetailResult> DescribeServiceDetailOutcome;
			typedef std::future<DescribeServiceDetailOutcome> DescribeServiceDetailOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::DescribeServiceDetailRequest&, const DescribeServiceDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeServiceDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeSlbAPDetailResult> DescribeSlbAPDetailOutcome;
			typedef std::future<DescribeSlbAPDetailOutcome> DescribeSlbAPDetailOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::DescribeSlbAPDetailRequest&, const DescribeSlbAPDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlbAPDetailAsyncHandler;
			typedef Outcome<Error, Model::GetInstTransInfoResult> GetInstTransInfoOutcome;
			typedef std::future<GetInstTransInfoOutcome> GetInstTransInfoOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::GetInstTransInfoRequest&, const GetInstTransInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetInstTransInfoAsyncHandler;
			typedef Outcome<Error, Model::GetRdsBackUpResult> GetRdsBackUpOutcome;
			typedef std::future<GetRdsBackUpOutcome> GetRdsBackUpOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::GetRdsBackUpRequest&, const GetRdsBackUpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRdsBackUpAsyncHandler;
			typedef Outcome<Error, Model::GrantDbToAccountResult> GrantDbToAccountOutcome;
			typedef std::future<GrantDbToAccountOutcome> GrantDbToAccountOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::GrantDbToAccountRequest&, const GrantDbToAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantDbToAccountAsyncHandler;
			typedef Outcome<Error, Model::ListAppResult> ListAppOutcome;
			typedef std::future<ListAppOutcome> ListAppOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::ListAppRequest&, const ListAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAppAsyncHandler;
			typedef Outcome<Error, Model::ListAppCmsGroupsResult> ListAppCmsGroupsOutcome;
			typedef std::future<ListAppCmsGroupsOutcome> ListAppCmsGroupsOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::ListAppCmsGroupsRequest&, const ListAppCmsGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAppCmsGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListAppEnvironmentResult> ListAppEnvironmentOutcome;
			typedef std::future<ListAppEnvironmentOutcome> ListAppEnvironmentOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::ListAppEnvironmentRequest&, const ListAppEnvironmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAppEnvironmentAsyncHandler;
			typedef Outcome<Error, Model::ListAppGroupResult> ListAppGroupOutcome;
			typedef std::future<ListAppGroupOutcome> ListAppGroupOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::ListAppGroupRequest&, const ListAppGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAppGroupAsyncHandler;
			typedef Outcome<Error, Model::ListAppGroupMappingResult> ListAppGroupMappingOutcome;
			typedef std::future<ListAppGroupMappingOutcome> ListAppGroupMappingOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::ListAppGroupMappingRequest&, const ListAppGroupMappingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAppGroupMappingAsyncHandler;
			typedef Outcome<Error, Model::ListAppInstanceResult> ListAppInstanceOutcome;
			typedef std::future<ListAppInstanceOutcome> ListAppInstanceOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::ListAppInstanceRequest&, const ListAppInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAppInstanceAsyncHandler;
			typedef Outcome<Error, Model::ListAppResourceAllocsResult> ListAppResourceAllocsOutcome;
			typedef std::future<ListAppResourceAllocsOutcome> ListAppResourceAllocsOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::ListAppResourceAllocsRequest&, const ListAppResourceAllocsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAppResourceAllocsAsyncHandler;
			typedef Outcome<Error, Model::ListAvailableClusterNodeResult> ListAvailableClusterNodeOutcome;
			typedef std::future<ListAvailableClusterNodeOutcome> ListAvailableClusterNodeOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::ListAvailableClusterNodeRequest&, const ListAvailableClusterNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAvailableClusterNodeAsyncHandler;
			typedef Outcome<Error, Model::ListClusterResult> ListClusterOutcome;
			typedef std::future<ListClusterOutcome> ListClusterOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::ListClusterRequest&, const ListClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterAsyncHandler;
			typedef Outcome<Error, Model::ListClusterNodeResult> ListClusterNodeOutcome;
			typedef std::future<ListClusterNodeOutcome> ListClusterNodeOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::ListClusterNodeRequest&, const ListClusterNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterNodeAsyncHandler;
			typedef Outcome<Error, Model::ListDeployConfigResult> ListDeployConfigOutcome;
			typedef std::future<ListDeployConfigOutcome> ListDeployConfigOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::ListDeployConfigRequest&, const ListDeployConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDeployConfigAsyncHandler;
			typedef Outcome<Error, Model::ListDeployOrdersResult> ListDeployOrdersOutcome;
			typedef std::future<ListDeployOrdersOutcome> ListDeployOrdersOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::ListDeployOrdersRequest&, const ListDeployOrdersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDeployOrdersAsyncHandler;
			typedef Outcome<Error, Model::ListJobHistoriesResult> ListJobHistoriesOutcome;
			typedef std::future<ListJobHistoriesOutcome> ListJobHistoriesOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::ListJobHistoriesRequest&, const ListJobHistoriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobHistoriesAsyncHandler;
			typedef Outcome<Error, Model::ListNodeLabelBindingsResult> ListNodeLabelBindingsOutcome;
			typedef std::future<ListNodeLabelBindingsOutcome> ListNodeLabelBindingsOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::ListNodeLabelBindingsRequest&, const ListNodeLabelBindingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNodeLabelBindingsAsyncHandler;
			typedef Outcome<Error, Model::ListNodeLabelsResult> ListNodeLabelsOutcome;
			typedef std::future<ListNodeLabelsOutcome> ListNodeLabelsOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::ListNodeLabelsRequest&, const ListNodeLabelsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNodeLabelsAsyncHandler;
			typedef Outcome<Error, Model::ListPersistentVolumeResult> ListPersistentVolumeOutcome;
			typedef std::future<ListPersistentVolumeOutcome> ListPersistentVolumeOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::ListPersistentVolumeRequest&, const ListPersistentVolumeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPersistentVolumeAsyncHandler;
			typedef Outcome<Error, Model::ListPersistentVolumeClaimResult> ListPersistentVolumeClaimOutcome;
			typedef std::future<ListPersistentVolumeClaimOutcome> ListPersistentVolumeClaimOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::ListPersistentVolumeClaimRequest&, const ListPersistentVolumeClaimOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPersistentVolumeClaimAsyncHandler;
			typedef Outcome<Error, Model::ListPodsResult> ListPodsOutcome;
			typedef std::future<ListPodsOutcome> ListPodsOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::ListPodsRequest&, const ListPodsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPodsAsyncHandler;
			typedef Outcome<Error, Model::ListServicesResult> ListServicesOutcome;
			typedef std::future<ListServicesOutcome> ListServicesOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::ListServicesRequest&, const ListServicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListServicesAsyncHandler;
			typedef Outcome<Error, Model::ListSlbAPsResult> ListSlbAPsOutcome;
			typedef std::future<ListSlbAPsOutcome> ListSlbAPsOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::ListSlbAPsRequest&, const ListSlbAPsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSlbAPsAsyncHandler;
			typedef Outcome<Error, Model::ListUsersResult> ListUsersOutcome;
			typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::ListUsersRequest&, const ListUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersAsyncHandler;
			typedef Outcome<Error, Model::ModifyServiceResult> ModifyServiceOutcome;
			typedef std::future<ModifyServiceOutcome> ModifyServiceOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::ModifyServiceRequest&, const ModifyServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyServiceAsyncHandler;
			typedef Outcome<Error, Model::ModifySlbAPResult> ModifySlbAPOutcome;
			typedef std::future<ModifySlbAPOutcome> ModifySlbAPOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::ModifySlbAPRequest&, const ModifySlbAPOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySlbAPAsyncHandler;
			typedef Outcome<Error, Model::QueryClusterDetailResult> QueryClusterDetailOutcome;
			typedef std::future<QueryClusterDetailOutcome> QueryClusterDetailOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::QueryClusterDetailRequest&, const QueryClusterDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryClusterDetailAsyncHandler;
			typedef Outcome<Error, Model::RebuildAppInstanceResult> RebuildAppInstanceOutcome;
			typedef std::future<RebuildAppInstanceOutcome> RebuildAppInstanceOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::RebuildAppInstanceRequest&, const RebuildAppInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RebuildAppInstanceAsyncHandler;
			typedef Outcome<Error, Model::RemoveClusterNodeResult> RemoveClusterNodeOutcome;
			typedef std::future<RemoveClusterNodeOutcome> RemoveClusterNodeOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::RemoveClusterNodeRequest&, const RemoveClusterNodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveClusterNodeAsyncHandler;
			typedef Outcome<Error, Model::ResetAccountPasswordResult> ResetAccountPasswordOutcome;
			typedef std::future<ResetAccountPasswordOutcome> ResetAccountPasswordOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::ResetAccountPasswordRequest&, const ResetAccountPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountPasswordAsyncHandler;
			typedef Outcome<Error, Model::ResourceStatusNotifyResult> ResourceStatusNotifyOutcome;
			typedef std::future<ResourceStatusNotifyOutcome> ResourceStatusNotifyOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::ResourceStatusNotifyRequest&, const ResourceStatusNotifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResourceStatusNotifyAsyncHandler;
			typedef Outcome<Error, Model::ResumeDeployResult> ResumeDeployOutcome;
			typedef std::future<ResumeDeployOutcome> ResumeDeployOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::ResumeDeployRequest&, const ResumeDeployOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResumeDeployAsyncHandler;
			typedef Outcome<Error, Model::ScaleAppResult> ScaleAppOutcome;
			typedef std::future<ScaleAppOutcome> ScaleAppOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::ScaleAppRequest&, const ScaleAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ScaleAppAsyncHandler;
			typedef Outcome<Error, Model::SetDeployPauseTypeResult> SetDeployPauseTypeOutcome;
			typedef std::future<SetDeployPauseTypeOutcome> SetDeployPauseTypeOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::SetDeployPauseTypeRequest&, const SetDeployPauseTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDeployPauseTypeAsyncHandler;
			typedef Outcome<Error, Model::SubmitInfoResult> SubmitInfoOutcome;
			typedef std::future<SubmitInfoOutcome> SubmitInfoOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::SubmitInfoRequest&, const SubmitInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitInfoAsyncHandler;
			typedef Outcome<Error, Model::SyncPodInfoResult> SyncPodInfoOutcome;
			typedef std::future<SyncPodInfoOutcome> SyncPodInfoOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::SyncPodInfoRequest&, const SyncPodInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SyncPodInfoAsyncHandler;
			typedef Outcome<Error, Model::UnbindGroupResult> UnbindGroupOutcome;
			typedef std::future<UnbindGroupOutcome> UnbindGroupOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::UnbindGroupRequest&, const UnbindGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindGroupAsyncHandler;
			typedef Outcome<Error, Model::UnbindNodeLabelResult> UnbindNodeLabelOutcome;
			typedef std::future<UnbindNodeLabelOutcome> UnbindNodeLabelOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::UnbindNodeLabelRequest&, const UnbindNodeLabelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindNodeLabelAsyncHandler;
			typedef Outcome<Error, Model::UpdateAppResult> UpdateAppOutcome;
			typedef std::future<UpdateAppOutcome> UpdateAppOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::UpdateAppRequest&, const UpdateAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAppAsyncHandler;
			typedef Outcome<Error, Model::UpdateAppMonitorsResult> UpdateAppMonitorsOutcome;
			typedef std::future<UpdateAppMonitorsOutcome> UpdateAppMonitorsOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::UpdateAppMonitorsRequest&, const UpdateAppMonitorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAppMonitorsAsyncHandler;
			typedef Outcome<Error, Model::UpdateDeployConfigResult> UpdateDeployConfigOutcome;
			typedef std::future<UpdateDeployConfigOutcome> UpdateDeployConfigOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::UpdateDeployConfigRequest&, const UpdateDeployConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDeployConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateEnvironmentResult> UpdateEnvironmentOutcome;
			typedef std::future<UpdateEnvironmentOutcome> UpdateEnvironmentOutcomeCallable;
			typedef std::function<void(const RetailcloudClient*, const Model::UpdateEnvironmentRequest&, const UpdateEnvironmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEnvironmentAsyncHandler;

			RetailcloudClient(const Credentials &credentials, const ClientConfiguration &configuration);
			RetailcloudClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			RetailcloudClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~RetailcloudClient();
			AddClusterNodeOutcome addClusterNode(const Model::AddClusterNodeRequest &request)const;
			void addClusterNodeAsync(const Model::AddClusterNodeRequest& request, const AddClusterNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddClusterNodeOutcomeCallable addClusterNodeCallable(const Model::AddClusterNodeRequest& request) const;
			AllocatePodConfigOutcome allocatePodConfig(const Model::AllocatePodConfigRequest &request)const;
			void allocatePodConfigAsync(const Model::AllocatePodConfigRequest& request, const AllocatePodConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AllocatePodConfigOutcomeCallable allocatePodConfigCallable(const Model::AllocatePodConfigRequest& request) const;
			BatchAddServersOutcome batchAddServers(const Model::BatchAddServersRequest &request)const;
			void batchAddServersAsync(const Model::BatchAddServersRequest& request, const BatchAddServersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchAddServersOutcomeCallable batchAddServersCallable(const Model::BatchAddServersRequest& request) const;
			BindGroupOutcome bindGroup(const Model::BindGroupRequest &request)const;
			void bindGroupAsync(const Model::BindGroupRequest& request, const BindGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindGroupOutcomeCallable bindGroupCallable(const Model::BindGroupRequest& request) const;
			BindNodeLabelOutcome bindNodeLabel(const Model::BindNodeLabelRequest &request)const;
			void bindNodeLabelAsync(const Model::BindNodeLabelRequest& request, const BindNodeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindNodeLabelOutcomeCallable bindNodeLabelCallable(const Model::BindNodeLabelRequest& request) const;
			CloseDeployOrderOutcome closeDeployOrder(const Model::CloseDeployOrderRequest &request)const;
			void closeDeployOrderAsync(const Model::CloseDeployOrderRequest& request, const CloseDeployOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloseDeployOrderOutcomeCallable closeDeployOrderCallable(const Model::CloseDeployOrderRequest& request) const;
			CreateAccountOutcome createAccount(const Model::CreateAccountRequest &request)const;
			void createAccountAsync(const Model::CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAccountOutcomeCallable createAccountCallable(const Model::CreateAccountRequest& request) const;
			CreateAppOutcome createApp(const Model::CreateAppRequest &request)const;
			void createAppAsync(const Model::CreateAppRequest& request, const CreateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAppOutcomeCallable createAppCallable(const Model::CreateAppRequest& request) const;
			CreateAppGroupOutcome createAppGroup(const Model::CreateAppGroupRequest &request)const;
			void createAppGroupAsync(const Model::CreateAppGroupRequest& request, const CreateAppGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAppGroupOutcomeCallable createAppGroupCallable(const Model::CreateAppGroupRequest& request) const;
			CreateAppMonitorsOutcome createAppMonitors(const Model::CreateAppMonitorsRequest &request)const;
			void createAppMonitorsAsync(const Model::CreateAppMonitorsRequest& request, const CreateAppMonitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAppMonitorsOutcomeCallable createAppMonitorsCallable(const Model::CreateAppMonitorsRequest& request) const;
			CreateAppResourceAllocOutcome createAppResourceAlloc(const Model::CreateAppResourceAllocRequest &request)const;
			void createAppResourceAllocAsync(const Model::CreateAppResourceAllocRequest& request, const CreateAppResourceAllocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAppResourceAllocOutcomeCallable createAppResourceAllocCallable(const Model::CreateAppResourceAllocRequest& request) const;
			CreateClusterOutcome createCluster(const Model::CreateClusterRequest &request)const;
			void createClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClusterOutcomeCallable createClusterCallable(const Model::CreateClusterRequest& request) const;
			CreateDbOutcome createDb(const Model::CreateDbRequest &request)const;
			void createDbAsync(const Model::CreateDbRequest& request, const CreateDbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDbOutcomeCallable createDbCallable(const Model::CreateDbRequest& request) const;
			CreateDeployConfigOutcome createDeployConfig(const Model::CreateDeployConfigRequest &request)const;
			void createDeployConfigAsync(const Model::CreateDeployConfigRequest& request, const CreateDeployConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDeployConfigOutcomeCallable createDeployConfigCallable(const Model::CreateDeployConfigRequest& request) const;
			CreateEnvironmentOutcome createEnvironment(const Model::CreateEnvironmentRequest &request)const;
			void createEnvironmentAsync(const Model::CreateEnvironmentRequest& request, const CreateEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEnvironmentOutcomeCallable createEnvironmentCallable(const Model::CreateEnvironmentRequest& request) const;
			CreateNodeLabelOutcome createNodeLabel(const Model::CreateNodeLabelRequest &request)const;
			void createNodeLabelAsync(const Model::CreateNodeLabelRequest& request, const CreateNodeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNodeLabelOutcomeCallable createNodeLabelCallable(const Model::CreateNodeLabelRequest& request) const;
			CreatePersistentVolumeOutcome createPersistentVolume(const Model::CreatePersistentVolumeRequest &request)const;
			void createPersistentVolumeAsync(const Model::CreatePersistentVolumeRequest& request, const CreatePersistentVolumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePersistentVolumeOutcomeCallable createPersistentVolumeCallable(const Model::CreatePersistentVolumeRequest& request) const;
			CreatePersistentVolumeClaimOutcome createPersistentVolumeClaim(const Model::CreatePersistentVolumeClaimRequest &request)const;
			void createPersistentVolumeClaimAsync(const Model::CreatePersistentVolumeClaimRequest& request, const CreatePersistentVolumeClaimAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePersistentVolumeClaimOutcomeCallable createPersistentVolumeClaimCallable(const Model::CreatePersistentVolumeClaimRequest& request) const;
			CreateServiceOutcome createService(const Model::CreateServiceRequest &request)const;
			void createServiceAsync(const Model::CreateServiceRequest& request, const CreateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateServiceOutcomeCallable createServiceCallable(const Model::CreateServiceRequest& request) const;
			CreateSlbAPOutcome createSlbAP(const Model::CreateSlbAPRequest &request)const;
			void createSlbAPAsync(const Model::CreateSlbAPRequest& request, const CreateSlbAPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSlbAPOutcomeCallable createSlbAPCallable(const Model::CreateSlbAPRequest& request) const;
			DeleteAppDetailOutcome deleteAppDetail(const Model::DeleteAppDetailRequest &request)const;
			void deleteAppDetailAsync(const Model::DeleteAppDetailRequest& request, const DeleteAppDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAppDetailOutcomeCallable deleteAppDetailCallable(const Model::DeleteAppDetailRequest& request) const;
			DeleteAppEnvironmentOutcome deleteAppEnvironment(const Model::DeleteAppEnvironmentRequest &request)const;
			void deleteAppEnvironmentAsync(const Model::DeleteAppEnvironmentRequest& request, const DeleteAppEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAppEnvironmentOutcomeCallable deleteAppEnvironmentCallable(const Model::DeleteAppEnvironmentRequest& request) const;
			DeleteAppGroupOutcome deleteAppGroup(const Model::DeleteAppGroupRequest &request)const;
			void deleteAppGroupAsync(const Model::DeleteAppGroupRequest& request, const DeleteAppGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAppGroupOutcomeCallable deleteAppGroupCallable(const Model::DeleteAppGroupRequest& request) const;
			DeleteAppResourceAllocOutcome deleteAppResourceAlloc(const Model::DeleteAppResourceAllocRequest &request)const;
			void deleteAppResourceAllocAsync(const Model::DeleteAppResourceAllocRequest& request, const DeleteAppResourceAllocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAppResourceAllocOutcomeCallable deleteAppResourceAllocCallable(const Model::DeleteAppResourceAllocRequest& request) const;
			DeleteClusterOutcome deleteCluster(const Model::DeleteClusterRequest &request)const;
			void deleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteClusterOutcomeCallable deleteClusterCallable(const Model::DeleteClusterRequest& request) const;
			DeleteDatabaseOutcome deleteDatabase(const Model::DeleteDatabaseRequest &request)const;
			void deleteDatabaseAsync(const Model::DeleteDatabaseRequest& request, const DeleteDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDatabaseOutcomeCallable deleteDatabaseCallable(const Model::DeleteDatabaseRequest& request) const;
			DeleteDeployConfigOutcome deleteDeployConfig(const Model::DeleteDeployConfigRequest &request)const;
			void deleteDeployConfigAsync(const Model::DeleteDeployConfigRequest& request, const DeleteDeployConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDeployConfigOutcomeCallable deleteDeployConfigCallable(const Model::DeleteDeployConfigRequest& request) const;
			DeleteNodeLabelOutcome deleteNodeLabel(const Model::DeleteNodeLabelRequest &request)const;
			void deleteNodeLabelAsync(const Model::DeleteNodeLabelRequest& request, const DeleteNodeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNodeLabelOutcomeCallable deleteNodeLabelCallable(const Model::DeleteNodeLabelRequest& request) const;
			DeletePersistentVolumeOutcome deletePersistentVolume(const Model::DeletePersistentVolumeRequest &request)const;
			void deletePersistentVolumeAsync(const Model::DeletePersistentVolumeRequest& request, const DeletePersistentVolumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePersistentVolumeOutcomeCallable deletePersistentVolumeCallable(const Model::DeletePersistentVolumeRequest& request) const;
			DeletePersistentVolumeClaimOutcome deletePersistentVolumeClaim(const Model::DeletePersistentVolumeClaimRequest &request)const;
			void deletePersistentVolumeClaimAsync(const Model::DeletePersistentVolumeClaimRequest& request, const DeletePersistentVolumeClaimAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePersistentVolumeClaimOutcomeCallable deletePersistentVolumeClaimCallable(const Model::DeletePersistentVolumeClaimRequest& request) const;
			DeleteRdsAccountOutcome deleteRdsAccount(const Model::DeleteRdsAccountRequest &request)const;
			void deleteRdsAccountAsync(const Model::DeleteRdsAccountRequest& request, const DeleteRdsAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRdsAccountOutcomeCallable deleteRdsAccountCallable(const Model::DeleteRdsAccountRequest& request) const;
			DeleteServiceOutcome deleteService(const Model::DeleteServiceRequest &request)const;
			void deleteServiceAsync(const Model::DeleteServiceRequest& request, const DeleteServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteServiceOutcomeCallable deleteServiceCallable(const Model::DeleteServiceRequest& request) const;
			DeleteSlbAPOutcome deleteSlbAP(const Model::DeleteSlbAPRequest &request)const;
			void deleteSlbAPAsync(const Model::DeleteSlbAPRequest& request, const DeleteSlbAPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSlbAPOutcomeCallable deleteSlbAPCallable(const Model::DeleteSlbAPRequest& request) const;
			DeployAppOutcome deployApp(const Model::DeployAppRequest &request)const;
			void deployAppAsync(const Model::DeployAppRequest& request, const DeployAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeployAppOutcomeCallable deployAppCallable(const Model::DeployAppRequest& request) const;
			DescribeAppDetailOutcome describeAppDetail(const Model::DescribeAppDetailRequest &request)const;
			void describeAppDetailAsync(const Model::DescribeAppDetailRequest& request, const DescribeAppDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAppDetailOutcomeCallable describeAppDetailCallable(const Model::DescribeAppDetailRequest& request) const;
			DescribeAppEnvironmentDetailOutcome describeAppEnvironmentDetail(const Model::DescribeAppEnvironmentDetailRequest &request)const;
			void describeAppEnvironmentDetailAsync(const Model::DescribeAppEnvironmentDetailRequest& request, const DescribeAppEnvironmentDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAppEnvironmentDetailOutcomeCallable describeAppEnvironmentDetailCallable(const Model::DescribeAppEnvironmentDetailRequest& request) const;
			DescribeAppMonitorMetricOutcome describeAppMonitorMetric(const Model::DescribeAppMonitorMetricRequest &request)const;
			void describeAppMonitorMetricAsync(const Model::DescribeAppMonitorMetricRequest& request, const DescribeAppMonitorMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAppMonitorMetricOutcomeCallable describeAppMonitorMetricCallable(const Model::DescribeAppMonitorMetricRequest& request) const;
			DescribeAppResourceAllocOutcome describeAppResourceAlloc(const Model::DescribeAppResourceAllocRequest &request)const;
			void describeAppResourceAllocAsync(const Model::DescribeAppResourceAllocRequest& request, const DescribeAppResourceAllocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAppResourceAllocOutcomeCallable describeAppResourceAllocCallable(const Model::DescribeAppResourceAllocRequest& request) const;
			DescribeClusterDetailOutcome describeClusterDetail(const Model::DescribeClusterDetailRequest &request)const;
			void describeClusterDetailAsync(const Model::DescribeClusterDetailRequest& request, const DescribeClusterDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterDetailOutcomeCallable describeClusterDetailCallable(const Model::DescribeClusterDetailRequest& request) const;
			DescribeDatabasesOutcome describeDatabases(const Model::DescribeDatabasesRequest &request)const;
			void describeDatabasesAsync(const Model::DescribeDatabasesRequest& request, const DescribeDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDatabasesOutcomeCallable describeDatabasesCallable(const Model::DescribeDatabasesRequest& request) const;
			DescribeDeployOrderDetailOutcome describeDeployOrderDetail(const Model::DescribeDeployOrderDetailRequest &request)const;
			void describeDeployOrderDetailAsync(const Model::DescribeDeployOrderDetailRequest& request, const DescribeDeployOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDeployOrderDetailOutcomeCallable describeDeployOrderDetailCallable(const Model::DescribeDeployOrderDetailRequest& request) const;
			DescribeEventMonitorListOutcome describeEventMonitorList(const Model::DescribeEventMonitorListRequest &request)const;
			void describeEventMonitorListAsync(const Model::DescribeEventMonitorListRequest& request, const DescribeEventMonitorListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEventMonitorListOutcomeCallable describeEventMonitorListCallable(const Model::DescribeEventMonitorListRequest& request) const;
			DescribeJobLogOutcome describeJobLog(const Model::DescribeJobLogRequest &request)const;
			void describeJobLogAsync(const Model::DescribeJobLogRequest& request, const DescribeJobLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeJobLogOutcomeCallable describeJobLogCallable(const Model::DescribeJobLogRequest& request) const;
			DescribePodContainerLogListOutcome describePodContainerLogList(const Model::DescribePodContainerLogListRequest &request)const;
			void describePodContainerLogListAsync(const Model::DescribePodContainerLogListRequest& request, const DescribePodContainerLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePodContainerLogListOutcomeCallable describePodContainerLogListCallable(const Model::DescribePodContainerLogListRequest& request) const;
			DescribePodEventsOutcome describePodEvents(const Model::DescribePodEventsRequest &request)const;
			void describePodEventsAsync(const Model::DescribePodEventsRequest& request, const DescribePodEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePodEventsOutcomeCallable describePodEventsCallable(const Model::DescribePodEventsRequest& request) const;
			DescribePodLogOutcome describePodLog(const Model::DescribePodLogRequest &request)const;
			void describePodLogAsync(const Model::DescribePodLogRequest& request, const DescribePodLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePodLogOutcomeCallable describePodLogCallable(const Model::DescribePodLogRequest& request) const;
			DescribeRdsAccountsOutcome describeRdsAccounts(const Model::DescribeRdsAccountsRequest &request)const;
			void describeRdsAccountsAsync(const Model::DescribeRdsAccountsRequest& request, const DescribeRdsAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRdsAccountsOutcomeCallable describeRdsAccountsCallable(const Model::DescribeRdsAccountsRequest& request) const;
			DescribeServiceDetailOutcome describeServiceDetail(const Model::DescribeServiceDetailRequest &request)const;
			void describeServiceDetailAsync(const Model::DescribeServiceDetailRequest& request, const DescribeServiceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeServiceDetailOutcomeCallable describeServiceDetailCallable(const Model::DescribeServiceDetailRequest& request) const;
			DescribeSlbAPDetailOutcome describeSlbAPDetail(const Model::DescribeSlbAPDetailRequest &request)const;
			void describeSlbAPDetailAsync(const Model::DescribeSlbAPDetailRequest& request, const DescribeSlbAPDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSlbAPDetailOutcomeCallable describeSlbAPDetailCallable(const Model::DescribeSlbAPDetailRequest& request) const;
			GetInstTransInfoOutcome getInstTransInfo(const Model::GetInstTransInfoRequest &request)const;
			void getInstTransInfoAsync(const Model::GetInstTransInfoRequest& request, const GetInstTransInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetInstTransInfoOutcomeCallable getInstTransInfoCallable(const Model::GetInstTransInfoRequest& request) const;
			GetRdsBackUpOutcome getRdsBackUp(const Model::GetRdsBackUpRequest &request)const;
			void getRdsBackUpAsync(const Model::GetRdsBackUpRequest& request, const GetRdsBackUpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRdsBackUpOutcomeCallable getRdsBackUpCallable(const Model::GetRdsBackUpRequest& request) const;
			GrantDbToAccountOutcome grantDbToAccount(const Model::GrantDbToAccountRequest &request)const;
			void grantDbToAccountAsync(const Model::GrantDbToAccountRequest& request, const GrantDbToAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrantDbToAccountOutcomeCallable grantDbToAccountCallable(const Model::GrantDbToAccountRequest& request) const;
			ListAppOutcome listApp(const Model::ListAppRequest &request)const;
			void listAppAsync(const Model::ListAppRequest& request, const ListAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAppOutcomeCallable listAppCallable(const Model::ListAppRequest& request) const;
			ListAppCmsGroupsOutcome listAppCmsGroups(const Model::ListAppCmsGroupsRequest &request)const;
			void listAppCmsGroupsAsync(const Model::ListAppCmsGroupsRequest& request, const ListAppCmsGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAppCmsGroupsOutcomeCallable listAppCmsGroupsCallable(const Model::ListAppCmsGroupsRequest& request) const;
			ListAppEnvironmentOutcome listAppEnvironment(const Model::ListAppEnvironmentRequest &request)const;
			void listAppEnvironmentAsync(const Model::ListAppEnvironmentRequest& request, const ListAppEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAppEnvironmentOutcomeCallable listAppEnvironmentCallable(const Model::ListAppEnvironmentRequest& request) const;
			ListAppGroupOutcome listAppGroup(const Model::ListAppGroupRequest &request)const;
			void listAppGroupAsync(const Model::ListAppGroupRequest& request, const ListAppGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAppGroupOutcomeCallable listAppGroupCallable(const Model::ListAppGroupRequest& request) const;
			ListAppGroupMappingOutcome listAppGroupMapping(const Model::ListAppGroupMappingRequest &request)const;
			void listAppGroupMappingAsync(const Model::ListAppGroupMappingRequest& request, const ListAppGroupMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAppGroupMappingOutcomeCallable listAppGroupMappingCallable(const Model::ListAppGroupMappingRequest& request) const;
			ListAppInstanceOutcome listAppInstance(const Model::ListAppInstanceRequest &request)const;
			void listAppInstanceAsync(const Model::ListAppInstanceRequest& request, const ListAppInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAppInstanceOutcomeCallable listAppInstanceCallable(const Model::ListAppInstanceRequest& request) const;
			ListAppResourceAllocsOutcome listAppResourceAllocs(const Model::ListAppResourceAllocsRequest &request)const;
			void listAppResourceAllocsAsync(const Model::ListAppResourceAllocsRequest& request, const ListAppResourceAllocsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAppResourceAllocsOutcomeCallable listAppResourceAllocsCallable(const Model::ListAppResourceAllocsRequest& request) const;
			ListAvailableClusterNodeOutcome listAvailableClusterNode(const Model::ListAvailableClusterNodeRequest &request)const;
			void listAvailableClusterNodeAsync(const Model::ListAvailableClusterNodeRequest& request, const ListAvailableClusterNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAvailableClusterNodeOutcomeCallable listAvailableClusterNodeCallable(const Model::ListAvailableClusterNodeRequest& request) const;
			ListClusterOutcome listCluster(const Model::ListClusterRequest &request)const;
			void listClusterAsync(const Model::ListClusterRequest& request, const ListClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterOutcomeCallable listClusterCallable(const Model::ListClusterRequest& request) const;
			ListClusterNodeOutcome listClusterNode(const Model::ListClusterNodeRequest &request)const;
			void listClusterNodeAsync(const Model::ListClusterNodeRequest& request, const ListClusterNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterNodeOutcomeCallable listClusterNodeCallable(const Model::ListClusterNodeRequest& request) const;
			ListDeployConfigOutcome listDeployConfig(const Model::ListDeployConfigRequest &request)const;
			void listDeployConfigAsync(const Model::ListDeployConfigRequest& request, const ListDeployConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDeployConfigOutcomeCallable listDeployConfigCallable(const Model::ListDeployConfigRequest& request) const;
			ListDeployOrdersOutcome listDeployOrders(const Model::ListDeployOrdersRequest &request)const;
			void listDeployOrdersAsync(const Model::ListDeployOrdersRequest& request, const ListDeployOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDeployOrdersOutcomeCallable listDeployOrdersCallable(const Model::ListDeployOrdersRequest& request) const;
			ListJobHistoriesOutcome listJobHistories(const Model::ListJobHistoriesRequest &request)const;
			void listJobHistoriesAsync(const Model::ListJobHistoriesRequest& request, const ListJobHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobHistoriesOutcomeCallable listJobHistoriesCallable(const Model::ListJobHistoriesRequest& request) const;
			ListNodeLabelBindingsOutcome listNodeLabelBindings(const Model::ListNodeLabelBindingsRequest &request)const;
			void listNodeLabelBindingsAsync(const Model::ListNodeLabelBindingsRequest& request, const ListNodeLabelBindingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNodeLabelBindingsOutcomeCallable listNodeLabelBindingsCallable(const Model::ListNodeLabelBindingsRequest& request) const;
			ListNodeLabelsOutcome listNodeLabels(const Model::ListNodeLabelsRequest &request)const;
			void listNodeLabelsAsync(const Model::ListNodeLabelsRequest& request, const ListNodeLabelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNodeLabelsOutcomeCallable listNodeLabelsCallable(const Model::ListNodeLabelsRequest& request) const;
			ListPersistentVolumeOutcome listPersistentVolume(const Model::ListPersistentVolumeRequest &request)const;
			void listPersistentVolumeAsync(const Model::ListPersistentVolumeRequest& request, const ListPersistentVolumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPersistentVolumeOutcomeCallable listPersistentVolumeCallable(const Model::ListPersistentVolumeRequest& request) const;
			ListPersistentVolumeClaimOutcome listPersistentVolumeClaim(const Model::ListPersistentVolumeClaimRequest &request)const;
			void listPersistentVolumeClaimAsync(const Model::ListPersistentVolumeClaimRequest& request, const ListPersistentVolumeClaimAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPersistentVolumeClaimOutcomeCallable listPersistentVolumeClaimCallable(const Model::ListPersistentVolumeClaimRequest& request) const;
			ListPodsOutcome listPods(const Model::ListPodsRequest &request)const;
			void listPodsAsync(const Model::ListPodsRequest& request, const ListPodsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPodsOutcomeCallable listPodsCallable(const Model::ListPodsRequest& request) const;
			ListServicesOutcome listServices(const Model::ListServicesRequest &request)const;
			void listServicesAsync(const Model::ListServicesRequest& request, const ListServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListServicesOutcomeCallable listServicesCallable(const Model::ListServicesRequest& request) const;
			ListSlbAPsOutcome listSlbAPs(const Model::ListSlbAPsRequest &request)const;
			void listSlbAPsAsync(const Model::ListSlbAPsRequest& request, const ListSlbAPsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSlbAPsOutcomeCallable listSlbAPsCallable(const Model::ListSlbAPsRequest& request) const;
			ListUsersOutcome listUsers(const Model::ListUsersRequest &request)const;
			void listUsersAsync(const Model::ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUsersOutcomeCallable listUsersCallable(const Model::ListUsersRequest& request) const;
			ModifyServiceOutcome modifyService(const Model::ModifyServiceRequest &request)const;
			void modifyServiceAsync(const Model::ModifyServiceRequest& request, const ModifyServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyServiceOutcomeCallable modifyServiceCallable(const Model::ModifyServiceRequest& request) const;
			ModifySlbAPOutcome modifySlbAP(const Model::ModifySlbAPRequest &request)const;
			void modifySlbAPAsync(const Model::ModifySlbAPRequest& request, const ModifySlbAPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySlbAPOutcomeCallable modifySlbAPCallable(const Model::ModifySlbAPRequest& request) const;
			QueryClusterDetailOutcome queryClusterDetail(const Model::QueryClusterDetailRequest &request)const;
			void queryClusterDetailAsync(const Model::QueryClusterDetailRequest& request, const QueryClusterDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryClusterDetailOutcomeCallable queryClusterDetailCallable(const Model::QueryClusterDetailRequest& request) const;
			RebuildAppInstanceOutcome rebuildAppInstance(const Model::RebuildAppInstanceRequest &request)const;
			void rebuildAppInstanceAsync(const Model::RebuildAppInstanceRequest& request, const RebuildAppInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RebuildAppInstanceOutcomeCallable rebuildAppInstanceCallable(const Model::RebuildAppInstanceRequest& request) const;
			RemoveClusterNodeOutcome removeClusterNode(const Model::RemoveClusterNodeRequest &request)const;
			void removeClusterNodeAsync(const Model::RemoveClusterNodeRequest& request, const RemoveClusterNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveClusterNodeOutcomeCallable removeClusterNodeCallable(const Model::RemoveClusterNodeRequest& request) const;
			ResetAccountPasswordOutcome resetAccountPassword(const Model::ResetAccountPasswordRequest &request)const;
			void resetAccountPasswordAsync(const Model::ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetAccountPasswordOutcomeCallable resetAccountPasswordCallable(const Model::ResetAccountPasswordRequest& request) const;
			ResourceStatusNotifyOutcome resourceStatusNotify(const Model::ResourceStatusNotifyRequest &request)const;
			void resourceStatusNotifyAsync(const Model::ResourceStatusNotifyRequest& request, const ResourceStatusNotifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResourceStatusNotifyOutcomeCallable resourceStatusNotifyCallable(const Model::ResourceStatusNotifyRequest& request) const;
			ResumeDeployOutcome resumeDeploy(const Model::ResumeDeployRequest &request)const;
			void resumeDeployAsync(const Model::ResumeDeployRequest& request, const ResumeDeployAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResumeDeployOutcomeCallable resumeDeployCallable(const Model::ResumeDeployRequest& request) const;
			ScaleAppOutcome scaleApp(const Model::ScaleAppRequest &request)const;
			void scaleAppAsync(const Model::ScaleAppRequest& request, const ScaleAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ScaleAppOutcomeCallable scaleAppCallable(const Model::ScaleAppRequest& request) const;
			SetDeployPauseTypeOutcome setDeployPauseType(const Model::SetDeployPauseTypeRequest &request)const;
			void setDeployPauseTypeAsync(const Model::SetDeployPauseTypeRequest& request, const SetDeployPauseTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDeployPauseTypeOutcomeCallable setDeployPauseTypeCallable(const Model::SetDeployPauseTypeRequest& request) const;
			SubmitInfoOutcome submitInfo(const Model::SubmitInfoRequest &request)const;
			void submitInfoAsync(const Model::SubmitInfoRequest& request, const SubmitInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitInfoOutcomeCallable submitInfoCallable(const Model::SubmitInfoRequest& request) const;
			SyncPodInfoOutcome syncPodInfo(const Model::SyncPodInfoRequest &request)const;
			void syncPodInfoAsync(const Model::SyncPodInfoRequest& request, const SyncPodInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SyncPodInfoOutcomeCallable syncPodInfoCallable(const Model::SyncPodInfoRequest& request) const;
			UnbindGroupOutcome unbindGroup(const Model::UnbindGroupRequest &request)const;
			void unbindGroupAsync(const Model::UnbindGroupRequest& request, const UnbindGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindGroupOutcomeCallable unbindGroupCallable(const Model::UnbindGroupRequest& request) const;
			UnbindNodeLabelOutcome unbindNodeLabel(const Model::UnbindNodeLabelRequest &request)const;
			void unbindNodeLabelAsync(const Model::UnbindNodeLabelRequest& request, const UnbindNodeLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindNodeLabelOutcomeCallable unbindNodeLabelCallable(const Model::UnbindNodeLabelRequest& request) const;
			UpdateAppOutcome updateApp(const Model::UpdateAppRequest &request)const;
			void updateAppAsync(const Model::UpdateAppRequest& request, const UpdateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAppOutcomeCallable updateAppCallable(const Model::UpdateAppRequest& request) const;
			UpdateAppMonitorsOutcome updateAppMonitors(const Model::UpdateAppMonitorsRequest &request)const;
			void updateAppMonitorsAsync(const Model::UpdateAppMonitorsRequest& request, const UpdateAppMonitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAppMonitorsOutcomeCallable updateAppMonitorsCallable(const Model::UpdateAppMonitorsRequest& request) const;
			UpdateDeployConfigOutcome updateDeployConfig(const Model::UpdateDeployConfigRequest &request)const;
			void updateDeployConfigAsync(const Model::UpdateDeployConfigRequest& request, const UpdateDeployConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDeployConfigOutcomeCallable updateDeployConfigCallable(const Model::UpdateDeployConfigRequest& request) const;
			UpdateEnvironmentOutcome updateEnvironment(const Model::UpdateEnvironmentRequest &request)const;
			void updateEnvironmentAsync(const Model::UpdateEnvironmentRequest& request, const UpdateEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEnvironmentOutcomeCallable updateEnvironmentCallable(const Model::UpdateEnvironmentRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_RETAILCLOUD_RETAILCLOUDCLIENT_H_
