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
#include "model/ActivateApServiceRequest.h"
#include "model/ActivateApServiceResult.h"
#include "model/ActivateApService2Request.h"
#include "model/ActivateApService2Result.h"
#include "model/BatchInsertItemsRequest.h"
#include "model/BatchInsertItemsResult.h"
#include "model/BindApStoreServiceRequest.h"
#include "model/BindApStoreServiceResult.h"
#include "model/BindEslDeviceRequest.h"
#include "model/BindEslDeviceResult.h"
#include "model/BindEslDeviceShelfRequest.h"
#include "model/BindEslDeviceShelfResult.h"
#include "model/CreateStoreRequest.h"
#include "model/CreateStoreResult.h"
#include "model/DeleteApServiceRequest.h"
#include "model/DeleteApServiceResult.h"
#include "model/DeleteEslDeviceRequest.h"
#include "model/DeleteEslDeviceResult.h"
#include "model/DeleteItemRequest.h"
#include "model/DeleteItemResult.h"
#include "model/DeleteItemBySkuIdRequest.h"
#include "model/DeleteItemBySkuIdResult.h"
#include "model/DeleteStoreRequest.h"
#include "model/DeleteStoreResult.h"
#include "model/DescribeAlarmsRequest.h"
#include "model/DescribeAlarmsResult.h"
#include "model/DescribeCompanyRequest.h"
#include "model/DescribeCompanyResult.h"
#include "model/DescribeEslDevicesRequest.h"
#include "model/DescribeEslDevicesResult.h"
#include "model/DescribeItemsRequest.h"
#include "model/DescribeItemsResult.h"
#include "model/DescribeStoresRequest.h"
#include "model/DescribeStoresResult.h"
#include "model/DescribeUserOperationLogRequest.h"
#include "model/DescribeUserOperationLogResult.h"
#include "model/DescribeUserRamPolicyRequest.h"
#include "model/DescribeUserRamPolicyResult.h"
#include "model/SearchApServiceRequest.h"
#include "model/SearchApServiceResult.h"
#include "model/UnbindEslDeviceRequest.h"
#include "model/UnbindEslDeviceResult.h"
#include "model/UnbindEslDeviceShelfRequest.h"
#include "model/UnbindEslDeviceShelfResult.h"
#include "model/UpdateStoreRequest.h"
#include "model/UpdateStoreResult.h"


namespace AlibabaCloud
{
	namespace Cloudesl
	{
		class ALIBABACLOUD_CLOUDESL_EXPORT CloudeslClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ActivateApServiceResult> ActivateApServiceOutcome;
			typedef std::future<ActivateApServiceOutcome> ActivateApServiceOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::ActivateApServiceRequest&, const ActivateApServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ActivateApServiceAsyncHandler;
			typedef Outcome<Error, Model::ActivateApService2Result> ActivateApService2Outcome;
			typedef std::future<ActivateApService2Outcome> ActivateApService2OutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::ActivateApService2Request&, const ActivateApService2Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> ActivateApService2AsyncHandler;
			typedef Outcome<Error, Model::BatchInsertItemsResult> BatchInsertItemsOutcome;
			typedef std::future<BatchInsertItemsOutcome> BatchInsertItemsOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::BatchInsertItemsRequest&, const BatchInsertItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchInsertItemsAsyncHandler;
			typedef Outcome<Error, Model::BindApStoreServiceResult> BindApStoreServiceOutcome;
			typedef std::future<BindApStoreServiceOutcome> BindApStoreServiceOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::BindApStoreServiceRequest&, const BindApStoreServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindApStoreServiceAsyncHandler;
			typedef Outcome<Error, Model::BindEslDeviceResult> BindEslDeviceOutcome;
			typedef std::future<BindEslDeviceOutcome> BindEslDeviceOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::BindEslDeviceRequest&, const BindEslDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindEslDeviceAsyncHandler;
			typedef Outcome<Error, Model::BindEslDeviceShelfResult> BindEslDeviceShelfOutcome;
			typedef std::future<BindEslDeviceShelfOutcome> BindEslDeviceShelfOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::BindEslDeviceShelfRequest&, const BindEslDeviceShelfOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindEslDeviceShelfAsyncHandler;
			typedef Outcome<Error, Model::CreateStoreResult> CreateStoreOutcome;
			typedef std::future<CreateStoreOutcome> CreateStoreOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::CreateStoreRequest&, const CreateStoreOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateStoreAsyncHandler;
			typedef Outcome<Error, Model::DeleteApServiceResult> DeleteApServiceOutcome;
			typedef std::future<DeleteApServiceOutcome> DeleteApServiceOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DeleteApServiceRequest&, const DeleteApServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApServiceAsyncHandler;
			typedef Outcome<Error, Model::DeleteEslDeviceResult> DeleteEslDeviceOutcome;
			typedef std::future<DeleteEslDeviceOutcome> DeleteEslDeviceOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DeleteEslDeviceRequest&, const DeleteEslDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEslDeviceAsyncHandler;
			typedef Outcome<Error, Model::DeleteItemResult> DeleteItemOutcome;
			typedef std::future<DeleteItemOutcome> DeleteItemOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DeleteItemRequest&, const DeleteItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteItemAsyncHandler;
			typedef Outcome<Error, Model::DeleteItemBySkuIdResult> DeleteItemBySkuIdOutcome;
			typedef std::future<DeleteItemBySkuIdOutcome> DeleteItemBySkuIdOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DeleteItemBySkuIdRequest&, const DeleteItemBySkuIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteItemBySkuIdAsyncHandler;
			typedef Outcome<Error, Model::DeleteStoreResult> DeleteStoreOutcome;
			typedef std::future<DeleteStoreOutcome> DeleteStoreOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DeleteStoreRequest&, const DeleteStoreOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStoreAsyncHandler;
			typedef Outcome<Error, Model::DescribeAlarmsResult> DescribeAlarmsOutcome;
			typedef std::future<DescribeAlarmsOutcome> DescribeAlarmsOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeAlarmsRequest&, const DescribeAlarmsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAlarmsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCompanyResult> DescribeCompanyOutcome;
			typedef std::future<DescribeCompanyOutcome> DescribeCompanyOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeCompanyRequest&, const DescribeCompanyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCompanyAsyncHandler;
			typedef Outcome<Error, Model::DescribeEslDevicesResult> DescribeEslDevicesOutcome;
			typedef std::future<DescribeEslDevicesOutcome> DescribeEslDevicesOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeEslDevicesRequest&, const DescribeEslDevicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEslDevicesAsyncHandler;
			typedef Outcome<Error, Model::DescribeItemsResult> DescribeItemsOutcome;
			typedef std::future<DescribeItemsOutcome> DescribeItemsOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeItemsRequest&, const DescribeItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeItemsAsyncHandler;
			typedef Outcome<Error, Model::DescribeStoresResult> DescribeStoresOutcome;
			typedef std::future<DescribeStoresOutcome> DescribeStoresOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeStoresRequest&, const DescribeStoresOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStoresAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserOperationLogResult> DescribeUserOperationLogOutcome;
			typedef std::future<DescribeUserOperationLogOutcome> DescribeUserOperationLogOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeUserOperationLogRequest&, const DescribeUserOperationLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserOperationLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserRamPolicyResult> DescribeUserRamPolicyOutcome;
			typedef std::future<DescribeUserRamPolicyOutcome> DescribeUserRamPolicyOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::DescribeUserRamPolicyRequest&, const DescribeUserRamPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserRamPolicyAsyncHandler;
			typedef Outcome<Error, Model::SearchApServiceResult> SearchApServiceOutcome;
			typedef std::future<SearchApServiceOutcome> SearchApServiceOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::SearchApServiceRequest&, const SearchApServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchApServiceAsyncHandler;
			typedef Outcome<Error, Model::UnbindEslDeviceResult> UnbindEslDeviceOutcome;
			typedef std::future<UnbindEslDeviceOutcome> UnbindEslDeviceOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::UnbindEslDeviceRequest&, const UnbindEslDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindEslDeviceAsyncHandler;
			typedef Outcome<Error, Model::UnbindEslDeviceShelfResult> UnbindEslDeviceShelfOutcome;
			typedef std::future<UnbindEslDeviceShelfOutcome> UnbindEslDeviceShelfOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::UnbindEslDeviceShelfRequest&, const UnbindEslDeviceShelfOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindEslDeviceShelfAsyncHandler;
			typedef Outcome<Error, Model::UpdateStoreResult> UpdateStoreOutcome;
			typedef std::future<UpdateStoreOutcome> UpdateStoreOutcomeCallable;
			typedef std::function<void(const CloudeslClient*, const Model::UpdateStoreRequest&, const UpdateStoreOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateStoreAsyncHandler;

			CloudeslClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CloudeslClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CloudeslClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CloudeslClient();
			ActivateApServiceOutcome activateApService(const Model::ActivateApServiceRequest &request)const;
			void activateApServiceAsync(const Model::ActivateApServiceRequest& request, const ActivateApServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ActivateApServiceOutcomeCallable activateApServiceCallable(const Model::ActivateApServiceRequest& request) const;
			ActivateApService2Outcome activateApService2(const Model::ActivateApService2Request &request)const;
			void activateApService2Async(const Model::ActivateApService2Request& request, const ActivateApService2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ActivateApService2OutcomeCallable activateApService2Callable(const Model::ActivateApService2Request& request) const;
			BatchInsertItemsOutcome batchInsertItems(const Model::BatchInsertItemsRequest &request)const;
			void batchInsertItemsAsync(const Model::BatchInsertItemsRequest& request, const BatchInsertItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchInsertItemsOutcomeCallable batchInsertItemsCallable(const Model::BatchInsertItemsRequest& request) const;
			BindApStoreServiceOutcome bindApStoreService(const Model::BindApStoreServiceRequest &request)const;
			void bindApStoreServiceAsync(const Model::BindApStoreServiceRequest& request, const BindApStoreServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindApStoreServiceOutcomeCallable bindApStoreServiceCallable(const Model::BindApStoreServiceRequest& request) const;
			BindEslDeviceOutcome bindEslDevice(const Model::BindEslDeviceRequest &request)const;
			void bindEslDeviceAsync(const Model::BindEslDeviceRequest& request, const BindEslDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindEslDeviceOutcomeCallable bindEslDeviceCallable(const Model::BindEslDeviceRequest& request) const;
			BindEslDeviceShelfOutcome bindEslDeviceShelf(const Model::BindEslDeviceShelfRequest &request)const;
			void bindEslDeviceShelfAsync(const Model::BindEslDeviceShelfRequest& request, const BindEslDeviceShelfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindEslDeviceShelfOutcomeCallable bindEslDeviceShelfCallable(const Model::BindEslDeviceShelfRequest& request) const;
			CreateStoreOutcome createStore(const Model::CreateStoreRequest &request)const;
			void createStoreAsync(const Model::CreateStoreRequest& request, const CreateStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateStoreOutcomeCallable createStoreCallable(const Model::CreateStoreRequest& request) const;
			DeleteApServiceOutcome deleteApService(const Model::DeleteApServiceRequest &request)const;
			void deleteApServiceAsync(const Model::DeleteApServiceRequest& request, const DeleteApServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteApServiceOutcomeCallable deleteApServiceCallable(const Model::DeleteApServiceRequest& request) const;
			DeleteEslDeviceOutcome deleteEslDevice(const Model::DeleteEslDeviceRequest &request)const;
			void deleteEslDeviceAsync(const Model::DeleteEslDeviceRequest& request, const DeleteEslDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEslDeviceOutcomeCallable deleteEslDeviceCallable(const Model::DeleteEslDeviceRequest& request) const;
			DeleteItemOutcome deleteItem(const Model::DeleteItemRequest &request)const;
			void deleteItemAsync(const Model::DeleteItemRequest& request, const DeleteItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteItemOutcomeCallable deleteItemCallable(const Model::DeleteItemRequest& request) const;
			DeleteItemBySkuIdOutcome deleteItemBySkuId(const Model::DeleteItemBySkuIdRequest &request)const;
			void deleteItemBySkuIdAsync(const Model::DeleteItemBySkuIdRequest& request, const DeleteItemBySkuIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteItemBySkuIdOutcomeCallable deleteItemBySkuIdCallable(const Model::DeleteItemBySkuIdRequest& request) const;
			DeleteStoreOutcome deleteStore(const Model::DeleteStoreRequest &request)const;
			void deleteStoreAsync(const Model::DeleteStoreRequest& request, const DeleteStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteStoreOutcomeCallable deleteStoreCallable(const Model::DeleteStoreRequest& request) const;
			DescribeAlarmsOutcome describeAlarms(const Model::DescribeAlarmsRequest &request)const;
			void describeAlarmsAsync(const Model::DescribeAlarmsRequest& request, const DescribeAlarmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAlarmsOutcomeCallable describeAlarmsCallable(const Model::DescribeAlarmsRequest& request) const;
			DescribeCompanyOutcome describeCompany(const Model::DescribeCompanyRequest &request)const;
			void describeCompanyAsync(const Model::DescribeCompanyRequest& request, const DescribeCompanyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCompanyOutcomeCallable describeCompanyCallable(const Model::DescribeCompanyRequest& request) const;
			DescribeEslDevicesOutcome describeEslDevices(const Model::DescribeEslDevicesRequest &request)const;
			void describeEslDevicesAsync(const Model::DescribeEslDevicesRequest& request, const DescribeEslDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEslDevicesOutcomeCallable describeEslDevicesCallable(const Model::DescribeEslDevicesRequest& request) const;
			DescribeItemsOutcome describeItems(const Model::DescribeItemsRequest &request)const;
			void describeItemsAsync(const Model::DescribeItemsRequest& request, const DescribeItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeItemsOutcomeCallable describeItemsCallable(const Model::DescribeItemsRequest& request) const;
			DescribeStoresOutcome describeStores(const Model::DescribeStoresRequest &request)const;
			void describeStoresAsync(const Model::DescribeStoresRequest& request, const DescribeStoresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStoresOutcomeCallable describeStoresCallable(const Model::DescribeStoresRequest& request) const;
			DescribeUserOperationLogOutcome describeUserOperationLog(const Model::DescribeUserOperationLogRequest &request)const;
			void describeUserOperationLogAsync(const Model::DescribeUserOperationLogRequest& request, const DescribeUserOperationLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserOperationLogOutcomeCallable describeUserOperationLogCallable(const Model::DescribeUserOperationLogRequest& request) const;
			DescribeUserRamPolicyOutcome describeUserRamPolicy(const Model::DescribeUserRamPolicyRequest &request)const;
			void describeUserRamPolicyAsync(const Model::DescribeUserRamPolicyRequest& request, const DescribeUserRamPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserRamPolicyOutcomeCallable describeUserRamPolicyCallable(const Model::DescribeUserRamPolicyRequest& request) const;
			SearchApServiceOutcome searchApService(const Model::SearchApServiceRequest &request)const;
			void searchApServiceAsync(const Model::SearchApServiceRequest& request, const SearchApServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchApServiceOutcomeCallable searchApServiceCallable(const Model::SearchApServiceRequest& request) const;
			UnbindEslDeviceOutcome unbindEslDevice(const Model::UnbindEslDeviceRequest &request)const;
			void unbindEslDeviceAsync(const Model::UnbindEslDeviceRequest& request, const UnbindEslDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindEslDeviceOutcomeCallable unbindEslDeviceCallable(const Model::UnbindEslDeviceRequest& request) const;
			UnbindEslDeviceShelfOutcome unbindEslDeviceShelf(const Model::UnbindEslDeviceShelfRequest &request)const;
			void unbindEslDeviceShelfAsync(const Model::UnbindEslDeviceShelfRequest& request, const UnbindEslDeviceShelfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindEslDeviceShelfOutcomeCallable unbindEslDeviceShelfCallable(const Model::UnbindEslDeviceShelfRequest& request) const;
			UpdateStoreOutcome updateStore(const Model::UpdateStoreRequest &request)const;
			void updateStoreAsync(const Model::UpdateStoreRequest& request, const UpdateStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateStoreOutcomeCallable updateStoreCallable(const Model::UpdateStoreRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CLOUDESL_CLOUDESLCLIENT_H_
