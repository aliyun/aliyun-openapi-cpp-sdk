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

#ifndef ALIBABACLOUD_XSPACE_XSPACECLIENT_H_
#define ALIBABACLOUD_XSPACE_XSPACECLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "XspaceExport.h"
#include "model/QueryCustomerByIdRequest.h"
#include "model/QueryCustomerByIdResult.h"
#include "model/QueryCustomerByPhoneRequest.h"
#include "model/QueryCustomerByPhoneResult.h"


namespace AlibabaCloud
{
	namespace Xspace
	{
		class ALIBABACLOUD_XSPACE_EXPORT XspaceClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::QueryCustomerByIdResult> QueryCustomerByIdOutcome;
			typedef std::future<QueryCustomerByIdOutcome> QueryCustomerByIdOutcomeCallable;
			typedef std::function<void(const XspaceClient*, const Model::QueryCustomerByIdRequest&, const QueryCustomerByIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCustomerByIdAsyncHandler;
			typedef Outcome<Error, Model::QueryCustomerByPhoneResult> QueryCustomerByPhoneOutcome;
			typedef std::future<QueryCustomerByPhoneOutcome> QueryCustomerByPhoneOutcomeCallable;
			typedef std::function<void(const XspaceClient*, const Model::QueryCustomerByPhoneRequest&, const QueryCustomerByPhoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCustomerByPhoneAsyncHandler;

			XspaceClient(const Credentials &credentials, const ClientConfiguration &configuration);
			XspaceClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			XspaceClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~XspaceClient();
			QueryCustomerByIdOutcome queryCustomerById(const Model::QueryCustomerByIdRequest &request)const;
			void queryCustomerByIdAsync(const Model::QueryCustomerByIdRequest& request, const QueryCustomerByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCustomerByIdOutcomeCallable queryCustomerByIdCallable(const Model::QueryCustomerByIdRequest& request) const;
			QueryCustomerByPhoneOutcome queryCustomerByPhone(const Model::QueryCustomerByPhoneRequest &request)const;
			void queryCustomerByPhoneAsync(const Model::QueryCustomerByPhoneRequest& request, const QueryCustomerByPhoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCustomerByPhoneOutcomeCallable queryCustomerByPhoneCallable(const Model::QueryCustomerByPhoneRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_XSPACE_XSPACECLIENT_H_
