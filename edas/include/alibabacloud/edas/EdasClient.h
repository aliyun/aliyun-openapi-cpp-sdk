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

#ifndef ALIBABACLOUD_EDAS_EDASCLIENT_H_
#define ALIBABACLOUD_EDAS_EDASCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "EdasExport.h"
#include "model/AbortAndRollbackChangeOrderRequest.h"
#include "model/AbortAndRollbackChangeOrderResult.h"
#include "model/AbortChangeOrderRequest.h"
#include "model/AbortChangeOrderResult.h"
#include "model/AddLogPathRequest.h"
#include "model/AddLogPathResult.h"
#include "model/AddMockRuleRequest.h"
#include "model/AddMockRuleResult.h"
#include "model/AddServiceTimeConfigRequest.h"
#include "model/AddServiceTimeConfigResult.h"
#include "model/AuthorizeApplicationRequest.h"
#include "model/AuthorizeApplicationResult.h"
#include "model/AuthorizeResourceGroupRequest.h"
#include "model/AuthorizeResourceGroupResult.h"
#include "model/AuthorizeRoleRequest.h"
#include "model/AuthorizeRoleResult.h"
#include "model/BindEcsSlbRequest.h"
#include "model/BindEcsSlbResult.h"
#include "model/BindK8sSlbRequest.h"
#include "model/BindK8sSlbResult.h"
#include "model/BindSlbRequest.h"
#include "model/BindSlbResult.h"
#include "model/ChangeDeployGroupRequest.h"
#include "model/ChangeDeployGroupResult.h"
#include "model/ContinuePipelineRequest.h"
#include "model/ContinuePipelineResult.h"
#include "model/ConvertK8sResourceRequest.h"
#include "model/ConvertK8sResourceResult.h"
#include "model/CreateApplicationScalingRuleRequest.h"
#include "model/CreateApplicationScalingRuleResult.h"
#include "model/CreateApplicationTemplateRequest.h"
#include "model/CreateApplicationTemplateResult.h"
#include "model/CreateEnvAppGroupRequest.h"
#include "model/CreateEnvAppGroupResult.h"
#include "model/CreateEnvHsfTrafficControlRequest.h"
#include "model/CreateEnvHsfTrafficControlResult.h"
#include "model/CreateEnvHttpTrafficControlRequest.h"
#include "model/CreateEnvHttpTrafficControlResult.h"
#include "model/CreateGrayEnvironmentRequest.h"
#include "model/CreateGrayEnvironmentResult.h"
#include "model/CreateIDCImportCommandRequest.h"
#include "model/CreateIDCImportCommandResult.h"
#include "model/CreateK8sConfigMapRequest.h"
#include "model/CreateK8sConfigMapResult.h"
#include "model/CreateK8sIngressRuleRequest.h"
#include "model/CreateK8sIngressRuleResult.h"
#include "model/CreateK8sSecretRequest.h"
#include "model/CreateK8sSecretResult.h"
#include "model/CreateK8sServiceRequest.h"
#include "model/CreateK8sServiceResult.h"
#include "model/DelegateAdminRoleRequest.h"
#include "model/DelegateAdminRoleResult.h"
#include "model/DeleteApplicationRequest.h"
#include "model/DeleteApplicationResult.h"
#include "model/DeleteApplicationScalingRuleRequest.h"
#include "model/DeleteApplicationScalingRuleResult.h"
#include "model/DeleteClusterRequest.h"
#include "model/DeleteClusterResult.h"
#include "model/DeleteClusterMemberRequest.h"
#include "model/DeleteClusterMemberResult.h"
#include "model/DeleteConfigCenterRequest.h"
#include "model/DeleteConfigCenterResult.h"
#include "model/DeleteDegradeControlRequest.h"
#include "model/DeleteDegradeControlResult.h"
#include "model/DeleteDeployGroupRequest.h"
#include "model/DeleteDeployGroupResult.h"
#include "model/DeleteEcuRequest.h"
#include "model/DeleteEcuResult.h"
#include "model/DeleteEnvAppGroupRequest.h"
#include "model/DeleteEnvAppGroupResult.h"
#include "model/DeleteEnvHsfTrafficControlRequest.h"
#include "model/DeleteEnvHsfTrafficControlResult.h"
#include "model/DeleteEnvHttpTrafficControlRequest.h"
#include "model/DeleteEnvHttpTrafficControlResult.h"
#include "model/DeleteFlowControlRequest.h"
#include "model/DeleteFlowControlResult.h"
#include "model/DeleteGrayEnvironmentRequest.h"
#include "model/DeleteGrayEnvironmentResult.h"
#include "model/DeleteK8sApplicationRequest.h"
#include "model/DeleteK8sApplicationResult.h"
#include "model/DeleteK8sConfigMapRequest.h"
#include "model/DeleteK8sConfigMapResult.h"
#include "model/DeleteK8sIngressRuleRequest.h"
#include "model/DeleteK8sIngressRuleResult.h"
#include "model/DeleteK8sSecretRequest.h"
#include "model/DeleteK8sSecretResult.h"
#include "model/DeleteK8sServiceRequest.h"
#include "model/DeleteK8sServiceResult.h"
#include "model/DeleteLogPathRequest.h"
#include "model/DeleteLogPathResult.h"
#include "model/DeleteRoleRequest.h"
#include "model/DeleteRoleResult.h"
#include "model/DeleteServiceGroupRequest.h"
#include "model/DeleteServiceGroupResult.h"
#include "model/DeleteServiceTimeConfigRequest.h"
#include "model/DeleteServiceTimeConfigResult.h"
#include "model/DeleteSwimmingLaneRequest.h"
#include "model/DeleteSwimmingLaneResult.h"
#include "model/DeleteSwimmingLaneGroupRequest.h"
#include "model/DeleteSwimmingLaneGroupResult.h"
#include "model/DeleteUserDefineRegionRequest.h"
#include "model/DeleteUserDefineRegionResult.h"
#include "model/DeployApplicationRequest.h"
#include "model/DeployApplicationResult.h"
#include "model/DeployK8sApplicationRequest.h"
#include "model/DeployK8sApplicationResult.h"
#include "model/DescribeAppInstanceListRequest.h"
#include "model/DescribeAppInstanceListResult.h"
#include "model/DescribeApplicationScalingRuleRequest.h"
#include "model/DescribeApplicationScalingRuleResult.h"
#include "model/DescribeApplicationScalingRulesRequest.h"
#include "model/DescribeApplicationScalingRulesResult.h"
#include "model/DescribeLocalitySettingRequest.h"
#include "model/DescribeLocalitySettingResult.h"
#include "model/DisableApplicationScalingRuleRequest.h"
#include "model/DisableApplicationScalingRuleResult.h"
#include "model/DisableDegradeControlRequest.h"
#include "model/DisableDegradeControlResult.h"
#include "model/DisableFlowControlRequest.h"
#include "model/DisableFlowControlResult.h"
#include "model/DisableMockRuleRequest.h"
#include "model/DisableMockRuleResult.h"
#include "model/EnableApplicationScalingRuleRequest.h"
#include "model/EnableApplicationScalingRuleResult.h"
#include "model/EnableDegradeControlRequest.h"
#include "model/EnableDegradeControlResult.h"
#include "model/EnableFlowControlRequest.h"
#include "model/EnableFlowControlResult.h"
#include "model/EnableMockRuleRequest.h"
#include "model/EnableMockRuleResult.h"
#include "model/ExecuteStatusRequest.h"
#include "model/ExecuteStatusResult.h"
#include "model/GetAccountMockRuleRequest.h"
#include "model/GetAccountMockRuleResult.h"
#include "model/GetAppDeploymentRequest.h"
#include "model/GetAppDeploymentResult.h"
#include "model/GetApplicationRequest.h"
#include "model/GetApplicationResult.h"
#include "model/GetChangeOrderInfoRequest.h"
#include "model/GetChangeOrderInfoResult.h"
#include "model/GetClusterRequest.h"
#include "model/GetClusterResult.h"
#include "model/GetContainerConfigurationRequest.h"
#include "model/GetContainerConfigurationResult.h"
#include "model/GetEnvTrafficControlRequest.h"
#include "model/GetEnvTrafficControlResult.h"
#include "model/GetGrayAppGroupRequest.h"
#include "model/GetGrayAppGroupResult.h"
#include "model/GetGrayAppsRequest.h"
#include "model/GetGrayAppsResult.h"
#include "model/GetGrayEnvironmentsRequest.h"
#include "model/GetGrayEnvironmentsResult.h"
#include "model/GetJavaStartUpConfigRequest.h"
#include "model/GetJavaStartUpConfigResult.h"
#include "model/GetJvmConfigurationRequest.h"
#include "model/GetJvmConfigurationResult.h"
#include "model/GetK8sApplicationRequest.h"
#include "model/GetK8sApplicationResult.h"
#include "model/GetK8sClusterRequest.h"
#include "model/GetK8sClusterResult.h"
#include "model/GetK8sServicesRequest.h"
#include "model/GetK8sServicesResult.h"
#include "model/GetK8sStorageInfoRequest.h"
#include "model/GetK8sStorageInfoResult.h"
#include "model/GetMockRuleByConsumerAppIdRequest.h"
#include "model/GetMockRuleByConsumerAppIdResult.h"
#include "model/GetMockRuleByIdRequest.h"
#include "model/GetMockRuleByIdResult.h"
#include "model/GetMockRuleByProviderAppIdRequest.h"
#include "model/GetMockRuleByProviderAppIdResult.h"
#include "model/GetPackageStorageCredentialRequest.h"
#include "model/GetPackageStorageCredentialResult.h"
#include "model/GetScalingRulesRequest.h"
#include "model/GetScalingRulesResult.h"
#include "model/GetSecureTokenRequest.h"
#include "model/GetSecureTokenResult.h"
#include "model/GetServiceConsumersPageRequest.h"
#include "model/GetServiceConsumersPageResult.h"
#include "model/GetServiceDetailRequest.h"
#include "model/GetServiceDetailResult.h"
#include "model/GetServiceListRequest.h"
#include "model/GetServiceListResult.h"
#include "model/GetServiceListPageRequest.h"
#include "model/GetServiceListPageResult.h"
#include "model/GetServiceMethodPageRequest.h"
#include "model/GetServiceMethodPageResult.h"
#include "model/GetServiceProvidersPageRequest.h"
#include "model/GetServiceProvidersPageResult.h"
#include "model/GetSpringCloudTestMethodRequest.h"
#include "model/GetSpringCloudTestMethodResult.h"
#include "model/GetSslCertificateListRequest.h"
#include "model/GetSslCertificateListResult.h"
#include "model/GetSubAccountInfoRequest.h"
#include "model/GetSubAccountInfoResult.h"
#include "model/GetSwimmingLaneRequest.h"
#include "model/GetSwimmingLaneResult.h"
#include "model/GetWebContainerConfigRequest.h"
#include "model/GetWebContainerConfigResult.h"
#include "model/ImportK8sClusterRequest.h"
#include "model/ImportK8sClusterResult.h"
#include "model/InsertApplicationRequest.h"
#include "model/InsertApplicationResult.h"
#include "model/InsertClusterRequest.h"
#include "model/InsertClusterResult.h"
#include "model/InsertClusterMemberRequest.h"
#include "model/InsertClusterMemberResult.h"
#include "model/InsertConfigCenterRequest.h"
#include "model/InsertConfigCenterResult.h"
#include "model/InsertDegradeControlRequest.h"
#include "model/InsertDegradeControlResult.h"
#include "model/InsertDeployGroupRequest.h"
#include "model/InsertDeployGroupResult.h"
#include "model/InsertFlowControlRequest.h"
#include "model/InsertFlowControlResult.h"
#include "model/InsertK8sApplicationRequest.h"
#include "model/InsertK8sApplicationResult.h"
#include "model/InsertOrUpdateRegionRequest.h"
#include "model/InsertOrUpdateRegionResult.h"
#include "model/InsertRoleRequest.h"
#include "model/InsertRoleResult.h"
#include "model/InsertServiceGroupRequest.h"
#include "model/InsertServiceGroupResult.h"
#include "model/InsertSwimmingLaneRequest.h"
#include "model/InsertSwimmingLaneResult.h"
#include "model/InsertSwimmingLaneGroupRequest.h"
#include "model/InsertSwimmingLaneGroupResult.h"
#include "model/InstallAgentRequest.h"
#include "model/InstallAgentResult.h"
#include "model/ListAliyunRegionRequest.h"
#include "model/ListAliyunRegionResult.h"
#include "model/ListApplicationRequest.h"
#include "model/ListApplicationResult.h"
#include "model/ListApplicationEcuRequest.h"
#include "model/ListApplicationEcuResult.h"
#include "model/ListAuthorityRequest.h"
#include "model/ListAuthorityResult.h"
#include "model/ListBuildPackRequest.h"
#include "model/ListBuildPackResult.h"
#include "model/ListCSBGatewayRequest.h"
#include "model/ListCSBGatewayResult.h"
#include "model/ListChildrenStacksRequest.h"
#include "model/ListChildrenStacksResult.h"
#include "model/ListClusterRequest.h"
#include "model/ListClusterResult.h"
#include "model/ListClusterMembersRequest.h"
#include "model/ListClusterMembersResult.h"
#include "model/ListComponentsRequest.h"
#include "model/ListComponentsResult.h"
#include "model/ListConfigCentersRequest.h"
#include "model/ListConfigCentersResult.h"
#include "model/ListConsumedServicesRequest.h"
#include "model/ListConsumedServicesResult.h"
#include "model/ListConvertableEcuRequest.h"
#include "model/ListConvertableEcuResult.h"
#include "model/ListDegradeControlsRequest.h"
#include "model/ListDegradeControlsResult.h"
#include "model/ListDeployGroupRequest.h"
#include "model/ListDeployGroupResult.h"
#include "model/ListEcsNotInClusterRequest.h"
#include "model/ListEcsNotInClusterResult.h"
#include "model/ListEcuByRegionRequest.h"
#include "model/ListEcuByRegionResult.h"
#include "model/ListFlowControlsRequest.h"
#include "model/ListFlowControlsResult.h"
#include "model/ListHistoryDeployVersionRequest.h"
#include "model/ListHistoryDeployVersionResult.h"
#include "model/ListK8sConfigMapsRequest.h"
#include "model/ListK8sConfigMapsResult.h"
#include "model/ListK8sIngressRulesRequest.h"
#include "model/ListK8sIngressRulesResult.h"
#include "model/ListK8sPvcRequest.h"
#include "model/ListK8sPvcResult.h"
#include "model/ListK8sSecretsRequest.h"
#include "model/ListK8sSecretsResult.h"
#include "model/ListMethodsRequest.h"
#include "model/ListMethodsResult.h"
#include "model/ListOperationLogsRequest.h"
#include "model/ListOperationLogsResult.h"
#include "model/ListPublishedServicesRequest.h"
#include "model/ListPublishedServicesResult.h"
#include "model/ListRecentChangeOrderRequest.h"
#include "model/ListRecentChangeOrderResult.h"
#include "model/ListResourceGroupRequest.h"
#include "model/ListResourceGroupResult.h"
#include "model/ListRoleRequest.h"
#include "model/ListRoleResult.h"
#include "model/ListRootStacksRequest.h"
#include "model/ListRootStacksResult.h"
#include "model/ListScaleOutEcuRequest.h"
#include "model/ListScaleOutEcuResult.h"
#include "model/ListServiceGroupsRequest.h"
#include "model/ListServiceGroupsResult.h"
#include "model/ListSlbRequest.h"
#include "model/ListSlbResult.h"
#include "model/ListStatusRequest.h"
#include "model/ListStatusResult.h"
#include "model/ListSubAccountRequest.h"
#include "model/ListSubAccountResult.h"
#include "model/ListSwimmingLaneRequest.h"
#include "model/ListSwimmingLaneResult.h"
#include "model/ListSwimmingLaneGroupRequest.h"
#include "model/ListSwimmingLaneGroupResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ListUserDefineRegionRequest.h"
#include "model/ListUserDefineRegionResult.h"
#include "model/ListVpcRequest.h"
#include "model/ListVpcResult.h"
#include "model/MigrateEcuRequest.h"
#include "model/MigrateEcuResult.h"
#include "model/ModifyScalingRuleRequest.h"
#include "model/ModifyScalingRuleResult.h"
#include "model/QueryApplicationStatusRequest.h"
#include "model/QueryApplicationStatusResult.h"
#include "model/QueryConfigCenterRequest.h"
#include "model/QueryConfigCenterResult.h"
#include "model/QueryEccInfoRequest.h"
#include "model/QueryEccInfoResult.h"
#include "model/QueryK8sClusterLogProjectInfoRequest.h"
#include "model/QueryK8sClusterLogProjectInfoResult.h"
#include "model/QueryMigrateEcuListRequest.h"
#include "model/QueryMigrateEcuListResult.h"
#include "model/QueryMigrateRegionListRequest.h"
#include "model/QueryMigrateRegionListResult.h"
#include "model/QueryRegionConfigRequest.h"
#include "model/QueryRegionConfigResult.h"
#include "model/QueryServiceTimeConfigRequest.h"
#include "model/QueryServiceTimeConfigResult.h"
#include "model/QuerySlsLogStoreListRequest.h"
#include "model/QuerySlsLogStoreListResult.h"
#include "model/RemoveMockRuleRequest.h"
#include "model/RemoveMockRuleResult.h"
#include "model/ResetApplicationRequest.h"
#include "model/ResetApplicationResult.h"
#include "model/RestartApplicationRequest.h"
#include "model/RestartApplicationResult.h"
#include "model/RestartK8sApplicationRequest.h"
#include "model/RestartK8sApplicationResult.h"
#include "model/RetryChangeOrderTaskRequest.h"
#include "model/RetryChangeOrderTaskResult.h"
#include "model/RollbackApplicationRequest.h"
#include "model/RollbackApplicationResult.h"
#include "model/RollbackChangeOrderRequest.h"
#include "model/RollbackChangeOrderResult.h"
#include "model/ScaleInApplicationRequest.h"
#include "model/ScaleInApplicationResult.h"
#include "model/ScaleK8sApplicationRequest.h"
#include "model/ScaleK8sApplicationResult.h"
#include "model/ScaleOutApplicationRequest.h"
#include "model/ScaleOutApplicationResult.h"
#include "model/ScaleoutApplicationWithNewInstancesRequest.h"
#include "model/ScaleoutApplicationWithNewInstancesResult.h"
#include "model/StartApplicationRequest.h"
#include "model/StartApplicationResult.h"
#include "model/StartK8sApplicationRequest.h"
#include "model/StartK8sApplicationResult.h"
#include "model/StopApplicationRequest.h"
#include "model/StopApplicationResult.h"
#include "model/StopK8sApplicationRequest.h"
#include "model/StopK8sApplicationResult.h"
#include "model/SwitchAdvancedMonitoringRequest.h"
#include "model/SwitchAdvancedMonitoringResult.h"
#include "model/SynchronizeResourceRequest.h"
#include "model/SynchronizeResourceResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/ToggleGrayIngressRequest.h"
#include "model/ToggleGrayIngressResult.h"
#include "model/TransformClusterMemberRequest.h"
#include "model/TransformClusterMemberResult.h"
#include "model/UnbindK8sSlbRequest.h"
#include "model/UnbindK8sSlbResult.h"
#include "model/UnbindSlbRequest.h"
#include "model/UnbindSlbResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpdateAccountInfoRequest.h"
#include "model/UpdateAccountInfoResult.h"
#include "model/UpdateApplicationBaseInfoRequest.h"
#include "model/UpdateApplicationBaseInfoResult.h"
#include "model/UpdateApplicationScalingRuleRequest.h"
#include "model/UpdateApplicationScalingRuleResult.h"
#include "model/UpdateContainerRequest.h"
#include "model/UpdateContainerResult.h"
#include "model/UpdateContainerConfigurationRequest.h"
#include "model/UpdateContainerConfigurationResult.h"
#include "model/UpdateDegradeControlRequest.h"
#include "model/UpdateDegradeControlResult.h"
#include "model/UpdateEnvAppGroupRequest.h"
#include "model/UpdateEnvAppGroupResult.h"
#include "model/UpdateEnvHttpTrafficControlRequest.h"
#include "model/UpdateEnvHttpTrafficControlResult.h"
#include "model/UpdateFlowControlRequest.h"
#include "model/UpdateFlowControlResult.h"
#include "model/UpdateHealthCheckUrlRequest.h"
#include "model/UpdateHealthCheckUrlResult.h"
#include "model/UpdateHookConfigurationRequest.h"
#include "model/UpdateHookConfigurationResult.h"
#include "model/UpdateJvmConfigurationRequest.h"
#include "model/UpdateJvmConfigurationResult.h"
#include "model/UpdateK8sApplicationBaseInfoRequest.h"
#include "model/UpdateK8sApplicationBaseInfoResult.h"
#include "model/UpdateK8sApplicationConfigRequest.h"
#include "model/UpdateK8sApplicationConfigResult.h"
#include "model/UpdateK8sConfigMapRequest.h"
#include "model/UpdateK8sConfigMapResult.h"
#include "model/UpdateK8sIngressRuleRequest.h"
#include "model/UpdateK8sIngressRuleResult.h"
#include "model/UpdateK8sResourceRequest.h"
#include "model/UpdateK8sResourceResult.h"
#include "model/UpdateK8sSecretRequest.h"
#include "model/UpdateK8sSecretResult.h"
#include "model/UpdateK8sServiceRequest.h"
#include "model/UpdateK8sServiceResult.h"
#include "model/UpdateK8sSlbRequest.h"
#include "model/UpdateK8sSlbResult.h"
#include "model/UpdateLocalitySettingRequest.h"
#include "model/UpdateLocalitySettingResult.h"
#include "model/UpdateMockRuleRequest.h"
#include "model/UpdateMockRuleResult.h"
#include "model/UpdateRoleRequest.h"
#include "model/UpdateRoleResult.h"
#include "model/UpdateSlsLogStoreRequest.h"
#include "model/UpdateSlsLogStoreResult.h"
#include "model/UpdateSwimmingLaneRequest.h"
#include "model/UpdateSwimmingLaneResult.h"
#include "model/UpdateSwimmingLaneGroupRequest.h"
#include "model/UpdateSwimmingLaneGroupResult.h"
#include "model/UpdateSwimmingLanePriorityRequest.h"
#include "model/UpdateSwimmingLanePriorityResult.h"
#include "model/UppateEnvHsfTrafficControlRequest.h"
#include "model/UppateEnvHsfTrafficControlResult.h"
#include "model/ValidateK8sResourceRequest.h"
#include "model/ValidateK8sResourceResult.h"


namespace AlibabaCloud
{
	namespace Edas
	{
		class ALIBABACLOUD_EDAS_EXPORT EdasClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::AbortAndRollbackChangeOrderResult> AbortAndRollbackChangeOrderOutcome;
			typedef std::future<AbortAndRollbackChangeOrderOutcome> AbortAndRollbackChangeOrderOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::AbortAndRollbackChangeOrderRequest&, const AbortAndRollbackChangeOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AbortAndRollbackChangeOrderAsyncHandler;
			typedef Outcome<Error, Model::AbortChangeOrderResult> AbortChangeOrderOutcome;
			typedef std::future<AbortChangeOrderOutcome> AbortChangeOrderOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::AbortChangeOrderRequest&, const AbortChangeOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AbortChangeOrderAsyncHandler;
			typedef Outcome<Error, Model::AddLogPathResult> AddLogPathOutcome;
			typedef std::future<AddLogPathOutcome> AddLogPathOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::AddLogPathRequest&, const AddLogPathOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLogPathAsyncHandler;
			typedef Outcome<Error, Model::AddMockRuleResult> AddMockRuleOutcome;
			typedef std::future<AddMockRuleOutcome> AddMockRuleOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::AddMockRuleRequest&, const AddMockRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddMockRuleAsyncHandler;
			typedef Outcome<Error, Model::AddServiceTimeConfigResult> AddServiceTimeConfigOutcome;
			typedef std::future<AddServiceTimeConfigOutcome> AddServiceTimeConfigOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::AddServiceTimeConfigRequest&, const AddServiceTimeConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddServiceTimeConfigAsyncHandler;
			typedef Outcome<Error, Model::AuthorizeApplicationResult> AuthorizeApplicationOutcome;
			typedef std::future<AuthorizeApplicationOutcome> AuthorizeApplicationOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::AuthorizeApplicationRequest&, const AuthorizeApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AuthorizeApplicationAsyncHandler;
			typedef Outcome<Error, Model::AuthorizeResourceGroupResult> AuthorizeResourceGroupOutcome;
			typedef std::future<AuthorizeResourceGroupOutcome> AuthorizeResourceGroupOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::AuthorizeResourceGroupRequest&, const AuthorizeResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AuthorizeResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::AuthorizeRoleResult> AuthorizeRoleOutcome;
			typedef std::future<AuthorizeRoleOutcome> AuthorizeRoleOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::AuthorizeRoleRequest&, const AuthorizeRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AuthorizeRoleAsyncHandler;
			typedef Outcome<Error, Model::BindEcsSlbResult> BindEcsSlbOutcome;
			typedef std::future<BindEcsSlbOutcome> BindEcsSlbOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::BindEcsSlbRequest&, const BindEcsSlbOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindEcsSlbAsyncHandler;
			typedef Outcome<Error, Model::BindK8sSlbResult> BindK8sSlbOutcome;
			typedef std::future<BindK8sSlbOutcome> BindK8sSlbOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::BindK8sSlbRequest&, const BindK8sSlbOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindK8sSlbAsyncHandler;
			typedef Outcome<Error, Model::BindSlbResult> BindSlbOutcome;
			typedef std::future<BindSlbOutcome> BindSlbOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::BindSlbRequest&, const BindSlbOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindSlbAsyncHandler;
			typedef Outcome<Error, Model::ChangeDeployGroupResult> ChangeDeployGroupOutcome;
			typedef std::future<ChangeDeployGroupOutcome> ChangeDeployGroupOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ChangeDeployGroupRequest&, const ChangeDeployGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ChangeDeployGroupAsyncHandler;
			typedef Outcome<Error, Model::ContinuePipelineResult> ContinuePipelineOutcome;
			typedef std::future<ContinuePipelineOutcome> ContinuePipelineOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ContinuePipelineRequest&, const ContinuePipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ContinuePipelineAsyncHandler;
			typedef Outcome<Error, Model::ConvertK8sResourceResult> ConvertK8sResourceOutcome;
			typedef std::future<ConvertK8sResourceOutcome> ConvertK8sResourceOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ConvertK8sResourceRequest&, const ConvertK8sResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConvertK8sResourceAsyncHandler;
			typedef Outcome<Error, Model::CreateApplicationScalingRuleResult> CreateApplicationScalingRuleOutcome;
			typedef std::future<CreateApplicationScalingRuleOutcome> CreateApplicationScalingRuleOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::CreateApplicationScalingRuleRequest&, const CreateApplicationScalingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationScalingRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateApplicationTemplateResult> CreateApplicationTemplateOutcome;
			typedef std::future<CreateApplicationTemplateOutcome> CreateApplicationTemplateOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::CreateApplicationTemplateRequest&, const CreateApplicationTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationTemplateAsyncHandler;
			typedef Outcome<Error, Model::CreateEnvAppGroupResult> CreateEnvAppGroupOutcome;
			typedef std::future<CreateEnvAppGroupOutcome> CreateEnvAppGroupOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::CreateEnvAppGroupRequest&, const CreateEnvAppGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEnvAppGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateEnvHsfTrafficControlResult> CreateEnvHsfTrafficControlOutcome;
			typedef std::future<CreateEnvHsfTrafficControlOutcome> CreateEnvHsfTrafficControlOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::CreateEnvHsfTrafficControlRequest&, const CreateEnvHsfTrafficControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEnvHsfTrafficControlAsyncHandler;
			typedef Outcome<Error, Model::CreateEnvHttpTrafficControlResult> CreateEnvHttpTrafficControlOutcome;
			typedef std::future<CreateEnvHttpTrafficControlOutcome> CreateEnvHttpTrafficControlOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::CreateEnvHttpTrafficControlRequest&, const CreateEnvHttpTrafficControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEnvHttpTrafficControlAsyncHandler;
			typedef Outcome<Error, Model::CreateGrayEnvironmentResult> CreateGrayEnvironmentOutcome;
			typedef std::future<CreateGrayEnvironmentOutcome> CreateGrayEnvironmentOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::CreateGrayEnvironmentRequest&, const CreateGrayEnvironmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGrayEnvironmentAsyncHandler;
			typedef Outcome<Error, Model::CreateIDCImportCommandResult> CreateIDCImportCommandOutcome;
			typedef std::future<CreateIDCImportCommandOutcome> CreateIDCImportCommandOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::CreateIDCImportCommandRequest&, const CreateIDCImportCommandOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateIDCImportCommandAsyncHandler;
			typedef Outcome<Error, Model::CreateK8sConfigMapResult> CreateK8sConfigMapOutcome;
			typedef std::future<CreateK8sConfigMapOutcome> CreateK8sConfigMapOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::CreateK8sConfigMapRequest&, const CreateK8sConfigMapOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateK8sConfigMapAsyncHandler;
			typedef Outcome<Error, Model::CreateK8sIngressRuleResult> CreateK8sIngressRuleOutcome;
			typedef std::future<CreateK8sIngressRuleOutcome> CreateK8sIngressRuleOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::CreateK8sIngressRuleRequest&, const CreateK8sIngressRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateK8sIngressRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateK8sSecretResult> CreateK8sSecretOutcome;
			typedef std::future<CreateK8sSecretOutcome> CreateK8sSecretOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::CreateK8sSecretRequest&, const CreateK8sSecretOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateK8sSecretAsyncHandler;
			typedef Outcome<Error, Model::CreateK8sServiceResult> CreateK8sServiceOutcome;
			typedef std::future<CreateK8sServiceOutcome> CreateK8sServiceOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::CreateK8sServiceRequest&, const CreateK8sServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateK8sServiceAsyncHandler;
			typedef Outcome<Error, Model::DelegateAdminRoleResult> DelegateAdminRoleOutcome;
			typedef std::future<DelegateAdminRoleOutcome> DelegateAdminRoleOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DelegateAdminRoleRequest&, const DelegateAdminRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DelegateAdminRoleAsyncHandler;
			typedef Outcome<Error, Model::DeleteApplicationResult> DeleteApplicationOutcome;
			typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DeleteApplicationRequest&, const DeleteApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationAsyncHandler;
			typedef Outcome<Error, Model::DeleteApplicationScalingRuleResult> DeleteApplicationScalingRuleOutcome;
			typedef std::future<DeleteApplicationScalingRuleOutcome> DeleteApplicationScalingRuleOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DeleteApplicationScalingRuleRequest&, const DeleteApplicationScalingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationScalingRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteClusterResult> DeleteClusterOutcome;
			typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DeleteClusterRequest&, const DeleteClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterAsyncHandler;
			typedef Outcome<Error, Model::DeleteClusterMemberResult> DeleteClusterMemberOutcome;
			typedef std::future<DeleteClusterMemberOutcome> DeleteClusterMemberOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DeleteClusterMemberRequest&, const DeleteClusterMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterMemberAsyncHandler;
			typedef Outcome<Error, Model::DeleteConfigCenterResult> DeleteConfigCenterOutcome;
			typedef std::future<DeleteConfigCenterOutcome> DeleteConfigCenterOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DeleteConfigCenterRequest&, const DeleteConfigCenterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConfigCenterAsyncHandler;
			typedef Outcome<Error, Model::DeleteDegradeControlResult> DeleteDegradeControlOutcome;
			typedef std::future<DeleteDegradeControlOutcome> DeleteDegradeControlOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DeleteDegradeControlRequest&, const DeleteDegradeControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDegradeControlAsyncHandler;
			typedef Outcome<Error, Model::DeleteDeployGroupResult> DeleteDeployGroupOutcome;
			typedef std::future<DeleteDeployGroupOutcome> DeleteDeployGroupOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DeleteDeployGroupRequest&, const DeleteDeployGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeployGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteEcuResult> DeleteEcuOutcome;
			typedef std::future<DeleteEcuOutcome> DeleteEcuOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DeleteEcuRequest&, const DeleteEcuOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEcuAsyncHandler;
			typedef Outcome<Error, Model::DeleteEnvAppGroupResult> DeleteEnvAppGroupOutcome;
			typedef std::future<DeleteEnvAppGroupOutcome> DeleteEnvAppGroupOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DeleteEnvAppGroupRequest&, const DeleteEnvAppGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEnvAppGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteEnvHsfTrafficControlResult> DeleteEnvHsfTrafficControlOutcome;
			typedef std::future<DeleteEnvHsfTrafficControlOutcome> DeleteEnvHsfTrafficControlOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DeleteEnvHsfTrafficControlRequest&, const DeleteEnvHsfTrafficControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEnvHsfTrafficControlAsyncHandler;
			typedef Outcome<Error, Model::DeleteEnvHttpTrafficControlResult> DeleteEnvHttpTrafficControlOutcome;
			typedef std::future<DeleteEnvHttpTrafficControlOutcome> DeleteEnvHttpTrafficControlOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DeleteEnvHttpTrafficControlRequest&, const DeleteEnvHttpTrafficControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEnvHttpTrafficControlAsyncHandler;
			typedef Outcome<Error, Model::DeleteFlowControlResult> DeleteFlowControlOutcome;
			typedef std::future<DeleteFlowControlOutcome> DeleteFlowControlOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DeleteFlowControlRequest&, const DeleteFlowControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFlowControlAsyncHandler;
			typedef Outcome<Error, Model::DeleteGrayEnvironmentResult> DeleteGrayEnvironmentOutcome;
			typedef std::future<DeleteGrayEnvironmentOutcome> DeleteGrayEnvironmentOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DeleteGrayEnvironmentRequest&, const DeleteGrayEnvironmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGrayEnvironmentAsyncHandler;
			typedef Outcome<Error, Model::DeleteK8sApplicationResult> DeleteK8sApplicationOutcome;
			typedef std::future<DeleteK8sApplicationOutcome> DeleteK8sApplicationOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DeleteK8sApplicationRequest&, const DeleteK8sApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteK8sApplicationAsyncHandler;
			typedef Outcome<Error, Model::DeleteK8sConfigMapResult> DeleteK8sConfigMapOutcome;
			typedef std::future<DeleteK8sConfigMapOutcome> DeleteK8sConfigMapOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DeleteK8sConfigMapRequest&, const DeleteK8sConfigMapOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteK8sConfigMapAsyncHandler;
			typedef Outcome<Error, Model::DeleteK8sIngressRuleResult> DeleteK8sIngressRuleOutcome;
			typedef std::future<DeleteK8sIngressRuleOutcome> DeleteK8sIngressRuleOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DeleteK8sIngressRuleRequest&, const DeleteK8sIngressRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteK8sIngressRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteK8sSecretResult> DeleteK8sSecretOutcome;
			typedef std::future<DeleteK8sSecretOutcome> DeleteK8sSecretOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DeleteK8sSecretRequest&, const DeleteK8sSecretOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteK8sSecretAsyncHandler;
			typedef Outcome<Error, Model::DeleteK8sServiceResult> DeleteK8sServiceOutcome;
			typedef std::future<DeleteK8sServiceOutcome> DeleteK8sServiceOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DeleteK8sServiceRequest&, const DeleteK8sServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteK8sServiceAsyncHandler;
			typedef Outcome<Error, Model::DeleteLogPathResult> DeleteLogPathOutcome;
			typedef std::future<DeleteLogPathOutcome> DeleteLogPathOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DeleteLogPathRequest&, const DeleteLogPathOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLogPathAsyncHandler;
			typedef Outcome<Error, Model::DeleteRoleResult> DeleteRoleOutcome;
			typedef std::future<DeleteRoleOutcome> DeleteRoleOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DeleteRoleRequest&, const DeleteRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRoleAsyncHandler;
			typedef Outcome<Error, Model::DeleteServiceGroupResult> DeleteServiceGroupOutcome;
			typedef std::future<DeleteServiceGroupOutcome> DeleteServiceGroupOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DeleteServiceGroupRequest&, const DeleteServiceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteServiceTimeConfigResult> DeleteServiceTimeConfigOutcome;
			typedef std::future<DeleteServiceTimeConfigOutcome> DeleteServiceTimeConfigOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DeleteServiceTimeConfigRequest&, const DeleteServiceTimeConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceTimeConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteSwimmingLaneResult> DeleteSwimmingLaneOutcome;
			typedef std::future<DeleteSwimmingLaneOutcome> DeleteSwimmingLaneOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DeleteSwimmingLaneRequest&, const DeleteSwimmingLaneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSwimmingLaneAsyncHandler;
			typedef Outcome<Error, Model::DeleteSwimmingLaneGroupResult> DeleteSwimmingLaneGroupOutcome;
			typedef std::future<DeleteSwimmingLaneGroupOutcome> DeleteSwimmingLaneGroupOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DeleteSwimmingLaneGroupRequest&, const DeleteSwimmingLaneGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSwimmingLaneGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteUserDefineRegionResult> DeleteUserDefineRegionOutcome;
			typedef std::future<DeleteUserDefineRegionOutcome> DeleteUserDefineRegionOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DeleteUserDefineRegionRequest&, const DeleteUserDefineRegionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteUserDefineRegionAsyncHandler;
			typedef Outcome<Error, Model::DeployApplicationResult> DeployApplicationOutcome;
			typedef std::future<DeployApplicationOutcome> DeployApplicationOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DeployApplicationRequest&, const DeployApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeployApplicationAsyncHandler;
			typedef Outcome<Error, Model::DeployK8sApplicationResult> DeployK8sApplicationOutcome;
			typedef std::future<DeployK8sApplicationOutcome> DeployK8sApplicationOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DeployK8sApplicationRequest&, const DeployK8sApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeployK8sApplicationAsyncHandler;
			typedef Outcome<Error, Model::DescribeAppInstanceListResult> DescribeAppInstanceListOutcome;
			typedef std::future<DescribeAppInstanceListOutcome> DescribeAppInstanceListOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DescribeAppInstanceListRequest&, const DescribeAppInstanceListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppInstanceListAsyncHandler;
			typedef Outcome<Error, Model::DescribeApplicationScalingRuleResult> DescribeApplicationScalingRuleOutcome;
			typedef std::future<DescribeApplicationScalingRuleOutcome> DescribeApplicationScalingRuleOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DescribeApplicationScalingRuleRequest&, const DescribeApplicationScalingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationScalingRuleAsyncHandler;
			typedef Outcome<Error, Model::DescribeApplicationScalingRulesResult> DescribeApplicationScalingRulesOutcome;
			typedef std::future<DescribeApplicationScalingRulesOutcome> DescribeApplicationScalingRulesOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DescribeApplicationScalingRulesRequest&, const DescribeApplicationScalingRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationScalingRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeLocalitySettingResult> DescribeLocalitySettingOutcome;
			typedef std::future<DescribeLocalitySettingOutcome> DescribeLocalitySettingOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DescribeLocalitySettingRequest&, const DescribeLocalitySettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLocalitySettingAsyncHandler;
			typedef Outcome<Error, Model::DisableApplicationScalingRuleResult> DisableApplicationScalingRuleOutcome;
			typedef std::future<DisableApplicationScalingRuleOutcome> DisableApplicationScalingRuleOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DisableApplicationScalingRuleRequest&, const DisableApplicationScalingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableApplicationScalingRuleAsyncHandler;
			typedef Outcome<Error, Model::DisableDegradeControlResult> DisableDegradeControlOutcome;
			typedef std::future<DisableDegradeControlOutcome> DisableDegradeControlOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DisableDegradeControlRequest&, const DisableDegradeControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableDegradeControlAsyncHandler;
			typedef Outcome<Error, Model::DisableFlowControlResult> DisableFlowControlOutcome;
			typedef std::future<DisableFlowControlOutcome> DisableFlowControlOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DisableFlowControlRequest&, const DisableFlowControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableFlowControlAsyncHandler;
			typedef Outcome<Error, Model::DisableMockRuleResult> DisableMockRuleOutcome;
			typedef std::future<DisableMockRuleOutcome> DisableMockRuleOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::DisableMockRuleRequest&, const DisableMockRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableMockRuleAsyncHandler;
			typedef Outcome<Error, Model::EnableApplicationScalingRuleResult> EnableApplicationScalingRuleOutcome;
			typedef std::future<EnableApplicationScalingRuleOutcome> EnableApplicationScalingRuleOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::EnableApplicationScalingRuleRequest&, const EnableApplicationScalingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableApplicationScalingRuleAsyncHandler;
			typedef Outcome<Error, Model::EnableDegradeControlResult> EnableDegradeControlOutcome;
			typedef std::future<EnableDegradeControlOutcome> EnableDegradeControlOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::EnableDegradeControlRequest&, const EnableDegradeControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableDegradeControlAsyncHandler;
			typedef Outcome<Error, Model::EnableFlowControlResult> EnableFlowControlOutcome;
			typedef std::future<EnableFlowControlOutcome> EnableFlowControlOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::EnableFlowControlRequest&, const EnableFlowControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableFlowControlAsyncHandler;
			typedef Outcome<Error, Model::EnableMockRuleResult> EnableMockRuleOutcome;
			typedef std::future<EnableMockRuleOutcome> EnableMockRuleOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::EnableMockRuleRequest&, const EnableMockRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableMockRuleAsyncHandler;
			typedef Outcome<Error, Model::ExecuteStatusResult> ExecuteStatusOutcome;
			typedef std::future<ExecuteStatusOutcome> ExecuteStatusOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ExecuteStatusRequest&, const ExecuteStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteStatusAsyncHandler;
			typedef Outcome<Error, Model::GetAccountMockRuleResult> GetAccountMockRuleOutcome;
			typedef std::future<GetAccountMockRuleOutcome> GetAccountMockRuleOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::GetAccountMockRuleRequest&, const GetAccountMockRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAccountMockRuleAsyncHandler;
			typedef Outcome<Error, Model::GetAppDeploymentResult> GetAppDeploymentOutcome;
			typedef std::future<GetAppDeploymentOutcome> GetAppDeploymentOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::GetAppDeploymentRequest&, const GetAppDeploymentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAppDeploymentAsyncHandler;
			typedef Outcome<Error, Model::GetApplicationResult> GetApplicationOutcome;
			typedef std::future<GetApplicationOutcome> GetApplicationOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::GetApplicationRequest&, const GetApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetApplicationAsyncHandler;
			typedef Outcome<Error, Model::GetChangeOrderInfoResult> GetChangeOrderInfoOutcome;
			typedef std::future<GetChangeOrderInfoOutcome> GetChangeOrderInfoOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::GetChangeOrderInfoRequest&, const GetChangeOrderInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetChangeOrderInfoAsyncHandler;
			typedef Outcome<Error, Model::GetClusterResult> GetClusterOutcome;
			typedef std::future<GetClusterOutcome> GetClusterOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::GetClusterRequest&, const GetClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetClusterAsyncHandler;
			typedef Outcome<Error, Model::GetContainerConfigurationResult> GetContainerConfigurationOutcome;
			typedef std::future<GetContainerConfigurationOutcome> GetContainerConfigurationOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::GetContainerConfigurationRequest&, const GetContainerConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetContainerConfigurationAsyncHandler;
			typedef Outcome<Error, Model::GetEnvTrafficControlResult> GetEnvTrafficControlOutcome;
			typedef std::future<GetEnvTrafficControlOutcome> GetEnvTrafficControlOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::GetEnvTrafficControlRequest&, const GetEnvTrafficControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEnvTrafficControlAsyncHandler;
			typedef Outcome<Error, Model::GetGrayAppGroupResult> GetGrayAppGroupOutcome;
			typedef std::future<GetGrayAppGroupOutcome> GetGrayAppGroupOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::GetGrayAppGroupRequest&, const GetGrayAppGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGrayAppGroupAsyncHandler;
			typedef Outcome<Error, Model::GetGrayAppsResult> GetGrayAppsOutcome;
			typedef std::future<GetGrayAppsOutcome> GetGrayAppsOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::GetGrayAppsRequest&, const GetGrayAppsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGrayAppsAsyncHandler;
			typedef Outcome<Error, Model::GetGrayEnvironmentsResult> GetGrayEnvironmentsOutcome;
			typedef std::future<GetGrayEnvironmentsOutcome> GetGrayEnvironmentsOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::GetGrayEnvironmentsRequest&, const GetGrayEnvironmentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGrayEnvironmentsAsyncHandler;
			typedef Outcome<Error, Model::GetJavaStartUpConfigResult> GetJavaStartUpConfigOutcome;
			typedef std::future<GetJavaStartUpConfigOutcome> GetJavaStartUpConfigOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::GetJavaStartUpConfigRequest&, const GetJavaStartUpConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJavaStartUpConfigAsyncHandler;
			typedef Outcome<Error, Model::GetJvmConfigurationResult> GetJvmConfigurationOutcome;
			typedef std::future<GetJvmConfigurationOutcome> GetJvmConfigurationOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::GetJvmConfigurationRequest&, const GetJvmConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJvmConfigurationAsyncHandler;
			typedef Outcome<Error, Model::GetK8sApplicationResult> GetK8sApplicationOutcome;
			typedef std::future<GetK8sApplicationOutcome> GetK8sApplicationOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::GetK8sApplicationRequest&, const GetK8sApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetK8sApplicationAsyncHandler;
			typedef Outcome<Error, Model::GetK8sClusterResult> GetK8sClusterOutcome;
			typedef std::future<GetK8sClusterOutcome> GetK8sClusterOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::GetK8sClusterRequest&, const GetK8sClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetK8sClusterAsyncHandler;
			typedef Outcome<Error, Model::GetK8sServicesResult> GetK8sServicesOutcome;
			typedef std::future<GetK8sServicesOutcome> GetK8sServicesOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::GetK8sServicesRequest&, const GetK8sServicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetK8sServicesAsyncHandler;
			typedef Outcome<Error, Model::GetK8sStorageInfoResult> GetK8sStorageInfoOutcome;
			typedef std::future<GetK8sStorageInfoOutcome> GetK8sStorageInfoOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::GetK8sStorageInfoRequest&, const GetK8sStorageInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetK8sStorageInfoAsyncHandler;
			typedef Outcome<Error, Model::GetMockRuleByConsumerAppIdResult> GetMockRuleByConsumerAppIdOutcome;
			typedef std::future<GetMockRuleByConsumerAppIdOutcome> GetMockRuleByConsumerAppIdOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::GetMockRuleByConsumerAppIdRequest&, const GetMockRuleByConsumerAppIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMockRuleByConsumerAppIdAsyncHandler;
			typedef Outcome<Error, Model::GetMockRuleByIdResult> GetMockRuleByIdOutcome;
			typedef std::future<GetMockRuleByIdOutcome> GetMockRuleByIdOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::GetMockRuleByIdRequest&, const GetMockRuleByIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMockRuleByIdAsyncHandler;
			typedef Outcome<Error, Model::GetMockRuleByProviderAppIdResult> GetMockRuleByProviderAppIdOutcome;
			typedef std::future<GetMockRuleByProviderAppIdOutcome> GetMockRuleByProviderAppIdOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::GetMockRuleByProviderAppIdRequest&, const GetMockRuleByProviderAppIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMockRuleByProviderAppIdAsyncHandler;
			typedef Outcome<Error, Model::GetPackageStorageCredentialResult> GetPackageStorageCredentialOutcome;
			typedef std::future<GetPackageStorageCredentialOutcome> GetPackageStorageCredentialOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::GetPackageStorageCredentialRequest&, const GetPackageStorageCredentialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPackageStorageCredentialAsyncHandler;
			typedef Outcome<Error, Model::GetScalingRulesResult> GetScalingRulesOutcome;
			typedef std::future<GetScalingRulesOutcome> GetScalingRulesOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::GetScalingRulesRequest&, const GetScalingRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetScalingRulesAsyncHandler;
			typedef Outcome<Error, Model::GetSecureTokenResult> GetSecureTokenOutcome;
			typedef std::future<GetSecureTokenOutcome> GetSecureTokenOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::GetSecureTokenRequest&, const GetSecureTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSecureTokenAsyncHandler;
			typedef Outcome<Error, Model::GetServiceConsumersPageResult> GetServiceConsumersPageOutcome;
			typedef std::future<GetServiceConsumersPageOutcome> GetServiceConsumersPageOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::GetServiceConsumersPageRequest&, const GetServiceConsumersPageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceConsumersPageAsyncHandler;
			typedef Outcome<Error, Model::GetServiceDetailResult> GetServiceDetailOutcome;
			typedef std::future<GetServiceDetailOutcome> GetServiceDetailOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::GetServiceDetailRequest&, const GetServiceDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceDetailAsyncHandler;
			typedef Outcome<Error, Model::GetServiceListResult> GetServiceListOutcome;
			typedef std::future<GetServiceListOutcome> GetServiceListOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::GetServiceListRequest&, const GetServiceListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceListAsyncHandler;
			typedef Outcome<Error, Model::GetServiceListPageResult> GetServiceListPageOutcome;
			typedef std::future<GetServiceListPageOutcome> GetServiceListPageOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::GetServiceListPageRequest&, const GetServiceListPageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceListPageAsyncHandler;
			typedef Outcome<Error, Model::GetServiceMethodPageResult> GetServiceMethodPageOutcome;
			typedef std::future<GetServiceMethodPageOutcome> GetServiceMethodPageOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::GetServiceMethodPageRequest&, const GetServiceMethodPageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceMethodPageAsyncHandler;
			typedef Outcome<Error, Model::GetServiceProvidersPageResult> GetServiceProvidersPageOutcome;
			typedef std::future<GetServiceProvidersPageOutcome> GetServiceProvidersPageOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::GetServiceProvidersPageRequest&, const GetServiceProvidersPageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceProvidersPageAsyncHandler;
			typedef Outcome<Error, Model::GetSpringCloudTestMethodResult> GetSpringCloudTestMethodOutcome;
			typedef std::future<GetSpringCloudTestMethodOutcome> GetSpringCloudTestMethodOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::GetSpringCloudTestMethodRequest&, const GetSpringCloudTestMethodOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSpringCloudTestMethodAsyncHandler;
			typedef Outcome<Error, Model::GetSslCertificateListResult> GetSslCertificateListOutcome;
			typedef std::future<GetSslCertificateListOutcome> GetSslCertificateListOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::GetSslCertificateListRequest&, const GetSslCertificateListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSslCertificateListAsyncHandler;
			typedef Outcome<Error, Model::GetSubAccountInfoResult> GetSubAccountInfoOutcome;
			typedef std::future<GetSubAccountInfoOutcome> GetSubAccountInfoOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::GetSubAccountInfoRequest&, const GetSubAccountInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSubAccountInfoAsyncHandler;
			typedef Outcome<Error, Model::GetSwimmingLaneResult> GetSwimmingLaneOutcome;
			typedef std::future<GetSwimmingLaneOutcome> GetSwimmingLaneOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::GetSwimmingLaneRequest&, const GetSwimmingLaneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSwimmingLaneAsyncHandler;
			typedef Outcome<Error, Model::GetWebContainerConfigResult> GetWebContainerConfigOutcome;
			typedef std::future<GetWebContainerConfigOutcome> GetWebContainerConfigOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::GetWebContainerConfigRequest&, const GetWebContainerConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWebContainerConfigAsyncHandler;
			typedef Outcome<Error, Model::ImportK8sClusterResult> ImportK8sClusterOutcome;
			typedef std::future<ImportK8sClusterOutcome> ImportK8sClusterOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ImportK8sClusterRequest&, const ImportK8sClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportK8sClusterAsyncHandler;
			typedef Outcome<Error, Model::InsertApplicationResult> InsertApplicationOutcome;
			typedef std::future<InsertApplicationOutcome> InsertApplicationOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::InsertApplicationRequest&, const InsertApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InsertApplicationAsyncHandler;
			typedef Outcome<Error, Model::InsertClusterResult> InsertClusterOutcome;
			typedef std::future<InsertClusterOutcome> InsertClusterOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::InsertClusterRequest&, const InsertClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InsertClusterAsyncHandler;
			typedef Outcome<Error, Model::InsertClusterMemberResult> InsertClusterMemberOutcome;
			typedef std::future<InsertClusterMemberOutcome> InsertClusterMemberOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::InsertClusterMemberRequest&, const InsertClusterMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InsertClusterMemberAsyncHandler;
			typedef Outcome<Error, Model::InsertConfigCenterResult> InsertConfigCenterOutcome;
			typedef std::future<InsertConfigCenterOutcome> InsertConfigCenterOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::InsertConfigCenterRequest&, const InsertConfigCenterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InsertConfigCenterAsyncHandler;
			typedef Outcome<Error, Model::InsertDegradeControlResult> InsertDegradeControlOutcome;
			typedef std::future<InsertDegradeControlOutcome> InsertDegradeControlOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::InsertDegradeControlRequest&, const InsertDegradeControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InsertDegradeControlAsyncHandler;
			typedef Outcome<Error, Model::InsertDeployGroupResult> InsertDeployGroupOutcome;
			typedef std::future<InsertDeployGroupOutcome> InsertDeployGroupOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::InsertDeployGroupRequest&, const InsertDeployGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InsertDeployGroupAsyncHandler;
			typedef Outcome<Error, Model::InsertFlowControlResult> InsertFlowControlOutcome;
			typedef std::future<InsertFlowControlOutcome> InsertFlowControlOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::InsertFlowControlRequest&, const InsertFlowControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InsertFlowControlAsyncHandler;
			typedef Outcome<Error, Model::InsertK8sApplicationResult> InsertK8sApplicationOutcome;
			typedef std::future<InsertK8sApplicationOutcome> InsertK8sApplicationOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::InsertK8sApplicationRequest&, const InsertK8sApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InsertK8sApplicationAsyncHandler;
			typedef Outcome<Error, Model::InsertOrUpdateRegionResult> InsertOrUpdateRegionOutcome;
			typedef std::future<InsertOrUpdateRegionOutcome> InsertOrUpdateRegionOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::InsertOrUpdateRegionRequest&, const InsertOrUpdateRegionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InsertOrUpdateRegionAsyncHandler;
			typedef Outcome<Error, Model::InsertRoleResult> InsertRoleOutcome;
			typedef std::future<InsertRoleOutcome> InsertRoleOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::InsertRoleRequest&, const InsertRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InsertRoleAsyncHandler;
			typedef Outcome<Error, Model::InsertServiceGroupResult> InsertServiceGroupOutcome;
			typedef std::future<InsertServiceGroupOutcome> InsertServiceGroupOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::InsertServiceGroupRequest&, const InsertServiceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InsertServiceGroupAsyncHandler;
			typedef Outcome<Error, Model::InsertSwimmingLaneResult> InsertSwimmingLaneOutcome;
			typedef std::future<InsertSwimmingLaneOutcome> InsertSwimmingLaneOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::InsertSwimmingLaneRequest&, const InsertSwimmingLaneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InsertSwimmingLaneAsyncHandler;
			typedef Outcome<Error, Model::InsertSwimmingLaneGroupResult> InsertSwimmingLaneGroupOutcome;
			typedef std::future<InsertSwimmingLaneGroupOutcome> InsertSwimmingLaneGroupOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::InsertSwimmingLaneGroupRequest&, const InsertSwimmingLaneGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InsertSwimmingLaneGroupAsyncHandler;
			typedef Outcome<Error, Model::InstallAgentResult> InstallAgentOutcome;
			typedef std::future<InstallAgentOutcome> InstallAgentOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::InstallAgentRequest&, const InstallAgentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InstallAgentAsyncHandler;
			typedef Outcome<Error, Model::ListAliyunRegionResult> ListAliyunRegionOutcome;
			typedef std::future<ListAliyunRegionOutcome> ListAliyunRegionOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListAliyunRegionRequest&, const ListAliyunRegionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAliyunRegionAsyncHandler;
			typedef Outcome<Error, Model::ListApplicationResult> ListApplicationOutcome;
			typedef std::future<ListApplicationOutcome> ListApplicationOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListApplicationRequest&, const ListApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApplicationAsyncHandler;
			typedef Outcome<Error, Model::ListApplicationEcuResult> ListApplicationEcuOutcome;
			typedef std::future<ListApplicationEcuOutcome> ListApplicationEcuOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListApplicationEcuRequest&, const ListApplicationEcuOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApplicationEcuAsyncHandler;
			typedef Outcome<Error, Model::ListAuthorityResult> ListAuthorityOutcome;
			typedef std::future<ListAuthorityOutcome> ListAuthorityOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListAuthorityRequest&, const ListAuthorityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAuthorityAsyncHandler;
			typedef Outcome<Error, Model::ListBuildPackResult> ListBuildPackOutcome;
			typedef std::future<ListBuildPackOutcome> ListBuildPackOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListBuildPackRequest&, const ListBuildPackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListBuildPackAsyncHandler;
			typedef Outcome<Error, Model::ListCSBGatewayResult> ListCSBGatewayOutcome;
			typedef std::future<ListCSBGatewayOutcome> ListCSBGatewayOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListCSBGatewayRequest&, const ListCSBGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCSBGatewayAsyncHandler;
			typedef Outcome<Error, Model::ListChildrenStacksResult> ListChildrenStacksOutcome;
			typedef std::future<ListChildrenStacksOutcome> ListChildrenStacksOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListChildrenStacksRequest&, const ListChildrenStacksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListChildrenStacksAsyncHandler;
			typedef Outcome<Error, Model::ListClusterResult> ListClusterOutcome;
			typedef std::future<ListClusterOutcome> ListClusterOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListClusterRequest&, const ListClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterAsyncHandler;
			typedef Outcome<Error, Model::ListClusterMembersResult> ListClusterMembersOutcome;
			typedef std::future<ListClusterMembersOutcome> ListClusterMembersOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListClusterMembersRequest&, const ListClusterMembersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterMembersAsyncHandler;
			typedef Outcome<Error, Model::ListComponentsResult> ListComponentsOutcome;
			typedef std::future<ListComponentsOutcome> ListComponentsOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListComponentsRequest&, const ListComponentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListComponentsAsyncHandler;
			typedef Outcome<Error, Model::ListConfigCentersResult> ListConfigCentersOutcome;
			typedef std::future<ListConfigCentersOutcome> ListConfigCentersOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListConfigCentersRequest&, const ListConfigCentersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListConfigCentersAsyncHandler;
			typedef Outcome<Error, Model::ListConsumedServicesResult> ListConsumedServicesOutcome;
			typedef std::future<ListConsumedServicesOutcome> ListConsumedServicesOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListConsumedServicesRequest&, const ListConsumedServicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListConsumedServicesAsyncHandler;
			typedef Outcome<Error, Model::ListConvertableEcuResult> ListConvertableEcuOutcome;
			typedef std::future<ListConvertableEcuOutcome> ListConvertableEcuOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListConvertableEcuRequest&, const ListConvertableEcuOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListConvertableEcuAsyncHandler;
			typedef Outcome<Error, Model::ListDegradeControlsResult> ListDegradeControlsOutcome;
			typedef std::future<ListDegradeControlsOutcome> ListDegradeControlsOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListDegradeControlsRequest&, const ListDegradeControlsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDegradeControlsAsyncHandler;
			typedef Outcome<Error, Model::ListDeployGroupResult> ListDeployGroupOutcome;
			typedef std::future<ListDeployGroupOutcome> ListDeployGroupOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListDeployGroupRequest&, const ListDeployGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDeployGroupAsyncHandler;
			typedef Outcome<Error, Model::ListEcsNotInClusterResult> ListEcsNotInClusterOutcome;
			typedef std::future<ListEcsNotInClusterOutcome> ListEcsNotInClusterOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListEcsNotInClusterRequest&, const ListEcsNotInClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEcsNotInClusterAsyncHandler;
			typedef Outcome<Error, Model::ListEcuByRegionResult> ListEcuByRegionOutcome;
			typedef std::future<ListEcuByRegionOutcome> ListEcuByRegionOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListEcuByRegionRequest&, const ListEcuByRegionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEcuByRegionAsyncHandler;
			typedef Outcome<Error, Model::ListFlowControlsResult> ListFlowControlsOutcome;
			typedef std::future<ListFlowControlsOutcome> ListFlowControlsOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListFlowControlsRequest&, const ListFlowControlsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowControlsAsyncHandler;
			typedef Outcome<Error, Model::ListHistoryDeployVersionResult> ListHistoryDeployVersionOutcome;
			typedef std::future<ListHistoryDeployVersionOutcome> ListHistoryDeployVersionOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListHistoryDeployVersionRequest&, const ListHistoryDeployVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListHistoryDeployVersionAsyncHandler;
			typedef Outcome<Error, Model::ListK8sConfigMapsResult> ListK8sConfigMapsOutcome;
			typedef std::future<ListK8sConfigMapsOutcome> ListK8sConfigMapsOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListK8sConfigMapsRequest&, const ListK8sConfigMapsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListK8sConfigMapsAsyncHandler;
			typedef Outcome<Error, Model::ListK8sIngressRulesResult> ListK8sIngressRulesOutcome;
			typedef std::future<ListK8sIngressRulesOutcome> ListK8sIngressRulesOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListK8sIngressRulesRequest&, const ListK8sIngressRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListK8sIngressRulesAsyncHandler;
			typedef Outcome<Error, Model::ListK8sPvcResult> ListK8sPvcOutcome;
			typedef std::future<ListK8sPvcOutcome> ListK8sPvcOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListK8sPvcRequest&, const ListK8sPvcOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListK8sPvcAsyncHandler;
			typedef Outcome<Error, Model::ListK8sSecretsResult> ListK8sSecretsOutcome;
			typedef std::future<ListK8sSecretsOutcome> ListK8sSecretsOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListK8sSecretsRequest&, const ListK8sSecretsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListK8sSecretsAsyncHandler;
			typedef Outcome<Error, Model::ListMethodsResult> ListMethodsOutcome;
			typedef std::future<ListMethodsOutcome> ListMethodsOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListMethodsRequest&, const ListMethodsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMethodsAsyncHandler;
			typedef Outcome<Error, Model::ListOperationLogsResult> ListOperationLogsOutcome;
			typedef std::future<ListOperationLogsOutcome> ListOperationLogsOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListOperationLogsRequest&, const ListOperationLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListOperationLogsAsyncHandler;
			typedef Outcome<Error, Model::ListPublishedServicesResult> ListPublishedServicesOutcome;
			typedef std::future<ListPublishedServicesOutcome> ListPublishedServicesOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListPublishedServicesRequest&, const ListPublishedServicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPublishedServicesAsyncHandler;
			typedef Outcome<Error, Model::ListRecentChangeOrderResult> ListRecentChangeOrderOutcome;
			typedef std::future<ListRecentChangeOrderOutcome> ListRecentChangeOrderOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListRecentChangeOrderRequest&, const ListRecentChangeOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRecentChangeOrderAsyncHandler;
			typedef Outcome<Error, Model::ListResourceGroupResult> ListResourceGroupOutcome;
			typedef std::future<ListResourceGroupOutcome> ListResourceGroupOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListResourceGroupRequest&, const ListResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::ListRoleResult> ListRoleOutcome;
			typedef std::future<ListRoleOutcome> ListRoleOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListRoleRequest&, const ListRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRoleAsyncHandler;
			typedef Outcome<Error, Model::ListRootStacksResult> ListRootStacksOutcome;
			typedef std::future<ListRootStacksOutcome> ListRootStacksOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListRootStacksRequest&, const ListRootStacksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListRootStacksAsyncHandler;
			typedef Outcome<Error, Model::ListScaleOutEcuResult> ListScaleOutEcuOutcome;
			typedef std::future<ListScaleOutEcuOutcome> ListScaleOutEcuOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListScaleOutEcuRequest&, const ListScaleOutEcuOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListScaleOutEcuAsyncHandler;
			typedef Outcome<Error, Model::ListServiceGroupsResult> ListServiceGroupsOutcome;
			typedef std::future<ListServiceGroupsOutcome> ListServiceGroupsOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListServiceGroupsRequest&, const ListServiceGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListServiceGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListSlbResult> ListSlbOutcome;
			typedef std::future<ListSlbOutcome> ListSlbOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListSlbRequest&, const ListSlbOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSlbAsyncHandler;
			typedef Outcome<Error, Model::ListStatusResult> ListStatusOutcome;
			typedef std::future<ListStatusOutcome> ListStatusOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListStatusRequest&, const ListStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListStatusAsyncHandler;
			typedef Outcome<Error, Model::ListSubAccountResult> ListSubAccountOutcome;
			typedef std::future<ListSubAccountOutcome> ListSubAccountOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListSubAccountRequest&, const ListSubAccountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSubAccountAsyncHandler;
			typedef Outcome<Error, Model::ListSwimmingLaneResult> ListSwimmingLaneOutcome;
			typedef std::future<ListSwimmingLaneOutcome> ListSwimmingLaneOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListSwimmingLaneRequest&, const ListSwimmingLaneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSwimmingLaneAsyncHandler;
			typedef Outcome<Error, Model::ListSwimmingLaneGroupResult> ListSwimmingLaneGroupOutcome;
			typedef std::future<ListSwimmingLaneGroupOutcome> ListSwimmingLaneGroupOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListSwimmingLaneGroupRequest&, const ListSwimmingLaneGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSwimmingLaneGroupAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ListUserDefineRegionResult> ListUserDefineRegionOutcome;
			typedef std::future<ListUserDefineRegionOutcome> ListUserDefineRegionOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListUserDefineRegionRequest&, const ListUserDefineRegionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListUserDefineRegionAsyncHandler;
			typedef Outcome<Error, Model::ListVpcResult> ListVpcOutcome;
			typedef std::future<ListVpcOutcome> ListVpcOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ListVpcRequest&, const ListVpcOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListVpcAsyncHandler;
			typedef Outcome<Error, Model::MigrateEcuResult> MigrateEcuOutcome;
			typedef std::future<MigrateEcuOutcome> MigrateEcuOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::MigrateEcuRequest&, const MigrateEcuOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MigrateEcuAsyncHandler;
			typedef Outcome<Error, Model::ModifyScalingRuleResult> ModifyScalingRuleOutcome;
			typedef std::future<ModifyScalingRuleOutcome> ModifyScalingRuleOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ModifyScalingRuleRequest&, const ModifyScalingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyScalingRuleAsyncHandler;
			typedef Outcome<Error, Model::QueryApplicationStatusResult> QueryApplicationStatusOutcome;
			typedef std::future<QueryApplicationStatusOutcome> QueryApplicationStatusOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::QueryApplicationStatusRequest&, const QueryApplicationStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryApplicationStatusAsyncHandler;
			typedef Outcome<Error, Model::QueryConfigCenterResult> QueryConfigCenterOutcome;
			typedef std::future<QueryConfigCenterOutcome> QueryConfigCenterOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::QueryConfigCenterRequest&, const QueryConfigCenterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryConfigCenterAsyncHandler;
			typedef Outcome<Error, Model::QueryEccInfoResult> QueryEccInfoOutcome;
			typedef std::future<QueryEccInfoOutcome> QueryEccInfoOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::QueryEccInfoRequest&, const QueryEccInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryEccInfoAsyncHandler;
			typedef Outcome<Error, Model::QueryK8sClusterLogProjectInfoResult> QueryK8sClusterLogProjectInfoOutcome;
			typedef std::future<QueryK8sClusterLogProjectInfoOutcome> QueryK8sClusterLogProjectInfoOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::QueryK8sClusterLogProjectInfoRequest&, const QueryK8sClusterLogProjectInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryK8sClusterLogProjectInfoAsyncHandler;
			typedef Outcome<Error, Model::QueryMigrateEcuListResult> QueryMigrateEcuListOutcome;
			typedef std::future<QueryMigrateEcuListOutcome> QueryMigrateEcuListOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::QueryMigrateEcuListRequest&, const QueryMigrateEcuListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMigrateEcuListAsyncHandler;
			typedef Outcome<Error, Model::QueryMigrateRegionListResult> QueryMigrateRegionListOutcome;
			typedef std::future<QueryMigrateRegionListOutcome> QueryMigrateRegionListOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::QueryMigrateRegionListRequest&, const QueryMigrateRegionListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMigrateRegionListAsyncHandler;
			typedef Outcome<Error, Model::QueryRegionConfigResult> QueryRegionConfigOutcome;
			typedef std::future<QueryRegionConfigOutcome> QueryRegionConfigOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::QueryRegionConfigRequest&, const QueryRegionConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRegionConfigAsyncHandler;
			typedef Outcome<Error, Model::QueryServiceTimeConfigResult> QueryServiceTimeConfigOutcome;
			typedef std::future<QueryServiceTimeConfigOutcome> QueryServiceTimeConfigOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::QueryServiceTimeConfigRequest&, const QueryServiceTimeConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryServiceTimeConfigAsyncHandler;
			typedef Outcome<Error, Model::QuerySlsLogStoreListResult> QuerySlsLogStoreListOutcome;
			typedef std::future<QuerySlsLogStoreListOutcome> QuerySlsLogStoreListOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::QuerySlsLogStoreListRequest&, const QuerySlsLogStoreListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySlsLogStoreListAsyncHandler;
			typedef Outcome<Error, Model::RemoveMockRuleResult> RemoveMockRuleOutcome;
			typedef std::future<RemoveMockRuleOutcome> RemoveMockRuleOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::RemoveMockRuleRequest&, const RemoveMockRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveMockRuleAsyncHandler;
			typedef Outcome<Error, Model::ResetApplicationResult> ResetApplicationOutcome;
			typedef std::future<ResetApplicationOutcome> ResetApplicationOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ResetApplicationRequest&, const ResetApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetApplicationAsyncHandler;
			typedef Outcome<Error, Model::RestartApplicationResult> RestartApplicationOutcome;
			typedef std::future<RestartApplicationOutcome> RestartApplicationOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::RestartApplicationRequest&, const RestartApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartApplicationAsyncHandler;
			typedef Outcome<Error, Model::RestartK8sApplicationResult> RestartK8sApplicationOutcome;
			typedef std::future<RestartK8sApplicationOutcome> RestartK8sApplicationOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::RestartK8sApplicationRequest&, const RestartK8sApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartK8sApplicationAsyncHandler;
			typedef Outcome<Error, Model::RetryChangeOrderTaskResult> RetryChangeOrderTaskOutcome;
			typedef std::future<RetryChangeOrderTaskOutcome> RetryChangeOrderTaskOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::RetryChangeOrderTaskRequest&, const RetryChangeOrderTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RetryChangeOrderTaskAsyncHandler;
			typedef Outcome<Error, Model::RollbackApplicationResult> RollbackApplicationOutcome;
			typedef std::future<RollbackApplicationOutcome> RollbackApplicationOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::RollbackApplicationRequest&, const RollbackApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RollbackApplicationAsyncHandler;
			typedef Outcome<Error, Model::RollbackChangeOrderResult> RollbackChangeOrderOutcome;
			typedef std::future<RollbackChangeOrderOutcome> RollbackChangeOrderOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::RollbackChangeOrderRequest&, const RollbackChangeOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RollbackChangeOrderAsyncHandler;
			typedef Outcome<Error, Model::ScaleInApplicationResult> ScaleInApplicationOutcome;
			typedef std::future<ScaleInApplicationOutcome> ScaleInApplicationOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ScaleInApplicationRequest&, const ScaleInApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ScaleInApplicationAsyncHandler;
			typedef Outcome<Error, Model::ScaleK8sApplicationResult> ScaleK8sApplicationOutcome;
			typedef std::future<ScaleK8sApplicationOutcome> ScaleK8sApplicationOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ScaleK8sApplicationRequest&, const ScaleK8sApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ScaleK8sApplicationAsyncHandler;
			typedef Outcome<Error, Model::ScaleOutApplicationResult> ScaleOutApplicationOutcome;
			typedef std::future<ScaleOutApplicationOutcome> ScaleOutApplicationOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ScaleOutApplicationRequest&, const ScaleOutApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ScaleOutApplicationAsyncHandler;
			typedef Outcome<Error, Model::ScaleoutApplicationWithNewInstancesResult> ScaleoutApplicationWithNewInstancesOutcome;
			typedef std::future<ScaleoutApplicationWithNewInstancesOutcome> ScaleoutApplicationWithNewInstancesOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ScaleoutApplicationWithNewInstancesRequest&, const ScaleoutApplicationWithNewInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ScaleoutApplicationWithNewInstancesAsyncHandler;
			typedef Outcome<Error, Model::StartApplicationResult> StartApplicationOutcome;
			typedef std::future<StartApplicationOutcome> StartApplicationOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::StartApplicationRequest&, const StartApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartApplicationAsyncHandler;
			typedef Outcome<Error, Model::StartK8sApplicationResult> StartK8sApplicationOutcome;
			typedef std::future<StartK8sApplicationOutcome> StartK8sApplicationOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::StartK8sApplicationRequest&, const StartK8sApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartK8sApplicationAsyncHandler;
			typedef Outcome<Error, Model::StopApplicationResult> StopApplicationOutcome;
			typedef std::future<StopApplicationOutcome> StopApplicationOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::StopApplicationRequest&, const StopApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopApplicationAsyncHandler;
			typedef Outcome<Error, Model::StopK8sApplicationResult> StopK8sApplicationOutcome;
			typedef std::future<StopK8sApplicationOutcome> StopK8sApplicationOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::StopK8sApplicationRequest&, const StopK8sApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopK8sApplicationAsyncHandler;
			typedef Outcome<Error, Model::SwitchAdvancedMonitoringResult> SwitchAdvancedMonitoringOutcome;
			typedef std::future<SwitchAdvancedMonitoringOutcome> SwitchAdvancedMonitoringOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::SwitchAdvancedMonitoringRequest&, const SwitchAdvancedMonitoringOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchAdvancedMonitoringAsyncHandler;
			typedef Outcome<Error, Model::SynchronizeResourceResult> SynchronizeResourceOutcome;
			typedef std::future<SynchronizeResourceOutcome> SynchronizeResourceOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::SynchronizeResourceRequest&, const SynchronizeResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SynchronizeResourceAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ToggleGrayIngressResult> ToggleGrayIngressOutcome;
			typedef std::future<ToggleGrayIngressOutcome> ToggleGrayIngressOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ToggleGrayIngressRequest&, const ToggleGrayIngressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ToggleGrayIngressAsyncHandler;
			typedef Outcome<Error, Model::TransformClusterMemberResult> TransformClusterMemberOutcome;
			typedef std::future<TransformClusterMemberOutcome> TransformClusterMemberOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::TransformClusterMemberRequest&, const TransformClusterMemberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TransformClusterMemberAsyncHandler;
			typedef Outcome<Error, Model::UnbindK8sSlbResult> UnbindK8sSlbOutcome;
			typedef std::future<UnbindK8sSlbOutcome> UnbindK8sSlbOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::UnbindK8sSlbRequest&, const UnbindK8sSlbOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindK8sSlbAsyncHandler;
			typedef Outcome<Error, Model::UnbindSlbResult> UnbindSlbOutcome;
			typedef std::future<UnbindSlbOutcome> UnbindSlbOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::UnbindSlbRequest&, const UnbindSlbOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindSlbAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateAccountInfoResult> UpdateAccountInfoOutcome;
			typedef std::future<UpdateAccountInfoOutcome> UpdateAccountInfoOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::UpdateAccountInfoRequest&, const UpdateAccountInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAccountInfoAsyncHandler;
			typedef Outcome<Error, Model::UpdateApplicationBaseInfoResult> UpdateApplicationBaseInfoOutcome;
			typedef std::future<UpdateApplicationBaseInfoOutcome> UpdateApplicationBaseInfoOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::UpdateApplicationBaseInfoRequest&, const UpdateApplicationBaseInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateApplicationBaseInfoAsyncHandler;
			typedef Outcome<Error, Model::UpdateApplicationScalingRuleResult> UpdateApplicationScalingRuleOutcome;
			typedef std::future<UpdateApplicationScalingRuleOutcome> UpdateApplicationScalingRuleOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::UpdateApplicationScalingRuleRequest&, const UpdateApplicationScalingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateApplicationScalingRuleAsyncHandler;
			typedef Outcome<Error, Model::UpdateContainerResult> UpdateContainerOutcome;
			typedef std::future<UpdateContainerOutcome> UpdateContainerOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::UpdateContainerRequest&, const UpdateContainerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateContainerAsyncHandler;
			typedef Outcome<Error, Model::UpdateContainerConfigurationResult> UpdateContainerConfigurationOutcome;
			typedef std::future<UpdateContainerConfigurationOutcome> UpdateContainerConfigurationOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::UpdateContainerConfigurationRequest&, const UpdateContainerConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateContainerConfigurationAsyncHandler;
			typedef Outcome<Error, Model::UpdateDegradeControlResult> UpdateDegradeControlOutcome;
			typedef std::future<UpdateDegradeControlOutcome> UpdateDegradeControlOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::UpdateDegradeControlRequest&, const UpdateDegradeControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDegradeControlAsyncHandler;
			typedef Outcome<Error, Model::UpdateEnvAppGroupResult> UpdateEnvAppGroupOutcome;
			typedef std::future<UpdateEnvAppGroupOutcome> UpdateEnvAppGroupOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::UpdateEnvAppGroupRequest&, const UpdateEnvAppGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEnvAppGroupAsyncHandler;
			typedef Outcome<Error, Model::UpdateEnvHttpTrafficControlResult> UpdateEnvHttpTrafficControlOutcome;
			typedef std::future<UpdateEnvHttpTrafficControlOutcome> UpdateEnvHttpTrafficControlOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::UpdateEnvHttpTrafficControlRequest&, const UpdateEnvHttpTrafficControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEnvHttpTrafficControlAsyncHandler;
			typedef Outcome<Error, Model::UpdateFlowControlResult> UpdateFlowControlOutcome;
			typedef std::future<UpdateFlowControlOutcome> UpdateFlowControlOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::UpdateFlowControlRequest&, const UpdateFlowControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFlowControlAsyncHandler;
			typedef Outcome<Error, Model::UpdateHealthCheckUrlResult> UpdateHealthCheckUrlOutcome;
			typedef std::future<UpdateHealthCheckUrlOutcome> UpdateHealthCheckUrlOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::UpdateHealthCheckUrlRequest&, const UpdateHealthCheckUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateHealthCheckUrlAsyncHandler;
			typedef Outcome<Error, Model::UpdateHookConfigurationResult> UpdateHookConfigurationOutcome;
			typedef std::future<UpdateHookConfigurationOutcome> UpdateHookConfigurationOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::UpdateHookConfigurationRequest&, const UpdateHookConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateHookConfigurationAsyncHandler;
			typedef Outcome<Error, Model::UpdateJvmConfigurationResult> UpdateJvmConfigurationOutcome;
			typedef std::future<UpdateJvmConfigurationOutcome> UpdateJvmConfigurationOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::UpdateJvmConfigurationRequest&, const UpdateJvmConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateJvmConfigurationAsyncHandler;
			typedef Outcome<Error, Model::UpdateK8sApplicationBaseInfoResult> UpdateK8sApplicationBaseInfoOutcome;
			typedef std::future<UpdateK8sApplicationBaseInfoOutcome> UpdateK8sApplicationBaseInfoOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::UpdateK8sApplicationBaseInfoRequest&, const UpdateK8sApplicationBaseInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateK8sApplicationBaseInfoAsyncHandler;
			typedef Outcome<Error, Model::UpdateK8sApplicationConfigResult> UpdateK8sApplicationConfigOutcome;
			typedef std::future<UpdateK8sApplicationConfigOutcome> UpdateK8sApplicationConfigOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::UpdateK8sApplicationConfigRequest&, const UpdateK8sApplicationConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateK8sApplicationConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateK8sConfigMapResult> UpdateK8sConfigMapOutcome;
			typedef std::future<UpdateK8sConfigMapOutcome> UpdateK8sConfigMapOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::UpdateK8sConfigMapRequest&, const UpdateK8sConfigMapOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateK8sConfigMapAsyncHandler;
			typedef Outcome<Error, Model::UpdateK8sIngressRuleResult> UpdateK8sIngressRuleOutcome;
			typedef std::future<UpdateK8sIngressRuleOutcome> UpdateK8sIngressRuleOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::UpdateK8sIngressRuleRequest&, const UpdateK8sIngressRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateK8sIngressRuleAsyncHandler;
			typedef Outcome<Error, Model::UpdateK8sResourceResult> UpdateK8sResourceOutcome;
			typedef std::future<UpdateK8sResourceOutcome> UpdateK8sResourceOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::UpdateK8sResourceRequest&, const UpdateK8sResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateK8sResourceAsyncHandler;
			typedef Outcome<Error, Model::UpdateK8sSecretResult> UpdateK8sSecretOutcome;
			typedef std::future<UpdateK8sSecretOutcome> UpdateK8sSecretOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::UpdateK8sSecretRequest&, const UpdateK8sSecretOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateK8sSecretAsyncHandler;
			typedef Outcome<Error, Model::UpdateK8sServiceResult> UpdateK8sServiceOutcome;
			typedef std::future<UpdateK8sServiceOutcome> UpdateK8sServiceOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::UpdateK8sServiceRequest&, const UpdateK8sServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateK8sServiceAsyncHandler;
			typedef Outcome<Error, Model::UpdateK8sSlbResult> UpdateK8sSlbOutcome;
			typedef std::future<UpdateK8sSlbOutcome> UpdateK8sSlbOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::UpdateK8sSlbRequest&, const UpdateK8sSlbOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateK8sSlbAsyncHandler;
			typedef Outcome<Error, Model::UpdateLocalitySettingResult> UpdateLocalitySettingOutcome;
			typedef std::future<UpdateLocalitySettingOutcome> UpdateLocalitySettingOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::UpdateLocalitySettingRequest&, const UpdateLocalitySettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateLocalitySettingAsyncHandler;
			typedef Outcome<Error, Model::UpdateMockRuleResult> UpdateMockRuleOutcome;
			typedef std::future<UpdateMockRuleOutcome> UpdateMockRuleOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::UpdateMockRuleRequest&, const UpdateMockRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMockRuleAsyncHandler;
			typedef Outcome<Error, Model::UpdateRoleResult> UpdateRoleOutcome;
			typedef std::future<UpdateRoleOutcome> UpdateRoleOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::UpdateRoleRequest&, const UpdateRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateRoleAsyncHandler;
			typedef Outcome<Error, Model::UpdateSlsLogStoreResult> UpdateSlsLogStoreOutcome;
			typedef std::future<UpdateSlsLogStoreOutcome> UpdateSlsLogStoreOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::UpdateSlsLogStoreRequest&, const UpdateSlsLogStoreOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSlsLogStoreAsyncHandler;
			typedef Outcome<Error, Model::UpdateSwimmingLaneResult> UpdateSwimmingLaneOutcome;
			typedef std::future<UpdateSwimmingLaneOutcome> UpdateSwimmingLaneOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::UpdateSwimmingLaneRequest&, const UpdateSwimmingLaneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSwimmingLaneAsyncHandler;
			typedef Outcome<Error, Model::UpdateSwimmingLaneGroupResult> UpdateSwimmingLaneGroupOutcome;
			typedef std::future<UpdateSwimmingLaneGroupOutcome> UpdateSwimmingLaneGroupOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::UpdateSwimmingLaneGroupRequest&, const UpdateSwimmingLaneGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSwimmingLaneGroupAsyncHandler;
			typedef Outcome<Error, Model::UpdateSwimmingLanePriorityResult> UpdateSwimmingLanePriorityOutcome;
			typedef std::future<UpdateSwimmingLanePriorityOutcome> UpdateSwimmingLanePriorityOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::UpdateSwimmingLanePriorityRequest&, const UpdateSwimmingLanePriorityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSwimmingLanePriorityAsyncHandler;
			typedef Outcome<Error, Model::UppateEnvHsfTrafficControlResult> UppateEnvHsfTrafficControlOutcome;
			typedef std::future<UppateEnvHsfTrafficControlOutcome> UppateEnvHsfTrafficControlOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::UppateEnvHsfTrafficControlRequest&, const UppateEnvHsfTrafficControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UppateEnvHsfTrafficControlAsyncHandler;
			typedef Outcome<Error, Model::ValidateK8sResourceResult> ValidateK8sResourceOutcome;
			typedef std::future<ValidateK8sResourceOutcome> ValidateK8sResourceOutcomeCallable;
			typedef std::function<void(const EdasClient*, const Model::ValidateK8sResourceRequest&, const ValidateK8sResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ValidateK8sResourceAsyncHandler;

			EdasClient(const Credentials &credentials, const ClientConfiguration &configuration);
			EdasClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			EdasClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~EdasClient();
			AbortAndRollbackChangeOrderOutcome abortAndRollbackChangeOrder(const Model::AbortAndRollbackChangeOrderRequest &request)const;
			void abortAndRollbackChangeOrderAsync(const Model::AbortAndRollbackChangeOrderRequest& request, const AbortAndRollbackChangeOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AbortAndRollbackChangeOrderOutcomeCallable abortAndRollbackChangeOrderCallable(const Model::AbortAndRollbackChangeOrderRequest& request) const;
			AbortChangeOrderOutcome abortChangeOrder(const Model::AbortChangeOrderRequest &request)const;
			void abortChangeOrderAsync(const Model::AbortChangeOrderRequest& request, const AbortChangeOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AbortChangeOrderOutcomeCallable abortChangeOrderCallable(const Model::AbortChangeOrderRequest& request) const;
			AddLogPathOutcome addLogPath(const Model::AddLogPathRequest &request)const;
			void addLogPathAsync(const Model::AddLogPathRequest& request, const AddLogPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLogPathOutcomeCallable addLogPathCallable(const Model::AddLogPathRequest& request) const;
			AddMockRuleOutcome addMockRule(const Model::AddMockRuleRequest &request)const;
			void addMockRuleAsync(const Model::AddMockRuleRequest& request, const AddMockRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddMockRuleOutcomeCallable addMockRuleCallable(const Model::AddMockRuleRequest& request) const;
			AddServiceTimeConfigOutcome addServiceTimeConfig(const Model::AddServiceTimeConfigRequest &request)const;
			void addServiceTimeConfigAsync(const Model::AddServiceTimeConfigRequest& request, const AddServiceTimeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddServiceTimeConfigOutcomeCallable addServiceTimeConfigCallable(const Model::AddServiceTimeConfigRequest& request) const;
			AuthorizeApplicationOutcome authorizeApplication(const Model::AuthorizeApplicationRequest &request)const;
			void authorizeApplicationAsync(const Model::AuthorizeApplicationRequest& request, const AuthorizeApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AuthorizeApplicationOutcomeCallable authorizeApplicationCallable(const Model::AuthorizeApplicationRequest& request) const;
			AuthorizeResourceGroupOutcome authorizeResourceGroup(const Model::AuthorizeResourceGroupRequest &request)const;
			void authorizeResourceGroupAsync(const Model::AuthorizeResourceGroupRequest& request, const AuthorizeResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AuthorizeResourceGroupOutcomeCallable authorizeResourceGroupCallable(const Model::AuthorizeResourceGroupRequest& request) const;
			AuthorizeRoleOutcome authorizeRole(const Model::AuthorizeRoleRequest &request)const;
			void authorizeRoleAsync(const Model::AuthorizeRoleRequest& request, const AuthorizeRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AuthorizeRoleOutcomeCallable authorizeRoleCallable(const Model::AuthorizeRoleRequest& request) const;
			BindEcsSlbOutcome bindEcsSlb(const Model::BindEcsSlbRequest &request)const;
			void bindEcsSlbAsync(const Model::BindEcsSlbRequest& request, const BindEcsSlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindEcsSlbOutcomeCallable bindEcsSlbCallable(const Model::BindEcsSlbRequest& request) const;
			BindK8sSlbOutcome bindK8sSlb(const Model::BindK8sSlbRequest &request)const;
			void bindK8sSlbAsync(const Model::BindK8sSlbRequest& request, const BindK8sSlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindK8sSlbOutcomeCallable bindK8sSlbCallable(const Model::BindK8sSlbRequest& request) const;
			BindSlbOutcome bindSlb(const Model::BindSlbRequest &request)const;
			void bindSlbAsync(const Model::BindSlbRequest& request, const BindSlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindSlbOutcomeCallable bindSlbCallable(const Model::BindSlbRequest& request) const;
			ChangeDeployGroupOutcome changeDeployGroup(const Model::ChangeDeployGroupRequest &request)const;
			void changeDeployGroupAsync(const Model::ChangeDeployGroupRequest& request, const ChangeDeployGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ChangeDeployGroupOutcomeCallable changeDeployGroupCallable(const Model::ChangeDeployGroupRequest& request) const;
			ContinuePipelineOutcome continuePipeline(const Model::ContinuePipelineRequest &request)const;
			void continuePipelineAsync(const Model::ContinuePipelineRequest& request, const ContinuePipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ContinuePipelineOutcomeCallable continuePipelineCallable(const Model::ContinuePipelineRequest& request) const;
			ConvertK8sResourceOutcome convertK8sResource(const Model::ConvertK8sResourceRequest &request)const;
			void convertK8sResourceAsync(const Model::ConvertK8sResourceRequest& request, const ConvertK8sResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConvertK8sResourceOutcomeCallable convertK8sResourceCallable(const Model::ConvertK8sResourceRequest& request) const;
			CreateApplicationScalingRuleOutcome createApplicationScalingRule(const Model::CreateApplicationScalingRuleRequest &request)const;
			void createApplicationScalingRuleAsync(const Model::CreateApplicationScalingRuleRequest& request, const CreateApplicationScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateApplicationScalingRuleOutcomeCallable createApplicationScalingRuleCallable(const Model::CreateApplicationScalingRuleRequest& request) const;
			CreateApplicationTemplateOutcome createApplicationTemplate(const Model::CreateApplicationTemplateRequest &request)const;
			void createApplicationTemplateAsync(const Model::CreateApplicationTemplateRequest& request, const CreateApplicationTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateApplicationTemplateOutcomeCallable createApplicationTemplateCallable(const Model::CreateApplicationTemplateRequest& request) const;
			CreateEnvAppGroupOutcome createEnvAppGroup(const Model::CreateEnvAppGroupRequest &request)const;
			void createEnvAppGroupAsync(const Model::CreateEnvAppGroupRequest& request, const CreateEnvAppGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEnvAppGroupOutcomeCallable createEnvAppGroupCallable(const Model::CreateEnvAppGroupRequest& request) const;
			CreateEnvHsfTrafficControlOutcome createEnvHsfTrafficControl(const Model::CreateEnvHsfTrafficControlRequest &request)const;
			void createEnvHsfTrafficControlAsync(const Model::CreateEnvHsfTrafficControlRequest& request, const CreateEnvHsfTrafficControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEnvHsfTrafficControlOutcomeCallable createEnvHsfTrafficControlCallable(const Model::CreateEnvHsfTrafficControlRequest& request) const;
			CreateEnvHttpTrafficControlOutcome createEnvHttpTrafficControl(const Model::CreateEnvHttpTrafficControlRequest &request)const;
			void createEnvHttpTrafficControlAsync(const Model::CreateEnvHttpTrafficControlRequest& request, const CreateEnvHttpTrafficControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEnvHttpTrafficControlOutcomeCallable createEnvHttpTrafficControlCallable(const Model::CreateEnvHttpTrafficControlRequest& request) const;
			CreateGrayEnvironmentOutcome createGrayEnvironment(const Model::CreateGrayEnvironmentRequest &request)const;
			void createGrayEnvironmentAsync(const Model::CreateGrayEnvironmentRequest& request, const CreateGrayEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGrayEnvironmentOutcomeCallable createGrayEnvironmentCallable(const Model::CreateGrayEnvironmentRequest& request) const;
			CreateIDCImportCommandOutcome createIDCImportCommand(const Model::CreateIDCImportCommandRequest &request)const;
			void createIDCImportCommandAsync(const Model::CreateIDCImportCommandRequest& request, const CreateIDCImportCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateIDCImportCommandOutcomeCallable createIDCImportCommandCallable(const Model::CreateIDCImportCommandRequest& request) const;
			CreateK8sConfigMapOutcome createK8sConfigMap(const Model::CreateK8sConfigMapRequest &request)const;
			void createK8sConfigMapAsync(const Model::CreateK8sConfigMapRequest& request, const CreateK8sConfigMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateK8sConfigMapOutcomeCallable createK8sConfigMapCallable(const Model::CreateK8sConfigMapRequest& request) const;
			CreateK8sIngressRuleOutcome createK8sIngressRule(const Model::CreateK8sIngressRuleRequest &request)const;
			void createK8sIngressRuleAsync(const Model::CreateK8sIngressRuleRequest& request, const CreateK8sIngressRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateK8sIngressRuleOutcomeCallable createK8sIngressRuleCallable(const Model::CreateK8sIngressRuleRequest& request) const;
			CreateK8sSecretOutcome createK8sSecret(const Model::CreateK8sSecretRequest &request)const;
			void createK8sSecretAsync(const Model::CreateK8sSecretRequest& request, const CreateK8sSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateK8sSecretOutcomeCallable createK8sSecretCallable(const Model::CreateK8sSecretRequest& request) const;
			CreateK8sServiceOutcome createK8sService(const Model::CreateK8sServiceRequest &request)const;
			void createK8sServiceAsync(const Model::CreateK8sServiceRequest& request, const CreateK8sServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateK8sServiceOutcomeCallable createK8sServiceCallable(const Model::CreateK8sServiceRequest& request) const;
			DelegateAdminRoleOutcome delegateAdminRole(const Model::DelegateAdminRoleRequest &request)const;
			void delegateAdminRoleAsync(const Model::DelegateAdminRoleRequest& request, const DelegateAdminRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DelegateAdminRoleOutcomeCallable delegateAdminRoleCallable(const Model::DelegateAdminRoleRequest& request) const;
			DeleteApplicationOutcome deleteApplication(const Model::DeleteApplicationRequest &request)const;
			void deleteApplicationAsync(const Model::DeleteApplicationRequest& request, const DeleteApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteApplicationOutcomeCallable deleteApplicationCallable(const Model::DeleteApplicationRequest& request) const;
			DeleteApplicationScalingRuleOutcome deleteApplicationScalingRule(const Model::DeleteApplicationScalingRuleRequest &request)const;
			void deleteApplicationScalingRuleAsync(const Model::DeleteApplicationScalingRuleRequest& request, const DeleteApplicationScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteApplicationScalingRuleOutcomeCallable deleteApplicationScalingRuleCallable(const Model::DeleteApplicationScalingRuleRequest& request) const;
			DeleteClusterOutcome deleteCluster(const Model::DeleteClusterRequest &request)const;
			void deleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteClusterOutcomeCallable deleteClusterCallable(const Model::DeleteClusterRequest& request) const;
			DeleteClusterMemberOutcome deleteClusterMember(const Model::DeleteClusterMemberRequest &request)const;
			void deleteClusterMemberAsync(const Model::DeleteClusterMemberRequest& request, const DeleteClusterMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteClusterMemberOutcomeCallable deleteClusterMemberCallable(const Model::DeleteClusterMemberRequest& request) const;
			DeleteConfigCenterOutcome deleteConfigCenter(const Model::DeleteConfigCenterRequest &request)const;
			void deleteConfigCenterAsync(const Model::DeleteConfigCenterRequest& request, const DeleteConfigCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteConfigCenterOutcomeCallable deleteConfigCenterCallable(const Model::DeleteConfigCenterRequest& request) const;
			DeleteDegradeControlOutcome deleteDegradeControl(const Model::DeleteDegradeControlRequest &request)const;
			void deleteDegradeControlAsync(const Model::DeleteDegradeControlRequest& request, const DeleteDegradeControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDegradeControlOutcomeCallable deleteDegradeControlCallable(const Model::DeleteDegradeControlRequest& request) const;
			DeleteDeployGroupOutcome deleteDeployGroup(const Model::DeleteDeployGroupRequest &request)const;
			void deleteDeployGroupAsync(const Model::DeleteDeployGroupRequest& request, const DeleteDeployGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDeployGroupOutcomeCallable deleteDeployGroupCallable(const Model::DeleteDeployGroupRequest& request) const;
			DeleteEcuOutcome deleteEcu(const Model::DeleteEcuRequest &request)const;
			void deleteEcuAsync(const Model::DeleteEcuRequest& request, const DeleteEcuAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEcuOutcomeCallable deleteEcuCallable(const Model::DeleteEcuRequest& request) const;
			DeleteEnvAppGroupOutcome deleteEnvAppGroup(const Model::DeleteEnvAppGroupRequest &request)const;
			void deleteEnvAppGroupAsync(const Model::DeleteEnvAppGroupRequest& request, const DeleteEnvAppGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEnvAppGroupOutcomeCallable deleteEnvAppGroupCallable(const Model::DeleteEnvAppGroupRequest& request) const;
			DeleteEnvHsfTrafficControlOutcome deleteEnvHsfTrafficControl(const Model::DeleteEnvHsfTrafficControlRequest &request)const;
			void deleteEnvHsfTrafficControlAsync(const Model::DeleteEnvHsfTrafficControlRequest& request, const DeleteEnvHsfTrafficControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEnvHsfTrafficControlOutcomeCallable deleteEnvHsfTrafficControlCallable(const Model::DeleteEnvHsfTrafficControlRequest& request) const;
			DeleteEnvHttpTrafficControlOutcome deleteEnvHttpTrafficControl(const Model::DeleteEnvHttpTrafficControlRequest &request)const;
			void deleteEnvHttpTrafficControlAsync(const Model::DeleteEnvHttpTrafficControlRequest& request, const DeleteEnvHttpTrafficControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEnvHttpTrafficControlOutcomeCallable deleteEnvHttpTrafficControlCallable(const Model::DeleteEnvHttpTrafficControlRequest& request) const;
			DeleteFlowControlOutcome deleteFlowControl(const Model::DeleteFlowControlRequest &request)const;
			void deleteFlowControlAsync(const Model::DeleteFlowControlRequest& request, const DeleteFlowControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFlowControlOutcomeCallable deleteFlowControlCallable(const Model::DeleteFlowControlRequest& request) const;
			DeleteGrayEnvironmentOutcome deleteGrayEnvironment(const Model::DeleteGrayEnvironmentRequest &request)const;
			void deleteGrayEnvironmentAsync(const Model::DeleteGrayEnvironmentRequest& request, const DeleteGrayEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGrayEnvironmentOutcomeCallable deleteGrayEnvironmentCallable(const Model::DeleteGrayEnvironmentRequest& request) const;
			DeleteK8sApplicationOutcome deleteK8sApplication(const Model::DeleteK8sApplicationRequest &request)const;
			void deleteK8sApplicationAsync(const Model::DeleteK8sApplicationRequest& request, const DeleteK8sApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteK8sApplicationOutcomeCallable deleteK8sApplicationCallable(const Model::DeleteK8sApplicationRequest& request) const;
			DeleteK8sConfigMapOutcome deleteK8sConfigMap(const Model::DeleteK8sConfigMapRequest &request)const;
			void deleteK8sConfigMapAsync(const Model::DeleteK8sConfigMapRequest& request, const DeleteK8sConfigMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteK8sConfigMapOutcomeCallable deleteK8sConfigMapCallable(const Model::DeleteK8sConfigMapRequest& request) const;
			DeleteK8sIngressRuleOutcome deleteK8sIngressRule(const Model::DeleteK8sIngressRuleRequest &request)const;
			void deleteK8sIngressRuleAsync(const Model::DeleteK8sIngressRuleRequest& request, const DeleteK8sIngressRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteK8sIngressRuleOutcomeCallable deleteK8sIngressRuleCallable(const Model::DeleteK8sIngressRuleRequest& request) const;
			DeleteK8sSecretOutcome deleteK8sSecret(const Model::DeleteK8sSecretRequest &request)const;
			void deleteK8sSecretAsync(const Model::DeleteK8sSecretRequest& request, const DeleteK8sSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteK8sSecretOutcomeCallable deleteK8sSecretCallable(const Model::DeleteK8sSecretRequest& request) const;
			DeleteK8sServiceOutcome deleteK8sService(const Model::DeleteK8sServiceRequest &request)const;
			void deleteK8sServiceAsync(const Model::DeleteK8sServiceRequest& request, const DeleteK8sServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteK8sServiceOutcomeCallable deleteK8sServiceCallable(const Model::DeleteK8sServiceRequest& request) const;
			DeleteLogPathOutcome deleteLogPath(const Model::DeleteLogPathRequest &request)const;
			void deleteLogPathAsync(const Model::DeleteLogPathRequest& request, const DeleteLogPathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLogPathOutcomeCallable deleteLogPathCallable(const Model::DeleteLogPathRequest& request) const;
			DeleteRoleOutcome deleteRole(const Model::DeleteRoleRequest &request)const;
			void deleteRoleAsync(const Model::DeleteRoleRequest& request, const DeleteRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRoleOutcomeCallable deleteRoleCallable(const Model::DeleteRoleRequest& request) const;
			DeleteServiceGroupOutcome deleteServiceGroup(const Model::DeleteServiceGroupRequest &request)const;
			void deleteServiceGroupAsync(const Model::DeleteServiceGroupRequest& request, const DeleteServiceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteServiceGroupOutcomeCallable deleteServiceGroupCallable(const Model::DeleteServiceGroupRequest& request) const;
			DeleteServiceTimeConfigOutcome deleteServiceTimeConfig(const Model::DeleteServiceTimeConfigRequest &request)const;
			void deleteServiceTimeConfigAsync(const Model::DeleteServiceTimeConfigRequest& request, const DeleteServiceTimeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteServiceTimeConfigOutcomeCallable deleteServiceTimeConfigCallable(const Model::DeleteServiceTimeConfigRequest& request) const;
			DeleteSwimmingLaneOutcome deleteSwimmingLane(const Model::DeleteSwimmingLaneRequest &request)const;
			void deleteSwimmingLaneAsync(const Model::DeleteSwimmingLaneRequest& request, const DeleteSwimmingLaneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSwimmingLaneOutcomeCallable deleteSwimmingLaneCallable(const Model::DeleteSwimmingLaneRequest& request) const;
			DeleteSwimmingLaneGroupOutcome deleteSwimmingLaneGroup(const Model::DeleteSwimmingLaneGroupRequest &request)const;
			void deleteSwimmingLaneGroupAsync(const Model::DeleteSwimmingLaneGroupRequest& request, const DeleteSwimmingLaneGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSwimmingLaneGroupOutcomeCallable deleteSwimmingLaneGroupCallable(const Model::DeleteSwimmingLaneGroupRequest& request) const;
			DeleteUserDefineRegionOutcome deleteUserDefineRegion(const Model::DeleteUserDefineRegionRequest &request)const;
			void deleteUserDefineRegionAsync(const Model::DeleteUserDefineRegionRequest& request, const DeleteUserDefineRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteUserDefineRegionOutcomeCallable deleteUserDefineRegionCallable(const Model::DeleteUserDefineRegionRequest& request) const;
			DeployApplicationOutcome deployApplication(const Model::DeployApplicationRequest &request)const;
			void deployApplicationAsync(const Model::DeployApplicationRequest& request, const DeployApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeployApplicationOutcomeCallable deployApplicationCallable(const Model::DeployApplicationRequest& request) const;
			DeployK8sApplicationOutcome deployK8sApplication(const Model::DeployK8sApplicationRequest &request)const;
			void deployK8sApplicationAsync(const Model::DeployK8sApplicationRequest& request, const DeployK8sApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeployK8sApplicationOutcomeCallable deployK8sApplicationCallable(const Model::DeployK8sApplicationRequest& request) const;
			DescribeAppInstanceListOutcome describeAppInstanceList(const Model::DescribeAppInstanceListRequest &request)const;
			void describeAppInstanceListAsync(const Model::DescribeAppInstanceListRequest& request, const DescribeAppInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAppInstanceListOutcomeCallable describeAppInstanceListCallable(const Model::DescribeAppInstanceListRequest& request) const;
			DescribeApplicationScalingRuleOutcome describeApplicationScalingRule(const Model::DescribeApplicationScalingRuleRequest &request)const;
			void describeApplicationScalingRuleAsync(const Model::DescribeApplicationScalingRuleRequest& request, const DescribeApplicationScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApplicationScalingRuleOutcomeCallable describeApplicationScalingRuleCallable(const Model::DescribeApplicationScalingRuleRequest& request) const;
			DescribeApplicationScalingRulesOutcome describeApplicationScalingRules(const Model::DescribeApplicationScalingRulesRequest &request)const;
			void describeApplicationScalingRulesAsync(const Model::DescribeApplicationScalingRulesRequest& request, const DescribeApplicationScalingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApplicationScalingRulesOutcomeCallable describeApplicationScalingRulesCallable(const Model::DescribeApplicationScalingRulesRequest& request) const;
			DescribeLocalitySettingOutcome describeLocalitySetting(const Model::DescribeLocalitySettingRequest &request)const;
			void describeLocalitySettingAsync(const Model::DescribeLocalitySettingRequest& request, const DescribeLocalitySettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLocalitySettingOutcomeCallable describeLocalitySettingCallable(const Model::DescribeLocalitySettingRequest& request) const;
			DisableApplicationScalingRuleOutcome disableApplicationScalingRule(const Model::DisableApplicationScalingRuleRequest &request)const;
			void disableApplicationScalingRuleAsync(const Model::DisableApplicationScalingRuleRequest& request, const DisableApplicationScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableApplicationScalingRuleOutcomeCallable disableApplicationScalingRuleCallable(const Model::DisableApplicationScalingRuleRequest& request) const;
			DisableDegradeControlOutcome disableDegradeControl(const Model::DisableDegradeControlRequest &request)const;
			void disableDegradeControlAsync(const Model::DisableDegradeControlRequest& request, const DisableDegradeControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableDegradeControlOutcomeCallable disableDegradeControlCallable(const Model::DisableDegradeControlRequest& request) const;
			DisableFlowControlOutcome disableFlowControl(const Model::DisableFlowControlRequest &request)const;
			void disableFlowControlAsync(const Model::DisableFlowControlRequest& request, const DisableFlowControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableFlowControlOutcomeCallable disableFlowControlCallable(const Model::DisableFlowControlRequest& request) const;
			DisableMockRuleOutcome disableMockRule(const Model::DisableMockRuleRequest &request)const;
			void disableMockRuleAsync(const Model::DisableMockRuleRequest& request, const DisableMockRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableMockRuleOutcomeCallable disableMockRuleCallable(const Model::DisableMockRuleRequest& request) const;
			EnableApplicationScalingRuleOutcome enableApplicationScalingRule(const Model::EnableApplicationScalingRuleRequest &request)const;
			void enableApplicationScalingRuleAsync(const Model::EnableApplicationScalingRuleRequest& request, const EnableApplicationScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableApplicationScalingRuleOutcomeCallable enableApplicationScalingRuleCallable(const Model::EnableApplicationScalingRuleRequest& request) const;
			EnableDegradeControlOutcome enableDegradeControl(const Model::EnableDegradeControlRequest &request)const;
			void enableDegradeControlAsync(const Model::EnableDegradeControlRequest& request, const EnableDegradeControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableDegradeControlOutcomeCallable enableDegradeControlCallable(const Model::EnableDegradeControlRequest& request) const;
			EnableFlowControlOutcome enableFlowControl(const Model::EnableFlowControlRequest &request)const;
			void enableFlowControlAsync(const Model::EnableFlowControlRequest& request, const EnableFlowControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableFlowControlOutcomeCallable enableFlowControlCallable(const Model::EnableFlowControlRequest& request) const;
			EnableMockRuleOutcome enableMockRule(const Model::EnableMockRuleRequest &request)const;
			void enableMockRuleAsync(const Model::EnableMockRuleRequest& request, const EnableMockRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableMockRuleOutcomeCallable enableMockRuleCallable(const Model::EnableMockRuleRequest& request) const;
			ExecuteStatusOutcome executeStatus(const Model::ExecuteStatusRequest &request)const;
			void executeStatusAsync(const Model::ExecuteStatusRequest& request, const ExecuteStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecuteStatusOutcomeCallable executeStatusCallable(const Model::ExecuteStatusRequest& request) const;
			GetAccountMockRuleOutcome getAccountMockRule(const Model::GetAccountMockRuleRequest &request)const;
			void getAccountMockRuleAsync(const Model::GetAccountMockRuleRequest& request, const GetAccountMockRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAccountMockRuleOutcomeCallable getAccountMockRuleCallable(const Model::GetAccountMockRuleRequest& request) const;
			GetAppDeploymentOutcome getAppDeployment(const Model::GetAppDeploymentRequest &request)const;
			void getAppDeploymentAsync(const Model::GetAppDeploymentRequest& request, const GetAppDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAppDeploymentOutcomeCallable getAppDeploymentCallable(const Model::GetAppDeploymentRequest& request) const;
			GetApplicationOutcome getApplication(const Model::GetApplicationRequest &request)const;
			void getApplicationAsync(const Model::GetApplicationRequest& request, const GetApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetApplicationOutcomeCallable getApplicationCallable(const Model::GetApplicationRequest& request) const;
			GetChangeOrderInfoOutcome getChangeOrderInfo(const Model::GetChangeOrderInfoRequest &request)const;
			void getChangeOrderInfoAsync(const Model::GetChangeOrderInfoRequest& request, const GetChangeOrderInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetChangeOrderInfoOutcomeCallable getChangeOrderInfoCallable(const Model::GetChangeOrderInfoRequest& request) const;
			GetClusterOutcome getCluster(const Model::GetClusterRequest &request)const;
			void getClusterAsync(const Model::GetClusterRequest& request, const GetClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetClusterOutcomeCallable getClusterCallable(const Model::GetClusterRequest& request) const;
			GetContainerConfigurationOutcome getContainerConfiguration(const Model::GetContainerConfigurationRequest &request)const;
			void getContainerConfigurationAsync(const Model::GetContainerConfigurationRequest& request, const GetContainerConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetContainerConfigurationOutcomeCallable getContainerConfigurationCallable(const Model::GetContainerConfigurationRequest& request) const;
			GetEnvTrafficControlOutcome getEnvTrafficControl(const Model::GetEnvTrafficControlRequest &request)const;
			void getEnvTrafficControlAsync(const Model::GetEnvTrafficControlRequest& request, const GetEnvTrafficControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEnvTrafficControlOutcomeCallable getEnvTrafficControlCallable(const Model::GetEnvTrafficControlRequest& request) const;
			GetGrayAppGroupOutcome getGrayAppGroup(const Model::GetGrayAppGroupRequest &request)const;
			void getGrayAppGroupAsync(const Model::GetGrayAppGroupRequest& request, const GetGrayAppGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGrayAppGroupOutcomeCallable getGrayAppGroupCallable(const Model::GetGrayAppGroupRequest& request) const;
			GetGrayAppsOutcome getGrayApps(const Model::GetGrayAppsRequest &request)const;
			void getGrayAppsAsync(const Model::GetGrayAppsRequest& request, const GetGrayAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGrayAppsOutcomeCallable getGrayAppsCallable(const Model::GetGrayAppsRequest& request) const;
			GetGrayEnvironmentsOutcome getGrayEnvironments(const Model::GetGrayEnvironmentsRequest &request)const;
			void getGrayEnvironmentsAsync(const Model::GetGrayEnvironmentsRequest& request, const GetGrayEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGrayEnvironmentsOutcomeCallable getGrayEnvironmentsCallable(const Model::GetGrayEnvironmentsRequest& request) const;
			GetJavaStartUpConfigOutcome getJavaStartUpConfig(const Model::GetJavaStartUpConfigRequest &request)const;
			void getJavaStartUpConfigAsync(const Model::GetJavaStartUpConfigRequest& request, const GetJavaStartUpConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJavaStartUpConfigOutcomeCallable getJavaStartUpConfigCallable(const Model::GetJavaStartUpConfigRequest& request) const;
			GetJvmConfigurationOutcome getJvmConfiguration(const Model::GetJvmConfigurationRequest &request)const;
			void getJvmConfigurationAsync(const Model::GetJvmConfigurationRequest& request, const GetJvmConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJvmConfigurationOutcomeCallable getJvmConfigurationCallable(const Model::GetJvmConfigurationRequest& request) const;
			GetK8sApplicationOutcome getK8sApplication(const Model::GetK8sApplicationRequest &request)const;
			void getK8sApplicationAsync(const Model::GetK8sApplicationRequest& request, const GetK8sApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetK8sApplicationOutcomeCallable getK8sApplicationCallable(const Model::GetK8sApplicationRequest& request) const;
			GetK8sClusterOutcome getK8sCluster(const Model::GetK8sClusterRequest &request)const;
			void getK8sClusterAsync(const Model::GetK8sClusterRequest& request, const GetK8sClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetK8sClusterOutcomeCallable getK8sClusterCallable(const Model::GetK8sClusterRequest& request) const;
			GetK8sServicesOutcome getK8sServices(const Model::GetK8sServicesRequest &request)const;
			void getK8sServicesAsync(const Model::GetK8sServicesRequest& request, const GetK8sServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetK8sServicesOutcomeCallable getK8sServicesCallable(const Model::GetK8sServicesRequest& request) const;
			GetK8sStorageInfoOutcome getK8sStorageInfo(const Model::GetK8sStorageInfoRequest &request)const;
			void getK8sStorageInfoAsync(const Model::GetK8sStorageInfoRequest& request, const GetK8sStorageInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetK8sStorageInfoOutcomeCallable getK8sStorageInfoCallable(const Model::GetK8sStorageInfoRequest& request) const;
			GetMockRuleByConsumerAppIdOutcome getMockRuleByConsumerAppId(const Model::GetMockRuleByConsumerAppIdRequest &request)const;
			void getMockRuleByConsumerAppIdAsync(const Model::GetMockRuleByConsumerAppIdRequest& request, const GetMockRuleByConsumerAppIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMockRuleByConsumerAppIdOutcomeCallable getMockRuleByConsumerAppIdCallable(const Model::GetMockRuleByConsumerAppIdRequest& request) const;
			GetMockRuleByIdOutcome getMockRuleById(const Model::GetMockRuleByIdRequest &request)const;
			void getMockRuleByIdAsync(const Model::GetMockRuleByIdRequest& request, const GetMockRuleByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMockRuleByIdOutcomeCallable getMockRuleByIdCallable(const Model::GetMockRuleByIdRequest& request) const;
			GetMockRuleByProviderAppIdOutcome getMockRuleByProviderAppId(const Model::GetMockRuleByProviderAppIdRequest &request)const;
			void getMockRuleByProviderAppIdAsync(const Model::GetMockRuleByProviderAppIdRequest& request, const GetMockRuleByProviderAppIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMockRuleByProviderAppIdOutcomeCallable getMockRuleByProviderAppIdCallable(const Model::GetMockRuleByProviderAppIdRequest& request) const;
			GetPackageStorageCredentialOutcome getPackageStorageCredential(const Model::GetPackageStorageCredentialRequest &request)const;
			void getPackageStorageCredentialAsync(const Model::GetPackageStorageCredentialRequest& request, const GetPackageStorageCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPackageStorageCredentialOutcomeCallable getPackageStorageCredentialCallable(const Model::GetPackageStorageCredentialRequest& request) const;
			GetScalingRulesOutcome getScalingRules(const Model::GetScalingRulesRequest &request)const;
			void getScalingRulesAsync(const Model::GetScalingRulesRequest& request, const GetScalingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetScalingRulesOutcomeCallable getScalingRulesCallable(const Model::GetScalingRulesRequest& request) const;
			GetSecureTokenOutcome getSecureToken(const Model::GetSecureTokenRequest &request)const;
			void getSecureTokenAsync(const Model::GetSecureTokenRequest& request, const GetSecureTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSecureTokenOutcomeCallable getSecureTokenCallable(const Model::GetSecureTokenRequest& request) const;
			GetServiceConsumersPageOutcome getServiceConsumersPage(const Model::GetServiceConsumersPageRequest &request)const;
			void getServiceConsumersPageAsync(const Model::GetServiceConsumersPageRequest& request, const GetServiceConsumersPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetServiceConsumersPageOutcomeCallable getServiceConsumersPageCallable(const Model::GetServiceConsumersPageRequest& request) const;
			GetServiceDetailOutcome getServiceDetail(const Model::GetServiceDetailRequest &request)const;
			void getServiceDetailAsync(const Model::GetServiceDetailRequest& request, const GetServiceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetServiceDetailOutcomeCallable getServiceDetailCallable(const Model::GetServiceDetailRequest& request) const;
			GetServiceListOutcome getServiceList(const Model::GetServiceListRequest &request)const;
			void getServiceListAsync(const Model::GetServiceListRequest& request, const GetServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetServiceListOutcomeCallable getServiceListCallable(const Model::GetServiceListRequest& request) const;
			GetServiceListPageOutcome getServiceListPage(const Model::GetServiceListPageRequest &request)const;
			void getServiceListPageAsync(const Model::GetServiceListPageRequest& request, const GetServiceListPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetServiceListPageOutcomeCallable getServiceListPageCallable(const Model::GetServiceListPageRequest& request) const;
			GetServiceMethodPageOutcome getServiceMethodPage(const Model::GetServiceMethodPageRequest &request)const;
			void getServiceMethodPageAsync(const Model::GetServiceMethodPageRequest& request, const GetServiceMethodPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetServiceMethodPageOutcomeCallable getServiceMethodPageCallable(const Model::GetServiceMethodPageRequest& request) const;
			GetServiceProvidersPageOutcome getServiceProvidersPage(const Model::GetServiceProvidersPageRequest &request)const;
			void getServiceProvidersPageAsync(const Model::GetServiceProvidersPageRequest& request, const GetServiceProvidersPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetServiceProvidersPageOutcomeCallable getServiceProvidersPageCallable(const Model::GetServiceProvidersPageRequest& request) const;
			GetSpringCloudTestMethodOutcome getSpringCloudTestMethod(const Model::GetSpringCloudTestMethodRequest &request)const;
			void getSpringCloudTestMethodAsync(const Model::GetSpringCloudTestMethodRequest& request, const GetSpringCloudTestMethodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSpringCloudTestMethodOutcomeCallable getSpringCloudTestMethodCallable(const Model::GetSpringCloudTestMethodRequest& request) const;
			GetSslCertificateListOutcome getSslCertificateList(const Model::GetSslCertificateListRequest &request)const;
			void getSslCertificateListAsync(const Model::GetSslCertificateListRequest& request, const GetSslCertificateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSslCertificateListOutcomeCallable getSslCertificateListCallable(const Model::GetSslCertificateListRequest& request) const;
			GetSubAccountInfoOutcome getSubAccountInfo(const Model::GetSubAccountInfoRequest &request)const;
			void getSubAccountInfoAsync(const Model::GetSubAccountInfoRequest& request, const GetSubAccountInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSubAccountInfoOutcomeCallable getSubAccountInfoCallable(const Model::GetSubAccountInfoRequest& request) const;
			GetSwimmingLaneOutcome getSwimmingLane(const Model::GetSwimmingLaneRequest &request)const;
			void getSwimmingLaneAsync(const Model::GetSwimmingLaneRequest& request, const GetSwimmingLaneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSwimmingLaneOutcomeCallable getSwimmingLaneCallable(const Model::GetSwimmingLaneRequest& request) const;
			GetWebContainerConfigOutcome getWebContainerConfig(const Model::GetWebContainerConfigRequest &request)const;
			void getWebContainerConfigAsync(const Model::GetWebContainerConfigRequest& request, const GetWebContainerConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWebContainerConfigOutcomeCallable getWebContainerConfigCallable(const Model::GetWebContainerConfigRequest& request) const;
			ImportK8sClusterOutcome importK8sCluster(const Model::ImportK8sClusterRequest &request)const;
			void importK8sClusterAsync(const Model::ImportK8sClusterRequest& request, const ImportK8sClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportK8sClusterOutcomeCallable importK8sClusterCallable(const Model::ImportK8sClusterRequest& request) const;
			InsertApplicationOutcome insertApplication(const Model::InsertApplicationRequest &request)const;
			void insertApplicationAsync(const Model::InsertApplicationRequest& request, const InsertApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InsertApplicationOutcomeCallable insertApplicationCallable(const Model::InsertApplicationRequest& request) const;
			InsertClusterOutcome insertCluster(const Model::InsertClusterRequest &request)const;
			void insertClusterAsync(const Model::InsertClusterRequest& request, const InsertClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InsertClusterOutcomeCallable insertClusterCallable(const Model::InsertClusterRequest& request) const;
			InsertClusterMemberOutcome insertClusterMember(const Model::InsertClusterMemberRequest &request)const;
			void insertClusterMemberAsync(const Model::InsertClusterMemberRequest& request, const InsertClusterMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InsertClusterMemberOutcomeCallable insertClusterMemberCallable(const Model::InsertClusterMemberRequest& request) const;
			InsertConfigCenterOutcome insertConfigCenter(const Model::InsertConfigCenterRequest &request)const;
			void insertConfigCenterAsync(const Model::InsertConfigCenterRequest& request, const InsertConfigCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InsertConfigCenterOutcomeCallable insertConfigCenterCallable(const Model::InsertConfigCenterRequest& request) const;
			InsertDegradeControlOutcome insertDegradeControl(const Model::InsertDegradeControlRequest &request)const;
			void insertDegradeControlAsync(const Model::InsertDegradeControlRequest& request, const InsertDegradeControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InsertDegradeControlOutcomeCallable insertDegradeControlCallable(const Model::InsertDegradeControlRequest& request) const;
			InsertDeployGroupOutcome insertDeployGroup(const Model::InsertDeployGroupRequest &request)const;
			void insertDeployGroupAsync(const Model::InsertDeployGroupRequest& request, const InsertDeployGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InsertDeployGroupOutcomeCallable insertDeployGroupCallable(const Model::InsertDeployGroupRequest& request) const;
			InsertFlowControlOutcome insertFlowControl(const Model::InsertFlowControlRequest &request)const;
			void insertFlowControlAsync(const Model::InsertFlowControlRequest& request, const InsertFlowControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InsertFlowControlOutcomeCallable insertFlowControlCallable(const Model::InsertFlowControlRequest& request) const;
			InsertK8sApplicationOutcome insertK8sApplication(const Model::InsertK8sApplicationRequest &request)const;
			void insertK8sApplicationAsync(const Model::InsertK8sApplicationRequest& request, const InsertK8sApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InsertK8sApplicationOutcomeCallable insertK8sApplicationCallable(const Model::InsertK8sApplicationRequest& request) const;
			InsertOrUpdateRegionOutcome insertOrUpdateRegion(const Model::InsertOrUpdateRegionRequest &request)const;
			void insertOrUpdateRegionAsync(const Model::InsertOrUpdateRegionRequest& request, const InsertOrUpdateRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InsertOrUpdateRegionOutcomeCallable insertOrUpdateRegionCallable(const Model::InsertOrUpdateRegionRequest& request) const;
			InsertRoleOutcome insertRole(const Model::InsertRoleRequest &request)const;
			void insertRoleAsync(const Model::InsertRoleRequest& request, const InsertRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InsertRoleOutcomeCallable insertRoleCallable(const Model::InsertRoleRequest& request) const;
			InsertServiceGroupOutcome insertServiceGroup(const Model::InsertServiceGroupRequest &request)const;
			void insertServiceGroupAsync(const Model::InsertServiceGroupRequest& request, const InsertServiceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InsertServiceGroupOutcomeCallable insertServiceGroupCallable(const Model::InsertServiceGroupRequest& request) const;
			InsertSwimmingLaneOutcome insertSwimmingLane(const Model::InsertSwimmingLaneRequest &request)const;
			void insertSwimmingLaneAsync(const Model::InsertSwimmingLaneRequest& request, const InsertSwimmingLaneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InsertSwimmingLaneOutcomeCallable insertSwimmingLaneCallable(const Model::InsertSwimmingLaneRequest& request) const;
			InsertSwimmingLaneGroupOutcome insertSwimmingLaneGroup(const Model::InsertSwimmingLaneGroupRequest &request)const;
			void insertSwimmingLaneGroupAsync(const Model::InsertSwimmingLaneGroupRequest& request, const InsertSwimmingLaneGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InsertSwimmingLaneGroupOutcomeCallable insertSwimmingLaneGroupCallable(const Model::InsertSwimmingLaneGroupRequest& request) const;
			InstallAgentOutcome installAgent(const Model::InstallAgentRequest &request)const;
			void installAgentAsync(const Model::InstallAgentRequest& request, const InstallAgentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InstallAgentOutcomeCallable installAgentCallable(const Model::InstallAgentRequest& request) const;
			ListAliyunRegionOutcome listAliyunRegion(const Model::ListAliyunRegionRequest &request)const;
			void listAliyunRegionAsync(const Model::ListAliyunRegionRequest& request, const ListAliyunRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAliyunRegionOutcomeCallable listAliyunRegionCallable(const Model::ListAliyunRegionRequest& request) const;
			ListApplicationOutcome listApplication(const Model::ListApplicationRequest &request)const;
			void listApplicationAsync(const Model::ListApplicationRequest& request, const ListApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApplicationOutcomeCallable listApplicationCallable(const Model::ListApplicationRequest& request) const;
			ListApplicationEcuOutcome listApplicationEcu(const Model::ListApplicationEcuRequest &request)const;
			void listApplicationEcuAsync(const Model::ListApplicationEcuRequest& request, const ListApplicationEcuAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApplicationEcuOutcomeCallable listApplicationEcuCallable(const Model::ListApplicationEcuRequest& request) const;
			ListAuthorityOutcome listAuthority(const Model::ListAuthorityRequest &request)const;
			void listAuthorityAsync(const Model::ListAuthorityRequest& request, const ListAuthorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAuthorityOutcomeCallable listAuthorityCallable(const Model::ListAuthorityRequest& request) const;
			ListBuildPackOutcome listBuildPack(const Model::ListBuildPackRequest &request)const;
			void listBuildPackAsync(const Model::ListBuildPackRequest& request, const ListBuildPackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListBuildPackOutcomeCallable listBuildPackCallable(const Model::ListBuildPackRequest& request) const;
			ListCSBGatewayOutcome listCSBGateway(const Model::ListCSBGatewayRequest &request)const;
			void listCSBGatewayAsync(const Model::ListCSBGatewayRequest& request, const ListCSBGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCSBGatewayOutcomeCallable listCSBGatewayCallable(const Model::ListCSBGatewayRequest& request) const;
			ListChildrenStacksOutcome listChildrenStacks(const Model::ListChildrenStacksRequest &request)const;
			void listChildrenStacksAsync(const Model::ListChildrenStacksRequest& request, const ListChildrenStacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListChildrenStacksOutcomeCallable listChildrenStacksCallable(const Model::ListChildrenStacksRequest& request) const;
			ListClusterOutcome listCluster(const Model::ListClusterRequest &request)const;
			void listClusterAsync(const Model::ListClusterRequest& request, const ListClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterOutcomeCallable listClusterCallable(const Model::ListClusterRequest& request) const;
			ListClusterMembersOutcome listClusterMembers(const Model::ListClusterMembersRequest &request)const;
			void listClusterMembersAsync(const Model::ListClusterMembersRequest& request, const ListClusterMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterMembersOutcomeCallable listClusterMembersCallable(const Model::ListClusterMembersRequest& request) const;
			ListComponentsOutcome listComponents(const Model::ListComponentsRequest &request)const;
			void listComponentsAsync(const Model::ListComponentsRequest& request, const ListComponentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListComponentsOutcomeCallable listComponentsCallable(const Model::ListComponentsRequest& request) const;
			ListConfigCentersOutcome listConfigCenters(const Model::ListConfigCentersRequest &request)const;
			void listConfigCentersAsync(const Model::ListConfigCentersRequest& request, const ListConfigCentersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListConfigCentersOutcomeCallable listConfigCentersCallable(const Model::ListConfigCentersRequest& request) const;
			ListConsumedServicesOutcome listConsumedServices(const Model::ListConsumedServicesRequest &request)const;
			void listConsumedServicesAsync(const Model::ListConsumedServicesRequest& request, const ListConsumedServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListConsumedServicesOutcomeCallable listConsumedServicesCallable(const Model::ListConsumedServicesRequest& request) const;
			ListConvertableEcuOutcome listConvertableEcu(const Model::ListConvertableEcuRequest &request)const;
			void listConvertableEcuAsync(const Model::ListConvertableEcuRequest& request, const ListConvertableEcuAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListConvertableEcuOutcomeCallable listConvertableEcuCallable(const Model::ListConvertableEcuRequest& request) const;
			ListDegradeControlsOutcome listDegradeControls(const Model::ListDegradeControlsRequest &request)const;
			void listDegradeControlsAsync(const Model::ListDegradeControlsRequest& request, const ListDegradeControlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDegradeControlsOutcomeCallable listDegradeControlsCallable(const Model::ListDegradeControlsRequest& request) const;
			ListDeployGroupOutcome listDeployGroup(const Model::ListDeployGroupRequest &request)const;
			void listDeployGroupAsync(const Model::ListDeployGroupRequest& request, const ListDeployGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDeployGroupOutcomeCallable listDeployGroupCallable(const Model::ListDeployGroupRequest& request) const;
			ListEcsNotInClusterOutcome listEcsNotInCluster(const Model::ListEcsNotInClusterRequest &request)const;
			void listEcsNotInClusterAsync(const Model::ListEcsNotInClusterRequest& request, const ListEcsNotInClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEcsNotInClusterOutcomeCallable listEcsNotInClusterCallable(const Model::ListEcsNotInClusterRequest& request) const;
			ListEcuByRegionOutcome listEcuByRegion(const Model::ListEcuByRegionRequest &request)const;
			void listEcuByRegionAsync(const Model::ListEcuByRegionRequest& request, const ListEcuByRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEcuByRegionOutcomeCallable listEcuByRegionCallable(const Model::ListEcuByRegionRequest& request) const;
			ListFlowControlsOutcome listFlowControls(const Model::ListFlowControlsRequest &request)const;
			void listFlowControlsAsync(const Model::ListFlowControlsRequest& request, const ListFlowControlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowControlsOutcomeCallable listFlowControlsCallable(const Model::ListFlowControlsRequest& request) const;
			ListHistoryDeployVersionOutcome listHistoryDeployVersion(const Model::ListHistoryDeployVersionRequest &request)const;
			void listHistoryDeployVersionAsync(const Model::ListHistoryDeployVersionRequest& request, const ListHistoryDeployVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListHistoryDeployVersionOutcomeCallable listHistoryDeployVersionCallable(const Model::ListHistoryDeployVersionRequest& request) const;
			ListK8sConfigMapsOutcome listK8sConfigMaps(const Model::ListK8sConfigMapsRequest &request)const;
			void listK8sConfigMapsAsync(const Model::ListK8sConfigMapsRequest& request, const ListK8sConfigMapsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListK8sConfigMapsOutcomeCallable listK8sConfigMapsCallable(const Model::ListK8sConfigMapsRequest& request) const;
			ListK8sIngressRulesOutcome listK8sIngressRules(const Model::ListK8sIngressRulesRequest &request)const;
			void listK8sIngressRulesAsync(const Model::ListK8sIngressRulesRequest& request, const ListK8sIngressRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListK8sIngressRulesOutcomeCallable listK8sIngressRulesCallable(const Model::ListK8sIngressRulesRequest& request) const;
			ListK8sPvcOutcome listK8sPvc(const Model::ListK8sPvcRequest &request)const;
			void listK8sPvcAsync(const Model::ListK8sPvcRequest& request, const ListK8sPvcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListK8sPvcOutcomeCallable listK8sPvcCallable(const Model::ListK8sPvcRequest& request) const;
			ListK8sSecretsOutcome listK8sSecrets(const Model::ListK8sSecretsRequest &request)const;
			void listK8sSecretsAsync(const Model::ListK8sSecretsRequest& request, const ListK8sSecretsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListK8sSecretsOutcomeCallable listK8sSecretsCallable(const Model::ListK8sSecretsRequest& request) const;
			ListMethodsOutcome listMethods(const Model::ListMethodsRequest &request)const;
			void listMethodsAsync(const Model::ListMethodsRequest& request, const ListMethodsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMethodsOutcomeCallable listMethodsCallable(const Model::ListMethodsRequest& request) const;
			ListOperationLogsOutcome listOperationLogs(const Model::ListOperationLogsRequest &request)const;
			void listOperationLogsAsync(const Model::ListOperationLogsRequest& request, const ListOperationLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListOperationLogsOutcomeCallable listOperationLogsCallable(const Model::ListOperationLogsRequest& request) const;
			ListPublishedServicesOutcome listPublishedServices(const Model::ListPublishedServicesRequest &request)const;
			void listPublishedServicesAsync(const Model::ListPublishedServicesRequest& request, const ListPublishedServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPublishedServicesOutcomeCallable listPublishedServicesCallable(const Model::ListPublishedServicesRequest& request) const;
			ListRecentChangeOrderOutcome listRecentChangeOrder(const Model::ListRecentChangeOrderRequest &request)const;
			void listRecentChangeOrderAsync(const Model::ListRecentChangeOrderRequest& request, const ListRecentChangeOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRecentChangeOrderOutcomeCallable listRecentChangeOrderCallable(const Model::ListRecentChangeOrderRequest& request) const;
			ListResourceGroupOutcome listResourceGroup(const Model::ListResourceGroupRequest &request)const;
			void listResourceGroupAsync(const Model::ListResourceGroupRequest& request, const ListResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListResourceGroupOutcomeCallable listResourceGroupCallable(const Model::ListResourceGroupRequest& request) const;
			ListRoleOutcome listRole(const Model::ListRoleRequest &request)const;
			void listRoleAsync(const Model::ListRoleRequest& request, const ListRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRoleOutcomeCallable listRoleCallable(const Model::ListRoleRequest& request) const;
			ListRootStacksOutcome listRootStacks(const Model::ListRootStacksRequest &request)const;
			void listRootStacksAsync(const Model::ListRootStacksRequest& request, const ListRootStacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListRootStacksOutcomeCallable listRootStacksCallable(const Model::ListRootStacksRequest& request) const;
			ListScaleOutEcuOutcome listScaleOutEcu(const Model::ListScaleOutEcuRequest &request)const;
			void listScaleOutEcuAsync(const Model::ListScaleOutEcuRequest& request, const ListScaleOutEcuAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListScaleOutEcuOutcomeCallable listScaleOutEcuCallable(const Model::ListScaleOutEcuRequest& request) const;
			ListServiceGroupsOutcome listServiceGroups(const Model::ListServiceGroupsRequest &request)const;
			void listServiceGroupsAsync(const Model::ListServiceGroupsRequest& request, const ListServiceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListServiceGroupsOutcomeCallable listServiceGroupsCallable(const Model::ListServiceGroupsRequest& request) const;
			ListSlbOutcome listSlb(const Model::ListSlbRequest &request)const;
			void listSlbAsync(const Model::ListSlbRequest& request, const ListSlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSlbOutcomeCallable listSlbCallable(const Model::ListSlbRequest& request) const;
			ListStatusOutcome listStatus(const Model::ListStatusRequest &request)const;
			void listStatusAsync(const Model::ListStatusRequest& request, const ListStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListStatusOutcomeCallable listStatusCallable(const Model::ListStatusRequest& request) const;
			ListSubAccountOutcome listSubAccount(const Model::ListSubAccountRequest &request)const;
			void listSubAccountAsync(const Model::ListSubAccountRequest& request, const ListSubAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSubAccountOutcomeCallable listSubAccountCallable(const Model::ListSubAccountRequest& request) const;
			ListSwimmingLaneOutcome listSwimmingLane(const Model::ListSwimmingLaneRequest &request)const;
			void listSwimmingLaneAsync(const Model::ListSwimmingLaneRequest& request, const ListSwimmingLaneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSwimmingLaneOutcomeCallable listSwimmingLaneCallable(const Model::ListSwimmingLaneRequest& request) const;
			ListSwimmingLaneGroupOutcome listSwimmingLaneGroup(const Model::ListSwimmingLaneGroupRequest &request)const;
			void listSwimmingLaneGroupAsync(const Model::ListSwimmingLaneGroupRequest& request, const ListSwimmingLaneGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSwimmingLaneGroupOutcomeCallable listSwimmingLaneGroupCallable(const Model::ListSwimmingLaneGroupRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ListUserDefineRegionOutcome listUserDefineRegion(const Model::ListUserDefineRegionRequest &request)const;
			void listUserDefineRegionAsync(const Model::ListUserDefineRegionRequest& request, const ListUserDefineRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListUserDefineRegionOutcomeCallable listUserDefineRegionCallable(const Model::ListUserDefineRegionRequest& request) const;
			ListVpcOutcome listVpc(const Model::ListVpcRequest &request)const;
			void listVpcAsync(const Model::ListVpcRequest& request, const ListVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListVpcOutcomeCallable listVpcCallable(const Model::ListVpcRequest& request) const;
			MigrateEcuOutcome migrateEcu(const Model::MigrateEcuRequest &request)const;
			void migrateEcuAsync(const Model::MigrateEcuRequest& request, const MigrateEcuAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MigrateEcuOutcomeCallable migrateEcuCallable(const Model::MigrateEcuRequest& request) const;
			ModifyScalingRuleOutcome modifyScalingRule(const Model::ModifyScalingRuleRequest &request)const;
			void modifyScalingRuleAsync(const Model::ModifyScalingRuleRequest& request, const ModifyScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyScalingRuleOutcomeCallable modifyScalingRuleCallable(const Model::ModifyScalingRuleRequest& request) const;
			QueryApplicationStatusOutcome queryApplicationStatus(const Model::QueryApplicationStatusRequest &request)const;
			void queryApplicationStatusAsync(const Model::QueryApplicationStatusRequest& request, const QueryApplicationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryApplicationStatusOutcomeCallable queryApplicationStatusCallable(const Model::QueryApplicationStatusRequest& request) const;
			QueryConfigCenterOutcome queryConfigCenter(const Model::QueryConfigCenterRequest &request)const;
			void queryConfigCenterAsync(const Model::QueryConfigCenterRequest& request, const QueryConfigCenterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryConfigCenterOutcomeCallable queryConfigCenterCallable(const Model::QueryConfigCenterRequest& request) const;
			QueryEccInfoOutcome queryEccInfo(const Model::QueryEccInfoRequest &request)const;
			void queryEccInfoAsync(const Model::QueryEccInfoRequest& request, const QueryEccInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryEccInfoOutcomeCallable queryEccInfoCallable(const Model::QueryEccInfoRequest& request) const;
			QueryK8sClusterLogProjectInfoOutcome queryK8sClusterLogProjectInfo(const Model::QueryK8sClusterLogProjectInfoRequest &request)const;
			void queryK8sClusterLogProjectInfoAsync(const Model::QueryK8sClusterLogProjectInfoRequest& request, const QueryK8sClusterLogProjectInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryK8sClusterLogProjectInfoOutcomeCallable queryK8sClusterLogProjectInfoCallable(const Model::QueryK8sClusterLogProjectInfoRequest& request) const;
			QueryMigrateEcuListOutcome queryMigrateEcuList(const Model::QueryMigrateEcuListRequest &request)const;
			void queryMigrateEcuListAsync(const Model::QueryMigrateEcuListRequest& request, const QueryMigrateEcuListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMigrateEcuListOutcomeCallable queryMigrateEcuListCallable(const Model::QueryMigrateEcuListRequest& request) const;
			QueryMigrateRegionListOutcome queryMigrateRegionList(const Model::QueryMigrateRegionListRequest &request)const;
			void queryMigrateRegionListAsync(const Model::QueryMigrateRegionListRequest& request, const QueryMigrateRegionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMigrateRegionListOutcomeCallable queryMigrateRegionListCallable(const Model::QueryMigrateRegionListRequest& request) const;
			QueryRegionConfigOutcome queryRegionConfig(const Model::QueryRegionConfigRequest &request)const;
			void queryRegionConfigAsync(const Model::QueryRegionConfigRequest& request, const QueryRegionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRegionConfigOutcomeCallable queryRegionConfigCallable(const Model::QueryRegionConfigRequest& request) const;
			QueryServiceTimeConfigOutcome queryServiceTimeConfig(const Model::QueryServiceTimeConfigRequest &request)const;
			void queryServiceTimeConfigAsync(const Model::QueryServiceTimeConfigRequest& request, const QueryServiceTimeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryServiceTimeConfigOutcomeCallable queryServiceTimeConfigCallable(const Model::QueryServiceTimeConfigRequest& request) const;
			QuerySlsLogStoreListOutcome querySlsLogStoreList(const Model::QuerySlsLogStoreListRequest &request)const;
			void querySlsLogStoreListAsync(const Model::QuerySlsLogStoreListRequest& request, const QuerySlsLogStoreListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySlsLogStoreListOutcomeCallable querySlsLogStoreListCallable(const Model::QuerySlsLogStoreListRequest& request) const;
			RemoveMockRuleOutcome removeMockRule(const Model::RemoveMockRuleRequest &request)const;
			void removeMockRuleAsync(const Model::RemoveMockRuleRequest& request, const RemoveMockRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveMockRuleOutcomeCallable removeMockRuleCallable(const Model::RemoveMockRuleRequest& request) const;
			ResetApplicationOutcome resetApplication(const Model::ResetApplicationRequest &request)const;
			void resetApplicationAsync(const Model::ResetApplicationRequest& request, const ResetApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetApplicationOutcomeCallable resetApplicationCallable(const Model::ResetApplicationRequest& request) const;
			RestartApplicationOutcome restartApplication(const Model::RestartApplicationRequest &request)const;
			void restartApplicationAsync(const Model::RestartApplicationRequest& request, const RestartApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartApplicationOutcomeCallable restartApplicationCallable(const Model::RestartApplicationRequest& request) const;
			RestartK8sApplicationOutcome restartK8sApplication(const Model::RestartK8sApplicationRequest &request)const;
			void restartK8sApplicationAsync(const Model::RestartK8sApplicationRequest& request, const RestartK8sApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartK8sApplicationOutcomeCallable restartK8sApplicationCallable(const Model::RestartK8sApplicationRequest& request) const;
			RetryChangeOrderTaskOutcome retryChangeOrderTask(const Model::RetryChangeOrderTaskRequest &request)const;
			void retryChangeOrderTaskAsync(const Model::RetryChangeOrderTaskRequest& request, const RetryChangeOrderTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RetryChangeOrderTaskOutcomeCallable retryChangeOrderTaskCallable(const Model::RetryChangeOrderTaskRequest& request) const;
			RollbackApplicationOutcome rollbackApplication(const Model::RollbackApplicationRequest &request)const;
			void rollbackApplicationAsync(const Model::RollbackApplicationRequest& request, const RollbackApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RollbackApplicationOutcomeCallable rollbackApplicationCallable(const Model::RollbackApplicationRequest& request) const;
			RollbackChangeOrderOutcome rollbackChangeOrder(const Model::RollbackChangeOrderRequest &request)const;
			void rollbackChangeOrderAsync(const Model::RollbackChangeOrderRequest& request, const RollbackChangeOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RollbackChangeOrderOutcomeCallable rollbackChangeOrderCallable(const Model::RollbackChangeOrderRequest& request) const;
			ScaleInApplicationOutcome scaleInApplication(const Model::ScaleInApplicationRequest &request)const;
			void scaleInApplicationAsync(const Model::ScaleInApplicationRequest& request, const ScaleInApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ScaleInApplicationOutcomeCallable scaleInApplicationCallable(const Model::ScaleInApplicationRequest& request) const;
			ScaleK8sApplicationOutcome scaleK8sApplication(const Model::ScaleK8sApplicationRequest &request)const;
			void scaleK8sApplicationAsync(const Model::ScaleK8sApplicationRequest& request, const ScaleK8sApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ScaleK8sApplicationOutcomeCallable scaleK8sApplicationCallable(const Model::ScaleK8sApplicationRequest& request) const;
			ScaleOutApplicationOutcome scaleOutApplication(const Model::ScaleOutApplicationRequest &request)const;
			void scaleOutApplicationAsync(const Model::ScaleOutApplicationRequest& request, const ScaleOutApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ScaleOutApplicationOutcomeCallable scaleOutApplicationCallable(const Model::ScaleOutApplicationRequest& request) const;
			ScaleoutApplicationWithNewInstancesOutcome scaleoutApplicationWithNewInstances(const Model::ScaleoutApplicationWithNewInstancesRequest &request)const;
			void scaleoutApplicationWithNewInstancesAsync(const Model::ScaleoutApplicationWithNewInstancesRequest& request, const ScaleoutApplicationWithNewInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ScaleoutApplicationWithNewInstancesOutcomeCallable scaleoutApplicationWithNewInstancesCallable(const Model::ScaleoutApplicationWithNewInstancesRequest& request) const;
			StartApplicationOutcome startApplication(const Model::StartApplicationRequest &request)const;
			void startApplicationAsync(const Model::StartApplicationRequest& request, const StartApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartApplicationOutcomeCallable startApplicationCallable(const Model::StartApplicationRequest& request) const;
			StartK8sApplicationOutcome startK8sApplication(const Model::StartK8sApplicationRequest &request)const;
			void startK8sApplicationAsync(const Model::StartK8sApplicationRequest& request, const StartK8sApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartK8sApplicationOutcomeCallable startK8sApplicationCallable(const Model::StartK8sApplicationRequest& request) const;
			StopApplicationOutcome stopApplication(const Model::StopApplicationRequest &request)const;
			void stopApplicationAsync(const Model::StopApplicationRequest& request, const StopApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopApplicationOutcomeCallable stopApplicationCallable(const Model::StopApplicationRequest& request) const;
			StopK8sApplicationOutcome stopK8sApplication(const Model::StopK8sApplicationRequest &request)const;
			void stopK8sApplicationAsync(const Model::StopK8sApplicationRequest& request, const StopK8sApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopK8sApplicationOutcomeCallable stopK8sApplicationCallable(const Model::StopK8sApplicationRequest& request) const;
			SwitchAdvancedMonitoringOutcome switchAdvancedMonitoring(const Model::SwitchAdvancedMonitoringRequest &request)const;
			void switchAdvancedMonitoringAsync(const Model::SwitchAdvancedMonitoringRequest& request, const SwitchAdvancedMonitoringAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchAdvancedMonitoringOutcomeCallable switchAdvancedMonitoringCallable(const Model::SwitchAdvancedMonitoringRequest& request) const;
			SynchronizeResourceOutcome synchronizeResource(const Model::SynchronizeResourceRequest &request)const;
			void synchronizeResourceAsync(const Model::SynchronizeResourceRequest& request, const SynchronizeResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SynchronizeResourceOutcomeCallable synchronizeResourceCallable(const Model::SynchronizeResourceRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			ToggleGrayIngressOutcome toggleGrayIngress(const Model::ToggleGrayIngressRequest &request)const;
			void toggleGrayIngressAsync(const Model::ToggleGrayIngressRequest& request, const ToggleGrayIngressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ToggleGrayIngressOutcomeCallable toggleGrayIngressCallable(const Model::ToggleGrayIngressRequest& request) const;
			TransformClusterMemberOutcome transformClusterMember(const Model::TransformClusterMemberRequest &request)const;
			void transformClusterMemberAsync(const Model::TransformClusterMemberRequest& request, const TransformClusterMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TransformClusterMemberOutcomeCallable transformClusterMemberCallable(const Model::TransformClusterMemberRequest& request) const;
			UnbindK8sSlbOutcome unbindK8sSlb(const Model::UnbindK8sSlbRequest &request)const;
			void unbindK8sSlbAsync(const Model::UnbindK8sSlbRequest& request, const UnbindK8sSlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindK8sSlbOutcomeCallable unbindK8sSlbCallable(const Model::UnbindK8sSlbRequest& request) const;
			UnbindSlbOutcome unbindSlb(const Model::UnbindSlbRequest &request)const;
			void unbindSlbAsync(const Model::UnbindSlbRequest& request, const UnbindSlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindSlbOutcomeCallable unbindSlbCallable(const Model::UnbindSlbRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpdateAccountInfoOutcome updateAccountInfo(const Model::UpdateAccountInfoRequest &request)const;
			void updateAccountInfoAsync(const Model::UpdateAccountInfoRequest& request, const UpdateAccountInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAccountInfoOutcomeCallable updateAccountInfoCallable(const Model::UpdateAccountInfoRequest& request) const;
			UpdateApplicationBaseInfoOutcome updateApplicationBaseInfo(const Model::UpdateApplicationBaseInfoRequest &request)const;
			void updateApplicationBaseInfoAsync(const Model::UpdateApplicationBaseInfoRequest& request, const UpdateApplicationBaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateApplicationBaseInfoOutcomeCallable updateApplicationBaseInfoCallable(const Model::UpdateApplicationBaseInfoRequest& request) const;
			UpdateApplicationScalingRuleOutcome updateApplicationScalingRule(const Model::UpdateApplicationScalingRuleRequest &request)const;
			void updateApplicationScalingRuleAsync(const Model::UpdateApplicationScalingRuleRequest& request, const UpdateApplicationScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateApplicationScalingRuleOutcomeCallable updateApplicationScalingRuleCallable(const Model::UpdateApplicationScalingRuleRequest& request) const;
			UpdateContainerOutcome updateContainer(const Model::UpdateContainerRequest &request)const;
			void updateContainerAsync(const Model::UpdateContainerRequest& request, const UpdateContainerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateContainerOutcomeCallable updateContainerCallable(const Model::UpdateContainerRequest& request) const;
			UpdateContainerConfigurationOutcome updateContainerConfiguration(const Model::UpdateContainerConfigurationRequest &request)const;
			void updateContainerConfigurationAsync(const Model::UpdateContainerConfigurationRequest& request, const UpdateContainerConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateContainerConfigurationOutcomeCallable updateContainerConfigurationCallable(const Model::UpdateContainerConfigurationRequest& request) const;
			UpdateDegradeControlOutcome updateDegradeControl(const Model::UpdateDegradeControlRequest &request)const;
			void updateDegradeControlAsync(const Model::UpdateDegradeControlRequest& request, const UpdateDegradeControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateDegradeControlOutcomeCallable updateDegradeControlCallable(const Model::UpdateDegradeControlRequest& request) const;
			UpdateEnvAppGroupOutcome updateEnvAppGroup(const Model::UpdateEnvAppGroupRequest &request)const;
			void updateEnvAppGroupAsync(const Model::UpdateEnvAppGroupRequest& request, const UpdateEnvAppGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEnvAppGroupOutcomeCallable updateEnvAppGroupCallable(const Model::UpdateEnvAppGroupRequest& request) const;
			UpdateEnvHttpTrafficControlOutcome updateEnvHttpTrafficControl(const Model::UpdateEnvHttpTrafficControlRequest &request)const;
			void updateEnvHttpTrafficControlAsync(const Model::UpdateEnvHttpTrafficControlRequest& request, const UpdateEnvHttpTrafficControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEnvHttpTrafficControlOutcomeCallable updateEnvHttpTrafficControlCallable(const Model::UpdateEnvHttpTrafficControlRequest& request) const;
			UpdateFlowControlOutcome updateFlowControl(const Model::UpdateFlowControlRequest &request)const;
			void updateFlowControlAsync(const Model::UpdateFlowControlRequest& request, const UpdateFlowControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateFlowControlOutcomeCallable updateFlowControlCallable(const Model::UpdateFlowControlRequest& request) const;
			UpdateHealthCheckUrlOutcome updateHealthCheckUrl(const Model::UpdateHealthCheckUrlRequest &request)const;
			void updateHealthCheckUrlAsync(const Model::UpdateHealthCheckUrlRequest& request, const UpdateHealthCheckUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateHealthCheckUrlOutcomeCallable updateHealthCheckUrlCallable(const Model::UpdateHealthCheckUrlRequest& request) const;
			UpdateHookConfigurationOutcome updateHookConfiguration(const Model::UpdateHookConfigurationRequest &request)const;
			void updateHookConfigurationAsync(const Model::UpdateHookConfigurationRequest& request, const UpdateHookConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateHookConfigurationOutcomeCallable updateHookConfigurationCallable(const Model::UpdateHookConfigurationRequest& request) const;
			UpdateJvmConfigurationOutcome updateJvmConfiguration(const Model::UpdateJvmConfigurationRequest &request)const;
			void updateJvmConfigurationAsync(const Model::UpdateJvmConfigurationRequest& request, const UpdateJvmConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateJvmConfigurationOutcomeCallable updateJvmConfigurationCallable(const Model::UpdateJvmConfigurationRequest& request) const;
			UpdateK8sApplicationBaseInfoOutcome updateK8sApplicationBaseInfo(const Model::UpdateK8sApplicationBaseInfoRequest &request)const;
			void updateK8sApplicationBaseInfoAsync(const Model::UpdateK8sApplicationBaseInfoRequest& request, const UpdateK8sApplicationBaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateK8sApplicationBaseInfoOutcomeCallable updateK8sApplicationBaseInfoCallable(const Model::UpdateK8sApplicationBaseInfoRequest& request) const;
			UpdateK8sApplicationConfigOutcome updateK8sApplicationConfig(const Model::UpdateK8sApplicationConfigRequest &request)const;
			void updateK8sApplicationConfigAsync(const Model::UpdateK8sApplicationConfigRequest& request, const UpdateK8sApplicationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateK8sApplicationConfigOutcomeCallable updateK8sApplicationConfigCallable(const Model::UpdateK8sApplicationConfigRequest& request) const;
			UpdateK8sConfigMapOutcome updateK8sConfigMap(const Model::UpdateK8sConfigMapRequest &request)const;
			void updateK8sConfigMapAsync(const Model::UpdateK8sConfigMapRequest& request, const UpdateK8sConfigMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateK8sConfigMapOutcomeCallable updateK8sConfigMapCallable(const Model::UpdateK8sConfigMapRequest& request) const;
			UpdateK8sIngressRuleOutcome updateK8sIngressRule(const Model::UpdateK8sIngressRuleRequest &request)const;
			void updateK8sIngressRuleAsync(const Model::UpdateK8sIngressRuleRequest& request, const UpdateK8sIngressRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateK8sIngressRuleOutcomeCallable updateK8sIngressRuleCallable(const Model::UpdateK8sIngressRuleRequest& request) const;
			UpdateK8sResourceOutcome updateK8sResource(const Model::UpdateK8sResourceRequest &request)const;
			void updateK8sResourceAsync(const Model::UpdateK8sResourceRequest& request, const UpdateK8sResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateK8sResourceOutcomeCallable updateK8sResourceCallable(const Model::UpdateK8sResourceRequest& request) const;
			UpdateK8sSecretOutcome updateK8sSecret(const Model::UpdateK8sSecretRequest &request)const;
			void updateK8sSecretAsync(const Model::UpdateK8sSecretRequest& request, const UpdateK8sSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateK8sSecretOutcomeCallable updateK8sSecretCallable(const Model::UpdateK8sSecretRequest& request) const;
			UpdateK8sServiceOutcome updateK8sService(const Model::UpdateK8sServiceRequest &request)const;
			void updateK8sServiceAsync(const Model::UpdateK8sServiceRequest& request, const UpdateK8sServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateK8sServiceOutcomeCallable updateK8sServiceCallable(const Model::UpdateK8sServiceRequest& request) const;
			UpdateK8sSlbOutcome updateK8sSlb(const Model::UpdateK8sSlbRequest &request)const;
			void updateK8sSlbAsync(const Model::UpdateK8sSlbRequest& request, const UpdateK8sSlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateK8sSlbOutcomeCallable updateK8sSlbCallable(const Model::UpdateK8sSlbRequest& request) const;
			UpdateLocalitySettingOutcome updateLocalitySetting(const Model::UpdateLocalitySettingRequest &request)const;
			void updateLocalitySettingAsync(const Model::UpdateLocalitySettingRequest& request, const UpdateLocalitySettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateLocalitySettingOutcomeCallable updateLocalitySettingCallable(const Model::UpdateLocalitySettingRequest& request) const;
			UpdateMockRuleOutcome updateMockRule(const Model::UpdateMockRuleRequest &request)const;
			void updateMockRuleAsync(const Model::UpdateMockRuleRequest& request, const UpdateMockRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMockRuleOutcomeCallable updateMockRuleCallable(const Model::UpdateMockRuleRequest& request) const;
			UpdateRoleOutcome updateRole(const Model::UpdateRoleRequest &request)const;
			void updateRoleAsync(const Model::UpdateRoleRequest& request, const UpdateRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateRoleOutcomeCallable updateRoleCallable(const Model::UpdateRoleRequest& request) const;
			UpdateSlsLogStoreOutcome updateSlsLogStore(const Model::UpdateSlsLogStoreRequest &request)const;
			void updateSlsLogStoreAsync(const Model::UpdateSlsLogStoreRequest& request, const UpdateSlsLogStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSlsLogStoreOutcomeCallable updateSlsLogStoreCallable(const Model::UpdateSlsLogStoreRequest& request) const;
			UpdateSwimmingLaneOutcome updateSwimmingLane(const Model::UpdateSwimmingLaneRequest &request)const;
			void updateSwimmingLaneAsync(const Model::UpdateSwimmingLaneRequest& request, const UpdateSwimmingLaneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSwimmingLaneOutcomeCallable updateSwimmingLaneCallable(const Model::UpdateSwimmingLaneRequest& request) const;
			UpdateSwimmingLaneGroupOutcome updateSwimmingLaneGroup(const Model::UpdateSwimmingLaneGroupRequest &request)const;
			void updateSwimmingLaneGroupAsync(const Model::UpdateSwimmingLaneGroupRequest& request, const UpdateSwimmingLaneGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSwimmingLaneGroupOutcomeCallable updateSwimmingLaneGroupCallable(const Model::UpdateSwimmingLaneGroupRequest& request) const;
			UpdateSwimmingLanePriorityOutcome updateSwimmingLanePriority(const Model::UpdateSwimmingLanePriorityRequest &request)const;
			void updateSwimmingLanePriorityAsync(const Model::UpdateSwimmingLanePriorityRequest& request, const UpdateSwimmingLanePriorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSwimmingLanePriorityOutcomeCallable updateSwimmingLanePriorityCallable(const Model::UpdateSwimmingLanePriorityRequest& request) const;
			UppateEnvHsfTrafficControlOutcome uppateEnvHsfTrafficControl(const Model::UppateEnvHsfTrafficControlRequest &request)const;
			void uppateEnvHsfTrafficControlAsync(const Model::UppateEnvHsfTrafficControlRequest& request, const UppateEnvHsfTrafficControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UppateEnvHsfTrafficControlOutcomeCallable uppateEnvHsfTrafficControlCallable(const Model::UppateEnvHsfTrafficControlRequest& request) const;
			ValidateK8sResourceOutcome validateK8sResource(const Model::ValidateK8sResourceRequest &request)const;
			void validateK8sResourceAsync(const Model::ValidateK8sResourceRequest& request, const ValidateK8sResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ValidateK8sResourceOutcomeCallable validateK8sResourceCallable(const Model::ValidateK8sResourceRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_EDAS_EDASCLIENT_H_
