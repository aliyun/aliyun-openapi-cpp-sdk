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

#ifndef ALIBABACLOUD_TEAMBITION_ALIYUN_TEAMBITION_ALIYUNCLIENT_H_
#define ALIBABACLOUD_TEAMBITION_ALIYUN_TEAMBITION_ALIYUNCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Teambition_aliyunExport.h"
#include "model/AddProjectMembersRequest.h"
#include "model/AddProjectMembersResult.h"
#include "model/ApplySmallMicroRequest.h"
#include "model/ApplySmallMicroResult.h"
#include "model/BactchInsertMembersRequest.h"
#include "model/BactchInsertMembersResult.h"
#include "model/CheckAliyunUserExistsRequest.h"
#include "model/CheckAliyunUserExistsResult.h"
#include "model/CreateDevopsOrgRequest.h"
#include "model/CreateDevopsOrgResult.h"
#include "model/CreateProjectRequest.h"
#include "model/CreateProjectResult.h"
#include "model/CreateProjectSprintRequest.h"
#include "model/CreateProjectSprintResult.h"
#include "model/CreateProjectTaskRequest.h"
#include "model/CreateProjectTaskResult.h"
#include "model/DeleteMembersForOrgRequest.h"
#include "model/DeleteMembersForOrgResult.h"
#include "model/DeleteProjectRequest.h"
#include "model/DeleteProjectResult.h"
#include "model/DeleteProjectMembersRequest.h"
#include "model/DeleteProjectMembersResult.h"
#include "model/DeleteProjectSprintRequest.h"
#include "model/DeleteProjectSprintResult.h"
#include "model/DeleteProjectTaskRequest.h"
#include "model/DeleteProjectTaskResult.h"
#include "model/GetOrganizationMembersRequest.h"
#include "model/GetOrganizationMembersResult.h"
#include "model/GetProjectInfoRequest.h"
#include "model/GetProjectInfoResult.h"
#include "model/GetProjectMembersRequest.h"
#include "model/GetProjectMembersResult.h"
#include "model/GetProjectSprintInfoRequest.h"
#include "model/GetProjectSprintInfoResult.h"
#include "model/GetProjectTaskInfoRequest.h"
#include "model/GetProjectTaskInfoResult.h"
#include "model/GetUserByUidRequest.h"
#include "model/GetUserByUidResult.h"
#include "model/InsertDevopsMemberRequest.h"
#include "model/InsertDevopsMemberResult.h"
#include "model/ListProjectSprintsRequest.h"
#include "model/ListProjectSprintsResult.h"
#include "model/ListProjectTaskFlowRequest.h"
#include "model/ListProjectTaskFlowResult.h"
#include "model/ListProjectTaskFlowStatusRequest.h"
#include "model/ListProjectTaskFlowStatusResult.h"
#include "model/ListProjectTasksRequest.h"
#include "model/ListProjectTasksResult.h"
#include "model/ListScenarioFieldConfigRequest.h"
#include "model/ListScenarioFieldConfigResult.h"
#include "model/UpdateProjectRequest.h"
#include "model/UpdateProjectResult.h"
#include "model/UpdateProjectSprintRequest.h"
#include "model/UpdateProjectSprintResult.h"
#include "model/UpdateProjectTaskRequest.h"
#include "model/UpdateProjectTaskResult.h"


namespace AlibabaCloud
{
	namespace Teambition_aliyun
	{
		class ALIBABACLOUD_TEAMBITION_ALIYUN_EXPORT Teambition_aliyunClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddProjectMembersResult> AddProjectMembersOutcome;
			typedef std::future<AddProjectMembersOutcome> AddProjectMembersOutcomeCallable;
			typedef std::function<void(const Teambition_aliyunClient*, const Model::AddProjectMembersRequest&, const AddProjectMembersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddProjectMembersAsyncHandler;
			typedef Outcome<Error, Model::ApplySmallMicroResult> ApplySmallMicroOutcome;
			typedef std::future<ApplySmallMicroOutcome> ApplySmallMicroOutcomeCallable;
			typedef std::function<void(const Teambition_aliyunClient*, const Model::ApplySmallMicroRequest&, const ApplySmallMicroOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ApplySmallMicroAsyncHandler;
			typedef Outcome<Error, Model::BactchInsertMembersResult> BactchInsertMembersOutcome;
			typedef std::future<BactchInsertMembersOutcome> BactchInsertMembersOutcomeCallable;
			typedef std::function<void(const Teambition_aliyunClient*, const Model::BactchInsertMembersRequest&, const BactchInsertMembersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BactchInsertMembersAsyncHandler;
			typedef Outcome<Error, Model::CheckAliyunUserExistsResult> CheckAliyunUserExistsOutcome;
			typedef std::future<CheckAliyunUserExistsOutcome> CheckAliyunUserExistsOutcomeCallable;
			typedef std::function<void(const Teambition_aliyunClient*, const Model::CheckAliyunUserExistsRequest&, const CheckAliyunUserExistsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckAliyunUserExistsAsyncHandler;
			typedef Outcome<Error, Model::CreateDevopsOrgResult> CreateDevopsOrgOutcome;
			typedef std::future<CreateDevopsOrgOutcome> CreateDevopsOrgOutcomeCallable;
			typedef std::function<void(const Teambition_aliyunClient*, const Model::CreateDevopsOrgRequest&, const CreateDevopsOrgOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDevopsOrgAsyncHandler;
			typedef Outcome<Error, Model::CreateProjectResult> CreateProjectOutcome;
			typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
			typedef std::function<void(const Teambition_aliyunClient*, const Model::CreateProjectRequest&, const CreateProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectAsyncHandler;
			typedef Outcome<Error, Model::CreateProjectSprintResult> CreateProjectSprintOutcome;
			typedef std::future<CreateProjectSprintOutcome> CreateProjectSprintOutcomeCallable;
			typedef std::function<void(const Teambition_aliyunClient*, const Model::CreateProjectSprintRequest&, const CreateProjectSprintOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectSprintAsyncHandler;
			typedef Outcome<Error, Model::CreateProjectTaskResult> CreateProjectTaskOutcome;
			typedef std::future<CreateProjectTaskOutcome> CreateProjectTaskOutcomeCallable;
			typedef std::function<void(const Teambition_aliyunClient*, const Model::CreateProjectTaskRequest&, const CreateProjectTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectTaskAsyncHandler;
			typedef Outcome<Error, Model::DeleteMembersForOrgResult> DeleteMembersForOrgOutcome;
			typedef std::future<DeleteMembersForOrgOutcome> DeleteMembersForOrgOutcomeCallable;
			typedef std::function<void(const Teambition_aliyunClient*, const Model::DeleteMembersForOrgRequest&, const DeleteMembersForOrgOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMembersForOrgAsyncHandler;
			typedef Outcome<Error, Model::DeleteProjectResult> DeleteProjectOutcome;
			typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
			typedef std::function<void(const Teambition_aliyunClient*, const Model::DeleteProjectRequest&, const DeleteProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectAsyncHandler;
			typedef Outcome<Error, Model::DeleteProjectMembersResult> DeleteProjectMembersOutcome;
			typedef std::future<DeleteProjectMembersOutcome> DeleteProjectMembersOutcomeCallable;
			typedef std::function<void(const Teambition_aliyunClient*, const Model::DeleteProjectMembersRequest&, const DeleteProjectMembersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectMembersAsyncHandler;
			typedef Outcome<Error, Model::DeleteProjectSprintResult> DeleteProjectSprintOutcome;
			typedef std::future<DeleteProjectSprintOutcome> DeleteProjectSprintOutcomeCallable;
			typedef std::function<void(const Teambition_aliyunClient*, const Model::DeleteProjectSprintRequest&, const DeleteProjectSprintOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectSprintAsyncHandler;
			typedef Outcome<Error, Model::DeleteProjectTaskResult> DeleteProjectTaskOutcome;
			typedef std::future<DeleteProjectTaskOutcome> DeleteProjectTaskOutcomeCallable;
			typedef std::function<void(const Teambition_aliyunClient*, const Model::DeleteProjectTaskRequest&, const DeleteProjectTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectTaskAsyncHandler;
			typedef Outcome<Error, Model::GetOrganizationMembersResult> GetOrganizationMembersOutcome;
			typedef std::future<GetOrganizationMembersOutcome> GetOrganizationMembersOutcomeCallable;
			typedef std::function<void(const Teambition_aliyunClient*, const Model::GetOrganizationMembersRequest&, const GetOrganizationMembersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOrganizationMembersAsyncHandler;
			typedef Outcome<Error, Model::GetProjectInfoResult> GetProjectInfoOutcome;
			typedef std::future<GetProjectInfoOutcome> GetProjectInfoOutcomeCallable;
			typedef std::function<void(const Teambition_aliyunClient*, const Model::GetProjectInfoRequest&, const GetProjectInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetProjectInfoAsyncHandler;
			typedef Outcome<Error, Model::GetProjectMembersResult> GetProjectMembersOutcome;
			typedef std::future<GetProjectMembersOutcome> GetProjectMembersOutcomeCallable;
			typedef std::function<void(const Teambition_aliyunClient*, const Model::GetProjectMembersRequest&, const GetProjectMembersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetProjectMembersAsyncHandler;
			typedef Outcome<Error, Model::GetProjectSprintInfoResult> GetProjectSprintInfoOutcome;
			typedef std::future<GetProjectSprintInfoOutcome> GetProjectSprintInfoOutcomeCallable;
			typedef std::function<void(const Teambition_aliyunClient*, const Model::GetProjectSprintInfoRequest&, const GetProjectSprintInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetProjectSprintInfoAsyncHandler;
			typedef Outcome<Error, Model::GetProjectTaskInfoResult> GetProjectTaskInfoOutcome;
			typedef std::future<GetProjectTaskInfoOutcome> GetProjectTaskInfoOutcomeCallable;
			typedef std::function<void(const Teambition_aliyunClient*, const Model::GetProjectTaskInfoRequest&, const GetProjectTaskInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetProjectTaskInfoAsyncHandler;
			typedef Outcome<Error, Model::GetUserByUidResult> GetUserByUidOutcome;
			typedef std::future<GetUserByUidOutcome> GetUserByUidOutcomeCallable;
			typedef std::function<void(const Teambition_aliyunClient*, const Model::GetUserByUidRequest&, const GetUserByUidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserByUidAsyncHandler;
			typedef Outcome<Error, Model::InsertDevopsMemberResult> InsertDevopsMemberOutcome;
			typedef std::future<InsertDevopsMemberOutcome> InsertDevopsMemberOutcomeCallable;
			typedef std::function<void(const Teambition_aliyunClient*, const Model::InsertDevopsMemberRequest&, const InsertDevopsMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InsertDevopsMemberAsyncHandler;
			typedef Outcome<Error, Model::ListProjectSprintsResult> ListProjectSprintsOutcome;
			typedef std::future<ListProjectSprintsOutcome> ListProjectSprintsOutcomeCallable;
			typedef std::function<void(const Teambition_aliyunClient*, const Model::ListProjectSprintsRequest&, const ListProjectSprintsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProjectSprintsAsyncHandler;
			typedef Outcome<Error, Model::ListProjectTaskFlowResult> ListProjectTaskFlowOutcome;
			typedef std::future<ListProjectTaskFlowOutcome> ListProjectTaskFlowOutcomeCallable;
			typedef std::function<void(const Teambition_aliyunClient*, const Model::ListProjectTaskFlowRequest&, const ListProjectTaskFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProjectTaskFlowAsyncHandler;
			typedef Outcome<Error, Model::ListProjectTaskFlowStatusResult> ListProjectTaskFlowStatusOutcome;
			typedef std::future<ListProjectTaskFlowStatusOutcome> ListProjectTaskFlowStatusOutcomeCallable;
			typedef std::function<void(const Teambition_aliyunClient*, const Model::ListProjectTaskFlowStatusRequest&, const ListProjectTaskFlowStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProjectTaskFlowStatusAsyncHandler;
			typedef Outcome<Error, Model::ListProjectTasksResult> ListProjectTasksOutcome;
			typedef std::future<ListProjectTasksOutcome> ListProjectTasksOutcomeCallable;
			typedef std::function<void(const Teambition_aliyunClient*, const Model::ListProjectTasksRequest&, const ListProjectTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListProjectTasksAsyncHandler;
			typedef Outcome<Error, Model::ListScenarioFieldConfigResult> ListScenarioFieldConfigOutcome;
			typedef std::future<ListScenarioFieldConfigOutcome> ListScenarioFieldConfigOutcomeCallable;
			typedef std::function<void(const Teambition_aliyunClient*, const Model::ListScenarioFieldConfigRequest&, const ListScenarioFieldConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListScenarioFieldConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateProjectResult> UpdateProjectOutcome;
			typedef std::future<UpdateProjectOutcome> UpdateProjectOutcomeCallable;
			typedef std::function<void(const Teambition_aliyunClient*, const Model::UpdateProjectRequest&, const UpdateProjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProjectAsyncHandler;
			typedef Outcome<Error, Model::UpdateProjectSprintResult> UpdateProjectSprintOutcome;
			typedef std::future<UpdateProjectSprintOutcome> UpdateProjectSprintOutcomeCallable;
			typedef std::function<void(const Teambition_aliyunClient*, const Model::UpdateProjectSprintRequest&, const UpdateProjectSprintOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProjectSprintAsyncHandler;
			typedef Outcome<Error, Model::UpdateProjectTaskResult> UpdateProjectTaskOutcome;
			typedef std::future<UpdateProjectTaskOutcome> UpdateProjectTaskOutcomeCallable;
			typedef std::function<void(const Teambition_aliyunClient*, const Model::UpdateProjectTaskRequest&, const UpdateProjectTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateProjectTaskAsyncHandler;

			Teambition_aliyunClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Teambition_aliyunClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Teambition_aliyunClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Teambition_aliyunClient();
			AddProjectMembersOutcome addProjectMembers(const Model::AddProjectMembersRequest &request)const;
			void addProjectMembersAsync(const Model::AddProjectMembersRequest& request, const AddProjectMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddProjectMembersOutcomeCallable addProjectMembersCallable(const Model::AddProjectMembersRequest& request) const;
			ApplySmallMicroOutcome applySmallMicro(const Model::ApplySmallMicroRequest &request)const;
			void applySmallMicroAsync(const Model::ApplySmallMicroRequest& request, const ApplySmallMicroAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ApplySmallMicroOutcomeCallable applySmallMicroCallable(const Model::ApplySmallMicroRequest& request) const;
			BactchInsertMembersOutcome bactchInsertMembers(const Model::BactchInsertMembersRequest &request)const;
			void bactchInsertMembersAsync(const Model::BactchInsertMembersRequest& request, const BactchInsertMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BactchInsertMembersOutcomeCallable bactchInsertMembersCallable(const Model::BactchInsertMembersRequest& request) const;
			CheckAliyunUserExistsOutcome checkAliyunUserExists(const Model::CheckAliyunUserExistsRequest &request)const;
			void checkAliyunUserExistsAsync(const Model::CheckAliyunUserExistsRequest& request, const CheckAliyunUserExistsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckAliyunUserExistsOutcomeCallable checkAliyunUserExistsCallable(const Model::CheckAliyunUserExistsRequest& request) const;
			CreateDevopsOrgOutcome createDevopsOrg(const Model::CreateDevopsOrgRequest &request)const;
			void createDevopsOrgAsync(const Model::CreateDevopsOrgRequest& request, const CreateDevopsOrgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDevopsOrgOutcomeCallable createDevopsOrgCallable(const Model::CreateDevopsOrgRequest& request) const;
			CreateProjectOutcome createProject(const Model::CreateProjectRequest &request)const;
			void createProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateProjectOutcomeCallable createProjectCallable(const Model::CreateProjectRequest& request) const;
			CreateProjectSprintOutcome createProjectSprint(const Model::CreateProjectSprintRequest &request)const;
			void createProjectSprintAsync(const Model::CreateProjectSprintRequest& request, const CreateProjectSprintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateProjectSprintOutcomeCallable createProjectSprintCallable(const Model::CreateProjectSprintRequest& request) const;
			CreateProjectTaskOutcome createProjectTask(const Model::CreateProjectTaskRequest &request)const;
			void createProjectTaskAsync(const Model::CreateProjectTaskRequest& request, const CreateProjectTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateProjectTaskOutcomeCallable createProjectTaskCallable(const Model::CreateProjectTaskRequest& request) const;
			DeleteMembersForOrgOutcome deleteMembersForOrg(const Model::DeleteMembersForOrgRequest &request)const;
			void deleteMembersForOrgAsync(const Model::DeleteMembersForOrgRequest& request, const DeleteMembersForOrgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMembersForOrgOutcomeCallable deleteMembersForOrgCallable(const Model::DeleteMembersForOrgRequest& request) const;
			DeleteProjectOutcome deleteProject(const Model::DeleteProjectRequest &request)const;
			void deleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteProjectOutcomeCallable deleteProjectCallable(const Model::DeleteProjectRequest& request) const;
			DeleteProjectMembersOutcome deleteProjectMembers(const Model::DeleteProjectMembersRequest &request)const;
			void deleteProjectMembersAsync(const Model::DeleteProjectMembersRequest& request, const DeleteProjectMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteProjectMembersOutcomeCallable deleteProjectMembersCallable(const Model::DeleteProjectMembersRequest& request) const;
			DeleteProjectSprintOutcome deleteProjectSprint(const Model::DeleteProjectSprintRequest &request)const;
			void deleteProjectSprintAsync(const Model::DeleteProjectSprintRequest& request, const DeleteProjectSprintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteProjectSprintOutcomeCallable deleteProjectSprintCallable(const Model::DeleteProjectSprintRequest& request) const;
			DeleteProjectTaskOutcome deleteProjectTask(const Model::DeleteProjectTaskRequest &request)const;
			void deleteProjectTaskAsync(const Model::DeleteProjectTaskRequest& request, const DeleteProjectTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteProjectTaskOutcomeCallable deleteProjectTaskCallable(const Model::DeleteProjectTaskRequest& request) const;
			GetOrganizationMembersOutcome getOrganizationMembers(const Model::GetOrganizationMembersRequest &request)const;
			void getOrganizationMembersAsync(const Model::GetOrganizationMembersRequest& request, const GetOrganizationMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOrganizationMembersOutcomeCallable getOrganizationMembersCallable(const Model::GetOrganizationMembersRequest& request) const;
			GetProjectInfoOutcome getProjectInfo(const Model::GetProjectInfoRequest &request)const;
			void getProjectInfoAsync(const Model::GetProjectInfoRequest& request, const GetProjectInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetProjectInfoOutcomeCallable getProjectInfoCallable(const Model::GetProjectInfoRequest& request) const;
			GetProjectMembersOutcome getProjectMembers(const Model::GetProjectMembersRequest &request)const;
			void getProjectMembersAsync(const Model::GetProjectMembersRequest& request, const GetProjectMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetProjectMembersOutcomeCallable getProjectMembersCallable(const Model::GetProjectMembersRequest& request) const;
			GetProjectSprintInfoOutcome getProjectSprintInfo(const Model::GetProjectSprintInfoRequest &request)const;
			void getProjectSprintInfoAsync(const Model::GetProjectSprintInfoRequest& request, const GetProjectSprintInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetProjectSprintInfoOutcomeCallable getProjectSprintInfoCallable(const Model::GetProjectSprintInfoRequest& request) const;
			GetProjectTaskInfoOutcome getProjectTaskInfo(const Model::GetProjectTaskInfoRequest &request)const;
			void getProjectTaskInfoAsync(const Model::GetProjectTaskInfoRequest& request, const GetProjectTaskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetProjectTaskInfoOutcomeCallable getProjectTaskInfoCallable(const Model::GetProjectTaskInfoRequest& request) const;
			GetUserByUidOutcome getUserByUid(const Model::GetUserByUidRequest &request)const;
			void getUserByUidAsync(const Model::GetUserByUidRequest& request, const GetUserByUidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserByUidOutcomeCallable getUserByUidCallable(const Model::GetUserByUidRequest& request) const;
			InsertDevopsMemberOutcome insertDevopsMember(const Model::InsertDevopsMemberRequest &request)const;
			void insertDevopsMemberAsync(const Model::InsertDevopsMemberRequest& request, const InsertDevopsMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InsertDevopsMemberOutcomeCallable insertDevopsMemberCallable(const Model::InsertDevopsMemberRequest& request) const;
			ListProjectSprintsOutcome listProjectSprints(const Model::ListProjectSprintsRequest &request)const;
			void listProjectSprintsAsync(const Model::ListProjectSprintsRequest& request, const ListProjectSprintsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProjectSprintsOutcomeCallable listProjectSprintsCallable(const Model::ListProjectSprintsRequest& request) const;
			ListProjectTaskFlowOutcome listProjectTaskFlow(const Model::ListProjectTaskFlowRequest &request)const;
			void listProjectTaskFlowAsync(const Model::ListProjectTaskFlowRequest& request, const ListProjectTaskFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProjectTaskFlowOutcomeCallable listProjectTaskFlowCallable(const Model::ListProjectTaskFlowRequest& request) const;
			ListProjectTaskFlowStatusOutcome listProjectTaskFlowStatus(const Model::ListProjectTaskFlowStatusRequest &request)const;
			void listProjectTaskFlowStatusAsync(const Model::ListProjectTaskFlowStatusRequest& request, const ListProjectTaskFlowStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProjectTaskFlowStatusOutcomeCallable listProjectTaskFlowStatusCallable(const Model::ListProjectTaskFlowStatusRequest& request) const;
			ListProjectTasksOutcome listProjectTasks(const Model::ListProjectTasksRequest &request)const;
			void listProjectTasksAsync(const Model::ListProjectTasksRequest& request, const ListProjectTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListProjectTasksOutcomeCallable listProjectTasksCallable(const Model::ListProjectTasksRequest& request) const;
			ListScenarioFieldConfigOutcome listScenarioFieldConfig(const Model::ListScenarioFieldConfigRequest &request)const;
			void listScenarioFieldConfigAsync(const Model::ListScenarioFieldConfigRequest& request, const ListScenarioFieldConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListScenarioFieldConfigOutcomeCallable listScenarioFieldConfigCallable(const Model::ListScenarioFieldConfigRequest& request) const;
			UpdateProjectOutcome updateProject(const Model::UpdateProjectRequest &request)const;
			void updateProjectAsync(const Model::UpdateProjectRequest& request, const UpdateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateProjectOutcomeCallable updateProjectCallable(const Model::UpdateProjectRequest& request) const;
			UpdateProjectSprintOutcome updateProjectSprint(const Model::UpdateProjectSprintRequest &request)const;
			void updateProjectSprintAsync(const Model::UpdateProjectSprintRequest& request, const UpdateProjectSprintAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateProjectSprintOutcomeCallable updateProjectSprintCallable(const Model::UpdateProjectSprintRequest& request) const;
			UpdateProjectTaskOutcome updateProjectTask(const Model::UpdateProjectTaskRequest &request)const;
			void updateProjectTaskAsync(const Model::UpdateProjectTaskRequest& request, const UpdateProjectTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateProjectTaskOutcomeCallable updateProjectTaskCallable(const Model::UpdateProjectTaskRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_TEAMBITION_ALIYUN_TEAMBITION_ALIYUNCLIENT_H_
