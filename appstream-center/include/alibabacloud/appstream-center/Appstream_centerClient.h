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

#ifndef ALIBABACLOUD_APPSTREAM_CENTER_APPSTREAM_CENTERCLIENT_H_
#define ALIBABACLOUD_APPSTREAM_CENTER_APPSTREAM_CENTERCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Appstream_centerExport.h"
#include "model/ApproveOtaTaskRequest.h"
#include "model/ApproveOtaTaskResult.h"
#include "model/AuthorizeInstanceGroupRequest.h"
#include "model/AuthorizeInstanceGroupResult.h"
#include "model/CancelOtaTaskRequest.h"
#include "model/CancelOtaTaskResult.h"
#include "model/CreateAppInstanceGroupRequest.h"
#include "model/CreateAppInstanceGroupResult.h"
#include "model/DeleteAppInstanceGroupRequest.h"
#include "model/DeleteAppInstanceGroupResult.h"
#include "model/DeleteAppInstancesRequest.h"
#include "model/DeleteAppInstancesResult.h"
#include "model/GetAppInstanceGroupRequest.h"
#include "model/GetAppInstanceGroupResult.h"
#include "model/GetConnectionTicketRequest.h"
#include "model/GetConnectionTicketResult.h"
#include "model/GetOtaTaskByTaskIdRequest.h"
#include "model/GetOtaTaskByTaskIdResult.h"
#include "model/GetResourcePriceRequest.h"
#include "model/GetResourcePriceResult.h"
#include "model/GetResourceRenewPriceRequest.h"
#include "model/GetResourceRenewPriceResult.h"
#include "model/ListAppInstanceGroupRequest.h"
#include "model/ListAppInstanceGroupResult.h"
#include "model/ListAppInstancesRequest.h"
#include "model/ListAppInstancesResult.h"
#include "model/ListNodeInstanceTypeRequest.h"
#include "model/ListNodeInstanceTypeResult.h"
#include "model/ListOtaTaskRequest.h"
#include "model/ListOtaTaskResult.h"
#include "model/ListRegionsRequest.h"
#include "model/ListRegionsResult.h"
#include "model/ListTenantConfigRequest.h"
#include "model/ListTenantConfigResult.h"
#include "model/LogOffAllSessionsInAppInstanceGroupRequest.h"
#include "model/LogOffAllSessionsInAppInstanceGroupResult.h"
#include "model/ModifyAppInstanceGroupAttributeRequest.h"
#include "model/ModifyAppInstanceGroupAttributeResult.h"
#include "model/ModifyNodePoolAttributeRequest.h"
#include "model/ModifyNodePoolAttributeResult.h"
#include "model/ModifyTenantConfigRequest.h"
#include "model/ModifyTenantConfigResult.h"
#include "model/PageListAppInstanceGroupUserRequest.h"
#include "model/PageListAppInstanceGroupUserResult.h"
#include "model/RenewAppInstanceGroupRequest.h"
#include "model/RenewAppInstanceGroupResult.h"
#include "model/UnbindRequest.h"
#include "model/UnbindResult.h"
#include "model/UpdateAppInstanceGroupImageRequest.h"
#include "model/UpdateAppInstanceGroupImageResult.h"


namespace AlibabaCloud
{
	namespace Appstream_center
	{
		class ALIBABACLOUD_APPSTREAM_CENTER_EXPORT Appstream_centerClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ApproveOtaTaskResult> ApproveOtaTaskOutcome;
			typedef std::future<ApproveOtaTaskOutcome> ApproveOtaTaskOutcomeCallable;
			typedef std::function<void(const Appstream_centerClient*, const Model::ApproveOtaTaskRequest&, const ApproveOtaTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ApproveOtaTaskAsyncHandler;
			typedef Outcome<Error, Model::AuthorizeInstanceGroupResult> AuthorizeInstanceGroupOutcome;
			typedef std::future<AuthorizeInstanceGroupOutcome> AuthorizeInstanceGroupOutcomeCallable;
			typedef std::function<void(const Appstream_centerClient*, const Model::AuthorizeInstanceGroupRequest&, const AuthorizeInstanceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AuthorizeInstanceGroupAsyncHandler;
			typedef Outcome<Error, Model::CancelOtaTaskResult> CancelOtaTaskOutcome;
			typedef std::future<CancelOtaTaskOutcome> CancelOtaTaskOutcomeCallable;
			typedef std::function<void(const Appstream_centerClient*, const Model::CancelOtaTaskRequest&, const CancelOtaTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CancelOtaTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateAppInstanceGroupResult> CreateAppInstanceGroupOutcome;
			typedef std::future<CreateAppInstanceGroupOutcome> CreateAppInstanceGroupOutcomeCallable;
			typedef std::function<void(const Appstream_centerClient*, const Model::CreateAppInstanceGroupRequest&, const CreateAppInstanceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppInstanceGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteAppInstanceGroupResult> DeleteAppInstanceGroupOutcome;
			typedef std::future<DeleteAppInstanceGroupOutcome> DeleteAppInstanceGroupOutcomeCallable;
			typedef std::function<void(const Appstream_centerClient*, const Model::DeleteAppInstanceGroupRequest&, const DeleteAppInstanceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAppInstanceGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteAppInstancesResult> DeleteAppInstancesOutcome;
			typedef std::future<DeleteAppInstancesOutcome> DeleteAppInstancesOutcomeCallable;
			typedef std::function<void(const Appstream_centerClient*, const Model::DeleteAppInstancesRequest&, const DeleteAppInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAppInstancesAsyncHandler;
			typedef Outcome<Error, Model::GetAppInstanceGroupResult> GetAppInstanceGroupOutcome;
			typedef std::future<GetAppInstanceGroupOutcome> GetAppInstanceGroupOutcomeCallable;
			typedef std::function<void(const Appstream_centerClient*, const Model::GetAppInstanceGroupRequest&, const GetAppInstanceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAppInstanceGroupAsyncHandler;
			typedef Outcome<Error, Model::GetConnectionTicketResult> GetConnectionTicketOutcome;
			typedef std::future<GetConnectionTicketOutcome> GetConnectionTicketOutcomeCallable;
			typedef std::function<void(const Appstream_centerClient*, const Model::GetConnectionTicketRequest&, const GetConnectionTicketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetConnectionTicketAsyncHandler;
			typedef Outcome<Error, Model::GetOtaTaskByTaskIdResult> GetOtaTaskByTaskIdOutcome;
			typedef std::future<GetOtaTaskByTaskIdOutcome> GetOtaTaskByTaskIdOutcomeCallable;
			typedef std::function<void(const Appstream_centerClient*, const Model::GetOtaTaskByTaskIdRequest&, const GetOtaTaskByTaskIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOtaTaskByTaskIdAsyncHandler;
			typedef Outcome<Error, Model::GetResourcePriceResult> GetResourcePriceOutcome;
			typedef std::future<GetResourcePriceOutcome> GetResourcePriceOutcomeCallable;
			typedef std::function<void(const Appstream_centerClient*, const Model::GetResourcePriceRequest&, const GetResourcePriceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetResourcePriceAsyncHandler;
			typedef Outcome<Error, Model::GetResourceRenewPriceResult> GetResourceRenewPriceOutcome;
			typedef std::future<GetResourceRenewPriceOutcome> GetResourceRenewPriceOutcomeCallable;
			typedef std::function<void(const Appstream_centerClient*, const Model::GetResourceRenewPriceRequest&, const GetResourceRenewPriceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetResourceRenewPriceAsyncHandler;
			typedef Outcome<Error, Model::ListAppInstanceGroupResult> ListAppInstanceGroupOutcome;
			typedef std::future<ListAppInstanceGroupOutcome> ListAppInstanceGroupOutcomeCallable;
			typedef std::function<void(const Appstream_centerClient*, const Model::ListAppInstanceGroupRequest&, const ListAppInstanceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAppInstanceGroupAsyncHandler;
			typedef Outcome<Error, Model::ListAppInstancesResult> ListAppInstancesOutcome;
			typedef std::future<ListAppInstancesOutcome> ListAppInstancesOutcomeCallable;
			typedef std::function<void(const Appstream_centerClient*, const Model::ListAppInstancesRequest&, const ListAppInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAppInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListNodeInstanceTypeResult> ListNodeInstanceTypeOutcome;
			typedef std::future<ListNodeInstanceTypeOutcome> ListNodeInstanceTypeOutcomeCallable;
			typedef std::function<void(const Appstream_centerClient*, const Model::ListNodeInstanceTypeRequest&, const ListNodeInstanceTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNodeInstanceTypeAsyncHandler;
			typedef Outcome<Error, Model::ListOtaTaskResult> ListOtaTaskOutcome;
			typedef std::future<ListOtaTaskOutcome> ListOtaTaskOutcomeCallable;
			typedef std::function<void(const Appstream_centerClient*, const Model::ListOtaTaskRequest&, const ListOtaTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOtaTaskAsyncHandler;
			typedef Outcome<Error, Model::ListRegionsResult> ListRegionsOutcome;
			typedef std::future<ListRegionsOutcome> ListRegionsOutcomeCallable;
			typedef std::function<void(const Appstream_centerClient*, const Model::ListRegionsRequest&, const ListRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRegionsAsyncHandler;
			typedef Outcome<Error, Model::ListTenantConfigResult> ListTenantConfigOutcome;
			typedef std::future<ListTenantConfigOutcome> ListTenantConfigOutcomeCallable;
			typedef std::function<void(const Appstream_centerClient*, const Model::ListTenantConfigRequest&, const ListTenantConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTenantConfigAsyncHandler;
			typedef Outcome<Error, Model::LogOffAllSessionsInAppInstanceGroupResult> LogOffAllSessionsInAppInstanceGroupOutcome;
			typedef std::future<LogOffAllSessionsInAppInstanceGroupOutcome> LogOffAllSessionsInAppInstanceGroupOutcomeCallable;
			typedef std::function<void(const Appstream_centerClient*, const Model::LogOffAllSessionsInAppInstanceGroupRequest&, const LogOffAllSessionsInAppInstanceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LogOffAllSessionsInAppInstanceGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyAppInstanceGroupAttributeResult> ModifyAppInstanceGroupAttributeOutcome;
			typedef std::future<ModifyAppInstanceGroupAttributeOutcome> ModifyAppInstanceGroupAttributeOutcomeCallable;
			typedef std::function<void(const Appstream_centerClient*, const Model::ModifyAppInstanceGroupAttributeRequest&, const ModifyAppInstanceGroupAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAppInstanceGroupAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyNodePoolAttributeResult> ModifyNodePoolAttributeOutcome;
			typedef std::future<ModifyNodePoolAttributeOutcome> ModifyNodePoolAttributeOutcomeCallable;
			typedef std::function<void(const Appstream_centerClient*, const Model::ModifyNodePoolAttributeRequest&, const ModifyNodePoolAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNodePoolAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyTenantConfigResult> ModifyTenantConfigOutcome;
			typedef std::future<ModifyTenantConfigOutcome> ModifyTenantConfigOutcomeCallable;
			typedef std::function<void(const Appstream_centerClient*, const Model::ModifyTenantConfigRequest&, const ModifyTenantConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTenantConfigAsyncHandler;
			typedef Outcome<Error, Model::PageListAppInstanceGroupUserResult> PageListAppInstanceGroupUserOutcome;
			typedef std::future<PageListAppInstanceGroupUserOutcome> PageListAppInstanceGroupUserOutcomeCallable;
			typedef std::function<void(const Appstream_centerClient*, const Model::PageListAppInstanceGroupUserRequest&, const PageListAppInstanceGroupUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PageListAppInstanceGroupUserAsyncHandler;
			typedef Outcome<Error, Model::RenewAppInstanceGroupResult> RenewAppInstanceGroupOutcome;
			typedef std::future<RenewAppInstanceGroupOutcome> RenewAppInstanceGroupOutcomeCallable;
			typedef std::function<void(const Appstream_centerClient*, const Model::RenewAppInstanceGroupRequest&, const RenewAppInstanceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RenewAppInstanceGroupAsyncHandler;
			typedef Outcome<Error, Model::UnbindResult> UnbindOutcome;
			typedef std::future<UnbindOutcome> UnbindOutcomeCallable;
			typedef std::function<void(const Appstream_centerClient*, const Model::UnbindRequest&, const UnbindOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindAsyncHandler;
			typedef Outcome<Error, Model::UpdateAppInstanceGroupImageResult> UpdateAppInstanceGroupImageOutcome;
			typedef std::future<UpdateAppInstanceGroupImageOutcome> UpdateAppInstanceGroupImageOutcomeCallable;
			typedef std::function<void(const Appstream_centerClient*, const Model::UpdateAppInstanceGroupImageRequest&, const UpdateAppInstanceGroupImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAppInstanceGroupImageAsyncHandler;

			Appstream_centerClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Appstream_centerClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Appstream_centerClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Appstream_centerClient();
			ApproveOtaTaskOutcome approveOtaTask(const Model::ApproveOtaTaskRequest &request)const;
			void approveOtaTaskAsync(const Model::ApproveOtaTaskRequest& request, const ApproveOtaTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ApproveOtaTaskOutcomeCallable approveOtaTaskCallable(const Model::ApproveOtaTaskRequest& request) const;
			AuthorizeInstanceGroupOutcome authorizeInstanceGroup(const Model::AuthorizeInstanceGroupRequest &request)const;
			void authorizeInstanceGroupAsync(const Model::AuthorizeInstanceGroupRequest& request, const AuthorizeInstanceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AuthorizeInstanceGroupOutcomeCallable authorizeInstanceGroupCallable(const Model::AuthorizeInstanceGroupRequest& request) const;
			CancelOtaTaskOutcome cancelOtaTask(const Model::CancelOtaTaskRequest &request)const;
			void cancelOtaTaskAsync(const Model::CancelOtaTaskRequest& request, const CancelOtaTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CancelOtaTaskOutcomeCallable cancelOtaTaskCallable(const Model::CancelOtaTaskRequest& request) const;
			CreateAppInstanceGroupOutcome createAppInstanceGroup(const Model::CreateAppInstanceGroupRequest &request)const;
			void createAppInstanceGroupAsync(const Model::CreateAppInstanceGroupRequest& request, const CreateAppInstanceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAppInstanceGroupOutcomeCallable createAppInstanceGroupCallable(const Model::CreateAppInstanceGroupRequest& request) const;
			DeleteAppInstanceGroupOutcome deleteAppInstanceGroup(const Model::DeleteAppInstanceGroupRequest &request)const;
			void deleteAppInstanceGroupAsync(const Model::DeleteAppInstanceGroupRequest& request, const DeleteAppInstanceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAppInstanceGroupOutcomeCallable deleteAppInstanceGroupCallable(const Model::DeleteAppInstanceGroupRequest& request) const;
			DeleteAppInstancesOutcome deleteAppInstances(const Model::DeleteAppInstancesRequest &request)const;
			void deleteAppInstancesAsync(const Model::DeleteAppInstancesRequest& request, const DeleteAppInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAppInstancesOutcomeCallable deleteAppInstancesCallable(const Model::DeleteAppInstancesRequest& request) const;
			GetAppInstanceGroupOutcome getAppInstanceGroup(const Model::GetAppInstanceGroupRequest &request)const;
			void getAppInstanceGroupAsync(const Model::GetAppInstanceGroupRequest& request, const GetAppInstanceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAppInstanceGroupOutcomeCallable getAppInstanceGroupCallable(const Model::GetAppInstanceGroupRequest& request) const;
			GetConnectionTicketOutcome getConnectionTicket(const Model::GetConnectionTicketRequest &request)const;
			void getConnectionTicketAsync(const Model::GetConnectionTicketRequest& request, const GetConnectionTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetConnectionTicketOutcomeCallable getConnectionTicketCallable(const Model::GetConnectionTicketRequest& request) const;
			GetOtaTaskByTaskIdOutcome getOtaTaskByTaskId(const Model::GetOtaTaskByTaskIdRequest &request)const;
			void getOtaTaskByTaskIdAsync(const Model::GetOtaTaskByTaskIdRequest& request, const GetOtaTaskByTaskIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOtaTaskByTaskIdOutcomeCallable getOtaTaskByTaskIdCallable(const Model::GetOtaTaskByTaskIdRequest& request) const;
			GetResourcePriceOutcome getResourcePrice(const Model::GetResourcePriceRequest &request)const;
			void getResourcePriceAsync(const Model::GetResourcePriceRequest& request, const GetResourcePriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetResourcePriceOutcomeCallable getResourcePriceCallable(const Model::GetResourcePriceRequest& request) const;
			GetResourceRenewPriceOutcome getResourceRenewPrice(const Model::GetResourceRenewPriceRequest &request)const;
			void getResourceRenewPriceAsync(const Model::GetResourceRenewPriceRequest& request, const GetResourceRenewPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetResourceRenewPriceOutcomeCallable getResourceRenewPriceCallable(const Model::GetResourceRenewPriceRequest& request) const;
			ListAppInstanceGroupOutcome listAppInstanceGroup(const Model::ListAppInstanceGroupRequest &request)const;
			void listAppInstanceGroupAsync(const Model::ListAppInstanceGroupRequest& request, const ListAppInstanceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAppInstanceGroupOutcomeCallable listAppInstanceGroupCallable(const Model::ListAppInstanceGroupRequest& request) const;
			ListAppInstancesOutcome listAppInstances(const Model::ListAppInstancesRequest &request)const;
			void listAppInstancesAsync(const Model::ListAppInstancesRequest& request, const ListAppInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAppInstancesOutcomeCallable listAppInstancesCallable(const Model::ListAppInstancesRequest& request) const;
			ListNodeInstanceTypeOutcome listNodeInstanceType(const Model::ListNodeInstanceTypeRequest &request)const;
			void listNodeInstanceTypeAsync(const Model::ListNodeInstanceTypeRequest& request, const ListNodeInstanceTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNodeInstanceTypeOutcomeCallable listNodeInstanceTypeCallable(const Model::ListNodeInstanceTypeRequest& request) const;
			ListOtaTaskOutcome listOtaTask(const Model::ListOtaTaskRequest &request)const;
			void listOtaTaskAsync(const Model::ListOtaTaskRequest& request, const ListOtaTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOtaTaskOutcomeCallable listOtaTaskCallable(const Model::ListOtaTaskRequest& request) const;
			ListRegionsOutcome listRegions(const Model::ListRegionsRequest &request)const;
			void listRegionsAsync(const Model::ListRegionsRequest& request, const ListRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRegionsOutcomeCallable listRegionsCallable(const Model::ListRegionsRequest& request) const;
			ListTenantConfigOutcome listTenantConfig(const Model::ListTenantConfigRequest &request)const;
			void listTenantConfigAsync(const Model::ListTenantConfigRequest& request, const ListTenantConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTenantConfigOutcomeCallable listTenantConfigCallable(const Model::ListTenantConfigRequest& request) const;
			LogOffAllSessionsInAppInstanceGroupOutcome logOffAllSessionsInAppInstanceGroup(const Model::LogOffAllSessionsInAppInstanceGroupRequest &request)const;
			void logOffAllSessionsInAppInstanceGroupAsync(const Model::LogOffAllSessionsInAppInstanceGroupRequest& request, const LogOffAllSessionsInAppInstanceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LogOffAllSessionsInAppInstanceGroupOutcomeCallable logOffAllSessionsInAppInstanceGroupCallable(const Model::LogOffAllSessionsInAppInstanceGroupRequest& request) const;
			ModifyAppInstanceGroupAttributeOutcome modifyAppInstanceGroupAttribute(const Model::ModifyAppInstanceGroupAttributeRequest &request)const;
			void modifyAppInstanceGroupAttributeAsync(const Model::ModifyAppInstanceGroupAttributeRequest& request, const ModifyAppInstanceGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAppInstanceGroupAttributeOutcomeCallable modifyAppInstanceGroupAttributeCallable(const Model::ModifyAppInstanceGroupAttributeRequest& request) const;
			ModifyNodePoolAttributeOutcome modifyNodePoolAttribute(const Model::ModifyNodePoolAttributeRequest &request)const;
			void modifyNodePoolAttributeAsync(const Model::ModifyNodePoolAttributeRequest& request, const ModifyNodePoolAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyNodePoolAttributeOutcomeCallable modifyNodePoolAttributeCallable(const Model::ModifyNodePoolAttributeRequest& request) const;
			ModifyTenantConfigOutcome modifyTenantConfig(const Model::ModifyTenantConfigRequest &request)const;
			void modifyTenantConfigAsync(const Model::ModifyTenantConfigRequest& request, const ModifyTenantConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyTenantConfigOutcomeCallable modifyTenantConfigCallable(const Model::ModifyTenantConfigRequest& request) const;
			PageListAppInstanceGroupUserOutcome pageListAppInstanceGroupUser(const Model::PageListAppInstanceGroupUserRequest &request)const;
			void pageListAppInstanceGroupUserAsync(const Model::PageListAppInstanceGroupUserRequest& request, const PageListAppInstanceGroupUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PageListAppInstanceGroupUserOutcomeCallable pageListAppInstanceGroupUserCallable(const Model::PageListAppInstanceGroupUserRequest& request) const;
			RenewAppInstanceGroupOutcome renewAppInstanceGroup(const Model::RenewAppInstanceGroupRequest &request)const;
			void renewAppInstanceGroupAsync(const Model::RenewAppInstanceGroupRequest& request, const RenewAppInstanceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RenewAppInstanceGroupOutcomeCallable renewAppInstanceGroupCallable(const Model::RenewAppInstanceGroupRequest& request) const;
			UnbindOutcome unbind(const Model::UnbindRequest &request)const;
			void unbindAsync(const Model::UnbindRequest& request, const UnbindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindOutcomeCallable unbindCallable(const Model::UnbindRequest& request) const;
			UpdateAppInstanceGroupImageOutcome updateAppInstanceGroupImage(const Model::UpdateAppInstanceGroupImageRequest &request)const;
			void updateAppInstanceGroupImageAsync(const Model::UpdateAppInstanceGroupImageRequest& request, const UpdateAppInstanceGroupImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAppInstanceGroupImageOutcomeCallable updateAppInstanceGroupImageCallable(const Model::UpdateAppInstanceGroupImageRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_APPSTREAM_CENTER_APPSTREAM_CENTERCLIENT_H_
