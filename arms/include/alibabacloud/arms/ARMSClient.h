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

#ifndef ALIBABACLOUD_ARMS_ARMSCLIENT_H_
#define ALIBABACLOUD_ARMS_ARMSCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "ARMSExport.h"
#include "model/AddGrafanaRequest.h"
#include "model/AddGrafanaResult.h"
#include "model/AddIntegrationRequest.h"
#include "model/AddIntegrationResult.h"
#include "model/CheckDataConsistencyRequest.h"
#include "model/CheckDataConsistencyResult.h"
#include "model/CheckServiceLinkedRoleForDeletingRequest.h"
#include "model/CheckServiceLinkedRoleForDeletingResult.h"
#include "model/ConfigAppRequest.h"
#include "model/ConfigAppResult.h"
#include "model/CreateAlertContactRequest.h"
#include "model/CreateAlertContactResult.h"
#include "model/CreateAlertContactGroupRequest.h"
#include "model/CreateAlertContactGroupResult.h"
#include "model/CreateRetcodeAppRequest.h"
#include "model/CreateRetcodeAppResult.h"
#include "model/DeleteAlertContactRequest.h"
#include "model/DeleteAlertContactResult.h"
#include "model/DeleteAlertContactGroupRequest.h"
#include "model/DeleteAlertContactGroupResult.h"
#include "model/DeleteAlertRulesRequest.h"
#include "model/DeleteAlertRulesResult.h"
#include "model/DeleteRetcodeAppRequest.h"
#include "model/DeleteRetcodeAppResult.h"
#include "model/DeleteTraceAppRequest.h"
#include "model/DeleteTraceAppResult.h"
#include "model/DescribeTraceLicenseKeyRequest.h"
#include "model/DescribeTraceLicenseKeyResult.h"
#include "model/DescribeTraceLocationRequest.h"
#include "model/DescribeTraceLocationResult.h"
#include "model/GetConsistencySnapshotRequest.h"
#include "model/GetConsistencySnapshotResult.h"
#include "model/GetMultipleTraceRequest.h"
#include "model/GetMultipleTraceResult.h"
#include "model/GetPrometheusApiTokenRequest.h"
#include "model/GetPrometheusApiTokenResult.h"
#include "model/GetRetcodeShareUrlRequest.h"
#include "model/GetRetcodeShareUrlResult.h"
#include "model/GetStackRequest.h"
#include "model/GetStackResult.h"
#include "model/GetTraceRequest.h"
#include "model/GetTraceResult.h"
#include "model/ImportAppAlertRulesRequest.h"
#include "model/ImportAppAlertRulesResult.h"
#include "model/ImportCustomAlertRulesRequest.h"
#include "model/ImportCustomAlertRulesResult.h"
#include "model/ListClusterFromGrafanaRequest.h"
#include "model/ListClusterFromGrafanaResult.h"
#include "model/ListDashboardsRequest.h"
#include "model/ListDashboardsResult.h"
#include "model/ListPromClustersRequest.h"
#include "model/ListPromClustersResult.h"
#include "model/ListRetcodeAppsRequest.h"
#include "model/ListRetcodeAppsResult.h"
#include "model/ListTraceAppsRequest.h"
#include "model/ListTraceAppsResult.h"
#include "model/QueryDatasetRequest.h"
#include "model/QueryDatasetResult.h"
#include "model/QueryMetricRequest.h"
#include "model/QueryMetricResult.h"
#include "model/SearchAlertContactRequest.h"
#include "model/SearchAlertContactResult.h"
#include "model/SearchAlertContactGroupRequest.h"
#include "model/SearchAlertContactGroupResult.h"
#include "model/SearchAlertHistoriesRequest.h"
#include "model/SearchAlertHistoriesResult.h"
#include "model/SearchAlertRulesRequest.h"
#include "model/SearchAlertRulesResult.h"
#include "model/SearchEventsRequest.h"
#include "model/SearchEventsResult.h"
#include "model/SearchRetcodeAppByPageRequest.h"
#include "model/SearchRetcodeAppByPageResult.h"
#include "model/SearchTraceAppByNameRequest.h"
#include "model/SearchTraceAppByNameResult.h"
#include "model/SearchTraceAppByPageRequest.h"
#include "model/SearchTraceAppByPageResult.h"
#include "model/SearchTracesRequest.h"
#include "model/SearchTracesResult.h"
#include "model/SearchTracesByPageRequest.h"
#include "model/SearchTracesByPageResult.h"
#include "model/SetRetcodeShareStatusRequest.h"
#include "model/SetRetcodeShareStatusResult.h"
#include "model/StartAlertRequest.h"
#include "model/StartAlertResult.h"
#include "model/StopAlertRequest.h"
#include "model/StopAlertResult.h"
#include "model/UpdateAlertContactRequest.h"
#include "model/UpdateAlertContactResult.h"
#include "model/UpdateAlertContactGroupRequest.h"
#include "model/UpdateAlertContactGroupResult.h"
#include "model/UpdateAlertRuleRequest.h"
#include "model/UpdateAlertRuleResult.h"


namespace AlibabaCloud
{
	namespace ARMS
	{
		class ALIBABACLOUD_ARMS_EXPORT ARMSClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddGrafanaResult> AddGrafanaOutcome;
			typedef std::future<AddGrafanaOutcome> AddGrafanaOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::AddGrafanaRequest&, const AddGrafanaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddGrafanaAsyncHandler;
			typedef Outcome<Error, Model::AddIntegrationResult> AddIntegrationOutcome;
			typedef std::future<AddIntegrationOutcome> AddIntegrationOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::AddIntegrationRequest&, const AddIntegrationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddIntegrationAsyncHandler;
			typedef Outcome<Error, Model::CheckDataConsistencyResult> CheckDataConsistencyOutcome;
			typedef std::future<CheckDataConsistencyOutcome> CheckDataConsistencyOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CheckDataConsistencyRequest&, const CheckDataConsistencyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckDataConsistencyAsyncHandler;
			typedef Outcome<Error, Model::CheckServiceLinkedRoleForDeletingResult> CheckServiceLinkedRoleForDeletingOutcome;
			typedef std::future<CheckServiceLinkedRoleForDeletingOutcome> CheckServiceLinkedRoleForDeletingOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CheckServiceLinkedRoleForDeletingRequest&, const CheckServiceLinkedRoleForDeletingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckServiceLinkedRoleForDeletingAsyncHandler;
			typedef Outcome<Error, Model::ConfigAppResult> ConfigAppOutcome;
			typedef std::future<ConfigAppOutcome> ConfigAppOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ConfigAppRequest&, const ConfigAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigAppAsyncHandler;
			typedef Outcome<Error, Model::CreateAlertContactResult> CreateAlertContactOutcome;
			typedef std::future<CreateAlertContactOutcome> CreateAlertContactOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreateAlertContactRequest&, const CreateAlertContactOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlertContactAsyncHandler;
			typedef Outcome<Error, Model::CreateAlertContactGroupResult> CreateAlertContactGroupOutcome;
			typedef std::future<CreateAlertContactGroupOutcome> CreateAlertContactGroupOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreateAlertContactGroupRequest&, const CreateAlertContactGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlertContactGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateRetcodeAppResult> CreateRetcodeAppOutcome;
			typedef std::future<CreateRetcodeAppOutcome> CreateRetcodeAppOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreateRetcodeAppRequest&, const CreateRetcodeAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRetcodeAppAsyncHandler;
			typedef Outcome<Error, Model::DeleteAlertContactResult> DeleteAlertContactOutcome;
			typedef std::future<DeleteAlertContactOutcome> DeleteAlertContactOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteAlertContactRequest&, const DeleteAlertContactOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlertContactAsyncHandler;
			typedef Outcome<Error, Model::DeleteAlertContactGroupResult> DeleteAlertContactGroupOutcome;
			typedef std::future<DeleteAlertContactGroupOutcome> DeleteAlertContactGroupOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteAlertContactGroupRequest&, const DeleteAlertContactGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlertContactGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteAlertRulesResult> DeleteAlertRulesOutcome;
			typedef std::future<DeleteAlertRulesOutcome> DeleteAlertRulesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteAlertRulesRequest&, const DeleteAlertRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlertRulesAsyncHandler;
			typedef Outcome<Error, Model::DeleteRetcodeAppResult> DeleteRetcodeAppOutcome;
			typedef std::future<DeleteRetcodeAppOutcome> DeleteRetcodeAppOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteRetcodeAppRequest&, const DeleteRetcodeAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRetcodeAppAsyncHandler;
			typedef Outcome<Error, Model::DeleteTraceAppResult> DeleteTraceAppOutcome;
			typedef std::future<DeleteTraceAppOutcome> DeleteTraceAppOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteTraceAppRequest&, const DeleteTraceAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTraceAppAsyncHandler;
			typedef Outcome<Error, Model::DescribeTraceLicenseKeyResult> DescribeTraceLicenseKeyOutcome;
			typedef std::future<DescribeTraceLicenseKeyOutcome> DescribeTraceLicenseKeyOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DescribeTraceLicenseKeyRequest&, const DescribeTraceLicenseKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTraceLicenseKeyAsyncHandler;
			typedef Outcome<Error, Model::DescribeTraceLocationResult> DescribeTraceLocationOutcome;
			typedef std::future<DescribeTraceLocationOutcome> DescribeTraceLocationOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DescribeTraceLocationRequest&, const DescribeTraceLocationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTraceLocationAsyncHandler;
			typedef Outcome<Error, Model::GetConsistencySnapshotResult> GetConsistencySnapshotOutcome;
			typedef std::future<GetConsistencySnapshotOutcome> GetConsistencySnapshotOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetConsistencySnapshotRequest&, const GetConsistencySnapshotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetConsistencySnapshotAsyncHandler;
			typedef Outcome<Error, Model::GetMultipleTraceResult> GetMultipleTraceOutcome;
			typedef std::future<GetMultipleTraceOutcome> GetMultipleTraceOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetMultipleTraceRequest&, const GetMultipleTraceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMultipleTraceAsyncHandler;
			typedef Outcome<Error, Model::GetPrometheusApiTokenResult> GetPrometheusApiTokenOutcome;
			typedef std::future<GetPrometheusApiTokenOutcome> GetPrometheusApiTokenOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetPrometheusApiTokenRequest&, const GetPrometheusApiTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPrometheusApiTokenAsyncHandler;
			typedef Outcome<Error, Model::GetRetcodeShareUrlResult> GetRetcodeShareUrlOutcome;
			typedef std::future<GetRetcodeShareUrlOutcome> GetRetcodeShareUrlOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetRetcodeShareUrlRequest&, const GetRetcodeShareUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRetcodeShareUrlAsyncHandler;
			typedef Outcome<Error, Model::GetStackResult> GetStackOutcome;
			typedef std::future<GetStackOutcome> GetStackOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetStackRequest&, const GetStackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetStackAsyncHandler;
			typedef Outcome<Error, Model::GetTraceResult> GetTraceOutcome;
			typedef std::future<GetTraceOutcome> GetTraceOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetTraceRequest&, const GetTraceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTraceAsyncHandler;
			typedef Outcome<Error, Model::ImportAppAlertRulesResult> ImportAppAlertRulesOutcome;
			typedef std::future<ImportAppAlertRulesOutcome> ImportAppAlertRulesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ImportAppAlertRulesRequest&, const ImportAppAlertRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportAppAlertRulesAsyncHandler;
			typedef Outcome<Error, Model::ImportCustomAlertRulesResult> ImportCustomAlertRulesOutcome;
			typedef std::future<ImportCustomAlertRulesOutcome> ImportCustomAlertRulesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ImportCustomAlertRulesRequest&, const ImportCustomAlertRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportCustomAlertRulesAsyncHandler;
			typedef Outcome<Error, Model::ListClusterFromGrafanaResult> ListClusterFromGrafanaOutcome;
			typedef std::future<ListClusterFromGrafanaOutcome> ListClusterFromGrafanaOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListClusterFromGrafanaRequest&, const ListClusterFromGrafanaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterFromGrafanaAsyncHandler;
			typedef Outcome<Error, Model::ListDashboardsResult> ListDashboardsOutcome;
			typedef std::future<ListDashboardsOutcome> ListDashboardsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListDashboardsRequest&, const ListDashboardsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDashboardsAsyncHandler;
			typedef Outcome<Error, Model::ListPromClustersResult> ListPromClustersOutcome;
			typedef std::future<ListPromClustersOutcome> ListPromClustersOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListPromClustersRequest&, const ListPromClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPromClustersAsyncHandler;
			typedef Outcome<Error, Model::ListRetcodeAppsResult> ListRetcodeAppsOutcome;
			typedef std::future<ListRetcodeAppsOutcome> ListRetcodeAppsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListRetcodeAppsRequest&, const ListRetcodeAppsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRetcodeAppsAsyncHandler;
			typedef Outcome<Error, Model::ListTraceAppsResult> ListTraceAppsOutcome;
			typedef std::future<ListTraceAppsOutcome> ListTraceAppsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListTraceAppsRequest&, const ListTraceAppsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTraceAppsAsyncHandler;
			typedef Outcome<Error, Model::QueryDatasetResult> QueryDatasetOutcome;
			typedef std::future<QueryDatasetOutcome> QueryDatasetOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::QueryDatasetRequest&, const QueryDatasetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryDatasetAsyncHandler;
			typedef Outcome<Error, Model::QueryMetricResult> QueryMetricOutcome;
			typedef std::future<QueryMetricOutcome> QueryMetricOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::QueryMetricRequest&, const QueryMetricOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMetricAsyncHandler;
			typedef Outcome<Error, Model::SearchAlertContactResult> SearchAlertContactOutcome;
			typedef std::future<SearchAlertContactOutcome> SearchAlertContactOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::SearchAlertContactRequest&, const SearchAlertContactOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchAlertContactAsyncHandler;
			typedef Outcome<Error, Model::SearchAlertContactGroupResult> SearchAlertContactGroupOutcome;
			typedef std::future<SearchAlertContactGroupOutcome> SearchAlertContactGroupOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::SearchAlertContactGroupRequest&, const SearchAlertContactGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchAlertContactGroupAsyncHandler;
			typedef Outcome<Error, Model::SearchAlertHistoriesResult> SearchAlertHistoriesOutcome;
			typedef std::future<SearchAlertHistoriesOutcome> SearchAlertHistoriesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::SearchAlertHistoriesRequest&, const SearchAlertHistoriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchAlertHistoriesAsyncHandler;
			typedef Outcome<Error, Model::SearchAlertRulesResult> SearchAlertRulesOutcome;
			typedef std::future<SearchAlertRulesOutcome> SearchAlertRulesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::SearchAlertRulesRequest&, const SearchAlertRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchAlertRulesAsyncHandler;
			typedef Outcome<Error, Model::SearchEventsResult> SearchEventsOutcome;
			typedef std::future<SearchEventsOutcome> SearchEventsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::SearchEventsRequest&, const SearchEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchEventsAsyncHandler;
			typedef Outcome<Error, Model::SearchRetcodeAppByPageResult> SearchRetcodeAppByPageOutcome;
			typedef std::future<SearchRetcodeAppByPageOutcome> SearchRetcodeAppByPageOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::SearchRetcodeAppByPageRequest&, const SearchRetcodeAppByPageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchRetcodeAppByPageAsyncHandler;
			typedef Outcome<Error, Model::SearchTraceAppByNameResult> SearchTraceAppByNameOutcome;
			typedef std::future<SearchTraceAppByNameOutcome> SearchTraceAppByNameOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::SearchTraceAppByNameRequest&, const SearchTraceAppByNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchTraceAppByNameAsyncHandler;
			typedef Outcome<Error, Model::SearchTraceAppByPageResult> SearchTraceAppByPageOutcome;
			typedef std::future<SearchTraceAppByPageOutcome> SearchTraceAppByPageOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::SearchTraceAppByPageRequest&, const SearchTraceAppByPageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchTraceAppByPageAsyncHandler;
			typedef Outcome<Error, Model::SearchTracesResult> SearchTracesOutcome;
			typedef std::future<SearchTracesOutcome> SearchTracesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::SearchTracesRequest&, const SearchTracesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchTracesAsyncHandler;
			typedef Outcome<Error, Model::SearchTracesByPageResult> SearchTracesByPageOutcome;
			typedef std::future<SearchTracesByPageOutcome> SearchTracesByPageOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::SearchTracesByPageRequest&, const SearchTracesByPageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchTracesByPageAsyncHandler;
			typedef Outcome<Error, Model::SetRetcodeShareStatusResult> SetRetcodeShareStatusOutcome;
			typedef std::future<SetRetcodeShareStatusOutcome> SetRetcodeShareStatusOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::SetRetcodeShareStatusRequest&, const SetRetcodeShareStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetRetcodeShareStatusAsyncHandler;
			typedef Outcome<Error, Model::StartAlertResult> StartAlertOutcome;
			typedef std::future<StartAlertOutcome> StartAlertOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::StartAlertRequest&, const StartAlertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartAlertAsyncHandler;
			typedef Outcome<Error, Model::StopAlertResult> StopAlertOutcome;
			typedef std::future<StopAlertOutcome> StopAlertOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::StopAlertRequest&, const StopAlertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopAlertAsyncHandler;
			typedef Outcome<Error, Model::UpdateAlertContactResult> UpdateAlertContactOutcome;
			typedef std::future<UpdateAlertContactOutcome> UpdateAlertContactOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UpdateAlertContactRequest&, const UpdateAlertContactOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAlertContactAsyncHandler;
			typedef Outcome<Error, Model::UpdateAlertContactGroupResult> UpdateAlertContactGroupOutcome;
			typedef std::future<UpdateAlertContactGroupOutcome> UpdateAlertContactGroupOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UpdateAlertContactGroupRequest&, const UpdateAlertContactGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAlertContactGroupAsyncHandler;
			typedef Outcome<Error, Model::UpdateAlertRuleResult> UpdateAlertRuleOutcome;
			typedef std::future<UpdateAlertRuleOutcome> UpdateAlertRuleOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UpdateAlertRuleRequest&, const UpdateAlertRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAlertRuleAsyncHandler;

			ARMSClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ARMSClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ARMSClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ARMSClient();
			AddGrafanaOutcome addGrafana(const Model::AddGrafanaRequest &request)const;
			void addGrafanaAsync(const Model::AddGrafanaRequest& request, const AddGrafanaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddGrafanaOutcomeCallable addGrafanaCallable(const Model::AddGrafanaRequest& request) const;
			AddIntegrationOutcome addIntegration(const Model::AddIntegrationRequest &request)const;
			void addIntegrationAsync(const Model::AddIntegrationRequest& request, const AddIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddIntegrationOutcomeCallable addIntegrationCallable(const Model::AddIntegrationRequest& request) const;
			CheckDataConsistencyOutcome checkDataConsistency(const Model::CheckDataConsistencyRequest &request)const;
			void checkDataConsistencyAsync(const Model::CheckDataConsistencyRequest& request, const CheckDataConsistencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckDataConsistencyOutcomeCallable checkDataConsistencyCallable(const Model::CheckDataConsistencyRequest& request) const;
			CheckServiceLinkedRoleForDeletingOutcome checkServiceLinkedRoleForDeleting(const Model::CheckServiceLinkedRoleForDeletingRequest &request)const;
			void checkServiceLinkedRoleForDeletingAsync(const Model::CheckServiceLinkedRoleForDeletingRequest& request, const CheckServiceLinkedRoleForDeletingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckServiceLinkedRoleForDeletingOutcomeCallable checkServiceLinkedRoleForDeletingCallable(const Model::CheckServiceLinkedRoleForDeletingRequest& request) const;
			ConfigAppOutcome configApp(const Model::ConfigAppRequest &request)const;
			void configAppAsync(const Model::ConfigAppRequest& request, const ConfigAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigAppOutcomeCallable configAppCallable(const Model::ConfigAppRequest& request) const;
			CreateAlertContactOutcome createAlertContact(const Model::CreateAlertContactRequest &request)const;
			void createAlertContactAsync(const Model::CreateAlertContactRequest& request, const CreateAlertContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAlertContactOutcomeCallable createAlertContactCallable(const Model::CreateAlertContactRequest& request) const;
			CreateAlertContactGroupOutcome createAlertContactGroup(const Model::CreateAlertContactGroupRequest &request)const;
			void createAlertContactGroupAsync(const Model::CreateAlertContactGroupRequest& request, const CreateAlertContactGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAlertContactGroupOutcomeCallable createAlertContactGroupCallable(const Model::CreateAlertContactGroupRequest& request) const;
			CreateRetcodeAppOutcome createRetcodeApp(const Model::CreateRetcodeAppRequest &request)const;
			void createRetcodeAppAsync(const Model::CreateRetcodeAppRequest& request, const CreateRetcodeAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRetcodeAppOutcomeCallable createRetcodeAppCallable(const Model::CreateRetcodeAppRequest& request) const;
			DeleteAlertContactOutcome deleteAlertContact(const Model::DeleteAlertContactRequest &request)const;
			void deleteAlertContactAsync(const Model::DeleteAlertContactRequest& request, const DeleteAlertContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAlertContactOutcomeCallable deleteAlertContactCallable(const Model::DeleteAlertContactRequest& request) const;
			DeleteAlertContactGroupOutcome deleteAlertContactGroup(const Model::DeleteAlertContactGroupRequest &request)const;
			void deleteAlertContactGroupAsync(const Model::DeleteAlertContactGroupRequest& request, const DeleteAlertContactGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAlertContactGroupOutcomeCallable deleteAlertContactGroupCallable(const Model::DeleteAlertContactGroupRequest& request) const;
			DeleteAlertRulesOutcome deleteAlertRules(const Model::DeleteAlertRulesRequest &request)const;
			void deleteAlertRulesAsync(const Model::DeleteAlertRulesRequest& request, const DeleteAlertRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAlertRulesOutcomeCallable deleteAlertRulesCallable(const Model::DeleteAlertRulesRequest& request) const;
			DeleteRetcodeAppOutcome deleteRetcodeApp(const Model::DeleteRetcodeAppRequest &request)const;
			void deleteRetcodeAppAsync(const Model::DeleteRetcodeAppRequest& request, const DeleteRetcodeAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRetcodeAppOutcomeCallable deleteRetcodeAppCallable(const Model::DeleteRetcodeAppRequest& request) const;
			DeleteTraceAppOutcome deleteTraceApp(const Model::DeleteTraceAppRequest &request)const;
			void deleteTraceAppAsync(const Model::DeleteTraceAppRequest& request, const DeleteTraceAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTraceAppOutcomeCallable deleteTraceAppCallable(const Model::DeleteTraceAppRequest& request) const;
			DescribeTraceLicenseKeyOutcome describeTraceLicenseKey(const Model::DescribeTraceLicenseKeyRequest &request)const;
			void describeTraceLicenseKeyAsync(const Model::DescribeTraceLicenseKeyRequest& request, const DescribeTraceLicenseKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTraceLicenseKeyOutcomeCallable describeTraceLicenseKeyCallable(const Model::DescribeTraceLicenseKeyRequest& request) const;
			DescribeTraceLocationOutcome describeTraceLocation(const Model::DescribeTraceLocationRequest &request)const;
			void describeTraceLocationAsync(const Model::DescribeTraceLocationRequest& request, const DescribeTraceLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTraceLocationOutcomeCallable describeTraceLocationCallable(const Model::DescribeTraceLocationRequest& request) const;
			GetConsistencySnapshotOutcome getConsistencySnapshot(const Model::GetConsistencySnapshotRequest &request)const;
			void getConsistencySnapshotAsync(const Model::GetConsistencySnapshotRequest& request, const GetConsistencySnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetConsistencySnapshotOutcomeCallable getConsistencySnapshotCallable(const Model::GetConsistencySnapshotRequest& request) const;
			GetMultipleTraceOutcome getMultipleTrace(const Model::GetMultipleTraceRequest &request)const;
			void getMultipleTraceAsync(const Model::GetMultipleTraceRequest& request, const GetMultipleTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMultipleTraceOutcomeCallable getMultipleTraceCallable(const Model::GetMultipleTraceRequest& request) const;
			GetPrometheusApiTokenOutcome getPrometheusApiToken(const Model::GetPrometheusApiTokenRequest &request)const;
			void getPrometheusApiTokenAsync(const Model::GetPrometheusApiTokenRequest& request, const GetPrometheusApiTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPrometheusApiTokenOutcomeCallable getPrometheusApiTokenCallable(const Model::GetPrometheusApiTokenRequest& request) const;
			GetRetcodeShareUrlOutcome getRetcodeShareUrl(const Model::GetRetcodeShareUrlRequest &request)const;
			void getRetcodeShareUrlAsync(const Model::GetRetcodeShareUrlRequest& request, const GetRetcodeShareUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRetcodeShareUrlOutcomeCallable getRetcodeShareUrlCallable(const Model::GetRetcodeShareUrlRequest& request) const;
			GetStackOutcome getStack(const Model::GetStackRequest &request)const;
			void getStackAsync(const Model::GetStackRequest& request, const GetStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetStackOutcomeCallable getStackCallable(const Model::GetStackRequest& request) const;
			GetTraceOutcome getTrace(const Model::GetTraceRequest &request)const;
			void getTraceAsync(const Model::GetTraceRequest& request, const GetTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTraceOutcomeCallable getTraceCallable(const Model::GetTraceRequest& request) const;
			ImportAppAlertRulesOutcome importAppAlertRules(const Model::ImportAppAlertRulesRequest &request)const;
			void importAppAlertRulesAsync(const Model::ImportAppAlertRulesRequest& request, const ImportAppAlertRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportAppAlertRulesOutcomeCallable importAppAlertRulesCallable(const Model::ImportAppAlertRulesRequest& request) const;
			ImportCustomAlertRulesOutcome importCustomAlertRules(const Model::ImportCustomAlertRulesRequest &request)const;
			void importCustomAlertRulesAsync(const Model::ImportCustomAlertRulesRequest& request, const ImportCustomAlertRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportCustomAlertRulesOutcomeCallable importCustomAlertRulesCallable(const Model::ImportCustomAlertRulesRequest& request) const;
			ListClusterFromGrafanaOutcome listClusterFromGrafana(const Model::ListClusterFromGrafanaRequest &request)const;
			void listClusterFromGrafanaAsync(const Model::ListClusterFromGrafanaRequest& request, const ListClusterFromGrafanaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterFromGrafanaOutcomeCallable listClusterFromGrafanaCallable(const Model::ListClusterFromGrafanaRequest& request) const;
			ListDashboardsOutcome listDashboards(const Model::ListDashboardsRequest &request)const;
			void listDashboardsAsync(const Model::ListDashboardsRequest& request, const ListDashboardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDashboardsOutcomeCallable listDashboardsCallable(const Model::ListDashboardsRequest& request) const;
			ListPromClustersOutcome listPromClusters(const Model::ListPromClustersRequest &request)const;
			void listPromClustersAsync(const Model::ListPromClustersRequest& request, const ListPromClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPromClustersOutcomeCallable listPromClustersCallable(const Model::ListPromClustersRequest& request) const;
			ListRetcodeAppsOutcome listRetcodeApps(const Model::ListRetcodeAppsRequest &request)const;
			void listRetcodeAppsAsync(const Model::ListRetcodeAppsRequest& request, const ListRetcodeAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRetcodeAppsOutcomeCallable listRetcodeAppsCallable(const Model::ListRetcodeAppsRequest& request) const;
			ListTraceAppsOutcome listTraceApps(const Model::ListTraceAppsRequest &request)const;
			void listTraceAppsAsync(const Model::ListTraceAppsRequest& request, const ListTraceAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTraceAppsOutcomeCallable listTraceAppsCallable(const Model::ListTraceAppsRequest& request) const;
			QueryDatasetOutcome queryDataset(const Model::QueryDatasetRequest &request)const;
			void queryDatasetAsync(const Model::QueryDatasetRequest& request, const QueryDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryDatasetOutcomeCallable queryDatasetCallable(const Model::QueryDatasetRequest& request) const;
			QueryMetricOutcome queryMetric(const Model::QueryMetricRequest &request)const;
			void queryMetricAsync(const Model::QueryMetricRequest& request, const QueryMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMetricOutcomeCallable queryMetricCallable(const Model::QueryMetricRequest& request) const;
			SearchAlertContactOutcome searchAlertContact(const Model::SearchAlertContactRequest &request)const;
			void searchAlertContactAsync(const Model::SearchAlertContactRequest& request, const SearchAlertContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchAlertContactOutcomeCallable searchAlertContactCallable(const Model::SearchAlertContactRequest& request) const;
			SearchAlertContactGroupOutcome searchAlertContactGroup(const Model::SearchAlertContactGroupRequest &request)const;
			void searchAlertContactGroupAsync(const Model::SearchAlertContactGroupRequest& request, const SearchAlertContactGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchAlertContactGroupOutcomeCallable searchAlertContactGroupCallable(const Model::SearchAlertContactGroupRequest& request) const;
			SearchAlertHistoriesOutcome searchAlertHistories(const Model::SearchAlertHistoriesRequest &request)const;
			void searchAlertHistoriesAsync(const Model::SearchAlertHistoriesRequest& request, const SearchAlertHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchAlertHistoriesOutcomeCallable searchAlertHistoriesCallable(const Model::SearchAlertHistoriesRequest& request) const;
			SearchAlertRulesOutcome searchAlertRules(const Model::SearchAlertRulesRequest &request)const;
			void searchAlertRulesAsync(const Model::SearchAlertRulesRequest& request, const SearchAlertRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchAlertRulesOutcomeCallable searchAlertRulesCallable(const Model::SearchAlertRulesRequest& request) const;
			SearchEventsOutcome searchEvents(const Model::SearchEventsRequest &request)const;
			void searchEventsAsync(const Model::SearchEventsRequest& request, const SearchEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchEventsOutcomeCallable searchEventsCallable(const Model::SearchEventsRequest& request) const;
			SearchRetcodeAppByPageOutcome searchRetcodeAppByPage(const Model::SearchRetcodeAppByPageRequest &request)const;
			void searchRetcodeAppByPageAsync(const Model::SearchRetcodeAppByPageRequest& request, const SearchRetcodeAppByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchRetcodeAppByPageOutcomeCallable searchRetcodeAppByPageCallable(const Model::SearchRetcodeAppByPageRequest& request) const;
			SearchTraceAppByNameOutcome searchTraceAppByName(const Model::SearchTraceAppByNameRequest &request)const;
			void searchTraceAppByNameAsync(const Model::SearchTraceAppByNameRequest& request, const SearchTraceAppByNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchTraceAppByNameOutcomeCallable searchTraceAppByNameCallable(const Model::SearchTraceAppByNameRequest& request) const;
			SearchTraceAppByPageOutcome searchTraceAppByPage(const Model::SearchTraceAppByPageRequest &request)const;
			void searchTraceAppByPageAsync(const Model::SearchTraceAppByPageRequest& request, const SearchTraceAppByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchTraceAppByPageOutcomeCallable searchTraceAppByPageCallable(const Model::SearchTraceAppByPageRequest& request) const;
			SearchTracesOutcome searchTraces(const Model::SearchTracesRequest &request)const;
			void searchTracesAsync(const Model::SearchTracesRequest& request, const SearchTracesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchTracesOutcomeCallable searchTracesCallable(const Model::SearchTracesRequest& request) const;
			SearchTracesByPageOutcome searchTracesByPage(const Model::SearchTracesByPageRequest &request)const;
			void searchTracesByPageAsync(const Model::SearchTracesByPageRequest& request, const SearchTracesByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchTracesByPageOutcomeCallable searchTracesByPageCallable(const Model::SearchTracesByPageRequest& request) const;
			SetRetcodeShareStatusOutcome setRetcodeShareStatus(const Model::SetRetcodeShareStatusRequest &request)const;
			void setRetcodeShareStatusAsync(const Model::SetRetcodeShareStatusRequest& request, const SetRetcodeShareStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetRetcodeShareStatusOutcomeCallable setRetcodeShareStatusCallable(const Model::SetRetcodeShareStatusRequest& request) const;
			StartAlertOutcome startAlert(const Model::StartAlertRequest &request)const;
			void startAlertAsync(const Model::StartAlertRequest& request, const StartAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartAlertOutcomeCallable startAlertCallable(const Model::StartAlertRequest& request) const;
			StopAlertOutcome stopAlert(const Model::StopAlertRequest &request)const;
			void stopAlertAsync(const Model::StopAlertRequest& request, const StopAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopAlertOutcomeCallable stopAlertCallable(const Model::StopAlertRequest& request) const;
			UpdateAlertContactOutcome updateAlertContact(const Model::UpdateAlertContactRequest &request)const;
			void updateAlertContactAsync(const Model::UpdateAlertContactRequest& request, const UpdateAlertContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAlertContactOutcomeCallable updateAlertContactCallable(const Model::UpdateAlertContactRequest& request) const;
			UpdateAlertContactGroupOutcome updateAlertContactGroup(const Model::UpdateAlertContactGroupRequest &request)const;
			void updateAlertContactGroupAsync(const Model::UpdateAlertContactGroupRequest& request, const UpdateAlertContactGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAlertContactGroupOutcomeCallable updateAlertContactGroupCallable(const Model::UpdateAlertContactGroupRequest& request) const;
			UpdateAlertRuleOutcome updateAlertRule(const Model::UpdateAlertRuleRequest &request)const;
			void updateAlertRuleAsync(const Model::UpdateAlertRuleRequest& request, const UpdateAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAlertRuleOutcomeCallable updateAlertRuleCallable(const Model::UpdateAlertRuleRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ARMS_ARMSCLIENT_H_
