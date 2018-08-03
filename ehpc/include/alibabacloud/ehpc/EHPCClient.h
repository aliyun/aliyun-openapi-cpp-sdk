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
#include "model/DeleteImageRequest.h"
#include "model/DeleteImageResult.h"
#include "model/DeleteUsersRequest.h"
#include "model/DeleteUsersResult.h"
#include "model/DescribeClusterRequest.h"
#include "model/DescribeClusterResult.h"
#include "model/ListUsersRequest.h"
#include "model/ListUsersResult.h"
#include "model/StopNodesRequest.h"
#include "model/StopNodesResult.h"
#include "model/PullImageRequest.h"
#include "model/PullImageResult.h"
#include "model/DescribeContainerAppRequest.h"
#include "model/DescribeContainerAppResult.h"
#include "model/ListCurrentClientVersionRequest.h"
#include "model/ListCurrentClientVersionResult.h"
#include "model/ModifyContainerAppAttributesRequest.h"
#include "model/ModifyContainerAppAttributesResult.h"
#include "model/SetAutoScaleConfigRequest.h"
#include "model/SetAutoScaleConfigResult.h"
#include "model/ListInvocationResultsRequest.h"
#include "model/ListInvocationResultsResult.h"
#include "model/AddNodesRequest.h"
#include "model/AddNodesResult.h"
#include "model/ListSoftwaresRequest.h"
#include "model/ListSoftwaresResult.h"
#include "model/StopJobsRequest.h"
#include "model/StopJobsResult.h"
#include "model/StartNodesRequest.h"
#include "model/StartNodesResult.h"
#include "model/GetAutoScaleConfigRequest.h"
#include "model/GetAutoScaleConfigResult.h"
#include "model/ListNodesRequest.h"
#include "model/ListNodesResult.h"
#include "model/ModifyUserGroupsRequest.h"
#include "model/ModifyUserGroupsResult.h"
#include "model/StartClusterRequest.h"
#include "model/StartClusterResult.h"
#include "model/ListCommandsRequest.h"
#include "model/ListCommandsResult.h"
#include "model/ListCustomImagesRequest.h"
#include "model/ListCustomImagesResult.h"
#include "model/InvokeShellCommandRequest.h"
#include "model/InvokeShellCommandResult.h"
#include "model/AddUsersRequest.h"
#include "model/AddUsersResult.h"
#include "model/ListJobTemplatesRequest.h"
#include "model/ListJobTemplatesResult.h"
#include "model/ModifyClusterAttributesRequest.h"
#include "model/ModifyClusterAttributesResult.h"
#include "model/DescribeImageGatewayConfigRequest.h"
#include "model/DescribeImageGatewayConfigResult.h"
#include "model/DeleteJobTemplatesRequest.h"
#include "model/DeleteJobTemplatesResult.h"
#include "model/StopClusterRequest.h"
#include "model/StopClusterResult.h"
#include "model/ListNodesNoPagingRequest.h"
#include "model/ListNodesNoPagingResult.h"
#include "model/GetCloudMetricLogsRequest.h"
#include "model/GetCloudMetricLogsResult.h"
#include "model/GetHybridClusterConfigRequest.h"
#include "model/GetHybridClusterConfigResult.h"
#include "model/CreateJobTemplateRequest.h"
#include "model/CreateJobTemplateResult.h"
#include "model/ResetNodesRequest.h"
#include "model/ResetNodesResult.h"
#include "model/CreateHybridClusterRequest.h"
#include "model/CreateHybridClusterResult.h"
#include "model/ListContainerImagesRequest.h"
#include "model/ListContainerImagesResult.h"
#include "model/DeleteJobsRequest.h"
#include "model/DeleteJobsResult.h"
#include "model/DeleteNodesRequest.h"
#include "model/DeleteNodesResult.h"
#include "model/ListJobsRequest.h"
#include "model/ListJobsResult.h"
#include "model/CreateClusterRequest.h"
#include "model/CreateClusterResult.h"
#include "model/DescribeImageRequest.h"
#include "model/DescribeImageResult.h"
#include "model/ModifyUserPasswordsRequest.h"
#include "model/ModifyUserPasswordsResult.h"
#include "model/UpgradeClientRequest.h"
#include "model/UpgradeClientResult.h"
#include "model/DeleteClusterRequest.h"
#include "model/DeleteClusterResult.h"
#include "model/ListImagesRequest.h"
#include "model/ListImagesResult.h"
#include "model/ListVolumesRequest.h"
#include "model/ListVolumesResult.h"
#include "model/DeleteContainerAppsRequest.h"
#include "model/DeleteContainerAppsResult.h"
#include "model/ListInvocationStatusRequest.h"
#include "model/ListInvocationStatusResult.h"
#include "model/ModifyImageGatewayConfigRequest.h"
#include "model/ModifyImageGatewayConfigResult.h"
#include "model/ListContainerAppsRequest.h"
#include "model/ListContainerAppsResult.h"
#include "model/SetJobUserRequest.h"
#include "model/SetJobUserResult.h"
#include "model/ListClustersRequest.h"
#include "model/ListClustersResult.h"
#include "model/SubmitJobRequest.h"
#include "model/SubmitJobResult.h"
#include "model/ListRegionsRequest.h"
#include "model/ListRegionsResult.h"
#include "model/DescribeAutoScaleConfigRequest.h"
#include "model/DescribeAutoScaleConfigResult.h"
#include "model/RerunJobsRequest.h"
#include "model/RerunJobsResult.h"
#include "model/EditJobTemplateRequest.h"
#include "model/EditJobTemplateResult.h"
#include "model/AddLocalNodesRequest.h"
#include "model/AddLocalNodesResult.h"
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
			typedef Outcome<Error, Model::DeleteImageResult> DeleteImageOutcome;
			typedef std::future<DeleteImageOutcome> DeleteImageOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::DeleteImageRequest&, const DeleteImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteImageAsyncHandler;
			typedef Outcome<Error, Model::DeleteUsersResult> DeleteUsersOutcome;
			typedef std::future<DeleteUsersOutcome> DeleteUsersOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::DeleteUsersRequest&, const DeleteUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUsersAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterResult> DescribeClusterOutcome;
			typedef std::future<DescribeClusterOutcome> DescribeClusterOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::DescribeClusterRequest&, const DescribeClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterAsyncHandler;
			typedef Outcome<Error, Model::ListUsersResult> ListUsersOutcome;
			typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListUsersRequest&, const ListUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersAsyncHandler;
			typedef Outcome<Error, Model::StopNodesResult> StopNodesOutcome;
			typedef std::future<StopNodesOutcome> StopNodesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::StopNodesRequest&, const StopNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopNodesAsyncHandler;
			typedef Outcome<Error, Model::PullImageResult> PullImageOutcome;
			typedef std::future<PullImageOutcome> PullImageOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::PullImageRequest&, const PullImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PullImageAsyncHandler;
			typedef Outcome<Error, Model::DescribeContainerAppResult> DescribeContainerAppOutcome;
			typedef std::future<DescribeContainerAppOutcome> DescribeContainerAppOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::DescribeContainerAppRequest&, const DescribeContainerAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContainerAppAsyncHandler;
			typedef Outcome<Error, Model::ListCurrentClientVersionResult> ListCurrentClientVersionOutcome;
			typedef std::future<ListCurrentClientVersionOutcome> ListCurrentClientVersionOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListCurrentClientVersionRequest&, const ListCurrentClientVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCurrentClientVersionAsyncHandler;
			typedef Outcome<Error, Model::ModifyContainerAppAttributesResult> ModifyContainerAppAttributesOutcome;
			typedef std::future<ModifyContainerAppAttributesOutcome> ModifyContainerAppAttributesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ModifyContainerAppAttributesRequest&, const ModifyContainerAppAttributesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyContainerAppAttributesAsyncHandler;
			typedef Outcome<Error, Model::SetAutoScaleConfigResult> SetAutoScaleConfigOutcome;
			typedef std::future<SetAutoScaleConfigOutcome> SetAutoScaleConfigOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::SetAutoScaleConfigRequest&, const SetAutoScaleConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetAutoScaleConfigAsyncHandler;
			typedef Outcome<Error, Model::ListInvocationResultsResult> ListInvocationResultsOutcome;
			typedef std::future<ListInvocationResultsOutcome> ListInvocationResultsOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListInvocationResultsRequest&, const ListInvocationResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInvocationResultsAsyncHandler;
			typedef Outcome<Error, Model::AddNodesResult> AddNodesOutcome;
			typedef std::future<AddNodesOutcome> AddNodesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::AddNodesRequest&, const AddNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddNodesAsyncHandler;
			typedef Outcome<Error, Model::ListSoftwaresResult> ListSoftwaresOutcome;
			typedef std::future<ListSoftwaresOutcome> ListSoftwaresOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListSoftwaresRequest&, const ListSoftwaresOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSoftwaresAsyncHandler;
			typedef Outcome<Error, Model::StopJobsResult> StopJobsOutcome;
			typedef std::future<StopJobsOutcome> StopJobsOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::StopJobsRequest&, const StopJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopJobsAsyncHandler;
			typedef Outcome<Error, Model::StartNodesResult> StartNodesOutcome;
			typedef std::future<StartNodesOutcome> StartNodesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::StartNodesRequest&, const StartNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartNodesAsyncHandler;
			typedef Outcome<Error, Model::GetAutoScaleConfigResult> GetAutoScaleConfigOutcome;
			typedef std::future<GetAutoScaleConfigOutcome> GetAutoScaleConfigOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::GetAutoScaleConfigRequest&, const GetAutoScaleConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAutoScaleConfigAsyncHandler;
			typedef Outcome<Error, Model::ListNodesResult> ListNodesOutcome;
			typedef std::future<ListNodesOutcome> ListNodesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListNodesRequest&, const ListNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNodesAsyncHandler;
			typedef Outcome<Error, Model::ModifyUserGroupsResult> ModifyUserGroupsOutcome;
			typedef std::future<ModifyUserGroupsOutcome> ModifyUserGroupsOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ModifyUserGroupsRequest&, const ModifyUserGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserGroupsAsyncHandler;
			typedef Outcome<Error, Model::StartClusterResult> StartClusterOutcome;
			typedef std::future<StartClusterOutcome> StartClusterOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::StartClusterRequest&, const StartClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartClusterAsyncHandler;
			typedef Outcome<Error, Model::ListCommandsResult> ListCommandsOutcome;
			typedef std::future<ListCommandsOutcome> ListCommandsOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListCommandsRequest&, const ListCommandsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCommandsAsyncHandler;
			typedef Outcome<Error, Model::ListCustomImagesResult> ListCustomImagesOutcome;
			typedef std::future<ListCustomImagesOutcome> ListCustomImagesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListCustomImagesRequest&, const ListCustomImagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCustomImagesAsyncHandler;
			typedef Outcome<Error, Model::InvokeShellCommandResult> InvokeShellCommandOutcome;
			typedef std::future<InvokeShellCommandOutcome> InvokeShellCommandOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::InvokeShellCommandRequest&, const InvokeShellCommandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InvokeShellCommandAsyncHandler;
			typedef Outcome<Error, Model::AddUsersResult> AddUsersOutcome;
			typedef std::future<AddUsersOutcome> AddUsersOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::AddUsersRequest&, const AddUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddUsersAsyncHandler;
			typedef Outcome<Error, Model::ListJobTemplatesResult> ListJobTemplatesOutcome;
			typedef std::future<ListJobTemplatesOutcome> ListJobTemplatesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListJobTemplatesRequest&, const ListJobTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobTemplatesAsyncHandler;
			typedef Outcome<Error, Model::ModifyClusterAttributesResult> ModifyClusterAttributesOutcome;
			typedef std::future<ModifyClusterAttributesOutcome> ModifyClusterAttributesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ModifyClusterAttributesRequest&, const ModifyClusterAttributesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterAttributesAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageGatewayConfigResult> DescribeImageGatewayConfigOutcome;
			typedef std::future<DescribeImageGatewayConfigOutcome> DescribeImageGatewayConfigOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::DescribeImageGatewayConfigRequest&, const DescribeImageGatewayConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageGatewayConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteJobTemplatesResult> DeleteJobTemplatesOutcome;
			typedef std::future<DeleteJobTemplatesOutcome> DeleteJobTemplatesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::DeleteJobTemplatesRequest&, const DeleteJobTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteJobTemplatesAsyncHandler;
			typedef Outcome<Error, Model::StopClusterResult> StopClusterOutcome;
			typedef std::future<StopClusterOutcome> StopClusterOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::StopClusterRequest&, const StopClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopClusterAsyncHandler;
			typedef Outcome<Error, Model::ListNodesNoPagingResult> ListNodesNoPagingOutcome;
			typedef std::future<ListNodesNoPagingOutcome> ListNodesNoPagingOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListNodesNoPagingRequest&, const ListNodesNoPagingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNodesNoPagingAsyncHandler;
			typedef Outcome<Error, Model::GetCloudMetricLogsResult> GetCloudMetricLogsOutcome;
			typedef std::future<GetCloudMetricLogsOutcome> GetCloudMetricLogsOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::GetCloudMetricLogsRequest&, const GetCloudMetricLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCloudMetricLogsAsyncHandler;
			typedef Outcome<Error, Model::GetHybridClusterConfigResult> GetHybridClusterConfigOutcome;
			typedef std::future<GetHybridClusterConfigOutcome> GetHybridClusterConfigOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::GetHybridClusterConfigRequest&, const GetHybridClusterConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetHybridClusterConfigAsyncHandler;
			typedef Outcome<Error, Model::CreateJobTemplateResult> CreateJobTemplateOutcome;
			typedef std::future<CreateJobTemplateOutcome> CreateJobTemplateOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::CreateJobTemplateRequest&, const CreateJobTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateJobTemplateAsyncHandler;
			typedef Outcome<Error, Model::ResetNodesResult> ResetNodesOutcome;
			typedef std::future<ResetNodesOutcome> ResetNodesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ResetNodesRequest&, const ResetNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetNodesAsyncHandler;
			typedef Outcome<Error, Model::CreateHybridClusterResult> CreateHybridClusterOutcome;
			typedef std::future<CreateHybridClusterOutcome> CreateHybridClusterOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::CreateHybridClusterRequest&, const CreateHybridClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateHybridClusterAsyncHandler;
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
			typedef Outcome<Error, Model::CreateClusterResult> CreateClusterOutcome;
			typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::CreateClusterRequest&, const CreateClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsyncHandler;
			typedef Outcome<Error, Model::DescribeImageResult> DescribeImageOutcome;
			typedef std::future<DescribeImageOutcome> DescribeImageOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::DescribeImageRequest&, const DescribeImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImageAsyncHandler;
			typedef Outcome<Error, Model::ModifyUserPasswordsResult> ModifyUserPasswordsOutcome;
			typedef std::future<ModifyUserPasswordsOutcome> ModifyUserPasswordsOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ModifyUserPasswordsRequest&, const ModifyUserPasswordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserPasswordsAsyncHandler;
			typedef Outcome<Error, Model::UpgradeClientResult> UpgradeClientOutcome;
			typedef std::future<UpgradeClientOutcome> UpgradeClientOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::UpgradeClientRequest&, const UpgradeClientOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeClientAsyncHandler;
			typedef Outcome<Error, Model::DeleteClusterResult> DeleteClusterOutcome;
			typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::DeleteClusterRequest&, const DeleteClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterAsyncHandler;
			typedef Outcome<Error, Model::ListImagesResult> ListImagesOutcome;
			typedef std::future<ListImagesOutcome> ListImagesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListImagesRequest&, const ListImagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListImagesAsyncHandler;
			typedef Outcome<Error, Model::ListVolumesResult> ListVolumesOutcome;
			typedef std::future<ListVolumesOutcome> ListVolumesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListVolumesRequest&, const ListVolumesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVolumesAsyncHandler;
			typedef Outcome<Error, Model::DeleteContainerAppsResult> DeleteContainerAppsOutcome;
			typedef std::future<DeleteContainerAppsOutcome> DeleteContainerAppsOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::DeleteContainerAppsRequest&, const DeleteContainerAppsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteContainerAppsAsyncHandler;
			typedef Outcome<Error, Model::ListInvocationStatusResult> ListInvocationStatusOutcome;
			typedef std::future<ListInvocationStatusOutcome> ListInvocationStatusOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListInvocationStatusRequest&, const ListInvocationStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInvocationStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyImageGatewayConfigResult> ModifyImageGatewayConfigOutcome;
			typedef std::future<ModifyImageGatewayConfigOutcome> ModifyImageGatewayConfigOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ModifyImageGatewayConfigRequest&, const ModifyImageGatewayConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyImageGatewayConfigAsyncHandler;
			typedef Outcome<Error, Model::ListContainerAppsResult> ListContainerAppsOutcome;
			typedef std::future<ListContainerAppsOutcome> ListContainerAppsOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListContainerAppsRequest&, const ListContainerAppsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListContainerAppsAsyncHandler;
			typedef Outcome<Error, Model::SetJobUserResult> SetJobUserOutcome;
			typedef std::future<SetJobUserOutcome> SetJobUserOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::SetJobUserRequest&, const SetJobUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetJobUserAsyncHandler;
			typedef Outcome<Error, Model::ListClustersResult> ListClustersOutcome;
			typedef std::future<ListClustersOutcome> ListClustersOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListClustersRequest&, const ListClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClustersAsyncHandler;
			typedef Outcome<Error, Model::SubmitJobResult> SubmitJobOutcome;
			typedef std::future<SubmitJobOutcome> SubmitJobOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::SubmitJobRequest&, const SubmitJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitJobAsyncHandler;
			typedef Outcome<Error, Model::ListRegionsResult> ListRegionsOutcome;
			typedef std::future<ListRegionsOutcome> ListRegionsOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::ListRegionsRequest&, const ListRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAutoScaleConfigResult> DescribeAutoScaleConfigOutcome;
			typedef std::future<DescribeAutoScaleConfigOutcome> DescribeAutoScaleConfigOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::DescribeAutoScaleConfigRequest&, const DescribeAutoScaleConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoScaleConfigAsyncHandler;
			typedef Outcome<Error, Model::RerunJobsResult> RerunJobsOutcome;
			typedef std::future<RerunJobsOutcome> RerunJobsOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::RerunJobsRequest&, const RerunJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RerunJobsAsyncHandler;
			typedef Outcome<Error, Model::EditJobTemplateResult> EditJobTemplateOutcome;
			typedef std::future<EditJobTemplateOutcome> EditJobTemplateOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::EditJobTemplateRequest&, const EditJobTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EditJobTemplateAsyncHandler;
			typedef Outcome<Error, Model::AddLocalNodesResult> AddLocalNodesOutcome;
			typedef std::future<AddLocalNodesOutcome> AddLocalNodesOutcomeCallable;
			typedef std::function<void(const EHPCClient*, const Model::AddLocalNodesRequest&, const AddLocalNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLocalNodesAsyncHandler;
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
			DeleteImageOutcome deleteImage(const Model::DeleteImageRequest &request)const;
			void deleteImageAsync(const Model::DeleteImageRequest& request, const DeleteImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteImageOutcomeCallable deleteImageCallable(const Model::DeleteImageRequest& request) const;
			DeleteUsersOutcome deleteUsers(const Model::DeleteUsersRequest &request)const;
			void deleteUsersAsync(const Model::DeleteUsersRequest& request, const DeleteUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUsersOutcomeCallable deleteUsersCallable(const Model::DeleteUsersRequest& request) const;
			DescribeClusterOutcome describeCluster(const Model::DescribeClusterRequest &request)const;
			void describeClusterAsync(const Model::DescribeClusterRequest& request, const DescribeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClusterOutcomeCallable describeClusterCallable(const Model::DescribeClusterRequest& request) const;
			ListUsersOutcome listUsers(const Model::ListUsersRequest &request)const;
			void listUsersAsync(const Model::ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUsersOutcomeCallable listUsersCallable(const Model::ListUsersRequest& request) const;
			StopNodesOutcome stopNodes(const Model::StopNodesRequest &request)const;
			void stopNodesAsync(const Model::StopNodesRequest& request, const StopNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopNodesOutcomeCallable stopNodesCallable(const Model::StopNodesRequest& request) const;
			PullImageOutcome pullImage(const Model::PullImageRequest &request)const;
			void pullImageAsync(const Model::PullImageRequest& request, const PullImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PullImageOutcomeCallable pullImageCallable(const Model::PullImageRequest& request) const;
			DescribeContainerAppOutcome describeContainerApp(const Model::DescribeContainerAppRequest &request)const;
			void describeContainerAppAsync(const Model::DescribeContainerAppRequest& request, const DescribeContainerAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeContainerAppOutcomeCallable describeContainerAppCallable(const Model::DescribeContainerAppRequest& request) const;
			ListCurrentClientVersionOutcome listCurrentClientVersion(const Model::ListCurrentClientVersionRequest &request)const;
			void listCurrentClientVersionAsync(const Model::ListCurrentClientVersionRequest& request, const ListCurrentClientVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCurrentClientVersionOutcomeCallable listCurrentClientVersionCallable(const Model::ListCurrentClientVersionRequest& request) const;
			ModifyContainerAppAttributesOutcome modifyContainerAppAttributes(const Model::ModifyContainerAppAttributesRequest &request)const;
			void modifyContainerAppAttributesAsync(const Model::ModifyContainerAppAttributesRequest& request, const ModifyContainerAppAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyContainerAppAttributesOutcomeCallable modifyContainerAppAttributesCallable(const Model::ModifyContainerAppAttributesRequest& request) const;
			SetAutoScaleConfigOutcome setAutoScaleConfig(const Model::SetAutoScaleConfigRequest &request)const;
			void setAutoScaleConfigAsync(const Model::SetAutoScaleConfigRequest& request, const SetAutoScaleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetAutoScaleConfigOutcomeCallable setAutoScaleConfigCallable(const Model::SetAutoScaleConfigRequest& request) const;
			ListInvocationResultsOutcome listInvocationResults(const Model::ListInvocationResultsRequest &request)const;
			void listInvocationResultsAsync(const Model::ListInvocationResultsRequest& request, const ListInvocationResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInvocationResultsOutcomeCallable listInvocationResultsCallable(const Model::ListInvocationResultsRequest& request) const;
			AddNodesOutcome addNodes(const Model::AddNodesRequest &request)const;
			void addNodesAsync(const Model::AddNodesRequest& request, const AddNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddNodesOutcomeCallable addNodesCallable(const Model::AddNodesRequest& request) const;
			ListSoftwaresOutcome listSoftwares(const Model::ListSoftwaresRequest &request)const;
			void listSoftwaresAsync(const Model::ListSoftwaresRequest& request, const ListSoftwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSoftwaresOutcomeCallable listSoftwaresCallable(const Model::ListSoftwaresRequest& request) const;
			StopJobsOutcome stopJobs(const Model::StopJobsRequest &request)const;
			void stopJobsAsync(const Model::StopJobsRequest& request, const StopJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopJobsOutcomeCallable stopJobsCallable(const Model::StopJobsRequest& request) const;
			StartNodesOutcome startNodes(const Model::StartNodesRequest &request)const;
			void startNodesAsync(const Model::StartNodesRequest& request, const StartNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartNodesOutcomeCallable startNodesCallable(const Model::StartNodesRequest& request) const;
			GetAutoScaleConfigOutcome getAutoScaleConfig(const Model::GetAutoScaleConfigRequest &request)const;
			void getAutoScaleConfigAsync(const Model::GetAutoScaleConfigRequest& request, const GetAutoScaleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAutoScaleConfigOutcomeCallable getAutoScaleConfigCallable(const Model::GetAutoScaleConfigRequest& request) const;
			ListNodesOutcome listNodes(const Model::ListNodesRequest &request)const;
			void listNodesAsync(const Model::ListNodesRequest& request, const ListNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNodesOutcomeCallable listNodesCallable(const Model::ListNodesRequest& request) const;
			ModifyUserGroupsOutcome modifyUserGroups(const Model::ModifyUserGroupsRequest &request)const;
			void modifyUserGroupsAsync(const Model::ModifyUserGroupsRequest& request, const ModifyUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyUserGroupsOutcomeCallable modifyUserGroupsCallable(const Model::ModifyUserGroupsRequest& request) const;
			StartClusterOutcome startCluster(const Model::StartClusterRequest &request)const;
			void startClusterAsync(const Model::StartClusterRequest& request, const StartClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartClusterOutcomeCallable startClusterCallable(const Model::StartClusterRequest& request) const;
			ListCommandsOutcome listCommands(const Model::ListCommandsRequest &request)const;
			void listCommandsAsync(const Model::ListCommandsRequest& request, const ListCommandsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCommandsOutcomeCallable listCommandsCallable(const Model::ListCommandsRequest& request) const;
			ListCustomImagesOutcome listCustomImages(const Model::ListCustomImagesRequest &request)const;
			void listCustomImagesAsync(const Model::ListCustomImagesRequest& request, const ListCustomImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCustomImagesOutcomeCallable listCustomImagesCallable(const Model::ListCustomImagesRequest& request) const;
			InvokeShellCommandOutcome invokeShellCommand(const Model::InvokeShellCommandRequest &request)const;
			void invokeShellCommandAsync(const Model::InvokeShellCommandRequest& request, const InvokeShellCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InvokeShellCommandOutcomeCallable invokeShellCommandCallable(const Model::InvokeShellCommandRequest& request) const;
			AddUsersOutcome addUsers(const Model::AddUsersRequest &request)const;
			void addUsersAsync(const Model::AddUsersRequest& request, const AddUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddUsersOutcomeCallable addUsersCallable(const Model::AddUsersRequest& request) const;
			ListJobTemplatesOutcome listJobTemplates(const Model::ListJobTemplatesRequest &request)const;
			void listJobTemplatesAsync(const Model::ListJobTemplatesRequest& request, const ListJobTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobTemplatesOutcomeCallable listJobTemplatesCallable(const Model::ListJobTemplatesRequest& request) const;
			ModifyClusterAttributesOutcome modifyClusterAttributes(const Model::ModifyClusterAttributesRequest &request)const;
			void modifyClusterAttributesAsync(const Model::ModifyClusterAttributesRequest& request, const ModifyClusterAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyClusterAttributesOutcomeCallable modifyClusterAttributesCallable(const Model::ModifyClusterAttributesRequest& request) const;
			DescribeImageGatewayConfigOutcome describeImageGatewayConfig(const Model::DescribeImageGatewayConfigRequest &request)const;
			void describeImageGatewayConfigAsync(const Model::DescribeImageGatewayConfigRequest& request, const DescribeImageGatewayConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageGatewayConfigOutcomeCallable describeImageGatewayConfigCallable(const Model::DescribeImageGatewayConfigRequest& request) const;
			DeleteJobTemplatesOutcome deleteJobTemplates(const Model::DeleteJobTemplatesRequest &request)const;
			void deleteJobTemplatesAsync(const Model::DeleteJobTemplatesRequest& request, const DeleteJobTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteJobTemplatesOutcomeCallable deleteJobTemplatesCallable(const Model::DeleteJobTemplatesRequest& request) const;
			StopClusterOutcome stopCluster(const Model::StopClusterRequest &request)const;
			void stopClusterAsync(const Model::StopClusterRequest& request, const StopClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopClusterOutcomeCallable stopClusterCallable(const Model::StopClusterRequest& request) const;
			ListNodesNoPagingOutcome listNodesNoPaging(const Model::ListNodesNoPagingRequest &request)const;
			void listNodesNoPagingAsync(const Model::ListNodesNoPagingRequest& request, const ListNodesNoPagingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNodesNoPagingOutcomeCallable listNodesNoPagingCallable(const Model::ListNodesNoPagingRequest& request) const;
			GetCloudMetricLogsOutcome getCloudMetricLogs(const Model::GetCloudMetricLogsRequest &request)const;
			void getCloudMetricLogsAsync(const Model::GetCloudMetricLogsRequest& request, const GetCloudMetricLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCloudMetricLogsOutcomeCallable getCloudMetricLogsCallable(const Model::GetCloudMetricLogsRequest& request) const;
			GetHybridClusterConfigOutcome getHybridClusterConfig(const Model::GetHybridClusterConfigRequest &request)const;
			void getHybridClusterConfigAsync(const Model::GetHybridClusterConfigRequest& request, const GetHybridClusterConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetHybridClusterConfigOutcomeCallable getHybridClusterConfigCallable(const Model::GetHybridClusterConfigRequest& request) const;
			CreateJobTemplateOutcome createJobTemplate(const Model::CreateJobTemplateRequest &request)const;
			void createJobTemplateAsync(const Model::CreateJobTemplateRequest& request, const CreateJobTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateJobTemplateOutcomeCallable createJobTemplateCallable(const Model::CreateJobTemplateRequest& request) const;
			ResetNodesOutcome resetNodes(const Model::ResetNodesRequest &request)const;
			void resetNodesAsync(const Model::ResetNodesRequest& request, const ResetNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetNodesOutcomeCallable resetNodesCallable(const Model::ResetNodesRequest& request) const;
			CreateHybridClusterOutcome createHybridCluster(const Model::CreateHybridClusterRequest &request)const;
			void createHybridClusterAsync(const Model::CreateHybridClusterRequest& request, const CreateHybridClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateHybridClusterOutcomeCallable createHybridClusterCallable(const Model::CreateHybridClusterRequest& request) const;
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
			CreateClusterOutcome createCluster(const Model::CreateClusterRequest &request)const;
			void createClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClusterOutcomeCallable createClusterCallable(const Model::CreateClusterRequest& request) const;
			DescribeImageOutcome describeImage(const Model::DescribeImageRequest &request)const;
			void describeImageAsync(const Model::DescribeImageRequest& request, const DescribeImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImageOutcomeCallable describeImageCallable(const Model::DescribeImageRequest& request) const;
			ModifyUserPasswordsOutcome modifyUserPasswords(const Model::ModifyUserPasswordsRequest &request)const;
			void modifyUserPasswordsAsync(const Model::ModifyUserPasswordsRequest& request, const ModifyUserPasswordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyUserPasswordsOutcomeCallable modifyUserPasswordsCallable(const Model::ModifyUserPasswordsRequest& request) const;
			UpgradeClientOutcome upgradeClient(const Model::UpgradeClientRequest &request)const;
			void upgradeClientAsync(const Model::UpgradeClientRequest& request, const UpgradeClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeClientOutcomeCallable upgradeClientCallable(const Model::UpgradeClientRequest& request) const;
			DeleteClusterOutcome deleteCluster(const Model::DeleteClusterRequest &request)const;
			void deleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteClusterOutcomeCallable deleteClusterCallable(const Model::DeleteClusterRequest& request) const;
			ListImagesOutcome listImages(const Model::ListImagesRequest &request)const;
			void listImagesAsync(const Model::ListImagesRequest& request, const ListImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListImagesOutcomeCallable listImagesCallable(const Model::ListImagesRequest& request) const;
			ListVolumesOutcome listVolumes(const Model::ListVolumesRequest &request)const;
			void listVolumesAsync(const Model::ListVolumesRequest& request, const ListVolumesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVolumesOutcomeCallable listVolumesCallable(const Model::ListVolumesRequest& request) const;
			DeleteContainerAppsOutcome deleteContainerApps(const Model::DeleteContainerAppsRequest &request)const;
			void deleteContainerAppsAsync(const Model::DeleteContainerAppsRequest& request, const DeleteContainerAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteContainerAppsOutcomeCallable deleteContainerAppsCallable(const Model::DeleteContainerAppsRequest& request) const;
			ListInvocationStatusOutcome listInvocationStatus(const Model::ListInvocationStatusRequest &request)const;
			void listInvocationStatusAsync(const Model::ListInvocationStatusRequest& request, const ListInvocationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInvocationStatusOutcomeCallable listInvocationStatusCallable(const Model::ListInvocationStatusRequest& request) const;
			ModifyImageGatewayConfigOutcome modifyImageGatewayConfig(const Model::ModifyImageGatewayConfigRequest &request)const;
			void modifyImageGatewayConfigAsync(const Model::ModifyImageGatewayConfigRequest& request, const ModifyImageGatewayConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyImageGatewayConfigOutcomeCallable modifyImageGatewayConfigCallable(const Model::ModifyImageGatewayConfigRequest& request) const;
			ListContainerAppsOutcome listContainerApps(const Model::ListContainerAppsRequest &request)const;
			void listContainerAppsAsync(const Model::ListContainerAppsRequest& request, const ListContainerAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListContainerAppsOutcomeCallable listContainerAppsCallable(const Model::ListContainerAppsRequest& request) const;
			SetJobUserOutcome setJobUser(const Model::SetJobUserRequest &request)const;
			void setJobUserAsync(const Model::SetJobUserRequest& request, const SetJobUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetJobUserOutcomeCallable setJobUserCallable(const Model::SetJobUserRequest& request) const;
			ListClustersOutcome listClusters(const Model::ListClustersRequest &request)const;
			void listClustersAsync(const Model::ListClustersRequest& request, const ListClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClustersOutcomeCallable listClustersCallable(const Model::ListClustersRequest& request) const;
			SubmitJobOutcome submitJob(const Model::SubmitJobRequest &request)const;
			void submitJobAsync(const Model::SubmitJobRequest& request, const SubmitJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SubmitJobOutcomeCallable submitJobCallable(const Model::SubmitJobRequest& request) const;
			ListRegionsOutcome listRegions(const Model::ListRegionsRequest &request)const;
			void listRegionsAsync(const Model::ListRegionsRequest& request, const ListRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRegionsOutcomeCallable listRegionsCallable(const Model::ListRegionsRequest& request) const;
			DescribeAutoScaleConfigOutcome describeAutoScaleConfig(const Model::DescribeAutoScaleConfigRequest &request)const;
			void describeAutoScaleConfigAsync(const Model::DescribeAutoScaleConfigRequest& request, const DescribeAutoScaleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAutoScaleConfigOutcomeCallable describeAutoScaleConfigCallable(const Model::DescribeAutoScaleConfigRequest& request) const;
			RerunJobsOutcome rerunJobs(const Model::RerunJobsRequest &request)const;
			void rerunJobsAsync(const Model::RerunJobsRequest& request, const RerunJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RerunJobsOutcomeCallable rerunJobsCallable(const Model::RerunJobsRequest& request) const;
			EditJobTemplateOutcome editJobTemplate(const Model::EditJobTemplateRequest &request)const;
			void editJobTemplateAsync(const Model::EditJobTemplateRequest& request, const EditJobTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EditJobTemplateOutcomeCallable editJobTemplateCallable(const Model::EditJobTemplateRequest& request) const;
			AddLocalNodesOutcome addLocalNodes(const Model::AddLocalNodesRequest &request)const;
			void addLocalNodesAsync(const Model::AddLocalNodesRequest& request, const AddLocalNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLocalNodesOutcomeCallable addLocalNodesCallable(const Model::AddLocalNodesRequest& request) const;
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
