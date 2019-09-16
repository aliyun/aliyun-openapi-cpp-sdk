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

#ifndef ALIBABACLOUD_EHPC_EHPCCLIENT_H_
#define ALIBABACLOUD_EHPC_EHPCCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "EHPCExport.h"
#include "model/DescribeJobRequest.h"
#include "model/DescribeJobResult.h"
#include "model/DeleteImageRequest.h"
#include "model/DeleteImageResult.h"
#include "model/DeleteUsersRequest.h"
#include "model/DeleteUsersResult.h"
#include "model/DeleteGWSClusterRequest.h"
#include "model/DeleteGWSClusterResult.h"
#include "model/ListUsersRequest.h"
#include "model/ListUsersResult.h"
#include "model/DescribeClusterRequest.h"
#include "model/DescribeClusterResult.h"
#include "model/StopNodesRequest.h"
#include "model/StopNodesResult.h"
#include "model/DescribeContainerAppRequest.h"
#include "model/DescribeContainerAppResult.h"
#include "model/PullImageRequest.h"
#include "model/PullImageResult.h"
#include "model/ListNodesByQueueRequest.h"
#include "model/ListNodesByQueueResult.h"
#include "model/ModifyContainerAppAttributesRequest.h"
#include "model/ModifyContainerAppAttributesResult.h"
#include "model/GetCloudMetricProfilingRequest.h"
#include "model/GetCloudMetricProfilingResult.h"
#include "model/DescribeImagePriceRequest.h"
#include "model/DescribeImagePriceResult.h"
#include "model/StopGWSInstanceRequest.h"
#include "model/StopGWSInstanceResult.h"
#include "model/GetAutoScaleConfigRequest.h"
#include "model/GetAutoScaleConfigResult.h"
#include "model/ListNodesRequest.h"
#include "model/ListNodesResult.h"
#include "model/InstallNFSClientRequest.h"
#include "model/InstallNFSClientResult.h"
#include "model/ListCommandsRequest.h"
#include "model/ListCommandsResult.h"
#include "model/InvokeShellCommandRequest.h"
#include "model/InvokeShellCommandResult.h"
#include "model/CreateGWSImageRequest.h"
#include "model/CreateGWSImageResult.h"
#include "model/ListFileSystemWithMountTargetsRequest.h"
#include "model/ListFileSystemWithMountTargetsResult.h"
#include "model/ModifyClusterAttributesRequest.h"
#include "model/ModifyClusterAttributesResult.h"
#include "model/DeleteJobTemplatesRequest.h"
#include "model/DeleteJobTemplatesResult.h"
#include "model/GetCloudMetricLogsRequest.h"
#include "model/GetCloudMetricLogsResult.h"
#include "model/CreateJobTemplateRequest.h"
#include "model/CreateJobTemplateResult.h"
#include "model/GetHybridClusterConfigRequest.h"
#include "model/GetHybridClusterConfigResult.h"
#include "model/DescribeGWSInstancesRequest.h"
#include "model/DescribeGWSInstancesResult.h"
#include "model/ResetNodesRequest.h"
#include "model/ResetNodesResult.h"
#include "model/UninstallSoftwareRequest.h"
#include "model/UninstallSoftwareResult.h"
#include "model/DescribeGWSClustersRequest.h"
#include "model/DescribeGWSClustersResult.h"
#include "model/ListContainerImagesRequest.h"
#include "model/ListContainerImagesResult.h"
#include "model/DeleteJobsRequest.h"
#include "model/DeleteJobsResult.h"
#include "model/DeleteNodesRequest.h"
#include "model/DeleteNodesResult.h"
#include "model/ListJobsRequest.h"
#include "model/ListJobsResult.h"
#include "model/ListCpfsFileSystemsRequest.h"
#include "model/ListCpfsFileSystemsResult.h"
#include "model/ListAvailableFileSystemTypesRequest.h"
#include "model/ListAvailableFileSystemTypesResult.h"
#include "model/ListClustersMetaRequest.h"
#include "model/ListClustersMetaResult.h"
#include "model/QueryServicePackAndPriceRequest.h"
#include "model/QueryServicePackAndPriceResult.h"
#include "model/ListVolumesRequest.h"
#include "model/ListVolumesResult.h"
#include "model/DeleteContainerAppsRequest.h"
#include "model/DeleteContainerAppsResult.h"
#include "model/ModifyImageGatewayConfigRequest.h"
#include "model/ModifyImageGatewayConfigResult.h"
#include "model/ListInvocationStatusRequest.h"
#include "model/ListInvocationStatusResult.h"
#include "model/ListContainerAppsRequest.h"
#include "model/ListContainerAppsResult.h"
#include "model/DescribeNFSClientStatusRequest.h"
#include "model/DescribeNFSClientStatusResult.h"
#include "model/ListClustersRequest.h"
#include "model/ListClustersResult.h"
#include "model/SubmitJobRequest.h"
#include "model/SubmitJobResult.h"
#include "model/GetAccountingReportRequest.h"
#include "model/GetAccountingReportResult.h"
#include "model/DescribeAutoScaleConfigRequest.h"
#include "model/DescribeAutoScaleConfigResult.h"
#include "model/GetVisualServiceStatusRequest.h"
#include "model/GetVisualServiceStatusResult.h"
#include "model/StartVisualServiceRequest.h"
#include "model/StartVisualServiceResult.h"
#include "model/SetGWSInstanceUserRequest.h"
#include "model/SetGWSInstanceUserResult.h"
#include "model/InstallSoftwareRequest.h"
#include "model/InstallSoftwareResult.h"
#include "model/ListAvailableEcsTypesRequest.h"
#include "model/ListAvailableEcsTypesResult.h"
#include "model/MountNFSRequest.h"
#include "model/MountNFSResult.h"
#include "model/AddQueueRequest.h"
#include "model/AddQueueResult.h"
#include "model/CreateGWSInstanceRequest.h"
#include "model/CreateGWSInstanceResult.h"
#include "model/ListCurrentClientVersionRequest.h"
#include "model/ListCurrentClientVersionResult.h"
#include "model/UpdateClusterVolumesRequest.h"
#include "model/UpdateClusterVolumesResult.h"
#include "model/StartGWSInstanceRequest.h"
#include "model/StartGWSInstanceResult.h"
#include "model/SetAutoScaleConfigRequest.h"
#include "model/SetAutoScaleConfigResult.h"
#include "model/ListInvocationResultsRequest.h"
#include "model/ListInvocationResultsResult.h"
#include "model/ListSoftwaresRequest.h"
#include "model/ListSoftwaresResult.h"
#include "model/AddNodesRequest.h"
#include "model/AddNodesResult.h"
#include "model/DescribeGWSImagesRequest.h"
#include "model/DescribeGWSImagesResult.h"
#include "model/StopJobsRequest.h"
#include "model/StopJobsResult.h"
#include "model/StartNodesRequest.h"
#include "model/StartNodesResult.h"
#include "model/ModifyUserGroupsRequest.h"
#include "model/ModifyUserGroupsResult.h"
#include "model/StartClusterRequest.h"
#include "model/StartClusterResult.h"
#include "model/SetQueueRequest.h"
#include "model/SetQueueResult.h"
#include "model/ListCustomImagesRequest.h"
#include "model/ListCustomImagesResult.h"
#include "model/ListJobTemplatesRequest.h"
#include "model/ListJobTemplatesResult.h"
#include "model/AddUsersRequest.h"
#include "model/AddUsersResult.h"
#include "model/CreateGWSClusterRequest.h"
#include "model/CreateGWSClusterResult.h"
#include "model/DescribeImageGatewayConfigRequest.h"
#include "model/DescribeImageGatewayConfigResult.h"
#include "model/GetGWSConnectTicketRequest.h"
#include "model/GetGWSConnectTicketResult.h"
#include "model/StopClusterRequest.h"
#include "model/StopClusterResult.h"
#include "model/ListNodesNoPagingRequest.h"
#include "model/ListNodesNoPagingResult.h"
#include "model/CreateHybridClusterRequest.h"
#include "model/CreateHybridClusterResult.h"
#include "model/UpdateQueueConfigRequest.h"
#include "model/UpdateQueueConfigResult.h"
#include "model/StopVisualServiceRequest.h"
#include "model/StopVisualServiceResult.h"
#include "model/CreateClusterRequest.h"
#include "model/CreateClusterResult.h"
#include "model/ModifyUserPasswordsRequest.h"
#include "model/ModifyUserPasswordsResult.h"
#include "model/DescribeImageRequest.h"
#include "model/DescribeImageResult.h"
#include "model/DeleteQueueRequest.h"
#include "model/DeleteQueueResult.h"
#include "model/ListInstalledSoftwareRequest.h"
#include "model/ListInstalledSoftwareResult.h"
#include "model/UpgradeClientRequest.h"
#include "model/UpgradeClientResult.h"
#include "model/DeleteClusterRequest.h"
#include "model/DeleteClusterResult.h"
#include "model/ListImagesRequest.h"
#include "model/ListImagesResult.h"
#include "model/ListQueuesRequest.h"
#include "model/ListQueuesResult.h"
#include "model/CreateJobFileRequest.h"
#include "model/CreateJobFileResult.h"
#include "model/ListCloudMetricProfilingsRequest.h"
#include "model/ListCloudMetricProfilingsResult.h"
#include "model/GetClusterVolumesRequest.h"
#include "model/GetClusterVolumesResult.h"
#include "model/SetJobUserRequest.h"
#include "model/SetJobUserResult.h"
#include "model/DeleteGWSInstanceRequest.h"
#include "model/DeleteGWSInstanceResult.h"
#include "model/ListRegionsRequest.h"
#include "model/ListRegionsResult.h"
#include "model/RunCloudMetricProfilingRequest.h"
#include "model/RunCloudMetricProfilingResult.h"
#include "model/DescribePriceRequest.h"
#include "model/DescribePriceResult.h"
#include "model/RerunJobsRequest.h"
#include "model/RerunJobsResult.h"
#include "model/EditJobTemplateRequest.h"
#include "model/EditJobTemplateResult.h"
#include "model/AddLocalNodesRequest.h"
#include "model/AddLocalNodesResult.h"
#include "model/ModifyVisualServicePasswdRequest.h"
#include "model/ModifyVisualServicePasswdResult.h"
#include "model/ListPreferredEcsTypesRequest.h"
#include "model/ListPreferredEcsTypesResult.h"
#include "model/AddContainerAppRequest.h"
#include "model/AddContainerAppResult.h"
#include "model/ListClusterLogsRequest.h"
#include "model/ListClusterLogsResult.h"
#include "model/RecoverClusterRequest.h"
#include "model/RecoverClusterResult.h"


namespace AlibabaCloud
{
	namespace EHPC
	{
		class ALIBABACLOUD_EHPC_EXPORT EHPCClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::DescribeJobResult> DescribeJobOutcome;
			typedef std::future<DescribeJobOutcome> DescribeJobOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::DescribeJobRequest&, const DescribeJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteImageResult> DeleteImageOutcome;
			typedef std::future<DeleteImageOutcome> DeleteImageOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::DeleteImageRequest&, const DeleteImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageAsyncHandler;
			typedef Outcome<Error, Model::DeleteUsersResult> DeleteUsersOutcome;
			typedef std::future<DeleteUsersOutcome> DeleteUsersOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::DeleteUsersRequest&, const DeleteUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUsersAsyncHandler;
			typedef Outcome<Error, Model::DeleteGWSClusterResult> DeleteGWSClusterOutcome;
			typedef std::future<DeleteGWSClusterOutcome> DeleteGWSClusterOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::DeleteGWSClusterRequest&, const DeleteGWSClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGWSClusterAsyncHandler;
			typedef Outcome<Error, Model::ListUsersResult> ListUsersOutcome;
			typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListUsersRequest&, const ListUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterResult> DescribeClusterOutcome;
			typedef std::future<DescribeClusterOutcome> DescribeClusterOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::DescribeClusterRequest&, const DescribeClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterAsyncHandler;
			typedef Outcome<Error, Model::StopNodesResult> StopNodesOutcome;
			typedef std::future<StopNodesOutcome> StopNodesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::StopNodesRequest&, const StopNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopNodesAsyncHandler;
			typedef Outcome<Error, Model::DescribeContainerAppResult> DescribeContainerAppOutcome;
			typedef std::future<DescribeContainerAppOutcome> DescribeContainerAppOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::DescribeContainerAppRequest&, const DescribeContainerAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContainerAppAsyncHandler;
			typedef Outcome<Error, Model::PullImageResult> PullImageOutcome;
			typedef std::future<PullImageOutcome> PullImageOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::PullImageRequest&, const PullImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PullImageAsyncHandler;
			typedef Outcome<Error, Model::ListNodesByQueueResult> ListNodesByQueueOutcome;
			typedef std::future<ListNodesByQueueOutcome> ListNodesByQueueOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListNodesByQueueRequest&, const ListNodesByQueueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNodesByQueueAsyncHandler;
			typedef Outcome<Error, Model::ModifyContainerAppAttributesResult> ModifyContainerAppAttributesOutcome;
			typedef std::future<ModifyContainerAppAttributesOutcome> ModifyContainerAppAttributesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ModifyContainerAppAttributesRequest&, const ModifyContainerAppAttributesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyContainerAppAttributesAsyncHandler;
			typedef Outcome<Error, Model::GetCloudMetricProfilingResult> GetCloudMetricProfilingOutcome;
			typedef std::future<GetCloudMetricProfilingOutcome> GetCloudMetricProfilingOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::GetCloudMetricProfilingRequest&, const GetCloudMetricProfilingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCloudMetricProfilingAsyncHandler;
			typedef Outcome<Error, Model::DescribeImagePriceResult> DescribeImagePriceOutcome;
			typedef std::future<DescribeImagePriceOutcome> DescribeImagePriceOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::DescribeImagePriceRequest&, const DescribeImagePriceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImagePriceAsyncHandler;
			typedef Outcome<Error, Model::StopGWSInstanceResult> StopGWSInstanceOutcome;
			typedef std::future<StopGWSInstanceOutcome> StopGWSInstanceOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::StopGWSInstanceRequest&, const StopGWSInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopGWSInstanceAsyncHandler;
			typedef Outcome<Error, Model::GetAutoScaleConfigResult> GetAutoScaleConfigOutcome;
			typedef std::future<GetAutoScaleConfigOutcome> GetAutoScaleConfigOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::GetAutoScaleConfigRequest&, const GetAutoScaleConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAutoScaleConfigAsyncHandler;
			typedef Outcome<Error, Model::ListNodesResult> ListNodesOutcome;
			typedef std::future<ListNodesOutcome> ListNodesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListNodesRequest&, const ListNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNodesAsyncHandler;
			typedef Outcome<Error, Model::InstallNFSClientResult> InstallNFSClientOutcome;
			typedef std::future<InstallNFSClientOutcome> InstallNFSClientOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::InstallNFSClientRequest&, const InstallNFSClientOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InstallNFSClientAsyncHandler;
			typedef Outcome<Error, Model::ListCommandsResult> ListCommandsOutcome;
			typedef std::future<ListCommandsOutcome> ListCommandsOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListCommandsRequest&, const ListCommandsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCommandsAsyncHandler;
			typedef Outcome<Error, Model::InvokeShellCommandResult> InvokeShellCommandOutcome;
			typedef std::future<InvokeShellCommandOutcome> InvokeShellCommandOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::InvokeShellCommandRequest&, const InvokeShellCommandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InvokeShellCommandAsyncHandler;
			typedef Outcome<Error, Model::CreateGWSImageResult> CreateGWSImageOutcome;
			typedef std::future<CreateGWSImageOutcome> CreateGWSImageOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::CreateGWSImageRequest&, const CreateGWSImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGWSImageAsyncHandler;
			typedef Outcome<Error, Model::ListFileSystemWithMountTargetsResult> ListFileSystemWithMountTargetsOutcome;
			typedef std::future<ListFileSystemWithMountTargetsOutcome> ListFileSystemWithMountTargetsOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListFileSystemWithMountTargetsRequest&, const ListFileSystemWithMountTargetsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFileSystemWithMountTargetsAsyncHandler;
			typedef Outcome<Error, Model::ModifyClusterAttributesResult> ModifyClusterAttributesOutcome;
			typedef std::future<ModifyClusterAttributesOutcome> ModifyClusterAttributesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ModifyClusterAttributesRequest&, const ModifyClusterAttributesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterAttributesAsyncHandler;
			typedef Outcome<Error, Model::DeleteJobTemplatesResult> DeleteJobTemplatesOutcome;
			typedef std::future<DeleteJobTemplatesOutcome> DeleteJobTemplatesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::DeleteJobTemplatesRequest&, const DeleteJobTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteJobTemplatesAsyncHandler;
			typedef Outcome<Error, Model::GetCloudMetricLogsResult> GetCloudMetricLogsOutcome;
			typedef std::future<GetCloudMetricLogsOutcome> GetCloudMetricLogsOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::GetCloudMetricLogsRequest&, const GetCloudMetricLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCloudMetricLogsAsyncHandler;
			typedef Outcome<Error, Model::CreateJobTemplateResult> CreateJobTemplateOutcome;
			typedef std::future<CreateJobTemplateOutcome> CreateJobTemplateOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::CreateJobTemplateRequest&, const CreateJobTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateJobTemplateAsyncHandler;
			typedef Outcome<Error, Model::GetHybridClusterConfigResult> GetHybridClusterConfigOutcome;
			typedef std::future<GetHybridClusterConfigOutcome> GetHybridClusterConfigOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::GetHybridClusterConfigRequest&, const GetHybridClusterConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetHybridClusterConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeGWSInstancesResult> DescribeGWSInstancesOutcome;
			typedef std::future<DescribeGWSInstancesOutcome> DescribeGWSInstancesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::DescribeGWSInstancesRequest&, const DescribeGWSInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGWSInstancesAsyncHandler;
			typedef Outcome<Error, Model::ResetNodesResult> ResetNodesOutcome;
			typedef std::future<ResetNodesOutcome> ResetNodesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ResetNodesRequest&, const ResetNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetNodesAsyncHandler;
			typedef Outcome<Error, Model::UninstallSoftwareResult> UninstallSoftwareOutcome;
			typedef std::future<UninstallSoftwareOutcome> UninstallSoftwareOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::UninstallSoftwareRequest&, const UninstallSoftwareOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UninstallSoftwareAsyncHandler;
			typedef Outcome<Error, Model::DescribeGWSClustersResult> DescribeGWSClustersOutcome;
			typedef std::future<DescribeGWSClustersOutcome> DescribeGWSClustersOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::DescribeGWSClustersRequest&, const DescribeGWSClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGWSClustersAsyncHandler;
			typedef Outcome<Error, Model::ListContainerImagesResult> ListContainerImagesOutcome;
			typedef std::future<ListContainerImagesOutcome> ListContainerImagesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListContainerImagesRequest&, const ListContainerImagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListContainerImagesAsyncHandler;
			typedef Outcome<Error, Model::DeleteJobsResult> DeleteJobsOutcome;
			typedef std::future<DeleteJobsOutcome> DeleteJobsOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::DeleteJobsRequest&, const DeleteJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteJobsAsyncHandler;
			typedef Outcome<Error, Model::DeleteNodesResult> DeleteNodesOutcome;
			typedef std::future<DeleteNodesOutcome> DeleteNodesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::DeleteNodesRequest&, const DeleteNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNodesAsyncHandler;
			typedef Outcome<Error, Model::ListJobsResult> ListJobsOutcome;
			typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListJobsRequest&, const ListJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobsAsyncHandler;
			typedef Outcome<Error, Model::ListCpfsFileSystemsResult> ListCpfsFileSystemsOutcome;
			typedef std::future<ListCpfsFileSystemsOutcome> ListCpfsFileSystemsOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListCpfsFileSystemsRequest&, const ListCpfsFileSystemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCpfsFileSystemsAsyncHandler;
			typedef Outcome<Error, Model::ListAvailableFileSystemTypesResult> ListAvailableFileSystemTypesOutcome;
			typedef std::future<ListAvailableFileSystemTypesOutcome> ListAvailableFileSystemTypesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListAvailableFileSystemTypesRequest&, const ListAvailableFileSystemTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAvailableFileSystemTypesAsyncHandler;
			typedef Outcome<Error, Model::ListClustersMetaResult> ListClustersMetaOutcome;
			typedef std::future<ListClustersMetaOutcome> ListClustersMetaOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListClustersMetaRequest&, const ListClustersMetaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClustersMetaAsyncHandler;
			typedef Outcome<Error, Model::QueryServicePackAndPriceResult> QueryServicePackAndPriceOutcome;
			typedef std::future<QueryServicePackAndPriceOutcome> QueryServicePackAndPriceOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::QueryServicePackAndPriceRequest&, const QueryServicePackAndPriceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryServicePackAndPriceAsyncHandler;
			typedef Outcome<Error, Model::ListVolumesResult> ListVolumesOutcome;
			typedef std::future<ListVolumesOutcome> ListVolumesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListVolumesRequest&, const ListVolumesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVolumesAsyncHandler;
			typedef Outcome<Error, Model::DeleteContainerAppsResult> DeleteContainerAppsOutcome;
			typedef std::future<DeleteContainerAppsOutcome> DeleteContainerAppsOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::DeleteContainerAppsRequest&, const DeleteContainerAppsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteContainerAppsAsyncHandler;
			typedef Outcome<Error, Model::ModifyImageGatewayConfigResult> ModifyImageGatewayConfigOutcome;
			typedef std::future<ModifyImageGatewayConfigOutcome> ModifyImageGatewayConfigOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ModifyImageGatewayConfigRequest&, const ModifyImageGatewayConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImageGatewayConfigAsyncHandler;
			typedef Outcome<Error, Model::ListInvocationStatusResult> ListInvocationStatusOutcome;
			typedef std::future<ListInvocationStatusOutcome> ListInvocationStatusOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListInvocationStatusRequest&, const ListInvocationStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInvocationStatusAsyncHandler;
			typedef Outcome<Error, Model::ListContainerAppsResult> ListContainerAppsOutcome;
			typedef std::future<ListContainerAppsOutcome> ListContainerAppsOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListContainerAppsRequest&, const ListContainerAppsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListContainerAppsAsyncHandler;
			typedef Outcome<Error, Model::DescribeNFSClientStatusResult> DescribeNFSClientStatusOutcome;
			typedef std::future<DescribeNFSClientStatusOutcome> DescribeNFSClientStatusOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::DescribeNFSClientStatusRequest&, const DescribeNFSClientStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNFSClientStatusAsyncHandler;
			typedef Outcome<Error, Model::ListClustersResult> ListClustersOutcome;
			typedef std::future<ListClustersOutcome> ListClustersOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListClustersRequest&, const ListClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClustersAsyncHandler;
			typedef Outcome<Error, Model::SubmitJobResult> SubmitJobOutcome;
			typedef std::future<SubmitJobOutcome> SubmitJobOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::SubmitJobRequest&, const SubmitJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitJobAsyncHandler;
			typedef Outcome<Error, Model::GetAccountingReportResult> GetAccountingReportOutcome;
			typedef std::future<GetAccountingReportOutcome> GetAccountingReportOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::GetAccountingReportRequest&, const GetAccountingReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAccountingReportAsyncHandler;
			typedef Outcome<Error, Model::DescribeAutoScaleConfigResult> DescribeAutoScaleConfigOutcome;
			typedef std::future<DescribeAutoScaleConfigOutcome> DescribeAutoScaleConfigOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::DescribeAutoScaleConfigRequest&, const DescribeAutoScaleConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoScaleConfigAsyncHandler;
			typedef Outcome<Error, Model::GetVisualServiceStatusResult> GetVisualServiceStatusOutcome;
			typedef std::future<GetVisualServiceStatusOutcome> GetVisualServiceStatusOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::GetVisualServiceStatusRequest&, const GetVisualServiceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetVisualServiceStatusAsyncHandler;
			typedef Outcome<Error, Model::StartVisualServiceResult> StartVisualServiceOutcome;
			typedef std::future<StartVisualServiceOutcome> StartVisualServiceOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::StartVisualServiceRequest&, const StartVisualServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartVisualServiceAsyncHandler;
			typedef Outcome<Error, Model::SetGWSInstanceUserResult> SetGWSInstanceUserOutcome;
			typedef std::future<SetGWSInstanceUserOutcome> SetGWSInstanceUserOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::SetGWSInstanceUserRequest&, const SetGWSInstanceUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetGWSInstanceUserAsyncHandler;
			typedef Outcome<Error, Model::InstallSoftwareResult> InstallSoftwareOutcome;
			typedef std::future<InstallSoftwareOutcome> InstallSoftwareOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::InstallSoftwareRequest&, const InstallSoftwareOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InstallSoftwareAsyncHandler;
			typedef Outcome<Error, Model::ListAvailableEcsTypesResult> ListAvailableEcsTypesOutcome;
			typedef std::future<ListAvailableEcsTypesOutcome> ListAvailableEcsTypesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListAvailableEcsTypesRequest&, const ListAvailableEcsTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAvailableEcsTypesAsyncHandler;
			typedef Outcome<Error, Model::MountNFSResult> MountNFSOutcome;
			typedef std::future<MountNFSOutcome> MountNFSOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::MountNFSRequest&, const MountNFSOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MountNFSAsyncHandler;
			typedef Outcome<Error, Model::AddQueueResult> AddQueueOutcome;
			typedef std::future<AddQueueOutcome> AddQueueOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::AddQueueRequest&, const AddQueueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddQueueAsyncHandler;
			typedef Outcome<Error, Model::CreateGWSInstanceResult> CreateGWSInstanceOutcome;
			typedef std::future<CreateGWSInstanceOutcome> CreateGWSInstanceOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::CreateGWSInstanceRequest&, const CreateGWSInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGWSInstanceAsyncHandler;
			typedef Outcome<Error, Model::ListCurrentClientVersionResult> ListCurrentClientVersionOutcome;
			typedef std::future<ListCurrentClientVersionOutcome> ListCurrentClientVersionOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListCurrentClientVersionRequest&, const ListCurrentClientVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCurrentClientVersionAsyncHandler;
			typedef Outcome<Error, Model::UpdateClusterVolumesResult> UpdateClusterVolumesOutcome;
			typedef std::future<UpdateClusterVolumesOutcome> UpdateClusterVolumesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::UpdateClusterVolumesRequest&, const UpdateClusterVolumesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateClusterVolumesAsyncHandler;
			typedef Outcome<Error, Model::StartGWSInstanceResult> StartGWSInstanceOutcome;
			typedef std::future<StartGWSInstanceOutcome> StartGWSInstanceOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::StartGWSInstanceRequest&, const StartGWSInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartGWSInstanceAsyncHandler;
			typedef Outcome<Error, Model::SetAutoScaleConfigResult> SetAutoScaleConfigOutcome;
			typedef std::future<SetAutoScaleConfigOutcome> SetAutoScaleConfigOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::SetAutoScaleConfigRequest&, const SetAutoScaleConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetAutoScaleConfigAsyncHandler;
			typedef Outcome<Error, Model::ListInvocationResultsResult> ListInvocationResultsOutcome;
			typedef std::future<ListInvocationResultsOutcome> ListInvocationResultsOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListInvocationResultsRequest&, const ListInvocationResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInvocationResultsAsyncHandler;
			typedef Outcome<Error, Model::ListSoftwaresResult> ListSoftwaresOutcome;
			typedef std::future<ListSoftwaresOutcome> ListSoftwaresOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListSoftwaresRequest&, const ListSoftwaresOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSoftwaresAsyncHandler;
			typedef Outcome<Error, Model::AddNodesResult> AddNodesOutcome;
			typedef std::future<AddNodesOutcome> AddNodesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::AddNodesRequest&, const AddNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddNodesAsyncHandler;
			typedef Outcome<Error, Model::DescribeGWSImagesResult> DescribeGWSImagesOutcome;
			typedef std::future<DescribeGWSImagesOutcome> DescribeGWSImagesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::DescribeGWSImagesRequest&, const DescribeGWSImagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGWSImagesAsyncHandler;
			typedef Outcome<Error, Model::StopJobsResult> StopJobsOutcome;
			typedef std::future<StopJobsOutcome> StopJobsOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::StopJobsRequest&, const StopJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopJobsAsyncHandler;
			typedef Outcome<Error, Model::StartNodesResult> StartNodesOutcome;
			typedef std::future<StartNodesOutcome> StartNodesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::StartNodesRequest&, const StartNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartNodesAsyncHandler;
			typedef Outcome<Error, Model::ModifyUserGroupsResult> ModifyUserGroupsOutcome;
			typedef std::future<ModifyUserGroupsOutcome> ModifyUserGroupsOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ModifyUserGroupsRequest&, const ModifyUserGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserGroupsAsyncHandler;
			typedef Outcome<Error, Model::StartClusterResult> StartClusterOutcome;
			typedef std::future<StartClusterOutcome> StartClusterOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::StartClusterRequest&, const StartClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartClusterAsyncHandler;
			typedef Outcome<Error, Model::SetQueueResult> SetQueueOutcome;
			typedef std::future<SetQueueOutcome> SetQueueOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::SetQueueRequest&, const SetQueueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetQueueAsyncHandler;
			typedef Outcome<Error, Model::ListCustomImagesResult> ListCustomImagesOutcome;
			typedef std::future<ListCustomImagesOutcome> ListCustomImagesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListCustomImagesRequest&, const ListCustomImagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCustomImagesAsyncHandler;
			typedef Outcome<Error, Model::ListJobTemplatesResult> ListJobTemplatesOutcome;
			typedef std::future<ListJobTemplatesOutcome> ListJobTemplatesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListJobTemplatesRequest&, const ListJobTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobTemplatesAsyncHandler;
			typedef Outcome<Error, Model::AddUsersResult> AddUsersOutcome;
			typedef std::future<AddUsersOutcome> AddUsersOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::AddUsersRequest&, const AddUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddUsersAsyncHandler;
			typedef Outcome<Error, Model::CreateGWSClusterResult> CreateGWSClusterOutcome;
			typedef std::future<CreateGWSClusterOutcome> CreateGWSClusterOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::CreateGWSClusterRequest&, const CreateGWSClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGWSClusterAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageGatewayConfigResult> DescribeImageGatewayConfigOutcome;
			typedef std::future<DescribeImageGatewayConfigOutcome> DescribeImageGatewayConfigOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::DescribeImageGatewayConfigRequest&, const DescribeImageGatewayConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageGatewayConfigAsyncHandler;
			typedef Outcome<Error, Model::GetGWSConnectTicketResult> GetGWSConnectTicketOutcome;
			typedef std::future<GetGWSConnectTicketOutcome> GetGWSConnectTicketOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::GetGWSConnectTicketRequest&, const GetGWSConnectTicketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGWSConnectTicketAsyncHandler;
			typedef Outcome<Error, Model::StopClusterResult> StopClusterOutcome;
			typedef std::future<StopClusterOutcome> StopClusterOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::StopClusterRequest&, const StopClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopClusterAsyncHandler;
			typedef Outcome<Error, Model::ListNodesNoPagingResult> ListNodesNoPagingOutcome;
			typedef std::future<ListNodesNoPagingOutcome> ListNodesNoPagingOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListNodesNoPagingRequest&, const ListNodesNoPagingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNodesNoPagingAsyncHandler;
			typedef Outcome<Error, Model::CreateHybridClusterResult> CreateHybridClusterOutcome;
			typedef std::future<CreateHybridClusterOutcome> CreateHybridClusterOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::CreateHybridClusterRequest&, const CreateHybridClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateHybridClusterAsyncHandler;
			typedef Outcome<Error, Model::UpdateQueueConfigResult> UpdateQueueConfigOutcome;
			typedef std::future<UpdateQueueConfigOutcome> UpdateQueueConfigOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::UpdateQueueConfigRequest&, const UpdateQueueConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateQueueConfigAsyncHandler;
			typedef Outcome<Error, Model::StopVisualServiceResult> StopVisualServiceOutcome;
			typedef std::future<StopVisualServiceOutcome> StopVisualServiceOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::StopVisualServiceRequest&, const StopVisualServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopVisualServiceAsyncHandler;
			typedef Outcome<Error, Model::CreateClusterResult> CreateClusterOutcome;
			typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::CreateClusterRequest&, const CreateClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsyncHandler;
			typedef Outcome<Error, Model::ModifyUserPasswordsResult> ModifyUserPasswordsOutcome;
			typedef std::future<ModifyUserPasswordsOutcome> ModifyUserPasswordsOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ModifyUserPasswordsRequest&, const ModifyUserPasswordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserPasswordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageResult> DescribeImageOutcome;
			typedef std::future<DescribeImageOutcome> DescribeImageOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::DescribeImageRequest&, const DescribeImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageAsyncHandler;
			typedef Outcome<Error, Model::DeleteQueueResult> DeleteQueueOutcome;
			typedef std::future<DeleteQueueOutcome> DeleteQueueOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::DeleteQueueRequest&, const DeleteQueueOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQueueAsyncHandler;
			typedef Outcome<Error, Model::ListInstalledSoftwareResult> ListInstalledSoftwareOutcome;
			typedef std::future<ListInstalledSoftwareOutcome> ListInstalledSoftwareOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListInstalledSoftwareRequest&, const ListInstalledSoftwareOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstalledSoftwareAsyncHandler;
			typedef Outcome<Error, Model::UpgradeClientResult> UpgradeClientOutcome;
			typedef std::future<UpgradeClientOutcome> UpgradeClientOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::UpgradeClientRequest&, const UpgradeClientOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeClientAsyncHandler;
			typedef Outcome<Error, Model::DeleteClusterResult> DeleteClusterOutcome;
			typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::DeleteClusterRequest&, const DeleteClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterAsyncHandler;
			typedef Outcome<Error, Model::ListImagesResult> ListImagesOutcome;
			typedef std::future<ListImagesOutcome> ListImagesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListImagesRequest&, const ListImagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListImagesAsyncHandler;
			typedef Outcome<Error, Model::ListQueuesResult> ListQueuesOutcome;
			typedef std::future<ListQueuesOutcome> ListQueuesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListQueuesRequest&, const ListQueuesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListQueuesAsyncHandler;
			typedef Outcome<Error, Model::CreateJobFileResult> CreateJobFileOutcome;
			typedef std::future<CreateJobFileOutcome> CreateJobFileOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::CreateJobFileRequest&, const CreateJobFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateJobFileAsyncHandler;
			typedef Outcome<Error, Model::ListCloudMetricProfilingsResult> ListCloudMetricProfilingsOutcome;
			typedef std::future<ListCloudMetricProfilingsOutcome> ListCloudMetricProfilingsOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListCloudMetricProfilingsRequest&, const ListCloudMetricProfilingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCloudMetricProfilingsAsyncHandler;
			typedef Outcome<Error, Model::GetClusterVolumesResult> GetClusterVolumesOutcome;
			typedef std::future<GetClusterVolumesOutcome> GetClusterVolumesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::GetClusterVolumesRequest&, const GetClusterVolumesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetClusterVolumesAsyncHandler;
			typedef Outcome<Error, Model::SetJobUserResult> SetJobUserOutcome;
			typedef std::future<SetJobUserOutcome> SetJobUserOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::SetJobUserRequest&, const SetJobUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetJobUserAsyncHandler;
			typedef Outcome<Error, Model::DeleteGWSInstanceResult> DeleteGWSInstanceOutcome;
			typedef std::future<DeleteGWSInstanceOutcome> DeleteGWSInstanceOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::DeleteGWSInstanceRequest&, const DeleteGWSInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGWSInstanceAsyncHandler;
			typedef Outcome<Error, Model::ListRegionsResult> ListRegionsOutcome;
			typedef std::future<ListRegionsOutcome> ListRegionsOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListRegionsRequest&, const ListRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRegionsAsyncHandler;
			typedef Outcome<Error, Model::RunCloudMetricProfilingResult> RunCloudMetricProfilingOutcome;
			typedef std::future<RunCloudMetricProfilingOutcome> RunCloudMetricProfilingOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::RunCloudMetricProfilingRequest&, const RunCloudMetricProfilingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RunCloudMetricProfilingAsyncHandler;
			typedef Outcome<Error, Model::DescribePriceResult> DescribePriceOutcome;
			typedef std::future<DescribePriceOutcome> DescribePriceOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::DescribePriceRequest&, const DescribePriceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePriceAsyncHandler;
			typedef Outcome<Error, Model::RerunJobsResult> RerunJobsOutcome;
			typedef std::future<RerunJobsOutcome> RerunJobsOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::RerunJobsRequest&, const RerunJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RerunJobsAsyncHandler;
			typedef Outcome<Error, Model::EditJobTemplateResult> EditJobTemplateOutcome;
			typedef std::future<EditJobTemplateOutcome> EditJobTemplateOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::EditJobTemplateRequest&, const EditJobTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EditJobTemplateAsyncHandler;
			typedef Outcome<Error, Model::AddLocalNodesResult> AddLocalNodesOutcome;
			typedef std::future<AddLocalNodesOutcome> AddLocalNodesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::AddLocalNodesRequest&, const AddLocalNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLocalNodesAsyncHandler;
			typedef Outcome<Error, Model::ModifyVisualServicePasswdResult> ModifyVisualServicePasswdOutcome;
			typedef std::future<ModifyVisualServicePasswdOutcome> ModifyVisualServicePasswdOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ModifyVisualServicePasswdRequest&, const ModifyVisualServicePasswdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVisualServicePasswdAsyncHandler;
			typedef Outcome<Error, Model::ListPreferredEcsTypesResult> ListPreferredEcsTypesOutcome;
			typedef std::future<ListPreferredEcsTypesOutcome> ListPreferredEcsTypesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListPreferredEcsTypesRequest&, const ListPreferredEcsTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPreferredEcsTypesAsyncHandler;
			typedef Outcome<Error, Model::AddContainerAppResult> AddContainerAppOutcome;
			typedef std::future<AddContainerAppOutcome> AddContainerAppOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::AddContainerAppRequest&, const AddContainerAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddContainerAppAsyncHandler;
			typedef Outcome<Error, Model::ListClusterLogsResult> ListClusterLogsOutcome;
			typedef std::future<ListClusterLogsOutcome> ListClusterLogsOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListClusterLogsRequest&, const ListClusterLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterLogsAsyncHandler;
			typedef Outcome<Error, Model::RecoverClusterResult> RecoverClusterOutcome;
			typedef std::future<RecoverClusterOutcome> RecoverClusterOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::RecoverClusterRequest&, const RecoverClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RecoverClusterAsyncHandler;

			EHPCClient(const Credentials &credentials, const ClientConfiguration &configuration);
			EHPCClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			EHPCClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~EHPCClient();
			DescribeJobOutcome describeJob(const Model::DescribeJobRequest &request)const;
			void describeJobAsync(const Model::DescribeJobRequest& request, const DescribeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeJobOutcomeCallable describeJobCallable(const Model::DescribeJobRequest& request) const;
			DeleteImageOutcome deleteImage(const Model::DeleteImageRequest &request)const;
			void deleteImageAsync(const Model::DeleteImageRequest& request, const DeleteImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteImageOutcomeCallable deleteImageCallable(const Model::DeleteImageRequest& request) const;
			DeleteUsersOutcome deleteUsers(const Model::DeleteUsersRequest &request)const;
			void deleteUsersAsync(const Model::DeleteUsersRequest& request, const DeleteUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUsersOutcomeCallable deleteUsersCallable(const Model::DeleteUsersRequest& request) const;
			DeleteGWSClusterOutcome deleteGWSCluster(const Model::DeleteGWSClusterRequest &request)const;
			void deleteGWSClusterAsync(const Model::DeleteGWSClusterRequest& request, const DeleteGWSClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGWSClusterOutcomeCallable deleteGWSClusterCallable(const Model::DeleteGWSClusterRequest& request) const;
			ListUsersOutcome listUsers(const Model::ListUsersRequest &request)const;
			void listUsersAsync(const Model::ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUsersOutcomeCallable listUsersCallable(const Model::ListUsersRequest& request) const;
			DescribeClusterOutcome describeCluster(const Model::DescribeClusterRequest &request)const;
			void describeClusterAsync(const Model::DescribeClusterRequest& request, const DescribeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterOutcomeCallable describeClusterCallable(const Model::DescribeClusterRequest& request) const;
			StopNodesOutcome stopNodes(const Model::StopNodesRequest &request)const;
			void stopNodesAsync(const Model::StopNodesRequest& request, const StopNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopNodesOutcomeCallable stopNodesCallable(const Model::StopNodesRequest& request) const;
			DescribeContainerAppOutcome describeContainerApp(const Model::DescribeContainerAppRequest &request)const;
			void describeContainerAppAsync(const Model::DescribeContainerAppRequest& request, const DescribeContainerAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeContainerAppOutcomeCallable describeContainerAppCallable(const Model::DescribeContainerAppRequest& request) const;
			PullImageOutcome pullImage(const Model::PullImageRequest &request)const;
			void pullImageAsync(const Model::PullImageRequest& request, const PullImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PullImageOutcomeCallable pullImageCallable(const Model::PullImageRequest& request) const;
			ListNodesByQueueOutcome listNodesByQueue(const Model::ListNodesByQueueRequest &request)const;
			void listNodesByQueueAsync(const Model::ListNodesByQueueRequest& request, const ListNodesByQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNodesByQueueOutcomeCallable listNodesByQueueCallable(const Model::ListNodesByQueueRequest& request) const;
			ModifyContainerAppAttributesOutcome modifyContainerAppAttributes(const Model::ModifyContainerAppAttributesRequest &request)const;
			void modifyContainerAppAttributesAsync(const Model::ModifyContainerAppAttributesRequest& request, const ModifyContainerAppAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyContainerAppAttributesOutcomeCallable modifyContainerAppAttributesCallable(const Model::ModifyContainerAppAttributesRequest& request) const;
			GetCloudMetricProfilingOutcome getCloudMetricProfiling(const Model::GetCloudMetricProfilingRequest &request)const;
			void getCloudMetricProfilingAsync(const Model::GetCloudMetricProfilingRequest& request, const GetCloudMetricProfilingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCloudMetricProfilingOutcomeCallable getCloudMetricProfilingCallable(const Model::GetCloudMetricProfilingRequest& request) const;
			DescribeImagePriceOutcome describeImagePrice(const Model::DescribeImagePriceRequest &request)const;
			void describeImagePriceAsync(const Model::DescribeImagePriceRequest& request, const DescribeImagePriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImagePriceOutcomeCallable describeImagePriceCallable(const Model::DescribeImagePriceRequest& request) const;
			StopGWSInstanceOutcome stopGWSInstance(const Model::StopGWSInstanceRequest &request)const;
			void stopGWSInstanceAsync(const Model::StopGWSInstanceRequest& request, const StopGWSInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopGWSInstanceOutcomeCallable stopGWSInstanceCallable(const Model::StopGWSInstanceRequest& request) const;
			GetAutoScaleConfigOutcome getAutoScaleConfig(const Model::GetAutoScaleConfigRequest &request)const;
			void getAutoScaleConfigAsync(const Model::GetAutoScaleConfigRequest& request, const GetAutoScaleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAutoScaleConfigOutcomeCallable getAutoScaleConfigCallable(const Model::GetAutoScaleConfigRequest& request) const;
			ListNodesOutcome listNodes(const Model::ListNodesRequest &request)const;
			void listNodesAsync(const Model::ListNodesRequest& request, const ListNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNodesOutcomeCallable listNodesCallable(const Model::ListNodesRequest& request) const;
			InstallNFSClientOutcome installNFSClient(const Model::InstallNFSClientRequest &request)const;
			void installNFSClientAsync(const Model::InstallNFSClientRequest& request, const InstallNFSClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InstallNFSClientOutcomeCallable installNFSClientCallable(const Model::InstallNFSClientRequest& request) const;
			ListCommandsOutcome listCommands(const Model::ListCommandsRequest &request)const;
			void listCommandsAsync(const Model::ListCommandsRequest& request, const ListCommandsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCommandsOutcomeCallable listCommandsCallable(const Model::ListCommandsRequest& request) const;
			InvokeShellCommandOutcome invokeShellCommand(const Model::InvokeShellCommandRequest &request)const;
			void invokeShellCommandAsync(const Model::InvokeShellCommandRequest& request, const InvokeShellCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InvokeShellCommandOutcomeCallable invokeShellCommandCallable(const Model::InvokeShellCommandRequest& request) const;
			CreateGWSImageOutcome createGWSImage(const Model::CreateGWSImageRequest &request)const;
			void createGWSImageAsync(const Model::CreateGWSImageRequest& request, const CreateGWSImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGWSImageOutcomeCallable createGWSImageCallable(const Model::CreateGWSImageRequest& request) const;
			ListFileSystemWithMountTargetsOutcome listFileSystemWithMountTargets(const Model::ListFileSystemWithMountTargetsRequest &request)const;
			void listFileSystemWithMountTargetsAsync(const Model::ListFileSystemWithMountTargetsRequest& request, const ListFileSystemWithMountTargetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFileSystemWithMountTargetsOutcomeCallable listFileSystemWithMountTargetsCallable(const Model::ListFileSystemWithMountTargetsRequest& request) const;
			ModifyClusterAttributesOutcome modifyClusterAttributes(const Model::ModifyClusterAttributesRequest &request)const;
			void modifyClusterAttributesAsync(const Model::ModifyClusterAttributesRequest& request, const ModifyClusterAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyClusterAttributesOutcomeCallable modifyClusterAttributesCallable(const Model::ModifyClusterAttributesRequest& request) const;
			DeleteJobTemplatesOutcome deleteJobTemplates(const Model::DeleteJobTemplatesRequest &request)const;
			void deleteJobTemplatesAsync(const Model::DeleteJobTemplatesRequest& request, const DeleteJobTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteJobTemplatesOutcomeCallable deleteJobTemplatesCallable(const Model::DeleteJobTemplatesRequest& request) const;
			GetCloudMetricLogsOutcome getCloudMetricLogs(const Model::GetCloudMetricLogsRequest &request)const;
			void getCloudMetricLogsAsync(const Model::GetCloudMetricLogsRequest& request, const GetCloudMetricLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCloudMetricLogsOutcomeCallable getCloudMetricLogsCallable(const Model::GetCloudMetricLogsRequest& request) const;
			CreateJobTemplateOutcome createJobTemplate(const Model::CreateJobTemplateRequest &request)const;
			void createJobTemplateAsync(const Model::CreateJobTemplateRequest& request, const CreateJobTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateJobTemplateOutcomeCallable createJobTemplateCallable(const Model::CreateJobTemplateRequest& request) const;
			GetHybridClusterConfigOutcome getHybridClusterConfig(const Model::GetHybridClusterConfigRequest &request)const;
			void getHybridClusterConfigAsync(const Model::GetHybridClusterConfigRequest& request, const GetHybridClusterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetHybridClusterConfigOutcomeCallable getHybridClusterConfigCallable(const Model::GetHybridClusterConfigRequest& request) const;
			DescribeGWSInstancesOutcome describeGWSInstances(const Model::DescribeGWSInstancesRequest &request)const;
			void describeGWSInstancesAsync(const Model::DescribeGWSInstancesRequest& request, const DescribeGWSInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGWSInstancesOutcomeCallable describeGWSInstancesCallable(const Model::DescribeGWSInstancesRequest& request) const;
			ResetNodesOutcome resetNodes(const Model::ResetNodesRequest &request)const;
			void resetNodesAsync(const Model::ResetNodesRequest& request, const ResetNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetNodesOutcomeCallable resetNodesCallable(const Model::ResetNodesRequest& request) const;
			UninstallSoftwareOutcome uninstallSoftware(const Model::UninstallSoftwareRequest &request)const;
			void uninstallSoftwareAsync(const Model::UninstallSoftwareRequest& request, const UninstallSoftwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UninstallSoftwareOutcomeCallable uninstallSoftwareCallable(const Model::UninstallSoftwareRequest& request) const;
			DescribeGWSClustersOutcome describeGWSClusters(const Model::DescribeGWSClustersRequest &request)const;
			void describeGWSClustersAsync(const Model::DescribeGWSClustersRequest& request, const DescribeGWSClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGWSClustersOutcomeCallable describeGWSClustersCallable(const Model::DescribeGWSClustersRequest& request) const;
			ListContainerImagesOutcome listContainerImages(const Model::ListContainerImagesRequest &request)const;
			void listContainerImagesAsync(const Model::ListContainerImagesRequest& request, const ListContainerImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListContainerImagesOutcomeCallable listContainerImagesCallable(const Model::ListContainerImagesRequest& request) const;
			DeleteJobsOutcome deleteJobs(const Model::DeleteJobsRequest &request)const;
			void deleteJobsAsync(const Model::DeleteJobsRequest& request, const DeleteJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteJobsOutcomeCallable deleteJobsCallable(const Model::DeleteJobsRequest& request) const;
			DeleteNodesOutcome deleteNodes(const Model::DeleteNodesRequest &request)const;
			void deleteNodesAsync(const Model::DeleteNodesRequest& request, const DeleteNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNodesOutcomeCallable deleteNodesCallable(const Model::DeleteNodesRequest& request) const;
			ListJobsOutcome listJobs(const Model::ListJobsRequest &request)const;
			void listJobsAsync(const Model::ListJobsRequest& request, const ListJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobsOutcomeCallable listJobsCallable(const Model::ListJobsRequest& request) const;
			ListCpfsFileSystemsOutcome listCpfsFileSystems(const Model::ListCpfsFileSystemsRequest &request)const;
			void listCpfsFileSystemsAsync(const Model::ListCpfsFileSystemsRequest& request, const ListCpfsFileSystemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCpfsFileSystemsOutcomeCallable listCpfsFileSystemsCallable(const Model::ListCpfsFileSystemsRequest& request) const;
			ListAvailableFileSystemTypesOutcome listAvailableFileSystemTypes(const Model::ListAvailableFileSystemTypesRequest &request)const;
			void listAvailableFileSystemTypesAsync(const Model::ListAvailableFileSystemTypesRequest& request, const ListAvailableFileSystemTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAvailableFileSystemTypesOutcomeCallable listAvailableFileSystemTypesCallable(const Model::ListAvailableFileSystemTypesRequest& request) const;
			ListClustersMetaOutcome listClustersMeta(const Model::ListClustersMetaRequest &request)const;
			void listClustersMetaAsync(const Model::ListClustersMetaRequest& request, const ListClustersMetaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClustersMetaOutcomeCallable listClustersMetaCallable(const Model::ListClustersMetaRequest& request) const;
			QueryServicePackAndPriceOutcome queryServicePackAndPrice(const Model::QueryServicePackAndPriceRequest &request)const;
			void queryServicePackAndPriceAsync(const Model::QueryServicePackAndPriceRequest& request, const QueryServicePackAndPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryServicePackAndPriceOutcomeCallable queryServicePackAndPriceCallable(const Model::QueryServicePackAndPriceRequest& request) const;
			ListVolumesOutcome listVolumes(const Model::ListVolumesRequest &request)const;
			void listVolumesAsync(const Model::ListVolumesRequest& request, const ListVolumesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVolumesOutcomeCallable listVolumesCallable(const Model::ListVolumesRequest& request) const;
			DeleteContainerAppsOutcome deleteContainerApps(const Model::DeleteContainerAppsRequest &request)const;
			void deleteContainerAppsAsync(const Model::DeleteContainerAppsRequest& request, const DeleteContainerAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteContainerAppsOutcomeCallable deleteContainerAppsCallable(const Model::DeleteContainerAppsRequest& request) const;
			ModifyImageGatewayConfigOutcome modifyImageGatewayConfig(const Model::ModifyImageGatewayConfigRequest &request)const;
			void modifyImageGatewayConfigAsync(const Model::ModifyImageGatewayConfigRequest& request, const ModifyImageGatewayConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyImageGatewayConfigOutcomeCallable modifyImageGatewayConfigCallable(const Model::ModifyImageGatewayConfigRequest& request) const;
			ListInvocationStatusOutcome listInvocationStatus(const Model::ListInvocationStatusRequest &request)const;
			void listInvocationStatusAsync(const Model::ListInvocationStatusRequest& request, const ListInvocationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInvocationStatusOutcomeCallable listInvocationStatusCallable(const Model::ListInvocationStatusRequest& request) const;
			ListContainerAppsOutcome listContainerApps(const Model::ListContainerAppsRequest &request)const;
			void listContainerAppsAsync(const Model::ListContainerAppsRequest& request, const ListContainerAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListContainerAppsOutcomeCallable listContainerAppsCallable(const Model::ListContainerAppsRequest& request) const;
			DescribeNFSClientStatusOutcome describeNFSClientStatus(const Model::DescribeNFSClientStatusRequest &request)const;
			void describeNFSClientStatusAsync(const Model::DescribeNFSClientStatusRequest& request, const DescribeNFSClientStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNFSClientStatusOutcomeCallable describeNFSClientStatusCallable(const Model::DescribeNFSClientStatusRequest& request) const;
			ListClustersOutcome listClusters(const Model::ListClustersRequest &request)const;
			void listClustersAsync(const Model::ListClustersRequest& request, const ListClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClustersOutcomeCallable listClustersCallable(const Model::ListClustersRequest& request) const;
			SubmitJobOutcome submitJob(const Model::SubmitJobRequest &request)const;
			void submitJobAsync(const Model::SubmitJobRequest& request, const SubmitJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitJobOutcomeCallable submitJobCallable(const Model::SubmitJobRequest& request) const;
			GetAccountingReportOutcome getAccountingReport(const Model::GetAccountingReportRequest &request)const;
			void getAccountingReportAsync(const Model::GetAccountingReportRequest& request, const GetAccountingReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAccountingReportOutcomeCallable getAccountingReportCallable(const Model::GetAccountingReportRequest& request) const;
			DescribeAutoScaleConfigOutcome describeAutoScaleConfig(const Model::DescribeAutoScaleConfigRequest &request)const;
			void describeAutoScaleConfigAsync(const Model::DescribeAutoScaleConfigRequest& request, const DescribeAutoScaleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAutoScaleConfigOutcomeCallable describeAutoScaleConfigCallable(const Model::DescribeAutoScaleConfigRequest& request) const;
			GetVisualServiceStatusOutcome getVisualServiceStatus(const Model::GetVisualServiceStatusRequest &request)const;
			void getVisualServiceStatusAsync(const Model::GetVisualServiceStatusRequest& request, const GetVisualServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetVisualServiceStatusOutcomeCallable getVisualServiceStatusCallable(const Model::GetVisualServiceStatusRequest& request) const;
			StartVisualServiceOutcome startVisualService(const Model::StartVisualServiceRequest &request)const;
			void startVisualServiceAsync(const Model::StartVisualServiceRequest& request, const StartVisualServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartVisualServiceOutcomeCallable startVisualServiceCallable(const Model::StartVisualServiceRequest& request) const;
			SetGWSInstanceUserOutcome setGWSInstanceUser(const Model::SetGWSInstanceUserRequest &request)const;
			void setGWSInstanceUserAsync(const Model::SetGWSInstanceUserRequest& request, const SetGWSInstanceUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetGWSInstanceUserOutcomeCallable setGWSInstanceUserCallable(const Model::SetGWSInstanceUserRequest& request) const;
			InstallSoftwareOutcome installSoftware(const Model::InstallSoftwareRequest &request)const;
			void installSoftwareAsync(const Model::InstallSoftwareRequest& request, const InstallSoftwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InstallSoftwareOutcomeCallable installSoftwareCallable(const Model::InstallSoftwareRequest& request) const;
			ListAvailableEcsTypesOutcome listAvailableEcsTypes(const Model::ListAvailableEcsTypesRequest &request)const;
			void listAvailableEcsTypesAsync(const Model::ListAvailableEcsTypesRequest& request, const ListAvailableEcsTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAvailableEcsTypesOutcomeCallable listAvailableEcsTypesCallable(const Model::ListAvailableEcsTypesRequest& request) const;
			MountNFSOutcome mountNFS(const Model::MountNFSRequest &request)const;
			void mountNFSAsync(const Model::MountNFSRequest& request, const MountNFSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MountNFSOutcomeCallable mountNFSCallable(const Model::MountNFSRequest& request) const;
			AddQueueOutcome addQueue(const Model::AddQueueRequest &request)const;
			void addQueueAsync(const Model::AddQueueRequest& request, const AddQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddQueueOutcomeCallable addQueueCallable(const Model::AddQueueRequest& request) const;
			CreateGWSInstanceOutcome createGWSInstance(const Model::CreateGWSInstanceRequest &request)const;
			void createGWSInstanceAsync(const Model::CreateGWSInstanceRequest& request, const CreateGWSInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGWSInstanceOutcomeCallable createGWSInstanceCallable(const Model::CreateGWSInstanceRequest& request) const;
			ListCurrentClientVersionOutcome listCurrentClientVersion(const Model::ListCurrentClientVersionRequest &request)const;
			void listCurrentClientVersionAsync(const Model::ListCurrentClientVersionRequest& request, const ListCurrentClientVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCurrentClientVersionOutcomeCallable listCurrentClientVersionCallable(const Model::ListCurrentClientVersionRequest& request) const;
			UpdateClusterVolumesOutcome updateClusterVolumes(const Model::UpdateClusterVolumesRequest &request)const;
			void updateClusterVolumesAsync(const Model::UpdateClusterVolumesRequest& request, const UpdateClusterVolumesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateClusterVolumesOutcomeCallable updateClusterVolumesCallable(const Model::UpdateClusterVolumesRequest& request) const;
			StartGWSInstanceOutcome startGWSInstance(const Model::StartGWSInstanceRequest &request)const;
			void startGWSInstanceAsync(const Model::StartGWSInstanceRequest& request, const StartGWSInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartGWSInstanceOutcomeCallable startGWSInstanceCallable(const Model::StartGWSInstanceRequest& request) const;
			SetAutoScaleConfigOutcome setAutoScaleConfig(const Model::SetAutoScaleConfigRequest &request)const;
			void setAutoScaleConfigAsync(const Model::SetAutoScaleConfigRequest& request, const SetAutoScaleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetAutoScaleConfigOutcomeCallable setAutoScaleConfigCallable(const Model::SetAutoScaleConfigRequest& request) const;
			ListInvocationResultsOutcome listInvocationResults(const Model::ListInvocationResultsRequest &request)const;
			void listInvocationResultsAsync(const Model::ListInvocationResultsRequest& request, const ListInvocationResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInvocationResultsOutcomeCallable listInvocationResultsCallable(const Model::ListInvocationResultsRequest& request) const;
			ListSoftwaresOutcome listSoftwares(const Model::ListSoftwaresRequest &request)const;
			void listSoftwaresAsync(const Model::ListSoftwaresRequest& request, const ListSoftwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSoftwaresOutcomeCallable listSoftwaresCallable(const Model::ListSoftwaresRequest& request) const;
			AddNodesOutcome addNodes(const Model::AddNodesRequest &request)const;
			void addNodesAsync(const Model::AddNodesRequest& request, const AddNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddNodesOutcomeCallable addNodesCallable(const Model::AddNodesRequest& request) const;
			DescribeGWSImagesOutcome describeGWSImages(const Model::DescribeGWSImagesRequest &request)const;
			void describeGWSImagesAsync(const Model::DescribeGWSImagesRequest& request, const DescribeGWSImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGWSImagesOutcomeCallable describeGWSImagesCallable(const Model::DescribeGWSImagesRequest& request) const;
			StopJobsOutcome stopJobs(const Model::StopJobsRequest &request)const;
			void stopJobsAsync(const Model::StopJobsRequest& request, const StopJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopJobsOutcomeCallable stopJobsCallable(const Model::StopJobsRequest& request) const;
			StartNodesOutcome startNodes(const Model::StartNodesRequest &request)const;
			void startNodesAsync(const Model::StartNodesRequest& request, const StartNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartNodesOutcomeCallable startNodesCallable(const Model::StartNodesRequest& request) const;
			ModifyUserGroupsOutcome modifyUserGroups(const Model::ModifyUserGroupsRequest &request)const;
			void modifyUserGroupsAsync(const Model::ModifyUserGroupsRequest& request, const ModifyUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyUserGroupsOutcomeCallable modifyUserGroupsCallable(const Model::ModifyUserGroupsRequest& request) const;
			StartClusterOutcome startCluster(const Model::StartClusterRequest &request)const;
			void startClusterAsync(const Model::StartClusterRequest& request, const StartClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartClusterOutcomeCallable startClusterCallable(const Model::StartClusterRequest& request) const;
			SetQueueOutcome setQueue(const Model::SetQueueRequest &request)const;
			void setQueueAsync(const Model::SetQueueRequest& request, const SetQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetQueueOutcomeCallable setQueueCallable(const Model::SetQueueRequest& request) const;
			ListCustomImagesOutcome listCustomImages(const Model::ListCustomImagesRequest &request)const;
			void listCustomImagesAsync(const Model::ListCustomImagesRequest& request, const ListCustomImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCustomImagesOutcomeCallable listCustomImagesCallable(const Model::ListCustomImagesRequest& request) const;
			ListJobTemplatesOutcome listJobTemplates(const Model::ListJobTemplatesRequest &request)const;
			void listJobTemplatesAsync(const Model::ListJobTemplatesRequest& request, const ListJobTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobTemplatesOutcomeCallable listJobTemplatesCallable(const Model::ListJobTemplatesRequest& request) const;
			AddUsersOutcome addUsers(const Model::AddUsersRequest &request)const;
			void addUsersAsync(const Model::AddUsersRequest& request, const AddUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddUsersOutcomeCallable addUsersCallable(const Model::AddUsersRequest& request) const;
			CreateGWSClusterOutcome createGWSCluster(const Model::CreateGWSClusterRequest &request)const;
			void createGWSClusterAsync(const Model::CreateGWSClusterRequest& request, const CreateGWSClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGWSClusterOutcomeCallable createGWSClusterCallable(const Model::CreateGWSClusterRequest& request) const;
			DescribeImageGatewayConfigOutcome describeImageGatewayConfig(const Model::DescribeImageGatewayConfigRequest &request)const;
			void describeImageGatewayConfigAsync(const Model::DescribeImageGatewayConfigRequest& request, const DescribeImageGatewayConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageGatewayConfigOutcomeCallable describeImageGatewayConfigCallable(const Model::DescribeImageGatewayConfigRequest& request) const;
			GetGWSConnectTicketOutcome getGWSConnectTicket(const Model::GetGWSConnectTicketRequest &request)const;
			void getGWSConnectTicketAsync(const Model::GetGWSConnectTicketRequest& request, const GetGWSConnectTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGWSConnectTicketOutcomeCallable getGWSConnectTicketCallable(const Model::GetGWSConnectTicketRequest& request) const;
			StopClusterOutcome stopCluster(const Model::StopClusterRequest &request)const;
			void stopClusterAsync(const Model::StopClusterRequest& request, const StopClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopClusterOutcomeCallable stopClusterCallable(const Model::StopClusterRequest& request) const;
			ListNodesNoPagingOutcome listNodesNoPaging(const Model::ListNodesNoPagingRequest &request)const;
			void listNodesNoPagingAsync(const Model::ListNodesNoPagingRequest& request, const ListNodesNoPagingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNodesNoPagingOutcomeCallable listNodesNoPagingCallable(const Model::ListNodesNoPagingRequest& request) const;
			CreateHybridClusterOutcome createHybridCluster(const Model::CreateHybridClusterRequest &request)const;
			void createHybridClusterAsync(const Model::CreateHybridClusterRequest& request, const CreateHybridClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateHybridClusterOutcomeCallable createHybridClusterCallable(const Model::CreateHybridClusterRequest& request) const;
			UpdateQueueConfigOutcome updateQueueConfig(const Model::UpdateQueueConfigRequest &request)const;
			void updateQueueConfigAsync(const Model::UpdateQueueConfigRequest& request, const UpdateQueueConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateQueueConfigOutcomeCallable updateQueueConfigCallable(const Model::UpdateQueueConfigRequest& request) const;
			StopVisualServiceOutcome stopVisualService(const Model::StopVisualServiceRequest &request)const;
			void stopVisualServiceAsync(const Model::StopVisualServiceRequest& request, const StopVisualServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopVisualServiceOutcomeCallable stopVisualServiceCallable(const Model::StopVisualServiceRequest& request) const;
			CreateClusterOutcome createCluster(const Model::CreateClusterRequest &request)const;
			void createClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClusterOutcomeCallable createClusterCallable(const Model::CreateClusterRequest& request) const;
			ModifyUserPasswordsOutcome modifyUserPasswords(const Model::ModifyUserPasswordsRequest &request)const;
			void modifyUserPasswordsAsync(const Model::ModifyUserPasswordsRequest& request, const ModifyUserPasswordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyUserPasswordsOutcomeCallable modifyUserPasswordsCallable(const Model::ModifyUserPasswordsRequest& request) const;
			DescribeImageOutcome describeImage(const Model::DescribeImageRequest &request)const;
			void describeImageAsync(const Model::DescribeImageRequest& request, const DescribeImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageOutcomeCallable describeImageCallable(const Model::DescribeImageRequest& request) const;
			DeleteQueueOutcome deleteQueue(const Model::DeleteQueueRequest &request)const;
			void deleteQueueAsync(const Model::DeleteQueueRequest& request, const DeleteQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteQueueOutcomeCallable deleteQueueCallable(const Model::DeleteQueueRequest& request) const;
			ListInstalledSoftwareOutcome listInstalledSoftware(const Model::ListInstalledSoftwareRequest &request)const;
			void listInstalledSoftwareAsync(const Model::ListInstalledSoftwareRequest& request, const ListInstalledSoftwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstalledSoftwareOutcomeCallable listInstalledSoftwareCallable(const Model::ListInstalledSoftwareRequest& request) const;
			UpgradeClientOutcome upgradeClient(const Model::UpgradeClientRequest &request)const;
			void upgradeClientAsync(const Model::UpgradeClientRequest& request, const UpgradeClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeClientOutcomeCallable upgradeClientCallable(const Model::UpgradeClientRequest& request) const;
			DeleteClusterOutcome deleteCluster(const Model::DeleteClusterRequest &request)const;
			void deleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteClusterOutcomeCallable deleteClusterCallable(const Model::DeleteClusterRequest& request) const;
			ListImagesOutcome listImages(const Model::ListImagesRequest &request)const;
			void listImagesAsync(const Model::ListImagesRequest& request, const ListImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListImagesOutcomeCallable listImagesCallable(const Model::ListImagesRequest& request) const;
			ListQueuesOutcome listQueues(const Model::ListQueuesRequest &request)const;
			void listQueuesAsync(const Model::ListQueuesRequest& request, const ListQueuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListQueuesOutcomeCallable listQueuesCallable(const Model::ListQueuesRequest& request) const;
			CreateJobFileOutcome createJobFile(const Model::CreateJobFileRequest &request)const;
			void createJobFileAsync(const Model::CreateJobFileRequest& request, const CreateJobFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateJobFileOutcomeCallable createJobFileCallable(const Model::CreateJobFileRequest& request) const;
			ListCloudMetricProfilingsOutcome listCloudMetricProfilings(const Model::ListCloudMetricProfilingsRequest &request)const;
			void listCloudMetricProfilingsAsync(const Model::ListCloudMetricProfilingsRequest& request, const ListCloudMetricProfilingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCloudMetricProfilingsOutcomeCallable listCloudMetricProfilingsCallable(const Model::ListCloudMetricProfilingsRequest& request) const;
			GetClusterVolumesOutcome getClusterVolumes(const Model::GetClusterVolumesRequest &request)const;
			void getClusterVolumesAsync(const Model::GetClusterVolumesRequest& request, const GetClusterVolumesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetClusterVolumesOutcomeCallable getClusterVolumesCallable(const Model::GetClusterVolumesRequest& request) const;
			SetJobUserOutcome setJobUser(const Model::SetJobUserRequest &request)const;
			void setJobUserAsync(const Model::SetJobUserRequest& request, const SetJobUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetJobUserOutcomeCallable setJobUserCallable(const Model::SetJobUserRequest& request) const;
			DeleteGWSInstanceOutcome deleteGWSInstance(const Model::DeleteGWSInstanceRequest &request)const;
			void deleteGWSInstanceAsync(const Model::DeleteGWSInstanceRequest& request, const DeleteGWSInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGWSInstanceOutcomeCallable deleteGWSInstanceCallable(const Model::DeleteGWSInstanceRequest& request) const;
			ListRegionsOutcome listRegions(const Model::ListRegionsRequest &request)const;
			void listRegionsAsync(const Model::ListRegionsRequest& request, const ListRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRegionsOutcomeCallable listRegionsCallable(const Model::ListRegionsRequest& request) const;
			RunCloudMetricProfilingOutcome runCloudMetricProfiling(const Model::RunCloudMetricProfilingRequest &request)const;
			void runCloudMetricProfilingAsync(const Model::RunCloudMetricProfilingRequest& request, const RunCloudMetricProfilingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RunCloudMetricProfilingOutcomeCallable runCloudMetricProfilingCallable(const Model::RunCloudMetricProfilingRequest& request) const;
			DescribePriceOutcome describePrice(const Model::DescribePriceRequest &request)const;
			void describePriceAsync(const Model::DescribePriceRequest& request, const DescribePriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePriceOutcomeCallable describePriceCallable(const Model::DescribePriceRequest& request) const;
			RerunJobsOutcome rerunJobs(const Model::RerunJobsRequest &request)const;
			void rerunJobsAsync(const Model::RerunJobsRequest& request, const RerunJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RerunJobsOutcomeCallable rerunJobsCallable(const Model::RerunJobsRequest& request) const;
			EditJobTemplateOutcome editJobTemplate(const Model::EditJobTemplateRequest &request)const;
			void editJobTemplateAsync(const Model::EditJobTemplateRequest& request, const EditJobTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EditJobTemplateOutcomeCallable editJobTemplateCallable(const Model::EditJobTemplateRequest& request) const;
			AddLocalNodesOutcome addLocalNodes(const Model::AddLocalNodesRequest &request)const;
			void addLocalNodesAsync(const Model::AddLocalNodesRequest& request, const AddLocalNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLocalNodesOutcomeCallable addLocalNodesCallable(const Model::AddLocalNodesRequest& request) const;
			ModifyVisualServicePasswdOutcome modifyVisualServicePasswd(const Model::ModifyVisualServicePasswdRequest &request)const;
			void modifyVisualServicePasswdAsync(const Model::ModifyVisualServicePasswdRequest& request, const ModifyVisualServicePasswdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVisualServicePasswdOutcomeCallable modifyVisualServicePasswdCallable(const Model::ModifyVisualServicePasswdRequest& request) const;
			ListPreferredEcsTypesOutcome listPreferredEcsTypes(const Model::ListPreferredEcsTypesRequest &request)const;
			void listPreferredEcsTypesAsync(const Model::ListPreferredEcsTypesRequest& request, const ListPreferredEcsTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPreferredEcsTypesOutcomeCallable listPreferredEcsTypesCallable(const Model::ListPreferredEcsTypesRequest& request) const;
			AddContainerAppOutcome addContainerApp(const Model::AddContainerAppRequest &request)const;
			void addContainerAppAsync(const Model::AddContainerAppRequest& request, const AddContainerAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddContainerAppOutcomeCallable addContainerAppCallable(const Model::AddContainerAppRequest& request) const;
			ListClusterLogsOutcome listClusterLogs(const Model::ListClusterLogsRequest &request)const;
			void listClusterLogsAsync(const Model::ListClusterLogsRequest& request, const ListClusterLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterLogsOutcomeCallable listClusterLogsCallable(const Model::ListClusterLogsRequest& request) const;
			RecoverClusterOutcome recoverCluster(const Model::RecoverClusterRequest &request)const;
			void recoverClusterAsync(const Model::RecoverClusterRequest& request, const RecoverClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RecoverClusterOutcomeCallable recoverClusterCallable(const Model::RecoverClusterRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_EHPC_EHPCCLIENT_H_
