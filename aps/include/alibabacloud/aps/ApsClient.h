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

#ifndef ALIBABACLOUD_APS_APSCLIENT_H_
#define ALIBABACLOUD_APS_APSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "ApsExport.h"
#include "model/GetFxCustomerTypeRequest.h"
#include "model/GetFxCustomerTypeResult.h"


namespace AlibabaCloud
{
	namespace Aps
	{
		class ALIBABACLOUD_APS_EXPORT ApsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::GetFxCustomerTypeResult> GetFxCustomerTypeOutcome;
			typedef std::future<GetFxCustomerTypeOutcome> GetFxCustomerTypeOutcomeCallable;
			typedef std::function<void(const ApsClient*, const Model::GetFxCustomerTypeRequest&, const GetFxCustomerTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFxCustomerTypeAsyncHandler;

			ApsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ApsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ApsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ApsClient();
			GetFxCustomerTypeOutcome getFxCustomerType(const Model::GetFxCustomerTypeRequest &request)const;
			void getFxCustomerTypeAsync(const Model::GetFxCustomerTypeRequest& request, const GetFxCustomerTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFxCustomerTypeOutcomeCallable getFxCustomerTypeCallable(const Model::GetFxCustomerTypeRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_APS_APSCLIENT_H_
