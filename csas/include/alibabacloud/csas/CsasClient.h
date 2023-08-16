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

#ifndef ALIBABACLOUD_CSAS_CSASCLIENT_H_
#define ALIBABACLOUD_CSAS_CSASCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "CsasExport.h"
#include "model/AttachApplication2ConnectorRequest.h"
#include "model/AttachApplication2ConnectorResult.h"
#include "model/CreateDynamicRouteRequest.h"
#include "model/CreateDynamicRouteResult.h"
#include "model/CreatePrivateAccessApplicationRequest.h"
#include "model/CreatePrivateAccessApplicationResult.h"
#include "model/CreatePrivateAccessPolicyRequest.h"
#include "model/CreatePrivateAccessPolicyResult.h"
#include "model/CreatePrivateAccessTagRequest.h"
#include "model/CreatePrivateAccessTagResult.h"
#include "model/CreateUserGroupRequest.h"
#include "model/CreateUserGroupResult.h"
#include "model/DeleteDynamicRouteRequest.h"
#include "model/DeleteDynamicRouteResult.h"
#include "model/DeletePrivateAccessApplicationRequest.h"
#include "model/DeletePrivateAccessApplicationResult.h"
#include "model/DeletePrivateAccessPolicyRequest.h"
#include "model/DeletePrivateAccessPolicyResult.h"
#include "model/DeletePrivateAccessTagRequest.h"
#include "model/DeletePrivateAccessTagResult.h"
#include "model/DeleteUserGroupRequest.h"
#include "model/DeleteUserGroupResult.h"
#include "model/DetachApplication2ConnectorRequest.h"
#include "model/DetachApplication2ConnectorResult.h"
#include "model/GetDynamicRouteRequest.h"
#include "model/GetDynamicRouteResult.h"
#include "model/GetPrivateAccessApplicationRequest.h"
#include "model/GetPrivateAccessApplicationResult.h"
#include "model/GetPrivateAccessPolicyRequest.h"
#include "model/GetPrivateAccessPolicyResult.h"
#include "model/GetUserGroupRequest.h"
#include "model/GetUserGroupResult.h"
#include "model/ListApplicationsForPrivateAccessPolicyRequest.h"
#include "model/ListApplicationsForPrivateAccessPolicyResult.h"
#include "model/ListApplicationsForPrivateAccessTagRequest.h"
#include "model/ListApplicationsForPrivateAccessTagResult.h"
#include "model/ListConnectorsRequest.h"
#include "model/ListConnectorsResult.h"
#include "model/ListDynamicRouteRegionsRequest.h"
#include "model/ListDynamicRouteRegionsResult.h"
#include "model/ListDynamicRoutesRequest.h"
#include "model/ListDynamicRoutesResult.h"
#include "model/ListPolicesForPrivateAccessApplicationRequest.h"
#include "model/ListPolicesForPrivateAccessApplicationResult.h"
#include "model/ListPolicesForPrivateAccessTagRequest.h"
#include "model/ListPolicesForPrivateAccessTagResult.h"
#include "model/ListPolicesForUserGroupRequest.h"
#include "model/ListPolicesForUserGroupResult.h"
#include "model/ListPrivateAccessApplicationsRequest.h"
#include "model/ListPrivateAccessApplicationsResult.h"
#include "model/ListPrivateAccessApplicationsForDynamicRouteRequest.h"
#include "model/ListPrivateAccessApplicationsForDynamicRouteResult.h"
#include "model/ListPrivateAccessPolicesRequest.h"
#include "model/ListPrivateAccessPolicesResult.h"
#include "model/ListPrivateAccessTagsRequest.h"
#include "model/ListPrivateAccessTagsResult.h"
#include "model/ListPrivateAccessTagsForDynamicRouteRequest.h"
#include "model/ListPrivateAccessTagsForDynamicRouteResult.h"
#include "model/ListTagsForPrivateAccessApplicationRequest.h"
#include "model/ListTagsForPrivateAccessApplicationResult.h"
#include "model/ListTagsForPrivateAccessPolicyRequest.h"
#include "model/ListTagsForPrivateAccessPolicyResult.h"
#include "model/ListUserGroupsRequest.h"
#include "model/ListUserGroupsResult.h"
#include "model/ListUserGroupsForPrivateAccessPolicyRequest.h"
#include "model/ListUserGroupsForPrivateAccessPolicyResult.h"
#include "model/UpdateDynamicRouteRequest.h"
#include "model/UpdateDynamicRouteResult.h"
#include "model/UpdatePrivateAccessApplicationRequest.h"
#include "model/UpdatePrivateAccessApplicationResult.h"
#include "model/UpdatePrivateAccessPolicyRequest.h"
#include "model/UpdatePrivateAccessPolicyResult.h"
#include "model/UpdateUserGroupRequest.h"
#include "model/UpdateUserGroupResult.h"


namespace AlibabaCloud
{
	namespace Csas
	{
		class ALIBABACLOUD_CSAS_EXPORT CsasClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AttachApplication2ConnectorResult> AttachApplication2ConnectorOutcome;
			typedef std::future<AttachApplication2ConnectorOutcome> AttachApplication2ConnectorOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::AttachApplication2ConnectorRequest&, const AttachApplication2ConnectorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachApplication2ConnectorAsyncHandler;
			typedef Outcome<Error, Model::CreateDynamicRouteResult> CreateDynamicRouteOutcome;
			typedef std::future<CreateDynamicRouteOutcome> CreateDynamicRouteOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::CreateDynamicRouteRequest&, const CreateDynamicRouteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDynamicRouteAsyncHandler;
			typedef Outcome<Error, Model::CreatePrivateAccessApplicationResult> CreatePrivateAccessApplicationOutcome;
			typedef std::future<CreatePrivateAccessApplicationOutcome> CreatePrivateAccessApplicationOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::CreatePrivateAccessApplicationRequest&, const CreatePrivateAccessApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrivateAccessApplicationAsyncHandler;
			typedef Outcome<Error, Model::CreatePrivateAccessPolicyResult> CreatePrivateAccessPolicyOutcome;
			typedef std::future<CreatePrivateAccessPolicyOutcome> CreatePrivateAccessPolicyOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::CreatePrivateAccessPolicyRequest&, const CreatePrivateAccessPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrivateAccessPolicyAsyncHandler;
			typedef Outcome<Error, Model::CreatePrivateAccessTagResult> CreatePrivateAccessTagOutcome;
			typedef std::future<CreatePrivateAccessTagOutcome> CreatePrivateAccessTagOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::CreatePrivateAccessTagRequest&, const CreatePrivateAccessTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrivateAccessTagAsyncHandler;
			typedef Outcome<Error, Model::CreateUserGroupResult> CreateUserGroupOutcome;
			typedef std::future<CreateUserGroupOutcome> CreateUserGroupOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::CreateUserGroupRequest&, const CreateUserGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateUserGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteDynamicRouteResult> DeleteDynamicRouteOutcome;
			typedef std::future<DeleteDynamicRouteOutcome> DeleteDynamicRouteOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::DeleteDynamicRouteRequest&, const DeleteDynamicRouteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDynamicRouteAsyncHandler;
			typedef Outcome<Error, Model::DeletePrivateAccessApplicationResult> DeletePrivateAccessApplicationOutcome;
			typedef std::future<DeletePrivateAccessApplicationOutcome> DeletePrivateAccessApplicationOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::DeletePrivateAccessApplicationRequest&, const DeletePrivateAccessApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrivateAccessApplicationAsyncHandler;
			typedef Outcome<Error, Model::DeletePrivateAccessPolicyResult> DeletePrivateAccessPolicyOutcome;
			typedef std::future<DeletePrivateAccessPolicyOutcome> DeletePrivateAccessPolicyOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::DeletePrivateAccessPolicyRequest&, const DeletePrivateAccessPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrivateAccessPolicyAsyncHandler;
			typedef Outcome<Error, Model::DeletePrivateAccessTagResult> DeletePrivateAccessTagOutcome;
			typedef std::future<DeletePrivateAccessTagOutcome> DeletePrivateAccessTagOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::DeletePrivateAccessTagRequest&, const DeletePrivateAccessTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrivateAccessTagAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserGroupResult> DeleteUserGroupOutcome;
			typedef std::future<DeleteUserGroupOutcome> DeleteUserGroupOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::DeleteUserGroupRequest&, const DeleteUserGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserGroupAsyncHandler;
			typedef Outcome<Error, Model::DetachApplication2ConnectorResult> DetachApplication2ConnectorOutcome;
			typedef std::future<DetachApplication2ConnectorOutcome> DetachApplication2ConnectorOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::DetachApplication2ConnectorRequest&, const DetachApplication2ConnectorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachApplication2ConnectorAsyncHandler;
			typedef Outcome<Error, Model::GetDynamicRouteResult> GetDynamicRouteOutcome;
			typedef std::future<GetDynamicRouteOutcome> GetDynamicRouteOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::GetDynamicRouteRequest&, const GetDynamicRouteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDynamicRouteAsyncHandler;
			typedef Outcome<Error, Model::GetPrivateAccessApplicationResult> GetPrivateAccessApplicationOutcome;
			typedef std::future<GetPrivateAccessApplicationOutcome> GetPrivateAccessApplicationOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::GetPrivateAccessApplicationRequest&, const GetPrivateAccessApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPrivateAccessApplicationAsyncHandler;
			typedef Outcome<Error, Model::GetPrivateAccessPolicyResult> GetPrivateAccessPolicyOutcome;
			typedef std::future<GetPrivateAccessPolicyOutcome> GetPrivateAccessPolicyOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::GetPrivateAccessPolicyRequest&, const GetPrivateAccessPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPrivateAccessPolicyAsyncHandler;
			typedef Outcome<Error, Model::GetUserGroupResult> GetUserGroupOutcome;
			typedef std::future<GetUserGroupOutcome> GetUserGroupOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::GetUserGroupRequest&, const GetUserGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserGroupAsyncHandler;
			typedef Outcome<Error, Model::ListApplicationsForPrivateAccessPolicyResult> ListApplicationsForPrivateAccessPolicyOutcome;
			typedef std::future<ListApplicationsForPrivateAccessPolicyOutcome> ListApplicationsForPrivateAccessPolicyOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListApplicationsForPrivateAccessPolicyRequest&, const ListApplicationsForPrivateAccessPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApplicationsForPrivateAccessPolicyAsyncHandler;
			typedef Outcome<Error, Model::ListApplicationsForPrivateAccessTagResult> ListApplicationsForPrivateAccessTagOutcome;
			typedef std::future<ListApplicationsForPrivateAccessTagOutcome> ListApplicationsForPrivateAccessTagOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListApplicationsForPrivateAccessTagRequest&, const ListApplicationsForPrivateAccessTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApplicationsForPrivateAccessTagAsyncHandler;
			typedef Outcome<Error, Model::ListConnectorsResult> ListConnectorsOutcome;
			typedef std::future<ListConnectorsOutcome> ListConnectorsOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListConnectorsRequest&, const ListConnectorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListConnectorsAsyncHandler;
			typedef Outcome<Error, Model::ListDynamicRouteRegionsResult> ListDynamicRouteRegionsOutcome;
			typedef std::future<ListDynamicRouteRegionsOutcome> ListDynamicRouteRegionsOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListDynamicRouteRegionsRequest&, const ListDynamicRouteRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDynamicRouteRegionsAsyncHandler;
			typedef Outcome<Error, Model::ListDynamicRoutesResult> ListDynamicRoutesOutcome;
			typedef std::future<ListDynamicRoutesOutcome> ListDynamicRoutesOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListDynamicRoutesRequest&, const ListDynamicRoutesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDynamicRoutesAsyncHandler;
			typedef Outcome<Error, Model::ListPolicesForPrivateAccessApplicationResult> ListPolicesForPrivateAccessApplicationOutcome;
			typedef std::future<ListPolicesForPrivateAccessApplicationOutcome> ListPolicesForPrivateAccessApplicationOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListPolicesForPrivateAccessApplicationRequest&, const ListPolicesForPrivateAccessApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPolicesForPrivateAccessApplicationAsyncHandler;
			typedef Outcome<Error, Model::ListPolicesForPrivateAccessTagResult> ListPolicesForPrivateAccessTagOutcome;
			typedef std::future<ListPolicesForPrivateAccessTagOutcome> ListPolicesForPrivateAccessTagOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListPolicesForPrivateAccessTagRequest&, const ListPolicesForPrivateAccessTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPolicesForPrivateAccessTagAsyncHandler;
			typedef Outcome<Error, Model::ListPolicesForUserGroupResult> ListPolicesForUserGroupOutcome;
			typedef std::future<ListPolicesForUserGroupOutcome> ListPolicesForUserGroupOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListPolicesForUserGroupRequest&, const ListPolicesForUserGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPolicesForUserGroupAsyncHandler;
			typedef Outcome<Error, Model::ListPrivateAccessApplicationsResult> ListPrivateAccessApplicationsOutcome;
			typedef std::future<ListPrivateAccessApplicationsOutcome> ListPrivateAccessApplicationsOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListPrivateAccessApplicationsRequest&, const ListPrivateAccessApplicationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPrivateAccessApplicationsAsyncHandler;
			typedef Outcome<Error, Model::ListPrivateAccessApplicationsForDynamicRouteResult> ListPrivateAccessApplicationsForDynamicRouteOutcome;
			typedef std::future<ListPrivateAccessApplicationsForDynamicRouteOutcome> ListPrivateAccessApplicationsForDynamicRouteOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListPrivateAccessApplicationsForDynamicRouteRequest&, const ListPrivateAccessApplicationsForDynamicRouteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPrivateAccessApplicationsForDynamicRouteAsyncHandler;
			typedef Outcome<Error, Model::ListPrivateAccessPolicesResult> ListPrivateAccessPolicesOutcome;
			typedef std::future<ListPrivateAccessPolicesOutcome> ListPrivateAccessPolicesOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListPrivateAccessPolicesRequest&, const ListPrivateAccessPolicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPrivateAccessPolicesAsyncHandler;
			typedef Outcome<Error, Model::ListPrivateAccessTagsResult> ListPrivateAccessTagsOutcome;
			typedef std::future<ListPrivateAccessTagsOutcome> ListPrivateAccessTagsOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListPrivateAccessTagsRequest&, const ListPrivateAccessTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPrivateAccessTagsAsyncHandler;
			typedef Outcome<Error, Model::ListPrivateAccessTagsForDynamicRouteResult> ListPrivateAccessTagsForDynamicRouteOutcome;
			typedef std::future<ListPrivateAccessTagsForDynamicRouteOutcome> ListPrivateAccessTagsForDynamicRouteOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListPrivateAccessTagsForDynamicRouteRequest&, const ListPrivateAccessTagsForDynamicRouteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPrivateAccessTagsForDynamicRouteAsyncHandler;
			typedef Outcome<Error, Model::ListTagsForPrivateAccessApplicationResult> ListTagsForPrivateAccessApplicationOutcome;
			typedef std::future<ListTagsForPrivateAccessApplicationOutcome> ListTagsForPrivateAccessApplicationOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListTagsForPrivateAccessApplicationRequest&, const ListTagsForPrivateAccessApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagsForPrivateAccessApplicationAsyncHandler;
			typedef Outcome<Error, Model::ListTagsForPrivateAccessPolicyResult> ListTagsForPrivateAccessPolicyOutcome;
			typedef std::future<ListTagsForPrivateAccessPolicyOutcome> ListTagsForPrivateAccessPolicyOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListTagsForPrivateAccessPolicyRequest&, const ListTagsForPrivateAccessPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagsForPrivateAccessPolicyAsyncHandler;
			typedef Outcome<Error, Model::ListUserGroupsResult> ListUserGroupsOutcome;
			typedef std::future<ListUserGroupsOutcome> ListUserGroupsOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListUserGroupsRequest&, const ListUserGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListUserGroupsForPrivateAccessPolicyResult> ListUserGroupsForPrivateAccessPolicyOutcome;
			typedef std::future<ListUserGroupsForPrivateAccessPolicyOutcome> ListUserGroupsForPrivateAccessPolicyOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::ListUserGroupsForPrivateAccessPolicyRequest&, const ListUserGroupsForPrivateAccessPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserGroupsForPrivateAccessPolicyAsyncHandler;
			typedef Outcome<Error, Model::UpdateDynamicRouteResult> UpdateDynamicRouteOutcome;
			typedef std::future<UpdateDynamicRouteOutcome> UpdateDynamicRouteOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::UpdateDynamicRouteRequest&, const UpdateDynamicRouteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDynamicRouteAsyncHandler;
			typedef Outcome<Error, Model::UpdatePrivateAccessApplicationResult> UpdatePrivateAccessApplicationOutcome;
			typedef std::future<UpdatePrivateAccessApplicationOutcome> UpdatePrivateAccessApplicationOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::UpdatePrivateAccessApplicationRequest&, const UpdatePrivateAccessApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePrivateAccessApplicationAsyncHandler;
			typedef Outcome<Error, Model::UpdatePrivateAccessPolicyResult> UpdatePrivateAccessPolicyOutcome;
			typedef std::future<UpdatePrivateAccessPolicyOutcome> UpdatePrivateAccessPolicyOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::UpdatePrivateAccessPolicyRequest&, const UpdatePrivateAccessPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePrivateAccessPolicyAsyncHandler;
			typedef Outcome<Error, Model::UpdateUserGroupResult> UpdateUserGroupOutcome;
			typedef std::future<UpdateUserGroupOutcome> UpdateUserGroupOutcomeCallable;
			typedef std::function<void(const CsasClient*, const Model::UpdateUserGroupRequest&, const UpdateUserGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateUserGroupAsyncHandler;

			CsasClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CsasClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CsasClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CsasClient();
			AttachApplication2ConnectorOutcome attachApplication2Connector(const Model::AttachApplication2ConnectorRequest &request)const;
			void attachApplication2ConnectorAsync(const Model::AttachApplication2ConnectorRequest& request, const AttachApplication2ConnectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachApplication2ConnectorOutcomeCallable attachApplication2ConnectorCallable(const Model::AttachApplication2ConnectorRequest& request) const;
			CreateDynamicRouteOutcome createDynamicRoute(const Model::CreateDynamicRouteRequest &request)const;
			void createDynamicRouteAsync(const Model::CreateDynamicRouteRequest& request, const CreateDynamicRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDynamicRouteOutcomeCallable createDynamicRouteCallable(const Model::CreateDynamicRouteRequest& request) const;
			CreatePrivateAccessApplicationOutcome createPrivateAccessApplication(const Model::CreatePrivateAccessApplicationRequest &request)const;
			void createPrivateAccessApplicationAsync(const Model::CreatePrivateAccessApplicationRequest& request, const CreatePrivateAccessApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePrivateAccessApplicationOutcomeCallable createPrivateAccessApplicationCallable(const Model::CreatePrivateAccessApplicationRequest& request) const;
			CreatePrivateAccessPolicyOutcome createPrivateAccessPolicy(const Model::CreatePrivateAccessPolicyRequest &request)const;
			void createPrivateAccessPolicyAsync(const Model::CreatePrivateAccessPolicyRequest& request, const CreatePrivateAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePrivateAccessPolicyOutcomeCallable createPrivateAccessPolicyCallable(const Model::CreatePrivateAccessPolicyRequest& request) const;
			CreatePrivateAccessTagOutcome createPrivateAccessTag(const Model::CreatePrivateAccessTagRequest &request)const;
			void createPrivateAccessTagAsync(const Model::CreatePrivateAccessTagRequest& request, const CreatePrivateAccessTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePrivateAccessTagOutcomeCallable createPrivateAccessTagCallable(const Model::CreatePrivateAccessTagRequest& request) const;
			CreateUserGroupOutcome createUserGroup(const Model::CreateUserGroupRequest &request)const;
			void createUserGroupAsync(const Model::CreateUserGroupRequest& request, const CreateUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateUserGroupOutcomeCallable createUserGroupCallable(const Model::CreateUserGroupRequest& request) const;
			DeleteDynamicRouteOutcome deleteDynamicRoute(const Model::DeleteDynamicRouteRequest &request)const;
			void deleteDynamicRouteAsync(const Model::DeleteDynamicRouteRequest& request, const DeleteDynamicRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDynamicRouteOutcomeCallable deleteDynamicRouteCallable(const Model::DeleteDynamicRouteRequest& request) const;
			DeletePrivateAccessApplicationOutcome deletePrivateAccessApplication(const Model::DeletePrivateAccessApplicationRequest &request)const;
			void deletePrivateAccessApplicationAsync(const Model::DeletePrivateAccessApplicationRequest& request, const DeletePrivateAccessApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePrivateAccessApplicationOutcomeCallable deletePrivateAccessApplicationCallable(const Model::DeletePrivateAccessApplicationRequest& request) const;
			DeletePrivateAccessPolicyOutcome deletePrivateAccessPolicy(const Model::DeletePrivateAccessPolicyRequest &request)const;
			void deletePrivateAccessPolicyAsync(const Model::DeletePrivateAccessPolicyRequest& request, const DeletePrivateAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePrivateAccessPolicyOutcomeCallable deletePrivateAccessPolicyCallable(const Model::DeletePrivateAccessPolicyRequest& request) const;
			DeletePrivateAccessTagOutcome deletePrivateAccessTag(const Model::DeletePrivateAccessTagRequest &request)const;
			void deletePrivateAccessTagAsync(const Model::DeletePrivateAccessTagRequest& request, const DeletePrivateAccessTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePrivateAccessTagOutcomeCallable deletePrivateAccessTagCallable(const Model::DeletePrivateAccessTagRequest& request) const;
			DeleteUserGroupOutcome deleteUserGroup(const Model::DeleteUserGroupRequest &request)const;
			void deleteUserGroupAsync(const Model::DeleteUserGroupRequest& request, const DeleteUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserGroupOutcomeCallable deleteUserGroupCallable(const Model::DeleteUserGroupRequest& request) const;
			DetachApplication2ConnectorOutcome detachApplication2Connector(const Model::DetachApplication2ConnectorRequest &request)const;
			void detachApplication2ConnectorAsync(const Model::DetachApplication2ConnectorRequest& request, const DetachApplication2ConnectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachApplication2ConnectorOutcomeCallable detachApplication2ConnectorCallable(const Model::DetachApplication2ConnectorRequest& request) const;
			GetDynamicRouteOutcome getDynamicRoute(const Model::GetDynamicRouteRequest &request)const;
			void getDynamicRouteAsync(const Model::GetDynamicRouteRequest& request, const GetDynamicRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDynamicRouteOutcomeCallable getDynamicRouteCallable(const Model::GetDynamicRouteRequest& request) const;
			GetPrivateAccessApplicationOutcome getPrivateAccessApplication(const Model::GetPrivateAccessApplicationRequest &request)const;
			void getPrivateAccessApplicationAsync(const Model::GetPrivateAccessApplicationRequest& request, const GetPrivateAccessApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPrivateAccessApplicationOutcomeCallable getPrivateAccessApplicationCallable(const Model::GetPrivateAccessApplicationRequest& request) const;
			GetPrivateAccessPolicyOutcome getPrivateAccessPolicy(const Model::GetPrivateAccessPolicyRequest &request)const;
			void getPrivateAccessPolicyAsync(const Model::GetPrivateAccessPolicyRequest& request, const GetPrivateAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPrivateAccessPolicyOutcomeCallable getPrivateAccessPolicyCallable(const Model::GetPrivateAccessPolicyRequest& request) const;
			GetUserGroupOutcome getUserGroup(const Model::GetUserGroupRequest &request)const;
			void getUserGroupAsync(const Model::GetUserGroupRequest& request, const GetUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserGroupOutcomeCallable getUserGroupCallable(const Model::GetUserGroupRequest& request) const;
			ListApplicationsForPrivateAccessPolicyOutcome listApplicationsForPrivateAccessPolicy(const Model::ListApplicationsForPrivateAccessPolicyRequest &request)const;
			void listApplicationsForPrivateAccessPolicyAsync(const Model::ListApplicationsForPrivateAccessPolicyRequest& request, const ListApplicationsForPrivateAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApplicationsForPrivateAccessPolicyOutcomeCallable listApplicationsForPrivateAccessPolicyCallable(const Model::ListApplicationsForPrivateAccessPolicyRequest& request) const;
			ListApplicationsForPrivateAccessTagOutcome listApplicationsForPrivateAccessTag(const Model::ListApplicationsForPrivateAccessTagRequest &request)const;
			void listApplicationsForPrivateAccessTagAsync(const Model::ListApplicationsForPrivateAccessTagRequest& request, const ListApplicationsForPrivateAccessTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApplicationsForPrivateAccessTagOutcomeCallable listApplicationsForPrivateAccessTagCallable(const Model::ListApplicationsForPrivateAccessTagRequest& request) const;
			ListConnectorsOutcome listConnectors(const Model::ListConnectorsRequest &request)const;
			void listConnectorsAsync(const Model::ListConnectorsRequest& request, const ListConnectorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListConnectorsOutcomeCallable listConnectorsCallable(const Model::ListConnectorsRequest& request) const;
			ListDynamicRouteRegionsOutcome listDynamicRouteRegions(const Model::ListDynamicRouteRegionsRequest &request)const;
			void listDynamicRouteRegionsAsync(const Model::ListDynamicRouteRegionsRequest& request, const ListDynamicRouteRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDynamicRouteRegionsOutcomeCallable listDynamicRouteRegionsCallable(const Model::ListDynamicRouteRegionsRequest& request) const;
			ListDynamicRoutesOutcome listDynamicRoutes(const Model::ListDynamicRoutesRequest &request)const;
			void listDynamicRoutesAsync(const Model::ListDynamicRoutesRequest& request, const ListDynamicRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDynamicRoutesOutcomeCallable listDynamicRoutesCallable(const Model::ListDynamicRoutesRequest& request) const;
			ListPolicesForPrivateAccessApplicationOutcome listPolicesForPrivateAccessApplication(const Model::ListPolicesForPrivateAccessApplicationRequest &request)const;
			void listPolicesForPrivateAccessApplicationAsync(const Model::ListPolicesForPrivateAccessApplicationRequest& request, const ListPolicesForPrivateAccessApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPolicesForPrivateAccessApplicationOutcomeCallable listPolicesForPrivateAccessApplicationCallable(const Model::ListPolicesForPrivateAccessApplicationRequest& request) const;
			ListPolicesForPrivateAccessTagOutcome listPolicesForPrivateAccessTag(const Model::ListPolicesForPrivateAccessTagRequest &request)const;
			void listPolicesForPrivateAccessTagAsync(const Model::ListPolicesForPrivateAccessTagRequest& request, const ListPolicesForPrivateAccessTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPolicesForPrivateAccessTagOutcomeCallable listPolicesForPrivateAccessTagCallable(const Model::ListPolicesForPrivateAccessTagRequest& request) const;
			ListPolicesForUserGroupOutcome listPolicesForUserGroup(const Model::ListPolicesForUserGroupRequest &request)const;
			void listPolicesForUserGroupAsync(const Model::ListPolicesForUserGroupRequest& request, const ListPolicesForUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPolicesForUserGroupOutcomeCallable listPolicesForUserGroupCallable(const Model::ListPolicesForUserGroupRequest& request) const;
			ListPrivateAccessApplicationsOutcome listPrivateAccessApplications(const Model::ListPrivateAccessApplicationsRequest &request)const;
			void listPrivateAccessApplicationsAsync(const Model::ListPrivateAccessApplicationsRequest& request, const ListPrivateAccessApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPrivateAccessApplicationsOutcomeCallable listPrivateAccessApplicationsCallable(const Model::ListPrivateAccessApplicationsRequest& request) const;
			ListPrivateAccessApplicationsForDynamicRouteOutcome listPrivateAccessApplicationsForDynamicRoute(const Model::ListPrivateAccessApplicationsForDynamicRouteRequest &request)const;
			void listPrivateAccessApplicationsForDynamicRouteAsync(const Model::ListPrivateAccessApplicationsForDynamicRouteRequest& request, const ListPrivateAccessApplicationsForDynamicRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPrivateAccessApplicationsForDynamicRouteOutcomeCallable listPrivateAccessApplicationsForDynamicRouteCallable(const Model::ListPrivateAccessApplicationsForDynamicRouteRequest& request) const;
			ListPrivateAccessPolicesOutcome listPrivateAccessPolices(const Model::ListPrivateAccessPolicesRequest &request)const;
			void listPrivateAccessPolicesAsync(const Model::ListPrivateAccessPolicesRequest& request, const ListPrivateAccessPolicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPrivateAccessPolicesOutcomeCallable listPrivateAccessPolicesCallable(const Model::ListPrivateAccessPolicesRequest& request) const;
			ListPrivateAccessTagsOutcome listPrivateAccessTags(const Model::ListPrivateAccessTagsRequest &request)const;
			void listPrivateAccessTagsAsync(const Model::ListPrivateAccessTagsRequest& request, const ListPrivateAccessTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPrivateAccessTagsOutcomeCallable listPrivateAccessTagsCallable(const Model::ListPrivateAccessTagsRequest& request) const;
			ListPrivateAccessTagsForDynamicRouteOutcome listPrivateAccessTagsForDynamicRoute(const Model::ListPrivateAccessTagsForDynamicRouteRequest &request)const;
			void listPrivateAccessTagsForDynamicRouteAsync(const Model::ListPrivateAccessTagsForDynamicRouteRequest& request, const ListPrivateAccessTagsForDynamicRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPrivateAccessTagsForDynamicRouteOutcomeCallable listPrivateAccessTagsForDynamicRouteCallable(const Model::ListPrivateAccessTagsForDynamicRouteRequest& request) const;
			ListTagsForPrivateAccessApplicationOutcome listTagsForPrivateAccessApplication(const Model::ListTagsForPrivateAccessApplicationRequest &request)const;
			void listTagsForPrivateAccessApplicationAsync(const Model::ListTagsForPrivateAccessApplicationRequest& request, const ListTagsForPrivateAccessApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagsForPrivateAccessApplicationOutcomeCallable listTagsForPrivateAccessApplicationCallable(const Model::ListTagsForPrivateAccessApplicationRequest& request) const;
			ListTagsForPrivateAccessPolicyOutcome listTagsForPrivateAccessPolicy(const Model::ListTagsForPrivateAccessPolicyRequest &request)const;
			void listTagsForPrivateAccessPolicyAsync(const Model::ListTagsForPrivateAccessPolicyRequest& request, const ListTagsForPrivateAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagsForPrivateAccessPolicyOutcomeCallable listTagsForPrivateAccessPolicyCallable(const Model::ListTagsForPrivateAccessPolicyRequest& request) const;
			ListUserGroupsOutcome listUserGroups(const Model::ListUserGroupsRequest &request)const;
			void listUserGroupsAsync(const Model::ListUserGroupsRequest& request, const ListUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserGroupsOutcomeCallable listUserGroupsCallable(const Model::ListUserGroupsRequest& request) const;
			ListUserGroupsForPrivateAccessPolicyOutcome listUserGroupsForPrivateAccessPolicy(const Model::ListUserGroupsForPrivateAccessPolicyRequest &request)const;
			void listUserGroupsForPrivateAccessPolicyAsync(const Model::ListUserGroupsForPrivateAccessPolicyRequest& request, const ListUserGroupsForPrivateAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserGroupsForPrivateAccessPolicyOutcomeCallable listUserGroupsForPrivateAccessPolicyCallable(const Model::ListUserGroupsForPrivateAccessPolicyRequest& request) const;
			UpdateDynamicRouteOutcome updateDynamicRoute(const Model::UpdateDynamicRouteRequest &request)const;
			void updateDynamicRouteAsync(const Model::UpdateDynamicRouteRequest& request, const UpdateDynamicRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDynamicRouteOutcomeCallable updateDynamicRouteCallable(const Model::UpdateDynamicRouteRequest& request) const;
			UpdatePrivateAccessApplicationOutcome updatePrivateAccessApplication(const Model::UpdatePrivateAccessApplicationRequest &request)const;
			void updatePrivateAccessApplicationAsync(const Model::UpdatePrivateAccessApplicationRequest& request, const UpdatePrivateAccessApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePrivateAccessApplicationOutcomeCallable updatePrivateAccessApplicationCallable(const Model::UpdatePrivateAccessApplicationRequest& request) const;
			UpdatePrivateAccessPolicyOutcome updatePrivateAccessPolicy(const Model::UpdatePrivateAccessPolicyRequest &request)const;
			void updatePrivateAccessPolicyAsync(const Model::UpdatePrivateAccessPolicyRequest& request, const UpdatePrivateAccessPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePrivateAccessPolicyOutcomeCallable updatePrivateAccessPolicyCallable(const Model::UpdatePrivateAccessPolicyRequest& request) const;
			UpdateUserGroupOutcome updateUserGroup(const Model::UpdateUserGroupRequest &request)const;
			void updateUserGroupAsync(const Model::UpdateUserGroupRequest& request, const UpdateUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateUserGroupOutcomeCallable updateUserGroupCallable(const Model::UpdateUserGroupRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CSAS_CSASCLIENT_H_
