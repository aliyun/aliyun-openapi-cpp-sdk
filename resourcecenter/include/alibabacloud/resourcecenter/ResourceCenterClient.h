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
#include "model/AssociateDefaultFilterRequest.h"
#include "model/AssociateDefaultFilterResult.h"
#include "model/CreateFilterRequest.h"
#include "model/CreateFilterResult.h"
#include "model/CreateSavedQueryRequest.h"
#include "model/CreateSavedQueryResult.h"
#include "model/DeleteFilterRequest.h"
#include "model/DeleteFilterResult.h"
#include "model/DeleteSavedQueryRequest.h"
#include "model/DeleteSavedQueryResult.h"
#include "model/DisableMultiAccountResourceCenterRequest.h"
#include "model/DisableMultiAccountResourceCenterResult.h"
#include "model/DisableResourceCenterRequest.h"
#include "model/DisableResourceCenterResult.h"
#include "model/DisassociateDefaultFilterRequest.h"
#include "model/DisassociateDefaultFilterResult.h"
#include "model/EnableMultiAccountResourceCenterRequest.h"
#include "model/EnableMultiAccountResourceCenterResult.h"
#include "model/EnableResourceCenterRequest.h"
#include "model/EnableResourceCenterResult.h"
#include "model/ExecuteMultiAccountSQLQueryRequest.h"
#include "model/ExecuteMultiAccountSQLQueryResult.h"
#include "model/ExecuteSQLQueryRequest.h"
#include "model/ExecuteSQLQueryResult.h"
#include "model/GetExampleQueryRequest.h"
#include "model/GetExampleQueryResult.h"
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
#include "model/GetSavedQueryRequest.h"
#include "model/GetSavedQueryResult.h"
#include "model/ListExampleQueriesRequest.h"
#include "model/ListExampleQueriesResult.h"
#include "model/ListFiltersRequest.h"
#include "model/ListFiltersResult.h"
#include "model/ListMultiAccountResourceGroupsRequest.h"
#include "model/ListMultiAccountResourceGroupsResult.h"
#include "model/ListMultiAccountResourceRelationshipsRequest.h"
#include "model/ListMultiAccountResourceRelationshipsResult.h"
#include "model/ListMultiAccountTagKeysRequest.h"
#include "model/ListMultiAccountTagKeysResult.h"
#include "model/ListMultiAccountTagValuesRequest.h"
#include "model/ListMultiAccountTagValuesResult.h"
#include "model/ListResourceRelationshipsRequest.h"
#include "model/ListResourceRelationshipsResult.h"
#include "model/ListResourceTypesRequest.h"
#include "model/ListResourceTypesResult.h"
#include "model/ListSavedQueriesRequest.h"
#include "model/ListSavedQueriesResult.h"
#include "model/ListTagKeysRequest.h"
#include "model/ListTagKeysResult.h"
#include "model/ListTagValuesRequest.h"
#include "model/ListTagValuesResult.h"
#include "model/SearchMultiAccountResourcesRequest.h"
#include "model/SearchMultiAccountResourcesResult.h"
#include "model/SearchResourcesRequest.h"
#include "model/SearchResourcesResult.h"
#include "model/UpdateFilterRequest.h"
#include "model/UpdateFilterResult.h"
#include "model/UpdateSavedQueryRequest.h"
#include "model/UpdateSavedQueryResult.h"


namespace AlibabaCloud
{
	namespace ResourceCenter
	{
		class ALIBABACLOUD_RESOURCECENTER_EXPORT ResourceCenterClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AssociateDefaultFilterResult> AssociateDefaultFilterOutcome;
			typedef std::future<AssociateDefaultFilterOutcome> AssociateDefaultFilterOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::AssociateDefaultFilterRequest&, const AssociateDefaultFilterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateDefaultFilterAsyncHandler;
			typedef Outcome<Error, Model::CreateFilterResult> CreateFilterOutcome;
			typedef std::future<CreateFilterOutcome> CreateFilterOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::CreateFilterRequest&, const CreateFilterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFilterAsyncHandler;
			typedef Outcome<Error, Model::CreateSavedQueryResult> CreateSavedQueryOutcome;
			typedef std::future<CreateSavedQueryOutcome> CreateSavedQueryOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::CreateSavedQueryRequest&, const CreateSavedQueryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSavedQueryAsyncHandler;
			typedef Outcome<Error, Model::DeleteFilterResult> DeleteFilterOutcome;
			typedef std::future<DeleteFilterOutcome> DeleteFilterOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::DeleteFilterRequest&, const DeleteFilterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFilterAsyncHandler;
			typedef Outcome<Error, Model::DeleteSavedQueryResult> DeleteSavedQueryOutcome;
			typedef std::future<DeleteSavedQueryOutcome> DeleteSavedQueryOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::DeleteSavedQueryRequest&, const DeleteSavedQueryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSavedQueryAsyncHandler;
			typedef Outcome<Error, Model::DisableMultiAccountResourceCenterResult> DisableMultiAccountResourceCenterOutcome;
			typedef std::future<DisableMultiAccountResourceCenterOutcome> DisableMultiAccountResourceCenterOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::DisableMultiAccountResourceCenterRequest&, const DisableMultiAccountResourceCenterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableMultiAccountResourceCenterAsyncHandler;
			typedef Outcome<Error, Model::DisableResourceCenterResult> DisableResourceCenterOutcome;
			typedef std::future<DisableResourceCenterOutcome> DisableResourceCenterOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::DisableResourceCenterRequest&, const DisableResourceCenterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableResourceCenterAsyncHandler;
			typedef Outcome<Error, Model::DisassociateDefaultFilterResult> DisassociateDefaultFilterOutcome;
			typedef std::future<DisassociateDefaultFilterOutcome> DisassociateDefaultFilterOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::DisassociateDefaultFilterRequest&, const DisassociateDefaultFilterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateDefaultFilterAsyncHandler;
			typedef Outcome<Error, Model::EnableMultiAccountResourceCenterResult> EnableMultiAccountResourceCenterOutcome;
			typedef std::future<EnableMultiAccountResourceCenterOutcome> EnableMultiAccountResourceCenterOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::EnableMultiAccountResourceCenterRequest&, const EnableMultiAccountResourceCenterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableMultiAccountResourceCenterAsyncHandler;
			typedef Outcome<Error, Model::EnableResourceCenterResult> EnableResourceCenterOutcome;
			typedef std::future<EnableResourceCenterOutcome> EnableResourceCenterOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::EnableResourceCenterRequest&, const EnableResourceCenterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableResourceCenterAsyncHandler;
			typedef Outcome<Error, Model::ExecuteMultiAccountSQLQueryResult> ExecuteMultiAccountSQLQueryOutcome;
			typedef std::future<ExecuteMultiAccountSQLQueryOutcome> ExecuteMultiAccountSQLQueryOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::ExecuteMultiAccountSQLQueryRequest&, const ExecuteMultiAccountSQLQueryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteMultiAccountSQLQueryAsyncHandler;
			typedef Outcome<Error, Model::ExecuteSQLQueryResult> ExecuteSQLQueryOutcome;
			typedef std::future<ExecuteSQLQueryOutcome> ExecuteSQLQueryOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::ExecuteSQLQueryRequest&, const ExecuteSQLQueryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteSQLQueryAsyncHandler;
			typedef Outcome<Error, Model::GetExampleQueryResult> GetExampleQueryOutcome;
			typedef std::future<GetExampleQueryOutcome> GetExampleQueryOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::GetExampleQueryRequest&, const GetExampleQueryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetExampleQueryAsyncHandler;
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
			typedef Outcome<Error, Model::GetSavedQueryResult> GetSavedQueryOutcome;
			typedef std::future<GetSavedQueryOutcome> GetSavedQueryOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::GetSavedQueryRequest&, const GetSavedQueryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSavedQueryAsyncHandler;
			typedef Outcome<Error, Model::ListExampleQueriesResult> ListExampleQueriesOutcome;
			typedef std::future<ListExampleQueriesOutcome> ListExampleQueriesOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::ListExampleQueriesRequest&, const ListExampleQueriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListExampleQueriesAsyncHandler;
			typedef Outcome<Error, Model::ListFiltersResult> ListFiltersOutcome;
			typedef std::future<ListFiltersOutcome> ListFiltersOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::ListFiltersRequest&, const ListFiltersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFiltersAsyncHandler;
			typedef Outcome<Error, Model::ListMultiAccountResourceGroupsResult> ListMultiAccountResourceGroupsOutcome;
			typedef std::future<ListMultiAccountResourceGroupsOutcome> ListMultiAccountResourceGroupsOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::ListMultiAccountResourceGroupsRequest&, const ListMultiAccountResourceGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMultiAccountResourceGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListMultiAccountResourceRelationshipsResult> ListMultiAccountResourceRelationshipsOutcome;
			typedef std::future<ListMultiAccountResourceRelationshipsOutcome> ListMultiAccountResourceRelationshipsOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::ListMultiAccountResourceRelationshipsRequest&, const ListMultiAccountResourceRelationshipsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMultiAccountResourceRelationshipsAsyncHandler;
			typedef Outcome<Error, Model::ListMultiAccountTagKeysResult> ListMultiAccountTagKeysOutcome;
			typedef std::future<ListMultiAccountTagKeysOutcome> ListMultiAccountTagKeysOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::ListMultiAccountTagKeysRequest&, const ListMultiAccountTagKeysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMultiAccountTagKeysAsyncHandler;
			typedef Outcome<Error, Model::ListMultiAccountTagValuesResult> ListMultiAccountTagValuesOutcome;
			typedef std::future<ListMultiAccountTagValuesOutcome> ListMultiAccountTagValuesOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::ListMultiAccountTagValuesRequest&, const ListMultiAccountTagValuesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMultiAccountTagValuesAsyncHandler;
			typedef Outcome<Error, Model::ListResourceRelationshipsResult> ListResourceRelationshipsOutcome;
			typedef std::future<ListResourceRelationshipsOutcome> ListResourceRelationshipsOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::ListResourceRelationshipsRequest&, const ListResourceRelationshipsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListResourceRelationshipsAsyncHandler;
			typedef Outcome<Error, Model::ListResourceTypesResult> ListResourceTypesOutcome;
			typedef std::future<ListResourceTypesOutcome> ListResourceTypesOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::ListResourceTypesRequest&, const ListResourceTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListResourceTypesAsyncHandler;
			typedef Outcome<Error, Model::ListSavedQueriesResult> ListSavedQueriesOutcome;
			typedef std::future<ListSavedQueriesOutcome> ListSavedQueriesOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::ListSavedQueriesRequest&, const ListSavedQueriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSavedQueriesAsyncHandler;
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
			typedef Outcome<Error, Model::UpdateFilterResult> UpdateFilterOutcome;
			typedef std::future<UpdateFilterOutcome> UpdateFilterOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::UpdateFilterRequest&, const UpdateFilterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFilterAsyncHandler;
			typedef Outcome<Error, Model::UpdateSavedQueryResult> UpdateSavedQueryOutcome;
			typedef std::future<UpdateSavedQueryOutcome> UpdateSavedQueryOutcomeCallable;
			typedef std::function<void(const ResourceCenterClient*, const Model::UpdateSavedQueryRequest&, const UpdateSavedQueryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSavedQueryAsyncHandler;

			ResourceCenterClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ResourceCenterClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ResourceCenterClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ResourceCenterClient();
			AssociateDefaultFilterOutcome associateDefaultFilter(const Model::AssociateDefaultFilterRequest &request)const;
			void associateDefaultFilterAsync(const Model::AssociateDefaultFilterRequest& request, const AssociateDefaultFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateDefaultFilterOutcomeCallable associateDefaultFilterCallable(const Model::AssociateDefaultFilterRequest& request) const;
			CreateFilterOutcome createFilter(const Model::CreateFilterRequest &request)const;
			void createFilterAsync(const Model::CreateFilterRequest& request, const CreateFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFilterOutcomeCallable createFilterCallable(const Model::CreateFilterRequest& request) const;
			CreateSavedQueryOutcome createSavedQuery(const Model::CreateSavedQueryRequest &request)const;
			void createSavedQueryAsync(const Model::CreateSavedQueryRequest& request, const CreateSavedQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSavedQueryOutcomeCallable createSavedQueryCallable(const Model::CreateSavedQueryRequest& request) const;
			DeleteFilterOutcome deleteFilter(const Model::DeleteFilterRequest &request)const;
			void deleteFilterAsync(const Model::DeleteFilterRequest& request, const DeleteFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFilterOutcomeCallable deleteFilterCallable(const Model::DeleteFilterRequest& request) const;
			DeleteSavedQueryOutcome deleteSavedQuery(const Model::DeleteSavedQueryRequest &request)const;
			void deleteSavedQueryAsync(const Model::DeleteSavedQueryRequest& request, const DeleteSavedQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSavedQueryOutcomeCallable deleteSavedQueryCallable(const Model::DeleteSavedQueryRequest& request) const;
			DisableMultiAccountResourceCenterOutcome disableMultiAccountResourceCenter(const Model::DisableMultiAccountResourceCenterRequest &request)const;
			void disableMultiAccountResourceCenterAsync(const Model::DisableMultiAccountResourceCenterRequest& request, const DisableMultiAccountResourceCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableMultiAccountResourceCenterOutcomeCallable disableMultiAccountResourceCenterCallable(const Model::DisableMultiAccountResourceCenterRequest& request) const;
			DisableResourceCenterOutcome disableResourceCenter(const Model::DisableResourceCenterRequest &request)const;
			void disableResourceCenterAsync(const Model::DisableResourceCenterRequest& request, const DisableResourceCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableResourceCenterOutcomeCallable disableResourceCenterCallable(const Model::DisableResourceCenterRequest& request) const;
			DisassociateDefaultFilterOutcome disassociateDefaultFilter(const Model::DisassociateDefaultFilterRequest &request)const;
			void disassociateDefaultFilterAsync(const Model::DisassociateDefaultFilterRequest& request, const DisassociateDefaultFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisassociateDefaultFilterOutcomeCallable disassociateDefaultFilterCallable(const Model::DisassociateDefaultFilterRequest& request) const;
			EnableMultiAccountResourceCenterOutcome enableMultiAccountResourceCenter(const Model::EnableMultiAccountResourceCenterRequest &request)const;
			void enableMultiAccountResourceCenterAsync(const Model::EnableMultiAccountResourceCenterRequest& request, const EnableMultiAccountResourceCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableMultiAccountResourceCenterOutcomeCallable enableMultiAccountResourceCenterCallable(const Model::EnableMultiAccountResourceCenterRequest& request) const;
			EnableResourceCenterOutcome enableResourceCenter(const Model::EnableResourceCenterRequest &request)const;
			void enableResourceCenterAsync(const Model::EnableResourceCenterRequest& request, const EnableResourceCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableResourceCenterOutcomeCallable enableResourceCenterCallable(const Model::EnableResourceCenterRequest& request) const;
			ExecuteMultiAccountSQLQueryOutcome executeMultiAccountSQLQuery(const Model::ExecuteMultiAccountSQLQueryRequest &request)const;
			void executeMultiAccountSQLQueryAsync(const Model::ExecuteMultiAccountSQLQueryRequest& request, const ExecuteMultiAccountSQLQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecuteMultiAccountSQLQueryOutcomeCallable executeMultiAccountSQLQueryCallable(const Model::ExecuteMultiAccountSQLQueryRequest& request) const;
			ExecuteSQLQueryOutcome executeSQLQuery(const Model::ExecuteSQLQueryRequest &request)const;
			void executeSQLQueryAsync(const Model::ExecuteSQLQueryRequest& request, const ExecuteSQLQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecuteSQLQueryOutcomeCallable executeSQLQueryCallable(const Model::ExecuteSQLQueryRequest& request) const;
			GetExampleQueryOutcome getExampleQuery(const Model::GetExampleQueryRequest &request)const;
			void getExampleQueryAsync(const Model::GetExampleQueryRequest& request, const GetExampleQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetExampleQueryOutcomeCallable getExampleQueryCallable(const Model::GetExampleQueryRequest& request) const;
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
			GetSavedQueryOutcome getSavedQuery(const Model::GetSavedQueryRequest &request)const;
			void getSavedQueryAsync(const Model::GetSavedQueryRequest& request, const GetSavedQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSavedQueryOutcomeCallable getSavedQueryCallable(const Model::GetSavedQueryRequest& request) const;
			ListExampleQueriesOutcome listExampleQueries(const Model::ListExampleQueriesRequest &request)const;
			void listExampleQueriesAsync(const Model::ListExampleQueriesRequest& request, const ListExampleQueriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListExampleQueriesOutcomeCallable listExampleQueriesCallable(const Model::ListExampleQueriesRequest& request) const;
			ListFiltersOutcome listFilters(const Model::ListFiltersRequest &request)const;
			void listFiltersAsync(const Model::ListFiltersRequest& request, const ListFiltersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFiltersOutcomeCallable listFiltersCallable(const Model::ListFiltersRequest& request) const;
			ListMultiAccountResourceGroupsOutcome listMultiAccountResourceGroups(const Model::ListMultiAccountResourceGroupsRequest &request)const;
			void listMultiAccountResourceGroupsAsync(const Model::ListMultiAccountResourceGroupsRequest& request, const ListMultiAccountResourceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMultiAccountResourceGroupsOutcomeCallable listMultiAccountResourceGroupsCallable(const Model::ListMultiAccountResourceGroupsRequest& request) const;
			ListMultiAccountResourceRelationshipsOutcome listMultiAccountResourceRelationships(const Model::ListMultiAccountResourceRelationshipsRequest &request)const;
			void listMultiAccountResourceRelationshipsAsync(const Model::ListMultiAccountResourceRelationshipsRequest& request, const ListMultiAccountResourceRelationshipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMultiAccountResourceRelationshipsOutcomeCallable listMultiAccountResourceRelationshipsCallable(const Model::ListMultiAccountResourceRelationshipsRequest& request) const;
			ListMultiAccountTagKeysOutcome listMultiAccountTagKeys(const Model::ListMultiAccountTagKeysRequest &request)const;
			void listMultiAccountTagKeysAsync(const Model::ListMultiAccountTagKeysRequest& request, const ListMultiAccountTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMultiAccountTagKeysOutcomeCallable listMultiAccountTagKeysCallable(const Model::ListMultiAccountTagKeysRequest& request) const;
			ListMultiAccountTagValuesOutcome listMultiAccountTagValues(const Model::ListMultiAccountTagValuesRequest &request)const;
			void listMultiAccountTagValuesAsync(const Model::ListMultiAccountTagValuesRequest& request, const ListMultiAccountTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMultiAccountTagValuesOutcomeCallable listMultiAccountTagValuesCallable(const Model::ListMultiAccountTagValuesRequest& request) const;
			ListResourceRelationshipsOutcome listResourceRelationships(const Model::ListResourceRelationshipsRequest &request)const;
			void listResourceRelationshipsAsync(const Model::ListResourceRelationshipsRequest& request, const ListResourceRelationshipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListResourceRelationshipsOutcomeCallable listResourceRelationshipsCallable(const Model::ListResourceRelationshipsRequest& request) const;
			ListResourceTypesOutcome listResourceTypes(const Model::ListResourceTypesRequest &request)const;
			void listResourceTypesAsync(const Model::ListResourceTypesRequest& request, const ListResourceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListResourceTypesOutcomeCallable listResourceTypesCallable(const Model::ListResourceTypesRequest& request) const;
			ListSavedQueriesOutcome listSavedQueries(const Model::ListSavedQueriesRequest &request)const;
			void listSavedQueriesAsync(const Model::ListSavedQueriesRequest& request, const ListSavedQueriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSavedQueriesOutcomeCallable listSavedQueriesCallable(const Model::ListSavedQueriesRequest& request) const;
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
			UpdateFilterOutcome updateFilter(const Model::UpdateFilterRequest &request)const;
			void updateFilterAsync(const Model::UpdateFilterRequest& request, const UpdateFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateFilterOutcomeCallable updateFilterCallable(const Model::UpdateFilterRequest& request) const;
			UpdateSavedQueryOutcome updateSavedQuery(const Model::UpdateSavedQueryRequest &request)const;
			void updateSavedQueryAsync(const Model::UpdateSavedQueryRequest& request, const UpdateSavedQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSavedQueryOutcomeCallable updateSavedQueryCallable(const Model::UpdateSavedQueryRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_RESOURCECENTER_RESOURCECENTERCLIENT_H_
