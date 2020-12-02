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

#ifndef ALIBABACLOUD_IDRSSERVICE_IDRSSERVICECLIENT_H_
#define ALIBABACLOUD_IDRSSERVICE_IDRSSERVICECLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "IdrsserviceExport.h"
#include "model/CheckServiceLinkedRoleRequest.h"
#include "model/CheckServiceLinkedRoleResult.h"
#include "model/CreateAppRequest.h"
#include "model/CreateAppResult.h"
#include "model/CreateDepartmentRequest.h"
#include "model/CreateDepartmentResult.h"
#include "model/CreateLiveRequest.h"
#include "model/CreateLiveResult.h"
#include "model/CreateLiveDetectionRequest.h"
#include "model/CreateLiveDetectionResult.h"
#include "model/CreateRuleRequest.h"
#include "model/CreateRuleResult.h"
#include "model/CreateStatisticsRecordRequest.h"
#include "model/CreateStatisticsRecordResult.h"
#include "model/CreateStatisticsTaskRequest.h"
#include "model/CreateStatisticsTaskResult.h"
#include "model/CreateTaskGroupRequest.h"
#include "model/CreateTaskGroupResult.h"
#include "model/CreateUserDepartmentsRequest.h"
#include "model/CreateUserDepartmentsResult.h"
#include "model/DeleteAppRequest.h"
#include "model/DeleteAppResult.h"
#include "model/DeleteDepartmentRequest.h"
#include "model/DeleteDepartmentResult.h"
#include "model/DeleteRuleRequest.h"
#include "model/DeleteRuleResult.h"
#include "model/DeleteUserRequest.h"
#include "model/DeleteUserResult.h"
#include "model/DeleteUserDepartmentsRequest.h"
#include "model/DeleteUserDepartmentsResult.h"
#include "model/ExitLiveRequest.h"
#include "model/ExitLiveResult.h"
#include "model/GetAppRequest.h"
#include "model/GetAppResult.h"
#include "model/GetDepartmentRequest.h"
#include "model/GetDepartmentResult.h"
#include "model/GetDetectEvaluationRequest.h"
#include "model/GetDetectEvaluationResult.h"
#include "model/GetDetectionRequest.h"
#include "model/GetDetectionResult.h"
#include "model/GetModelSignedUrlRequest.h"
#include "model/GetModelSignedUrlResult.h"
#include "model/GetPreSignedUrlRequest.h"
#include "model/GetPreSignedUrlResult.h"
#include "model/GetRuleRequest.h"
#include "model/GetRuleResult.h"
#include "model/GetServiceConfigurationRequest.h"
#include "model/GetServiceConfigurationResult.h"
#include "model/GetSignedUrlRequest.h"
#include "model/GetSignedUrlResult.h"
#include "model/GetSlrConfigurationRequest.h"
#include "model/GetSlrConfigurationResult.h"
#include "model/GetStatisticsRequest.h"
#include "model/GetStatisticsResult.h"
#include "model/GetTaskRequest.h"
#include "model/GetTaskResult.h"
#include "model/GetTaskGroupRequest.h"
#include "model/GetTaskGroupResult.h"
#include "model/GetUserRequest.h"
#include "model/GetUserResult.h"
#include "model/InitializeServiceLinkedRoleRequest.h"
#include "model/InitializeServiceLinkedRoleResult.h"
#include "model/JoinLiveRequest.h"
#include "model/JoinLiveResult.h"
#include "model/ListAppsRequest.h"
#include "model/ListAppsResult.h"
#include "model/ListDepartmentsRequest.h"
#include "model/ListDepartmentsResult.h"
#include "model/ListDetectionsRequest.h"
#include "model/ListDetectionsResult.h"
#include "model/ListFilesRequest.h"
#include "model/ListFilesResult.h"
#include "model/ListLivesRequest.h"
#include "model/ListLivesResult.h"
#include "model/ListRolesRequest.h"
#include "model/ListRolesResult.h"
#include "model/ListRulesRequest.h"
#include "model/ListRulesResult.h"
#include "model/ListStatisticsTaskRequest.h"
#include "model/ListStatisticsTaskResult.h"
#include "model/ListTaskGroupsRequest.h"
#include "model/ListTaskGroupsResult.h"
#include "model/ListTaskItemsRequest.h"
#include "model/ListTaskItemsResult.h"
#include "model/ListTasksRequest.h"
#include "model/ListTasksResult.h"
#include "model/ListUsersRequest.h"
#include "model/ListUsersResult.h"
#include "model/UpdateAppRequest.h"
#include "model/UpdateAppResult.h"
#include "model/UpdateDepartmentRequest.h"
#include "model/UpdateDepartmentResult.h"
#include "model/UpdateLiveRequest.h"
#include "model/UpdateLiveResult.h"
#include "model/UpdateRuleRequest.h"
#include "model/UpdateRuleResult.h"
#include "model/UpdateServiceConfigurationRequest.h"
#include "model/UpdateServiceConfigurationResult.h"
#include "model/UpdateSlrConfigurationRequest.h"
#include "model/UpdateSlrConfigurationResult.h"
#include "model/UpdateUserRequest.h"
#include "model/UpdateUserResult.h"


namespace AlibabaCloud
{
	namespace Idrsservice
	{
		class ALIBABACLOUD_IDRSSERVICE_EXPORT IdrsserviceClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CheckServiceLinkedRoleResult> CheckServiceLinkedRoleOutcome;
			typedef std::future<CheckServiceLinkedRoleOutcome> CheckServiceLinkedRoleOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::CheckServiceLinkedRoleRequest&, const CheckServiceLinkedRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckServiceLinkedRoleAsyncHandler;
			typedef Outcome<Error, Model::CreateAppResult> CreateAppOutcome;
			typedef std::future<CreateAppOutcome> CreateAppOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::CreateAppRequest&, const CreateAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppAsyncHandler;
			typedef Outcome<Error, Model::CreateDepartmentResult> CreateDepartmentOutcome;
			typedef std::future<CreateDepartmentOutcome> CreateDepartmentOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::CreateDepartmentRequest&, const CreateDepartmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDepartmentAsyncHandler;
			typedef Outcome<Error, Model::CreateLiveResult> CreateLiveOutcome;
			typedef std::future<CreateLiveOutcome> CreateLiveOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::CreateLiveRequest&, const CreateLiveOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveAsyncHandler;
			typedef Outcome<Error, Model::CreateLiveDetectionResult> CreateLiveDetectionOutcome;
			typedef std::future<CreateLiveDetectionOutcome> CreateLiveDetectionOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::CreateLiveDetectionRequest&, const CreateLiveDetectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLiveDetectionAsyncHandler;
			typedef Outcome<Error, Model::CreateRuleResult> CreateRuleOutcome;
			typedef std::future<CreateRuleOutcome> CreateRuleOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::CreateRuleRequest&, const CreateRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateStatisticsRecordResult> CreateStatisticsRecordOutcome;
			typedef std::future<CreateStatisticsRecordOutcome> CreateStatisticsRecordOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::CreateStatisticsRecordRequest&, const CreateStatisticsRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateStatisticsRecordAsyncHandler;
			typedef Outcome<Error, Model::CreateStatisticsTaskResult> CreateStatisticsTaskOutcome;
			typedef std::future<CreateStatisticsTaskOutcome> CreateStatisticsTaskOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::CreateStatisticsTaskRequest&, const CreateStatisticsTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateStatisticsTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateTaskGroupResult> CreateTaskGroupOutcome;
			typedef std::future<CreateTaskGroupOutcome> CreateTaskGroupOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::CreateTaskGroupRequest&, const CreateTaskGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateUserDepartmentsResult> CreateUserDepartmentsOutcome;
			typedef std::future<CreateUserDepartmentsOutcome> CreateUserDepartmentsOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::CreateUserDepartmentsRequest&, const CreateUserDepartmentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserDepartmentsAsyncHandler;
			typedef Outcome<Error, Model::DeleteAppResult> DeleteAppOutcome;
			typedef std::future<DeleteAppOutcome> DeleteAppOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::DeleteAppRequest&, const DeleteAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAppAsyncHandler;
			typedef Outcome<Error, Model::DeleteDepartmentResult> DeleteDepartmentOutcome;
			typedef std::future<DeleteDepartmentOutcome> DeleteDepartmentOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::DeleteDepartmentRequest&, const DeleteDepartmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDepartmentAsyncHandler;
			typedef Outcome<Error, Model::DeleteRuleResult> DeleteRuleOutcome;
			typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::DeleteRuleRequest&, const DeleteRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserResult> DeleteUserOutcome;
			typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::DeleteUserRequest&, const DeleteUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserDepartmentsResult> DeleteUserDepartmentsOutcome;
			typedef std::future<DeleteUserDepartmentsOutcome> DeleteUserDepartmentsOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::DeleteUserDepartmentsRequest&, const DeleteUserDepartmentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserDepartmentsAsyncHandler;
			typedef Outcome<Error, Model::ExitLiveResult> ExitLiveOutcome;
			typedef std::future<ExitLiveOutcome> ExitLiveOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::ExitLiveRequest&, const ExitLiveOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExitLiveAsyncHandler;
			typedef Outcome<Error, Model::GetAppResult> GetAppOutcome;
			typedef std::future<GetAppOutcome> GetAppOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::GetAppRequest&, const GetAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAppAsyncHandler;
			typedef Outcome<Error, Model::GetDepartmentResult> GetDepartmentOutcome;
			typedef std::future<GetDepartmentOutcome> GetDepartmentOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::GetDepartmentRequest&, const GetDepartmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDepartmentAsyncHandler;
			typedef Outcome<Error, Model::GetDetectEvaluationResult> GetDetectEvaluationOutcome;
			typedef std::future<GetDetectEvaluationOutcome> GetDetectEvaluationOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::GetDetectEvaluationRequest&, const GetDetectEvaluationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDetectEvaluationAsyncHandler;
			typedef Outcome<Error, Model::GetDetectionResult> GetDetectionOutcome;
			typedef std::future<GetDetectionOutcome> GetDetectionOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::GetDetectionRequest&, const GetDetectionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDetectionAsyncHandler;
			typedef Outcome<Error, Model::GetModelSignedUrlResult> GetModelSignedUrlOutcome;
			typedef std::future<GetModelSignedUrlOutcome> GetModelSignedUrlOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::GetModelSignedUrlRequest&, const GetModelSignedUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetModelSignedUrlAsyncHandler;
			typedef Outcome<Error, Model::GetPreSignedUrlResult> GetPreSignedUrlOutcome;
			typedef std::future<GetPreSignedUrlOutcome> GetPreSignedUrlOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::GetPreSignedUrlRequest&, const GetPreSignedUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPreSignedUrlAsyncHandler;
			typedef Outcome<Error, Model::GetRuleResult> GetRuleOutcome;
			typedef std::future<GetRuleOutcome> GetRuleOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::GetRuleRequest&, const GetRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRuleAsyncHandler;
			typedef Outcome<Error, Model::GetServiceConfigurationResult> GetServiceConfigurationOutcome;
			typedef std::future<GetServiceConfigurationOutcome> GetServiceConfigurationOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::GetServiceConfigurationRequest&, const GetServiceConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceConfigurationAsyncHandler;
			typedef Outcome<Error, Model::GetSignedUrlResult> GetSignedUrlOutcome;
			typedef std::future<GetSignedUrlOutcome> GetSignedUrlOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::GetSignedUrlRequest&, const GetSignedUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSignedUrlAsyncHandler;
			typedef Outcome<Error, Model::GetSlrConfigurationResult> GetSlrConfigurationOutcome;
			typedef std::future<GetSlrConfigurationOutcome> GetSlrConfigurationOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::GetSlrConfigurationRequest&, const GetSlrConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSlrConfigurationAsyncHandler;
			typedef Outcome<Error, Model::GetStatisticsResult> GetStatisticsOutcome;
			typedef std::future<GetStatisticsOutcome> GetStatisticsOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::GetStatisticsRequest&, const GetStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetStatisticsAsyncHandler;
			typedef Outcome<Error, Model::GetTaskResult> GetTaskOutcome;
			typedef std::future<GetTaskOutcome> GetTaskOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::GetTaskRequest&, const GetTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTaskAsyncHandler;
			typedef Outcome<Error, Model::GetTaskGroupResult> GetTaskGroupOutcome;
			typedef std::future<GetTaskGroupOutcome> GetTaskGroupOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::GetTaskGroupRequest&, const GetTaskGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTaskGroupAsyncHandler;
			typedef Outcome<Error, Model::GetUserResult> GetUserOutcome;
			typedef std::future<GetUserOutcome> GetUserOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::GetUserRequest&, const GetUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserAsyncHandler;
			typedef Outcome<Error, Model::InitializeServiceLinkedRoleResult> InitializeServiceLinkedRoleOutcome;
			typedef std::future<InitializeServiceLinkedRoleOutcome> InitializeServiceLinkedRoleOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::InitializeServiceLinkedRoleRequest&, const InitializeServiceLinkedRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InitializeServiceLinkedRoleAsyncHandler;
			typedef Outcome<Error, Model::JoinLiveResult> JoinLiveOutcome;
			typedef std::future<JoinLiveOutcome> JoinLiveOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::JoinLiveRequest&, const JoinLiveOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> JoinLiveAsyncHandler;
			typedef Outcome<Error, Model::ListAppsResult> ListAppsOutcome;
			typedef std::future<ListAppsOutcome> ListAppsOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::ListAppsRequest&, const ListAppsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAppsAsyncHandler;
			typedef Outcome<Error, Model::ListDepartmentsResult> ListDepartmentsOutcome;
			typedef std::future<ListDepartmentsOutcome> ListDepartmentsOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::ListDepartmentsRequest&, const ListDepartmentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDepartmentsAsyncHandler;
			typedef Outcome<Error, Model::ListDetectionsResult> ListDetectionsOutcome;
			typedef std::future<ListDetectionsOutcome> ListDetectionsOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::ListDetectionsRequest&, const ListDetectionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDetectionsAsyncHandler;
			typedef Outcome<Error, Model::ListFilesResult> ListFilesOutcome;
			typedef std::future<ListFilesOutcome> ListFilesOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::ListFilesRequest&, const ListFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFilesAsyncHandler;
			typedef Outcome<Error, Model::ListLivesResult> ListLivesOutcome;
			typedef std::future<ListLivesOutcome> ListLivesOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::ListLivesRequest&, const ListLivesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLivesAsyncHandler;
			typedef Outcome<Error, Model::ListRolesResult> ListRolesOutcome;
			typedef std::future<ListRolesOutcome> ListRolesOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::ListRolesRequest&, const ListRolesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRolesAsyncHandler;
			typedef Outcome<Error, Model::ListRulesResult> ListRulesOutcome;
			typedef std::future<ListRulesOutcome> ListRulesOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::ListRulesRequest&, const ListRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRulesAsyncHandler;
			typedef Outcome<Error, Model::ListStatisticsTaskResult> ListStatisticsTaskOutcome;
			typedef std::future<ListStatisticsTaskOutcome> ListStatisticsTaskOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::ListStatisticsTaskRequest&, const ListStatisticsTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListStatisticsTaskAsyncHandler;
			typedef Outcome<Error, Model::ListTaskGroupsResult> ListTaskGroupsOutcome;
			typedef std::future<ListTaskGroupsOutcome> ListTaskGroupsOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::ListTaskGroupsRequest&, const ListTaskGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTaskGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListTaskItemsResult> ListTaskItemsOutcome;
			typedef std::future<ListTaskItemsOutcome> ListTaskItemsOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::ListTaskItemsRequest&, const ListTaskItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTaskItemsAsyncHandler;
			typedef Outcome<Error, Model::ListTasksResult> ListTasksOutcome;
			typedef std::future<ListTasksOutcome> ListTasksOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::ListTasksRequest&, const ListTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTasksAsyncHandler;
			typedef Outcome<Error, Model::ListUsersResult> ListUsersOutcome;
			typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::ListUsersRequest&, const ListUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUsersAsyncHandler;
			typedef Outcome<Error, Model::UpdateAppResult> UpdateAppOutcome;
			typedef std::future<UpdateAppOutcome> UpdateAppOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::UpdateAppRequest&, const UpdateAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAppAsyncHandler;
			typedef Outcome<Error, Model::UpdateDepartmentResult> UpdateDepartmentOutcome;
			typedef std::future<UpdateDepartmentOutcome> UpdateDepartmentOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::UpdateDepartmentRequest&, const UpdateDepartmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDepartmentAsyncHandler;
			typedef Outcome<Error, Model::UpdateLiveResult> UpdateLiveOutcome;
			typedef std::future<UpdateLiveOutcome> UpdateLiveOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::UpdateLiveRequest&, const UpdateLiveOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLiveAsyncHandler;
			typedef Outcome<Error, Model::UpdateRuleResult> UpdateRuleOutcome;
			typedef std::future<UpdateRuleOutcome> UpdateRuleOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::UpdateRuleRequest&, const UpdateRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRuleAsyncHandler;
			typedef Outcome<Error, Model::UpdateServiceConfigurationResult> UpdateServiceConfigurationOutcome;
			typedef std::future<UpdateServiceConfigurationOutcome> UpdateServiceConfigurationOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::UpdateServiceConfigurationRequest&, const UpdateServiceConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateServiceConfigurationAsyncHandler;
			typedef Outcome<Error, Model::UpdateSlrConfigurationResult> UpdateSlrConfigurationOutcome;
			typedef std::future<UpdateSlrConfigurationOutcome> UpdateSlrConfigurationOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::UpdateSlrConfigurationRequest&, const UpdateSlrConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSlrConfigurationAsyncHandler;
			typedef Outcome<Error, Model::UpdateUserResult> UpdateUserOutcome;
			typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
			typedef std::function<void(const IdrsserviceClient*, const Model::UpdateUserRequest&, const UpdateUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserAsyncHandler;

			IdrsserviceClient(const Credentials &credentials, const ClientConfiguration &configuration);
			IdrsserviceClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			IdrsserviceClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~IdrsserviceClient();
			CheckServiceLinkedRoleOutcome checkServiceLinkedRole(const Model::CheckServiceLinkedRoleRequest &request)const;
			void checkServiceLinkedRoleAsync(const Model::CheckServiceLinkedRoleRequest& request, const CheckServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckServiceLinkedRoleOutcomeCallable checkServiceLinkedRoleCallable(const Model::CheckServiceLinkedRoleRequest& request) const;
			CreateAppOutcome createApp(const Model::CreateAppRequest &request)const;
			void createAppAsync(const Model::CreateAppRequest& request, const CreateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAppOutcomeCallable createAppCallable(const Model::CreateAppRequest& request) const;
			CreateDepartmentOutcome createDepartment(const Model::CreateDepartmentRequest &request)const;
			void createDepartmentAsync(const Model::CreateDepartmentRequest& request, const CreateDepartmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDepartmentOutcomeCallable createDepartmentCallable(const Model::CreateDepartmentRequest& request) const;
			CreateLiveOutcome createLive(const Model::CreateLiveRequest &request)const;
			void createLiveAsync(const Model::CreateLiveRequest& request, const CreateLiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLiveOutcomeCallable createLiveCallable(const Model::CreateLiveRequest& request) const;
			CreateLiveDetectionOutcome createLiveDetection(const Model::CreateLiveDetectionRequest &request)const;
			void createLiveDetectionAsync(const Model::CreateLiveDetectionRequest& request, const CreateLiveDetectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLiveDetectionOutcomeCallable createLiveDetectionCallable(const Model::CreateLiveDetectionRequest& request) const;
			CreateRuleOutcome createRule(const Model::CreateRuleRequest &request)const;
			void createRuleAsync(const Model::CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRuleOutcomeCallable createRuleCallable(const Model::CreateRuleRequest& request) const;
			CreateStatisticsRecordOutcome createStatisticsRecord(const Model::CreateStatisticsRecordRequest &request)const;
			void createStatisticsRecordAsync(const Model::CreateStatisticsRecordRequest& request, const CreateStatisticsRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateStatisticsRecordOutcomeCallable createStatisticsRecordCallable(const Model::CreateStatisticsRecordRequest& request) const;
			CreateStatisticsTaskOutcome createStatisticsTask(const Model::CreateStatisticsTaskRequest &request)const;
			void createStatisticsTaskAsync(const Model::CreateStatisticsTaskRequest& request, const CreateStatisticsTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateStatisticsTaskOutcomeCallable createStatisticsTaskCallable(const Model::CreateStatisticsTaskRequest& request) const;
			CreateTaskGroupOutcome createTaskGroup(const Model::CreateTaskGroupRequest &request)const;
			void createTaskGroupAsync(const Model::CreateTaskGroupRequest& request, const CreateTaskGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTaskGroupOutcomeCallable createTaskGroupCallable(const Model::CreateTaskGroupRequest& request) const;
			CreateUserDepartmentsOutcome createUserDepartments(const Model::CreateUserDepartmentsRequest &request)const;
			void createUserDepartmentsAsync(const Model::CreateUserDepartmentsRequest& request, const CreateUserDepartmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUserDepartmentsOutcomeCallable createUserDepartmentsCallable(const Model::CreateUserDepartmentsRequest& request) const;
			DeleteAppOutcome deleteApp(const Model::DeleteAppRequest &request)const;
			void deleteAppAsync(const Model::DeleteAppRequest& request, const DeleteAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAppOutcomeCallable deleteAppCallable(const Model::DeleteAppRequest& request) const;
			DeleteDepartmentOutcome deleteDepartment(const Model::DeleteDepartmentRequest &request)const;
			void deleteDepartmentAsync(const Model::DeleteDepartmentRequest& request, const DeleteDepartmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDepartmentOutcomeCallable deleteDepartmentCallable(const Model::DeleteDepartmentRequest& request) const;
			DeleteRuleOutcome deleteRule(const Model::DeleteRuleRequest &request)const;
			void deleteRuleAsync(const Model::DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRuleOutcomeCallable deleteRuleCallable(const Model::DeleteRuleRequest& request) const;
			DeleteUserOutcome deleteUser(const Model::DeleteUserRequest &request)const;
			void deleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserOutcomeCallable deleteUserCallable(const Model::DeleteUserRequest& request) const;
			DeleteUserDepartmentsOutcome deleteUserDepartments(const Model::DeleteUserDepartmentsRequest &request)const;
			void deleteUserDepartmentsAsync(const Model::DeleteUserDepartmentsRequest& request, const DeleteUserDepartmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserDepartmentsOutcomeCallable deleteUserDepartmentsCallable(const Model::DeleteUserDepartmentsRequest& request) const;
			ExitLiveOutcome exitLive(const Model::ExitLiveRequest &request)const;
			void exitLiveAsync(const Model::ExitLiveRequest& request, const ExitLiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExitLiveOutcomeCallable exitLiveCallable(const Model::ExitLiveRequest& request) const;
			GetAppOutcome getApp(const Model::GetAppRequest &request)const;
			void getAppAsync(const Model::GetAppRequest& request, const GetAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAppOutcomeCallable getAppCallable(const Model::GetAppRequest& request) const;
			GetDepartmentOutcome getDepartment(const Model::GetDepartmentRequest &request)const;
			void getDepartmentAsync(const Model::GetDepartmentRequest& request, const GetDepartmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDepartmentOutcomeCallable getDepartmentCallable(const Model::GetDepartmentRequest& request) const;
			GetDetectEvaluationOutcome getDetectEvaluation(const Model::GetDetectEvaluationRequest &request)const;
			void getDetectEvaluationAsync(const Model::GetDetectEvaluationRequest& request, const GetDetectEvaluationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDetectEvaluationOutcomeCallable getDetectEvaluationCallable(const Model::GetDetectEvaluationRequest& request) const;
			GetDetectionOutcome getDetection(const Model::GetDetectionRequest &request)const;
			void getDetectionAsync(const Model::GetDetectionRequest& request, const GetDetectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDetectionOutcomeCallable getDetectionCallable(const Model::GetDetectionRequest& request) const;
			GetModelSignedUrlOutcome getModelSignedUrl(const Model::GetModelSignedUrlRequest &request)const;
			void getModelSignedUrlAsync(const Model::GetModelSignedUrlRequest& request, const GetModelSignedUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetModelSignedUrlOutcomeCallable getModelSignedUrlCallable(const Model::GetModelSignedUrlRequest& request) const;
			GetPreSignedUrlOutcome getPreSignedUrl(const Model::GetPreSignedUrlRequest &request)const;
			void getPreSignedUrlAsync(const Model::GetPreSignedUrlRequest& request, const GetPreSignedUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPreSignedUrlOutcomeCallable getPreSignedUrlCallable(const Model::GetPreSignedUrlRequest& request) const;
			GetRuleOutcome getRule(const Model::GetRuleRequest &request)const;
			void getRuleAsync(const Model::GetRuleRequest& request, const GetRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRuleOutcomeCallable getRuleCallable(const Model::GetRuleRequest& request) const;
			GetServiceConfigurationOutcome getServiceConfiguration(const Model::GetServiceConfigurationRequest &request)const;
			void getServiceConfigurationAsync(const Model::GetServiceConfigurationRequest& request, const GetServiceConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetServiceConfigurationOutcomeCallable getServiceConfigurationCallable(const Model::GetServiceConfigurationRequest& request) const;
			GetSignedUrlOutcome getSignedUrl(const Model::GetSignedUrlRequest &request)const;
			void getSignedUrlAsync(const Model::GetSignedUrlRequest& request, const GetSignedUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSignedUrlOutcomeCallable getSignedUrlCallable(const Model::GetSignedUrlRequest& request) const;
			GetSlrConfigurationOutcome getSlrConfiguration(const Model::GetSlrConfigurationRequest &request)const;
			void getSlrConfigurationAsync(const Model::GetSlrConfigurationRequest& request, const GetSlrConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSlrConfigurationOutcomeCallable getSlrConfigurationCallable(const Model::GetSlrConfigurationRequest& request) const;
			GetStatisticsOutcome getStatistics(const Model::GetStatisticsRequest &request)const;
			void getStatisticsAsync(const Model::GetStatisticsRequest& request, const GetStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetStatisticsOutcomeCallable getStatisticsCallable(const Model::GetStatisticsRequest& request) const;
			GetTaskOutcome getTask(const Model::GetTaskRequest &request)const;
			void getTaskAsync(const Model::GetTaskRequest& request, const GetTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTaskOutcomeCallable getTaskCallable(const Model::GetTaskRequest& request) const;
			GetTaskGroupOutcome getTaskGroup(const Model::GetTaskGroupRequest &request)const;
			void getTaskGroupAsync(const Model::GetTaskGroupRequest& request, const GetTaskGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTaskGroupOutcomeCallable getTaskGroupCallable(const Model::GetTaskGroupRequest& request) const;
			GetUserOutcome getUser(const Model::GetUserRequest &request)const;
			void getUserAsync(const Model::GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserOutcomeCallable getUserCallable(const Model::GetUserRequest& request) const;
			InitializeServiceLinkedRoleOutcome initializeServiceLinkedRole(const Model::InitializeServiceLinkedRoleRequest &request)const;
			void initializeServiceLinkedRoleAsync(const Model::InitializeServiceLinkedRoleRequest& request, const InitializeServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InitializeServiceLinkedRoleOutcomeCallable initializeServiceLinkedRoleCallable(const Model::InitializeServiceLinkedRoleRequest& request) const;
			JoinLiveOutcome joinLive(const Model::JoinLiveRequest &request)const;
			void joinLiveAsync(const Model::JoinLiveRequest& request, const JoinLiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			JoinLiveOutcomeCallable joinLiveCallable(const Model::JoinLiveRequest& request) const;
			ListAppsOutcome listApps(const Model::ListAppsRequest &request)const;
			void listAppsAsync(const Model::ListAppsRequest& request, const ListAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAppsOutcomeCallable listAppsCallable(const Model::ListAppsRequest& request) const;
			ListDepartmentsOutcome listDepartments(const Model::ListDepartmentsRequest &request)const;
			void listDepartmentsAsync(const Model::ListDepartmentsRequest& request, const ListDepartmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDepartmentsOutcomeCallable listDepartmentsCallable(const Model::ListDepartmentsRequest& request) const;
			ListDetectionsOutcome listDetections(const Model::ListDetectionsRequest &request)const;
			void listDetectionsAsync(const Model::ListDetectionsRequest& request, const ListDetectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDetectionsOutcomeCallable listDetectionsCallable(const Model::ListDetectionsRequest& request) const;
			ListFilesOutcome listFiles(const Model::ListFilesRequest &request)const;
			void listFilesAsync(const Model::ListFilesRequest& request, const ListFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFilesOutcomeCallable listFilesCallable(const Model::ListFilesRequest& request) const;
			ListLivesOutcome listLives(const Model::ListLivesRequest &request)const;
			void listLivesAsync(const Model::ListLivesRequest& request, const ListLivesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLivesOutcomeCallable listLivesCallable(const Model::ListLivesRequest& request) const;
			ListRolesOutcome listRoles(const Model::ListRolesRequest &request)const;
			void listRolesAsync(const Model::ListRolesRequest& request, const ListRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRolesOutcomeCallable listRolesCallable(const Model::ListRolesRequest& request) const;
			ListRulesOutcome listRules(const Model::ListRulesRequest &request)const;
			void listRulesAsync(const Model::ListRulesRequest& request, const ListRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRulesOutcomeCallable listRulesCallable(const Model::ListRulesRequest& request) const;
			ListStatisticsTaskOutcome listStatisticsTask(const Model::ListStatisticsTaskRequest &request)const;
			void listStatisticsTaskAsync(const Model::ListStatisticsTaskRequest& request, const ListStatisticsTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListStatisticsTaskOutcomeCallable listStatisticsTaskCallable(const Model::ListStatisticsTaskRequest& request) const;
			ListTaskGroupsOutcome listTaskGroups(const Model::ListTaskGroupsRequest &request)const;
			void listTaskGroupsAsync(const Model::ListTaskGroupsRequest& request, const ListTaskGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTaskGroupsOutcomeCallable listTaskGroupsCallable(const Model::ListTaskGroupsRequest& request) const;
			ListTaskItemsOutcome listTaskItems(const Model::ListTaskItemsRequest &request)const;
			void listTaskItemsAsync(const Model::ListTaskItemsRequest& request, const ListTaskItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTaskItemsOutcomeCallable listTaskItemsCallable(const Model::ListTaskItemsRequest& request) const;
			ListTasksOutcome listTasks(const Model::ListTasksRequest &request)const;
			void listTasksAsync(const Model::ListTasksRequest& request, const ListTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTasksOutcomeCallable listTasksCallable(const Model::ListTasksRequest& request) const;
			ListUsersOutcome listUsers(const Model::ListUsersRequest &request)const;
			void listUsersAsync(const Model::ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUsersOutcomeCallable listUsersCallable(const Model::ListUsersRequest& request) const;
			UpdateAppOutcome updateApp(const Model::UpdateAppRequest &request)const;
			void updateAppAsync(const Model::UpdateAppRequest& request, const UpdateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAppOutcomeCallable updateAppCallable(const Model::UpdateAppRequest& request) const;
			UpdateDepartmentOutcome updateDepartment(const Model::UpdateDepartmentRequest &request)const;
			void updateDepartmentAsync(const Model::UpdateDepartmentRequest& request, const UpdateDepartmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDepartmentOutcomeCallable updateDepartmentCallable(const Model::UpdateDepartmentRequest& request) const;
			UpdateLiveOutcome updateLive(const Model::UpdateLiveRequest &request)const;
			void updateLiveAsync(const Model::UpdateLiveRequest& request, const UpdateLiveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLiveOutcomeCallable updateLiveCallable(const Model::UpdateLiveRequest& request) const;
			UpdateRuleOutcome updateRule(const Model::UpdateRuleRequest &request)const;
			void updateRuleAsync(const Model::UpdateRuleRequest& request, const UpdateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRuleOutcomeCallable updateRuleCallable(const Model::UpdateRuleRequest& request) const;
			UpdateServiceConfigurationOutcome updateServiceConfiguration(const Model::UpdateServiceConfigurationRequest &request)const;
			void updateServiceConfigurationAsync(const Model::UpdateServiceConfigurationRequest& request, const UpdateServiceConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateServiceConfigurationOutcomeCallable updateServiceConfigurationCallable(const Model::UpdateServiceConfigurationRequest& request) const;
			UpdateSlrConfigurationOutcome updateSlrConfiguration(const Model::UpdateSlrConfigurationRequest &request)const;
			void updateSlrConfigurationAsync(const Model::UpdateSlrConfigurationRequest& request, const UpdateSlrConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSlrConfigurationOutcomeCallable updateSlrConfigurationCallable(const Model::UpdateSlrConfigurationRequest& request) const;
			UpdateUserOutcome updateUser(const Model::UpdateUserRequest &request)const;
			void updateUserAsync(const Model::UpdateUserRequest& request, const UpdateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateUserOutcomeCallable updateUserCallable(const Model::UpdateUserRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_IDRSSERVICE_IDRSSERVICECLIENT_H_
