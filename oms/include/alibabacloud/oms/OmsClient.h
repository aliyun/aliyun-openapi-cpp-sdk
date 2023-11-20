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

#ifndef ALIBABACLOUD_OMS_OMSCLIENT_H_
#define ALIBABACLOUD_OMS_OMSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "OmsExport.h"
#include "model/GetDomainFieldsRequest.h"
#include "model/GetDomainFieldsResult.h"


namespace AlibabaCloud
{
	namespace Oms
	{
		class ALIBABACLOUD_OMS_EXPORT OmsClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::GetDomainFieldsResult> GetDomainFieldsOutcome;
			typedef std::future<GetDomainFieldsOutcome> GetDomainFieldsOutcomeCallable;
			typedef std::function<void(const OmsClient*, const Model::GetDomainFieldsRequest&, const GetDomainFieldsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetDomainFieldsAsyncHandler;

			OmsClient(const Credentials &credentials, const ClientConfiguration &configuration);
			OmsClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			OmsClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~OmsClient();
			GetDomainFieldsOutcome getDomainFields(const Model::GetDomainFieldsRequest &request)const;
			void getDomainFieldsAsync(const Model::GetDomainFieldsRequest& request, const GetDomainFieldsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetDomainFieldsOutcomeCallable getDomainFieldsCallable(const Model::GetDomainFieldsRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_OMS_OMSCLIENT_H_
