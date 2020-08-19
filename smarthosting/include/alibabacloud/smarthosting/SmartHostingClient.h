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

#ifndef ALIBABACLOUD_SMARTHOSTING_SMARTHOSTINGCLIENT_H_
#define ALIBABACLOUD_SMARTHOSTING_SMARTHOSTINGCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "SmartHostingExport.h"
#include "model/ListManagedHostsRequest.h"
#include "model/ListManagedHostsResult.h"
#include "model/ListManagedPrivateSpacesRequest.h"
#include "model/ListManagedPrivateSpacesResult.h"
#include "model/ListManagedRacksRequest.h"
#include "model/ListManagedRacksResult.h"
#include "model/UpdateManagedHostAttributesRequest.h"
#include "model/UpdateManagedHostAttributesResult.h"


namespace AlibabaCloud
{
	namespace SmartHosting
	{
		class ALIBABACLOUD_SMARTHOSTING_EXPORT SmartHostingClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ListManagedHostsResult> ListManagedHostsOutcome;
			typedef std::future<ListManagedHostsOutcome> ListManagedHostsOutcomeCallable;
			typedef std::function<void(const SmartHostingClient*, const Model::ListManagedHostsRequest&, const ListManagedHostsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListManagedHostsAsyncHandler;
			typedef Outcome<Error, Model::ListManagedPrivateSpacesResult> ListManagedPrivateSpacesOutcome;
			typedef std::future<ListManagedPrivateSpacesOutcome> ListManagedPrivateSpacesOutcomeCallable;
			typedef std::function<void(const SmartHostingClient*, const Model::ListManagedPrivateSpacesRequest&, const ListManagedPrivateSpacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListManagedPrivateSpacesAsyncHandler;
			typedef Outcome<Error, Model::ListManagedRacksResult> ListManagedRacksOutcome;
			typedef std::future<ListManagedRacksOutcome> ListManagedRacksOutcomeCallable;
			typedef std::function<void(const SmartHostingClient*, const Model::ListManagedRacksRequest&, const ListManagedRacksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListManagedRacksAsyncHandler;
			typedef Outcome<Error, Model::UpdateManagedHostAttributesResult> UpdateManagedHostAttributesOutcome;
			typedef std::future<UpdateManagedHostAttributesOutcome> UpdateManagedHostAttributesOutcomeCallable;
			typedef std::function<void(const SmartHostingClient*, const Model::UpdateManagedHostAttributesRequest&, const UpdateManagedHostAttributesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateManagedHostAttributesAsyncHandler;

			SmartHostingClient(const Credentials &credentials, const ClientConfiguration &configuration);
			SmartHostingClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			SmartHostingClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~SmartHostingClient();
			ListManagedHostsOutcome listManagedHosts(const Model::ListManagedHostsRequest &request)const;
			void listManagedHostsAsync(const Model::ListManagedHostsRequest& request, const ListManagedHostsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListManagedHostsOutcomeCallable listManagedHostsCallable(const Model::ListManagedHostsRequest& request) const;
			ListManagedPrivateSpacesOutcome listManagedPrivateSpaces(const Model::ListManagedPrivateSpacesRequest &request)const;
			void listManagedPrivateSpacesAsync(const Model::ListManagedPrivateSpacesRequest& request, const ListManagedPrivateSpacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListManagedPrivateSpacesOutcomeCallable listManagedPrivateSpacesCallable(const Model::ListManagedPrivateSpacesRequest& request) const;
			ListManagedRacksOutcome listManagedRacks(const Model::ListManagedRacksRequest &request)const;
			void listManagedRacksAsync(const Model::ListManagedRacksRequest& request, const ListManagedRacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListManagedRacksOutcomeCallable listManagedRacksCallable(const Model::ListManagedRacksRequest& request) const;
			UpdateManagedHostAttributesOutcome updateManagedHostAttributes(const Model::UpdateManagedHostAttributesRequest &request)const;
			void updateManagedHostAttributesAsync(const Model::UpdateManagedHostAttributesRequest& request, const UpdateManagedHostAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateManagedHostAttributesOutcomeCallable updateManagedHostAttributesCallable(const Model::UpdateManagedHostAttributesRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_SMARTHOSTING_SMARTHOSTINGCLIENT_H_
