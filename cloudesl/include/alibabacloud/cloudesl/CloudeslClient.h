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

#ifndef ALIBABACLOUD_CLOUDESL_CLOUDESLCLIENT_H_
#define ALIBABACLOUD_CLOUDESL_CLOUDESLCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "CloudeslExport.h"
#include "model/ActivateApDeviceRequest.h"
#include "model/ActivateApDeviceResult.h"
#include "model/AddApDeviceRequest.h"
#include "model/AddApDeviceResult.h"
#include "model/AddUserRequest.h"
#include "model/AddUserResult.h"
#include "model/AssignUserRequest.h"
#include "model/AssignUserResult.h"
#include "model/BatchInsertItemsRequest.h"
#include "model/BatchInsertItemsResult.h"
#include "model/BindEslDeviceRequest.h"
#include "model/BindEslDeviceResult.h"
#include "model/ConfirmServerLocationRequest.h"
#include "model/ConfirmServerLocationResult.h"
#include "model/CreateStoreRequest.h"
#include "model/CreateStoreResult.h"
#include "model/DeleteApDeviceRequest.h"
#include "model/DeleteApDeviceResult.h"
#include "model/DeleteItemRequest.h"
#include "model/DeleteItemResult.h"
#include "model/DeleteStoreRequest.h"
#include "model/DeleteStoreResult.h"
#include "model/DeleteUserRequest.h"
#include "model/DeleteUserResult.h"
#include "model/DescribeApDevicesRequest.h"
#include "model/DescribeApDevicesResult.h"
#include "model/DescribeBindersRequest.h"
#include "model/DescribeBindersResult.h"
#include "model/DescribeClientPackageRequest.h"
#include "model/DescribeClientPackageResult.h"
#include "model/DescribeEslDeviceRequest.h"
#include "model/DescribeEslDeviceResult.h"
#include "model/DescribeEslDevicesRequest.h"
#include "model/DescribeEslDevicesResult.h"
#include "model/DescribeItemsRequest.h"
#include "model/DescribeItemsResult.h"
#include "model/DescribeStoreConfigRequest.h"
#include "model/DescribeStoreConfigResult.h"
#include "model/DescribeStoresRequest.h"
#include "model/DescribeStoresResult.h"
#include "model/DescribeUserLogRequest.h"
#include "model/DescribeUserLogResult.h"
#include "model/DescribeUsersRequest.h"
#include "model/DescribeUsersResult.h"
#include "model/GetUserRequest.h"
#include "model/GetUserResult.h"
#include "model/UnassignUserRequest.h"
#include "model/UnassignUserResult.h"
#include "model/UnbindEslDeviceRequest.h"
#include "model/UnbindEslDeviceResult.h"
#include "model/UpdateEslDeviceLightRequest.h"
#include "model/UpdateEslDeviceLightResult.h"
#include "model/UpdateStoreRequest.h"
#include "model/UpdateStoreResult.h"
#include "model/UpdateStoreConfigRequest.h"
#include "model/UpdateStoreConfigResult.h"


namespace AlibabaCloud
{
	namespace Cloudesl
	{
		class ALIBABACLOUD_CLOUDESL_EXPORT CloudeslClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ActivateApDeviceResult> ActivateApDeviceOutcome;
			typedef std::future<ActivateApDeviceOutcome> ActivateApDeviceOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::ActivateApDeviceRequest&, const ActivateApDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ActivateApDeviceAsyncHandler;
			typedef Outcome<Error, Model::AddApDeviceResult> AddApDeviceOutcome;
			typedef std::future<AddApDeviceOutcome> AddApDeviceOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::AddApDeviceRequest&, const AddApDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddApDeviceAsyncHandler;
			typedef Outcome<Error, Model::AddUserResult> AddUserOutcome;
			typedef std::future<AddUserOutcome> AddUserOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::AddUserRequest&, const AddUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddUserAsyncHandler;
			typedef Outcome<Error, Model::AssignUserResult> AssignUserOutcome;
			typedef std::future<AssignUserOutcome> AssignUserOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::AssignUserRequest&, const AssignUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssignUserAsyncHandler;
			typedef Outcome<Error, Model::BatchInsertItemsResult> BatchInsertItemsOutcome;
			typedef std::future<BatchInsertItemsOutcome> BatchInsertItemsOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::BatchInsertItemsRequest&, const BatchInsertItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchInsertItemsAsyncHandler;
			typedef Outcome<Error, Model::BindEslDeviceResult> BindEslDeviceOutcome;
			typedef std::future<BindEslDeviceOutcome> BindEslDeviceOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::BindEslDeviceRequest&, const BindEslDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindEslDeviceAsyncHandler;
			typedef Outcome<Error, Model::ConfirmServerLocationResult> ConfirmServerLocationOutcome;
			typedef std::future<ConfirmServerLocationOutcome> ConfirmServerLocationOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::ConfirmServerLocationRequest&, const ConfirmServerLocationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfirmServerLocationAsyncHandler;
			typedef Outcome<Error, Model::CreateStoreResult> CreateStoreOutcome;
			typedef std::future<CreateStoreOutcome> CreateStoreOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::CreateStoreRequest&, const CreateStoreOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateStoreAsyncHandler;
			typedef Outcome<Error, Model::DeleteApDeviceResult> DeleteApDeviceOutcome;
			typedef std::future<DeleteApDeviceOutcome> DeleteApDeviceOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DeleteApDeviceRequest&, const DeleteApDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApDeviceAsyncHandler;
			typedef Outcome<Error, Model::DeleteItemResult> DeleteItemOutcome;
			typedef std::future<DeleteItemOutcome> DeleteItemOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DeleteItemRequest&, const DeleteItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteItemAsyncHandler;
			typedef Outcome<Error, Model::DeleteStoreResult> DeleteStoreOutcome;
			typedef std::future<DeleteStoreOutcome> DeleteStoreOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DeleteStoreRequest&, const DeleteStoreOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStoreAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserResult> DeleteUserOutcome;
			typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DeleteUserRequest&, const DeleteUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserAsyncHandler;
			typedef Outcome<Error, Model::DescribeApDevicesResult> DescribeApDevicesOutcome;
			typedef std::future<DescribeApDevicesOutcome> DescribeApDevicesOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeApDevicesRequest&, const DescribeApDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApDevicesAsyncHandler;
			typedef Outcome<Error, Model::DescribeBindersResult> DescribeBindersOutcome;
			typedef std::future<DescribeBindersOutcome> DescribeBindersOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeBindersRequest&, const DescribeBindersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBindersAsyncHandler;
			typedef Outcome<Error, Model::DescribeClientPackageResult> DescribeClientPackageOutcome;
			typedef std::future<DescribeClientPackageOutcome> DescribeClientPackageOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeClientPackageRequest&, const DescribeClientPackageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClientPackageAsyncHandler;
			typedef Outcome<Error, Model::DescribeEslDeviceResult> DescribeEslDeviceOutcome;
			typedef std::future<DescribeEslDeviceOutcome> DescribeEslDeviceOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeEslDeviceRequest&, const DescribeEslDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEslDeviceAsyncHandler;
			typedef Outcome<Error, Model::DescribeEslDevicesResult> DescribeEslDevicesOutcome;
			typedef std::future<DescribeEslDevicesOutcome> DescribeEslDevicesOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeEslDevicesRequest&, const DescribeEslDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEslDevicesAsyncHandler;
			typedef Outcome<Error, Model::DescribeItemsResult> DescribeItemsOutcome;
			typedef std::future<DescribeItemsOutcome> DescribeItemsOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeItemsRequest&, const DescribeItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeItemsAsyncHandler;
			typedef Outcome<Error, Model::DescribeStoreConfigResult> DescribeStoreConfigOutcome;
			typedef std::future<DescribeStoreConfigOutcome> DescribeStoreConfigOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeStoreConfigRequest&, const DescribeStoreConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStoreConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeStoresResult> DescribeStoresOutcome;
			typedef std::future<DescribeStoresOutcome> DescribeStoresOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeStoresRequest&, const DescribeStoresOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStoresAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserLogResult> DescribeUserLogOutcome;
			typedef std::future<DescribeUserLogOutcome> DescribeUserLogOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeUserLogRequest&, const DescribeUserLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeUsersResult> DescribeUsersOutcome;
			typedef std::future<DescribeUsersOutcome> DescribeUsersOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeUsersRequest&, const DescribeUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUsersAsyncHandler;
			typedef Outcome<Error, Model::GetUserResult> GetUserOutcome;
			typedef std::future<GetUserOutcome> GetUserOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::GetUserRequest&, const GetUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetUserAsyncHandler;
			typedef Outcome<Error, Model::UnassignUserResult> UnassignUserOutcome;
			typedef std::future<UnassignUserOutcome> UnassignUserOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::UnassignUserRequest&, const UnassignUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnassignUserAsyncHandler;
			typedef Outcome<Error, Model::UnbindEslDeviceResult> UnbindEslDeviceOutcome;
			typedef std::future<UnbindEslDeviceOutcome> UnbindEslDeviceOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::UnbindEslDeviceRequest&, const UnbindEslDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindEslDeviceAsyncHandler;
			typedef Outcome<Error, Model::UpdateEslDeviceLightResult> UpdateEslDeviceLightOutcome;
			typedef std::future<UpdateEslDeviceLightOutcome> UpdateEslDeviceLightOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::UpdateEslDeviceLightRequest&, const UpdateEslDeviceLightOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEslDeviceLightAsyncHandler;
			typedef Outcome<Error, Model::UpdateStoreResult> UpdateStoreOutcome;
			typedef std::future<UpdateStoreOutcome> UpdateStoreOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::UpdateStoreRequest&, const UpdateStoreOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateStoreAsyncHandler;
			typedef Outcome<Error, Model::UpdateStoreConfigResult> UpdateStoreConfigOutcome;
			typedef std::future<UpdateStoreConfigOutcome> UpdateStoreConfigOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::UpdateStoreConfigRequest&, const UpdateStoreConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateStoreConfigAsyncHandler;

			CloudeslClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CloudeslClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CloudeslClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CloudeslClient();
			ActivateApDeviceOutcome activateApDevice(const Model::ActivateApDeviceRequest &request)const;
			void activateApDeviceAsync(const Model::ActivateApDeviceRequest& request, const ActivateApDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ActivateApDeviceOutcomeCallable activateApDeviceCallable(const Model::ActivateApDeviceRequest& request) const;
			AddApDeviceOutcome addApDevice(const Model::AddApDeviceRequest &request)const;
			void addApDeviceAsync(const Model::AddApDeviceRequest& request, const AddApDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddApDeviceOutcomeCallable addApDeviceCallable(const Model::AddApDeviceRequest& request) const;
			AddUserOutcome addUser(const Model::AddUserRequest &request)const;
			void addUserAsync(const Model::AddUserRequest& request, const AddUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddUserOutcomeCallable addUserCallable(const Model::AddUserRequest& request) const;
			AssignUserOutcome assignUser(const Model::AssignUserRequest &request)const;
			void assignUserAsync(const Model::AssignUserRequest& request, const AssignUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssignUserOutcomeCallable assignUserCallable(const Model::AssignUserRequest& request) const;
			BatchInsertItemsOutcome batchInsertItems(const Model::BatchInsertItemsRequest &request)const;
			void batchInsertItemsAsync(const Model::BatchInsertItemsRequest& request, const BatchInsertItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchInsertItemsOutcomeCallable batchInsertItemsCallable(const Model::BatchInsertItemsRequest& request) const;
			BindEslDeviceOutcome bindEslDevice(const Model::BindEslDeviceRequest &request)const;
			void bindEslDeviceAsync(const Model::BindEslDeviceRequest& request, const BindEslDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindEslDeviceOutcomeCallable bindEslDeviceCallable(const Model::BindEslDeviceRequest& request) const;
			ConfirmServerLocationOutcome confirmServerLocation(const Model::ConfirmServerLocationRequest &request)const;
			void confirmServerLocationAsync(const Model::ConfirmServerLocationRequest& request, const ConfirmServerLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfirmServerLocationOutcomeCallable confirmServerLocationCallable(const Model::ConfirmServerLocationRequest& request) const;
			CreateStoreOutcome createStore(const Model::CreateStoreRequest &request)const;
			void createStoreAsync(const Model::CreateStoreRequest& request, const CreateStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateStoreOutcomeCallable createStoreCallable(const Model::CreateStoreRequest& request) const;
			DeleteApDeviceOutcome deleteApDevice(const Model::DeleteApDeviceRequest &request)const;
			void deleteApDeviceAsync(const Model::DeleteApDeviceRequest& request, const DeleteApDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteApDeviceOutcomeCallable deleteApDeviceCallable(const Model::DeleteApDeviceRequest& request) const;
			DeleteItemOutcome deleteItem(const Model::DeleteItemRequest &request)const;
			void deleteItemAsync(const Model::DeleteItemRequest& request, const DeleteItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteItemOutcomeCallable deleteItemCallable(const Model::DeleteItemRequest& request) const;
			DeleteStoreOutcome deleteStore(const Model::DeleteStoreRequest &request)const;
			void deleteStoreAsync(const Model::DeleteStoreRequest& request, const DeleteStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteStoreOutcomeCallable deleteStoreCallable(const Model::DeleteStoreRequest& request) const;
			DeleteUserOutcome deleteUser(const Model::DeleteUserRequest &request)const;
			void deleteUserAsync(const Model::DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserOutcomeCallable deleteUserCallable(const Model::DeleteUserRequest& request) const;
			DescribeApDevicesOutcome describeApDevices(const Model::DescribeApDevicesRequest &request)const;
			void describeApDevicesAsync(const Model::DescribeApDevicesRequest& request, const DescribeApDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApDevicesOutcomeCallable describeApDevicesCallable(const Model::DescribeApDevicesRequest& request) const;
			DescribeBindersOutcome describeBinders(const Model::DescribeBindersRequest &request)const;
			void describeBindersAsync(const Model::DescribeBindersRequest& request, const DescribeBindersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBindersOutcomeCallable describeBindersCallable(const Model::DescribeBindersRequest& request) const;
			DescribeClientPackageOutcome describeClientPackage(const Model::DescribeClientPackageRequest &request)const;
			void describeClientPackageAsync(const Model::DescribeClientPackageRequest& request, const DescribeClientPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClientPackageOutcomeCallable describeClientPackageCallable(const Model::DescribeClientPackageRequest& request) const;
			DescribeEslDeviceOutcome describeEslDevice(const Model::DescribeEslDeviceRequest &request)const;
			void describeEslDeviceAsync(const Model::DescribeEslDeviceRequest& request, const DescribeEslDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEslDeviceOutcomeCallable describeEslDeviceCallable(const Model::DescribeEslDeviceRequest& request) const;
			DescribeEslDevicesOutcome describeEslDevices(const Model::DescribeEslDevicesRequest &request)const;
			void describeEslDevicesAsync(const Model::DescribeEslDevicesRequest& request, const DescribeEslDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEslDevicesOutcomeCallable describeEslDevicesCallable(const Model::DescribeEslDevicesRequest& request) const;
			DescribeItemsOutcome describeItems(const Model::DescribeItemsRequest &request)const;
			void describeItemsAsync(const Model::DescribeItemsRequest& request, const DescribeItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeItemsOutcomeCallable describeItemsCallable(const Model::DescribeItemsRequest& request) const;
			DescribeStoreConfigOutcome describeStoreConfig(const Model::DescribeStoreConfigRequest &request)const;
			void describeStoreConfigAsync(const Model::DescribeStoreConfigRequest& request, const DescribeStoreConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStoreConfigOutcomeCallable describeStoreConfigCallable(const Model::DescribeStoreConfigRequest& request) const;
			DescribeStoresOutcome describeStores(const Model::DescribeStoresRequest &request)const;
			void describeStoresAsync(const Model::DescribeStoresRequest& request, const DescribeStoresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStoresOutcomeCallable describeStoresCallable(const Model::DescribeStoresRequest& request) const;
			DescribeUserLogOutcome describeUserLog(const Model::DescribeUserLogRequest &request)const;
			void describeUserLogAsync(const Model::DescribeUserLogRequest& request, const DescribeUserLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserLogOutcomeCallable describeUserLogCallable(const Model::DescribeUserLogRequest& request) const;
			DescribeUsersOutcome describeUsers(const Model::DescribeUsersRequest &request)const;
			void describeUsersAsync(const Model::DescribeUsersRequest& request, const DescribeUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUsersOutcomeCallable describeUsersCallable(const Model::DescribeUsersRequest& request) const;
			GetUserOutcome getUser(const Model::GetUserRequest &request)const;
			void getUserAsync(const Model::GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetUserOutcomeCallable getUserCallable(const Model::GetUserRequest& request) const;
			UnassignUserOutcome unassignUser(const Model::UnassignUserRequest &request)const;
			void unassignUserAsync(const Model::UnassignUserRequest& request, const UnassignUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnassignUserOutcomeCallable unassignUserCallable(const Model::UnassignUserRequest& request) const;
			UnbindEslDeviceOutcome unbindEslDevice(const Model::UnbindEslDeviceRequest &request)const;
			void unbindEslDeviceAsync(const Model::UnbindEslDeviceRequest& request, const UnbindEslDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindEslDeviceOutcomeCallable unbindEslDeviceCallable(const Model::UnbindEslDeviceRequest& request) const;
			UpdateEslDeviceLightOutcome updateEslDeviceLight(const Model::UpdateEslDeviceLightRequest &request)const;
			void updateEslDeviceLightAsync(const Model::UpdateEslDeviceLightRequest& request, const UpdateEslDeviceLightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEslDeviceLightOutcomeCallable updateEslDeviceLightCallable(const Model::UpdateEslDeviceLightRequest& request) const;
			UpdateStoreOutcome updateStore(const Model::UpdateStoreRequest &request)const;
			void updateStoreAsync(const Model::UpdateStoreRequest& request, const UpdateStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateStoreOutcomeCallable updateStoreCallable(const Model::UpdateStoreRequest& request) const;
			UpdateStoreConfigOutcome updateStoreConfig(const Model::UpdateStoreConfigRequest &request)const;
			void updateStoreConfigAsync(const Model::UpdateStoreConfigRequest& request, const UpdateStoreConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateStoreConfigOutcomeCallable updateStoreConfigCallable(const Model::UpdateStoreConfigRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CLOUDESL_CLOUDESLCLIENT_H_
