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
#include "model/AddAliClusterIdsToPrometheusGlobalViewRequest.h"
#include "model/AddAliClusterIdsToPrometheusGlobalViewResult.h"
#include "model/AddGrafanaRequest.h"
#include "model/AddGrafanaResult.h"
#include "model/AddIntegrationRequest.h"
#include "model/AddIntegrationResult.h"
#include "model/AddPrometheusGlobalViewRequest.h"
#include "model/AddPrometheusGlobalViewResult.h"
#include "model/AddPrometheusGlobalViewByAliClusterIdsRequest.h"
#include "model/AddPrometheusGlobalViewByAliClusterIdsResult.h"
#include "model/AddPrometheusInstanceRequest.h"
#include "model/AddPrometheusInstanceResult.h"
#include "model/AddRecordingRuleRequest.h"
#include "model/AddRecordingRuleResult.h"
#include "model/AppendInstancesToPrometheusGlobalViewRequest.h"
#include "model/AppendInstancesToPrometheusGlobalViewResult.h"
#include "model/ApplyScenarioRequest.h"
#include "model/ApplyScenarioResult.h"
#include "model/CheckServiceStatusRequest.h"
#include "model/CheckServiceStatusResult.h"
#include "model/ConfigAppRequest.h"
#include "model/ConfigAppResult.h"
#include "model/CreateAlertContactRequest.h"
#include "model/CreateAlertContactResult.h"
#include "model/CreateAlertContactGroupRequest.h"
#include "model/CreateAlertContactGroupResult.h"
#include "model/CreateDispatchRuleRequest.h"
#include "model/CreateDispatchRuleResult.h"
#include "model/CreateIntegrationRequest.h"
#include "model/CreateIntegrationResult.h"
#include "model/CreateOrUpdateAlertRuleRequest.h"
#include "model/CreateOrUpdateAlertRuleResult.h"
#include "model/CreateOrUpdateContactRequest.h"
#include "model/CreateOrUpdateContactResult.h"
#include "model/CreateOrUpdateContactGroupRequest.h"
#include "model/CreateOrUpdateContactGroupResult.h"
#include "model/CreateOrUpdateEventBridgeIntegrationRequest.h"
#include "model/CreateOrUpdateEventBridgeIntegrationResult.h"
#include "model/CreateOrUpdateIMRobotRequest.h"
#include "model/CreateOrUpdateIMRobotResult.h"
#include "model/CreateOrUpdateNotificationPolicyRequest.h"
#include "model/CreateOrUpdateNotificationPolicyResult.h"
#include "model/CreateOrUpdateSilencePolicyRequest.h"
#include "model/CreateOrUpdateSilencePolicyResult.h"
#include "model/CreateOrUpdateWebhookContactRequest.h"
#include "model/CreateOrUpdateWebhookContactResult.h"
#include "model/CreatePrometheusAlertRuleRequest.h"
#include "model/CreatePrometheusAlertRuleResult.h"
#include "model/CreateRetcodeAppRequest.h"
#include "model/CreateRetcodeAppResult.h"
#include "model/CreateSyntheticTaskRequest.h"
#include "model/CreateSyntheticTaskResult.h"
#include "model/CreateWebhookRequest.h"
#include "model/CreateWebhookResult.h"
#include "model/DelAuthTokenRequest.h"
#include "model/DelAuthTokenResult.h"
#include "model/DeleteAlertContactRequest.h"
#include "model/DeleteAlertContactResult.h"
#include "model/DeleteAlertContactGroupRequest.h"
#include "model/DeleteAlertContactGroupResult.h"
#include "model/DeleteAlertRuleRequest.h"
#include "model/DeleteAlertRuleResult.h"
#include "model/DeleteAlertRulesRequest.h"
#include "model/DeleteAlertRulesResult.h"
#include "model/DeleteCmsExporterRequest.h"
#include "model/DeleteCmsExporterResult.h"
#include "model/DeleteContactRequest.h"
#include "model/DeleteContactResult.h"
#include "model/DeleteContactGroupRequest.h"
#include "model/DeleteContactGroupResult.h"
#include "model/DeleteDispatchRuleRequest.h"
#include "model/DeleteDispatchRuleResult.h"
#include "model/DeleteEventBridgeIntegrationRequest.h"
#include "model/DeleteEventBridgeIntegrationResult.h"
#include "model/DeleteGrafanaResourceRequest.h"
#include "model/DeleteGrafanaResourceResult.h"
#include "model/DeleteIMRobotRequest.h"
#include "model/DeleteIMRobotResult.h"
#include "model/DeleteIntegrationRequest.h"
#include "model/DeleteIntegrationResult.h"
#include "model/DeleteIntegrationsRequest.h"
#include "model/DeleteIntegrationsResult.h"
#include "model/DeleteNotificationPolicyRequest.h"
#include "model/DeleteNotificationPolicyResult.h"
#include "model/DeletePrometheusAlertRuleRequest.h"
#include "model/DeletePrometheusAlertRuleResult.h"
#include "model/DeletePrometheusGlobalViewRequest.h"
#include "model/DeletePrometheusGlobalViewResult.h"
#include "model/DeleteRetcodeAppRequest.h"
#include "model/DeleteRetcodeAppResult.h"
#include "model/DeleteScenarioRequest.h"
#include "model/DeleteScenarioResult.h"
#include "model/DeleteSilencePolicyRequest.h"
#include "model/DeleteSilencePolicyResult.h"
#include "model/DeleteSourceMapRequest.h"
#include "model/DeleteSourceMapResult.h"
#include "model/DeleteSyntheticTaskRequest.h"
#include "model/DeleteSyntheticTaskResult.h"
#include "model/DeleteTraceAppRequest.h"
#include "model/DeleteTraceAppResult.h"
#include "model/DeleteWebhookContactRequest.h"
#include "model/DeleteWebhookContactResult.h"
#include "model/DescribeContactGroupsRequest.h"
#include "model/DescribeContactGroupsResult.h"
#include "model/DescribeContactsRequest.h"
#include "model/DescribeContactsResult.h"
#include "model/DescribeDispatchRuleRequest.h"
#include "model/DescribeDispatchRuleResult.h"
#include "model/DescribeIMRobotsRequest.h"
#include "model/DescribeIMRobotsResult.h"
#include "model/DescribePrometheusAlertRuleRequest.h"
#include "model/DescribePrometheusAlertRuleResult.h"
#include "model/DescribeTraceLicenseKeyRequest.h"
#include "model/DescribeTraceLicenseKeyResult.h"
#include "model/DescribeWebhookContactsRequest.h"
#include "model/DescribeWebhookContactsResult.h"
#include "model/GetAgentDownloadUrlRequest.h"
#include "model/GetAgentDownloadUrlResult.h"
#include "model/GetAlertRulesRequest.h"
#include "model/GetAlertRulesResult.h"
#include "model/GetAppApiByPageRequest.h"
#include "model/GetAppApiByPageResult.h"
#include "model/GetAuthTokenRequest.h"
#include "model/GetAuthTokenResult.h"
#include "model/GetClusterAllUrlRequest.h"
#include "model/GetClusterAllUrlResult.h"
#include "model/GetExploreUrlRequest.h"
#include "model/GetExploreUrlResult.h"
#include "model/GetIntegrationStateRequest.h"
#include "model/GetIntegrationStateResult.h"
#include "model/GetManagedPrometheusStatusRequest.h"
#include "model/GetManagedPrometheusStatusResult.h"
#include "model/GetMultipleTraceRequest.h"
#include "model/GetMultipleTraceResult.h"
#include "model/GetOnCallSchedulesDetailRequest.h"
#include "model/GetOnCallSchedulesDetailResult.h"
#include "model/GetPrometheusApiTokenRequest.h"
#include "model/GetPrometheusApiTokenResult.h"
#include "model/GetPrometheusGlobalViewRequest.h"
#include "model/GetPrometheusGlobalViewResult.h"
#include "model/GetRecordingRuleRequest.h"
#include "model/GetRecordingRuleResult.h"
#include "model/GetRetcodeShareUrlRequest.h"
#include "model/GetRetcodeShareUrlResult.h"
#include "model/GetSourceMapInfoRequest.h"
#include "model/GetSourceMapInfoResult.h"
#include "model/GetStackRequest.h"
#include "model/GetStackResult.h"
#include "model/GetSyntheticTaskDetailRequest.h"
#include "model/GetSyntheticTaskDetailResult.h"
#include "model/GetSyntheticTaskListRequest.h"
#include "model/GetSyntheticTaskListResult.h"
#include "model/GetSyntheticTaskMonitorsRequest.h"
#include "model/GetSyntheticTaskMonitorsResult.h"
#include "model/GetTraceRequest.h"
#include "model/GetTraceResult.h"
#include "model/GetTraceAppRequest.h"
#include "model/GetTraceAppResult.h"
#include "model/ImportAppAlertRulesRequest.h"
#include "model/ImportAppAlertRulesResult.h"
#include "model/InstallCmsExporterRequest.h"
#include "model/InstallCmsExporterResult.h"
#include "model/InstallManagedPrometheusRequest.h"
#include "model/InstallManagedPrometheusResult.h"
#include "model/ListActivatedAlertsRequest.h"
#include "model/ListActivatedAlertsResult.h"
#include "model/ListAlertEventsRequest.h"
#include "model/ListAlertEventsResult.h"
#include "model/ListAlertsRequest.h"
#include "model/ListAlertsResult.h"
#include "model/ListClusterFromGrafanaRequest.h"
#include "model/ListClusterFromGrafanaResult.h"
#include "model/ListCmsInstancesRequest.h"
#include "model/ListCmsInstancesResult.h"
#include "model/ListDashboardsRequest.h"
#include "model/ListDashboardsResult.h"
#include "model/ListDashboardsByNameRequest.h"
#include "model/ListDashboardsByNameResult.h"
#include "model/ListDispatchRuleRequest.h"
#include "model/ListDispatchRuleResult.h"
#include "model/ListEscalationPoliciesRequest.h"
#include "model/ListEscalationPoliciesResult.h"
#include "model/ListEventBridgeIntegrationsRequest.h"
#include "model/ListEventBridgeIntegrationsResult.h"
#include "model/ListInsightsEventsRequest.h"
#include "model/ListInsightsEventsResult.h"
#include "model/ListIntegrationRequest.h"
#include "model/ListIntegrationResult.h"
#include "model/ListNotificationPoliciesRequest.h"
#include "model/ListNotificationPoliciesResult.h"
#include "model/ListOnCallSchedulesRequest.h"
#include "model/ListOnCallSchedulesResult.h"
#include "model/ListPrometheusAlertRulesRequest.h"
#include "model/ListPrometheusAlertRulesResult.h"
#include "model/ListPrometheusAlertTemplatesRequest.h"
#include "model/ListPrometheusAlertTemplatesResult.h"
#include "model/ListPrometheusGlobalViewRequest.h"
#include "model/ListPrometheusGlobalViewResult.h"
#include "model/ListPrometheusInstancesRequest.h"
#include "model/ListPrometheusInstancesResult.h"
#include "model/ListRetcodeAppsRequest.h"
#include "model/ListRetcodeAppsResult.h"
#include "model/ListScenarioRequest.h"
#include "model/ListScenarioResult.h"
#include "model/ListSilencePoliciesRequest.h"
#include "model/ListSilencePoliciesResult.h"
#include "model/ListTraceAppsRequest.h"
#include "model/ListTraceAppsResult.h"
#include "model/ManageGetRecordingRuleRequest.h"
#include "model/ManageGetRecordingRuleResult.h"
#include "model/ManageRecordingRuleRequest.h"
#include "model/ManageRecordingRuleResult.h"
#include "model/OpenArmsDefaultSLRRequest.h"
#include "model/OpenArmsDefaultSLRResult.h"
#include "model/OpenArmsServiceSecondVersionRequest.h"
#include "model/OpenArmsServiceSecondVersionResult.h"
#include "model/OpenVClusterRequest.h"
#include "model/OpenVClusterResult.h"
#include "model/OpenXtraceDefaultSLRRequest.h"
#include "model/OpenXtraceDefaultSLRResult.h"
#include "model/QueryMetricByPageRequest.h"
#include "model/QueryMetricByPageResult.h"
#include "model/QueryPromInstallStatusRequest.h"
#include "model/QueryPromInstallStatusResult.h"
#include "model/QueryReleaseMetricRequest.h"
#include "model/QueryReleaseMetricResult.h"
#include "model/RemoveAliClusterIdsFromPrometheusGlobalViewRequest.h"
#include "model/RemoveAliClusterIdsFromPrometheusGlobalViewResult.h"
#include "model/RemoveSourcesFromPrometheusGlobalViewRequest.h"
#include "model/RemoveSourcesFromPrometheusGlobalViewResult.h"
#include "model/SaveTraceAppConfigRequest.h"
#include "model/SaveTraceAppConfigResult.h"
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
#include "model/SendTTSVerifyLinkRequest.h"
#include "model/SendTTSVerifyLinkResult.h"
#include "model/SetRetcodeShareStatusRequest.h"
#include "model/SetRetcodeShareStatusResult.h"
#include "model/StartAlertRequest.h"
#include "model/StartAlertResult.h"
#include "model/StopAlertRequest.h"
#include "model/StopAlertResult.h"
#include "model/SwitchSyntheticTaskStatusRequest.h"
#include "model/SwitchSyntheticTaskStatusResult.h"
#include "model/SyncRecordingRulesRequest.h"
#include "model/SyncRecordingRulesResult.h"
#include "model/TurnOnSecondSwitchRequest.h"
#include "model/TurnOnSecondSwitchResult.h"
#include "model/UninstallManagedPrometheusRequest.h"
#include "model/UninstallManagedPrometheusResult.h"
#include "model/UninstallPromClusterRequest.h"
#include "model/UninstallPromClusterResult.h"
#include "model/UpdateAlertContactRequest.h"
#include "model/UpdateAlertContactResult.h"
#include "model/UpdateAlertContactGroupRequest.h"
#include "model/UpdateAlertContactGroupResult.h"
#include "model/UpdateAlertRuleRequest.h"
#include "model/UpdateAlertRuleResult.h"
#include "model/UpdateDispatchRuleRequest.h"
#include "model/UpdateDispatchRuleResult.h"
#include "model/UpdateIntegrationRequest.h"
#include "model/UpdateIntegrationResult.h"
#include "model/UpdatePrometheusAlertRuleRequest.h"
#include "model/UpdatePrometheusAlertRuleResult.h"
#include "model/UpdateWebhookRequest.h"
#include "model/UpdateWebhookResult.h"
#include "model/UploadRequest.h"
#include "model/UploadResult.h"


namespace AlibabaCloud
{
	namespace ARMS
	{
		class ALIBABACLOUD_ARMS_EXPORT ARMSClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddAliClusterIdsToPrometheusGlobalViewResult> AddAliClusterIdsToPrometheusGlobalViewOutcome;
			typedef std::future<AddAliClusterIdsToPrometheusGlobalViewOutcome> AddAliClusterIdsToPrometheusGlobalViewOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::AddAliClusterIdsToPrometheusGlobalViewRequest&, const AddAliClusterIdsToPrometheusGlobalViewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddAliClusterIdsToPrometheusGlobalViewAsyncHandler;
			typedef Outcome<Error, Model::AddGrafanaResult> AddGrafanaOutcome;
			typedef std::future<AddGrafanaOutcome> AddGrafanaOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::AddGrafanaRequest&, const AddGrafanaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddGrafanaAsyncHandler;
			typedef Outcome<Error, Model::AddIntegrationResult> AddIntegrationOutcome;
			typedef std::future<AddIntegrationOutcome> AddIntegrationOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::AddIntegrationRequest&, const AddIntegrationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddIntegrationAsyncHandler;
			typedef Outcome<Error, Model::AddPrometheusGlobalViewResult> AddPrometheusGlobalViewOutcome;
			typedef std::future<AddPrometheusGlobalViewOutcome> AddPrometheusGlobalViewOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::AddPrometheusGlobalViewRequest&, const AddPrometheusGlobalViewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddPrometheusGlobalViewAsyncHandler;
			typedef Outcome<Error, Model::AddPrometheusGlobalViewByAliClusterIdsResult> AddPrometheusGlobalViewByAliClusterIdsOutcome;
			typedef std::future<AddPrometheusGlobalViewByAliClusterIdsOutcome> AddPrometheusGlobalViewByAliClusterIdsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::AddPrometheusGlobalViewByAliClusterIdsRequest&, const AddPrometheusGlobalViewByAliClusterIdsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddPrometheusGlobalViewByAliClusterIdsAsyncHandler;
			typedef Outcome<Error, Model::AddPrometheusInstanceResult> AddPrometheusInstanceOutcome;
			typedef std::future<AddPrometheusInstanceOutcome> AddPrometheusInstanceOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::AddPrometheusInstanceRequest&, const AddPrometheusInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddPrometheusInstanceAsyncHandler;
			typedef Outcome<Error, Model::AddRecordingRuleResult> AddRecordingRuleOutcome;
			typedef std::future<AddRecordingRuleOutcome> AddRecordingRuleOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::AddRecordingRuleRequest&, const AddRecordingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddRecordingRuleAsyncHandler;
			typedef Outcome<Error, Model::AppendInstancesToPrometheusGlobalViewResult> AppendInstancesToPrometheusGlobalViewOutcome;
			typedef std::future<AppendInstancesToPrometheusGlobalViewOutcome> AppendInstancesToPrometheusGlobalViewOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::AppendInstancesToPrometheusGlobalViewRequest&, const AppendInstancesToPrometheusGlobalViewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AppendInstancesToPrometheusGlobalViewAsyncHandler;
			typedef Outcome<Error, Model::ApplyScenarioResult> ApplyScenarioOutcome;
			typedef std::future<ApplyScenarioOutcome> ApplyScenarioOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ApplyScenarioRequest&, const ApplyScenarioOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ApplyScenarioAsyncHandler;
			typedef Outcome<Error, Model::CheckServiceStatusResult> CheckServiceStatusOutcome;
			typedef std::future<CheckServiceStatusOutcome> CheckServiceStatusOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CheckServiceStatusRequest&, const CheckServiceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckServiceStatusAsyncHandler;
			typedef Outcome<Error, Model::ConfigAppResult> ConfigAppOutcome;
			typedef std::future<ConfigAppOutcome> ConfigAppOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ConfigAppRequest&, const ConfigAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigAppAsyncHandler;
			typedef Outcome<Error, Model::CreateAlertContactResult> CreateAlertContactOutcome;
			typedef std::future<CreateAlertContactOutcome> CreateAlertContactOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreateAlertContactRequest&, const CreateAlertContactOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlertContactAsyncHandler;
			typedef Outcome<Error, Model::CreateAlertContactGroupResult> CreateAlertContactGroupOutcome;
			typedef std::future<CreateAlertContactGroupOutcome> CreateAlertContactGroupOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreateAlertContactGroupRequest&, const CreateAlertContactGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlertContactGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateDispatchRuleResult> CreateDispatchRuleOutcome;
			typedef std::future<CreateDispatchRuleOutcome> CreateDispatchRuleOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreateDispatchRuleRequest&, const CreateDispatchRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDispatchRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateIntegrationResult> CreateIntegrationOutcome;
			typedef std::future<CreateIntegrationOutcome> CreateIntegrationOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreateIntegrationRequest&, const CreateIntegrationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateIntegrationAsyncHandler;
			typedef Outcome<Error, Model::CreateOrUpdateAlertRuleResult> CreateOrUpdateAlertRuleOutcome;
			typedef std::future<CreateOrUpdateAlertRuleOutcome> CreateOrUpdateAlertRuleOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreateOrUpdateAlertRuleRequest&, const CreateOrUpdateAlertRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrUpdateAlertRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateOrUpdateContactResult> CreateOrUpdateContactOutcome;
			typedef std::future<CreateOrUpdateContactOutcome> CreateOrUpdateContactOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreateOrUpdateContactRequest&, const CreateOrUpdateContactOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrUpdateContactAsyncHandler;
			typedef Outcome<Error, Model::CreateOrUpdateContactGroupResult> CreateOrUpdateContactGroupOutcome;
			typedef std::future<CreateOrUpdateContactGroupOutcome> CreateOrUpdateContactGroupOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreateOrUpdateContactGroupRequest&, const CreateOrUpdateContactGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrUpdateContactGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateOrUpdateEventBridgeIntegrationResult> CreateOrUpdateEventBridgeIntegrationOutcome;
			typedef std::future<CreateOrUpdateEventBridgeIntegrationOutcome> CreateOrUpdateEventBridgeIntegrationOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreateOrUpdateEventBridgeIntegrationRequest&, const CreateOrUpdateEventBridgeIntegrationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrUpdateEventBridgeIntegrationAsyncHandler;
			typedef Outcome<Error, Model::CreateOrUpdateIMRobotResult> CreateOrUpdateIMRobotOutcome;
			typedef std::future<CreateOrUpdateIMRobotOutcome> CreateOrUpdateIMRobotOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreateOrUpdateIMRobotRequest&, const CreateOrUpdateIMRobotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrUpdateIMRobotAsyncHandler;
			typedef Outcome<Error, Model::CreateOrUpdateNotificationPolicyResult> CreateOrUpdateNotificationPolicyOutcome;
			typedef std::future<CreateOrUpdateNotificationPolicyOutcome> CreateOrUpdateNotificationPolicyOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreateOrUpdateNotificationPolicyRequest&, const CreateOrUpdateNotificationPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrUpdateNotificationPolicyAsyncHandler;
			typedef Outcome<Error, Model::CreateOrUpdateSilencePolicyResult> CreateOrUpdateSilencePolicyOutcome;
			typedef std::future<CreateOrUpdateSilencePolicyOutcome> CreateOrUpdateSilencePolicyOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreateOrUpdateSilencePolicyRequest&, const CreateOrUpdateSilencePolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrUpdateSilencePolicyAsyncHandler;
			typedef Outcome<Error, Model::CreateOrUpdateWebhookContactResult> CreateOrUpdateWebhookContactOutcome;
			typedef std::future<CreateOrUpdateWebhookContactOutcome> CreateOrUpdateWebhookContactOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreateOrUpdateWebhookContactRequest&, const CreateOrUpdateWebhookContactOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrUpdateWebhookContactAsyncHandler;
			typedef Outcome<Error, Model::CreatePrometheusAlertRuleResult> CreatePrometheusAlertRuleOutcome;
			typedef std::future<CreatePrometheusAlertRuleOutcome> CreatePrometheusAlertRuleOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreatePrometheusAlertRuleRequest&, const CreatePrometheusAlertRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusAlertRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateRetcodeAppResult> CreateRetcodeAppOutcome;
			typedef std::future<CreateRetcodeAppOutcome> CreateRetcodeAppOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreateRetcodeAppRequest&, const CreateRetcodeAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRetcodeAppAsyncHandler;
			typedef Outcome<Error, Model::CreateSyntheticTaskResult> CreateSyntheticTaskOutcome;
			typedef std::future<CreateSyntheticTaskOutcome> CreateSyntheticTaskOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreateSyntheticTaskRequest&, const CreateSyntheticTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSyntheticTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateWebhookResult> CreateWebhookOutcome;
			typedef std::future<CreateWebhookOutcome> CreateWebhookOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreateWebhookRequest&, const CreateWebhookOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateWebhookAsyncHandler;
			typedef Outcome<Error, Model::DelAuthTokenResult> DelAuthTokenOutcome;
			typedef std::future<DelAuthTokenOutcome> DelAuthTokenOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DelAuthTokenRequest&, const DelAuthTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DelAuthTokenAsyncHandler;
			typedef Outcome<Error, Model::DeleteAlertContactResult> DeleteAlertContactOutcome;
			typedef std::future<DeleteAlertContactOutcome> DeleteAlertContactOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteAlertContactRequest&, const DeleteAlertContactOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlertContactAsyncHandler;
			typedef Outcome<Error, Model::DeleteAlertContactGroupResult> DeleteAlertContactGroupOutcome;
			typedef std::future<DeleteAlertContactGroupOutcome> DeleteAlertContactGroupOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteAlertContactGroupRequest&, const DeleteAlertContactGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlertContactGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteAlertRuleResult> DeleteAlertRuleOutcome;
			typedef std::future<DeleteAlertRuleOutcome> DeleteAlertRuleOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteAlertRuleRequest&, const DeleteAlertRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlertRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteAlertRulesResult> DeleteAlertRulesOutcome;
			typedef std::future<DeleteAlertRulesOutcome> DeleteAlertRulesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteAlertRulesRequest&, const DeleteAlertRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlertRulesAsyncHandler;
			typedef Outcome<Error, Model::DeleteCmsExporterResult> DeleteCmsExporterOutcome;
			typedef std::future<DeleteCmsExporterOutcome> DeleteCmsExporterOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteCmsExporterRequest&, const DeleteCmsExporterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCmsExporterAsyncHandler;
			typedef Outcome<Error, Model::DeleteContactResult> DeleteContactOutcome;
			typedef std::future<DeleteContactOutcome> DeleteContactOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteContactRequest&, const DeleteContactOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteContactAsyncHandler;
			typedef Outcome<Error, Model::DeleteContactGroupResult> DeleteContactGroupOutcome;
			typedef std::future<DeleteContactGroupOutcome> DeleteContactGroupOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteContactGroupRequest&, const DeleteContactGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteContactGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteDispatchRuleResult> DeleteDispatchRuleOutcome;
			typedef std::future<DeleteDispatchRuleOutcome> DeleteDispatchRuleOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteDispatchRuleRequest&, const DeleteDispatchRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDispatchRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteEventBridgeIntegrationResult> DeleteEventBridgeIntegrationOutcome;
			typedef std::future<DeleteEventBridgeIntegrationOutcome> DeleteEventBridgeIntegrationOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteEventBridgeIntegrationRequest&, const DeleteEventBridgeIntegrationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEventBridgeIntegrationAsyncHandler;
			typedef Outcome<Error, Model::DeleteGrafanaResourceResult> DeleteGrafanaResourceOutcome;
			typedef std::future<DeleteGrafanaResourceOutcome> DeleteGrafanaResourceOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteGrafanaResourceRequest&, const DeleteGrafanaResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGrafanaResourceAsyncHandler;
			typedef Outcome<Error, Model::DeleteIMRobotResult> DeleteIMRobotOutcome;
			typedef std::future<DeleteIMRobotOutcome> DeleteIMRobotOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteIMRobotRequest&, const DeleteIMRobotOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIMRobotAsyncHandler;
			typedef Outcome<Error, Model::DeleteIntegrationResult> DeleteIntegrationOutcome;
			typedef std::future<DeleteIntegrationOutcome> DeleteIntegrationOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteIntegrationRequest&, const DeleteIntegrationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIntegrationAsyncHandler;
			typedef Outcome<Error, Model::DeleteIntegrationsResult> DeleteIntegrationsOutcome;
			typedef std::future<DeleteIntegrationsOutcome> DeleteIntegrationsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteIntegrationsRequest&, const DeleteIntegrationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIntegrationsAsyncHandler;
			typedef Outcome<Error, Model::DeleteNotificationPolicyResult> DeleteNotificationPolicyOutcome;
			typedef std::future<DeleteNotificationPolicyOutcome> DeleteNotificationPolicyOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteNotificationPolicyRequest&, const DeleteNotificationPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNotificationPolicyAsyncHandler;
			typedef Outcome<Error, Model::DeletePrometheusAlertRuleResult> DeletePrometheusAlertRuleOutcome;
			typedef std::future<DeletePrometheusAlertRuleOutcome> DeletePrometheusAlertRuleOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeletePrometheusAlertRuleRequest&, const DeletePrometheusAlertRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrometheusAlertRuleAsyncHandler;
			typedef Outcome<Error, Model::DeletePrometheusGlobalViewResult> DeletePrometheusGlobalViewOutcome;
			typedef std::future<DeletePrometheusGlobalViewOutcome> DeletePrometheusGlobalViewOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeletePrometheusGlobalViewRequest&, const DeletePrometheusGlobalViewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrometheusGlobalViewAsyncHandler;
			typedef Outcome<Error, Model::DeleteRetcodeAppResult> DeleteRetcodeAppOutcome;
			typedef std::future<DeleteRetcodeAppOutcome> DeleteRetcodeAppOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteRetcodeAppRequest&, const DeleteRetcodeAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRetcodeAppAsyncHandler;
			typedef Outcome<Error, Model::DeleteScenarioResult> DeleteScenarioOutcome;
			typedef std::future<DeleteScenarioOutcome> DeleteScenarioOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteScenarioRequest&, const DeleteScenarioOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteScenarioAsyncHandler;
			typedef Outcome<Error, Model::DeleteSilencePolicyResult> DeleteSilencePolicyOutcome;
			typedef std::future<DeleteSilencePolicyOutcome> DeleteSilencePolicyOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteSilencePolicyRequest&, const DeleteSilencePolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSilencePolicyAsyncHandler;
			typedef Outcome<Error, Model::DeleteSourceMapResult> DeleteSourceMapOutcome;
			typedef std::future<DeleteSourceMapOutcome> DeleteSourceMapOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteSourceMapRequest&, const DeleteSourceMapOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSourceMapAsyncHandler;
			typedef Outcome<Error, Model::DeleteSyntheticTaskResult> DeleteSyntheticTaskOutcome;
			typedef std::future<DeleteSyntheticTaskOutcome> DeleteSyntheticTaskOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteSyntheticTaskRequest&, const DeleteSyntheticTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSyntheticTaskAsyncHandler;
			typedef Outcome<Error, Model::DeleteTraceAppResult> DeleteTraceAppOutcome;
			typedef std::future<DeleteTraceAppOutcome> DeleteTraceAppOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteTraceAppRequest&, const DeleteTraceAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTraceAppAsyncHandler;
			typedef Outcome<Error, Model::DeleteWebhookContactResult> DeleteWebhookContactOutcome;
			typedef std::future<DeleteWebhookContactOutcome> DeleteWebhookContactOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteWebhookContactRequest&, const DeleteWebhookContactOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWebhookContactAsyncHandler;
			typedef Outcome<Error, Model::DescribeContactGroupsResult> DescribeContactGroupsOutcome;
			typedef std::future<DescribeContactGroupsOutcome> DescribeContactGroupsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DescribeContactGroupsRequest&, const DescribeContactGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContactGroupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeContactsResult> DescribeContactsOutcome;
			typedef std::future<DescribeContactsOutcome> DescribeContactsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DescribeContactsRequest&, const DescribeContactsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContactsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDispatchRuleResult> DescribeDispatchRuleOutcome;
			typedef std::future<DescribeDispatchRuleOutcome> DescribeDispatchRuleOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DescribeDispatchRuleRequest&, const DescribeDispatchRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDispatchRuleAsyncHandler;
			typedef Outcome<Error, Model::DescribeIMRobotsResult> DescribeIMRobotsOutcome;
			typedef std::future<DescribeIMRobotsOutcome> DescribeIMRobotsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DescribeIMRobotsRequest&, const DescribeIMRobotsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIMRobotsAsyncHandler;
			typedef Outcome<Error, Model::DescribePrometheusAlertRuleResult> DescribePrometheusAlertRuleOutcome;
			typedef std::future<DescribePrometheusAlertRuleOutcome> DescribePrometheusAlertRuleOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DescribePrometheusAlertRuleRequest&, const DescribePrometheusAlertRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrometheusAlertRuleAsyncHandler;
			typedef Outcome<Error, Model::DescribeTraceLicenseKeyResult> DescribeTraceLicenseKeyOutcome;
			typedef std::future<DescribeTraceLicenseKeyOutcome> DescribeTraceLicenseKeyOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DescribeTraceLicenseKeyRequest&, const DescribeTraceLicenseKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTraceLicenseKeyAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebhookContactsResult> DescribeWebhookContactsOutcome;
			typedef std::future<DescribeWebhookContactsOutcome> DescribeWebhookContactsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DescribeWebhookContactsRequest&, const DescribeWebhookContactsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebhookContactsAsyncHandler;
			typedef Outcome<Error, Model::GetAgentDownloadUrlResult> GetAgentDownloadUrlOutcome;
			typedef std::future<GetAgentDownloadUrlOutcome> GetAgentDownloadUrlOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetAgentDownloadUrlRequest&, const GetAgentDownloadUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAgentDownloadUrlAsyncHandler;
			typedef Outcome<Error, Model::GetAlertRulesResult> GetAlertRulesOutcome;
			typedef std::future<GetAlertRulesOutcome> GetAlertRulesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetAlertRulesRequest&, const GetAlertRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAlertRulesAsyncHandler;
			typedef Outcome<Error, Model::GetAppApiByPageResult> GetAppApiByPageOutcome;
			typedef std::future<GetAppApiByPageOutcome> GetAppApiByPageOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetAppApiByPageRequest&, const GetAppApiByPageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAppApiByPageAsyncHandler;
			typedef Outcome<Error, Model::GetAuthTokenResult> GetAuthTokenOutcome;
			typedef std::future<GetAuthTokenOutcome> GetAuthTokenOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetAuthTokenRequest&, const GetAuthTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAuthTokenAsyncHandler;
			typedef Outcome<Error, Model::GetClusterAllUrlResult> GetClusterAllUrlOutcome;
			typedef std::future<GetClusterAllUrlOutcome> GetClusterAllUrlOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetClusterAllUrlRequest&, const GetClusterAllUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetClusterAllUrlAsyncHandler;
			typedef Outcome<Error, Model::GetExploreUrlResult> GetExploreUrlOutcome;
			typedef std::future<GetExploreUrlOutcome> GetExploreUrlOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetExploreUrlRequest&, const GetExploreUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetExploreUrlAsyncHandler;
			typedef Outcome<Error, Model::GetIntegrationStateResult> GetIntegrationStateOutcome;
			typedef std::future<GetIntegrationStateOutcome> GetIntegrationStateOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetIntegrationStateRequest&, const GetIntegrationStateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetIntegrationStateAsyncHandler;
			typedef Outcome<Error, Model::GetManagedPrometheusStatusResult> GetManagedPrometheusStatusOutcome;
			typedef std::future<GetManagedPrometheusStatusOutcome> GetManagedPrometheusStatusOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetManagedPrometheusStatusRequest&, const GetManagedPrometheusStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetManagedPrometheusStatusAsyncHandler;
			typedef Outcome<Error, Model::GetMultipleTraceResult> GetMultipleTraceOutcome;
			typedef std::future<GetMultipleTraceOutcome> GetMultipleTraceOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetMultipleTraceRequest&, const GetMultipleTraceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMultipleTraceAsyncHandler;
			typedef Outcome<Error, Model::GetOnCallSchedulesDetailResult> GetOnCallSchedulesDetailOutcome;
			typedef std::future<GetOnCallSchedulesDetailOutcome> GetOnCallSchedulesDetailOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetOnCallSchedulesDetailRequest&, const GetOnCallSchedulesDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOnCallSchedulesDetailAsyncHandler;
			typedef Outcome<Error, Model::GetPrometheusApiTokenResult> GetPrometheusApiTokenOutcome;
			typedef std::future<GetPrometheusApiTokenOutcome> GetPrometheusApiTokenOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetPrometheusApiTokenRequest&, const GetPrometheusApiTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPrometheusApiTokenAsyncHandler;
			typedef Outcome<Error, Model::GetPrometheusGlobalViewResult> GetPrometheusGlobalViewOutcome;
			typedef std::future<GetPrometheusGlobalViewOutcome> GetPrometheusGlobalViewOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetPrometheusGlobalViewRequest&, const GetPrometheusGlobalViewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPrometheusGlobalViewAsyncHandler;
			typedef Outcome<Error, Model::GetRecordingRuleResult> GetRecordingRuleOutcome;
			typedef std::future<GetRecordingRuleOutcome> GetRecordingRuleOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetRecordingRuleRequest&, const GetRecordingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRecordingRuleAsyncHandler;
			typedef Outcome<Error, Model::GetRetcodeShareUrlResult> GetRetcodeShareUrlOutcome;
			typedef std::future<GetRetcodeShareUrlOutcome> GetRetcodeShareUrlOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetRetcodeShareUrlRequest&, const GetRetcodeShareUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRetcodeShareUrlAsyncHandler;
			typedef Outcome<Error, Model::GetSourceMapInfoResult> GetSourceMapInfoOutcome;
			typedef std::future<GetSourceMapInfoOutcome> GetSourceMapInfoOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetSourceMapInfoRequest&, const GetSourceMapInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSourceMapInfoAsyncHandler;
			typedef Outcome<Error, Model::GetStackResult> GetStackOutcome;
			typedef std::future<GetStackOutcome> GetStackOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetStackRequest&, const GetStackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetStackAsyncHandler;
			typedef Outcome<Error, Model::GetSyntheticTaskDetailResult> GetSyntheticTaskDetailOutcome;
			typedef std::future<GetSyntheticTaskDetailOutcome> GetSyntheticTaskDetailOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetSyntheticTaskDetailRequest&, const GetSyntheticTaskDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSyntheticTaskDetailAsyncHandler;
			typedef Outcome<Error, Model::GetSyntheticTaskListResult> GetSyntheticTaskListOutcome;
			typedef std::future<GetSyntheticTaskListOutcome> GetSyntheticTaskListOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetSyntheticTaskListRequest&, const GetSyntheticTaskListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSyntheticTaskListAsyncHandler;
			typedef Outcome<Error, Model::GetSyntheticTaskMonitorsResult> GetSyntheticTaskMonitorsOutcome;
			typedef std::future<GetSyntheticTaskMonitorsOutcome> GetSyntheticTaskMonitorsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetSyntheticTaskMonitorsRequest&, const GetSyntheticTaskMonitorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSyntheticTaskMonitorsAsyncHandler;
			typedef Outcome<Error, Model::GetTraceResult> GetTraceOutcome;
			typedef std::future<GetTraceOutcome> GetTraceOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetTraceRequest&, const GetTraceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTraceAsyncHandler;
			typedef Outcome<Error, Model::GetTraceAppResult> GetTraceAppOutcome;
			typedef std::future<GetTraceAppOutcome> GetTraceAppOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetTraceAppRequest&, const GetTraceAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTraceAppAsyncHandler;
			typedef Outcome<Error, Model::ImportAppAlertRulesResult> ImportAppAlertRulesOutcome;
			typedef std::future<ImportAppAlertRulesOutcome> ImportAppAlertRulesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ImportAppAlertRulesRequest&, const ImportAppAlertRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportAppAlertRulesAsyncHandler;
			typedef Outcome<Error, Model::InstallCmsExporterResult> InstallCmsExporterOutcome;
			typedef std::future<InstallCmsExporterOutcome> InstallCmsExporterOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::InstallCmsExporterRequest&, const InstallCmsExporterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InstallCmsExporterAsyncHandler;
			typedef Outcome<Error, Model::InstallManagedPrometheusResult> InstallManagedPrometheusOutcome;
			typedef std::future<InstallManagedPrometheusOutcome> InstallManagedPrometheusOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::InstallManagedPrometheusRequest&, const InstallManagedPrometheusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InstallManagedPrometheusAsyncHandler;
			typedef Outcome<Error, Model::ListActivatedAlertsResult> ListActivatedAlertsOutcome;
			typedef std::future<ListActivatedAlertsOutcome> ListActivatedAlertsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListActivatedAlertsRequest&, const ListActivatedAlertsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListActivatedAlertsAsyncHandler;
			typedef Outcome<Error, Model::ListAlertEventsResult> ListAlertEventsOutcome;
			typedef std::future<ListAlertEventsOutcome> ListAlertEventsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListAlertEventsRequest&, const ListAlertEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAlertEventsAsyncHandler;
			typedef Outcome<Error, Model::ListAlertsResult> ListAlertsOutcome;
			typedef std::future<ListAlertsOutcome> ListAlertsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListAlertsRequest&, const ListAlertsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAlertsAsyncHandler;
			typedef Outcome<Error, Model::ListClusterFromGrafanaResult> ListClusterFromGrafanaOutcome;
			typedef std::future<ListClusterFromGrafanaOutcome> ListClusterFromGrafanaOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListClusterFromGrafanaRequest&, const ListClusterFromGrafanaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterFromGrafanaAsyncHandler;
			typedef Outcome<Error, Model::ListCmsInstancesResult> ListCmsInstancesOutcome;
			typedef std::future<ListCmsInstancesOutcome> ListCmsInstancesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListCmsInstancesRequest&, const ListCmsInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCmsInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListDashboardsResult> ListDashboardsOutcome;
			typedef std::future<ListDashboardsOutcome> ListDashboardsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListDashboardsRequest&, const ListDashboardsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDashboardsAsyncHandler;
			typedef Outcome<Error, Model::ListDashboardsByNameResult> ListDashboardsByNameOutcome;
			typedef std::future<ListDashboardsByNameOutcome> ListDashboardsByNameOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListDashboardsByNameRequest&, const ListDashboardsByNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDashboardsByNameAsyncHandler;
			typedef Outcome<Error, Model::ListDispatchRuleResult> ListDispatchRuleOutcome;
			typedef std::future<ListDispatchRuleOutcome> ListDispatchRuleOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListDispatchRuleRequest&, const ListDispatchRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDispatchRuleAsyncHandler;
			typedef Outcome<Error, Model::ListEscalationPoliciesResult> ListEscalationPoliciesOutcome;
			typedef std::future<ListEscalationPoliciesOutcome> ListEscalationPoliciesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListEscalationPoliciesRequest&, const ListEscalationPoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEscalationPoliciesAsyncHandler;
			typedef Outcome<Error, Model::ListEventBridgeIntegrationsResult> ListEventBridgeIntegrationsOutcome;
			typedef std::future<ListEventBridgeIntegrationsOutcome> ListEventBridgeIntegrationsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListEventBridgeIntegrationsRequest&, const ListEventBridgeIntegrationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEventBridgeIntegrationsAsyncHandler;
			typedef Outcome<Error, Model::ListInsightsEventsResult> ListInsightsEventsOutcome;
			typedef std::future<ListInsightsEventsOutcome> ListInsightsEventsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListInsightsEventsRequest&, const ListInsightsEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInsightsEventsAsyncHandler;
			typedef Outcome<Error, Model::ListIntegrationResult> ListIntegrationOutcome;
			typedef std::future<ListIntegrationOutcome> ListIntegrationOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListIntegrationRequest&, const ListIntegrationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListIntegrationAsyncHandler;
			typedef Outcome<Error, Model::ListNotificationPoliciesResult> ListNotificationPoliciesOutcome;
			typedef std::future<ListNotificationPoliciesOutcome> ListNotificationPoliciesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListNotificationPoliciesRequest&, const ListNotificationPoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNotificationPoliciesAsyncHandler;
			typedef Outcome<Error, Model::ListOnCallSchedulesResult> ListOnCallSchedulesOutcome;
			typedef std::future<ListOnCallSchedulesOutcome> ListOnCallSchedulesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListOnCallSchedulesRequest&, const ListOnCallSchedulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOnCallSchedulesAsyncHandler;
			typedef Outcome<Error, Model::ListPrometheusAlertRulesResult> ListPrometheusAlertRulesOutcome;
			typedef std::future<ListPrometheusAlertRulesOutcome> ListPrometheusAlertRulesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListPrometheusAlertRulesRequest&, const ListPrometheusAlertRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPrometheusAlertRulesAsyncHandler;
			typedef Outcome<Error, Model::ListPrometheusAlertTemplatesResult> ListPrometheusAlertTemplatesOutcome;
			typedef std::future<ListPrometheusAlertTemplatesOutcome> ListPrometheusAlertTemplatesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListPrometheusAlertTemplatesRequest&, const ListPrometheusAlertTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPrometheusAlertTemplatesAsyncHandler;
			typedef Outcome<Error, Model::ListPrometheusGlobalViewResult> ListPrometheusGlobalViewOutcome;
			typedef std::future<ListPrometheusGlobalViewOutcome> ListPrometheusGlobalViewOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListPrometheusGlobalViewRequest&, const ListPrometheusGlobalViewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPrometheusGlobalViewAsyncHandler;
			typedef Outcome<Error, Model::ListPrometheusInstancesResult> ListPrometheusInstancesOutcome;
			typedef std::future<ListPrometheusInstancesOutcome> ListPrometheusInstancesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListPrometheusInstancesRequest&, const ListPrometheusInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPrometheusInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListRetcodeAppsResult> ListRetcodeAppsOutcome;
			typedef std::future<ListRetcodeAppsOutcome> ListRetcodeAppsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListRetcodeAppsRequest&, const ListRetcodeAppsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRetcodeAppsAsyncHandler;
			typedef Outcome<Error, Model::ListScenarioResult> ListScenarioOutcome;
			typedef std::future<ListScenarioOutcome> ListScenarioOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListScenarioRequest&, const ListScenarioOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListScenarioAsyncHandler;
			typedef Outcome<Error, Model::ListSilencePoliciesResult> ListSilencePoliciesOutcome;
			typedef std::future<ListSilencePoliciesOutcome> ListSilencePoliciesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListSilencePoliciesRequest&, const ListSilencePoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSilencePoliciesAsyncHandler;
			typedef Outcome<Error, Model::ListTraceAppsResult> ListTraceAppsOutcome;
			typedef std::future<ListTraceAppsOutcome> ListTraceAppsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListTraceAppsRequest&, const ListTraceAppsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTraceAppsAsyncHandler;
			typedef Outcome<Error, Model::ManageGetRecordingRuleResult> ManageGetRecordingRuleOutcome;
			typedef std::future<ManageGetRecordingRuleOutcome> ManageGetRecordingRuleOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ManageGetRecordingRuleRequest&, const ManageGetRecordingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ManageGetRecordingRuleAsyncHandler;
			typedef Outcome<Error, Model::ManageRecordingRuleResult> ManageRecordingRuleOutcome;
			typedef std::future<ManageRecordingRuleOutcome> ManageRecordingRuleOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ManageRecordingRuleRequest&, const ManageRecordingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ManageRecordingRuleAsyncHandler;
			typedef Outcome<Error, Model::OpenArmsDefaultSLRResult> OpenArmsDefaultSLROutcome;
			typedef std::future<OpenArmsDefaultSLROutcome> OpenArmsDefaultSLROutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::OpenArmsDefaultSLRRequest&, const OpenArmsDefaultSLROutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenArmsDefaultSLRAsyncHandler;
			typedef Outcome<Error, Model::OpenArmsServiceSecondVersionResult> OpenArmsServiceSecondVersionOutcome;
			typedef std::future<OpenArmsServiceSecondVersionOutcome> OpenArmsServiceSecondVersionOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::OpenArmsServiceSecondVersionRequest&, const OpenArmsServiceSecondVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenArmsServiceSecondVersionAsyncHandler;
			typedef Outcome<Error, Model::OpenVClusterResult> OpenVClusterOutcome;
			typedef std::future<OpenVClusterOutcome> OpenVClusterOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::OpenVClusterRequest&, const OpenVClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenVClusterAsyncHandler;
			typedef Outcome<Error, Model::OpenXtraceDefaultSLRResult> OpenXtraceDefaultSLROutcome;
			typedef std::future<OpenXtraceDefaultSLROutcome> OpenXtraceDefaultSLROutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::OpenXtraceDefaultSLRRequest&, const OpenXtraceDefaultSLROutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenXtraceDefaultSLRAsyncHandler;
			typedef Outcome<Error, Model::QueryMetricByPageResult> QueryMetricByPageOutcome;
			typedef std::future<QueryMetricByPageOutcome> QueryMetricByPageOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::QueryMetricByPageRequest&, const QueryMetricByPageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMetricByPageAsyncHandler;
			typedef Outcome<Error, Model::QueryPromInstallStatusResult> QueryPromInstallStatusOutcome;
			typedef std::future<QueryPromInstallStatusOutcome> QueryPromInstallStatusOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::QueryPromInstallStatusRequest&, const QueryPromInstallStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryPromInstallStatusAsyncHandler;
			typedef Outcome<Error, Model::QueryReleaseMetricResult> QueryReleaseMetricOutcome;
			typedef std::future<QueryReleaseMetricOutcome> QueryReleaseMetricOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::QueryReleaseMetricRequest&, const QueryReleaseMetricOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryReleaseMetricAsyncHandler;
			typedef Outcome<Error, Model::RemoveAliClusterIdsFromPrometheusGlobalViewResult> RemoveAliClusterIdsFromPrometheusGlobalViewOutcome;
			typedef std::future<RemoveAliClusterIdsFromPrometheusGlobalViewOutcome> RemoveAliClusterIdsFromPrometheusGlobalViewOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::RemoveAliClusterIdsFromPrometheusGlobalViewRequest&, const RemoveAliClusterIdsFromPrometheusGlobalViewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveAliClusterIdsFromPrometheusGlobalViewAsyncHandler;
			typedef Outcome<Error, Model::RemoveSourcesFromPrometheusGlobalViewResult> RemoveSourcesFromPrometheusGlobalViewOutcome;
			typedef std::future<RemoveSourcesFromPrometheusGlobalViewOutcome> RemoveSourcesFromPrometheusGlobalViewOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::RemoveSourcesFromPrometheusGlobalViewRequest&, const RemoveSourcesFromPrometheusGlobalViewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveSourcesFromPrometheusGlobalViewAsyncHandler;
			typedef Outcome<Error, Model::SaveTraceAppConfigResult> SaveTraceAppConfigOutcome;
			typedef std::future<SaveTraceAppConfigOutcome> SaveTraceAppConfigOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::SaveTraceAppConfigRequest&, const SaveTraceAppConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SaveTraceAppConfigAsyncHandler;
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
			typedef Outcome<Error, Model::SendTTSVerifyLinkResult> SendTTSVerifyLinkOutcome;
			typedef std::future<SendTTSVerifyLinkOutcome> SendTTSVerifyLinkOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::SendTTSVerifyLinkRequest&, const SendTTSVerifyLinkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SendTTSVerifyLinkAsyncHandler;
			typedef Outcome<Error, Model::SetRetcodeShareStatusResult> SetRetcodeShareStatusOutcome;
			typedef std::future<SetRetcodeShareStatusOutcome> SetRetcodeShareStatusOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::SetRetcodeShareStatusRequest&, const SetRetcodeShareStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetRetcodeShareStatusAsyncHandler;
			typedef Outcome<Error, Model::StartAlertResult> StartAlertOutcome;
			typedef std::future<StartAlertOutcome> StartAlertOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::StartAlertRequest&, const StartAlertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartAlertAsyncHandler;
			typedef Outcome<Error, Model::StopAlertResult> StopAlertOutcome;
			typedef std::future<StopAlertOutcome> StopAlertOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::StopAlertRequest&, const StopAlertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopAlertAsyncHandler;
			typedef Outcome<Error, Model::SwitchSyntheticTaskStatusResult> SwitchSyntheticTaskStatusOutcome;
			typedef std::future<SwitchSyntheticTaskStatusOutcome> SwitchSyntheticTaskStatusOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::SwitchSyntheticTaskStatusRequest&, const SwitchSyntheticTaskStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchSyntheticTaskStatusAsyncHandler;
			typedef Outcome<Error, Model::SyncRecordingRulesResult> SyncRecordingRulesOutcome;
			typedef std::future<SyncRecordingRulesOutcome> SyncRecordingRulesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::SyncRecordingRulesRequest&, const SyncRecordingRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SyncRecordingRulesAsyncHandler;
			typedef Outcome<Error, Model::TurnOnSecondSwitchResult> TurnOnSecondSwitchOutcome;
			typedef std::future<TurnOnSecondSwitchOutcome> TurnOnSecondSwitchOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::TurnOnSecondSwitchRequest&, const TurnOnSecondSwitchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TurnOnSecondSwitchAsyncHandler;
			typedef Outcome<Error, Model::UninstallManagedPrometheusResult> UninstallManagedPrometheusOutcome;
			typedef std::future<UninstallManagedPrometheusOutcome> UninstallManagedPrometheusOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UninstallManagedPrometheusRequest&, const UninstallManagedPrometheusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UninstallManagedPrometheusAsyncHandler;
			typedef Outcome<Error, Model::UninstallPromClusterResult> UninstallPromClusterOutcome;
			typedef std::future<UninstallPromClusterOutcome> UninstallPromClusterOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UninstallPromClusterRequest&, const UninstallPromClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UninstallPromClusterAsyncHandler;
			typedef Outcome<Error, Model::UpdateAlertContactResult> UpdateAlertContactOutcome;
			typedef std::future<UpdateAlertContactOutcome> UpdateAlertContactOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UpdateAlertContactRequest&, const UpdateAlertContactOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAlertContactAsyncHandler;
			typedef Outcome<Error, Model::UpdateAlertContactGroupResult> UpdateAlertContactGroupOutcome;
			typedef std::future<UpdateAlertContactGroupOutcome> UpdateAlertContactGroupOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UpdateAlertContactGroupRequest&, const UpdateAlertContactGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAlertContactGroupAsyncHandler;
			typedef Outcome<Error, Model::UpdateAlertRuleResult> UpdateAlertRuleOutcome;
			typedef std::future<UpdateAlertRuleOutcome> UpdateAlertRuleOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UpdateAlertRuleRequest&, const UpdateAlertRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAlertRuleAsyncHandler;
			typedef Outcome<Error, Model::UpdateDispatchRuleResult> UpdateDispatchRuleOutcome;
			typedef std::future<UpdateDispatchRuleOutcome> UpdateDispatchRuleOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UpdateDispatchRuleRequest&, const UpdateDispatchRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDispatchRuleAsyncHandler;
			typedef Outcome<Error, Model::UpdateIntegrationResult> UpdateIntegrationOutcome;
			typedef std::future<UpdateIntegrationOutcome> UpdateIntegrationOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UpdateIntegrationRequest&, const UpdateIntegrationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateIntegrationAsyncHandler;
			typedef Outcome<Error, Model::UpdatePrometheusAlertRuleResult> UpdatePrometheusAlertRuleOutcome;
			typedef std::future<UpdatePrometheusAlertRuleOutcome> UpdatePrometheusAlertRuleOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UpdatePrometheusAlertRuleRequest&, const UpdatePrometheusAlertRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePrometheusAlertRuleAsyncHandler;
			typedef Outcome<Error, Model::UpdateWebhookResult> UpdateWebhookOutcome;
			typedef std::future<UpdateWebhookOutcome> UpdateWebhookOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UpdateWebhookRequest&, const UpdateWebhookOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWebhookAsyncHandler;
			typedef Outcome<Error, Model::UploadResult> UploadOutcome;
			typedef std::future<UploadOutcome> UploadOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UploadRequest&, const UploadOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadAsyncHandler;

			ARMSClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ARMSClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ARMSClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ARMSClient();
			AddAliClusterIdsToPrometheusGlobalViewOutcome addAliClusterIdsToPrometheusGlobalView(const Model::AddAliClusterIdsToPrometheusGlobalViewRequest &request)const;
			void addAliClusterIdsToPrometheusGlobalViewAsync(const Model::AddAliClusterIdsToPrometheusGlobalViewRequest& request, const AddAliClusterIdsToPrometheusGlobalViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddAliClusterIdsToPrometheusGlobalViewOutcomeCallable addAliClusterIdsToPrometheusGlobalViewCallable(const Model::AddAliClusterIdsToPrometheusGlobalViewRequest& request) const;
			AddGrafanaOutcome addGrafana(const Model::AddGrafanaRequest &request)const;
			void addGrafanaAsync(const Model::AddGrafanaRequest& request, const AddGrafanaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddGrafanaOutcomeCallable addGrafanaCallable(const Model::AddGrafanaRequest& request) const;
			AddIntegrationOutcome addIntegration(const Model::AddIntegrationRequest &request)const;
			void addIntegrationAsync(const Model::AddIntegrationRequest& request, const AddIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddIntegrationOutcomeCallable addIntegrationCallable(const Model::AddIntegrationRequest& request) const;
			AddPrometheusGlobalViewOutcome addPrometheusGlobalView(const Model::AddPrometheusGlobalViewRequest &request)const;
			void addPrometheusGlobalViewAsync(const Model::AddPrometheusGlobalViewRequest& request, const AddPrometheusGlobalViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddPrometheusGlobalViewOutcomeCallable addPrometheusGlobalViewCallable(const Model::AddPrometheusGlobalViewRequest& request) const;
			AddPrometheusGlobalViewByAliClusterIdsOutcome addPrometheusGlobalViewByAliClusterIds(const Model::AddPrometheusGlobalViewByAliClusterIdsRequest &request)const;
			void addPrometheusGlobalViewByAliClusterIdsAsync(const Model::AddPrometheusGlobalViewByAliClusterIdsRequest& request, const AddPrometheusGlobalViewByAliClusterIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddPrometheusGlobalViewByAliClusterIdsOutcomeCallable addPrometheusGlobalViewByAliClusterIdsCallable(const Model::AddPrometheusGlobalViewByAliClusterIdsRequest& request) const;
			AddPrometheusInstanceOutcome addPrometheusInstance(const Model::AddPrometheusInstanceRequest &request)const;
			void addPrometheusInstanceAsync(const Model::AddPrometheusInstanceRequest& request, const AddPrometheusInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddPrometheusInstanceOutcomeCallable addPrometheusInstanceCallable(const Model::AddPrometheusInstanceRequest& request) const;
			AddRecordingRuleOutcome addRecordingRule(const Model::AddRecordingRuleRequest &request)const;
			void addRecordingRuleAsync(const Model::AddRecordingRuleRequest& request, const AddRecordingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddRecordingRuleOutcomeCallable addRecordingRuleCallable(const Model::AddRecordingRuleRequest& request) const;
			AppendInstancesToPrometheusGlobalViewOutcome appendInstancesToPrometheusGlobalView(const Model::AppendInstancesToPrometheusGlobalViewRequest &request)const;
			void appendInstancesToPrometheusGlobalViewAsync(const Model::AppendInstancesToPrometheusGlobalViewRequest& request, const AppendInstancesToPrometheusGlobalViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AppendInstancesToPrometheusGlobalViewOutcomeCallable appendInstancesToPrometheusGlobalViewCallable(const Model::AppendInstancesToPrometheusGlobalViewRequest& request) const;
			ApplyScenarioOutcome applyScenario(const Model::ApplyScenarioRequest &request)const;
			void applyScenarioAsync(const Model::ApplyScenarioRequest& request, const ApplyScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ApplyScenarioOutcomeCallable applyScenarioCallable(const Model::ApplyScenarioRequest& request) const;
			CheckServiceStatusOutcome checkServiceStatus(const Model::CheckServiceStatusRequest &request)const;
			void checkServiceStatusAsync(const Model::CheckServiceStatusRequest& request, const CheckServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckServiceStatusOutcomeCallable checkServiceStatusCallable(const Model::CheckServiceStatusRequest& request) const;
			ConfigAppOutcome configApp(const Model::ConfigAppRequest &request)const;
			void configAppAsync(const Model::ConfigAppRequest& request, const ConfigAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigAppOutcomeCallable configAppCallable(const Model::ConfigAppRequest& request) const;
			CreateAlertContactOutcome createAlertContact(const Model::CreateAlertContactRequest &request)const;
			void createAlertContactAsync(const Model::CreateAlertContactRequest& request, const CreateAlertContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAlertContactOutcomeCallable createAlertContactCallable(const Model::CreateAlertContactRequest& request) const;
			CreateAlertContactGroupOutcome createAlertContactGroup(const Model::CreateAlertContactGroupRequest &request)const;
			void createAlertContactGroupAsync(const Model::CreateAlertContactGroupRequest& request, const CreateAlertContactGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAlertContactGroupOutcomeCallable createAlertContactGroupCallable(const Model::CreateAlertContactGroupRequest& request) const;
			CreateDispatchRuleOutcome createDispatchRule(const Model::CreateDispatchRuleRequest &request)const;
			void createDispatchRuleAsync(const Model::CreateDispatchRuleRequest& request, const CreateDispatchRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDispatchRuleOutcomeCallable createDispatchRuleCallable(const Model::CreateDispatchRuleRequest& request) const;
			CreateIntegrationOutcome createIntegration(const Model::CreateIntegrationRequest &request)const;
			void createIntegrationAsync(const Model::CreateIntegrationRequest& request, const CreateIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateIntegrationOutcomeCallable createIntegrationCallable(const Model::CreateIntegrationRequest& request) const;
			CreateOrUpdateAlertRuleOutcome createOrUpdateAlertRule(const Model::CreateOrUpdateAlertRuleRequest &request)const;
			void createOrUpdateAlertRuleAsync(const Model::CreateOrUpdateAlertRuleRequest& request, const CreateOrUpdateAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrUpdateAlertRuleOutcomeCallable createOrUpdateAlertRuleCallable(const Model::CreateOrUpdateAlertRuleRequest& request) const;
			CreateOrUpdateContactOutcome createOrUpdateContact(const Model::CreateOrUpdateContactRequest &request)const;
			void createOrUpdateContactAsync(const Model::CreateOrUpdateContactRequest& request, const CreateOrUpdateContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrUpdateContactOutcomeCallable createOrUpdateContactCallable(const Model::CreateOrUpdateContactRequest& request) const;
			CreateOrUpdateContactGroupOutcome createOrUpdateContactGroup(const Model::CreateOrUpdateContactGroupRequest &request)const;
			void createOrUpdateContactGroupAsync(const Model::CreateOrUpdateContactGroupRequest& request, const CreateOrUpdateContactGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrUpdateContactGroupOutcomeCallable createOrUpdateContactGroupCallable(const Model::CreateOrUpdateContactGroupRequest& request) const;
			CreateOrUpdateEventBridgeIntegrationOutcome createOrUpdateEventBridgeIntegration(const Model::CreateOrUpdateEventBridgeIntegrationRequest &request)const;
			void createOrUpdateEventBridgeIntegrationAsync(const Model::CreateOrUpdateEventBridgeIntegrationRequest& request, const CreateOrUpdateEventBridgeIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrUpdateEventBridgeIntegrationOutcomeCallable createOrUpdateEventBridgeIntegrationCallable(const Model::CreateOrUpdateEventBridgeIntegrationRequest& request) const;
			CreateOrUpdateIMRobotOutcome createOrUpdateIMRobot(const Model::CreateOrUpdateIMRobotRequest &request)const;
			void createOrUpdateIMRobotAsync(const Model::CreateOrUpdateIMRobotRequest& request, const CreateOrUpdateIMRobotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrUpdateIMRobotOutcomeCallable createOrUpdateIMRobotCallable(const Model::CreateOrUpdateIMRobotRequest& request) const;
			CreateOrUpdateNotificationPolicyOutcome createOrUpdateNotificationPolicy(const Model::CreateOrUpdateNotificationPolicyRequest &request)const;
			void createOrUpdateNotificationPolicyAsync(const Model::CreateOrUpdateNotificationPolicyRequest& request, const CreateOrUpdateNotificationPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrUpdateNotificationPolicyOutcomeCallable createOrUpdateNotificationPolicyCallable(const Model::CreateOrUpdateNotificationPolicyRequest& request) const;
			CreateOrUpdateSilencePolicyOutcome createOrUpdateSilencePolicy(const Model::CreateOrUpdateSilencePolicyRequest &request)const;
			void createOrUpdateSilencePolicyAsync(const Model::CreateOrUpdateSilencePolicyRequest& request, const CreateOrUpdateSilencePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrUpdateSilencePolicyOutcomeCallable createOrUpdateSilencePolicyCallable(const Model::CreateOrUpdateSilencePolicyRequest& request) const;
			CreateOrUpdateWebhookContactOutcome createOrUpdateWebhookContact(const Model::CreateOrUpdateWebhookContactRequest &request)const;
			void createOrUpdateWebhookContactAsync(const Model::CreateOrUpdateWebhookContactRequest& request, const CreateOrUpdateWebhookContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrUpdateWebhookContactOutcomeCallable createOrUpdateWebhookContactCallable(const Model::CreateOrUpdateWebhookContactRequest& request) const;
			CreatePrometheusAlertRuleOutcome createPrometheusAlertRule(const Model::CreatePrometheusAlertRuleRequest &request)const;
			void createPrometheusAlertRuleAsync(const Model::CreatePrometheusAlertRuleRequest& request, const CreatePrometheusAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePrometheusAlertRuleOutcomeCallable createPrometheusAlertRuleCallable(const Model::CreatePrometheusAlertRuleRequest& request) const;
			CreateRetcodeAppOutcome createRetcodeApp(const Model::CreateRetcodeAppRequest &request)const;
			void createRetcodeAppAsync(const Model::CreateRetcodeAppRequest& request, const CreateRetcodeAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRetcodeAppOutcomeCallable createRetcodeAppCallable(const Model::CreateRetcodeAppRequest& request) const;
			CreateSyntheticTaskOutcome createSyntheticTask(const Model::CreateSyntheticTaskRequest &request)const;
			void createSyntheticTaskAsync(const Model::CreateSyntheticTaskRequest& request, const CreateSyntheticTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSyntheticTaskOutcomeCallable createSyntheticTaskCallable(const Model::CreateSyntheticTaskRequest& request) const;
			CreateWebhookOutcome createWebhook(const Model::CreateWebhookRequest &request)const;
			void createWebhookAsync(const Model::CreateWebhookRequest& request, const CreateWebhookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateWebhookOutcomeCallable createWebhookCallable(const Model::CreateWebhookRequest& request) const;
			DelAuthTokenOutcome delAuthToken(const Model::DelAuthTokenRequest &request)const;
			void delAuthTokenAsync(const Model::DelAuthTokenRequest& request, const DelAuthTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DelAuthTokenOutcomeCallable delAuthTokenCallable(const Model::DelAuthTokenRequest& request) const;
			DeleteAlertContactOutcome deleteAlertContact(const Model::DeleteAlertContactRequest &request)const;
			void deleteAlertContactAsync(const Model::DeleteAlertContactRequest& request, const DeleteAlertContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAlertContactOutcomeCallable deleteAlertContactCallable(const Model::DeleteAlertContactRequest& request) const;
			DeleteAlertContactGroupOutcome deleteAlertContactGroup(const Model::DeleteAlertContactGroupRequest &request)const;
			void deleteAlertContactGroupAsync(const Model::DeleteAlertContactGroupRequest& request, const DeleteAlertContactGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAlertContactGroupOutcomeCallable deleteAlertContactGroupCallable(const Model::DeleteAlertContactGroupRequest& request) const;
			DeleteAlertRuleOutcome deleteAlertRule(const Model::DeleteAlertRuleRequest &request)const;
			void deleteAlertRuleAsync(const Model::DeleteAlertRuleRequest& request, const DeleteAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAlertRuleOutcomeCallable deleteAlertRuleCallable(const Model::DeleteAlertRuleRequest& request) const;
			DeleteAlertRulesOutcome deleteAlertRules(const Model::DeleteAlertRulesRequest &request)const;
			void deleteAlertRulesAsync(const Model::DeleteAlertRulesRequest& request, const DeleteAlertRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAlertRulesOutcomeCallable deleteAlertRulesCallable(const Model::DeleteAlertRulesRequest& request) const;
			DeleteCmsExporterOutcome deleteCmsExporter(const Model::DeleteCmsExporterRequest &request)const;
			void deleteCmsExporterAsync(const Model::DeleteCmsExporterRequest& request, const DeleteCmsExporterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCmsExporterOutcomeCallable deleteCmsExporterCallable(const Model::DeleteCmsExporterRequest& request) const;
			DeleteContactOutcome deleteContact(const Model::DeleteContactRequest &request)const;
			void deleteContactAsync(const Model::DeleteContactRequest& request, const DeleteContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteContactOutcomeCallable deleteContactCallable(const Model::DeleteContactRequest& request) const;
			DeleteContactGroupOutcome deleteContactGroup(const Model::DeleteContactGroupRequest &request)const;
			void deleteContactGroupAsync(const Model::DeleteContactGroupRequest& request, const DeleteContactGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteContactGroupOutcomeCallable deleteContactGroupCallable(const Model::DeleteContactGroupRequest& request) const;
			DeleteDispatchRuleOutcome deleteDispatchRule(const Model::DeleteDispatchRuleRequest &request)const;
			void deleteDispatchRuleAsync(const Model::DeleteDispatchRuleRequest& request, const DeleteDispatchRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDispatchRuleOutcomeCallable deleteDispatchRuleCallable(const Model::DeleteDispatchRuleRequest& request) const;
			DeleteEventBridgeIntegrationOutcome deleteEventBridgeIntegration(const Model::DeleteEventBridgeIntegrationRequest &request)const;
			void deleteEventBridgeIntegrationAsync(const Model::DeleteEventBridgeIntegrationRequest& request, const DeleteEventBridgeIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEventBridgeIntegrationOutcomeCallable deleteEventBridgeIntegrationCallable(const Model::DeleteEventBridgeIntegrationRequest& request) const;
			DeleteGrafanaResourceOutcome deleteGrafanaResource(const Model::DeleteGrafanaResourceRequest &request)const;
			void deleteGrafanaResourceAsync(const Model::DeleteGrafanaResourceRequest& request, const DeleteGrafanaResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGrafanaResourceOutcomeCallable deleteGrafanaResourceCallable(const Model::DeleteGrafanaResourceRequest& request) const;
			DeleteIMRobotOutcome deleteIMRobot(const Model::DeleteIMRobotRequest &request)const;
			void deleteIMRobotAsync(const Model::DeleteIMRobotRequest& request, const DeleteIMRobotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteIMRobotOutcomeCallable deleteIMRobotCallable(const Model::DeleteIMRobotRequest& request) const;
			DeleteIntegrationOutcome deleteIntegration(const Model::DeleteIntegrationRequest &request)const;
			void deleteIntegrationAsync(const Model::DeleteIntegrationRequest& request, const DeleteIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteIntegrationOutcomeCallable deleteIntegrationCallable(const Model::DeleteIntegrationRequest& request) const;
			DeleteIntegrationsOutcome deleteIntegrations(const Model::DeleteIntegrationsRequest &request)const;
			void deleteIntegrationsAsync(const Model::DeleteIntegrationsRequest& request, const DeleteIntegrationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteIntegrationsOutcomeCallable deleteIntegrationsCallable(const Model::DeleteIntegrationsRequest& request) const;
			DeleteNotificationPolicyOutcome deleteNotificationPolicy(const Model::DeleteNotificationPolicyRequest &request)const;
			void deleteNotificationPolicyAsync(const Model::DeleteNotificationPolicyRequest& request, const DeleteNotificationPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNotificationPolicyOutcomeCallable deleteNotificationPolicyCallable(const Model::DeleteNotificationPolicyRequest& request) const;
			DeletePrometheusAlertRuleOutcome deletePrometheusAlertRule(const Model::DeletePrometheusAlertRuleRequest &request)const;
			void deletePrometheusAlertRuleAsync(const Model::DeletePrometheusAlertRuleRequest& request, const DeletePrometheusAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePrometheusAlertRuleOutcomeCallable deletePrometheusAlertRuleCallable(const Model::DeletePrometheusAlertRuleRequest& request) const;
			DeletePrometheusGlobalViewOutcome deletePrometheusGlobalView(const Model::DeletePrometheusGlobalViewRequest &request)const;
			void deletePrometheusGlobalViewAsync(const Model::DeletePrometheusGlobalViewRequest& request, const DeletePrometheusGlobalViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePrometheusGlobalViewOutcomeCallable deletePrometheusGlobalViewCallable(const Model::DeletePrometheusGlobalViewRequest& request) const;
			DeleteRetcodeAppOutcome deleteRetcodeApp(const Model::DeleteRetcodeAppRequest &request)const;
			void deleteRetcodeAppAsync(const Model::DeleteRetcodeAppRequest& request, const DeleteRetcodeAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRetcodeAppOutcomeCallable deleteRetcodeAppCallable(const Model::DeleteRetcodeAppRequest& request) const;
			DeleteScenarioOutcome deleteScenario(const Model::DeleteScenarioRequest &request)const;
			void deleteScenarioAsync(const Model::DeleteScenarioRequest& request, const DeleteScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteScenarioOutcomeCallable deleteScenarioCallable(const Model::DeleteScenarioRequest& request) const;
			DeleteSilencePolicyOutcome deleteSilencePolicy(const Model::DeleteSilencePolicyRequest &request)const;
			void deleteSilencePolicyAsync(const Model::DeleteSilencePolicyRequest& request, const DeleteSilencePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSilencePolicyOutcomeCallable deleteSilencePolicyCallable(const Model::DeleteSilencePolicyRequest& request) const;
			DeleteSourceMapOutcome deleteSourceMap(const Model::DeleteSourceMapRequest &request)const;
			void deleteSourceMapAsync(const Model::DeleteSourceMapRequest& request, const DeleteSourceMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSourceMapOutcomeCallable deleteSourceMapCallable(const Model::DeleteSourceMapRequest& request) const;
			DeleteSyntheticTaskOutcome deleteSyntheticTask(const Model::DeleteSyntheticTaskRequest &request)const;
			void deleteSyntheticTaskAsync(const Model::DeleteSyntheticTaskRequest& request, const DeleteSyntheticTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSyntheticTaskOutcomeCallable deleteSyntheticTaskCallable(const Model::DeleteSyntheticTaskRequest& request) const;
			DeleteTraceAppOutcome deleteTraceApp(const Model::DeleteTraceAppRequest &request)const;
			void deleteTraceAppAsync(const Model::DeleteTraceAppRequest& request, const DeleteTraceAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTraceAppOutcomeCallable deleteTraceAppCallable(const Model::DeleteTraceAppRequest& request) const;
			DeleteWebhookContactOutcome deleteWebhookContact(const Model::DeleteWebhookContactRequest &request)const;
			void deleteWebhookContactAsync(const Model::DeleteWebhookContactRequest& request, const DeleteWebhookContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteWebhookContactOutcomeCallable deleteWebhookContactCallable(const Model::DeleteWebhookContactRequest& request) const;
			DescribeContactGroupsOutcome describeContactGroups(const Model::DescribeContactGroupsRequest &request)const;
			void describeContactGroupsAsync(const Model::DescribeContactGroupsRequest& request, const DescribeContactGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeContactGroupsOutcomeCallable describeContactGroupsCallable(const Model::DescribeContactGroupsRequest& request) const;
			DescribeContactsOutcome describeContacts(const Model::DescribeContactsRequest &request)const;
			void describeContactsAsync(const Model::DescribeContactsRequest& request, const DescribeContactsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeContactsOutcomeCallable describeContactsCallable(const Model::DescribeContactsRequest& request) const;
			DescribeDispatchRuleOutcome describeDispatchRule(const Model::DescribeDispatchRuleRequest &request)const;
			void describeDispatchRuleAsync(const Model::DescribeDispatchRuleRequest& request, const DescribeDispatchRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDispatchRuleOutcomeCallable describeDispatchRuleCallable(const Model::DescribeDispatchRuleRequest& request) const;
			DescribeIMRobotsOutcome describeIMRobots(const Model::DescribeIMRobotsRequest &request)const;
			void describeIMRobotsAsync(const Model::DescribeIMRobotsRequest& request, const DescribeIMRobotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIMRobotsOutcomeCallable describeIMRobotsCallable(const Model::DescribeIMRobotsRequest& request) const;
			DescribePrometheusAlertRuleOutcome describePrometheusAlertRule(const Model::DescribePrometheusAlertRuleRequest &request)const;
			void describePrometheusAlertRuleAsync(const Model::DescribePrometheusAlertRuleRequest& request, const DescribePrometheusAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePrometheusAlertRuleOutcomeCallable describePrometheusAlertRuleCallable(const Model::DescribePrometheusAlertRuleRequest& request) const;
			DescribeTraceLicenseKeyOutcome describeTraceLicenseKey(const Model::DescribeTraceLicenseKeyRequest &request)const;
			void describeTraceLicenseKeyAsync(const Model::DescribeTraceLicenseKeyRequest& request, const DescribeTraceLicenseKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTraceLicenseKeyOutcomeCallable describeTraceLicenseKeyCallable(const Model::DescribeTraceLicenseKeyRequest& request) const;
			DescribeWebhookContactsOutcome describeWebhookContacts(const Model::DescribeWebhookContactsRequest &request)const;
			void describeWebhookContactsAsync(const Model::DescribeWebhookContactsRequest& request, const DescribeWebhookContactsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebhookContactsOutcomeCallable describeWebhookContactsCallable(const Model::DescribeWebhookContactsRequest& request) const;
			GetAgentDownloadUrlOutcome getAgentDownloadUrl(const Model::GetAgentDownloadUrlRequest &request)const;
			void getAgentDownloadUrlAsync(const Model::GetAgentDownloadUrlRequest& request, const GetAgentDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAgentDownloadUrlOutcomeCallable getAgentDownloadUrlCallable(const Model::GetAgentDownloadUrlRequest& request) const;
			GetAlertRulesOutcome getAlertRules(const Model::GetAlertRulesRequest &request)const;
			void getAlertRulesAsync(const Model::GetAlertRulesRequest& request, const GetAlertRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAlertRulesOutcomeCallable getAlertRulesCallable(const Model::GetAlertRulesRequest& request) const;
			GetAppApiByPageOutcome getAppApiByPage(const Model::GetAppApiByPageRequest &request)const;
			void getAppApiByPageAsync(const Model::GetAppApiByPageRequest& request, const GetAppApiByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAppApiByPageOutcomeCallable getAppApiByPageCallable(const Model::GetAppApiByPageRequest& request) const;
			GetAuthTokenOutcome getAuthToken(const Model::GetAuthTokenRequest &request)const;
			void getAuthTokenAsync(const Model::GetAuthTokenRequest& request, const GetAuthTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAuthTokenOutcomeCallable getAuthTokenCallable(const Model::GetAuthTokenRequest& request) const;
			GetClusterAllUrlOutcome getClusterAllUrl(const Model::GetClusterAllUrlRequest &request)const;
			void getClusterAllUrlAsync(const Model::GetClusterAllUrlRequest& request, const GetClusterAllUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetClusterAllUrlOutcomeCallable getClusterAllUrlCallable(const Model::GetClusterAllUrlRequest& request) const;
			GetExploreUrlOutcome getExploreUrl(const Model::GetExploreUrlRequest &request)const;
			void getExploreUrlAsync(const Model::GetExploreUrlRequest& request, const GetExploreUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetExploreUrlOutcomeCallable getExploreUrlCallable(const Model::GetExploreUrlRequest& request) const;
			GetIntegrationStateOutcome getIntegrationState(const Model::GetIntegrationStateRequest &request)const;
			void getIntegrationStateAsync(const Model::GetIntegrationStateRequest& request, const GetIntegrationStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetIntegrationStateOutcomeCallable getIntegrationStateCallable(const Model::GetIntegrationStateRequest& request) const;
			GetManagedPrometheusStatusOutcome getManagedPrometheusStatus(const Model::GetManagedPrometheusStatusRequest &request)const;
			void getManagedPrometheusStatusAsync(const Model::GetManagedPrometheusStatusRequest& request, const GetManagedPrometheusStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetManagedPrometheusStatusOutcomeCallable getManagedPrometheusStatusCallable(const Model::GetManagedPrometheusStatusRequest& request) const;
			GetMultipleTraceOutcome getMultipleTrace(const Model::GetMultipleTraceRequest &request)const;
			void getMultipleTraceAsync(const Model::GetMultipleTraceRequest& request, const GetMultipleTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMultipleTraceOutcomeCallable getMultipleTraceCallable(const Model::GetMultipleTraceRequest& request) const;
			GetOnCallSchedulesDetailOutcome getOnCallSchedulesDetail(const Model::GetOnCallSchedulesDetailRequest &request)const;
			void getOnCallSchedulesDetailAsync(const Model::GetOnCallSchedulesDetailRequest& request, const GetOnCallSchedulesDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOnCallSchedulesDetailOutcomeCallable getOnCallSchedulesDetailCallable(const Model::GetOnCallSchedulesDetailRequest& request) const;
			GetPrometheusApiTokenOutcome getPrometheusApiToken(const Model::GetPrometheusApiTokenRequest &request)const;
			void getPrometheusApiTokenAsync(const Model::GetPrometheusApiTokenRequest& request, const GetPrometheusApiTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPrometheusApiTokenOutcomeCallable getPrometheusApiTokenCallable(const Model::GetPrometheusApiTokenRequest& request) const;
			GetPrometheusGlobalViewOutcome getPrometheusGlobalView(const Model::GetPrometheusGlobalViewRequest &request)const;
			void getPrometheusGlobalViewAsync(const Model::GetPrometheusGlobalViewRequest& request, const GetPrometheusGlobalViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPrometheusGlobalViewOutcomeCallable getPrometheusGlobalViewCallable(const Model::GetPrometheusGlobalViewRequest& request) const;
			GetRecordingRuleOutcome getRecordingRule(const Model::GetRecordingRuleRequest &request)const;
			void getRecordingRuleAsync(const Model::GetRecordingRuleRequest& request, const GetRecordingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRecordingRuleOutcomeCallable getRecordingRuleCallable(const Model::GetRecordingRuleRequest& request) const;
			GetRetcodeShareUrlOutcome getRetcodeShareUrl(const Model::GetRetcodeShareUrlRequest &request)const;
			void getRetcodeShareUrlAsync(const Model::GetRetcodeShareUrlRequest& request, const GetRetcodeShareUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRetcodeShareUrlOutcomeCallable getRetcodeShareUrlCallable(const Model::GetRetcodeShareUrlRequest& request) const;
			GetSourceMapInfoOutcome getSourceMapInfo(const Model::GetSourceMapInfoRequest &request)const;
			void getSourceMapInfoAsync(const Model::GetSourceMapInfoRequest& request, const GetSourceMapInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSourceMapInfoOutcomeCallable getSourceMapInfoCallable(const Model::GetSourceMapInfoRequest& request) const;
			GetStackOutcome getStack(const Model::GetStackRequest &request)const;
			void getStackAsync(const Model::GetStackRequest& request, const GetStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetStackOutcomeCallable getStackCallable(const Model::GetStackRequest& request) const;
			GetSyntheticTaskDetailOutcome getSyntheticTaskDetail(const Model::GetSyntheticTaskDetailRequest &request)const;
			void getSyntheticTaskDetailAsync(const Model::GetSyntheticTaskDetailRequest& request, const GetSyntheticTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSyntheticTaskDetailOutcomeCallable getSyntheticTaskDetailCallable(const Model::GetSyntheticTaskDetailRequest& request) const;
			GetSyntheticTaskListOutcome getSyntheticTaskList(const Model::GetSyntheticTaskListRequest &request)const;
			void getSyntheticTaskListAsync(const Model::GetSyntheticTaskListRequest& request, const GetSyntheticTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSyntheticTaskListOutcomeCallable getSyntheticTaskListCallable(const Model::GetSyntheticTaskListRequest& request) const;
			GetSyntheticTaskMonitorsOutcome getSyntheticTaskMonitors(const Model::GetSyntheticTaskMonitorsRequest &request)const;
			void getSyntheticTaskMonitorsAsync(const Model::GetSyntheticTaskMonitorsRequest& request, const GetSyntheticTaskMonitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSyntheticTaskMonitorsOutcomeCallable getSyntheticTaskMonitorsCallable(const Model::GetSyntheticTaskMonitorsRequest& request) const;
			GetTraceOutcome getTrace(const Model::GetTraceRequest &request)const;
			void getTraceAsync(const Model::GetTraceRequest& request, const GetTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTraceOutcomeCallable getTraceCallable(const Model::GetTraceRequest& request) const;
			GetTraceAppOutcome getTraceApp(const Model::GetTraceAppRequest &request)const;
			void getTraceAppAsync(const Model::GetTraceAppRequest& request, const GetTraceAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTraceAppOutcomeCallable getTraceAppCallable(const Model::GetTraceAppRequest& request) const;
			ImportAppAlertRulesOutcome importAppAlertRules(const Model::ImportAppAlertRulesRequest &request)const;
			void importAppAlertRulesAsync(const Model::ImportAppAlertRulesRequest& request, const ImportAppAlertRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportAppAlertRulesOutcomeCallable importAppAlertRulesCallable(const Model::ImportAppAlertRulesRequest& request) const;
			InstallCmsExporterOutcome installCmsExporter(const Model::InstallCmsExporterRequest &request)const;
			void installCmsExporterAsync(const Model::InstallCmsExporterRequest& request, const InstallCmsExporterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InstallCmsExporterOutcomeCallable installCmsExporterCallable(const Model::InstallCmsExporterRequest& request) const;
			InstallManagedPrometheusOutcome installManagedPrometheus(const Model::InstallManagedPrometheusRequest &request)const;
			void installManagedPrometheusAsync(const Model::InstallManagedPrometheusRequest& request, const InstallManagedPrometheusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InstallManagedPrometheusOutcomeCallable installManagedPrometheusCallable(const Model::InstallManagedPrometheusRequest& request) const;
			ListActivatedAlertsOutcome listActivatedAlerts(const Model::ListActivatedAlertsRequest &request)const;
			void listActivatedAlertsAsync(const Model::ListActivatedAlertsRequest& request, const ListActivatedAlertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListActivatedAlertsOutcomeCallable listActivatedAlertsCallable(const Model::ListActivatedAlertsRequest& request) const;
			ListAlertEventsOutcome listAlertEvents(const Model::ListAlertEventsRequest &request)const;
			void listAlertEventsAsync(const Model::ListAlertEventsRequest& request, const ListAlertEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAlertEventsOutcomeCallable listAlertEventsCallable(const Model::ListAlertEventsRequest& request) const;
			ListAlertsOutcome listAlerts(const Model::ListAlertsRequest &request)const;
			void listAlertsAsync(const Model::ListAlertsRequest& request, const ListAlertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAlertsOutcomeCallable listAlertsCallable(const Model::ListAlertsRequest& request) const;
			ListClusterFromGrafanaOutcome listClusterFromGrafana(const Model::ListClusterFromGrafanaRequest &request)const;
			void listClusterFromGrafanaAsync(const Model::ListClusterFromGrafanaRequest& request, const ListClusterFromGrafanaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterFromGrafanaOutcomeCallable listClusterFromGrafanaCallable(const Model::ListClusterFromGrafanaRequest& request) const;
			ListCmsInstancesOutcome listCmsInstances(const Model::ListCmsInstancesRequest &request)const;
			void listCmsInstancesAsync(const Model::ListCmsInstancesRequest& request, const ListCmsInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCmsInstancesOutcomeCallable listCmsInstancesCallable(const Model::ListCmsInstancesRequest& request) const;
			ListDashboardsOutcome listDashboards(const Model::ListDashboardsRequest &request)const;
			void listDashboardsAsync(const Model::ListDashboardsRequest& request, const ListDashboardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDashboardsOutcomeCallable listDashboardsCallable(const Model::ListDashboardsRequest& request) const;
			ListDashboardsByNameOutcome listDashboardsByName(const Model::ListDashboardsByNameRequest &request)const;
			void listDashboardsByNameAsync(const Model::ListDashboardsByNameRequest& request, const ListDashboardsByNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDashboardsByNameOutcomeCallable listDashboardsByNameCallable(const Model::ListDashboardsByNameRequest& request) const;
			ListDispatchRuleOutcome listDispatchRule(const Model::ListDispatchRuleRequest &request)const;
			void listDispatchRuleAsync(const Model::ListDispatchRuleRequest& request, const ListDispatchRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDispatchRuleOutcomeCallable listDispatchRuleCallable(const Model::ListDispatchRuleRequest& request) const;
			ListEscalationPoliciesOutcome listEscalationPolicies(const Model::ListEscalationPoliciesRequest &request)const;
			void listEscalationPoliciesAsync(const Model::ListEscalationPoliciesRequest& request, const ListEscalationPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEscalationPoliciesOutcomeCallable listEscalationPoliciesCallable(const Model::ListEscalationPoliciesRequest& request) const;
			ListEventBridgeIntegrationsOutcome listEventBridgeIntegrations(const Model::ListEventBridgeIntegrationsRequest &request)const;
			void listEventBridgeIntegrationsAsync(const Model::ListEventBridgeIntegrationsRequest& request, const ListEventBridgeIntegrationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEventBridgeIntegrationsOutcomeCallable listEventBridgeIntegrationsCallable(const Model::ListEventBridgeIntegrationsRequest& request) const;
			ListInsightsEventsOutcome listInsightsEvents(const Model::ListInsightsEventsRequest &request)const;
			void listInsightsEventsAsync(const Model::ListInsightsEventsRequest& request, const ListInsightsEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInsightsEventsOutcomeCallable listInsightsEventsCallable(const Model::ListInsightsEventsRequest& request) const;
			ListIntegrationOutcome listIntegration(const Model::ListIntegrationRequest &request)const;
			void listIntegrationAsync(const Model::ListIntegrationRequest& request, const ListIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListIntegrationOutcomeCallable listIntegrationCallable(const Model::ListIntegrationRequest& request) const;
			ListNotificationPoliciesOutcome listNotificationPolicies(const Model::ListNotificationPoliciesRequest &request)const;
			void listNotificationPoliciesAsync(const Model::ListNotificationPoliciesRequest& request, const ListNotificationPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNotificationPoliciesOutcomeCallable listNotificationPoliciesCallable(const Model::ListNotificationPoliciesRequest& request) const;
			ListOnCallSchedulesOutcome listOnCallSchedules(const Model::ListOnCallSchedulesRequest &request)const;
			void listOnCallSchedulesAsync(const Model::ListOnCallSchedulesRequest& request, const ListOnCallSchedulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOnCallSchedulesOutcomeCallable listOnCallSchedulesCallable(const Model::ListOnCallSchedulesRequest& request) const;
			ListPrometheusAlertRulesOutcome listPrometheusAlertRules(const Model::ListPrometheusAlertRulesRequest &request)const;
			void listPrometheusAlertRulesAsync(const Model::ListPrometheusAlertRulesRequest& request, const ListPrometheusAlertRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPrometheusAlertRulesOutcomeCallable listPrometheusAlertRulesCallable(const Model::ListPrometheusAlertRulesRequest& request) const;
			ListPrometheusAlertTemplatesOutcome listPrometheusAlertTemplates(const Model::ListPrometheusAlertTemplatesRequest &request)const;
			void listPrometheusAlertTemplatesAsync(const Model::ListPrometheusAlertTemplatesRequest& request, const ListPrometheusAlertTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPrometheusAlertTemplatesOutcomeCallable listPrometheusAlertTemplatesCallable(const Model::ListPrometheusAlertTemplatesRequest& request) const;
			ListPrometheusGlobalViewOutcome listPrometheusGlobalView(const Model::ListPrometheusGlobalViewRequest &request)const;
			void listPrometheusGlobalViewAsync(const Model::ListPrometheusGlobalViewRequest& request, const ListPrometheusGlobalViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPrometheusGlobalViewOutcomeCallable listPrometheusGlobalViewCallable(const Model::ListPrometheusGlobalViewRequest& request) const;
			ListPrometheusInstancesOutcome listPrometheusInstances(const Model::ListPrometheusInstancesRequest &request)const;
			void listPrometheusInstancesAsync(const Model::ListPrometheusInstancesRequest& request, const ListPrometheusInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPrometheusInstancesOutcomeCallable listPrometheusInstancesCallable(const Model::ListPrometheusInstancesRequest& request) const;
			ListRetcodeAppsOutcome listRetcodeApps(const Model::ListRetcodeAppsRequest &request)const;
			void listRetcodeAppsAsync(const Model::ListRetcodeAppsRequest& request, const ListRetcodeAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRetcodeAppsOutcomeCallable listRetcodeAppsCallable(const Model::ListRetcodeAppsRequest& request) const;
			ListScenarioOutcome listScenario(const Model::ListScenarioRequest &request)const;
			void listScenarioAsync(const Model::ListScenarioRequest& request, const ListScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListScenarioOutcomeCallable listScenarioCallable(const Model::ListScenarioRequest& request) const;
			ListSilencePoliciesOutcome listSilencePolicies(const Model::ListSilencePoliciesRequest &request)const;
			void listSilencePoliciesAsync(const Model::ListSilencePoliciesRequest& request, const ListSilencePoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSilencePoliciesOutcomeCallable listSilencePoliciesCallable(const Model::ListSilencePoliciesRequest& request) const;
			ListTraceAppsOutcome listTraceApps(const Model::ListTraceAppsRequest &request)const;
			void listTraceAppsAsync(const Model::ListTraceAppsRequest& request, const ListTraceAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTraceAppsOutcomeCallable listTraceAppsCallable(const Model::ListTraceAppsRequest& request) const;
			ManageGetRecordingRuleOutcome manageGetRecordingRule(const Model::ManageGetRecordingRuleRequest &request)const;
			void manageGetRecordingRuleAsync(const Model::ManageGetRecordingRuleRequest& request, const ManageGetRecordingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ManageGetRecordingRuleOutcomeCallable manageGetRecordingRuleCallable(const Model::ManageGetRecordingRuleRequest& request) const;
			ManageRecordingRuleOutcome manageRecordingRule(const Model::ManageRecordingRuleRequest &request)const;
			void manageRecordingRuleAsync(const Model::ManageRecordingRuleRequest& request, const ManageRecordingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ManageRecordingRuleOutcomeCallable manageRecordingRuleCallable(const Model::ManageRecordingRuleRequest& request) const;
			OpenArmsDefaultSLROutcome openArmsDefaultSLR(const Model::OpenArmsDefaultSLRRequest &request)const;
			void openArmsDefaultSLRAsync(const Model::OpenArmsDefaultSLRRequest& request, const OpenArmsDefaultSLRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenArmsDefaultSLROutcomeCallable openArmsDefaultSLRCallable(const Model::OpenArmsDefaultSLRRequest& request) const;
			OpenArmsServiceSecondVersionOutcome openArmsServiceSecondVersion(const Model::OpenArmsServiceSecondVersionRequest &request)const;
			void openArmsServiceSecondVersionAsync(const Model::OpenArmsServiceSecondVersionRequest& request, const OpenArmsServiceSecondVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenArmsServiceSecondVersionOutcomeCallable openArmsServiceSecondVersionCallable(const Model::OpenArmsServiceSecondVersionRequest& request) const;
			OpenVClusterOutcome openVCluster(const Model::OpenVClusterRequest &request)const;
			void openVClusterAsync(const Model::OpenVClusterRequest& request, const OpenVClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenVClusterOutcomeCallable openVClusterCallable(const Model::OpenVClusterRequest& request) const;
			OpenXtraceDefaultSLROutcome openXtraceDefaultSLR(const Model::OpenXtraceDefaultSLRRequest &request)const;
			void openXtraceDefaultSLRAsync(const Model::OpenXtraceDefaultSLRRequest& request, const OpenXtraceDefaultSLRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenXtraceDefaultSLROutcomeCallable openXtraceDefaultSLRCallable(const Model::OpenXtraceDefaultSLRRequest& request) const;
			QueryMetricByPageOutcome queryMetricByPage(const Model::QueryMetricByPageRequest &request)const;
			void queryMetricByPageAsync(const Model::QueryMetricByPageRequest& request, const QueryMetricByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMetricByPageOutcomeCallable queryMetricByPageCallable(const Model::QueryMetricByPageRequest& request) const;
			QueryPromInstallStatusOutcome queryPromInstallStatus(const Model::QueryPromInstallStatusRequest &request)const;
			void queryPromInstallStatusAsync(const Model::QueryPromInstallStatusRequest& request, const QueryPromInstallStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryPromInstallStatusOutcomeCallable queryPromInstallStatusCallable(const Model::QueryPromInstallStatusRequest& request) const;
			QueryReleaseMetricOutcome queryReleaseMetric(const Model::QueryReleaseMetricRequest &request)const;
			void queryReleaseMetricAsync(const Model::QueryReleaseMetricRequest& request, const QueryReleaseMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryReleaseMetricOutcomeCallable queryReleaseMetricCallable(const Model::QueryReleaseMetricRequest& request) const;
			RemoveAliClusterIdsFromPrometheusGlobalViewOutcome removeAliClusterIdsFromPrometheusGlobalView(const Model::RemoveAliClusterIdsFromPrometheusGlobalViewRequest &request)const;
			void removeAliClusterIdsFromPrometheusGlobalViewAsync(const Model::RemoveAliClusterIdsFromPrometheusGlobalViewRequest& request, const RemoveAliClusterIdsFromPrometheusGlobalViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveAliClusterIdsFromPrometheusGlobalViewOutcomeCallable removeAliClusterIdsFromPrometheusGlobalViewCallable(const Model::RemoveAliClusterIdsFromPrometheusGlobalViewRequest& request) const;
			RemoveSourcesFromPrometheusGlobalViewOutcome removeSourcesFromPrometheusGlobalView(const Model::RemoveSourcesFromPrometheusGlobalViewRequest &request)const;
			void removeSourcesFromPrometheusGlobalViewAsync(const Model::RemoveSourcesFromPrometheusGlobalViewRequest& request, const RemoveSourcesFromPrometheusGlobalViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveSourcesFromPrometheusGlobalViewOutcomeCallable removeSourcesFromPrometheusGlobalViewCallable(const Model::RemoveSourcesFromPrometheusGlobalViewRequest& request) const;
			SaveTraceAppConfigOutcome saveTraceAppConfig(const Model::SaveTraceAppConfigRequest &request)const;
			void saveTraceAppConfigAsync(const Model::SaveTraceAppConfigRequest& request, const SaveTraceAppConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SaveTraceAppConfigOutcomeCallable saveTraceAppConfigCallable(const Model::SaveTraceAppConfigRequest& request) const;
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
			SendTTSVerifyLinkOutcome sendTTSVerifyLink(const Model::SendTTSVerifyLinkRequest &request)const;
			void sendTTSVerifyLinkAsync(const Model::SendTTSVerifyLinkRequest& request, const SendTTSVerifyLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SendTTSVerifyLinkOutcomeCallable sendTTSVerifyLinkCallable(const Model::SendTTSVerifyLinkRequest& request) const;
			SetRetcodeShareStatusOutcome setRetcodeShareStatus(const Model::SetRetcodeShareStatusRequest &request)const;
			void setRetcodeShareStatusAsync(const Model::SetRetcodeShareStatusRequest& request, const SetRetcodeShareStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetRetcodeShareStatusOutcomeCallable setRetcodeShareStatusCallable(const Model::SetRetcodeShareStatusRequest& request) const;
			StartAlertOutcome startAlert(const Model::StartAlertRequest &request)const;
			void startAlertAsync(const Model::StartAlertRequest& request, const StartAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartAlertOutcomeCallable startAlertCallable(const Model::StartAlertRequest& request) const;
			StopAlertOutcome stopAlert(const Model::StopAlertRequest &request)const;
			void stopAlertAsync(const Model::StopAlertRequest& request, const StopAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopAlertOutcomeCallable stopAlertCallable(const Model::StopAlertRequest& request) const;
			SwitchSyntheticTaskStatusOutcome switchSyntheticTaskStatus(const Model::SwitchSyntheticTaskStatusRequest &request)const;
			void switchSyntheticTaskStatusAsync(const Model::SwitchSyntheticTaskStatusRequest& request, const SwitchSyntheticTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchSyntheticTaskStatusOutcomeCallable switchSyntheticTaskStatusCallable(const Model::SwitchSyntheticTaskStatusRequest& request) const;
			SyncRecordingRulesOutcome syncRecordingRules(const Model::SyncRecordingRulesRequest &request)const;
			void syncRecordingRulesAsync(const Model::SyncRecordingRulesRequest& request, const SyncRecordingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SyncRecordingRulesOutcomeCallable syncRecordingRulesCallable(const Model::SyncRecordingRulesRequest& request) const;
			TurnOnSecondSwitchOutcome turnOnSecondSwitch(const Model::TurnOnSecondSwitchRequest &request)const;
			void turnOnSecondSwitchAsync(const Model::TurnOnSecondSwitchRequest& request, const TurnOnSecondSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TurnOnSecondSwitchOutcomeCallable turnOnSecondSwitchCallable(const Model::TurnOnSecondSwitchRequest& request) const;
			UninstallManagedPrometheusOutcome uninstallManagedPrometheus(const Model::UninstallManagedPrometheusRequest &request)const;
			void uninstallManagedPrometheusAsync(const Model::UninstallManagedPrometheusRequest& request, const UninstallManagedPrometheusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UninstallManagedPrometheusOutcomeCallable uninstallManagedPrometheusCallable(const Model::UninstallManagedPrometheusRequest& request) const;
			UninstallPromClusterOutcome uninstallPromCluster(const Model::UninstallPromClusterRequest &request)const;
			void uninstallPromClusterAsync(const Model::UninstallPromClusterRequest& request, const UninstallPromClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UninstallPromClusterOutcomeCallable uninstallPromClusterCallable(const Model::UninstallPromClusterRequest& request) const;
			UpdateAlertContactOutcome updateAlertContact(const Model::UpdateAlertContactRequest &request)const;
			void updateAlertContactAsync(const Model::UpdateAlertContactRequest& request, const UpdateAlertContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAlertContactOutcomeCallable updateAlertContactCallable(const Model::UpdateAlertContactRequest& request) const;
			UpdateAlertContactGroupOutcome updateAlertContactGroup(const Model::UpdateAlertContactGroupRequest &request)const;
			void updateAlertContactGroupAsync(const Model::UpdateAlertContactGroupRequest& request, const UpdateAlertContactGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAlertContactGroupOutcomeCallable updateAlertContactGroupCallable(const Model::UpdateAlertContactGroupRequest& request) const;
			UpdateAlertRuleOutcome updateAlertRule(const Model::UpdateAlertRuleRequest &request)const;
			void updateAlertRuleAsync(const Model::UpdateAlertRuleRequest& request, const UpdateAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAlertRuleOutcomeCallable updateAlertRuleCallable(const Model::UpdateAlertRuleRequest& request) const;
			UpdateDispatchRuleOutcome updateDispatchRule(const Model::UpdateDispatchRuleRequest &request)const;
			void updateDispatchRuleAsync(const Model::UpdateDispatchRuleRequest& request, const UpdateDispatchRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDispatchRuleOutcomeCallable updateDispatchRuleCallable(const Model::UpdateDispatchRuleRequest& request) const;
			UpdateIntegrationOutcome updateIntegration(const Model::UpdateIntegrationRequest &request)const;
			void updateIntegrationAsync(const Model::UpdateIntegrationRequest& request, const UpdateIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateIntegrationOutcomeCallable updateIntegrationCallable(const Model::UpdateIntegrationRequest& request) const;
			UpdatePrometheusAlertRuleOutcome updatePrometheusAlertRule(const Model::UpdatePrometheusAlertRuleRequest &request)const;
			void updatePrometheusAlertRuleAsync(const Model::UpdatePrometheusAlertRuleRequest& request, const UpdatePrometheusAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePrometheusAlertRuleOutcomeCallable updatePrometheusAlertRuleCallable(const Model::UpdatePrometheusAlertRuleRequest& request) const;
			UpdateWebhookOutcome updateWebhook(const Model::UpdateWebhookRequest &request)const;
			void updateWebhookAsync(const Model::UpdateWebhookRequest& request, const UpdateWebhookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateWebhookOutcomeCallable updateWebhookCallable(const Model::UpdateWebhookRequest& request) const;
			UploadOutcome upload(const Model::UploadRequest &request)const;
			void uploadAsync(const Model::UploadRequest& request, const UploadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadOutcomeCallable uploadCallable(const Model::UploadRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ARMS_ARMSCLIENT_H_
