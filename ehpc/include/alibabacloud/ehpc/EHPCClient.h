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
#include "model/DeleteUsersRequest.h"
#include "model/DeleteUsersResult.h"
#include "model/DescribeClusterRequest.h"
#include "model/DescribeClusterResult.h"
#include "model/ListUsersRequest.h"
#include "model/ListUsersResult.h"
#include "model/UpgradeClientRequest.h"
#include "model/UpgradeClientResult.h"
#include "model/ListCurrentClientVersionRequest.h"
#include "model/ListCurrentClientVersionResult.h"
#include "model/DeleteClusterRequest.h"
#include "model/DeleteClusterResult.h"
#include "model/ListImagesRequest.h"
#include "model/ListImagesResult.h"
#include "model/SetAutoScaleConfigRequest.h"
#include "model/SetAutoScaleConfigResult.h"
#include "model/ListVolumesRequest.h"
#include "model/ListVolumesResult.h"
#include "model/AddNodesRequest.h"
#include "model/AddNodesResult.h"
#include "model/ListSoftwaresRequest.h"
#include "model/ListSoftwaresResult.h"
#include "model/StopJobsRequest.h"
#include "model/StopJobsResult.h"
#include "model/GetAutoScaleConfigRequest.h"
#include "model/GetAutoScaleConfigResult.h"
#include "model/ListNodesRequest.h"
#include "model/ListNodesResult.h"
#include "model/SetJobUserRequest.h"
#include "model/SetJobUserResult.h"
#include "model/ModifyUserGroupsRequest.h"
#include "model/ModifyUserGroupsResult.h"
#include "model/ListClustersRequest.h"
#include "model/ListClustersResult.h"
#include "model/SubmitJobRequest.h"
#include "model/SubmitJobResult.h"
#include "model/ListCustomImagesRequest.h"
#include "model/ListCustomImagesResult.h"
#include "model/ListRegionsRequest.h"
#include "model/ListRegionsResult.h"
#include "model/AddUsersRequest.h"
#include "model/AddUsersResult.h"
#include "model/ListJobTemplatesRequest.h"
#include "model/ListJobTemplatesResult.h"
#include "model/ModifyClusterAttributesRequest.h"
#include "model/ModifyClusterAttributesResult.h"
#include "model/DeleteJobTemplatesRequest.h"
#include "model/DeleteJobTemplatesResult.h"
#include "model/ListNodesNoPagingRequest.h"
#include "model/ListNodesNoPagingResult.h"
#include "model/CreateJobTemplateRequest.h"
#include "model/CreateJobTemplateResult.h"
#include "model/RerunJobsRequest.h"
#include "model/RerunJobsResult.h"
#include "model/ResetNodesRequest.h"
#include "model/ResetNodesResult.h"
#include "model/EditJobTemplateRequest.h"
#include "model/EditJobTemplateResult.h"
#include "model/ListPreferredEcsTypesRequest.h"
#include "model/ListPreferredEcsTypesResult.h"
#include "model/ListClusterLogsRequest.h"
#include "model/ListClusterLogsResult.h"
#include "model/DeleteJobsRequest.h"
#include "model/DeleteJobsResult.h"
#include "model/DeleteNodesRequest.h"
#include "model/DeleteNodesResult.h"
#include "model/ListJobsRequest.h"
#include "model/ListJobsResult.h"
#include "model/CreateClusterRequest.h"
#include "model/CreateClusterResult.h"
#include "model/ModifyUserPasswordsRequest.h"
#include "model/ModifyUserPasswordsResult.h"


namespace AlibabaCloud
{
	namespace EHPC
	{
		class ALIBABACLOUD_EHPC_EXPORT EHPCClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::DeleteUsersResult> DeleteUsersOutcome;			
			typedef std::future<DeleteUsersOutcome> DeleteUsersOutcomeCallable;			
			typedef std::function<void(const EHPCClient*, const Model::DeleteUsersRequest&, const DeleteUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUsersAsyncHandler;
			typedef Outcome<Error, Model::DescribeClusterResult> DescribeClusterOutcome;			
			typedef std::future<DescribeClusterOutcome> DescribeClusterOutcomeCallable;			
			typedef std::function<void(const EHPCClient*, const Model::DescribeClusterRequest&, const DescribeClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterAsyncHandler;
			typedef Outcome<Error, Model::ListUsersResult> ListUsersOutcome;			
			typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;			
			typedef std::function<void(const EHPCClient*, const Model::ListUsersRequest&, const ListUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersAsyncHandler;
			typedef Outcome<Error, Model::UpgradeClientResult> UpgradeClientOutcome;			
			typedef std::future<UpgradeClientOutcome> UpgradeClientOutcomeCallable;			
			typedef std::function<void(const EHPCClient*, const Model::UpgradeClientRequest&, const UpgradeClientOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeClientAsyncHandler;
			typedef Outcome<Error, Model::ListCurrentClientVersionResult> ListCurrentClientVersionOutcome;			
			typedef std::future<ListCurrentClientVersionOutcome> ListCurrentClientVersionOutcomeCallable;			
			typedef std::function<void(const EHPCClient*, const Model::ListCurrentClientVersionRequest&, const ListCurrentClientVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCurrentClientVersionAsyncHandler;
			typedef Outcome<Error, Model::DeleteClusterResult> DeleteClusterOutcome;			
			typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;			
			typedef std::function<void(const EHPCClient*, const Model::DeleteClusterRequest&, const DeleteClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterAsyncHandler;
			typedef Outcome<Error, Model::ListImagesResult> ListImagesOutcome;			
			typedef std::future<ListImagesOutcome> ListImagesOutcomeCallable;			
			typedef std::function<void(const EHPCClient*, const Model::ListImagesRequest&, const ListImagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListImagesAsyncHandler;
			typedef Outcome<Error, Model::SetAutoScaleConfigResult> SetAutoScaleConfigOutcome;			
			typedef std::future<SetAutoScaleConfigOutcome> SetAutoScaleConfigOutcomeCallable;			
			typedef std::function<void(const EHPCClient*, const Model::SetAutoScaleConfigRequest&, const SetAutoScaleConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetAutoScaleConfigAsyncHandler;
			typedef Outcome<Error, Model::ListVolumesResult> ListVolumesOutcome;			
			typedef std::future<ListVolumesOutcome> ListVolumesOutcomeCallable;			
			typedef std::function<void(const EHPCClient*, const Model::ListVolumesRequest&, const ListVolumesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVolumesAsyncHandler;
			typedef Outcome<Error, Model::AddNodesResult> AddNodesOutcome;			
			typedef std::future<AddNodesOutcome> AddNodesOutcomeCallable;			
			typedef std::function<void(const EHPCClient*, const Model::AddNodesRequest&, const AddNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddNodesAsyncHandler;
			typedef Outcome<Error, Model::ListSoftwaresResult> ListSoftwaresOutcome;			
			typedef std::future<ListSoftwaresOutcome> ListSoftwaresOutcomeCallable;			
			typedef std::function<void(const EHPCClient*, const Model::ListSoftwaresRequest&, const ListSoftwaresOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSoftwaresAsyncHandler;
			typedef Outcome<Error, Model::StopJobsResult> StopJobsOutcome;			
			typedef std::future<StopJobsOutcome> StopJobsOutcomeCallable;			
			typedef std::function<void(const EHPCClient*, const Model::StopJobsRequest&, const StopJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopJobsAsyncHandler;
			typedef Outcome<Error, Model::GetAutoScaleConfigResult> GetAutoScaleConfigOutcome;			
			typedef std::future<GetAutoScaleConfigOutcome> GetAutoScaleConfigOutcomeCallable;			
			typedef std::function<void(const EHPCClient*, const Model::GetAutoScaleConfigRequest&, const GetAutoScaleConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAutoScaleConfigAsyncHandler;
			typedef Outcome<Error, Model::ListNodesResult> ListNodesOutcome;			
			typedef std::future<ListNodesOutcome> ListNodesOutcomeCallable;			
			typedef std::function<void(const EHPCClient*, const Model::ListNodesRequest&, const ListNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNodesAsyncHandler;
			typedef Outcome<Error, Model::SetJobUserResult> SetJobUserOutcome;			
			typedef std::future<SetJobUserOutcome> SetJobUserOutcomeCallable;			
			typedef std::function<void(const EHPCClient*, const Model::SetJobUserRequest&, const SetJobUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetJobUserAsyncHandler;
			typedef Outcome<Error, Model::ModifyUserGroupsResult> ModifyUserGroupsOutcome;			
			typedef std::future<ModifyUserGroupsOutcome> ModifyUserGroupsOutcomeCallable;			
			typedef std::function<void(const EHPCClient*, const Model::ModifyUserGroupsRequest&, const ModifyUserGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListClustersResult> ListClustersOutcome;			
			typedef std::future<ListClustersOutcome> ListClustersOutcomeCallable;			
			typedef std::function<void(const EHPCClient*, const Model::ListClustersRequest&, const ListClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClustersAsyncHandler;
			typedef Outcome<Error, Model::SubmitJobResult> SubmitJobOutcome;			
			typedef std::future<SubmitJobOutcome> SubmitJobOutcomeCallable;			
			typedef std::function<void(const EHPCClient*, const Model::SubmitJobRequest&, const SubmitJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SubmitJobAsyncHandler;
			typedef Outcome<Error, Model::ListCustomImagesResult> ListCustomImagesOutcome;			
			typedef std::future<ListCustomImagesOutcome> ListCustomImagesOutcomeCallable;			
			typedef std::function<void(const EHPCClient*, const Model::ListCustomImagesRequest&, const ListCustomImagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCustomImagesAsyncHandler;
			typedef Outcome<Error, Model::ListRegionsResult> ListRegionsOutcome;			
			typedef std::future<ListRegionsOutcome> ListRegionsOutcomeCallable;			
			typedef std::function<void(const EHPCClient*, const Model::ListRegionsRequest&, const ListRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRegionsAsyncHandler;
			typedef Outcome<Error, Model::AddUsersResult> AddUsersOutcome;			
			typedef std::future<AddUsersOutcome> AddUsersOutcomeCallable;			
			typedef std::function<void(const EHPCClient*, const Model::AddUsersRequest&, const AddUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddUsersAsyncHandler;
			typedef Outcome<Error, Model::ListJobTemplatesResult> ListJobTemplatesOutcome;			
			typedef std::future<ListJobTemplatesOutcome> ListJobTemplatesOutcomeCallable;			
			typedef std::function<void(const EHPCClient*, const Model::ListJobTemplatesRequest&, const ListJobTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobTemplatesAsyncHandler;
			typedef Outcome<Error, Model::ModifyClusterAttributesResult> ModifyClusterAttributesOutcome;			
			typedef std::future<ModifyClusterAttributesOutcome> ModifyClusterAttributesOutcomeCallable;			
			typedef std::function<void(const EHPCClient*, const Model::ModifyClusterAttributesRequest&, const ModifyClusterAttributesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterAttributesAsyncHandler;
			typedef Outcome<Error, Model::DeleteJobTemplatesResult> DeleteJobTemplatesOutcome;			
			typedef std::future<DeleteJobTemplatesOutcome> DeleteJobTemplatesOutcomeCallable;			
			typedef std::function<void(const EHPCClient*, const Model::DeleteJobTemplatesRequest&, const DeleteJobTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteJobTemplatesAsyncHandler;
			typedef Outcome<Error, Model::ListNodesNoPagingResult> ListNodesNoPagingOutcome;			
			typedef std::future<ListNodesNoPagingOutcome> ListNodesNoPagingOutcomeCallable;			
			typedef std::function<void(const EHPCClient*, const Model::ListNodesNoPagingRequest&, const ListNodesNoPagingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNodesNoPagingAsyncHandler;
			typedef Outcome<Error, Model::CreateJobTemplateResult> CreateJobTemplateOutcome;			
			typedef std::future<CreateJobTemplateOutcome> CreateJobTemplateOutcomeCallable;			
			typedef std::function<void(const EHPCClient*, const Model::CreateJobTemplateRequest&, const CreateJobTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateJobTemplateAsyncHandler;
			typedef Outcome<Error, Model::RerunJobsResult> RerunJobsOutcome;			
			typedef std::future<RerunJobsOutcome> RerunJobsOutcomeCallable;			
			typedef std::function<void(const EHPCClient*, const Model::RerunJobsRequest&, const RerunJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RerunJobsAsyncHandler;
			typedef Outcome<Error, Model::ResetNodesResult> ResetNodesOutcome;			
			typedef std::future<ResetNodesOutcome> ResetNodesOutcomeCallable;			
			typedef std::function<void(const EHPCClient*, const Model::ResetNodesRequest&, const ResetNodesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetNodesAsyncHandler;
			typedef Outcome<Error, Model::EditJobTemplateResult> EditJobTemplateOutcome;			
			typedef std::future<EditJobTemplateOutcome> EditJobTemplateOutcomeCallable;			
			typedef std::function<void(const EHPCClient*, const Model::EditJobTemplateRequest&, const EditJobTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EditJobTemplateAsyncHandler;
			typedef Outcome<Error, Model::ListPreferredEcsTypesResult> ListPreferredEcsTypesOutcome;			
			typedef std::future<ListPreferredEcsTypesOutcome> ListPreferredEcsTypesOutcomeCallable;			
			typedef std::function<void(const EHPCClient*, const Model::ListPreferredEcsTypesRequest&, const ListPreferredEcsTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPreferredEcsTypesAsyncHandler;
			typedef Outcome<Error, Model::ListClusterLogsResult> ListClusterLogsOutcome;			
			typedef std::future<ListClusterLogsOutcome> ListClusterLogsOutcomeCallable;			
			typedef std::function<void(const EHPCClient*, const Model::ListClusterLogsRequest&, const ListClusterLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterLogsAsyncHandler;
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
			typedef Outcome<Error, Model::ModifyUserPasswordsResult> ModifyUserPasswordsOutcome;			
			typedef std::future<ModifyUserPasswordsOutcome> ModifyUserPasswordsOutcomeCallable;			
			typedef std::function<void(const EHPCClient*, const Model::ModifyUserPasswordsRequest&, const ModifyUserPasswordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyUserPasswordsAsyncHandler;

			EHPCClient(const Credentials &credentials, const ClientConfiguration &configuration);
			EHPCClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			EHPCClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~EHPCClient();
            DeleteUsersOutcome deleteUsers(const Model::DeleteUsersRequest &request)const;
            void deleteUsersAsync(const Model::DeleteUsersRequest& request, const DeleteUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteUsersOutcomeCallable deleteUsersCallable(const Model::DeleteUsersRequest& request) const;
            DescribeClusterOutcome describeCluster(const Model::DescribeClusterRequest &request)const;
            void describeClusterAsync(const Model::DescribeClusterRequest& request, const DescribeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DescribeClusterOutcomeCallable describeClusterCallable(const Model::DescribeClusterRequest& request) const;
            ListUsersOutcome listUsers(const Model::ListUsersRequest &request)const;
            void listUsersAsync(const Model::ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ListUsersOutcomeCallable listUsersCallable(const Model::ListUsersRequest& request) const;
            UpgradeClientOutcome upgradeClient(const Model::UpgradeClientRequest &request)const;
            void upgradeClientAsync(const Model::UpgradeClientRequest& request, const UpgradeClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            UpgradeClientOutcomeCallable upgradeClientCallable(const Model::UpgradeClientRequest& request) const;
            ListCurrentClientVersionOutcome listCurrentClientVersion(const Model::ListCurrentClientVersionRequest &request)const;
            void listCurrentClientVersionAsync(const Model::ListCurrentClientVersionRequest& request, const ListCurrentClientVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ListCurrentClientVersionOutcomeCallable listCurrentClientVersionCallable(const Model::ListCurrentClientVersionRequest& request) const;
            DeleteClusterOutcome deleteCluster(const Model::DeleteClusterRequest &request)const;
            void deleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteClusterOutcomeCallable deleteClusterCallable(const Model::DeleteClusterRequest& request) const;
            ListImagesOutcome listImages(const Model::ListImagesRequest &request)const;
            void listImagesAsync(const Model::ListImagesRequest& request, const ListImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ListImagesOutcomeCallable listImagesCallable(const Model::ListImagesRequest& request) const;
            SetAutoScaleConfigOutcome setAutoScaleConfig(const Model::SetAutoScaleConfigRequest &request)const;
            void setAutoScaleConfigAsync(const Model::SetAutoScaleConfigRequest& request, const SetAutoScaleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetAutoScaleConfigOutcomeCallable setAutoScaleConfigCallable(const Model::SetAutoScaleConfigRequest& request) const;
            ListVolumesOutcome listVolumes(const Model::ListVolumesRequest &request)const;
            void listVolumesAsync(const Model::ListVolumesRequest& request, const ListVolumesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ListVolumesOutcomeCallable listVolumesCallable(const Model::ListVolumesRequest& request) const;
            AddNodesOutcome addNodes(const Model::AddNodesRequest &request)const;
            void addNodesAsync(const Model::AddNodesRequest& request, const AddNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            AddNodesOutcomeCallable addNodesCallable(const Model::AddNodesRequest& request) const;
            ListSoftwaresOutcome listSoftwares(const Model::ListSoftwaresRequest &request)const;
            void listSoftwaresAsync(const Model::ListSoftwaresRequest& request, const ListSoftwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ListSoftwaresOutcomeCallable listSoftwaresCallable(const Model::ListSoftwaresRequest& request) const;
            StopJobsOutcome stopJobs(const Model::StopJobsRequest &request)const;
            void stopJobsAsync(const Model::StopJobsRequest& request, const StopJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            StopJobsOutcomeCallable stopJobsCallable(const Model::StopJobsRequest& request) const;
            GetAutoScaleConfigOutcome getAutoScaleConfig(const Model::GetAutoScaleConfigRequest &request)const;
            void getAutoScaleConfigAsync(const Model::GetAutoScaleConfigRequest& request, const GetAutoScaleConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            GetAutoScaleConfigOutcomeCallable getAutoScaleConfigCallable(const Model::GetAutoScaleConfigRequest& request) const;
            ListNodesOutcome listNodes(const Model::ListNodesRequest &request)const;
            void listNodesAsync(const Model::ListNodesRequest& request, const ListNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ListNodesOutcomeCallable listNodesCallable(const Model::ListNodesRequest& request) const;
            SetJobUserOutcome setJobUser(const Model::SetJobUserRequest &request)const;
            void setJobUserAsync(const Model::SetJobUserRequest& request, const SetJobUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SetJobUserOutcomeCallable setJobUserCallable(const Model::SetJobUserRequest& request) const;
            ModifyUserGroupsOutcome modifyUserGroups(const Model::ModifyUserGroupsRequest &request)const;
            void modifyUserGroupsAsync(const Model::ModifyUserGroupsRequest& request, const ModifyUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyUserGroupsOutcomeCallable modifyUserGroupsCallable(const Model::ModifyUserGroupsRequest& request) const;
            ListClustersOutcome listClusters(const Model::ListClustersRequest &request)const;
            void listClustersAsync(const Model::ListClustersRequest& request, const ListClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ListClustersOutcomeCallable listClustersCallable(const Model::ListClustersRequest& request) const;
            SubmitJobOutcome submitJob(const Model::SubmitJobRequest &request)const;
            void submitJobAsync(const Model::SubmitJobRequest& request, const SubmitJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            SubmitJobOutcomeCallable submitJobCallable(const Model::SubmitJobRequest& request) const;
            ListCustomImagesOutcome listCustomImages(const Model::ListCustomImagesRequest &request)const;
            void listCustomImagesAsync(const Model::ListCustomImagesRequest& request, const ListCustomImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ListCustomImagesOutcomeCallable listCustomImagesCallable(const Model::ListCustomImagesRequest& request) const;
            ListRegionsOutcome listRegions(const Model::ListRegionsRequest &request)const;
            void listRegionsAsync(const Model::ListRegionsRequest& request, const ListRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ListRegionsOutcomeCallable listRegionsCallable(const Model::ListRegionsRequest& request) const;
            AddUsersOutcome addUsers(const Model::AddUsersRequest &request)const;
            void addUsersAsync(const Model::AddUsersRequest& request, const AddUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            AddUsersOutcomeCallable addUsersCallable(const Model::AddUsersRequest& request) const;
            ListJobTemplatesOutcome listJobTemplates(const Model::ListJobTemplatesRequest &request)const;
            void listJobTemplatesAsync(const Model::ListJobTemplatesRequest& request, const ListJobTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ListJobTemplatesOutcomeCallable listJobTemplatesCallable(const Model::ListJobTemplatesRequest& request) const;
            ModifyClusterAttributesOutcome modifyClusterAttributes(const Model::ModifyClusterAttributesRequest &request)const;
            void modifyClusterAttributesAsync(const Model::ModifyClusterAttributesRequest& request, const ModifyClusterAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyClusterAttributesOutcomeCallable modifyClusterAttributesCallable(const Model::ModifyClusterAttributesRequest& request) const;
            DeleteJobTemplatesOutcome deleteJobTemplates(const Model::DeleteJobTemplatesRequest &request)const;
            void deleteJobTemplatesAsync(const Model::DeleteJobTemplatesRequest& request, const DeleteJobTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            DeleteJobTemplatesOutcomeCallable deleteJobTemplatesCallable(const Model::DeleteJobTemplatesRequest& request) const;
            ListNodesNoPagingOutcome listNodesNoPaging(const Model::ListNodesNoPagingRequest &request)const;
            void listNodesNoPagingAsync(const Model::ListNodesNoPagingRequest& request, const ListNodesNoPagingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ListNodesNoPagingOutcomeCallable listNodesNoPagingCallable(const Model::ListNodesNoPagingRequest& request) const;
            CreateJobTemplateOutcome createJobTemplate(const Model::CreateJobTemplateRequest &request)const;
            void createJobTemplateAsync(const Model::CreateJobTemplateRequest& request, const CreateJobTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            CreateJobTemplateOutcomeCallable createJobTemplateCallable(const Model::CreateJobTemplateRequest& request) const;
            RerunJobsOutcome rerunJobs(const Model::RerunJobsRequest &request)const;
            void rerunJobsAsync(const Model::RerunJobsRequest& request, const RerunJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            RerunJobsOutcomeCallable rerunJobsCallable(const Model::RerunJobsRequest& request) const;
            ResetNodesOutcome resetNodes(const Model::ResetNodesRequest &request)const;
            void resetNodesAsync(const Model::ResetNodesRequest& request, const ResetNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ResetNodesOutcomeCallable resetNodesCallable(const Model::ResetNodesRequest& request) const;
            EditJobTemplateOutcome editJobTemplate(const Model::EditJobTemplateRequest &request)const;
            void editJobTemplateAsync(const Model::EditJobTemplateRequest& request, const EditJobTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            EditJobTemplateOutcomeCallable editJobTemplateCallable(const Model::EditJobTemplateRequest& request) const;
            ListPreferredEcsTypesOutcome listPreferredEcsTypes(const Model::ListPreferredEcsTypesRequest &request)const;
            void listPreferredEcsTypesAsync(const Model::ListPreferredEcsTypesRequest& request, const ListPreferredEcsTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ListPreferredEcsTypesOutcomeCallable listPreferredEcsTypesCallable(const Model::ListPreferredEcsTypesRequest& request) const;
            ListClusterLogsOutcome listClusterLogs(const Model::ListClusterLogsRequest &request)const;
            void listClusterLogsAsync(const Model::ListClusterLogsRequest& request, const ListClusterLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ListClusterLogsOutcomeCallable listClusterLogsCallable(const Model::ListClusterLogsRequest& request) const;
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
            ModifyUserPasswordsOutcome modifyUserPasswords(const Model::ModifyUserPasswordsRequest &request)const;
            void modifyUserPasswordsAsync(const Model::ModifyUserPasswordsRequest& request, const ModifyUserPasswordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
            ModifyUserPasswordsOutcomeCallable modifyUserPasswordsCallable(const Model::ModifyUserPasswordsRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_EHPC_EHPCCLIENT_H_
