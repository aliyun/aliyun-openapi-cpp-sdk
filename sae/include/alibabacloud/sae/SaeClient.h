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

#ifndef ALIBABACLOUD_SAE_SAECLIENT_H_
#define ALIBABACLOUD_SAE_SAECLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "SaeExport.h"
#include "model/AbortAndRollbackChangeOrderRequest.h"
#include "model/AbortAndRollbackChangeOrderResult.h"
#include "model/AbortChangeOrderRequest.h"
#include "model/AbortChangeOrderResult.h"
#include "model/BatchStartApplicationsRequest.h"
#include "model/BatchStartApplicationsResult.h"
#include "model/BatchStopApplicationsRequest.h"
#include "model/BatchStopApplicationsResult.h"
#include "model/BindSlbRequest.h"
#include "model/BindSlbResult.h"
#include "model/ConfirmPipelineBatchRequest.h"
#include "model/ConfirmPipelineBatchResult.h"
#include "model/CreateApplicationRequest.h"
#include "model/CreateApplicationResult.h"
#include "model/CreateApplicationScalingRuleRequest.h"
#include "model/CreateApplicationScalingRuleResult.h"
#include "model/CreateConfigMapRequest.h"
#include "model/CreateConfigMapResult.h"
#include "model/CreateGreyTagRouteRequest.h"
#include "model/CreateGreyTagRouteResult.h"
#include "model/CreateIngressRequest.h"
#include "model/CreateIngressResult.h"
#include "model/CreateJobRequest.h"
#include "model/CreateJobResult.h"
#include "model/CreateNamespaceRequest.h"
#include "model/CreateNamespaceResult.h"
#include "model/CreateSecretRequest.h"
#include "model/CreateSecretResult.h"
#include "model/DeleteApplicationRequest.h"
#include "model/DeleteApplicationResult.h"
#include "model/DeleteApplicationScalingRuleRequest.h"
#include "model/DeleteApplicationScalingRuleResult.h"
#include "model/DeleteConfigMapRequest.h"
#include "model/DeleteConfigMapResult.h"
#include "model/DeleteGreyTagRouteRequest.h"
#include "model/DeleteGreyTagRouteResult.h"
#include "model/DeleteHistoryJobRequest.h"
#include "model/DeleteHistoryJobResult.h"
#include "model/DeleteIngressRequest.h"
#include "model/DeleteIngressResult.h"
#include "model/DeleteJobRequest.h"
#include "model/DeleteJobResult.h"
#include "model/DeleteNamespaceRequest.h"
#include "model/DeleteNamespaceResult.h"
#include "model/DeleteSecretRequest.h"
#include "model/DeleteSecretResult.h"
#include "model/DeployApplicationRequest.h"
#include "model/DeployApplicationResult.h"
#include "model/DescribeAppServiceDetailRequest.h"
#include "model/DescribeAppServiceDetailResult.h"
#include "model/DescribeApplicationConfigRequest.h"
#include "model/DescribeApplicationConfigResult.h"
#include "model/DescribeApplicationGroupsRequest.h"
#include "model/DescribeApplicationGroupsResult.h"
#include "model/DescribeApplicationImageRequest.h"
#include "model/DescribeApplicationImageResult.h"
#include "model/DescribeApplicationInstancesRequest.h"
#include "model/DescribeApplicationInstancesResult.h"
#include "model/DescribeApplicationScalingRuleRequest.h"
#include "model/DescribeApplicationScalingRuleResult.h"
#include "model/DescribeApplicationScalingRulesRequest.h"
#include "model/DescribeApplicationScalingRulesResult.h"
#include "model/DescribeApplicationSlbsRequest.h"
#include "model/DescribeApplicationSlbsResult.h"
#include "model/DescribeApplicationStatusRequest.h"
#include "model/DescribeApplicationStatusResult.h"
#include "model/DescribeChangeOrderRequest.h"
#include "model/DescribeChangeOrderResult.h"
#include "model/DescribeComponentsRequest.h"
#include "model/DescribeComponentsResult.h"
#include "model/DescribeConfigMapRequest.h"
#include "model/DescribeConfigMapResult.h"
#include "model/DescribeConfigurationPriceRequest.h"
#include "model/DescribeConfigurationPriceResult.h"
#include "model/DescribeEdasContainersRequest.h"
#include "model/DescribeEdasContainersResult.h"
#include "model/DescribeGreyTagRouteRequest.h"
#include "model/DescribeGreyTagRouteResult.h"
#include "model/DescribeIngressRequest.h"
#include "model/DescribeIngressResult.h"
#include "model/DescribeInstanceLogRequest.h"
#include "model/DescribeInstanceLogResult.h"
#include "model/DescribeInstanceSpecificationsRequest.h"
#include "model/DescribeInstanceSpecificationsResult.h"
#include "model/DescribeJobRequest.h"
#include "model/DescribeJobResult.h"
#include "model/DescribeJobHistoryRequest.h"
#include "model/DescribeJobHistoryResult.h"
#include "model/DescribeJobStatusRequest.h"
#include "model/DescribeJobStatusResult.h"
#include "model/DescribeNamespaceRequest.h"
#include "model/DescribeNamespaceResult.h"
#include "model/DescribeNamespaceListRequest.h"
#include "model/DescribeNamespaceListResult.h"
#include "model/DescribeNamespaceResourcesRequest.h"
#include "model/DescribeNamespaceResourcesResult.h"
#include "model/DescribeNamespacesRequest.h"
#include "model/DescribeNamespacesResult.h"
#include "model/DescribePipelineRequest.h"
#include "model/DescribePipelineResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeSecretRequest.h"
#include "model/DescribeSecretResult.h"
#include "model/DisableApplicationScalingRuleRequest.h"
#include "model/DisableApplicationScalingRuleResult.h"
#include "model/EnableApplicationScalingRuleRequest.h"
#include "model/EnableApplicationScalingRuleResult.h"
#include "model/ExecJobRequest.h"
#include "model/ExecJobResult.h"
#include "model/GetArmsTopNMetricRequest.h"
#include "model/GetArmsTopNMetricResult.h"
#include "model/GetAvailabilityMetricRequest.h"
#include "model/GetAvailabilityMetricResult.h"
#include "model/GetChangeOrderMetricRequest.h"
#include "model/GetChangeOrderMetricResult.h"
#include "model/GetScaleAppMetricRequest.h"
#include "model/GetScaleAppMetricResult.h"
#include "model/GetWarningEventMetricRequest.h"
#include "model/GetWarningEventMetricResult.h"
#include "model/ListAppEventsRequest.h"
#include "model/ListAppEventsResult.h"
#include "model/ListAppServicesPageRequest.h"
#include "model/ListAppServicesPageResult.h"
#include "model/ListAppVersionsRequest.h"
#include "model/ListAppVersionsResult.h"
#include "model/ListApplicationsRequest.h"
#include "model/ListApplicationsResult.h"
#include "model/ListChangeOrdersRequest.h"
#include "model/ListChangeOrdersResult.h"
#include "model/ListConsumedServicesRequest.h"
#include "model/ListConsumedServicesResult.h"
#include "model/ListGreyTagRouteRequest.h"
#include "model/ListGreyTagRouteResult.h"
#include "model/ListIngressesRequest.h"
#include "model/ListIngressesResult.h"
#include "model/ListJobsRequest.h"
#include "model/ListJobsResult.h"
#include "model/ListLogConfigsRequest.h"
#include "model/ListLogConfigsResult.h"
#include "model/ListNamespaceChangeOrdersRequest.h"
#include "model/ListNamespaceChangeOrdersResult.h"
#include "model/ListNamespacedConfigMapsRequest.h"
#include "model/ListNamespacedConfigMapsResult.h"
#include "model/ListPublishedServicesRequest.h"
#include "model/ListPublishedServicesResult.h"
#include "model/ListSecretsRequest.h"
#include "model/ListSecretsResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/OpenSaeServiceRequest.h"
#include "model/OpenSaeServiceResult.h"
#include "model/QueryResourceStaticsRequest.h"
#include "model/QueryResourceStaticsResult.h"
#include "model/ReduceApplicationCapacityByInstanceIdsRequest.h"
#include "model/ReduceApplicationCapacityByInstanceIdsResult.h"
#include "model/RescaleApplicationRequest.h"
#include "model/RescaleApplicationResult.h"
#include "model/RescaleApplicationVerticallyRequest.h"
#include "model/RescaleApplicationVerticallyResult.h"
#include "model/RestartApplicationRequest.h"
#include "model/RestartApplicationResult.h"
#include "model/RestartInstancesRequest.h"
#include "model/RestartInstancesResult.h"
#include "model/RollbackApplicationRequest.h"
#include "model/RollbackApplicationResult.h"
#include "model/StartApplicationRequest.h"
#include "model/StartApplicationResult.h"
#include "model/StopApplicationRequest.h"
#include "model/StopApplicationResult.h"
#include "model/SuspendJobRequest.h"
#include "model/SuspendJobResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UnbindSlbRequest.h"
#include "model/UnbindSlbResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpdateAppSecurityGroupRequest.h"
#include "model/UpdateAppSecurityGroupResult.h"
#include "model/UpdateApplicationDescriptionRequest.h"
#include "model/UpdateApplicationDescriptionResult.h"
#include "model/UpdateApplicationScalingRuleRequest.h"
#include "model/UpdateApplicationScalingRuleResult.h"
#include "model/UpdateApplicationVswitchesRequest.h"
#include "model/UpdateApplicationVswitchesResult.h"
#include "model/UpdateConfigMapRequest.h"
#include "model/UpdateConfigMapResult.h"
#include "model/UpdateGreyTagRouteRequest.h"
#include "model/UpdateGreyTagRouteResult.h"
#include "model/UpdateIngressRequest.h"
#include "model/UpdateIngressResult.h"
#include "model/UpdateJobRequest.h"
#include "model/UpdateJobResult.h"
#include "model/UpdateNamespaceRequest.h"
#include "model/UpdateNamespaceResult.h"
#include "model/UpdateNamespaceVpcRequest.h"
#include "model/UpdateNamespaceVpcResult.h"
#include "model/UpdateSecretRequest.h"
#include "model/UpdateSecretResult.h"


namespace AlibabaCloud
{
	namespace Sae
	{
		class ALIBABACLOUD_SAE_EXPORT SaeClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::AbortAndRollbackChangeOrderResult> AbortAndRollbackChangeOrderOutcome;
			typedef std::future<AbortAndRollbackChangeOrderOutcome> AbortAndRollbackChangeOrderOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::AbortAndRollbackChangeOrderRequest&, const AbortAndRollbackChangeOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AbortAndRollbackChangeOrderAsyncHandler;
			typedef Outcome<Error, Model::AbortChangeOrderResult> AbortChangeOrderOutcome;
			typedef std::future<AbortChangeOrderOutcome> AbortChangeOrderOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::AbortChangeOrderRequest&, const AbortChangeOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AbortChangeOrderAsyncHandler;
			typedef Outcome<Error, Model::BatchStartApplicationsResult> BatchStartApplicationsOutcome;
			typedef std::future<BatchStartApplicationsOutcome> BatchStartApplicationsOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::BatchStartApplicationsRequest&, const BatchStartApplicationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchStartApplicationsAsyncHandler;
			typedef Outcome<Error, Model::BatchStopApplicationsResult> BatchStopApplicationsOutcome;
			typedef std::future<BatchStopApplicationsOutcome> BatchStopApplicationsOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::BatchStopApplicationsRequest&, const BatchStopApplicationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchStopApplicationsAsyncHandler;
			typedef Outcome<Error, Model::BindSlbResult> BindSlbOutcome;
			typedef std::future<BindSlbOutcome> BindSlbOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::BindSlbRequest&, const BindSlbOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindSlbAsyncHandler;
			typedef Outcome<Error, Model::ConfirmPipelineBatchResult> ConfirmPipelineBatchOutcome;
			typedef std::future<ConfirmPipelineBatchOutcome> ConfirmPipelineBatchOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::ConfirmPipelineBatchRequest&, const ConfirmPipelineBatchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfirmPipelineBatchAsyncHandler;
			typedef Outcome<Error, Model::CreateApplicationResult> CreateApplicationOutcome;
			typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::CreateApplicationRequest&, const CreateApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationAsyncHandler;
			typedef Outcome<Error, Model::CreateApplicationScalingRuleResult> CreateApplicationScalingRuleOutcome;
			typedef std::future<CreateApplicationScalingRuleOutcome> CreateApplicationScalingRuleOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::CreateApplicationScalingRuleRequest&, const CreateApplicationScalingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationScalingRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateConfigMapResult> CreateConfigMapOutcome;
			typedef std::future<CreateConfigMapOutcome> CreateConfigMapOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::CreateConfigMapRequest&, const CreateConfigMapOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateConfigMapAsyncHandler;
			typedef Outcome<Error, Model::CreateGreyTagRouteResult> CreateGreyTagRouteOutcome;
			typedef std::future<CreateGreyTagRouteOutcome> CreateGreyTagRouteOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::CreateGreyTagRouteRequest&, const CreateGreyTagRouteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGreyTagRouteAsyncHandler;
			typedef Outcome<Error, Model::CreateIngressResult> CreateIngressOutcome;
			typedef std::future<CreateIngressOutcome> CreateIngressOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::CreateIngressRequest&, const CreateIngressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateIngressAsyncHandler;
			typedef Outcome<Error, Model::CreateJobResult> CreateJobOutcome;
			typedef std::future<CreateJobOutcome> CreateJobOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::CreateJobRequest&, const CreateJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateJobAsyncHandler;
			typedef Outcome<Error, Model::CreateNamespaceResult> CreateNamespaceOutcome;
			typedef std::future<CreateNamespaceOutcome> CreateNamespaceOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::CreateNamespaceRequest&, const CreateNamespaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNamespaceAsyncHandler;
			typedef Outcome<Error, Model::CreateSecretResult> CreateSecretOutcome;
			typedef std::future<CreateSecretOutcome> CreateSecretOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::CreateSecretRequest&, const CreateSecretOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecretAsyncHandler;
			typedef Outcome<Error, Model::DeleteApplicationResult> DeleteApplicationOutcome;
			typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DeleteApplicationRequest&, const DeleteApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationAsyncHandler;
			typedef Outcome<Error, Model::DeleteApplicationScalingRuleResult> DeleteApplicationScalingRuleOutcome;
			typedef std::future<DeleteApplicationScalingRuleOutcome> DeleteApplicationScalingRuleOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DeleteApplicationScalingRuleRequest&, const DeleteApplicationScalingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationScalingRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteConfigMapResult> DeleteConfigMapOutcome;
			typedef std::future<DeleteConfigMapOutcome> DeleteConfigMapOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DeleteConfigMapRequest&, const DeleteConfigMapOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConfigMapAsyncHandler;
			typedef Outcome<Error, Model::DeleteGreyTagRouteResult> DeleteGreyTagRouteOutcome;
			typedef std::future<DeleteGreyTagRouteOutcome> DeleteGreyTagRouteOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DeleteGreyTagRouteRequest&, const DeleteGreyTagRouteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGreyTagRouteAsyncHandler;
			typedef Outcome<Error, Model::DeleteHistoryJobResult> DeleteHistoryJobOutcome;
			typedef std::future<DeleteHistoryJobOutcome> DeleteHistoryJobOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DeleteHistoryJobRequest&, const DeleteHistoryJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHistoryJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteIngressResult> DeleteIngressOutcome;
			typedef std::future<DeleteIngressOutcome> DeleteIngressOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DeleteIngressRequest&, const DeleteIngressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIngressAsyncHandler;
			typedef Outcome<Error, Model::DeleteJobResult> DeleteJobOutcome;
			typedef std::future<DeleteJobOutcome> DeleteJobOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DeleteJobRequest&, const DeleteJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteNamespaceResult> DeleteNamespaceOutcome;
			typedef std::future<DeleteNamespaceOutcome> DeleteNamespaceOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DeleteNamespaceRequest&, const DeleteNamespaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNamespaceAsyncHandler;
			typedef Outcome<Error, Model::DeleteSecretResult> DeleteSecretOutcome;
			typedef std::future<DeleteSecretOutcome> DeleteSecretOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DeleteSecretRequest&, const DeleteSecretOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecretAsyncHandler;
			typedef Outcome<Error, Model::DeployApplicationResult> DeployApplicationOutcome;
			typedef std::future<DeployApplicationOutcome> DeployApplicationOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DeployApplicationRequest&, const DeployApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeployApplicationAsyncHandler;
			typedef Outcome<Error, Model::DescribeAppServiceDetailResult> DescribeAppServiceDetailOutcome;
			typedef std::future<DescribeAppServiceDetailOutcome> DescribeAppServiceDetailOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DescribeAppServiceDetailRequest&, const DescribeAppServiceDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppServiceDetailAsyncHandler;
			typedef Outcome<Error, Model::DescribeApplicationConfigResult> DescribeApplicationConfigOutcome;
			typedef std::future<DescribeApplicationConfigOutcome> DescribeApplicationConfigOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DescribeApplicationConfigRequest&, const DescribeApplicationConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeApplicationGroupsResult> DescribeApplicationGroupsOutcome;
			typedef std::future<DescribeApplicationGroupsOutcome> DescribeApplicationGroupsOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DescribeApplicationGroupsRequest&, const DescribeApplicationGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationGroupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeApplicationImageResult> DescribeApplicationImageOutcome;
			typedef std::future<DescribeApplicationImageOutcome> DescribeApplicationImageOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DescribeApplicationImageRequest&, const DescribeApplicationImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationImageAsyncHandler;
			typedef Outcome<Error, Model::DescribeApplicationInstancesResult> DescribeApplicationInstancesOutcome;
			typedef std::future<DescribeApplicationInstancesOutcome> DescribeApplicationInstancesOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DescribeApplicationInstancesRequest&, const DescribeApplicationInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeApplicationScalingRuleResult> DescribeApplicationScalingRuleOutcome;
			typedef std::future<DescribeApplicationScalingRuleOutcome> DescribeApplicationScalingRuleOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DescribeApplicationScalingRuleRequest&, const DescribeApplicationScalingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationScalingRuleAsyncHandler;
			typedef Outcome<Error, Model::DescribeApplicationScalingRulesResult> DescribeApplicationScalingRulesOutcome;
			typedef std::future<DescribeApplicationScalingRulesOutcome> DescribeApplicationScalingRulesOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DescribeApplicationScalingRulesRequest&, const DescribeApplicationScalingRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationScalingRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeApplicationSlbsResult> DescribeApplicationSlbsOutcome;
			typedef std::future<DescribeApplicationSlbsOutcome> DescribeApplicationSlbsOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DescribeApplicationSlbsRequest&, const DescribeApplicationSlbsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationSlbsAsyncHandler;
			typedef Outcome<Error, Model::DescribeApplicationStatusResult> DescribeApplicationStatusOutcome;
			typedef std::future<DescribeApplicationStatusOutcome> DescribeApplicationStatusOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DescribeApplicationStatusRequest&, const DescribeApplicationStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeChangeOrderResult> DescribeChangeOrderOutcome;
			typedef std::future<DescribeChangeOrderOutcome> DescribeChangeOrderOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DescribeChangeOrderRequest&, const DescribeChangeOrderOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChangeOrderAsyncHandler;
			typedef Outcome<Error, Model::DescribeComponentsResult> DescribeComponentsOutcome;
			typedef std::future<DescribeComponentsOutcome> DescribeComponentsOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DescribeComponentsRequest&, const DescribeComponentsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeComponentsAsyncHandler;
			typedef Outcome<Error, Model::DescribeConfigMapResult> DescribeConfigMapOutcome;
			typedef std::future<DescribeConfigMapOutcome> DescribeConfigMapOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DescribeConfigMapRequest&, const DescribeConfigMapOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigMapAsyncHandler;
			typedef Outcome<Error, Model::DescribeConfigurationPriceResult> DescribeConfigurationPriceOutcome;
			typedef std::future<DescribeConfigurationPriceOutcome> DescribeConfigurationPriceOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DescribeConfigurationPriceRequest&, const DescribeConfigurationPriceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigurationPriceAsyncHandler;
			typedef Outcome<Error, Model::DescribeEdasContainersResult> DescribeEdasContainersOutcome;
			typedef std::future<DescribeEdasContainersOutcome> DescribeEdasContainersOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DescribeEdasContainersRequest&, const DescribeEdasContainersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdasContainersAsyncHandler;
			typedef Outcome<Error, Model::DescribeGreyTagRouteResult> DescribeGreyTagRouteOutcome;
			typedef std::future<DescribeGreyTagRouteOutcome> DescribeGreyTagRouteOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DescribeGreyTagRouteRequest&, const DescribeGreyTagRouteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGreyTagRouteAsyncHandler;
			typedef Outcome<Error, Model::DescribeIngressResult> DescribeIngressOutcome;
			typedef std::future<DescribeIngressOutcome> DescribeIngressOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DescribeIngressRequest&, const DescribeIngressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIngressAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceLogResult> DescribeInstanceLogOutcome;
			typedef std::future<DescribeInstanceLogOutcome> DescribeInstanceLogOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DescribeInstanceLogRequest&, const DescribeInstanceLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceSpecificationsResult> DescribeInstanceSpecificationsOutcome;
			typedef std::future<DescribeInstanceSpecificationsOutcome> DescribeInstanceSpecificationsOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DescribeInstanceSpecificationsRequest&, const DescribeInstanceSpecificationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceSpecificationsAsyncHandler;
			typedef Outcome<Error, Model::DescribeJobResult> DescribeJobOutcome;
			typedef std::future<DescribeJobOutcome> DescribeJobOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DescribeJobRequest&, const DescribeJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobAsyncHandler;
			typedef Outcome<Error, Model::DescribeJobHistoryResult> DescribeJobHistoryOutcome;
			typedef std::future<DescribeJobHistoryOutcome> DescribeJobHistoryOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DescribeJobHistoryRequest&, const DescribeJobHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobHistoryAsyncHandler;
			typedef Outcome<Error, Model::DescribeJobStatusResult> DescribeJobStatusOutcome;
			typedef std::future<DescribeJobStatusOutcome> DescribeJobStatusOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DescribeJobStatusRequest&, const DescribeJobStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeJobStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeNamespaceResult> DescribeNamespaceOutcome;
			typedef std::future<DescribeNamespaceOutcome> DescribeNamespaceOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DescribeNamespaceRequest&, const DescribeNamespaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNamespaceAsyncHandler;
			typedef Outcome<Error, Model::DescribeNamespaceListResult> DescribeNamespaceListOutcome;
			typedef std::future<DescribeNamespaceListOutcome> DescribeNamespaceListOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DescribeNamespaceListRequest&, const DescribeNamespaceListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNamespaceListAsyncHandler;
			typedef Outcome<Error, Model::DescribeNamespaceResourcesResult> DescribeNamespaceResourcesOutcome;
			typedef std::future<DescribeNamespaceResourcesOutcome> DescribeNamespaceResourcesOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DescribeNamespaceResourcesRequest&, const DescribeNamespaceResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNamespaceResourcesAsyncHandler;
			typedef Outcome<Error, Model::DescribeNamespacesResult> DescribeNamespacesOutcome;
			typedef std::future<DescribeNamespacesOutcome> DescribeNamespacesOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DescribeNamespacesRequest&, const DescribeNamespacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNamespacesAsyncHandler;
			typedef Outcome<Error, Model::DescribePipelineResult> DescribePipelineOutcome;
			typedef std::future<DescribePipelineOutcome> DescribePipelineOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DescribePipelineRequest&, const DescribePipelineOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePipelineAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSecretResult> DescribeSecretOutcome;
			typedef std::future<DescribeSecretOutcome> DescribeSecretOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DescribeSecretRequest&, const DescribeSecretOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecretAsyncHandler;
			typedef Outcome<Error, Model::DisableApplicationScalingRuleResult> DisableApplicationScalingRuleOutcome;
			typedef std::future<DisableApplicationScalingRuleOutcome> DisableApplicationScalingRuleOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DisableApplicationScalingRuleRequest&, const DisableApplicationScalingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableApplicationScalingRuleAsyncHandler;
			typedef Outcome<Error, Model::EnableApplicationScalingRuleResult> EnableApplicationScalingRuleOutcome;
			typedef std::future<EnableApplicationScalingRuleOutcome> EnableApplicationScalingRuleOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::EnableApplicationScalingRuleRequest&, const EnableApplicationScalingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableApplicationScalingRuleAsyncHandler;
			typedef Outcome<Error, Model::ExecJobResult> ExecJobOutcome;
			typedef std::future<ExecJobOutcome> ExecJobOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::ExecJobRequest&, const ExecJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecJobAsyncHandler;
			typedef Outcome<Error, Model::GetArmsTopNMetricResult> GetArmsTopNMetricOutcome;
			typedef std::future<GetArmsTopNMetricOutcome> GetArmsTopNMetricOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::GetArmsTopNMetricRequest&, const GetArmsTopNMetricOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetArmsTopNMetricAsyncHandler;
			typedef Outcome<Error, Model::GetAvailabilityMetricResult> GetAvailabilityMetricOutcome;
			typedef std::future<GetAvailabilityMetricOutcome> GetAvailabilityMetricOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::GetAvailabilityMetricRequest&, const GetAvailabilityMetricOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAvailabilityMetricAsyncHandler;
			typedef Outcome<Error, Model::GetChangeOrderMetricResult> GetChangeOrderMetricOutcome;
			typedef std::future<GetChangeOrderMetricOutcome> GetChangeOrderMetricOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::GetChangeOrderMetricRequest&, const GetChangeOrderMetricOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetChangeOrderMetricAsyncHandler;
			typedef Outcome<Error, Model::GetScaleAppMetricResult> GetScaleAppMetricOutcome;
			typedef std::future<GetScaleAppMetricOutcome> GetScaleAppMetricOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::GetScaleAppMetricRequest&, const GetScaleAppMetricOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetScaleAppMetricAsyncHandler;
			typedef Outcome<Error, Model::GetWarningEventMetricResult> GetWarningEventMetricOutcome;
			typedef std::future<GetWarningEventMetricOutcome> GetWarningEventMetricOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::GetWarningEventMetricRequest&, const GetWarningEventMetricOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWarningEventMetricAsyncHandler;
			typedef Outcome<Error, Model::ListAppEventsResult> ListAppEventsOutcome;
			typedef std::future<ListAppEventsOutcome> ListAppEventsOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::ListAppEventsRequest&, const ListAppEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAppEventsAsyncHandler;
			typedef Outcome<Error, Model::ListAppServicesPageResult> ListAppServicesPageOutcome;
			typedef std::future<ListAppServicesPageOutcome> ListAppServicesPageOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::ListAppServicesPageRequest&, const ListAppServicesPageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAppServicesPageAsyncHandler;
			typedef Outcome<Error, Model::ListAppVersionsResult> ListAppVersionsOutcome;
			typedef std::future<ListAppVersionsOutcome> ListAppVersionsOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::ListAppVersionsRequest&, const ListAppVersionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAppVersionsAsyncHandler;
			typedef Outcome<Error, Model::ListApplicationsResult> ListApplicationsOutcome;
			typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::ListApplicationsRequest&, const ListApplicationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApplicationsAsyncHandler;
			typedef Outcome<Error, Model::ListChangeOrdersResult> ListChangeOrdersOutcome;
			typedef std::future<ListChangeOrdersOutcome> ListChangeOrdersOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::ListChangeOrdersRequest&, const ListChangeOrdersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListChangeOrdersAsyncHandler;
			typedef Outcome<Error, Model::ListConsumedServicesResult> ListConsumedServicesOutcome;
			typedef std::future<ListConsumedServicesOutcome> ListConsumedServicesOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::ListConsumedServicesRequest&, const ListConsumedServicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListConsumedServicesAsyncHandler;
			typedef Outcome<Error, Model::ListGreyTagRouteResult> ListGreyTagRouteOutcome;
			typedef std::future<ListGreyTagRouteOutcome> ListGreyTagRouteOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::ListGreyTagRouteRequest&, const ListGreyTagRouteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGreyTagRouteAsyncHandler;
			typedef Outcome<Error, Model::ListIngressesResult> ListIngressesOutcome;
			typedef std::future<ListIngressesOutcome> ListIngressesOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::ListIngressesRequest&, const ListIngressesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListIngressesAsyncHandler;
			typedef Outcome<Error, Model::ListJobsResult> ListJobsOutcome;
			typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::ListJobsRequest&, const ListJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobsAsyncHandler;
			typedef Outcome<Error, Model::ListLogConfigsResult> ListLogConfigsOutcome;
			typedef std::future<ListLogConfigsOutcome> ListLogConfigsOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::ListLogConfigsRequest&, const ListLogConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLogConfigsAsyncHandler;
			typedef Outcome<Error, Model::ListNamespaceChangeOrdersResult> ListNamespaceChangeOrdersOutcome;
			typedef std::future<ListNamespaceChangeOrdersOutcome> ListNamespaceChangeOrdersOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::ListNamespaceChangeOrdersRequest&, const ListNamespaceChangeOrdersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNamespaceChangeOrdersAsyncHandler;
			typedef Outcome<Error, Model::ListNamespacedConfigMapsResult> ListNamespacedConfigMapsOutcome;
			typedef std::future<ListNamespacedConfigMapsOutcome> ListNamespacedConfigMapsOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::ListNamespacedConfigMapsRequest&, const ListNamespacedConfigMapsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNamespacedConfigMapsAsyncHandler;
			typedef Outcome<Error, Model::ListPublishedServicesResult> ListPublishedServicesOutcome;
			typedef std::future<ListPublishedServicesOutcome> ListPublishedServicesOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::ListPublishedServicesRequest&, const ListPublishedServicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListPublishedServicesAsyncHandler;
			typedef Outcome<Error, Model::ListSecretsResult> ListSecretsOutcome;
			typedef std::future<ListSecretsOutcome> ListSecretsOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::ListSecretsRequest&, const ListSecretsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSecretsAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::OpenSaeServiceResult> OpenSaeServiceOutcome;
			typedef std::future<OpenSaeServiceOutcome> OpenSaeServiceOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::OpenSaeServiceRequest&, const OpenSaeServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenSaeServiceAsyncHandler;
			typedef Outcome<Error, Model::QueryResourceStaticsResult> QueryResourceStaticsOutcome;
			typedef std::future<QueryResourceStaticsOutcome> QueryResourceStaticsOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::QueryResourceStaticsRequest&, const QueryResourceStaticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryResourceStaticsAsyncHandler;
			typedef Outcome<Error, Model::ReduceApplicationCapacityByInstanceIdsResult> ReduceApplicationCapacityByInstanceIdsOutcome;
			typedef std::future<ReduceApplicationCapacityByInstanceIdsOutcome> ReduceApplicationCapacityByInstanceIdsOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::ReduceApplicationCapacityByInstanceIdsRequest&, const ReduceApplicationCapacityByInstanceIdsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReduceApplicationCapacityByInstanceIdsAsyncHandler;
			typedef Outcome<Error, Model::RescaleApplicationResult> RescaleApplicationOutcome;
			typedef std::future<RescaleApplicationOutcome> RescaleApplicationOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::RescaleApplicationRequest&, const RescaleApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RescaleApplicationAsyncHandler;
			typedef Outcome<Error, Model::RescaleApplicationVerticallyResult> RescaleApplicationVerticallyOutcome;
			typedef std::future<RescaleApplicationVerticallyOutcome> RescaleApplicationVerticallyOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::RescaleApplicationVerticallyRequest&, const RescaleApplicationVerticallyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RescaleApplicationVerticallyAsyncHandler;
			typedef Outcome<Error, Model::RestartApplicationResult> RestartApplicationOutcome;
			typedef std::future<RestartApplicationOutcome> RestartApplicationOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::RestartApplicationRequest&, const RestartApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartApplicationAsyncHandler;
			typedef Outcome<Error, Model::RestartInstancesResult> RestartInstancesOutcome;
			typedef std::future<RestartInstancesOutcome> RestartInstancesOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::RestartInstancesRequest&, const RestartInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartInstancesAsyncHandler;
			typedef Outcome<Error, Model::RollbackApplicationResult> RollbackApplicationOutcome;
			typedef std::future<RollbackApplicationOutcome> RollbackApplicationOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::RollbackApplicationRequest&, const RollbackApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RollbackApplicationAsyncHandler;
			typedef Outcome<Error, Model::StartApplicationResult> StartApplicationOutcome;
			typedef std::future<StartApplicationOutcome> StartApplicationOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::StartApplicationRequest&, const StartApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartApplicationAsyncHandler;
			typedef Outcome<Error, Model::StopApplicationResult> StopApplicationOutcome;
			typedef std::future<StopApplicationOutcome> StopApplicationOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::StopApplicationRequest&, const StopApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopApplicationAsyncHandler;
			typedef Outcome<Error, Model::SuspendJobResult> SuspendJobOutcome;
			typedef std::future<SuspendJobOutcome> SuspendJobOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::SuspendJobRequest&, const SuspendJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SuspendJobAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UnbindSlbResult> UnbindSlbOutcome;
			typedef std::future<UnbindSlbOutcome> UnbindSlbOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::UnbindSlbRequest&, const UnbindSlbOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindSlbAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateAppSecurityGroupResult> UpdateAppSecurityGroupOutcome;
			typedef std::future<UpdateAppSecurityGroupOutcome> UpdateAppSecurityGroupOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::UpdateAppSecurityGroupRequest&, const UpdateAppSecurityGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAppSecurityGroupAsyncHandler;
			typedef Outcome<Error, Model::UpdateApplicationDescriptionResult> UpdateApplicationDescriptionOutcome;
			typedef std::future<UpdateApplicationDescriptionOutcome> UpdateApplicationDescriptionOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::UpdateApplicationDescriptionRequest&, const UpdateApplicationDescriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateApplicationDescriptionAsyncHandler;
			typedef Outcome<Error, Model::UpdateApplicationScalingRuleResult> UpdateApplicationScalingRuleOutcome;
			typedef std::future<UpdateApplicationScalingRuleOutcome> UpdateApplicationScalingRuleOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::UpdateApplicationScalingRuleRequest&, const UpdateApplicationScalingRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateApplicationScalingRuleAsyncHandler;
			typedef Outcome<Error, Model::UpdateApplicationVswitchesResult> UpdateApplicationVswitchesOutcome;
			typedef std::future<UpdateApplicationVswitchesOutcome> UpdateApplicationVswitchesOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::UpdateApplicationVswitchesRequest&, const UpdateApplicationVswitchesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateApplicationVswitchesAsyncHandler;
			typedef Outcome<Error, Model::UpdateConfigMapResult> UpdateConfigMapOutcome;
			typedef std::future<UpdateConfigMapOutcome> UpdateConfigMapOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::UpdateConfigMapRequest&, const UpdateConfigMapOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateConfigMapAsyncHandler;
			typedef Outcome<Error, Model::UpdateGreyTagRouteResult> UpdateGreyTagRouteOutcome;
			typedef std::future<UpdateGreyTagRouteOutcome> UpdateGreyTagRouteOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::UpdateGreyTagRouteRequest&, const UpdateGreyTagRouteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGreyTagRouteAsyncHandler;
			typedef Outcome<Error, Model::UpdateIngressResult> UpdateIngressOutcome;
			typedef std::future<UpdateIngressOutcome> UpdateIngressOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::UpdateIngressRequest&, const UpdateIngressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateIngressAsyncHandler;
			typedef Outcome<Error, Model::UpdateJobResult> UpdateJobOutcome;
			typedef std::future<UpdateJobOutcome> UpdateJobOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::UpdateJobRequest&, const UpdateJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateJobAsyncHandler;
			typedef Outcome<Error, Model::UpdateNamespaceResult> UpdateNamespaceOutcome;
			typedef std::future<UpdateNamespaceOutcome> UpdateNamespaceOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::UpdateNamespaceRequest&, const UpdateNamespaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateNamespaceAsyncHandler;
			typedef Outcome<Error, Model::UpdateNamespaceVpcResult> UpdateNamespaceVpcOutcome;
			typedef std::future<UpdateNamespaceVpcOutcome> UpdateNamespaceVpcOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::UpdateNamespaceVpcRequest&, const UpdateNamespaceVpcOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateNamespaceVpcAsyncHandler;
			typedef Outcome<Error, Model::UpdateSecretResult> UpdateSecretOutcome;
			typedef std::future<UpdateSecretOutcome> UpdateSecretOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::UpdateSecretRequest&, const UpdateSecretOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSecretAsyncHandler;

			SaeClient(const Credentials &credentials, const ClientConfiguration &configuration);
			SaeClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			SaeClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~SaeClient();
			AbortAndRollbackChangeOrderOutcome abortAndRollbackChangeOrder(const Model::AbortAndRollbackChangeOrderRequest &request)const;
			void abortAndRollbackChangeOrderAsync(const Model::AbortAndRollbackChangeOrderRequest& request, const AbortAndRollbackChangeOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AbortAndRollbackChangeOrderOutcomeCallable abortAndRollbackChangeOrderCallable(const Model::AbortAndRollbackChangeOrderRequest& request) const;
			AbortChangeOrderOutcome abortChangeOrder(const Model::AbortChangeOrderRequest &request)const;
			void abortChangeOrderAsync(const Model::AbortChangeOrderRequest& request, const AbortChangeOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AbortChangeOrderOutcomeCallable abortChangeOrderCallable(const Model::AbortChangeOrderRequest& request) const;
			BatchStartApplicationsOutcome batchStartApplications(const Model::BatchStartApplicationsRequest &request)const;
			void batchStartApplicationsAsync(const Model::BatchStartApplicationsRequest& request, const BatchStartApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchStartApplicationsOutcomeCallable batchStartApplicationsCallable(const Model::BatchStartApplicationsRequest& request) const;
			BatchStopApplicationsOutcome batchStopApplications(const Model::BatchStopApplicationsRequest &request)const;
			void batchStopApplicationsAsync(const Model::BatchStopApplicationsRequest& request, const BatchStopApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchStopApplicationsOutcomeCallable batchStopApplicationsCallable(const Model::BatchStopApplicationsRequest& request) const;
			BindSlbOutcome bindSlb(const Model::BindSlbRequest &request)const;
			void bindSlbAsync(const Model::BindSlbRequest& request, const BindSlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindSlbOutcomeCallable bindSlbCallable(const Model::BindSlbRequest& request) const;
			ConfirmPipelineBatchOutcome confirmPipelineBatch(const Model::ConfirmPipelineBatchRequest &request)const;
			void confirmPipelineBatchAsync(const Model::ConfirmPipelineBatchRequest& request, const ConfirmPipelineBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfirmPipelineBatchOutcomeCallable confirmPipelineBatchCallable(const Model::ConfirmPipelineBatchRequest& request) const;
			CreateApplicationOutcome createApplication(const Model::CreateApplicationRequest &request)const;
			void createApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateApplicationOutcomeCallable createApplicationCallable(const Model::CreateApplicationRequest& request) const;
			CreateApplicationScalingRuleOutcome createApplicationScalingRule(const Model::CreateApplicationScalingRuleRequest &request)const;
			void createApplicationScalingRuleAsync(const Model::CreateApplicationScalingRuleRequest& request, const CreateApplicationScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateApplicationScalingRuleOutcomeCallable createApplicationScalingRuleCallable(const Model::CreateApplicationScalingRuleRequest& request) const;
			CreateConfigMapOutcome createConfigMap(const Model::CreateConfigMapRequest &request)const;
			void createConfigMapAsync(const Model::CreateConfigMapRequest& request, const CreateConfigMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateConfigMapOutcomeCallable createConfigMapCallable(const Model::CreateConfigMapRequest& request) const;
			CreateGreyTagRouteOutcome createGreyTagRoute(const Model::CreateGreyTagRouteRequest &request)const;
			void createGreyTagRouteAsync(const Model::CreateGreyTagRouteRequest& request, const CreateGreyTagRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGreyTagRouteOutcomeCallable createGreyTagRouteCallable(const Model::CreateGreyTagRouteRequest& request) const;
			CreateIngressOutcome createIngress(const Model::CreateIngressRequest &request)const;
			void createIngressAsync(const Model::CreateIngressRequest& request, const CreateIngressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateIngressOutcomeCallable createIngressCallable(const Model::CreateIngressRequest& request) const;
			CreateJobOutcome createJob(const Model::CreateJobRequest &request)const;
			void createJobAsync(const Model::CreateJobRequest& request, const CreateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateJobOutcomeCallable createJobCallable(const Model::CreateJobRequest& request) const;
			CreateNamespaceOutcome createNamespace(const Model::CreateNamespaceRequest &request)const;
			void createNamespaceAsync(const Model::CreateNamespaceRequest& request, const CreateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNamespaceOutcomeCallable createNamespaceCallable(const Model::CreateNamespaceRequest& request) const;
			CreateSecretOutcome createSecret(const Model::CreateSecretRequest &request)const;
			void createSecretAsync(const Model::CreateSecretRequest& request, const CreateSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSecretOutcomeCallable createSecretCallable(const Model::CreateSecretRequest& request) const;
			DeleteApplicationOutcome deleteApplication(const Model::DeleteApplicationRequest &request)const;
			void deleteApplicationAsync(const Model::DeleteApplicationRequest& request, const DeleteApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteApplicationOutcomeCallable deleteApplicationCallable(const Model::DeleteApplicationRequest& request) const;
			DeleteApplicationScalingRuleOutcome deleteApplicationScalingRule(const Model::DeleteApplicationScalingRuleRequest &request)const;
			void deleteApplicationScalingRuleAsync(const Model::DeleteApplicationScalingRuleRequest& request, const DeleteApplicationScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteApplicationScalingRuleOutcomeCallable deleteApplicationScalingRuleCallable(const Model::DeleteApplicationScalingRuleRequest& request) const;
			DeleteConfigMapOutcome deleteConfigMap(const Model::DeleteConfigMapRequest &request)const;
			void deleteConfigMapAsync(const Model::DeleteConfigMapRequest& request, const DeleteConfigMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteConfigMapOutcomeCallable deleteConfigMapCallable(const Model::DeleteConfigMapRequest& request) const;
			DeleteGreyTagRouteOutcome deleteGreyTagRoute(const Model::DeleteGreyTagRouteRequest &request)const;
			void deleteGreyTagRouteAsync(const Model::DeleteGreyTagRouteRequest& request, const DeleteGreyTagRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGreyTagRouteOutcomeCallable deleteGreyTagRouteCallable(const Model::DeleteGreyTagRouteRequest& request) const;
			DeleteHistoryJobOutcome deleteHistoryJob(const Model::DeleteHistoryJobRequest &request)const;
			void deleteHistoryJobAsync(const Model::DeleteHistoryJobRequest& request, const DeleteHistoryJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteHistoryJobOutcomeCallable deleteHistoryJobCallable(const Model::DeleteHistoryJobRequest& request) const;
			DeleteIngressOutcome deleteIngress(const Model::DeleteIngressRequest &request)const;
			void deleteIngressAsync(const Model::DeleteIngressRequest& request, const DeleteIngressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteIngressOutcomeCallable deleteIngressCallable(const Model::DeleteIngressRequest& request) const;
			DeleteJobOutcome deleteJob(const Model::DeleteJobRequest &request)const;
			void deleteJobAsync(const Model::DeleteJobRequest& request, const DeleteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteJobOutcomeCallable deleteJobCallable(const Model::DeleteJobRequest& request) const;
			DeleteNamespaceOutcome deleteNamespace(const Model::DeleteNamespaceRequest &request)const;
			void deleteNamespaceAsync(const Model::DeleteNamespaceRequest& request, const DeleteNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNamespaceOutcomeCallable deleteNamespaceCallable(const Model::DeleteNamespaceRequest& request) const;
			DeleteSecretOutcome deleteSecret(const Model::DeleteSecretRequest &request)const;
			void deleteSecretAsync(const Model::DeleteSecretRequest& request, const DeleteSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSecretOutcomeCallable deleteSecretCallable(const Model::DeleteSecretRequest& request) const;
			DeployApplicationOutcome deployApplication(const Model::DeployApplicationRequest &request)const;
			void deployApplicationAsync(const Model::DeployApplicationRequest& request, const DeployApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeployApplicationOutcomeCallable deployApplicationCallable(const Model::DeployApplicationRequest& request) const;
			DescribeAppServiceDetailOutcome describeAppServiceDetail(const Model::DescribeAppServiceDetailRequest &request)const;
			void describeAppServiceDetailAsync(const Model::DescribeAppServiceDetailRequest& request, const DescribeAppServiceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAppServiceDetailOutcomeCallable describeAppServiceDetailCallable(const Model::DescribeAppServiceDetailRequest& request) const;
			DescribeApplicationConfigOutcome describeApplicationConfig(const Model::DescribeApplicationConfigRequest &request)const;
			void describeApplicationConfigAsync(const Model::DescribeApplicationConfigRequest& request, const DescribeApplicationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApplicationConfigOutcomeCallable describeApplicationConfigCallable(const Model::DescribeApplicationConfigRequest& request) const;
			DescribeApplicationGroupsOutcome describeApplicationGroups(const Model::DescribeApplicationGroupsRequest &request)const;
			void describeApplicationGroupsAsync(const Model::DescribeApplicationGroupsRequest& request, const DescribeApplicationGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApplicationGroupsOutcomeCallable describeApplicationGroupsCallable(const Model::DescribeApplicationGroupsRequest& request) const;
			DescribeApplicationImageOutcome describeApplicationImage(const Model::DescribeApplicationImageRequest &request)const;
			void describeApplicationImageAsync(const Model::DescribeApplicationImageRequest& request, const DescribeApplicationImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApplicationImageOutcomeCallable describeApplicationImageCallable(const Model::DescribeApplicationImageRequest& request) const;
			DescribeApplicationInstancesOutcome describeApplicationInstances(const Model::DescribeApplicationInstancesRequest &request)const;
			void describeApplicationInstancesAsync(const Model::DescribeApplicationInstancesRequest& request, const DescribeApplicationInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApplicationInstancesOutcomeCallable describeApplicationInstancesCallable(const Model::DescribeApplicationInstancesRequest& request) const;
			DescribeApplicationScalingRuleOutcome describeApplicationScalingRule(const Model::DescribeApplicationScalingRuleRequest &request)const;
			void describeApplicationScalingRuleAsync(const Model::DescribeApplicationScalingRuleRequest& request, const DescribeApplicationScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApplicationScalingRuleOutcomeCallable describeApplicationScalingRuleCallable(const Model::DescribeApplicationScalingRuleRequest& request) const;
			DescribeApplicationScalingRulesOutcome describeApplicationScalingRules(const Model::DescribeApplicationScalingRulesRequest &request)const;
			void describeApplicationScalingRulesAsync(const Model::DescribeApplicationScalingRulesRequest& request, const DescribeApplicationScalingRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApplicationScalingRulesOutcomeCallable describeApplicationScalingRulesCallable(const Model::DescribeApplicationScalingRulesRequest& request) const;
			DescribeApplicationSlbsOutcome describeApplicationSlbs(const Model::DescribeApplicationSlbsRequest &request)const;
			void describeApplicationSlbsAsync(const Model::DescribeApplicationSlbsRequest& request, const DescribeApplicationSlbsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApplicationSlbsOutcomeCallable describeApplicationSlbsCallable(const Model::DescribeApplicationSlbsRequest& request) const;
			DescribeApplicationStatusOutcome describeApplicationStatus(const Model::DescribeApplicationStatusRequest &request)const;
			void describeApplicationStatusAsync(const Model::DescribeApplicationStatusRequest& request, const DescribeApplicationStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApplicationStatusOutcomeCallable describeApplicationStatusCallable(const Model::DescribeApplicationStatusRequest& request) const;
			DescribeChangeOrderOutcome describeChangeOrder(const Model::DescribeChangeOrderRequest &request)const;
			void describeChangeOrderAsync(const Model::DescribeChangeOrderRequest& request, const DescribeChangeOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeChangeOrderOutcomeCallable describeChangeOrderCallable(const Model::DescribeChangeOrderRequest& request) const;
			DescribeComponentsOutcome describeComponents(const Model::DescribeComponentsRequest &request)const;
			void describeComponentsAsync(const Model::DescribeComponentsRequest& request, const DescribeComponentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeComponentsOutcomeCallable describeComponentsCallable(const Model::DescribeComponentsRequest& request) const;
			DescribeConfigMapOutcome describeConfigMap(const Model::DescribeConfigMapRequest &request)const;
			void describeConfigMapAsync(const Model::DescribeConfigMapRequest& request, const DescribeConfigMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeConfigMapOutcomeCallable describeConfigMapCallable(const Model::DescribeConfigMapRequest& request) const;
			DescribeConfigurationPriceOutcome describeConfigurationPrice(const Model::DescribeConfigurationPriceRequest &request)const;
			void describeConfigurationPriceAsync(const Model::DescribeConfigurationPriceRequest& request, const DescribeConfigurationPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeConfigurationPriceOutcomeCallable describeConfigurationPriceCallable(const Model::DescribeConfigurationPriceRequest& request) const;
			DescribeEdasContainersOutcome describeEdasContainers(const Model::DescribeEdasContainersRequest &request)const;
			void describeEdasContainersAsync(const Model::DescribeEdasContainersRequest& request, const DescribeEdasContainersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEdasContainersOutcomeCallable describeEdasContainersCallable(const Model::DescribeEdasContainersRequest& request) const;
			DescribeGreyTagRouteOutcome describeGreyTagRoute(const Model::DescribeGreyTagRouteRequest &request)const;
			void describeGreyTagRouteAsync(const Model::DescribeGreyTagRouteRequest& request, const DescribeGreyTagRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGreyTagRouteOutcomeCallable describeGreyTagRouteCallable(const Model::DescribeGreyTagRouteRequest& request) const;
			DescribeIngressOutcome describeIngress(const Model::DescribeIngressRequest &request)const;
			void describeIngressAsync(const Model::DescribeIngressRequest& request, const DescribeIngressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIngressOutcomeCallable describeIngressCallable(const Model::DescribeIngressRequest& request) const;
			DescribeInstanceLogOutcome describeInstanceLog(const Model::DescribeInstanceLogRequest &request)const;
			void describeInstanceLogAsync(const Model::DescribeInstanceLogRequest& request, const DescribeInstanceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceLogOutcomeCallable describeInstanceLogCallable(const Model::DescribeInstanceLogRequest& request) const;
			DescribeInstanceSpecificationsOutcome describeInstanceSpecifications(const Model::DescribeInstanceSpecificationsRequest &request)const;
			void describeInstanceSpecificationsAsync(const Model::DescribeInstanceSpecificationsRequest& request, const DescribeInstanceSpecificationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceSpecificationsOutcomeCallable describeInstanceSpecificationsCallable(const Model::DescribeInstanceSpecificationsRequest& request) const;
			DescribeJobOutcome describeJob(const Model::DescribeJobRequest &request)const;
			void describeJobAsync(const Model::DescribeJobRequest& request, const DescribeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeJobOutcomeCallable describeJobCallable(const Model::DescribeJobRequest& request) const;
			DescribeJobHistoryOutcome describeJobHistory(const Model::DescribeJobHistoryRequest &request)const;
			void describeJobHistoryAsync(const Model::DescribeJobHistoryRequest& request, const DescribeJobHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeJobHistoryOutcomeCallable describeJobHistoryCallable(const Model::DescribeJobHistoryRequest& request) const;
			DescribeJobStatusOutcome describeJobStatus(const Model::DescribeJobStatusRequest &request)const;
			void describeJobStatusAsync(const Model::DescribeJobStatusRequest& request, const DescribeJobStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeJobStatusOutcomeCallable describeJobStatusCallable(const Model::DescribeJobStatusRequest& request) const;
			DescribeNamespaceOutcome describeNamespace(const Model::DescribeNamespaceRequest &request)const;
			void describeNamespaceAsync(const Model::DescribeNamespaceRequest& request, const DescribeNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNamespaceOutcomeCallable describeNamespaceCallable(const Model::DescribeNamespaceRequest& request) const;
			DescribeNamespaceListOutcome describeNamespaceList(const Model::DescribeNamespaceListRequest &request)const;
			void describeNamespaceListAsync(const Model::DescribeNamespaceListRequest& request, const DescribeNamespaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNamespaceListOutcomeCallable describeNamespaceListCallable(const Model::DescribeNamespaceListRequest& request) const;
			DescribeNamespaceResourcesOutcome describeNamespaceResources(const Model::DescribeNamespaceResourcesRequest &request)const;
			void describeNamespaceResourcesAsync(const Model::DescribeNamespaceResourcesRequest& request, const DescribeNamespaceResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNamespaceResourcesOutcomeCallable describeNamespaceResourcesCallable(const Model::DescribeNamespaceResourcesRequest& request) const;
			DescribeNamespacesOutcome describeNamespaces(const Model::DescribeNamespacesRequest &request)const;
			void describeNamespacesAsync(const Model::DescribeNamespacesRequest& request, const DescribeNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNamespacesOutcomeCallable describeNamespacesCallable(const Model::DescribeNamespacesRequest& request) const;
			DescribePipelineOutcome describePipeline(const Model::DescribePipelineRequest &request)const;
			void describePipelineAsync(const Model::DescribePipelineRequest& request, const DescribePipelineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePipelineOutcomeCallable describePipelineCallable(const Model::DescribePipelineRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeSecretOutcome describeSecret(const Model::DescribeSecretRequest &request)const;
			void describeSecretAsync(const Model::DescribeSecretRequest& request, const DescribeSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSecretOutcomeCallable describeSecretCallable(const Model::DescribeSecretRequest& request) const;
			DisableApplicationScalingRuleOutcome disableApplicationScalingRule(const Model::DisableApplicationScalingRuleRequest &request)const;
			void disableApplicationScalingRuleAsync(const Model::DisableApplicationScalingRuleRequest& request, const DisableApplicationScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableApplicationScalingRuleOutcomeCallable disableApplicationScalingRuleCallable(const Model::DisableApplicationScalingRuleRequest& request) const;
			EnableApplicationScalingRuleOutcome enableApplicationScalingRule(const Model::EnableApplicationScalingRuleRequest &request)const;
			void enableApplicationScalingRuleAsync(const Model::EnableApplicationScalingRuleRequest& request, const EnableApplicationScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableApplicationScalingRuleOutcomeCallable enableApplicationScalingRuleCallable(const Model::EnableApplicationScalingRuleRequest& request) const;
			ExecJobOutcome execJob(const Model::ExecJobRequest &request)const;
			void execJobAsync(const Model::ExecJobRequest& request, const ExecJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecJobOutcomeCallable execJobCallable(const Model::ExecJobRequest& request) const;
			GetArmsTopNMetricOutcome getArmsTopNMetric(const Model::GetArmsTopNMetricRequest &request)const;
			void getArmsTopNMetricAsync(const Model::GetArmsTopNMetricRequest& request, const GetArmsTopNMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetArmsTopNMetricOutcomeCallable getArmsTopNMetricCallable(const Model::GetArmsTopNMetricRequest& request) const;
			GetAvailabilityMetricOutcome getAvailabilityMetric(const Model::GetAvailabilityMetricRequest &request)const;
			void getAvailabilityMetricAsync(const Model::GetAvailabilityMetricRequest& request, const GetAvailabilityMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAvailabilityMetricOutcomeCallable getAvailabilityMetricCallable(const Model::GetAvailabilityMetricRequest& request) const;
			GetChangeOrderMetricOutcome getChangeOrderMetric(const Model::GetChangeOrderMetricRequest &request)const;
			void getChangeOrderMetricAsync(const Model::GetChangeOrderMetricRequest& request, const GetChangeOrderMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetChangeOrderMetricOutcomeCallable getChangeOrderMetricCallable(const Model::GetChangeOrderMetricRequest& request) const;
			GetScaleAppMetricOutcome getScaleAppMetric(const Model::GetScaleAppMetricRequest &request)const;
			void getScaleAppMetricAsync(const Model::GetScaleAppMetricRequest& request, const GetScaleAppMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetScaleAppMetricOutcomeCallable getScaleAppMetricCallable(const Model::GetScaleAppMetricRequest& request) const;
			GetWarningEventMetricOutcome getWarningEventMetric(const Model::GetWarningEventMetricRequest &request)const;
			void getWarningEventMetricAsync(const Model::GetWarningEventMetricRequest& request, const GetWarningEventMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWarningEventMetricOutcomeCallable getWarningEventMetricCallable(const Model::GetWarningEventMetricRequest& request) const;
			ListAppEventsOutcome listAppEvents(const Model::ListAppEventsRequest &request)const;
			void listAppEventsAsync(const Model::ListAppEventsRequest& request, const ListAppEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAppEventsOutcomeCallable listAppEventsCallable(const Model::ListAppEventsRequest& request) const;
			ListAppServicesPageOutcome listAppServicesPage(const Model::ListAppServicesPageRequest &request)const;
			void listAppServicesPageAsync(const Model::ListAppServicesPageRequest& request, const ListAppServicesPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAppServicesPageOutcomeCallable listAppServicesPageCallable(const Model::ListAppServicesPageRequest& request) const;
			ListAppVersionsOutcome listAppVersions(const Model::ListAppVersionsRequest &request)const;
			void listAppVersionsAsync(const Model::ListAppVersionsRequest& request, const ListAppVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAppVersionsOutcomeCallable listAppVersionsCallable(const Model::ListAppVersionsRequest& request) const;
			ListApplicationsOutcome listApplications(const Model::ListApplicationsRequest &request)const;
			void listApplicationsAsync(const Model::ListApplicationsRequest& request, const ListApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApplicationsOutcomeCallable listApplicationsCallable(const Model::ListApplicationsRequest& request) const;
			ListChangeOrdersOutcome listChangeOrders(const Model::ListChangeOrdersRequest &request)const;
			void listChangeOrdersAsync(const Model::ListChangeOrdersRequest& request, const ListChangeOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListChangeOrdersOutcomeCallable listChangeOrdersCallable(const Model::ListChangeOrdersRequest& request) const;
			ListConsumedServicesOutcome listConsumedServices(const Model::ListConsumedServicesRequest &request)const;
			void listConsumedServicesAsync(const Model::ListConsumedServicesRequest& request, const ListConsumedServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListConsumedServicesOutcomeCallable listConsumedServicesCallable(const Model::ListConsumedServicesRequest& request) const;
			ListGreyTagRouteOutcome listGreyTagRoute(const Model::ListGreyTagRouteRequest &request)const;
			void listGreyTagRouteAsync(const Model::ListGreyTagRouteRequest& request, const ListGreyTagRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGreyTagRouteOutcomeCallable listGreyTagRouteCallable(const Model::ListGreyTagRouteRequest& request) const;
			ListIngressesOutcome listIngresses(const Model::ListIngressesRequest &request)const;
			void listIngressesAsync(const Model::ListIngressesRequest& request, const ListIngressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListIngressesOutcomeCallable listIngressesCallable(const Model::ListIngressesRequest& request) const;
			ListJobsOutcome listJobs(const Model::ListJobsRequest &request)const;
			void listJobsAsync(const Model::ListJobsRequest& request, const ListJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobsOutcomeCallable listJobsCallable(const Model::ListJobsRequest& request) const;
			ListLogConfigsOutcome listLogConfigs(const Model::ListLogConfigsRequest &request)const;
			void listLogConfigsAsync(const Model::ListLogConfigsRequest& request, const ListLogConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLogConfigsOutcomeCallable listLogConfigsCallable(const Model::ListLogConfigsRequest& request) const;
			ListNamespaceChangeOrdersOutcome listNamespaceChangeOrders(const Model::ListNamespaceChangeOrdersRequest &request)const;
			void listNamespaceChangeOrdersAsync(const Model::ListNamespaceChangeOrdersRequest& request, const ListNamespaceChangeOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNamespaceChangeOrdersOutcomeCallable listNamespaceChangeOrdersCallable(const Model::ListNamespaceChangeOrdersRequest& request) const;
			ListNamespacedConfigMapsOutcome listNamespacedConfigMaps(const Model::ListNamespacedConfigMapsRequest &request)const;
			void listNamespacedConfigMapsAsync(const Model::ListNamespacedConfigMapsRequest& request, const ListNamespacedConfigMapsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNamespacedConfigMapsOutcomeCallable listNamespacedConfigMapsCallable(const Model::ListNamespacedConfigMapsRequest& request) const;
			ListPublishedServicesOutcome listPublishedServices(const Model::ListPublishedServicesRequest &request)const;
			void listPublishedServicesAsync(const Model::ListPublishedServicesRequest& request, const ListPublishedServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListPublishedServicesOutcomeCallable listPublishedServicesCallable(const Model::ListPublishedServicesRequest& request) const;
			ListSecretsOutcome listSecrets(const Model::ListSecretsRequest &request)const;
			void listSecretsAsync(const Model::ListSecretsRequest& request, const ListSecretsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSecretsOutcomeCallable listSecretsCallable(const Model::ListSecretsRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			OpenSaeServiceOutcome openSaeService(const Model::OpenSaeServiceRequest &request)const;
			void openSaeServiceAsync(const Model::OpenSaeServiceRequest& request, const OpenSaeServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenSaeServiceOutcomeCallable openSaeServiceCallable(const Model::OpenSaeServiceRequest& request) const;
			QueryResourceStaticsOutcome queryResourceStatics(const Model::QueryResourceStaticsRequest &request)const;
			void queryResourceStaticsAsync(const Model::QueryResourceStaticsRequest& request, const QueryResourceStaticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryResourceStaticsOutcomeCallable queryResourceStaticsCallable(const Model::QueryResourceStaticsRequest& request) const;
			ReduceApplicationCapacityByInstanceIdsOutcome reduceApplicationCapacityByInstanceIds(const Model::ReduceApplicationCapacityByInstanceIdsRequest &request)const;
			void reduceApplicationCapacityByInstanceIdsAsync(const Model::ReduceApplicationCapacityByInstanceIdsRequest& request, const ReduceApplicationCapacityByInstanceIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReduceApplicationCapacityByInstanceIdsOutcomeCallable reduceApplicationCapacityByInstanceIdsCallable(const Model::ReduceApplicationCapacityByInstanceIdsRequest& request) const;
			RescaleApplicationOutcome rescaleApplication(const Model::RescaleApplicationRequest &request)const;
			void rescaleApplicationAsync(const Model::RescaleApplicationRequest& request, const RescaleApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RescaleApplicationOutcomeCallable rescaleApplicationCallable(const Model::RescaleApplicationRequest& request) const;
			RescaleApplicationVerticallyOutcome rescaleApplicationVertically(const Model::RescaleApplicationVerticallyRequest &request)const;
			void rescaleApplicationVerticallyAsync(const Model::RescaleApplicationVerticallyRequest& request, const RescaleApplicationVerticallyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RescaleApplicationVerticallyOutcomeCallable rescaleApplicationVerticallyCallable(const Model::RescaleApplicationVerticallyRequest& request) const;
			RestartApplicationOutcome restartApplication(const Model::RestartApplicationRequest &request)const;
			void restartApplicationAsync(const Model::RestartApplicationRequest& request, const RestartApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartApplicationOutcomeCallable restartApplicationCallable(const Model::RestartApplicationRequest& request) const;
			RestartInstancesOutcome restartInstances(const Model::RestartInstancesRequest &request)const;
			void restartInstancesAsync(const Model::RestartInstancesRequest& request, const RestartInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartInstancesOutcomeCallable restartInstancesCallable(const Model::RestartInstancesRequest& request) const;
			RollbackApplicationOutcome rollbackApplication(const Model::RollbackApplicationRequest &request)const;
			void rollbackApplicationAsync(const Model::RollbackApplicationRequest& request, const RollbackApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RollbackApplicationOutcomeCallable rollbackApplicationCallable(const Model::RollbackApplicationRequest& request) const;
			StartApplicationOutcome startApplication(const Model::StartApplicationRequest &request)const;
			void startApplicationAsync(const Model::StartApplicationRequest& request, const StartApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartApplicationOutcomeCallable startApplicationCallable(const Model::StartApplicationRequest& request) const;
			StopApplicationOutcome stopApplication(const Model::StopApplicationRequest &request)const;
			void stopApplicationAsync(const Model::StopApplicationRequest& request, const StopApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopApplicationOutcomeCallable stopApplicationCallable(const Model::StopApplicationRequest& request) const;
			SuspendJobOutcome suspendJob(const Model::SuspendJobRequest &request)const;
			void suspendJobAsync(const Model::SuspendJobRequest& request, const SuspendJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SuspendJobOutcomeCallable suspendJobCallable(const Model::SuspendJobRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UnbindSlbOutcome unbindSlb(const Model::UnbindSlbRequest &request)const;
			void unbindSlbAsync(const Model::UnbindSlbRequest& request, const UnbindSlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindSlbOutcomeCallable unbindSlbCallable(const Model::UnbindSlbRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpdateAppSecurityGroupOutcome updateAppSecurityGroup(const Model::UpdateAppSecurityGroupRequest &request)const;
			void updateAppSecurityGroupAsync(const Model::UpdateAppSecurityGroupRequest& request, const UpdateAppSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAppSecurityGroupOutcomeCallable updateAppSecurityGroupCallable(const Model::UpdateAppSecurityGroupRequest& request) const;
			UpdateApplicationDescriptionOutcome updateApplicationDescription(const Model::UpdateApplicationDescriptionRequest &request)const;
			void updateApplicationDescriptionAsync(const Model::UpdateApplicationDescriptionRequest& request, const UpdateApplicationDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateApplicationDescriptionOutcomeCallable updateApplicationDescriptionCallable(const Model::UpdateApplicationDescriptionRequest& request) const;
			UpdateApplicationScalingRuleOutcome updateApplicationScalingRule(const Model::UpdateApplicationScalingRuleRequest &request)const;
			void updateApplicationScalingRuleAsync(const Model::UpdateApplicationScalingRuleRequest& request, const UpdateApplicationScalingRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateApplicationScalingRuleOutcomeCallable updateApplicationScalingRuleCallable(const Model::UpdateApplicationScalingRuleRequest& request) const;
			UpdateApplicationVswitchesOutcome updateApplicationVswitches(const Model::UpdateApplicationVswitchesRequest &request)const;
			void updateApplicationVswitchesAsync(const Model::UpdateApplicationVswitchesRequest& request, const UpdateApplicationVswitchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateApplicationVswitchesOutcomeCallable updateApplicationVswitchesCallable(const Model::UpdateApplicationVswitchesRequest& request) const;
			UpdateConfigMapOutcome updateConfigMap(const Model::UpdateConfigMapRequest &request)const;
			void updateConfigMapAsync(const Model::UpdateConfigMapRequest& request, const UpdateConfigMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateConfigMapOutcomeCallable updateConfigMapCallable(const Model::UpdateConfigMapRequest& request) const;
			UpdateGreyTagRouteOutcome updateGreyTagRoute(const Model::UpdateGreyTagRouteRequest &request)const;
			void updateGreyTagRouteAsync(const Model::UpdateGreyTagRouteRequest& request, const UpdateGreyTagRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGreyTagRouteOutcomeCallable updateGreyTagRouteCallable(const Model::UpdateGreyTagRouteRequest& request) const;
			UpdateIngressOutcome updateIngress(const Model::UpdateIngressRequest &request)const;
			void updateIngressAsync(const Model::UpdateIngressRequest& request, const UpdateIngressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateIngressOutcomeCallable updateIngressCallable(const Model::UpdateIngressRequest& request) const;
			UpdateJobOutcome updateJob(const Model::UpdateJobRequest &request)const;
			void updateJobAsync(const Model::UpdateJobRequest& request, const UpdateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateJobOutcomeCallable updateJobCallable(const Model::UpdateJobRequest& request) const;
			UpdateNamespaceOutcome updateNamespace(const Model::UpdateNamespaceRequest &request)const;
			void updateNamespaceAsync(const Model::UpdateNamespaceRequest& request, const UpdateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateNamespaceOutcomeCallable updateNamespaceCallable(const Model::UpdateNamespaceRequest& request) const;
			UpdateNamespaceVpcOutcome updateNamespaceVpc(const Model::UpdateNamespaceVpcRequest &request)const;
			void updateNamespaceVpcAsync(const Model::UpdateNamespaceVpcRequest& request, const UpdateNamespaceVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateNamespaceVpcOutcomeCallable updateNamespaceVpcCallable(const Model::UpdateNamespaceVpcRequest& request) const;
			UpdateSecretOutcome updateSecret(const Model::UpdateSecretRequest &request)const;
			void updateSecretAsync(const Model::UpdateSecretRequest& request, const UpdateSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSecretOutcomeCallable updateSecretCallable(const Model::UpdateSecretRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_SAE_SAECLIENT_H_
