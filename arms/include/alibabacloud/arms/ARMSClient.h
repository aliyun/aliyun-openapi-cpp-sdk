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
#include "model/AddPrometheusIntegrationRequest.h"
#include "model/AddPrometheusIntegrationResult.h"
#include "model/AddRecordingRuleRequest.h"
#include "model/AddRecordingRuleResult.h"
#include "model/AddTagToFlinkClusterRequest.h"
#include "model/AddTagToFlinkClusterResult.h"
#include "model/AppendInstancesToPrometheusGlobalViewRequest.h"
#include "model/AppendInstancesToPrometheusGlobalViewResult.h"
#include "model/ApplyScenarioRequest.h"
#include "model/ApplyScenarioResult.h"
#include "model/BindPrometheusGrafanaInstanceRequest.h"
#include "model/BindPrometheusGrafanaInstanceResult.h"
#include "model/BlockAlarmNotificationRequest.h"
#include "model/BlockAlarmNotificationResult.h"
#include "model/ChangeAlarmSeverityRequest.h"
#include "model/ChangeAlarmSeverityResult.h"
#include "model/ChangeResourceGroupRequest.h"
#include "model/ChangeResourceGroupResult.h"
#include "model/CheckCommercialStatusRequest.h"
#include "model/CheckCommercialStatusResult.h"
#include "model/CheckServiceStatusRequest.h"
#include "model/CheckServiceStatusResult.h"
#include "model/ClaimAlarmRequest.h"
#include "model/ClaimAlarmResult.h"
#include "model/CloseAlarmRequest.h"
#include "model/CloseAlarmResult.h"
#include "model/ConfigAppRequest.h"
#include "model/ConfigAppResult.h"
#include "model/CreateAlertContactRequest.h"
#include "model/CreateAlertContactResult.h"
#include "model/CreateAlertContactGroupRequest.h"
#include "model/CreateAlertContactGroupResult.h"
#include "model/CreateDispatchRuleRequest.h"
#include "model/CreateDispatchRuleResult.h"
#include "model/CreateEnvCustomJobRequest.h"
#include "model/CreateEnvCustomJobResult.h"
#include "model/CreateEnvPodMonitorRequest.h"
#include "model/CreateEnvPodMonitorResult.h"
#include "model/CreateEnvServiceMonitorRequest.h"
#include "model/CreateEnvServiceMonitorResult.h"
#include "model/CreateEnvironmentRequest.h"
#include "model/CreateEnvironmentResult.h"
#include "model/CreateGrafanaWorkspaceRequest.h"
#include "model/CreateGrafanaWorkspaceResult.h"
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
#include "model/CreatePrometheusInstanceRequest.h"
#include "model/CreatePrometheusInstanceResult.h"
#include "model/CreatePrometheusMonitoringRequest.h"
#include "model/CreatePrometheusMonitoringResult.h"
#include "model/CreateRetcodeAppRequest.h"
#include "model/CreateRetcodeAppResult.h"
#include "model/CreateRumAppRequest.h"
#include "model/CreateRumAppResult.h"
#include "model/CreateRumUploadFileUrlRequest.h"
#include "model/CreateRumUploadFileUrlResult.h"
#include "model/CreateSyntheticTaskRequest.h"
#include "model/CreateSyntheticTaskResult.h"
#include "model/CreateTimingSyntheticTaskRequest.h"
#include "model/CreateTimingSyntheticTaskResult.h"
#include "model/CreateWebhookRequest.h"
#include "model/CreateWebhookResult.h"
#include "model/DelAuthTokenRequest.h"
#include "model/DelAuthTokenResult.h"
#include "model/DeleteAddonReleaseRequest.h"
#include "model/DeleteAddonReleaseResult.h"
#include "model/DeleteAlertContactRequest.h"
#include "model/DeleteAlertContactResult.h"
#include "model/DeleteAlertContactGroupRequest.h"
#include "model/DeleteAlertContactGroupResult.h"
#include "model/DeleteAlertRuleRequest.h"
#include "model/DeleteAlertRuleResult.h"
#include "model/DeleteAlertRulesRequest.h"
#include "model/DeleteAlertRulesResult.h"
#include "model/DeleteAppListRequest.h"
#include "model/DeleteAppListResult.h"
#include "model/DeleteCmsExporterRequest.h"
#include "model/DeleteCmsExporterResult.h"
#include "model/DeleteContactRequest.h"
#include "model/DeleteContactResult.h"
#include "model/DeleteContactGroupRequest.h"
#include "model/DeleteContactGroupResult.h"
#include "model/DeleteDispatchRuleRequest.h"
#include "model/DeleteDispatchRuleResult.h"
#include "model/DeleteEnvCustomJobRequest.h"
#include "model/DeleteEnvCustomJobResult.h"
#include "model/DeleteEnvPodMonitorRequest.h"
#include "model/DeleteEnvPodMonitorResult.h"
#include "model/DeleteEnvServiceMonitorRequest.h"
#include "model/DeleteEnvServiceMonitorResult.h"
#include "model/DeleteEnvironmentRequest.h"
#include "model/DeleteEnvironmentResult.h"
#include "model/DeleteEnvironmentFeatureRequest.h"
#include "model/DeleteEnvironmentFeatureResult.h"
#include "model/DeleteEventBridgeIntegrationRequest.h"
#include "model/DeleteEventBridgeIntegrationResult.h"
#include "model/DeleteGrafanaResourceRequest.h"
#include "model/DeleteGrafanaResourceResult.h"
#include "model/DeleteGrafanaWorkspaceRequest.h"
#include "model/DeleteGrafanaWorkspaceResult.h"
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
#include "model/DeletePrometheusIntegrationRequest.h"
#include "model/DeletePrometheusIntegrationResult.h"
#include "model/DeletePrometheusMonitoringRequest.h"
#include "model/DeletePrometheusMonitoringResult.h"
#include "model/DeleteRetcodeAppRequest.h"
#include "model/DeleteRetcodeAppResult.h"
#include "model/DeleteRumAppRequest.h"
#include "model/DeleteRumAppResult.h"
#include "model/DeleteRumUploadFileRequest.h"
#include "model/DeleteRumUploadFileResult.h"
#include "model/DeleteScenarioRequest.h"
#include "model/DeleteScenarioResult.h"
#include "model/DeleteSilencePolicyRequest.h"
#include "model/DeleteSilencePolicyResult.h"
#include "model/DeleteSourceMapRequest.h"
#include "model/DeleteSourceMapResult.h"
#include "model/DeleteSyntheticTaskRequest.h"
#include "model/DeleteSyntheticTaskResult.h"
#include "model/DeleteTimingSyntheticTaskRequest.h"
#include "model/DeleteTimingSyntheticTaskResult.h"
#include "model/DeleteTraceAppRequest.h"
#include "model/DeleteTraceAppResult.h"
#include "model/DeleteWebhookContactRequest.h"
#include "model/DeleteWebhookContactResult.h"
#include "model/DescribeAddonReleaseRequest.h"
#include "model/DescribeAddonReleaseResult.h"
#include "model/DescribeContactGroupsRequest.h"
#include "model/DescribeContactGroupsResult.h"
#include "model/DescribeContactsRequest.h"
#include "model/DescribeContactsResult.h"
#include "model/DescribeDispatchRuleRequest.h"
#include "model/DescribeDispatchRuleResult.h"
#include "model/DescribeEnvCustomJobRequest.h"
#include "model/DescribeEnvCustomJobResult.h"
#include "model/DescribeEnvPodMonitorRequest.h"
#include "model/DescribeEnvPodMonitorResult.h"
#include "model/DescribeEnvServiceMonitorRequest.h"
#include "model/DescribeEnvServiceMonitorResult.h"
#include "model/DescribeEnvironmentRequest.h"
#include "model/DescribeEnvironmentResult.h"
#include "model/DescribeEnvironmentFeatureRequest.h"
#include "model/DescribeEnvironmentFeatureResult.h"
#include "model/DescribeIMRobotsRequest.h"
#include "model/DescribeIMRobotsResult.h"
#include "model/DescribePrometheusAlertRuleRequest.h"
#include "model/DescribePrometheusAlertRuleResult.h"
#include "model/DescribeTraceLicenseKeyRequest.h"
#include "model/DescribeTraceLicenseKeyResult.h"
#include "model/DescribeWebhookContactsRequest.h"
#include "model/DescribeWebhookContactsResult.h"
#include "model/DoInsightsActionRequest.h"
#include "model/DoInsightsActionResult.h"
#include "model/EnableMetricRequest.h"
#include "model/EnableMetricResult.h"
#include "model/GetAgentDownloadUrlRequest.h"
#include "model/GetAgentDownloadUrlResult.h"
#include "model/GetAlertRulesRequest.h"
#include "model/GetAlertRulesResult.h"
#include "model/GetAppApiByPageRequest.h"
#include "model/GetAppApiByPageResult.h"
#include "model/GetAppJVMConfigRequest.h"
#include "model/GetAppJVMConfigResult.h"
#include "model/GetAuthTokenRequest.h"
#include "model/GetAuthTokenResult.h"
#include "model/GetCloudClusterAllUrlRequest.h"
#include "model/GetCloudClusterAllUrlResult.h"
#include "model/GetClusterAllUrlRequest.h"
#include "model/GetClusterAllUrlResult.h"
#include "model/GetCommercialStatusRequest.h"
#include "model/GetCommercialStatusResult.h"
#include "model/GetExploreUrlRequest.h"
#include "model/GetExploreUrlResult.h"
#include "model/GetGrafanaWorkspaceRequest.h"
#include "model/GetGrafanaWorkspaceResult.h"
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
#include "model/GetPrometheusInstanceRequest.h"
#include "model/GetPrometheusInstanceResult.h"
#include "model/GetPrometheusIntegrationRequest.h"
#include "model/GetPrometheusIntegrationResult.h"
#include "model/GetPrometheusMonitoringRequest.h"
#include "model/GetPrometheusMonitoringResult.h"
#include "model/GetRecordingRuleRequest.h"
#include "model/GetRecordingRuleResult.h"
#include "model/GetRetcodeAppByPidRequest.h"
#include "model/GetRetcodeAppByPidResult.h"
#include "model/GetRetcodeDataByQueryRequest.h"
#include "model/GetRetcodeDataByQueryResult.h"
#include "model/GetRetcodeLogstoreRequest.h"
#include "model/GetRetcodeLogstoreResult.h"
#include "model/GetRetcodeShareUrlRequest.h"
#include "model/GetRetcodeShareUrlResult.h"
#include "model/GetRumAppInfoRequest.h"
#include "model/GetRumAppInfoResult.h"
#include "model/GetRumAppsRequest.h"
#include "model/GetRumAppsResult.h"
#include "model/GetRumDataForPageRequest.h"
#include "model/GetRumDataForPageResult.h"
#include "model/GetRumExceptionStackRequest.h"
#include "model/GetRumExceptionStackResult.h"
#include "model/GetRumOcuStatisticDataRequest.h"
#include "model/GetRumOcuStatisticDataResult.h"
#include "model/GetRumUploadFilesRequest.h"
#include "model/GetRumUploadFilesResult.h"
#include "model/GetSourceMapInfoRequest.h"
#include "model/GetSourceMapInfoResult.h"
#include "model/GetStackRequest.h"
#include "model/GetStackResult.h"
#include "model/GetSyntheticMonitorsRequest.h"
#include "model/GetSyntheticMonitorsResult.h"
#include "model/GetSyntheticTaskDetailRequest.h"
#include "model/GetSyntheticTaskDetailResult.h"
#include "model/GetSyntheticTaskListRequest.h"
#include "model/GetSyntheticTaskListResult.h"
#include "model/GetSyntheticTaskMonitorsRequest.h"
#include "model/GetSyntheticTaskMonitorsResult.h"
#include "model/GetTimingSyntheticTaskRequest.h"
#include "model/GetTimingSyntheticTaskResult.h"
#include "model/GetTraceRequest.h"
#include "model/GetTraceResult.h"
#include "model/GetTraceAppRequest.h"
#include "model/GetTraceAppResult.h"
#include "model/GetTraceAppConfigRequest.h"
#include "model/GetTraceAppConfigResult.h"
#include "model/ImportAppAlertRulesRequest.h"
#include "model/ImportAppAlertRulesResult.h"
#include "model/InitEnvironmentRequest.h"
#include "model/InitEnvironmentResult.h"
#include "model/InstallAddonRequest.h"
#include "model/InstallAddonResult.h"
#include "model/InstallCmsExporterRequest.h"
#include "model/InstallCmsExporterResult.h"
#include "model/InstallEnvironmentFeatureRequest.h"
#include "model/InstallEnvironmentFeatureResult.h"
#include "model/InstallManagedPrometheusRequest.h"
#include "model/InstallManagedPrometheusResult.h"
#include "model/ListActivatedAlertsRequest.h"
#include "model/ListActivatedAlertsResult.h"
#include "model/ListAddonReleasesRequest.h"
#include "model/ListAddonReleasesResult.h"
#include "model/ListAddonsRequest.h"
#include "model/ListAddonsResult.h"
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
#include "model/ListEnvCustomJobsRequest.h"
#include "model/ListEnvCustomJobsResult.h"
#include "model/ListEnvPodMonitorsRequest.h"
#include "model/ListEnvPodMonitorsResult.h"
#include "model/ListEnvServiceMonitorsRequest.h"
#include "model/ListEnvServiceMonitorsResult.h"
#include "model/ListEnvironmentDashboardsRequest.h"
#include "model/ListEnvironmentDashboardsResult.h"
#include "model/ListEnvironmentFeaturesRequest.h"
#include "model/ListEnvironmentFeaturesResult.h"
#include "model/ListEnvironmentsRequest.h"
#include "model/ListEnvironmentsResult.h"
#include "model/ListEscalationPoliciesRequest.h"
#include "model/ListEscalationPoliciesResult.h"
#include "model/ListEventBridgeIntegrationsRequest.h"
#include "model/ListEventBridgeIntegrationsResult.h"
#include "model/ListGrafanaWorkspaceRequest.h"
#include "model/ListGrafanaWorkspaceResult.h"
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
#include "model/ListPrometheusInstanceByTagAndResourceGroupIdRequest.h"
#include "model/ListPrometheusInstanceByTagAndResourceGroupIdResult.h"
#include "model/ListPrometheusInstancesRequest.h"
#include "model/ListPrometheusInstancesResult.h"
#include "model/ListPrometheusIntegrationRequest.h"
#include "model/ListPrometheusIntegrationResult.h"
#include "model/ListPrometheusMonitoringRequest.h"
#include "model/ListPrometheusMonitoringResult.h"
#include "model/ListRetcodeAppsRequest.h"
#include "model/ListRetcodeAppsResult.h"
#include "model/ListScenarioRequest.h"
#include "model/ListScenarioResult.h"
#include "model/ListSilencePoliciesRequest.h"
#include "model/ListSilencePoliciesResult.h"
#include "model/ListSyntheticDetailRequest.h"
#include "model/ListSyntheticDetailResult.h"
#include "model/ListTimingSyntheticTasksRequest.h"
#include "model/ListTimingSyntheticTasksResult.h"
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
#include "model/QueryAppMetadataRequest.h"
#include "model/QueryAppMetadataResult.h"
#include "model/QueryAppTopologyRequest.h"
#include "model/QueryAppTopologyResult.h"
#include "model/QueryCommercialUsageRequest.h"
#include "model/QueryCommercialUsageResult.h"
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
#include "model/RestartEnvironmentFeatureRequest.h"
#include "model/RestartEnvironmentFeatureResult.h"
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
#include "model/StartTimingSyntheticTaskRequest.h"
#include "model/StartTimingSyntheticTaskResult.h"
#include "model/StopAlertRequest.h"
#include "model/StopAlertResult.h"
#include "model/StopTimingSyntheticTaskRequest.h"
#include "model/StopTimingSyntheticTaskResult.h"
#include "model/SwitchSyntheticTaskStatusRequest.h"
#include "model/SwitchSyntheticTaskStatusResult.h"
#include "model/SyncRecordingRulesRequest.h"
#include "model/SyncRecordingRulesResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UninstallManagedPrometheusRequest.h"
#include "model/UninstallManagedPrometheusResult.h"
#include "model/UninstallPromClusterRequest.h"
#include "model/UninstallPromClusterResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpdateAlertContactRequest.h"
#include "model/UpdateAlertContactResult.h"
#include "model/UpdateAlertContactGroupRequest.h"
#include "model/UpdateAlertContactGroupResult.h"
#include "model/UpdateAlertRuleRequest.h"
#include "model/UpdateAlertRuleResult.h"
#include "model/UpdateDispatchRuleRequest.h"
#include "model/UpdateDispatchRuleResult.h"
#include "model/UpdateEnvCustomJobRequest.h"
#include "model/UpdateEnvCustomJobResult.h"
#include "model/UpdateEnvPodMonitorRequest.h"
#include "model/UpdateEnvPodMonitorResult.h"
#include "model/UpdateEnvServiceMonitorRequest.h"
#include "model/UpdateEnvServiceMonitorResult.h"
#include "model/UpdateEnvironmentRequest.h"
#include "model/UpdateEnvironmentResult.h"
#include "model/UpdateGrafanaWorkspaceRequest.h"
#include "model/UpdateGrafanaWorkspaceResult.h"
#include "model/UpdateGrafanaWorkspaceVersionRequest.h"
#include "model/UpdateGrafanaWorkspaceVersionResult.h"
#include "model/UpdateIntegrationRequest.h"
#include "model/UpdateIntegrationResult.h"
#include "model/UpdateMetricDropRequest.h"
#include "model/UpdateMetricDropResult.h"
#include "model/UpdatePrometheusAlertRuleRequest.h"
#include "model/UpdatePrometheusAlertRuleResult.h"
#include "model/UpdatePrometheusGlobalViewRequest.h"
#include "model/UpdatePrometheusGlobalViewResult.h"
#include "model/UpdatePrometheusInstanceRequest.h"
#include "model/UpdatePrometheusInstanceResult.h"
#include "model/UpdatePrometheusIntegrationRequest.h"
#include "model/UpdatePrometheusIntegrationResult.h"
#include "model/UpdatePrometheusMonitoringRequest.h"
#include "model/UpdatePrometheusMonitoringResult.h"
#include "model/UpdatePrometheusMonitoringStatusRequest.h"
#include "model/UpdatePrometheusMonitoringStatusResult.h"
#include "model/UpdateRumAppRequest.h"
#include "model/UpdateRumAppResult.h"
#include "model/UpdateRumFileStatusRequest.h"
#include "model/UpdateRumFileStatusResult.h"
#include "model/UpdateTimingSyntheticTaskRequest.h"
#include "model/UpdateTimingSyntheticTaskResult.h"
#include "model/UpdateWebhookRequest.h"
#include "model/UpdateWebhookResult.h"
#include "model/UpgradeAddonReleaseRequest.h"
#include "model/UpgradeAddonReleaseResult.h"
#include "model/UpgradeEnvironmentFeatureRequest.h"
#include "model/UpgradeEnvironmentFeatureResult.h"
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
			typedef Outcome<Error, Model::AddPrometheusIntegrationResult> AddPrometheusIntegrationOutcome;
			typedef std::future<AddPrometheusIntegrationOutcome> AddPrometheusIntegrationOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::AddPrometheusIntegrationRequest&, const AddPrometheusIntegrationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddPrometheusIntegrationAsyncHandler;
			typedef Outcome<Error, Model::AddRecordingRuleResult> AddRecordingRuleOutcome;
			typedef std::future<AddRecordingRuleOutcome> AddRecordingRuleOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::AddRecordingRuleRequest&, const AddRecordingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddRecordingRuleAsyncHandler;
			typedef Outcome<Error, Model::AddTagToFlinkClusterResult> AddTagToFlinkClusterOutcome;
			typedef std::future<AddTagToFlinkClusterOutcome> AddTagToFlinkClusterOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::AddTagToFlinkClusterRequest&, const AddTagToFlinkClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddTagToFlinkClusterAsyncHandler;
			typedef Outcome<Error, Model::AppendInstancesToPrometheusGlobalViewResult> AppendInstancesToPrometheusGlobalViewOutcome;
			typedef std::future<AppendInstancesToPrometheusGlobalViewOutcome> AppendInstancesToPrometheusGlobalViewOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::AppendInstancesToPrometheusGlobalViewRequest&, const AppendInstancesToPrometheusGlobalViewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AppendInstancesToPrometheusGlobalViewAsyncHandler;
			typedef Outcome<Error, Model::ApplyScenarioResult> ApplyScenarioOutcome;
			typedef std::future<ApplyScenarioOutcome> ApplyScenarioOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ApplyScenarioRequest&, const ApplyScenarioOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ApplyScenarioAsyncHandler;
			typedef Outcome<Error, Model::BindPrometheusGrafanaInstanceResult> BindPrometheusGrafanaInstanceOutcome;
			typedef std::future<BindPrometheusGrafanaInstanceOutcome> BindPrometheusGrafanaInstanceOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::BindPrometheusGrafanaInstanceRequest&, const BindPrometheusGrafanaInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindPrometheusGrafanaInstanceAsyncHandler;
			typedef Outcome<Error, Model::BlockAlarmNotificationResult> BlockAlarmNotificationOutcome;
			typedef std::future<BlockAlarmNotificationOutcome> BlockAlarmNotificationOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::BlockAlarmNotificationRequest&, const BlockAlarmNotificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BlockAlarmNotificationAsyncHandler;
			typedef Outcome<Error, Model::ChangeAlarmSeverityResult> ChangeAlarmSeverityOutcome;
			typedef std::future<ChangeAlarmSeverityOutcome> ChangeAlarmSeverityOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ChangeAlarmSeverityRequest&, const ChangeAlarmSeverityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeAlarmSeverityAsyncHandler;
			typedef Outcome<Error, Model::ChangeResourceGroupResult> ChangeResourceGroupOutcome;
			typedef std::future<ChangeResourceGroupOutcome> ChangeResourceGroupOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ChangeResourceGroupRequest&, const ChangeResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::CheckCommercialStatusResult> CheckCommercialStatusOutcome;
			typedef std::future<CheckCommercialStatusOutcome> CheckCommercialStatusOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CheckCommercialStatusRequest&, const CheckCommercialStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckCommercialStatusAsyncHandler;
			typedef Outcome<Error, Model::CheckServiceStatusResult> CheckServiceStatusOutcome;
			typedef std::future<CheckServiceStatusOutcome> CheckServiceStatusOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CheckServiceStatusRequest&, const CheckServiceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckServiceStatusAsyncHandler;
			typedef Outcome<Error, Model::ClaimAlarmResult> ClaimAlarmOutcome;
			typedef std::future<ClaimAlarmOutcome> ClaimAlarmOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ClaimAlarmRequest&, const ClaimAlarmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ClaimAlarmAsyncHandler;
			typedef Outcome<Error, Model::CloseAlarmResult> CloseAlarmOutcome;
			typedef std::future<CloseAlarmOutcome> CloseAlarmOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CloseAlarmRequest&, const CloseAlarmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloseAlarmAsyncHandler;
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
			typedef Outcome<Error, Model::CreateEnvCustomJobResult> CreateEnvCustomJobOutcome;
			typedef std::future<CreateEnvCustomJobOutcome> CreateEnvCustomJobOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreateEnvCustomJobRequest&, const CreateEnvCustomJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEnvCustomJobAsyncHandler;
			typedef Outcome<Error, Model::CreateEnvPodMonitorResult> CreateEnvPodMonitorOutcome;
			typedef std::future<CreateEnvPodMonitorOutcome> CreateEnvPodMonitorOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreateEnvPodMonitorRequest&, const CreateEnvPodMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEnvPodMonitorAsyncHandler;
			typedef Outcome<Error, Model::CreateEnvServiceMonitorResult> CreateEnvServiceMonitorOutcome;
			typedef std::future<CreateEnvServiceMonitorOutcome> CreateEnvServiceMonitorOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreateEnvServiceMonitorRequest&, const CreateEnvServiceMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEnvServiceMonitorAsyncHandler;
			typedef Outcome<Error, Model::CreateEnvironmentResult> CreateEnvironmentOutcome;
			typedef std::future<CreateEnvironmentOutcome> CreateEnvironmentOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreateEnvironmentRequest&, const CreateEnvironmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEnvironmentAsyncHandler;
			typedef Outcome<Error, Model::CreateGrafanaWorkspaceResult> CreateGrafanaWorkspaceOutcome;
			typedef std::future<CreateGrafanaWorkspaceOutcome> CreateGrafanaWorkspaceOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreateGrafanaWorkspaceRequest&, const CreateGrafanaWorkspaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGrafanaWorkspaceAsyncHandler;
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
			typedef Outcome<Error, Model::CreatePrometheusInstanceResult> CreatePrometheusInstanceOutcome;
			typedef std::future<CreatePrometheusInstanceOutcome> CreatePrometheusInstanceOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreatePrometheusInstanceRequest&, const CreatePrometheusInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreatePrometheusMonitoringResult> CreatePrometheusMonitoringOutcome;
			typedef std::future<CreatePrometheusMonitoringOutcome> CreatePrometheusMonitoringOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreatePrometheusMonitoringRequest&, const CreatePrometheusMonitoringOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrometheusMonitoringAsyncHandler;
			typedef Outcome<Error, Model::CreateRetcodeAppResult> CreateRetcodeAppOutcome;
			typedef std::future<CreateRetcodeAppOutcome> CreateRetcodeAppOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreateRetcodeAppRequest&, const CreateRetcodeAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRetcodeAppAsyncHandler;
			typedef Outcome<Error, Model::CreateRumAppResult> CreateRumAppOutcome;
			typedef std::future<CreateRumAppOutcome> CreateRumAppOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreateRumAppRequest&, const CreateRumAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRumAppAsyncHandler;
			typedef Outcome<Error, Model::CreateRumUploadFileUrlResult> CreateRumUploadFileUrlOutcome;
			typedef std::future<CreateRumUploadFileUrlOutcome> CreateRumUploadFileUrlOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreateRumUploadFileUrlRequest&, const CreateRumUploadFileUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRumUploadFileUrlAsyncHandler;
			typedef Outcome<Error, Model::CreateSyntheticTaskResult> CreateSyntheticTaskOutcome;
			typedef std::future<CreateSyntheticTaskOutcome> CreateSyntheticTaskOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreateSyntheticTaskRequest&, const CreateSyntheticTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSyntheticTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateTimingSyntheticTaskResult> CreateTimingSyntheticTaskOutcome;
			typedef std::future<CreateTimingSyntheticTaskOutcome> CreateTimingSyntheticTaskOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreateTimingSyntheticTaskRequest&, const CreateTimingSyntheticTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTimingSyntheticTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateWebhookResult> CreateWebhookOutcome;
			typedef std::future<CreateWebhookOutcome> CreateWebhookOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::CreateWebhookRequest&, const CreateWebhookOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateWebhookAsyncHandler;
			typedef Outcome<Error, Model::DelAuthTokenResult> DelAuthTokenOutcome;
			typedef std::future<DelAuthTokenOutcome> DelAuthTokenOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DelAuthTokenRequest&, const DelAuthTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DelAuthTokenAsyncHandler;
			typedef Outcome<Error, Model::DeleteAddonReleaseResult> DeleteAddonReleaseOutcome;
			typedef std::future<DeleteAddonReleaseOutcome> DeleteAddonReleaseOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteAddonReleaseRequest&, const DeleteAddonReleaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAddonReleaseAsyncHandler;
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
			typedef Outcome<Error, Model::DeleteAppListResult> DeleteAppListOutcome;
			typedef std::future<DeleteAppListOutcome> DeleteAppListOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteAppListRequest&, const DeleteAppListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAppListAsyncHandler;
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
			typedef Outcome<Error, Model::DeleteEnvCustomJobResult> DeleteEnvCustomJobOutcome;
			typedef std::future<DeleteEnvCustomJobOutcome> DeleteEnvCustomJobOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteEnvCustomJobRequest&, const DeleteEnvCustomJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEnvCustomJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteEnvPodMonitorResult> DeleteEnvPodMonitorOutcome;
			typedef std::future<DeleteEnvPodMonitorOutcome> DeleteEnvPodMonitorOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteEnvPodMonitorRequest&, const DeleteEnvPodMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEnvPodMonitorAsyncHandler;
			typedef Outcome<Error, Model::DeleteEnvServiceMonitorResult> DeleteEnvServiceMonitorOutcome;
			typedef std::future<DeleteEnvServiceMonitorOutcome> DeleteEnvServiceMonitorOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteEnvServiceMonitorRequest&, const DeleteEnvServiceMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEnvServiceMonitorAsyncHandler;
			typedef Outcome<Error, Model::DeleteEnvironmentResult> DeleteEnvironmentOutcome;
			typedef std::future<DeleteEnvironmentOutcome> DeleteEnvironmentOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteEnvironmentRequest&, const DeleteEnvironmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEnvironmentAsyncHandler;
			typedef Outcome<Error, Model::DeleteEnvironmentFeatureResult> DeleteEnvironmentFeatureOutcome;
			typedef std::future<DeleteEnvironmentFeatureOutcome> DeleteEnvironmentFeatureOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteEnvironmentFeatureRequest&, const DeleteEnvironmentFeatureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEnvironmentFeatureAsyncHandler;
			typedef Outcome<Error, Model::DeleteEventBridgeIntegrationResult> DeleteEventBridgeIntegrationOutcome;
			typedef std::future<DeleteEventBridgeIntegrationOutcome> DeleteEventBridgeIntegrationOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteEventBridgeIntegrationRequest&, const DeleteEventBridgeIntegrationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEventBridgeIntegrationAsyncHandler;
			typedef Outcome<Error, Model::DeleteGrafanaResourceResult> DeleteGrafanaResourceOutcome;
			typedef std::future<DeleteGrafanaResourceOutcome> DeleteGrafanaResourceOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteGrafanaResourceRequest&, const DeleteGrafanaResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGrafanaResourceAsyncHandler;
			typedef Outcome<Error, Model::DeleteGrafanaWorkspaceResult> DeleteGrafanaWorkspaceOutcome;
			typedef std::future<DeleteGrafanaWorkspaceOutcome> DeleteGrafanaWorkspaceOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteGrafanaWorkspaceRequest&, const DeleteGrafanaWorkspaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGrafanaWorkspaceAsyncHandler;
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
			typedef Outcome<Error, Model::DeletePrometheusIntegrationResult> DeletePrometheusIntegrationOutcome;
			typedef std::future<DeletePrometheusIntegrationOutcome> DeletePrometheusIntegrationOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeletePrometheusIntegrationRequest&, const DeletePrometheusIntegrationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrometheusIntegrationAsyncHandler;
			typedef Outcome<Error, Model::DeletePrometheusMonitoringResult> DeletePrometheusMonitoringOutcome;
			typedef std::future<DeletePrometheusMonitoringOutcome> DeletePrometheusMonitoringOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeletePrometheusMonitoringRequest&, const DeletePrometheusMonitoringOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrometheusMonitoringAsyncHandler;
			typedef Outcome<Error, Model::DeleteRetcodeAppResult> DeleteRetcodeAppOutcome;
			typedef std::future<DeleteRetcodeAppOutcome> DeleteRetcodeAppOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteRetcodeAppRequest&, const DeleteRetcodeAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRetcodeAppAsyncHandler;
			typedef Outcome<Error, Model::DeleteRumAppResult> DeleteRumAppOutcome;
			typedef std::future<DeleteRumAppOutcome> DeleteRumAppOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteRumAppRequest&, const DeleteRumAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRumAppAsyncHandler;
			typedef Outcome<Error, Model::DeleteRumUploadFileResult> DeleteRumUploadFileOutcome;
			typedef std::future<DeleteRumUploadFileOutcome> DeleteRumUploadFileOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteRumUploadFileRequest&, const DeleteRumUploadFileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRumUploadFileAsyncHandler;
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
			typedef Outcome<Error, Model::DeleteTimingSyntheticTaskResult> DeleteTimingSyntheticTaskOutcome;
			typedef std::future<DeleteTimingSyntheticTaskOutcome> DeleteTimingSyntheticTaskOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteTimingSyntheticTaskRequest&, const DeleteTimingSyntheticTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTimingSyntheticTaskAsyncHandler;
			typedef Outcome<Error, Model::DeleteTraceAppResult> DeleteTraceAppOutcome;
			typedef std::future<DeleteTraceAppOutcome> DeleteTraceAppOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteTraceAppRequest&, const DeleteTraceAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTraceAppAsyncHandler;
			typedef Outcome<Error, Model::DeleteWebhookContactResult> DeleteWebhookContactOutcome;
			typedef std::future<DeleteWebhookContactOutcome> DeleteWebhookContactOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DeleteWebhookContactRequest&, const DeleteWebhookContactOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWebhookContactAsyncHandler;
			typedef Outcome<Error, Model::DescribeAddonReleaseResult> DescribeAddonReleaseOutcome;
			typedef std::future<DescribeAddonReleaseOutcome> DescribeAddonReleaseOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DescribeAddonReleaseRequest&, const DescribeAddonReleaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAddonReleaseAsyncHandler;
			typedef Outcome<Error, Model::DescribeContactGroupsResult> DescribeContactGroupsOutcome;
			typedef std::future<DescribeContactGroupsOutcome> DescribeContactGroupsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DescribeContactGroupsRequest&, const DescribeContactGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContactGroupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeContactsResult> DescribeContactsOutcome;
			typedef std::future<DescribeContactsOutcome> DescribeContactsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DescribeContactsRequest&, const DescribeContactsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContactsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDispatchRuleResult> DescribeDispatchRuleOutcome;
			typedef std::future<DescribeDispatchRuleOutcome> DescribeDispatchRuleOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DescribeDispatchRuleRequest&, const DescribeDispatchRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDispatchRuleAsyncHandler;
			typedef Outcome<Error, Model::DescribeEnvCustomJobResult> DescribeEnvCustomJobOutcome;
			typedef std::future<DescribeEnvCustomJobOutcome> DescribeEnvCustomJobOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DescribeEnvCustomJobRequest&, const DescribeEnvCustomJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnvCustomJobAsyncHandler;
			typedef Outcome<Error, Model::DescribeEnvPodMonitorResult> DescribeEnvPodMonitorOutcome;
			typedef std::future<DescribeEnvPodMonitorOutcome> DescribeEnvPodMonitorOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DescribeEnvPodMonitorRequest&, const DescribeEnvPodMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnvPodMonitorAsyncHandler;
			typedef Outcome<Error, Model::DescribeEnvServiceMonitorResult> DescribeEnvServiceMonitorOutcome;
			typedef std::future<DescribeEnvServiceMonitorOutcome> DescribeEnvServiceMonitorOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DescribeEnvServiceMonitorRequest&, const DescribeEnvServiceMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnvServiceMonitorAsyncHandler;
			typedef Outcome<Error, Model::DescribeEnvironmentResult> DescribeEnvironmentOutcome;
			typedef std::future<DescribeEnvironmentOutcome> DescribeEnvironmentOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DescribeEnvironmentRequest&, const DescribeEnvironmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnvironmentAsyncHandler;
			typedef Outcome<Error, Model::DescribeEnvironmentFeatureResult> DescribeEnvironmentFeatureOutcome;
			typedef std::future<DescribeEnvironmentFeatureOutcome> DescribeEnvironmentFeatureOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DescribeEnvironmentFeatureRequest&, const DescribeEnvironmentFeatureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnvironmentFeatureAsyncHandler;
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
			typedef Outcome<Error, Model::DoInsightsActionResult> DoInsightsActionOutcome;
			typedef std::future<DoInsightsActionOutcome> DoInsightsActionOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::DoInsightsActionRequest&, const DoInsightsActionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DoInsightsActionAsyncHandler;
			typedef Outcome<Error, Model::EnableMetricResult> EnableMetricOutcome;
			typedef std::future<EnableMetricOutcome> EnableMetricOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::EnableMetricRequest&, const EnableMetricOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableMetricAsyncHandler;
			typedef Outcome<Error, Model::GetAgentDownloadUrlResult> GetAgentDownloadUrlOutcome;
			typedef std::future<GetAgentDownloadUrlOutcome> GetAgentDownloadUrlOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetAgentDownloadUrlRequest&, const GetAgentDownloadUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAgentDownloadUrlAsyncHandler;
			typedef Outcome<Error, Model::GetAlertRulesResult> GetAlertRulesOutcome;
			typedef std::future<GetAlertRulesOutcome> GetAlertRulesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetAlertRulesRequest&, const GetAlertRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAlertRulesAsyncHandler;
			typedef Outcome<Error, Model::GetAppApiByPageResult> GetAppApiByPageOutcome;
			typedef std::future<GetAppApiByPageOutcome> GetAppApiByPageOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetAppApiByPageRequest&, const GetAppApiByPageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAppApiByPageAsyncHandler;
			typedef Outcome<Error, Model::GetAppJVMConfigResult> GetAppJVMConfigOutcome;
			typedef std::future<GetAppJVMConfigOutcome> GetAppJVMConfigOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetAppJVMConfigRequest&, const GetAppJVMConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAppJVMConfigAsyncHandler;
			typedef Outcome<Error, Model::GetAuthTokenResult> GetAuthTokenOutcome;
			typedef std::future<GetAuthTokenOutcome> GetAuthTokenOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetAuthTokenRequest&, const GetAuthTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAuthTokenAsyncHandler;
			typedef Outcome<Error, Model::GetCloudClusterAllUrlResult> GetCloudClusterAllUrlOutcome;
			typedef std::future<GetCloudClusterAllUrlOutcome> GetCloudClusterAllUrlOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetCloudClusterAllUrlRequest&, const GetCloudClusterAllUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCloudClusterAllUrlAsyncHandler;
			typedef Outcome<Error, Model::GetClusterAllUrlResult> GetClusterAllUrlOutcome;
			typedef std::future<GetClusterAllUrlOutcome> GetClusterAllUrlOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetClusterAllUrlRequest&, const GetClusterAllUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetClusterAllUrlAsyncHandler;
			typedef Outcome<Error, Model::GetCommercialStatusResult> GetCommercialStatusOutcome;
			typedef std::future<GetCommercialStatusOutcome> GetCommercialStatusOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetCommercialStatusRequest&, const GetCommercialStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCommercialStatusAsyncHandler;
			typedef Outcome<Error, Model::GetExploreUrlResult> GetExploreUrlOutcome;
			typedef std::future<GetExploreUrlOutcome> GetExploreUrlOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetExploreUrlRequest&, const GetExploreUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetExploreUrlAsyncHandler;
			typedef Outcome<Error, Model::GetGrafanaWorkspaceResult> GetGrafanaWorkspaceOutcome;
			typedef std::future<GetGrafanaWorkspaceOutcome> GetGrafanaWorkspaceOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetGrafanaWorkspaceRequest&, const GetGrafanaWorkspaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGrafanaWorkspaceAsyncHandler;
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
			typedef Outcome<Error, Model::GetPrometheusInstanceResult> GetPrometheusInstanceOutcome;
			typedef std::future<GetPrometheusInstanceOutcome> GetPrometheusInstanceOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetPrometheusInstanceRequest&, const GetPrometheusInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPrometheusInstanceAsyncHandler;
			typedef Outcome<Error, Model::GetPrometheusIntegrationResult> GetPrometheusIntegrationOutcome;
			typedef std::future<GetPrometheusIntegrationOutcome> GetPrometheusIntegrationOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetPrometheusIntegrationRequest&, const GetPrometheusIntegrationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPrometheusIntegrationAsyncHandler;
			typedef Outcome<Error, Model::GetPrometheusMonitoringResult> GetPrometheusMonitoringOutcome;
			typedef std::future<GetPrometheusMonitoringOutcome> GetPrometheusMonitoringOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetPrometheusMonitoringRequest&, const GetPrometheusMonitoringOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPrometheusMonitoringAsyncHandler;
			typedef Outcome<Error, Model::GetRecordingRuleResult> GetRecordingRuleOutcome;
			typedef std::future<GetRecordingRuleOutcome> GetRecordingRuleOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetRecordingRuleRequest&, const GetRecordingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRecordingRuleAsyncHandler;
			typedef Outcome<Error, Model::GetRetcodeAppByPidResult> GetRetcodeAppByPidOutcome;
			typedef std::future<GetRetcodeAppByPidOutcome> GetRetcodeAppByPidOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetRetcodeAppByPidRequest&, const GetRetcodeAppByPidOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRetcodeAppByPidAsyncHandler;
			typedef Outcome<Error, Model::GetRetcodeDataByQueryResult> GetRetcodeDataByQueryOutcome;
			typedef std::future<GetRetcodeDataByQueryOutcome> GetRetcodeDataByQueryOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetRetcodeDataByQueryRequest&, const GetRetcodeDataByQueryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRetcodeDataByQueryAsyncHandler;
			typedef Outcome<Error, Model::GetRetcodeLogstoreResult> GetRetcodeLogstoreOutcome;
			typedef std::future<GetRetcodeLogstoreOutcome> GetRetcodeLogstoreOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetRetcodeLogstoreRequest&, const GetRetcodeLogstoreOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRetcodeLogstoreAsyncHandler;
			typedef Outcome<Error, Model::GetRetcodeShareUrlResult> GetRetcodeShareUrlOutcome;
			typedef std::future<GetRetcodeShareUrlOutcome> GetRetcodeShareUrlOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetRetcodeShareUrlRequest&, const GetRetcodeShareUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRetcodeShareUrlAsyncHandler;
			typedef Outcome<Error, Model::GetRumAppInfoResult> GetRumAppInfoOutcome;
			typedef std::future<GetRumAppInfoOutcome> GetRumAppInfoOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetRumAppInfoRequest&, const GetRumAppInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRumAppInfoAsyncHandler;
			typedef Outcome<Error, Model::GetRumAppsResult> GetRumAppsOutcome;
			typedef std::future<GetRumAppsOutcome> GetRumAppsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetRumAppsRequest&, const GetRumAppsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRumAppsAsyncHandler;
			typedef Outcome<Error, Model::GetRumDataForPageResult> GetRumDataForPageOutcome;
			typedef std::future<GetRumDataForPageOutcome> GetRumDataForPageOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetRumDataForPageRequest&, const GetRumDataForPageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRumDataForPageAsyncHandler;
			typedef Outcome<Error, Model::GetRumExceptionStackResult> GetRumExceptionStackOutcome;
			typedef std::future<GetRumExceptionStackOutcome> GetRumExceptionStackOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetRumExceptionStackRequest&, const GetRumExceptionStackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRumExceptionStackAsyncHandler;
			typedef Outcome<Error, Model::GetRumOcuStatisticDataResult> GetRumOcuStatisticDataOutcome;
			typedef std::future<GetRumOcuStatisticDataOutcome> GetRumOcuStatisticDataOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetRumOcuStatisticDataRequest&, const GetRumOcuStatisticDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRumOcuStatisticDataAsyncHandler;
			typedef Outcome<Error, Model::GetRumUploadFilesResult> GetRumUploadFilesOutcome;
			typedef std::future<GetRumUploadFilesOutcome> GetRumUploadFilesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetRumUploadFilesRequest&, const GetRumUploadFilesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetRumUploadFilesAsyncHandler;
			typedef Outcome<Error, Model::GetSourceMapInfoResult> GetSourceMapInfoOutcome;
			typedef std::future<GetSourceMapInfoOutcome> GetSourceMapInfoOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetSourceMapInfoRequest&, const GetSourceMapInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSourceMapInfoAsyncHandler;
			typedef Outcome<Error, Model::GetStackResult> GetStackOutcome;
			typedef std::future<GetStackOutcome> GetStackOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetStackRequest&, const GetStackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetStackAsyncHandler;
			typedef Outcome<Error, Model::GetSyntheticMonitorsResult> GetSyntheticMonitorsOutcome;
			typedef std::future<GetSyntheticMonitorsOutcome> GetSyntheticMonitorsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetSyntheticMonitorsRequest&, const GetSyntheticMonitorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSyntheticMonitorsAsyncHandler;
			typedef Outcome<Error, Model::GetSyntheticTaskDetailResult> GetSyntheticTaskDetailOutcome;
			typedef std::future<GetSyntheticTaskDetailOutcome> GetSyntheticTaskDetailOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetSyntheticTaskDetailRequest&, const GetSyntheticTaskDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSyntheticTaskDetailAsyncHandler;
			typedef Outcome<Error, Model::GetSyntheticTaskListResult> GetSyntheticTaskListOutcome;
			typedef std::future<GetSyntheticTaskListOutcome> GetSyntheticTaskListOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetSyntheticTaskListRequest&, const GetSyntheticTaskListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSyntheticTaskListAsyncHandler;
			typedef Outcome<Error, Model::GetSyntheticTaskMonitorsResult> GetSyntheticTaskMonitorsOutcome;
			typedef std::future<GetSyntheticTaskMonitorsOutcome> GetSyntheticTaskMonitorsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetSyntheticTaskMonitorsRequest&, const GetSyntheticTaskMonitorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSyntheticTaskMonitorsAsyncHandler;
			typedef Outcome<Error, Model::GetTimingSyntheticTaskResult> GetTimingSyntheticTaskOutcome;
			typedef std::future<GetTimingSyntheticTaskOutcome> GetTimingSyntheticTaskOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetTimingSyntheticTaskRequest&, const GetTimingSyntheticTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTimingSyntheticTaskAsyncHandler;
			typedef Outcome<Error, Model::GetTraceResult> GetTraceOutcome;
			typedef std::future<GetTraceOutcome> GetTraceOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetTraceRequest&, const GetTraceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTraceAsyncHandler;
			typedef Outcome<Error, Model::GetTraceAppResult> GetTraceAppOutcome;
			typedef std::future<GetTraceAppOutcome> GetTraceAppOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetTraceAppRequest&, const GetTraceAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTraceAppAsyncHandler;
			typedef Outcome<Error, Model::GetTraceAppConfigResult> GetTraceAppConfigOutcome;
			typedef std::future<GetTraceAppConfigOutcome> GetTraceAppConfigOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::GetTraceAppConfigRequest&, const GetTraceAppConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTraceAppConfigAsyncHandler;
			typedef Outcome<Error, Model::ImportAppAlertRulesResult> ImportAppAlertRulesOutcome;
			typedef std::future<ImportAppAlertRulesOutcome> ImportAppAlertRulesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ImportAppAlertRulesRequest&, const ImportAppAlertRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportAppAlertRulesAsyncHandler;
			typedef Outcome<Error, Model::InitEnvironmentResult> InitEnvironmentOutcome;
			typedef std::future<InitEnvironmentOutcome> InitEnvironmentOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::InitEnvironmentRequest&, const InitEnvironmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InitEnvironmentAsyncHandler;
			typedef Outcome<Error, Model::InstallAddonResult> InstallAddonOutcome;
			typedef std::future<InstallAddonOutcome> InstallAddonOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::InstallAddonRequest&, const InstallAddonOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InstallAddonAsyncHandler;
			typedef Outcome<Error, Model::InstallCmsExporterResult> InstallCmsExporterOutcome;
			typedef std::future<InstallCmsExporterOutcome> InstallCmsExporterOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::InstallCmsExporterRequest&, const InstallCmsExporterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InstallCmsExporterAsyncHandler;
			typedef Outcome<Error, Model::InstallEnvironmentFeatureResult> InstallEnvironmentFeatureOutcome;
			typedef std::future<InstallEnvironmentFeatureOutcome> InstallEnvironmentFeatureOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::InstallEnvironmentFeatureRequest&, const InstallEnvironmentFeatureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InstallEnvironmentFeatureAsyncHandler;
			typedef Outcome<Error, Model::InstallManagedPrometheusResult> InstallManagedPrometheusOutcome;
			typedef std::future<InstallManagedPrometheusOutcome> InstallManagedPrometheusOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::InstallManagedPrometheusRequest&, const InstallManagedPrometheusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InstallManagedPrometheusAsyncHandler;
			typedef Outcome<Error, Model::ListActivatedAlertsResult> ListActivatedAlertsOutcome;
			typedef std::future<ListActivatedAlertsOutcome> ListActivatedAlertsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListActivatedAlertsRequest&, const ListActivatedAlertsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListActivatedAlertsAsyncHandler;
			typedef Outcome<Error, Model::ListAddonReleasesResult> ListAddonReleasesOutcome;
			typedef std::future<ListAddonReleasesOutcome> ListAddonReleasesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListAddonReleasesRequest&, const ListAddonReleasesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAddonReleasesAsyncHandler;
			typedef Outcome<Error, Model::ListAddonsResult> ListAddonsOutcome;
			typedef std::future<ListAddonsOutcome> ListAddonsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListAddonsRequest&, const ListAddonsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAddonsAsyncHandler;
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
			typedef Outcome<Error, Model::ListEnvCustomJobsResult> ListEnvCustomJobsOutcome;
			typedef std::future<ListEnvCustomJobsOutcome> ListEnvCustomJobsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListEnvCustomJobsRequest&, const ListEnvCustomJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEnvCustomJobsAsyncHandler;
			typedef Outcome<Error, Model::ListEnvPodMonitorsResult> ListEnvPodMonitorsOutcome;
			typedef std::future<ListEnvPodMonitorsOutcome> ListEnvPodMonitorsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListEnvPodMonitorsRequest&, const ListEnvPodMonitorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEnvPodMonitorsAsyncHandler;
			typedef Outcome<Error, Model::ListEnvServiceMonitorsResult> ListEnvServiceMonitorsOutcome;
			typedef std::future<ListEnvServiceMonitorsOutcome> ListEnvServiceMonitorsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListEnvServiceMonitorsRequest&, const ListEnvServiceMonitorsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEnvServiceMonitorsAsyncHandler;
			typedef Outcome<Error, Model::ListEnvironmentDashboardsResult> ListEnvironmentDashboardsOutcome;
			typedef std::future<ListEnvironmentDashboardsOutcome> ListEnvironmentDashboardsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListEnvironmentDashboardsRequest&, const ListEnvironmentDashboardsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEnvironmentDashboardsAsyncHandler;
			typedef Outcome<Error, Model::ListEnvironmentFeaturesResult> ListEnvironmentFeaturesOutcome;
			typedef std::future<ListEnvironmentFeaturesOutcome> ListEnvironmentFeaturesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListEnvironmentFeaturesRequest&, const ListEnvironmentFeaturesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEnvironmentFeaturesAsyncHandler;
			typedef Outcome<Error, Model::ListEnvironmentsResult> ListEnvironmentsOutcome;
			typedef std::future<ListEnvironmentsOutcome> ListEnvironmentsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListEnvironmentsRequest&, const ListEnvironmentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEnvironmentsAsyncHandler;
			typedef Outcome<Error, Model::ListEscalationPoliciesResult> ListEscalationPoliciesOutcome;
			typedef std::future<ListEscalationPoliciesOutcome> ListEscalationPoliciesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListEscalationPoliciesRequest&, const ListEscalationPoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEscalationPoliciesAsyncHandler;
			typedef Outcome<Error, Model::ListEventBridgeIntegrationsResult> ListEventBridgeIntegrationsOutcome;
			typedef std::future<ListEventBridgeIntegrationsOutcome> ListEventBridgeIntegrationsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListEventBridgeIntegrationsRequest&, const ListEventBridgeIntegrationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEventBridgeIntegrationsAsyncHandler;
			typedef Outcome<Error, Model::ListGrafanaWorkspaceResult> ListGrafanaWorkspaceOutcome;
			typedef std::future<ListGrafanaWorkspaceOutcome> ListGrafanaWorkspaceOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListGrafanaWorkspaceRequest&, const ListGrafanaWorkspaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGrafanaWorkspaceAsyncHandler;
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
			typedef Outcome<Error, Model::ListPrometheusInstanceByTagAndResourceGroupIdResult> ListPrometheusInstanceByTagAndResourceGroupIdOutcome;
			typedef std::future<ListPrometheusInstanceByTagAndResourceGroupIdOutcome> ListPrometheusInstanceByTagAndResourceGroupIdOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListPrometheusInstanceByTagAndResourceGroupIdRequest&, const ListPrometheusInstanceByTagAndResourceGroupIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPrometheusInstanceByTagAndResourceGroupIdAsyncHandler;
			typedef Outcome<Error, Model::ListPrometheusInstancesResult> ListPrometheusInstancesOutcome;
			typedef std::future<ListPrometheusInstancesOutcome> ListPrometheusInstancesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListPrometheusInstancesRequest&, const ListPrometheusInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPrometheusInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListPrometheusIntegrationResult> ListPrometheusIntegrationOutcome;
			typedef std::future<ListPrometheusIntegrationOutcome> ListPrometheusIntegrationOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListPrometheusIntegrationRequest&, const ListPrometheusIntegrationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPrometheusIntegrationAsyncHandler;
			typedef Outcome<Error, Model::ListPrometheusMonitoringResult> ListPrometheusMonitoringOutcome;
			typedef std::future<ListPrometheusMonitoringOutcome> ListPrometheusMonitoringOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListPrometheusMonitoringRequest&, const ListPrometheusMonitoringOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPrometheusMonitoringAsyncHandler;
			typedef Outcome<Error, Model::ListRetcodeAppsResult> ListRetcodeAppsOutcome;
			typedef std::future<ListRetcodeAppsOutcome> ListRetcodeAppsOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListRetcodeAppsRequest&, const ListRetcodeAppsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRetcodeAppsAsyncHandler;
			typedef Outcome<Error, Model::ListScenarioResult> ListScenarioOutcome;
			typedef std::future<ListScenarioOutcome> ListScenarioOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListScenarioRequest&, const ListScenarioOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListScenarioAsyncHandler;
			typedef Outcome<Error, Model::ListSilencePoliciesResult> ListSilencePoliciesOutcome;
			typedef std::future<ListSilencePoliciesOutcome> ListSilencePoliciesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListSilencePoliciesRequest&, const ListSilencePoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSilencePoliciesAsyncHandler;
			typedef Outcome<Error, Model::ListSyntheticDetailResult> ListSyntheticDetailOutcome;
			typedef std::future<ListSyntheticDetailOutcome> ListSyntheticDetailOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListSyntheticDetailRequest&, const ListSyntheticDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSyntheticDetailAsyncHandler;
			typedef Outcome<Error, Model::ListTimingSyntheticTasksResult> ListTimingSyntheticTasksOutcome;
			typedef std::future<ListTimingSyntheticTasksOutcome> ListTimingSyntheticTasksOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::ListTimingSyntheticTasksRequest&, const ListTimingSyntheticTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTimingSyntheticTasksAsyncHandler;
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
			typedef Outcome<Error, Model::QueryAppMetadataResult> QueryAppMetadataOutcome;
			typedef std::future<QueryAppMetadataOutcome> QueryAppMetadataOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::QueryAppMetadataRequest&, const QueryAppMetadataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryAppMetadataAsyncHandler;
			typedef Outcome<Error, Model::QueryAppTopologyResult> QueryAppTopologyOutcome;
			typedef std::future<QueryAppTopologyOutcome> QueryAppTopologyOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::QueryAppTopologyRequest&, const QueryAppTopologyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryAppTopologyAsyncHandler;
			typedef Outcome<Error, Model::QueryCommercialUsageResult> QueryCommercialUsageOutcome;
			typedef std::future<QueryCommercialUsageOutcome> QueryCommercialUsageOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::QueryCommercialUsageRequest&, const QueryCommercialUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryCommercialUsageAsyncHandler;
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
			typedef Outcome<Error, Model::RestartEnvironmentFeatureResult> RestartEnvironmentFeatureOutcome;
			typedef std::future<RestartEnvironmentFeatureOutcome> RestartEnvironmentFeatureOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::RestartEnvironmentFeatureRequest&, const RestartEnvironmentFeatureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartEnvironmentFeatureAsyncHandler;
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
			typedef Outcome<Error, Model::StartTimingSyntheticTaskResult> StartTimingSyntheticTaskOutcome;
			typedef std::future<StartTimingSyntheticTaskOutcome> StartTimingSyntheticTaskOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::StartTimingSyntheticTaskRequest&, const StartTimingSyntheticTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartTimingSyntheticTaskAsyncHandler;
			typedef Outcome<Error, Model::StopAlertResult> StopAlertOutcome;
			typedef std::future<StopAlertOutcome> StopAlertOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::StopAlertRequest&, const StopAlertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopAlertAsyncHandler;
			typedef Outcome<Error, Model::StopTimingSyntheticTaskResult> StopTimingSyntheticTaskOutcome;
			typedef std::future<StopTimingSyntheticTaskOutcome> StopTimingSyntheticTaskOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::StopTimingSyntheticTaskRequest&, const StopTimingSyntheticTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopTimingSyntheticTaskAsyncHandler;
			typedef Outcome<Error, Model::SwitchSyntheticTaskStatusResult> SwitchSyntheticTaskStatusOutcome;
			typedef std::future<SwitchSyntheticTaskStatusOutcome> SwitchSyntheticTaskStatusOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::SwitchSyntheticTaskStatusRequest&, const SwitchSyntheticTaskStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchSyntheticTaskStatusAsyncHandler;
			typedef Outcome<Error, Model::SyncRecordingRulesResult> SyncRecordingRulesOutcome;
			typedef std::future<SyncRecordingRulesOutcome> SyncRecordingRulesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::SyncRecordingRulesRequest&, const SyncRecordingRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SyncRecordingRulesAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UninstallManagedPrometheusResult> UninstallManagedPrometheusOutcome;
			typedef std::future<UninstallManagedPrometheusOutcome> UninstallManagedPrometheusOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UninstallManagedPrometheusRequest&, const UninstallManagedPrometheusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UninstallManagedPrometheusAsyncHandler;
			typedef Outcome<Error, Model::UninstallPromClusterResult> UninstallPromClusterOutcome;
			typedef std::future<UninstallPromClusterOutcome> UninstallPromClusterOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UninstallPromClusterRequest&, const UninstallPromClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UninstallPromClusterAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
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
			typedef Outcome<Error, Model::UpdateEnvCustomJobResult> UpdateEnvCustomJobOutcome;
			typedef std::future<UpdateEnvCustomJobOutcome> UpdateEnvCustomJobOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UpdateEnvCustomJobRequest&, const UpdateEnvCustomJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEnvCustomJobAsyncHandler;
			typedef Outcome<Error, Model::UpdateEnvPodMonitorResult> UpdateEnvPodMonitorOutcome;
			typedef std::future<UpdateEnvPodMonitorOutcome> UpdateEnvPodMonitorOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UpdateEnvPodMonitorRequest&, const UpdateEnvPodMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEnvPodMonitorAsyncHandler;
			typedef Outcome<Error, Model::UpdateEnvServiceMonitorResult> UpdateEnvServiceMonitorOutcome;
			typedef std::future<UpdateEnvServiceMonitorOutcome> UpdateEnvServiceMonitorOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UpdateEnvServiceMonitorRequest&, const UpdateEnvServiceMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEnvServiceMonitorAsyncHandler;
			typedef Outcome<Error, Model::UpdateEnvironmentResult> UpdateEnvironmentOutcome;
			typedef std::future<UpdateEnvironmentOutcome> UpdateEnvironmentOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UpdateEnvironmentRequest&, const UpdateEnvironmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEnvironmentAsyncHandler;
			typedef Outcome<Error, Model::UpdateGrafanaWorkspaceResult> UpdateGrafanaWorkspaceOutcome;
			typedef std::future<UpdateGrafanaWorkspaceOutcome> UpdateGrafanaWorkspaceOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UpdateGrafanaWorkspaceRequest&, const UpdateGrafanaWorkspaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGrafanaWorkspaceAsyncHandler;
			typedef Outcome<Error, Model::UpdateGrafanaWorkspaceVersionResult> UpdateGrafanaWorkspaceVersionOutcome;
			typedef std::future<UpdateGrafanaWorkspaceVersionOutcome> UpdateGrafanaWorkspaceVersionOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UpdateGrafanaWorkspaceVersionRequest&, const UpdateGrafanaWorkspaceVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGrafanaWorkspaceVersionAsyncHandler;
			typedef Outcome<Error, Model::UpdateIntegrationResult> UpdateIntegrationOutcome;
			typedef std::future<UpdateIntegrationOutcome> UpdateIntegrationOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UpdateIntegrationRequest&, const UpdateIntegrationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateIntegrationAsyncHandler;
			typedef Outcome<Error, Model::UpdateMetricDropResult> UpdateMetricDropOutcome;
			typedef std::future<UpdateMetricDropOutcome> UpdateMetricDropOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UpdateMetricDropRequest&, const UpdateMetricDropOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMetricDropAsyncHandler;
			typedef Outcome<Error, Model::UpdatePrometheusAlertRuleResult> UpdatePrometheusAlertRuleOutcome;
			typedef std::future<UpdatePrometheusAlertRuleOutcome> UpdatePrometheusAlertRuleOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UpdatePrometheusAlertRuleRequest&, const UpdatePrometheusAlertRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePrometheusAlertRuleAsyncHandler;
			typedef Outcome<Error, Model::UpdatePrometheusGlobalViewResult> UpdatePrometheusGlobalViewOutcome;
			typedef std::future<UpdatePrometheusGlobalViewOutcome> UpdatePrometheusGlobalViewOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UpdatePrometheusGlobalViewRequest&, const UpdatePrometheusGlobalViewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePrometheusGlobalViewAsyncHandler;
			typedef Outcome<Error, Model::UpdatePrometheusInstanceResult> UpdatePrometheusInstanceOutcome;
			typedef std::future<UpdatePrometheusInstanceOutcome> UpdatePrometheusInstanceOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UpdatePrometheusInstanceRequest&, const UpdatePrometheusInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePrometheusInstanceAsyncHandler;
			typedef Outcome<Error, Model::UpdatePrometheusIntegrationResult> UpdatePrometheusIntegrationOutcome;
			typedef std::future<UpdatePrometheusIntegrationOutcome> UpdatePrometheusIntegrationOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UpdatePrometheusIntegrationRequest&, const UpdatePrometheusIntegrationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePrometheusIntegrationAsyncHandler;
			typedef Outcome<Error, Model::UpdatePrometheusMonitoringResult> UpdatePrometheusMonitoringOutcome;
			typedef std::future<UpdatePrometheusMonitoringOutcome> UpdatePrometheusMonitoringOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UpdatePrometheusMonitoringRequest&, const UpdatePrometheusMonitoringOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePrometheusMonitoringAsyncHandler;
			typedef Outcome<Error, Model::UpdatePrometheusMonitoringStatusResult> UpdatePrometheusMonitoringStatusOutcome;
			typedef std::future<UpdatePrometheusMonitoringStatusOutcome> UpdatePrometheusMonitoringStatusOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UpdatePrometheusMonitoringStatusRequest&, const UpdatePrometheusMonitoringStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePrometheusMonitoringStatusAsyncHandler;
			typedef Outcome<Error, Model::UpdateRumAppResult> UpdateRumAppOutcome;
			typedef std::future<UpdateRumAppOutcome> UpdateRumAppOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UpdateRumAppRequest&, const UpdateRumAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRumAppAsyncHandler;
			typedef Outcome<Error, Model::UpdateRumFileStatusResult> UpdateRumFileStatusOutcome;
			typedef std::future<UpdateRumFileStatusOutcome> UpdateRumFileStatusOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UpdateRumFileStatusRequest&, const UpdateRumFileStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRumFileStatusAsyncHandler;
			typedef Outcome<Error, Model::UpdateTimingSyntheticTaskResult> UpdateTimingSyntheticTaskOutcome;
			typedef std::future<UpdateTimingSyntheticTaskOutcome> UpdateTimingSyntheticTaskOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UpdateTimingSyntheticTaskRequest&, const UpdateTimingSyntheticTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTimingSyntheticTaskAsyncHandler;
			typedef Outcome<Error, Model::UpdateWebhookResult> UpdateWebhookOutcome;
			typedef std::future<UpdateWebhookOutcome> UpdateWebhookOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UpdateWebhookRequest&, const UpdateWebhookOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateWebhookAsyncHandler;
			typedef Outcome<Error, Model::UpgradeAddonReleaseResult> UpgradeAddonReleaseOutcome;
			typedef std::future<UpgradeAddonReleaseOutcome> UpgradeAddonReleaseOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UpgradeAddonReleaseRequest&, const UpgradeAddonReleaseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeAddonReleaseAsyncHandler;
			typedef Outcome<Error, Model::UpgradeEnvironmentFeatureResult> UpgradeEnvironmentFeatureOutcome;
			typedef std::future<UpgradeEnvironmentFeatureOutcome> UpgradeEnvironmentFeatureOutcomeCallable;
			typedef std::function<void(const ARMSClient*, const Model::UpgradeEnvironmentFeatureRequest&, const UpgradeEnvironmentFeatureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeEnvironmentFeatureAsyncHandler;
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
			AddPrometheusIntegrationOutcome addPrometheusIntegration(const Model::AddPrometheusIntegrationRequest &request)const;
			void addPrometheusIntegrationAsync(const Model::AddPrometheusIntegrationRequest& request, const AddPrometheusIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddPrometheusIntegrationOutcomeCallable addPrometheusIntegrationCallable(const Model::AddPrometheusIntegrationRequest& request) const;
			AddRecordingRuleOutcome addRecordingRule(const Model::AddRecordingRuleRequest &request)const;
			void addRecordingRuleAsync(const Model::AddRecordingRuleRequest& request, const AddRecordingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddRecordingRuleOutcomeCallable addRecordingRuleCallable(const Model::AddRecordingRuleRequest& request) const;
			AddTagToFlinkClusterOutcome addTagToFlinkCluster(const Model::AddTagToFlinkClusterRequest &request)const;
			void addTagToFlinkClusterAsync(const Model::AddTagToFlinkClusterRequest& request, const AddTagToFlinkClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddTagToFlinkClusterOutcomeCallable addTagToFlinkClusterCallable(const Model::AddTagToFlinkClusterRequest& request) const;
			AppendInstancesToPrometheusGlobalViewOutcome appendInstancesToPrometheusGlobalView(const Model::AppendInstancesToPrometheusGlobalViewRequest &request)const;
			void appendInstancesToPrometheusGlobalViewAsync(const Model::AppendInstancesToPrometheusGlobalViewRequest& request, const AppendInstancesToPrometheusGlobalViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AppendInstancesToPrometheusGlobalViewOutcomeCallable appendInstancesToPrometheusGlobalViewCallable(const Model::AppendInstancesToPrometheusGlobalViewRequest& request) const;
			ApplyScenarioOutcome applyScenario(const Model::ApplyScenarioRequest &request)const;
			void applyScenarioAsync(const Model::ApplyScenarioRequest& request, const ApplyScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ApplyScenarioOutcomeCallable applyScenarioCallable(const Model::ApplyScenarioRequest& request) const;
			BindPrometheusGrafanaInstanceOutcome bindPrometheusGrafanaInstance(const Model::BindPrometheusGrafanaInstanceRequest &request)const;
			void bindPrometheusGrafanaInstanceAsync(const Model::BindPrometheusGrafanaInstanceRequest& request, const BindPrometheusGrafanaInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindPrometheusGrafanaInstanceOutcomeCallable bindPrometheusGrafanaInstanceCallable(const Model::BindPrometheusGrafanaInstanceRequest& request) const;
			BlockAlarmNotificationOutcome blockAlarmNotification(const Model::BlockAlarmNotificationRequest &request)const;
			void blockAlarmNotificationAsync(const Model::BlockAlarmNotificationRequest& request, const BlockAlarmNotificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BlockAlarmNotificationOutcomeCallable blockAlarmNotificationCallable(const Model::BlockAlarmNotificationRequest& request) const;
			ChangeAlarmSeverityOutcome changeAlarmSeverity(const Model::ChangeAlarmSeverityRequest &request)const;
			void changeAlarmSeverityAsync(const Model::ChangeAlarmSeverityRequest& request, const ChangeAlarmSeverityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeAlarmSeverityOutcomeCallable changeAlarmSeverityCallable(const Model::ChangeAlarmSeverityRequest& request) const;
			ChangeResourceGroupOutcome changeResourceGroup(const Model::ChangeResourceGroupRequest &request)const;
			void changeResourceGroupAsync(const Model::ChangeResourceGroupRequest& request, const ChangeResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeResourceGroupOutcomeCallable changeResourceGroupCallable(const Model::ChangeResourceGroupRequest& request) const;
			CheckCommercialStatusOutcome checkCommercialStatus(const Model::CheckCommercialStatusRequest &request)const;
			void checkCommercialStatusAsync(const Model::CheckCommercialStatusRequest& request, const CheckCommercialStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckCommercialStatusOutcomeCallable checkCommercialStatusCallable(const Model::CheckCommercialStatusRequest& request) const;
			CheckServiceStatusOutcome checkServiceStatus(const Model::CheckServiceStatusRequest &request)const;
			void checkServiceStatusAsync(const Model::CheckServiceStatusRequest& request, const CheckServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckServiceStatusOutcomeCallable checkServiceStatusCallable(const Model::CheckServiceStatusRequest& request) const;
			ClaimAlarmOutcome claimAlarm(const Model::ClaimAlarmRequest &request)const;
			void claimAlarmAsync(const Model::ClaimAlarmRequest& request, const ClaimAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ClaimAlarmOutcomeCallable claimAlarmCallable(const Model::ClaimAlarmRequest& request) const;
			CloseAlarmOutcome closeAlarm(const Model::CloseAlarmRequest &request)const;
			void closeAlarmAsync(const Model::CloseAlarmRequest& request, const CloseAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloseAlarmOutcomeCallable closeAlarmCallable(const Model::CloseAlarmRequest& request) const;
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
			CreateEnvCustomJobOutcome createEnvCustomJob(const Model::CreateEnvCustomJobRequest &request)const;
			void createEnvCustomJobAsync(const Model::CreateEnvCustomJobRequest& request, const CreateEnvCustomJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEnvCustomJobOutcomeCallable createEnvCustomJobCallable(const Model::CreateEnvCustomJobRequest& request) const;
			CreateEnvPodMonitorOutcome createEnvPodMonitor(const Model::CreateEnvPodMonitorRequest &request)const;
			void createEnvPodMonitorAsync(const Model::CreateEnvPodMonitorRequest& request, const CreateEnvPodMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEnvPodMonitorOutcomeCallable createEnvPodMonitorCallable(const Model::CreateEnvPodMonitorRequest& request) const;
			CreateEnvServiceMonitorOutcome createEnvServiceMonitor(const Model::CreateEnvServiceMonitorRequest &request)const;
			void createEnvServiceMonitorAsync(const Model::CreateEnvServiceMonitorRequest& request, const CreateEnvServiceMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEnvServiceMonitorOutcomeCallable createEnvServiceMonitorCallable(const Model::CreateEnvServiceMonitorRequest& request) const;
			CreateEnvironmentOutcome createEnvironment(const Model::CreateEnvironmentRequest &request)const;
			void createEnvironmentAsync(const Model::CreateEnvironmentRequest& request, const CreateEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEnvironmentOutcomeCallable createEnvironmentCallable(const Model::CreateEnvironmentRequest& request) const;
			CreateGrafanaWorkspaceOutcome createGrafanaWorkspace(const Model::CreateGrafanaWorkspaceRequest &request)const;
			void createGrafanaWorkspaceAsync(const Model::CreateGrafanaWorkspaceRequest& request, const CreateGrafanaWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGrafanaWorkspaceOutcomeCallable createGrafanaWorkspaceCallable(const Model::CreateGrafanaWorkspaceRequest& request) const;
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
			CreatePrometheusInstanceOutcome createPrometheusInstance(const Model::CreatePrometheusInstanceRequest &request)const;
			void createPrometheusInstanceAsync(const Model::CreatePrometheusInstanceRequest& request, const CreatePrometheusInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePrometheusInstanceOutcomeCallable createPrometheusInstanceCallable(const Model::CreatePrometheusInstanceRequest& request) const;
			CreatePrometheusMonitoringOutcome createPrometheusMonitoring(const Model::CreatePrometheusMonitoringRequest &request)const;
			void createPrometheusMonitoringAsync(const Model::CreatePrometheusMonitoringRequest& request, const CreatePrometheusMonitoringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePrometheusMonitoringOutcomeCallable createPrometheusMonitoringCallable(const Model::CreatePrometheusMonitoringRequest& request) const;
			CreateRetcodeAppOutcome createRetcodeApp(const Model::CreateRetcodeAppRequest &request)const;
			void createRetcodeAppAsync(const Model::CreateRetcodeAppRequest& request, const CreateRetcodeAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRetcodeAppOutcomeCallable createRetcodeAppCallable(const Model::CreateRetcodeAppRequest& request) const;
			CreateRumAppOutcome createRumApp(const Model::CreateRumAppRequest &request)const;
			void createRumAppAsync(const Model::CreateRumAppRequest& request, const CreateRumAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRumAppOutcomeCallable createRumAppCallable(const Model::CreateRumAppRequest& request) const;
			CreateRumUploadFileUrlOutcome createRumUploadFileUrl(const Model::CreateRumUploadFileUrlRequest &request)const;
			void createRumUploadFileUrlAsync(const Model::CreateRumUploadFileUrlRequest& request, const CreateRumUploadFileUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRumUploadFileUrlOutcomeCallable createRumUploadFileUrlCallable(const Model::CreateRumUploadFileUrlRequest& request) const;
			CreateSyntheticTaskOutcome createSyntheticTask(const Model::CreateSyntheticTaskRequest &request)const;
			void createSyntheticTaskAsync(const Model::CreateSyntheticTaskRequest& request, const CreateSyntheticTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSyntheticTaskOutcomeCallable createSyntheticTaskCallable(const Model::CreateSyntheticTaskRequest& request) const;
			CreateTimingSyntheticTaskOutcome createTimingSyntheticTask(const Model::CreateTimingSyntheticTaskRequest &request)const;
			void createTimingSyntheticTaskAsync(const Model::CreateTimingSyntheticTaskRequest& request, const CreateTimingSyntheticTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTimingSyntheticTaskOutcomeCallable createTimingSyntheticTaskCallable(const Model::CreateTimingSyntheticTaskRequest& request) const;
			CreateWebhookOutcome createWebhook(const Model::CreateWebhookRequest &request)const;
			void createWebhookAsync(const Model::CreateWebhookRequest& request, const CreateWebhookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateWebhookOutcomeCallable createWebhookCallable(const Model::CreateWebhookRequest& request) const;
			DelAuthTokenOutcome delAuthToken(const Model::DelAuthTokenRequest &request)const;
			void delAuthTokenAsync(const Model::DelAuthTokenRequest& request, const DelAuthTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DelAuthTokenOutcomeCallable delAuthTokenCallable(const Model::DelAuthTokenRequest& request) const;
			DeleteAddonReleaseOutcome deleteAddonRelease(const Model::DeleteAddonReleaseRequest &request)const;
			void deleteAddonReleaseAsync(const Model::DeleteAddonReleaseRequest& request, const DeleteAddonReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAddonReleaseOutcomeCallable deleteAddonReleaseCallable(const Model::DeleteAddonReleaseRequest& request) const;
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
			DeleteAppListOutcome deleteAppList(const Model::DeleteAppListRequest &request)const;
			void deleteAppListAsync(const Model::DeleteAppListRequest& request, const DeleteAppListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAppListOutcomeCallable deleteAppListCallable(const Model::DeleteAppListRequest& request) const;
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
			DeleteEnvCustomJobOutcome deleteEnvCustomJob(const Model::DeleteEnvCustomJobRequest &request)const;
			void deleteEnvCustomJobAsync(const Model::DeleteEnvCustomJobRequest& request, const DeleteEnvCustomJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEnvCustomJobOutcomeCallable deleteEnvCustomJobCallable(const Model::DeleteEnvCustomJobRequest& request) const;
			DeleteEnvPodMonitorOutcome deleteEnvPodMonitor(const Model::DeleteEnvPodMonitorRequest &request)const;
			void deleteEnvPodMonitorAsync(const Model::DeleteEnvPodMonitorRequest& request, const DeleteEnvPodMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEnvPodMonitorOutcomeCallable deleteEnvPodMonitorCallable(const Model::DeleteEnvPodMonitorRequest& request) const;
			DeleteEnvServiceMonitorOutcome deleteEnvServiceMonitor(const Model::DeleteEnvServiceMonitorRequest &request)const;
			void deleteEnvServiceMonitorAsync(const Model::DeleteEnvServiceMonitorRequest& request, const DeleteEnvServiceMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEnvServiceMonitorOutcomeCallable deleteEnvServiceMonitorCallable(const Model::DeleteEnvServiceMonitorRequest& request) const;
			DeleteEnvironmentOutcome deleteEnvironment(const Model::DeleteEnvironmentRequest &request)const;
			void deleteEnvironmentAsync(const Model::DeleteEnvironmentRequest& request, const DeleteEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEnvironmentOutcomeCallable deleteEnvironmentCallable(const Model::DeleteEnvironmentRequest& request) const;
			DeleteEnvironmentFeatureOutcome deleteEnvironmentFeature(const Model::DeleteEnvironmentFeatureRequest &request)const;
			void deleteEnvironmentFeatureAsync(const Model::DeleteEnvironmentFeatureRequest& request, const DeleteEnvironmentFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEnvironmentFeatureOutcomeCallable deleteEnvironmentFeatureCallable(const Model::DeleteEnvironmentFeatureRequest& request) const;
			DeleteEventBridgeIntegrationOutcome deleteEventBridgeIntegration(const Model::DeleteEventBridgeIntegrationRequest &request)const;
			void deleteEventBridgeIntegrationAsync(const Model::DeleteEventBridgeIntegrationRequest& request, const DeleteEventBridgeIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEventBridgeIntegrationOutcomeCallable deleteEventBridgeIntegrationCallable(const Model::DeleteEventBridgeIntegrationRequest& request) const;
			DeleteGrafanaResourceOutcome deleteGrafanaResource(const Model::DeleteGrafanaResourceRequest &request)const;
			void deleteGrafanaResourceAsync(const Model::DeleteGrafanaResourceRequest& request, const DeleteGrafanaResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGrafanaResourceOutcomeCallable deleteGrafanaResourceCallable(const Model::DeleteGrafanaResourceRequest& request) const;
			DeleteGrafanaWorkspaceOutcome deleteGrafanaWorkspace(const Model::DeleteGrafanaWorkspaceRequest &request)const;
			void deleteGrafanaWorkspaceAsync(const Model::DeleteGrafanaWorkspaceRequest& request, const DeleteGrafanaWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGrafanaWorkspaceOutcomeCallable deleteGrafanaWorkspaceCallable(const Model::DeleteGrafanaWorkspaceRequest& request) const;
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
			DeletePrometheusIntegrationOutcome deletePrometheusIntegration(const Model::DeletePrometheusIntegrationRequest &request)const;
			void deletePrometheusIntegrationAsync(const Model::DeletePrometheusIntegrationRequest& request, const DeletePrometheusIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePrometheusIntegrationOutcomeCallable deletePrometheusIntegrationCallable(const Model::DeletePrometheusIntegrationRequest& request) const;
			DeletePrometheusMonitoringOutcome deletePrometheusMonitoring(const Model::DeletePrometheusMonitoringRequest &request)const;
			void deletePrometheusMonitoringAsync(const Model::DeletePrometheusMonitoringRequest& request, const DeletePrometheusMonitoringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePrometheusMonitoringOutcomeCallable deletePrometheusMonitoringCallable(const Model::DeletePrometheusMonitoringRequest& request) const;
			DeleteRetcodeAppOutcome deleteRetcodeApp(const Model::DeleteRetcodeAppRequest &request)const;
			void deleteRetcodeAppAsync(const Model::DeleteRetcodeAppRequest& request, const DeleteRetcodeAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRetcodeAppOutcomeCallable deleteRetcodeAppCallable(const Model::DeleteRetcodeAppRequest& request) const;
			DeleteRumAppOutcome deleteRumApp(const Model::DeleteRumAppRequest &request)const;
			void deleteRumAppAsync(const Model::DeleteRumAppRequest& request, const DeleteRumAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRumAppOutcomeCallable deleteRumAppCallable(const Model::DeleteRumAppRequest& request) const;
			DeleteRumUploadFileOutcome deleteRumUploadFile(const Model::DeleteRumUploadFileRequest &request)const;
			void deleteRumUploadFileAsync(const Model::DeleteRumUploadFileRequest& request, const DeleteRumUploadFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRumUploadFileOutcomeCallable deleteRumUploadFileCallable(const Model::DeleteRumUploadFileRequest& request) const;
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
			DeleteTimingSyntheticTaskOutcome deleteTimingSyntheticTask(const Model::DeleteTimingSyntheticTaskRequest &request)const;
			void deleteTimingSyntheticTaskAsync(const Model::DeleteTimingSyntheticTaskRequest& request, const DeleteTimingSyntheticTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTimingSyntheticTaskOutcomeCallable deleteTimingSyntheticTaskCallable(const Model::DeleteTimingSyntheticTaskRequest& request) const;
			DeleteTraceAppOutcome deleteTraceApp(const Model::DeleteTraceAppRequest &request)const;
			void deleteTraceAppAsync(const Model::DeleteTraceAppRequest& request, const DeleteTraceAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTraceAppOutcomeCallable deleteTraceAppCallable(const Model::DeleteTraceAppRequest& request) const;
			DeleteWebhookContactOutcome deleteWebhookContact(const Model::DeleteWebhookContactRequest &request)const;
			void deleteWebhookContactAsync(const Model::DeleteWebhookContactRequest& request, const DeleteWebhookContactAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteWebhookContactOutcomeCallable deleteWebhookContactCallable(const Model::DeleteWebhookContactRequest& request) const;
			DescribeAddonReleaseOutcome describeAddonRelease(const Model::DescribeAddonReleaseRequest &request)const;
			void describeAddonReleaseAsync(const Model::DescribeAddonReleaseRequest& request, const DescribeAddonReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAddonReleaseOutcomeCallable describeAddonReleaseCallable(const Model::DescribeAddonReleaseRequest& request) const;
			DescribeContactGroupsOutcome describeContactGroups(const Model::DescribeContactGroupsRequest &request)const;
			void describeContactGroupsAsync(const Model::DescribeContactGroupsRequest& request, const DescribeContactGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeContactGroupsOutcomeCallable describeContactGroupsCallable(const Model::DescribeContactGroupsRequest& request) const;
			DescribeContactsOutcome describeContacts(const Model::DescribeContactsRequest &request)const;
			void describeContactsAsync(const Model::DescribeContactsRequest& request, const DescribeContactsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeContactsOutcomeCallable describeContactsCallable(const Model::DescribeContactsRequest& request) const;
			DescribeDispatchRuleOutcome describeDispatchRule(const Model::DescribeDispatchRuleRequest &request)const;
			void describeDispatchRuleAsync(const Model::DescribeDispatchRuleRequest& request, const DescribeDispatchRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDispatchRuleOutcomeCallable describeDispatchRuleCallable(const Model::DescribeDispatchRuleRequest& request) const;
			DescribeEnvCustomJobOutcome describeEnvCustomJob(const Model::DescribeEnvCustomJobRequest &request)const;
			void describeEnvCustomJobAsync(const Model::DescribeEnvCustomJobRequest& request, const DescribeEnvCustomJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEnvCustomJobOutcomeCallable describeEnvCustomJobCallable(const Model::DescribeEnvCustomJobRequest& request) const;
			DescribeEnvPodMonitorOutcome describeEnvPodMonitor(const Model::DescribeEnvPodMonitorRequest &request)const;
			void describeEnvPodMonitorAsync(const Model::DescribeEnvPodMonitorRequest& request, const DescribeEnvPodMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEnvPodMonitorOutcomeCallable describeEnvPodMonitorCallable(const Model::DescribeEnvPodMonitorRequest& request) const;
			DescribeEnvServiceMonitorOutcome describeEnvServiceMonitor(const Model::DescribeEnvServiceMonitorRequest &request)const;
			void describeEnvServiceMonitorAsync(const Model::DescribeEnvServiceMonitorRequest& request, const DescribeEnvServiceMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEnvServiceMonitorOutcomeCallable describeEnvServiceMonitorCallable(const Model::DescribeEnvServiceMonitorRequest& request) const;
			DescribeEnvironmentOutcome describeEnvironment(const Model::DescribeEnvironmentRequest &request)const;
			void describeEnvironmentAsync(const Model::DescribeEnvironmentRequest& request, const DescribeEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEnvironmentOutcomeCallable describeEnvironmentCallable(const Model::DescribeEnvironmentRequest& request) const;
			DescribeEnvironmentFeatureOutcome describeEnvironmentFeature(const Model::DescribeEnvironmentFeatureRequest &request)const;
			void describeEnvironmentFeatureAsync(const Model::DescribeEnvironmentFeatureRequest& request, const DescribeEnvironmentFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEnvironmentFeatureOutcomeCallable describeEnvironmentFeatureCallable(const Model::DescribeEnvironmentFeatureRequest& request) const;
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
			DoInsightsActionOutcome doInsightsAction(const Model::DoInsightsActionRequest &request)const;
			void doInsightsActionAsync(const Model::DoInsightsActionRequest& request, const DoInsightsActionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DoInsightsActionOutcomeCallable doInsightsActionCallable(const Model::DoInsightsActionRequest& request) const;
			EnableMetricOutcome enableMetric(const Model::EnableMetricRequest &request)const;
			void enableMetricAsync(const Model::EnableMetricRequest& request, const EnableMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableMetricOutcomeCallable enableMetricCallable(const Model::EnableMetricRequest& request) const;
			GetAgentDownloadUrlOutcome getAgentDownloadUrl(const Model::GetAgentDownloadUrlRequest &request)const;
			void getAgentDownloadUrlAsync(const Model::GetAgentDownloadUrlRequest& request, const GetAgentDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAgentDownloadUrlOutcomeCallable getAgentDownloadUrlCallable(const Model::GetAgentDownloadUrlRequest& request) const;
			GetAlertRulesOutcome getAlertRules(const Model::GetAlertRulesRequest &request)const;
			void getAlertRulesAsync(const Model::GetAlertRulesRequest& request, const GetAlertRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAlertRulesOutcomeCallable getAlertRulesCallable(const Model::GetAlertRulesRequest& request) const;
			GetAppApiByPageOutcome getAppApiByPage(const Model::GetAppApiByPageRequest &request)const;
			void getAppApiByPageAsync(const Model::GetAppApiByPageRequest& request, const GetAppApiByPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAppApiByPageOutcomeCallable getAppApiByPageCallable(const Model::GetAppApiByPageRequest& request) const;
			GetAppJVMConfigOutcome getAppJVMConfig(const Model::GetAppJVMConfigRequest &request)const;
			void getAppJVMConfigAsync(const Model::GetAppJVMConfigRequest& request, const GetAppJVMConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAppJVMConfigOutcomeCallable getAppJVMConfigCallable(const Model::GetAppJVMConfigRequest& request) const;
			GetAuthTokenOutcome getAuthToken(const Model::GetAuthTokenRequest &request)const;
			void getAuthTokenAsync(const Model::GetAuthTokenRequest& request, const GetAuthTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAuthTokenOutcomeCallable getAuthTokenCallable(const Model::GetAuthTokenRequest& request) const;
			GetCloudClusterAllUrlOutcome getCloudClusterAllUrl(const Model::GetCloudClusterAllUrlRequest &request)const;
			void getCloudClusterAllUrlAsync(const Model::GetCloudClusterAllUrlRequest& request, const GetCloudClusterAllUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCloudClusterAllUrlOutcomeCallable getCloudClusterAllUrlCallable(const Model::GetCloudClusterAllUrlRequest& request) const;
			GetClusterAllUrlOutcome getClusterAllUrl(const Model::GetClusterAllUrlRequest &request)const;
			void getClusterAllUrlAsync(const Model::GetClusterAllUrlRequest& request, const GetClusterAllUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetClusterAllUrlOutcomeCallable getClusterAllUrlCallable(const Model::GetClusterAllUrlRequest& request) const;
			GetCommercialStatusOutcome getCommercialStatus(const Model::GetCommercialStatusRequest &request)const;
			void getCommercialStatusAsync(const Model::GetCommercialStatusRequest& request, const GetCommercialStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCommercialStatusOutcomeCallable getCommercialStatusCallable(const Model::GetCommercialStatusRequest& request) const;
			GetExploreUrlOutcome getExploreUrl(const Model::GetExploreUrlRequest &request)const;
			void getExploreUrlAsync(const Model::GetExploreUrlRequest& request, const GetExploreUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetExploreUrlOutcomeCallable getExploreUrlCallable(const Model::GetExploreUrlRequest& request) const;
			GetGrafanaWorkspaceOutcome getGrafanaWorkspace(const Model::GetGrafanaWorkspaceRequest &request)const;
			void getGrafanaWorkspaceAsync(const Model::GetGrafanaWorkspaceRequest& request, const GetGrafanaWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGrafanaWorkspaceOutcomeCallable getGrafanaWorkspaceCallable(const Model::GetGrafanaWorkspaceRequest& request) const;
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
			GetPrometheusInstanceOutcome getPrometheusInstance(const Model::GetPrometheusInstanceRequest &request)const;
			void getPrometheusInstanceAsync(const Model::GetPrometheusInstanceRequest& request, const GetPrometheusInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPrometheusInstanceOutcomeCallable getPrometheusInstanceCallable(const Model::GetPrometheusInstanceRequest& request) const;
			GetPrometheusIntegrationOutcome getPrometheusIntegration(const Model::GetPrometheusIntegrationRequest &request)const;
			void getPrometheusIntegrationAsync(const Model::GetPrometheusIntegrationRequest& request, const GetPrometheusIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPrometheusIntegrationOutcomeCallable getPrometheusIntegrationCallable(const Model::GetPrometheusIntegrationRequest& request) const;
			GetPrometheusMonitoringOutcome getPrometheusMonitoring(const Model::GetPrometheusMonitoringRequest &request)const;
			void getPrometheusMonitoringAsync(const Model::GetPrometheusMonitoringRequest& request, const GetPrometheusMonitoringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPrometheusMonitoringOutcomeCallable getPrometheusMonitoringCallable(const Model::GetPrometheusMonitoringRequest& request) const;
			GetRecordingRuleOutcome getRecordingRule(const Model::GetRecordingRuleRequest &request)const;
			void getRecordingRuleAsync(const Model::GetRecordingRuleRequest& request, const GetRecordingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRecordingRuleOutcomeCallable getRecordingRuleCallable(const Model::GetRecordingRuleRequest& request) const;
			GetRetcodeAppByPidOutcome getRetcodeAppByPid(const Model::GetRetcodeAppByPidRequest &request)const;
			void getRetcodeAppByPidAsync(const Model::GetRetcodeAppByPidRequest& request, const GetRetcodeAppByPidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRetcodeAppByPidOutcomeCallable getRetcodeAppByPidCallable(const Model::GetRetcodeAppByPidRequest& request) const;
			GetRetcodeDataByQueryOutcome getRetcodeDataByQuery(const Model::GetRetcodeDataByQueryRequest &request)const;
			void getRetcodeDataByQueryAsync(const Model::GetRetcodeDataByQueryRequest& request, const GetRetcodeDataByQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRetcodeDataByQueryOutcomeCallable getRetcodeDataByQueryCallable(const Model::GetRetcodeDataByQueryRequest& request) const;
			GetRetcodeLogstoreOutcome getRetcodeLogstore(const Model::GetRetcodeLogstoreRequest &request)const;
			void getRetcodeLogstoreAsync(const Model::GetRetcodeLogstoreRequest& request, const GetRetcodeLogstoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRetcodeLogstoreOutcomeCallable getRetcodeLogstoreCallable(const Model::GetRetcodeLogstoreRequest& request) const;
			GetRetcodeShareUrlOutcome getRetcodeShareUrl(const Model::GetRetcodeShareUrlRequest &request)const;
			void getRetcodeShareUrlAsync(const Model::GetRetcodeShareUrlRequest& request, const GetRetcodeShareUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRetcodeShareUrlOutcomeCallable getRetcodeShareUrlCallable(const Model::GetRetcodeShareUrlRequest& request) const;
			GetRumAppInfoOutcome getRumAppInfo(const Model::GetRumAppInfoRequest &request)const;
			void getRumAppInfoAsync(const Model::GetRumAppInfoRequest& request, const GetRumAppInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRumAppInfoOutcomeCallable getRumAppInfoCallable(const Model::GetRumAppInfoRequest& request) const;
			GetRumAppsOutcome getRumApps(const Model::GetRumAppsRequest &request)const;
			void getRumAppsAsync(const Model::GetRumAppsRequest& request, const GetRumAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRumAppsOutcomeCallable getRumAppsCallable(const Model::GetRumAppsRequest& request) const;
			GetRumDataForPageOutcome getRumDataForPage(const Model::GetRumDataForPageRequest &request)const;
			void getRumDataForPageAsync(const Model::GetRumDataForPageRequest& request, const GetRumDataForPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRumDataForPageOutcomeCallable getRumDataForPageCallable(const Model::GetRumDataForPageRequest& request) const;
			GetRumExceptionStackOutcome getRumExceptionStack(const Model::GetRumExceptionStackRequest &request)const;
			void getRumExceptionStackAsync(const Model::GetRumExceptionStackRequest& request, const GetRumExceptionStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRumExceptionStackOutcomeCallable getRumExceptionStackCallable(const Model::GetRumExceptionStackRequest& request) const;
			GetRumOcuStatisticDataOutcome getRumOcuStatisticData(const Model::GetRumOcuStatisticDataRequest &request)const;
			void getRumOcuStatisticDataAsync(const Model::GetRumOcuStatisticDataRequest& request, const GetRumOcuStatisticDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRumOcuStatisticDataOutcomeCallable getRumOcuStatisticDataCallable(const Model::GetRumOcuStatisticDataRequest& request) const;
			GetRumUploadFilesOutcome getRumUploadFiles(const Model::GetRumUploadFilesRequest &request)const;
			void getRumUploadFilesAsync(const Model::GetRumUploadFilesRequest& request, const GetRumUploadFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetRumUploadFilesOutcomeCallable getRumUploadFilesCallable(const Model::GetRumUploadFilesRequest& request) const;
			GetSourceMapInfoOutcome getSourceMapInfo(const Model::GetSourceMapInfoRequest &request)const;
			void getSourceMapInfoAsync(const Model::GetSourceMapInfoRequest& request, const GetSourceMapInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSourceMapInfoOutcomeCallable getSourceMapInfoCallable(const Model::GetSourceMapInfoRequest& request) const;
			GetStackOutcome getStack(const Model::GetStackRequest &request)const;
			void getStackAsync(const Model::GetStackRequest& request, const GetStackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetStackOutcomeCallable getStackCallable(const Model::GetStackRequest& request) const;
			GetSyntheticMonitorsOutcome getSyntheticMonitors(const Model::GetSyntheticMonitorsRequest &request)const;
			void getSyntheticMonitorsAsync(const Model::GetSyntheticMonitorsRequest& request, const GetSyntheticMonitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSyntheticMonitorsOutcomeCallable getSyntheticMonitorsCallable(const Model::GetSyntheticMonitorsRequest& request) const;
			GetSyntheticTaskDetailOutcome getSyntheticTaskDetail(const Model::GetSyntheticTaskDetailRequest &request)const;
			void getSyntheticTaskDetailAsync(const Model::GetSyntheticTaskDetailRequest& request, const GetSyntheticTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSyntheticTaskDetailOutcomeCallable getSyntheticTaskDetailCallable(const Model::GetSyntheticTaskDetailRequest& request) const;
			GetSyntheticTaskListOutcome getSyntheticTaskList(const Model::GetSyntheticTaskListRequest &request)const;
			void getSyntheticTaskListAsync(const Model::GetSyntheticTaskListRequest& request, const GetSyntheticTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSyntheticTaskListOutcomeCallable getSyntheticTaskListCallable(const Model::GetSyntheticTaskListRequest& request) const;
			GetSyntheticTaskMonitorsOutcome getSyntheticTaskMonitors(const Model::GetSyntheticTaskMonitorsRequest &request)const;
			void getSyntheticTaskMonitorsAsync(const Model::GetSyntheticTaskMonitorsRequest& request, const GetSyntheticTaskMonitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSyntheticTaskMonitorsOutcomeCallable getSyntheticTaskMonitorsCallable(const Model::GetSyntheticTaskMonitorsRequest& request) const;
			GetTimingSyntheticTaskOutcome getTimingSyntheticTask(const Model::GetTimingSyntheticTaskRequest &request)const;
			void getTimingSyntheticTaskAsync(const Model::GetTimingSyntheticTaskRequest& request, const GetTimingSyntheticTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTimingSyntheticTaskOutcomeCallable getTimingSyntheticTaskCallable(const Model::GetTimingSyntheticTaskRequest& request) const;
			GetTraceOutcome getTrace(const Model::GetTraceRequest &request)const;
			void getTraceAsync(const Model::GetTraceRequest& request, const GetTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTraceOutcomeCallable getTraceCallable(const Model::GetTraceRequest& request) const;
			GetTraceAppOutcome getTraceApp(const Model::GetTraceAppRequest &request)const;
			void getTraceAppAsync(const Model::GetTraceAppRequest& request, const GetTraceAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTraceAppOutcomeCallable getTraceAppCallable(const Model::GetTraceAppRequest& request) const;
			GetTraceAppConfigOutcome getTraceAppConfig(const Model::GetTraceAppConfigRequest &request)const;
			void getTraceAppConfigAsync(const Model::GetTraceAppConfigRequest& request, const GetTraceAppConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTraceAppConfigOutcomeCallable getTraceAppConfigCallable(const Model::GetTraceAppConfigRequest& request) const;
			ImportAppAlertRulesOutcome importAppAlertRules(const Model::ImportAppAlertRulesRequest &request)const;
			void importAppAlertRulesAsync(const Model::ImportAppAlertRulesRequest& request, const ImportAppAlertRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportAppAlertRulesOutcomeCallable importAppAlertRulesCallable(const Model::ImportAppAlertRulesRequest& request) const;
			InitEnvironmentOutcome initEnvironment(const Model::InitEnvironmentRequest &request)const;
			void initEnvironmentAsync(const Model::InitEnvironmentRequest& request, const InitEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InitEnvironmentOutcomeCallable initEnvironmentCallable(const Model::InitEnvironmentRequest& request) const;
			InstallAddonOutcome installAddon(const Model::InstallAddonRequest &request)const;
			void installAddonAsync(const Model::InstallAddonRequest& request, const InstallAddonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InstallAddonOutcomeCallable installAddonCallable(const Model::InstallAddonRequest& request) const;
			InstallCmsExporterOutcome installCmsExporter(const Model::InstallCmsExporterRequest &request)const;
			void installCmsExporterAsync(const Model::InstallCmsExporterRequest& request, const InstallCmsExporterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InstallCmsExporterOutcomeCallable installCmsExporterCallable(const Model::InstallCmsExporterRequest& request) const;
			InstallEnvironmentFeatureOutcome installEnvironmentFeature(const Model::InstallEnvironmentFeatureRequest &request)const;
			void installEnvironmentFeatureAsync(const Model::InstallEnvironmentFeatureRequest& request, const InstallEnvironmentFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InstallEnvironmentFeatureOutcomeCallable installEnvironmentFeatureCallable(const Model::InstallEnvironmentFeatureRequest& request) const;
			InstallManagedPrometheusOutcome installManagedPrometheus(const Model::InstallManagedPrometheusRequest &request)const;
			void installManagedPrometheusAsync(const Model::InstallManagedPrometheusRequest& request, const InstallManagedPrometheusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InstallManagedPrometheusOutcomeCallable installManagedPrometheusCallable(const Model::InstallManagedPrometheusRequest& request) const;
			ListActivatedAlertsOutcome listActivatedAlerts(const Model::ListActivatedAlertsRequest &request)const;
			void listActivatedAlertsAsync(const Model::ListActivatedAlertsRequest& request, const ListActivatedAlertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListActivatedAlertsOutcomeCallable listActivatedAlertsCallable(const Model::ListActivatedAlertsRequest& request) const;
			ListAddonReleasesOutcome listAddonReleases(const Model::ListAddonReleasesRequest &request)const;
			void listAddonReleasesAsync(const Model::ListAddonReleasesRequest& request, const ListAddonReleasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAddonReleasesOutcomeCallable listAddonReleasesCallable(const Model::ListAddonReleasesRequest& request) const;
			ListAddonsOutcome listAddons(const Model::ListAddonsRequest &request)const;
			void listAddonsAsync(const Model::ListAddonsRequest& request, const ListAddonsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAddonsOutcomeCallable listAddonsCallable(const Model::ListAddonsRequest& request) const;
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
			ListEnvCustomJobsOutcome listEnvCustomJobs(const Model::ListEnvCustomJobsRequest &request)const;
			void listEnvCustomJobsAsync(const Model::ListEnvCustomJobsRequest& request, const ListEnvCustomJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEnvCustomJobsOutcomeCallable listEnvCustomJobsCallable(const Model::ListEnvCustomJobsRequest& request) const;
			ListEnvPodMonitorsOutcome listEnvPodMonitors(const Model::ListEnvPodMonitorsRequest &request)const;
			void listEnvPodMonitorsAsync(const Model::ListEnvPodMonitorsRequest& request, const ListEnvPodMonitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEnvPodMonitorsOutcomeCallable listEnvPodMonitorsCallable(const Model::ListEnvPodMonitorsRequest& request) const;
			ListEnvServiceMonitorsOutcome listEnvServiceMonitors(const Model::ListEnvServiceMonitorsRequest &request)const;
			void listEnvServiceMonitorsAsync(const Model::ListEnvServiceMonitorsRequest& request, const ListEnvServiceMonitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEnvServiceMonitorsOutcomeCallable listEnvServiceMonitorsCallable(const Model::ListEnvServiceMonitorsRequest& request) const;
			ListEnvironmentDashboardsOutcome listEnvironmentDashboards(const Model::ListEnvironmentDashboardsRequest &request)const;
			void listEnvironmentDashboardsAsync(const Model::ListEnvironmentDashboardsRequest& request, const ListEnvironmentDashboardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEnvironmentDashboardsOutcomeCallable listEnvironmentDashboardsCallable(const Model::ListEnvironmentDashboardsRequest& request) const;
			ListEnvironmentFeaturesOutcome listEnvironmentFeatures(const Model::ListEnvironmentFeaturesRequest &request)const;
			void listEnvironmentFeaturesAsync(const Model::ListEnvironmentFeaturesRequest& request, const ListEnvironmentFeaturesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEnvironmentFeaturesOutcomeCallable listEnvironmentFeaturesCallable(const Model::ListEnvironmentFeaturesRequest& request) const;
			ListEnvironmentsOutcome listEnvironments(const Model::ListEnvironmentsRequest &request)const;
			void listEnvironmentsAsync(const Model::ListEnvironmentsRequest& request, const ListEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEnvironmentsOutcomeCallable listEnvironmentsCallable(const Model::ListEnvironmentsRequest& request) const;
			ListEscalationPoliciesOutcome listEscalationPolicies(const Model::ListEscalationPoliciesRequest &request)const;
			void listEscalationPoliciesAsync(const Model::ListEscalationPoliciesRequest& request, const ListEscalationPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEscalationPoliciesOutcomeCallable listEscalationPoliciesCallable(const Model::ListEscalationPoliciesRequest& request) const;
			ListEventBridgeIntegrationsOutcome listEventBridgeIntegrations(const Model::ListEventBridgeIntegrationsRequest &request)const;
			void listEventBridgeIntegrationsAsync(const Model::ListEventBridgeIntegrationsRequest& request, const ListEventBridgeIntegrationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEventBridgeIntegrationsOutcomeCallable listEventBridgeIntegrationsCallable(const Model::ListEventBridgeIntegrationsRequest& request) const;
			ListGrafanaWorkspaceOutcome listGrafanaWorkspace(const Model::ListGrafanaWorkspaceRequest &request)const;
			void listGrafanaWorkspaceAsync(const Model::ListGrafanaWorkspaceRequest& request, const ListGrafanaWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGrafanaWorkspaceOutcomeCallable listGrafanaWorkspaceCallable(const Model::ListGrafanaWorkspaceRequest& request) const;
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
			ListPrometheusInstanceByTagAndResourceGroupIdOutcome listPrometheusInstanceByTagAndResourceGroupId(const Model::ListPrometheusInstanceByTagAndResourceGroupIdRequest &request)const;
			void listPrometheusInstanceByTagAndResourceGroupIdAsync(const Model::ListPrometheusInstanceByTagAndResourceGroupIdRequest& request, const ListPrometheusInstanceByTagAndResourceGroupIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPrometheusInstanceByTagAndResourceGroupIdOutcomeCallable listPrometheusInstanceByTagAndResourceGroupIdCallable(const Model::ListPrometheusInstanceByTagAndResourceGroupIdRequest& request) const;
			ListPrometheusInstancesOutcome listPrometheusInstances(const Model::ListPrometheusInstancesRequest &request)const;
			void listPrometheusInstancesAsync(const Model::ListPrometheusInstancesRequest& request, const ListPrometheusInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPrometheusInstancesOutcomeCallable listPrometheusInstancesCallable(const Model::ListPrometheusInstancesRequest& request) const;
			ListPrometheusIntegrationOutcome listPrometheusIntegration(const Model::ListPrometheusIntegrationRequest &request)const;
			void listPrometheusIntegrationAsync(const Model::ListPrometheusIntegrationRequest& request, const ListPrometheusIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPrometheusIntegrationOutcomeCallable listPrometheusIntegrationCallable(const Model::ListPrometheusIntegrationRequest& request) const;
			ListPrometheusMonitoringOutcome listPrometheusMonitoring(const Model::ListPrometheusMonitoringRequest &request)const;
			void listPrometheusMonitoringAsync(const Model::ListPrometheusMonitoringRequest& request, const ListPrometheusMonitoringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPrometheusMonitoringOutcomeCallable listPrometheusMonitoringCallable(const Model::ListPrometheusMonitoringRequest& request) const;
			ListRetcodeAppsOutcome listRetcodeApps(const Model::ListRetcodeAppsRequest &request)const;
			void listRetcodeAppsAsync(const Model::ListRetcodeAppsRequest& request, const ListRetcodeAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRetcodeAppsOutcomeCallable listRetcodeAppsCallable(const Model::ListRetcodeAppsRequest& request) const;
			ListScenarioOutcome listScenario(const Model::ListScenarioRequest &request)const;
			void listScenarioAsync(const Model::ListScenarioRequest& request, const ListScenarioAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListScenarioOutcomeCallable listScenarioCallable(const Model::ListScenarioRequest& request) const;
			ListSilencePoliciesOutcome listSilencePolicies(const Model::ListSilencePoliciesRequest &request)const;
			void listSilencePoliciesAsync(const Model::ListSilencePoliciesRequest& request, const ListSilencePoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSilencePoliciesOutcomeCallable listSilencePoliciesCallable(const Model::ListSilencePoliciesRequest& request) const;
			ListSyntheticDetailOutcome listSyntheticDetail(const Model::ListSyntheticDetailRequest &request)const;
			void listSyntheticDetailAsync(const Model::ListSyntheticDetailRequest& request, const ListSyntheticDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSyntheticDetailOutcomeCallable listSyntheticDetailCallable(const Model::ListSyntheticDetailRequest& request) const;
			ListTimingSyntheticTasksOutcome listTimingSyntheticTasks(const Model::ListTimingSyntheticTasksRequest &request)const;
			void listTimingSyntheticTasksAsync(const Model::ListTimingSyntheticTasksRequest& request, const ListTimingSyntheticTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTimingSyntheticTasksOutcomeCallable listTimingSyntheticTasksCallable(const Model::ListTimingSyntheticTasksRequest& request) const;
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
			QueryAppMetadataOutcome queryAppMetadata(const Model::QueryAppMetadataRequest &request)const;
			void queryAppMetadataAsync(const Model::QueryAppMetadataRequest& request, const QueryAppMetadataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryAppMetadataOutcomeCallable queryAppMetadataCallable(const Model::QueryAppMetadataRequest& request) const;
			QueryAppTopologyOutcome queryAppTopology(const Model::QueryAppTopologyRequest &request)const;
			void queryAppTopologyAsync(const Model::QueryAppTopologyRequest& request, const QueryAppTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryAppTopologyOutcomeCallable queryAppTopologyCallable(const Model::QueryAppTopologyRequest& request) const;
			QueryCommercialUsageOutcome queryCommercialUsage(const Model::QueryCommercialUsageRequest &request)const;
			void queryCommercialUsageAsync(const Model::QueryCommercialUsageRequest& request, const QueryCommercialUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryCommercialUsageOutcomeCallable queryCommercialUsageCallable(const Model::QueryCommercialUsageRequest& request) const;
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
			RestartEnvironmentFeatureOutcome restartEnvironmentFeature(const Model::RestartEnvironmentFeatureRequest &request)const;
			void restartEnvironmentFeatureAsync(const Model::RestartEnvironmentFeatureRequest& request, const RestartEnvironmentFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartEnvironmentFeatureOutcomeCallable restartEnvironmentFeatureCallable(const Model::RestartEnvironmentFeatureRequest& request) const;
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
			StartTimingSyntheticTaskOutcome startTimingSyntheticTask(const Model::StartTimingSyntheticTaskRequest &request)const;
			void startTimingSyntheticTaskAsync(const Model::StartTimingSyntheticTaskRequest& request, const StartTimingSyntheticTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartTimingSyntheticTaskOutcomeCallable startTimingSyntheticTaskCallable(const Model::StartTimingSyntheticTaskRequest& request) const;
			StopAlertOutcome stopAlert(const Model::StopAlertRequest &request)const;
			void stopAlertAsync(const Model::StopAlertRequest& request, const StopAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopAlertOutcomeCallable stopAlertCallable(const Model::StopAlertRequest& request) const;
			StopTimingSyntheticTaskOutcome stopTimingSyntheticTask(const Model::StopTimingSyntheticTaskRequest &request)const;
			void stopTimingSyntheticTaskAsync(const Model::StopTimingSyntheticTaskRequest& request, const StopTimingSyntheticTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopTimingSyntheticTaskOutcomeCallable stopTimingSyntheticTaskCallable(const Model::StopTimingSyntheticTaskRequest& request) const;
			SwitchSyntheticTaskStatusOutcome switchSyntheticTaskStatus(const Model::SwitchSyntheticTaskStatusRequest &request)const;
			void switchSyntheticTaskStatusAsync(const Model::SwitchSyntheticTaskStatusRequest& request, const SwitchSyntheticTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchSyntheticTaskStatusOutcomeCallable switchSyntheticTaskStatusCallable(const Model::SwitchSyntheticTaskStatusRequest& request) const;
			SyncRecordingRulesOutcome syncRecordingRules(const Model::SyncRecordingRulesRequest &request)const;
			void syncRecordingRulesAsync(const Model::SyncRecordingRulesRequest& request, const SyncRecordingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SyncRecordingRulesOutcomeCallable syncRecordingRulesCallable(const Model::SyncRecordingRulesRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UninstallManagedPrometheusOutcome uninstallManagedPrometheus(const Model::UninstallManagedPrometheusRequest &request)const;
			void uninstallManagedPrometheusAsync(const Model::UninstallManagedPrometheusRequest& request, const UninstallManagedPrometheusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UninstallManagedPrometheusOutcomeCallable uninstallManagedPrometheusCallable(const Model::UninstallManagedPrometheusRequest& request) const;
			UninstallPromClusterOutcome uninstallPromCluster(const Model::UninstallPromClusterRequest &request)const;
			void uninstallPromClusterAsync(const Model::UninstallPromClusterRequest& request, const UninstallPromClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UninstallPromClusterOutcomeCallable uninstallPromClusterCallable(const Model::UninstallPromClusterRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
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
			UpdateEnvCustomJobOutcome updateEnvCustomJob(const Model::UpdateEnvCustomJobRequest &request)const;
			void updateEnvCustomJobAsync(const Model::UpdateEnvCustomJobRequest& request, const UpdateEnvCustomJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEnvCustomJobOutcomeCallable updateEnvCustomJobCallable(const Model::UpdateEnvCustomJobRequest& request) const;
			UpdateEnvPodMonitorOutcome updateEnvPodMonitor(const Model::UpdateEnvPodMonitorRequest &request)const;
			void updateEnvPodMonitorAsync(const Model::UpdateEnvPodMonitorRequest& request, const UpdateEnvPodMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEnvPodMonitorOutcomeCallable updateEnvPodMonitorCallable(const Model::UpdateEnvPodMonitorRequest& request) const;
			UpdateEnvServiceMonitorOutcome updateEnvServiceMonitor(const Model::UpdateEnvServiceMonitorRequest &request)const;
			void updateEnvServiceMonitorAsync(const Model::UpdateEnvServiceMonitorRequest& request, const UpdateEnvServiceMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEnvServiceMonitorOutcomeCallable updateEnvServiceMonitorCallable(const Model::UpdateEnvServiceMonitorRequest& request) const;
			UpdateEnvironmentOutcome updateEnvironment(const Model::UpdateEnvironmentRequest &request)const;
			void updateEnvironmentAsync(const Model::UpdateEnvironmentRequest& request, const UpdateEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEnvironmentOutcomeCallable updateEnvironmentCallable(const Model::UpdateEnvironmentRequest& request) const;
			UpdateGrafanaWorkspaceOutcome updateGrafanaWorkspace(const Model::UpdateGrafanaWorkspaceRequest &request)const;
			void updateGrafanaWorkspaceAsync(const Model::UpdateGrafanaWorkspaceRequest& request, const UpdateGrafanaWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGrafanaWorkspaceOutcomeCallable updateGrafanaWorkspaceCallable(const Model::UpdateGrafanaWorkspaceRequest& request) const;
			UpdateGrafanaWorkspaceVersionOutcome updateGrafanaWorkspaceVersion(const Model::UpdateGrafanaWorkspaceVersionRequest &request)const;
			void updateGrafanaWorkspaceVersionAsync(const Model::UpdateGrafanaWorkspaceVersionRequest& request, const UpdateGrafanaWorkspaceVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGrafanaWorkspaceVersionOutcomeCallable updateGrafanaWorkspaceVersionCallable(const Model::UpdateGrafanaWorkspaceVersionRequest& request) const;
			UpdateIntegrationOutcome updateIntegration(const Model::UpdateIntegrationRequest &request)const;
			void updateIntegrationAsync(const Model::UpdateIntegrationRequest& request, const UpdateIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateIntegrationOutcomeCallable updateIntegrationCallable(const Model::UpdateIntegrationRequest& request) const;
			UpdateMetricDropOutcome updateMetricDrop(const Model::UpdateMetricDropRequest &request)const;
			void updateMetricDropAsync(const Model::UpdateMetricDropRequest& request, const UpdateMetricDropAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMetricDropOutcomeCallable updateMetricDropCallable(const Model::UpdateMetricDropRequest& request) const;
			UpdatePrometheusAlertRuleOutcome updatePrometheusAlertRule(const Model::UpdatePrometheusAlertRuleRequest &request)const;
			void updatePrometheusAlertRuleAsync(const Model::UpdatePrometheusAlertRuleRequest& request, const UpdatePrometheusAlertRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePrometheusAlertRuleOutcomeCallable updatePrometheusAlertRuleCallable(const Model::UpdatePrometheusAlertRuleRequest& request) const;
			UpdatePrometheusGlobalViewOutcome updatePrometheusGlobalView(const Model::UpdatePrometheusGlobalViewRequest &request)const;
			void updatePrometheusGlobalViewAsync(const Model::UpdatePrometheusGlobalViewRequest& request, const UpdatePrometheusGlobalViewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePrometheusGlobalViewOutcomeCallable updatePrometheusGlobalViewCallable(const Model::UpdatePrometheusGlobalViewRequest& request) const;
			UpdatePrometheusInstanceOutcome updatePrometheusInstance(const Model::UpdatePrometheusInstanceRequest &request)const;
			void updatePrometheusInstanceAsync(const Model::UpdatePrometheusInstanceRequest& request, const UpdatePrometheusInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePrometheusInstanceOutcomeCallable updatePrometheusInstanceCallable(const Model::UpdatePrometheusInstanceRequest& request) const;
			UpdatePrometheusIntegrationOutcome updatePrometheusIntegration(const Model::UpdatePrometheusIntegrationRequest &request)const;
			void updatePrometheusIntegrationAsync(const Model::UpdatePrometheusIntegrationRequest& request, const UpdatePrometheusIntegrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePrometheusIntegrationOutcomeCallable updatePrometheusIntegrationCallable(const Model::UpdatePrometheusIntegrationRequest& request) const;
			UpdatePrometheusMonitoringOutcome updatePrometheusMonitoring(const Model::UpdatePrometheusMonitoringRequest &request)const;
			void updatePrometheusMonitoringAsync(const Model::UpdatePrometheusMonitoringRequest& request, const UpdatePrometheusMonitoringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePrometheusMonitoringOutcomeCallable updatePrometheusMonitoringCallable(const Model::UpdatePrometheusMonitoringRequest& request) const;
			UpdatePrometheusMonitoringStatusOutcome updatePrometheusMonitoringStatus(const Model::UpdatePrometheusMonitoringStatusRequest &request)const;
			void updatePrometheusMonitoringStatusAsync(const Model::UpdatePrometheusMonitoringStatusRequest& request, const UpdatePrometheusMonitoringStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePrometheusMonitoringStatusOutcomeCallable updatePrometheusMonitoringStatusCallable(const Model::UpdatePrometheusMonitoringStatusRequest& request) const;
			UpdateRumAppOutcome updateRumApp(const Model::UpdateRumAppRequest &request)const;
			void updateRumAppAsync(const Model::UpdateRumAppRequest& request, const UpdateRumAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRumAppOutcomeCallable updateRumAppCallable(const Model::UpdateRumAppRequest& request) const;
			UpdateRumFileStatusOutcome updateRumFileStatus(const Model::UpdateRumFileStatusRequest &request)const;
			void updateRumFileStatusAsync(const Model::UpdateRumFileStatusRequest& request, const UpdateRumFileStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRumFileStatusOutcomeCallable updateRumFileStatusCallable(const Model::UpdateRumFileStatusRequest& request) const;
			UpdateTimingSyntheticTaskOutcome updateTimingSyntheticTask(const Model::UpdateTimingSyntheticTaskRequest &request)const;
			void updateTimingSyntheticTaskAsync(const Model::UpdateTimingSyntheticTaskRequest& request, const UpdateTimingSyntheticTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTimingSyntheticTaskOutcomeCallable updateTimingSyntheticTaskCallable(const Model::UpdateTimingSyntheticTaskRequest& request) const;
			UpdateWebhookOutcome updateWebhook(const Model::UpdateWebhookRequest &request)const;
			void updateWebhookAsync(const Model::UpdateWebhookRequest& request, const UpdateWebhookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateWebhookOutcomeCallable updateWebhookCallable(const Model::UpdateWebhookRequest& request) const;
			UpgradeAddonReleaseOutcome upgradeAddonRelease(const Model::UpgradeAddonReleaseRequest &request)const;
			void upgradeAddonReleaseAsync(const Model::UpgradeAddonReleaseRequest& request, const UpgradeAddonReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeAddonReleaseOutcomeCallable upgradeAddonReleaseCallable(const Model::UpgradeAddonReleaseRequest& request) const;
			UpgradeEnvironmentFeatureOutcome upgradeEnvironmentFeature(const Model::UpgradeEnvironmentFeatureRequest &request)const;
			void upgradeEnvironmentFeatureAsync(const Model::UpgradeEnvironmentFeatureRequest& request, const UpgradeEnvironmentFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeEnvironmentFeatureOutcomeCallable upgradeEnvironmentFeatureCallable(const Model::UpgradeEnvironmentFeatureRequest& request) const;
			UploadOutcome upload(const Model::UploadRequest &request)const;
			void uploadAsync(const Model::UploadRequest& request, const UploadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadOutcomeCallable uploadCallable(const Model::UploadRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ARMS_ARMSCLIENT_H_
