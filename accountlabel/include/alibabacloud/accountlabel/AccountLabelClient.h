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

#ifndef ALIBABACLOUD_ACCOUNTLABEL_ACCOUNTLABELCLIENT_H_
#define ALIBABACLOUD_ACCOUNTLABEL_ACCOUNTLABELCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "AccountLabelExport.h"
#include "model/AddCustomerLabelRequest.h"
#include "model/AddCustomerLabelResult.h"
#include "model/BatchFetchAccountLabelRequest.h"
#include "model/BatchFetchAccountLabelResult.h"
#include "model/DeleteCustomerLabelRequest.h"
#include "model/DeleteCustomerLabelResult.h"
#include "model/QueryCustomerLabelRequest.h"
#include "model/QueryCustomerLabelResult.h"
#include "model/QueryCustomerLabelByConfigGroupRequest.h"
#include "model/QueryCustomerLabelByConfigGroupResult.h"


namespace AlibabaCloud
{
	namespace AccountLabel
	{
		class ALIBABACLOUD_ACCOUNTLABEL_EXPORT AccountLabelClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddCustomerLabelResult> AddCustomerLabelOutcome;
			typedef std::future<AddCustomerLabelOutcome> AddCustomerLabelOutcomeCallable;
			typedef std::function<void(const AccountLabelClient*, const Model::AddCustomerLabelRequest&, const AddCustomerLabelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddCustomerLabelAsyncHandler;
			typedef Outcome<Error, Model::BatchFetchAccountLabelResult> BatchFetchAccountLabelOutcome;
			typedef std::future<BatchFetchAccountLabelOutcome> BatchFetchAccountLabelOutcomeCallable;
			typedef std::function<void(const AccountLabelClient*, const Model::BatchFetchAccountLabelRequest&, const BatchFetchAccountLabelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchFetchAccountLabelAsyncHandler;
			typedef Outcome<Error, Model::DeleteCustomerLabelResult> DeleteCustomerLabelOutcome;
			typedef std::future<DeleteCustomerLabelOutcome> DeleteCustomerLabelOutcomeCallable;
			typedef std::function<void(const AccountLabelClient*, const Model::DeleteCustomerLabelRequest&, const DeleteCustomerLabelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomerLabelAsyncHandler;
			typedef Outcome<Error, Model::QueryCustomerLabelResult> QueryCustomerLabelOutcome;
			typedef std::future<QueryCustomerLabelOutcome> QueryCustomerLabelOutcomeCallable;
			typedef std::function<void(const AccountLabelClient*, const Model::QueryCustomerLabelRequest&, const QueryCustomerLabelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCustomerLabelAsyncHandler;
			typedef Outcome<Error, Model::QueryCustomerLabelByConfigGroupResult> QueryCustomerLabelByConfigGroupOutcome;
			typedef std::future<QueryCustomerLabelByConfigGroupOutcome> QueryCustomerLabelByConfigGroupOutcomeCallable;
			typedef std::function<void(const AccountLabelClient*, const Model::QueryCustomerLabelByConfigGroupRequest&, const QueryCustomerLabelByConfigGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCustomerLabelByConfigGroupAsyncHandler;

			AccountLabelClient(const Credentials &credentials, const ClientConfiguration &configuration);
			AccountLabelClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			AccountLabelClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~AccountLabelClient();
			AddCustomerLabelOutcome addCustomerLabel(const Model::AddCustomerLabelRequest &request)const;
			void addCustomerLabelAsync(const Model::AddCustomerLabelRequest& request, const AddCustomerLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddCustomerLabelOutcomeCallable addCustomerLabelCallable(const Model::AddCustomerLabelRequest& request) const;
			BatchFetchAccountLabelOutcome batchFetchAccountLabel(const Model::BatchFetchAccountLabelRequest &request)const;
			void batchFetchAccountLabelAsync(const Model::BatchFetchAccountLabelRequest& request, const BatchFetchAccountLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchFetchAccountLabelOutcomeCallable batchFetchAccountLabelCallable(const Model::BatchFetchAccountLabelRequest& request) const;
			DeleteCustomerLabelOutcome deleteCustomerLabel(const Model::DeleteCustomerLabelRequest &request)const;
			void deleteCustomerLabelAsync(const Model::DeleteCustomerLabelRequest& request, const DeleteCustomerLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCustomerLabelOutcomeCallable deleteCustomerLabelCallable(const Model::DeleteCustomerLabelRequest& request) const;
			QueryCustomerLabelOutcome queryCustomerLabel(const Model::QueryCustomerLabelRequest &request)const;
			void queryCustomerLabelAsync(const Model::QueryCustomerLabelRequest& request, const QueryCustomerLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCustomerLabelOutcomeCallable queryCustomerLabelCallable(const Model::QueryCustomerLabelRequest& request) const;
			QueryCustomerLabelByConfigGroupOutcome queryCustomerLabelByConfigGroup(const Model::QueryCustomerLabelByConfigGroupRequest &request)const;
			void queryCustomerLabelByConfigGroupAsync(const Model::QueryCustomerLabelByConfigGroupRequest& request, const QueryCustomerLabelByConfigGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCustomerLabelByConfigGroupOutcomeCallable queryCustomerLabelByConfigGroupCallable(const Model::QueryCustomerLabelByConfigGroupRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ACCOUNTLABEL_ACCOUNTLABELCLIENT_H_
