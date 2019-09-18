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

#ifndef ALIBABACLOUD_ARMS4FINANCE_ARMS4FINANCECLIENT_H_
#define ALIBABACLOUD_ARMS4FINANCE_ARMS4FINANCECLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "ARMS4FINANCEExport.h"
#include "model/ARMSQueryDataSetRequest.h"
#include "model/ARMSQueryDataSetResult.h"
#include "model/WhereInDimQueryRequest.h"
#include "model/WhereInDimQueryResult.h"


namespace AlibabaCloud
{
	namespace ARMS4FINANCE
	{
		class ALIBABACLOUD_ARMS4FINANCE_EXPORT ARMS4FINANCEClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ARMSQueryDataSetResult> ARMSQueryDataSetOutcome;
			typedef std::future<ARMSQueryDataSetOutcome> ARMSQueryDataSetOutcomeCallable;
			typedef std::function<void(const ARMS4FINANCEClient*, const Model::ARMSQueryDataSetRequest&, const ARMSQueryDataSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ARMSQueryDataSetAsyncHandler;
			typedef Outcome<Error, Model::WhereInDimQueryResult> WhereInDimQueryOutcome;
			typedef std::future<WhereInDimQueryOutcome> WhereInDimQueryOutcomeCallable;
			typedef std::function<void(const ARMS4FINANCEClient*, const Model::WhereInDimQueryRequest&, const WhereInDimQueryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> WhereInDimQueryAsyncHandler;

			ARMS4FINANCEClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ARMS4FINANCEClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ARMS4FINANCEClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ARMS4FINANCEClient();
			ARMSQueryDataSetOutcome aRMSQueryDataSet(const Model::ARMSQueryDataSetRequest &request)const;
			void aRMSQueryDataSetAsync(const Model::ARMSQueryDataSetRequest& request, const ARMSQueryDataSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ARMSQueryDataSetOutcomeCallable aRMSQueryDataSetCallable(const Model::ARMSQueryDataSetRequest& request) const;
			WhereInDimQueryOutcome whereInDimQuery(const Model::WhereInDimQueryRequest &request)const;
			void whereInDimQueryAsync(const Model::WhereInDimQueryRequest& request, const WhereInDimQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			WhereInDimQueryOutcomeCallable whereInDimQueryCallable(const Model::WhereInDimQueryRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ARMS4FINANCE_ARMS4FINANCECLIENT_H_
