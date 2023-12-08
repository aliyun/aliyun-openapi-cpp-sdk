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

#ifndef ALIBABACLOUD_DDOSDIVERSION_DDOSDIVERSIONCLIENT_H_
#define ALIBABACLOUD_DDOSDIVERSION_DDOSDIVERSIONCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "DdosDiversionExport.h"
#include "model/ConfigNetStatusRequest.h"
#include "model/ConfigNetStatusResult.h"
#include "model/ListInstanceRequest.h"
#include "model/ListInstanceResult.h"
#include "model/QueryNetListRequest.h"
#include "model/QueryNetListResult.h"


namespace AlibabaCloud
{
	namespace DdosDiversion
	{
		class ALIBABACLOUD_DDOSDIVERSION_EXPORT DdosDiversionClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ConfigNetStatusResult> ConfigNetStatusOutcome;
			typedef std::future<ConfigNetStatusOutcome> ConfigNetStatusOutcomeCallable;
			typedef std::function<void(const DdosDiversionClient*, const Model::ConfigNetStatusRequest&, const ConfigNetStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigNetStatusAsyncHandler;
			typedef Outcome<Error, Model::ListInstanceResult> ListInstanceOutcome;
			typedef std::future<ListInstanceOutcome> ListInstanceOutcomeCallable;
			typedef std::function<void(const DdosDiversionClient*, const Model::ListInstanceRequest&, const ListInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstanceAsyncHandler;
			typedef Outcome<Error, Model::QueryNetListResult> QueryNetListOutcome;
			typedef std::future<QueryNetListOutcome> QueryNetListOutcomeCallable;
			typedef std::function<void(const DdosDiversionClient*, const Model::QueryNetListRequest&, const QueryNetListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryNetListAsyncHandler;

			DdosDiversionClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DdosDiversionClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DdosDiversionClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DdosDiversionClient();
			ConfigNetStatusOutcome configNetStatus(const Model::ConfigNetStatusRequest &request)const;
			void configNetStatusAsync(const Model::ConfigNetStatusRequest& request, const ConfigNetStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigNetStatusOutcomeCallable configNetStatusCallable(const Model::ConfigNetStatusRequest& request) const;
			ListInstanceOutcome listInstance(const Model::ListInstanceRequest &request)const;
			void listInstanceAsync(const Model::ListInstanceRequest& request, const ListInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstanceOutcomeCallable listInstanceCallable(const Model::ListInstanceRequest& request) const;
			QueryNetListOutcome queryNetList(const Model::QueryNetListRequest &request)const;
			void queryNetListAsync(const Model::QueryNetListRequest& request, const QueryNetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryNetListOutcomeCallable queryNetListCallable(const Model::QueryNetListRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DDOSDIVERSION_DDOSDIVERSIONCLIENT_H_
