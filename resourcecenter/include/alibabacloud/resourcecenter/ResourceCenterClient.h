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

#ifndef ALIBABACLOUD_RESOURCECENTER_RESOURCECENTERCLIENT_H_
#define ALIBABACLOUD_RESOURCECENTER_RESOURCECENTERCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "ResourceCenterExport.h"
#include "model/DisableMultiAccountResourceCenterRequest.h"
#include "model/DisableMultiAccountResourceCenterResult.h"
#include "model/DisableResourceCenterRequest.h"
#include "model/DisableResourceCenterResult.h"
#include "model/EnableMultiAccountResourceCenterRequest.h"
#include "model/EnableMultiAccountResourceCenterResult.h"
#include "model/EnableResourceCenterRequest.h"
#include "model/EnableResourceCenterResult.h"
#include "model/GetMultiAccountResourceCenterServiceStatusRequest.h"
#include "model/GetMultiAccountResourceCenterServiceStatusResult.h"
#include "model/GetMultiAccountResourceConfigurationRequest.h"
#include "model/GetMultiAccountResourceConfigurationResult.h"
#include "model/GetResourceCenterServiceStatusRequest.h"
#include "model/GetResourceCenterServiceStatusResult.h"
#include "model/GetResourceConfigurationRequest.h"
#include "model/GetResourceConfigurationResult.h"
#include "model/GetResourceCountsRequest.h"
#include "model/GetResourceCountsResult.h"
#include "model/ListMultiAccountResourceGroupsRequest.h"
#include "model/ListMultiAccountResourceGroupsResult.h"
#include "model/ListMultiAccountTagKeysRequest.h"
#include "model/ListMultiAccountTagKeysResult.h"
#include "model/ListMultiAccountTagValuesRequest.h"
#include "model/ListMultiAccountTagValuesResult.h"
#include "model/ListResourceTypesRequest.h"
#include "model/ListResourceTypesResult.h"
#include "model/ListTagKeysRequest.h"
#include "model/ListTagKeysResult.h"
#include "model/ListTagValuesRequest.h"
#include "model/ListTagValuesResult.h"
#include "model/SearchMultiAccountResourcesRequest.h"
#include "model/SearchMultiAccountResourcesResult.h"
#include "model/SearchResourcesRequest.h"
#include "model/SearchResourcesResult.h"


namespace AlibabaCloud
{
	namespace ResourceCenter
	{
		class ALIBABACLOUD_RESOURCECENTER_EXPORT ResourceCenterClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::DisableMultiAccountResourceCenterResult> DisableMultiAccountResourceCenterOutcome;
			typedef std::future<DisableMultiAccountResourceCenterOutcome> DisableMultiAccountResourceCenterOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::DisableMultiAccountResourceCenterRequest&, const DisableMultiAccountResourceCenterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableMultiAccountResourceCenterAsyncHandler;
			typedef Outcome<Error, Model::DisableResourceCenterResult> DisableResourceCenterOutcome;
			typedef std::future<DisableResourceCenterOutcome> DisableResourceCenterOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::DisableResourceCenterRequest&, const DisableResourceCenterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableResourceCenterAsyncHandler;
			typedef Outcome<Error, Model::EnableMultiAccountResourceCenterResult> EnableMultiAccountResourceCenterOutcome;
			typedef std::future<EnableMultiAccountResourceCenterOutcome> EnableMultiAccountResourceCenterOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::EnableMultiAccountResourceCenterRequest&, const EnableMultiAccountResourceCenterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableMultiAccountResourceCenterAsyncHandler;
			typedef Outcome<Error, Model::EnableResourceCenterResult> EnableResourceCenterOutcome;
			typedef std::future<EnableResourceCenterOutcome> EnableResourceCenterOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::EnableResourceCenterRequest&, const EnableResourceCenterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableResourceCenterAsyncHandler;
			typedef Outcome<Error, Model::GetMultiAccountResourceCenterServiceStatusResult> GetMultiAccountResourceCenterServiceStatusOutcome;
			typedef std::future<GetMultiAccountResourceCenterServiceStatusOutcome> GetMultiAccountResourceCenterServiceStatusOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::GetMultiAccountResourceCenterServiceStatusRequest&, const GetMultiAccountResourceCenterServiceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMultiAccountResourceCenterServiceStatusAsyncHandler;
			typedef Outcome<Error, Model::GetMultiAccountResourceConfigurationResult> GetMultiAccountResourceConfigurationOutcome;
			typedef std::future<GetMultiAccountResourceConfigurationOutcome> GetMultiAccountResourceConfigurationOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::GetMultiAccountResourceConfigurationRequest&, const GetMultiAccountResourceConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMultiAccountResourceConfigurationAsyncHandler;
			typedef Outcome<Error, Model::GetResourceCenterServiceStatusResult> GetResourceCenterServiceStatusOutcome;
			typedef std::future<GetResourceCenterServiceStatusOutcome> GetResourceCenterServiceStatusOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::GetResourceCenterServiceStatusRequest&, const GetResourceCenterServiceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetResourceCenterServiceStatusAsyncHandler;
			typedef Outcome<Error, Model::GetResourceConfigurationResult> GetResourceConfigurationOutcome;
			typedef std::future<GetResourceConfigurationOutcome> GetResourceConfigurationOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::GetResourceConfigurationRequest&, const GetResourceConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetResourceConfigurationAsyncHandler;
			typedef Outcome<Error, Model::GetResourceCountsResult> GetResourceCountsOutcome;
			typedef std::future<GetResourceCountsOutcome> GetResourceCountsOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::GetResourceCountsRequest&, const GetResourceCountsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetResourceCountsAsyncHandler;
			typedef Outcome<Error, Model::ListMultiAccountResourceGroupsResult> ListMultiAccountResourceGroupsOutcome;
			typedef std::future<ListMultiAccountResourceGroupsOutcome> ListMultiAccountResourceGroupsOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::ListMultiAccountResourceGroupsRequest&, const ListMultiAccountResourceGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMultiAccountResourceGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListMultiAccountTagKeysResult> ListMultiAccountTagKeysOutcome;
			typedef std::future<ListMultiAccountTagKeysOutcome> ListMultiAccountTagKeysOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::ListMultiAccountTagKeysRequest&, const ListMultiAccountTagKeysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMultiAccountTagKeysAsyncHandler;
			typedef Outcome<Error, Model::ListMultiAccountTagValuesResult> ListMultiAccountTagValuesOutcome;
			typedef std::future<ListMultiAccountTagValuesOutcome> ListMultiAccountTagValuesOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::ListMultiAccountTagValuesRequest&, const ListMultiAccountTagValuesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMultiAccountTagValuesAsyncHandler;
			typedef Outcome<Error, Model::ListResourceTypesResult> ListResourceTypesOutcome;
			typedef std::future<ListResourceTypesOutcome> ListResourceTypesOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::ListResourceTypesRequest&, const ListResourceTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListResourceTypesAsyncHandler;
			typedef Outcome<Error, Model::ListTagKeysResult> ListTagKeysOutcome;
			typedef std::future<ListTagKeysOutcome> ListTagKeysOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::ListTagKeysRequest&, const ListTagKeysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagKeysAsyncHandler;
			typedef Outcome<Error, Model::ListTagValuesResult> ListTagValuesOutcome;
			typedef std::future<ListTagValuesOutcome> ListTagValuesOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::ListTagValuesRequest&, const ListTagValuesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagValuesAsyncHandler;
			typedef Outcome<Error, Model::SearchMultiAccountResourcesResult> SearchMultiAccountResourcesOutcome;
			typedef std::future<SearchMultiAccountResourcesOutcome> SearchMultiAccountResourcesOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::SearchMultiAccountResourcesRequest&, const SearchMultiAccountResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchMultiAccountResourcesAsyncHandler;
			typedef Outcome<Error, Model::SearchResourcesResult> SearchResourcesOutcome;
			typedef std::future<SearchResourcesOutcome> SearchResourcesOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::SearchResourcesRequest&, const SearchResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchResourcesAsyncHandler;

			ResourceCenterClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ResourceCenterClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ResourceCenterClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ResourceCenterClient();
			DisableMultiAccountResourceCenterOutcome disableMultiAccountResourceCenter(const Model::DisableMultiAccountResourceCenterRequest &request)const;
			void disableMultiAccountResourceCenterAsync(const Model::DisableMultiAccountResourceCenterRequest& request, const DisableMultiAccountResourceCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableMultiAccountResourceCenterOutcomeCallable disableMultiAccountResourceCenterCallable(const Model::DisableMultiAccountResourceCenterRequest& request) const;
			DisableResourceCenterOutcome disableResourceCenter(const Model::DisableResourceCenterRequest &request)const;
			void disableResourceCenterAsync(const Model::DisableResourceCenterRequest& request, const DisableResourceCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableResourceCenterOutcomeCallable disableResourceCenterCallable(const Model::DisableResourceCenterRequest& request) const;
			EnableMultiAccountResourceCenterOutcome enableMultiAccountResourceCenter(const Model::EnableMultiAccountResourceCenterRequest &request)const;
			void enableMultiAccountResourceCenterAsync(const Model::EnableMultiAccountResourceCenterRequest& request, const EnableMultiAccountResourceCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableMultiAccountResourceCenterOutcomeCallable enableMultiAccountResourceCenterCallable(const Model::EnableMultiAccountResourceCenterRequest& request) const;
			EnableResourceCenterOutcome enableResourceCenter(const Model::EnableResourceCenterRequest &request)const;
			void enableResourceCenterAsync(const Model::EnableResourceCenterRequest& request, const EnableResourceCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableResourceCenterOutcomeCallable enableResourceCenterCallable(const Model::EnableResourceCenterRequest& request) const;
			GetMultiAccountResourceCenterServiceStatusOutcome getMultiAccountResourceCenterServiceStatus(const Model::GetMultiAccountResourceCenterServiceStatusRequest &request)const;
			void getMultiAccountResourceCenterServiceStatusAsync(const Model::GetMultiAccountResourceCenterServiceStatusRequest& request, const GetMultiAccountResourceCenterServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMultiAccountResourceCenterServiceStatusOutcomeCallable getMultiAccountResourceCenterServiceStatusCallable(const Model::GetMultiAccountResourceCenterServiceStatusRequest& request) const;
			GetMultiAccountResourceConfigurationOutcome getMultiAccountResourceConfiguration(const Model::GetMultiAccountResourceConfigurationRequest &request)const;
			void getMultiAccountResourceConfigurationAsync(const Model::GetMultiAccountResourceConfigurationRequest& request, const GetMultiAccountResourceConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMultiAccountResourceConfigurationOutcomeCallable getMultiAccountResourceConfigurationCallable(const Model::GetMultiAccountResourceConfigurationRequest& request) const;
			GetResourceCenterServiceStatusOutcome getResourceCenterServiceStatus(const Model::GetResourceCenterServiceStatusRequest &request)const;
			void getResourceCenterServiceStatusAsync(const Model::GetResourceCenterServiceStatusRequest& request, const GetResourceCenterServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetResourceCenterServiceStatusOutcomeCallable getResourceCenterServiceStatusCallable(const Model::GetResourceCenterServiceStatusRequest& request) const;
			GetResourceConfigurationOutcome getResourceConfiguration(const Model::GetResourceConfigurationRequest &request)const;
			void getResourceConfigurationAsync(const Model::GetResourceConfigurationRequest& request, const GetResourceConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetResourceConfigurationOutcomeCallable getResourceConfigurationCallable(const Model::GetResourceConfigurationRequest& request) const;
			GetResourceCountsOutcome getResourceCounts(const Model::GetResourceCountsRequest &request)const;
			void getResourceCountsAsync(const Model::GetResourceCountsRequest& request, const GetResourceCountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetResourceCountsOutcomeCallable getResourceCountsCallable(const Model::GetResourceCountsRequest& request) const;
			ListMultiAccountResourceGroupsOutcome listMultiAccountResourceGroups(const Model::ListMultiAccountResourceGroupsRequest &request)const;
			void listMultiAccountResourceGroupsAsync(const Model::ListMultiAccountResourceGroupsRequest& request, const ListMultiAccountResourceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMultiAccountResourceGroupsOutcomeCallable listMultiAccountResourceGroupsCallable(const Model::ListMultiAccountResourceGroupsRequest& request) const;
			ListMultiAccountTagKeysOutcome listMultiAccountTagKeys(const Model::ListMultiAccountTagKeysRequest &request)const;
			void listMultiAccountTagKeysAsync(const Model::ListMultiAccountTagKeysRequest& request, const ListMultiAccountTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMultiAccountTagKeysOutcomeCallable listMultiAccountTagKeysCallable(const Model::ListMultiAccountTagKeysRequest& request) const;
			ListMultiAccountTagValuesOutcome listMultiAccountTagValues(const Model::ListMultiAccountTagValuesRequest &request)const;
			void listMultiAccountTagValuesAsync(const Model::ListMultiAccountTagValuesRequest& request, const ListMultiAccountTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMultiAccountTagValuesOutcomeCallable listMultiAccountTagValuesCallable(const Model::ListMultiAccountTagValuesRequest& request) const;
			ListResourceTypesOutcome listResourceTypes(const Model::ListResourceTypesRequest &request)const;
			void listResourceTypesAsync(const Model::ListResourceTypesRequest& request, const ListResourceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListResourceTypesOutcomeCallable listResourceTypesCallable(const Model::ListResourceTypesRequest& request) const;
			ListTagKeysOutcome listTagKeys(const Model::ListTagKeysRequest &request)const;
			void listTagKeysAsync(const Model::ListTagKeysRequest& request, const ListTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagKeysOutcomeCallable listTagKeysCallable(const Model::ListTagKeysRequest& request) const;
			ListTagValuesOutcome listTagValues(const Model::ListTagValuesRequest &request)const;
			void listTagValuesAsync(const Model::ListTagValuesRequest& request, const ListTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagValuesOutcomeCallable listTagValuesCallable(const Model::ListTagValuesRequest& request) const;
			SearchMultiAccountResourcesOutcome searchMultiAccountResources(const Model::SearchMultiAccountResourcesRequest &request)const;
			void searchMultiAccountResourcesAsync(const Model::SearchMultiAccountResourcesRequest& request, const SearchMultiAccountResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchMultiAccountResourcesOutcomeCallable searchMultiAccountResourcesCallable(const Model::SearchMultiAccountResourcesRequest& request) const;
			SearchResourcesOutcome searchResources(const Model::SearchResourcesRequest &request)const;
			void searchResourcesAsync(const Model::SearchResourcesRequest& request, const SearchResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchResourcesOutcomeCallable searchResourcesCallable(const Model::SearchResourcesRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_RESOURCECENTER_RESOURCECENTERCLIENT_H_
