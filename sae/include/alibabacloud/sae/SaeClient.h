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
#include "model/CreateConfigMapRequest.h"
#include "model/CreateConfigMapResult.h"
#include "model/CreateIngressRequest.h"
#include "model/CreateIngressResult.h"
#include "model/CreateNamespaceRequest.h"
#include "model/CreateNamespaceResult.h"
#include "model/DeleteApplicationRequest.h"
#include "model/DeleteApplicationResult.h"
#include "model/DeleteConfigMapRequest.h"
#include "model/DeleteConfigMapResult.h"
#include "model/DeleteIngressRequest.h"
#include "model/DeleteIngressResult.h"
#include "model/DeleteNamespaceRequest.h"
#include "model/DeleteNamespaceResult.h"
#include "model/DeployApplicationRequest.h"
#include "model/DeployApplicationResult.h"
#include "model/DescribeApplicationConfigRequest.h"
#include "model/DescribeApplicationConfigResult.h"
#include "model/DescribeApplicationGroupsRequest.h"
#include "model/DescribeApplicationGroupsResult.h"
#include "model/DescribeApplicationImageRequest.h"
#include "model/DescribeApplicationImageResult.h"
#include "model/DescribeApplicationInstancesRequest.h"
#include "model/DescribeApplicationInstancesResult.h"
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
#include "model/DescribeEdasContainersRequest.h"
#include "model/DescribeEdasContainersResult.h"
#include "model/DescribeIngressRequest.h"
#include "model/DescribeIngressResult.h"
#include "model/DescribeInstanceLogRequest.h"
#include "model/DescribeInstanceLogResult.h"
#include "model/DescribeInstanceSpecificationsRequest.h"
#include "model/DescribeInstanceSpecificationsResult.h"
#include "model/DescribeNamespaceRequest.h"
#include "model/DescribeNamespaceResult.h"
#include "model/DescribeNamespaceListRequest.h"
#include "model/DescribeNamespaceListResult.h"
#include "model/DescribeNamespaceResourcesRequest.h"
#include "model/DescribeNamespaceResourcesResult.h"
#include "model/DescribeNamespacesRequest.h"
#include "model/DescribeNamespacesResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/ListAppEventsRequest.h"
#include "model/ListAppEventsResult.h"
#include "model/ListAppVersionsRequest.h"
#include "model/ListAppVersionsResult.h"
#include "model/ListApplicationsRequest.h"
#include "model/ListApplicationsResult.h"
#include "model/ListChangeOrdersRequest.h"
#include "model/ListChangeOrdersResult.h"
#include "model/ListConsumedServicesRequest.h"
#include "model/ListConsumedServicesResult.h"
#include "model/ListIngressesRequest.h"
#include "model/ListIngressesResult.h"
#include "model/ListLogConfigsRequest.h"
#include "model/ListLogConfigsResult.h"
#include "model/ListNamespaceChangeOrdersRequest.h"
#include "model/ListNamespaceChangeOrdersResult.h"
#include "model/ListNamespacedConfigMapsRequest.h"
#include "model/ListNamespacedConfigMapsResult.h"
#include "model/ListPublishedServicesRequest.h"
#include "model/ListPublishedServicesResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/QueryResourceStaticsRequest.h"
#include "model/QueryResourceStaticsResult.h"
#include "model/RescaleApplicationRequest.h"
#include "model/RescaleApplicationResult.h"
#include "model/RescaleApplicationVerticallyRequest.h"
#include "model/RescaleApplicationVerticallyResult.h"
#include "model/RestartApplicationRequest.h"
#include "model/RestartApplicationResult.h"
#include "model/RollbackApplicationRequest.h"
#include "model/RollbackApplicationResult.h"
#include "model/StartApplicationRequest.h"
#include "model/StartApplicationResult.h"
#include "model/StopApplicationRequest.h"
#include "model/StopApplicationResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UnbindSlbRequest.h"
#include "model/UnbindSlbResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpdateAppSecurityGroupRequest.h"
#include "model/UpdateAppSecurityGroupResult.h"
#include "model/UpdateConfigMapRequest.h"
#include "model/UpdateConfigMapResult.h"
#include "model/UpdateIngressRequest.h"
#include "model/UpdateIngressResult.h"
#include "model/UpdateNamespaceRequest.h"
#include "model/UpdateNamespaceResult.h"
#include "model/UpdateNamespaceVpcRequest.h"
#include "model/UpdateNamespaceVpcResult.h"


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
			typedef Outcome<Error, Model::CreateConfigMapResult> CreateConfigMapOutcome;
			typedef std::future<CreateConfigMapOutcome> CreateConfigMapOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::CreateConfigMapRequest&, const CreateConfigMapOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateConfigMapAsyncHandler;
			typedef Outcome<Error, Model::CreateIngressResult> CreateIngressOutcome;
			typedef std::future<CreateIngressOutcome> CreateIngressOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::CreateIngressRequest&, const CreateIngressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateIngressAsyncHandler;
			typedef Outcome<Error, Model::CreateNamespaceResult> CreateNamespaceOutcome;
			typedef std::future<CreateNamespaceOutcome> CreateNamespaceOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::CreateNamespaceRequest&, const CreateNamespaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNamespaceAsyncHandler;
			typedef Outcome<Error, Model::DeleteApplicationResult> DeleteApplicationOutcome;
			typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DeleteApplicationRequest&, const DeleteApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationAsyncHandler;
			typedef Outcome<Error, Model::DeleteConfigMapResult> DeleteConfigMapOutcome;
			typedef std::future<DeleteConfigMapOutcome> DeleteConfigMapOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DeleteConfigMapRequest&, const DeleteConfigMapOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteConfigMapAsyncHandler;
			typedef Outcome<Error, Model::DeleteIngressResult> DeleteIngressOutcome;
			typedef std::future<DeleteIngressOutcome> DeleteIngressOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DeleteIngressRequest&, const DeleteIngressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIngressAsyncHandler;
			typedef Outcome<Error, Model::DeleteNamespaceResult> DeleteNamespaceOutcome;
			typedef std::future<DeleteNamespaceOutcome> DeleteNamespaceOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DeleteNamespaceRequest&, const DeleteNamespaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNamespaceAsyncHandler;
			typedef Outcome<Error, Model::DeployApplicationResult> DeployApplicationOutcome;
			typedef std::future<DeployApplicationOutcome> DeployApplicationOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DeployApplicationRequest&, const DeployApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeployApplicationAsyncHandler;
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
			typedef Outcome<Error, Model::DescribeEdasContainersResult> DescribeEdasContainersOutcome;
			typedef std::future<DescribeEdasContainersOutcome> DescribeEdasContainersOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DescribeEdasContainersRequest&, const DescribeEdasContainersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEdasContainersAsyncHandler;
			typedef Outcome<Error, Model::DescribeIngressResult> DescribeIngressOutcome;
			typedef std::future<DescribeIngressOutcome> DescribeIngressOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DescribeIngressRequest&, const DescribeIngressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIngressAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceLogResult> DescribeInstanceLogOutcome;
			typedef std::future<DescribeInstanceLogOutcome> DescribeInstanceLogOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DescribeInstanceLogRequest&, const DescribeInstanceLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceSpecificationsResult> DescribeInstanceSpecificationsOutcome;
			typedef std::future<DescribeInstanceSpecificationsOutcome> DescribeInstanceSpecificationsOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DescribeInstanceSpecificationsRequest&, const DescribeInstanceSpecificationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceSpecificationsAsyncHandler;
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
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::ListAppEventsResult> ListAppEventsOutcome;
			typedef std::future<ListAppEventsOutcome> ListAppEventsOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::ListAppEventsRequest&, const ListAppEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAppEventsAsyncHandler;
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
			typedef Outcome<Error, Model::ListIngressesResult> ListIngressesOutcome;
			typedef std::future<ListIngressesOutcome> ListIngressesOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::ListIngressesRequest&, const ListIngressesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListIngressesAsyncHandler;
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
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::QueryResourceStaticsResult> QueryResourceStaticsOutcome;
			typedef std::future<QueryResourceStaticsOutcome> QueryResourceStaticsOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::QueryResourceStaticsRequest&, const QueryResourceStaticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryResourceStaticsAsyncHandler;
			typedef Outcome<Error, Model::RescaleApplicationResult> RescaleApplicationOutcome;
			typedef std::future<RescaleApplicationOutcome> RescaleApplicationOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::RescaleApplicationRequest&, const RescaleApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RescaleApplicationAsyncHandler;
			typedef Outcome<Error, Model::RescaleApplicationVerticallyResult> RescaleApplicationVerticallyOutcome;
			typedef std::future<RescaleApplicationVerticallyOutcome> RescaleApplicationVerticallyOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::RescaleApplicationVerticallyRequest&, const RescaleApplicationVerticallyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RescaleApplicationVerticallyAsyncHandler;
			typedef Outcome<Error, Model::RestartApplicationResult> RestartApplicationOutcome;
			typedef std::future<RestartApplicationOutcome> RestartApplicationOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::RestartApplicationRequest&, const RestartApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartApplicationAsyncHandler;
			typedef Outcome<Error, Model::RollbackApplicationResult> RollbackApplicationOutcome;
			typedef std::future<RollbackApplicationOutcome> RollbackApplicationOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::RollbackApplicationRequest&, const RollbackApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RollbackApplicationAsyncHandler;
			typedef Outcome<Error, Model::StartApplicationResult> StartApplicationOutcome;
			typedef std::future<StartApplicationOutcome> StartApplicationOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::StartApplicationRequest&, const StartApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartApplicationAsyncHandler;
			typedef Outcome<Error, Model::StopApplicationResult> StopApplicationOutcome;
			typedef std::future<StopApplicationOutcome> StopApplicationOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::StopApplicationRequest&, const StopApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopApplicationAsyncHandler;
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
			typedef Outcome<Error, Model::UpdateConfigMapResult> UpdateConfigMapOutcome;
			typedef std::future<UpdateConfigMapOutcome> UpdateConfigMapOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::UpdateConfigMapRequest&, const UpdateConfigMapOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateConfigMapAsyncHandler;
			typedef Outcome<Error, Model::UpdateIngressResult> UpdateIngressOutcome;
			typedef std::future<UpdateIngressOutcome> UpdateIngressOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::UpdateIngressRequest&, const UpdateIngressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateIngressAsyncHandler;
			typedef Outcome<Error, Model::UpdateNamespaceResult> UpdateNamespaceOutcome;
			typedef std::future<UpdateNamespaceOutcome> UpdateNamespaceOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::UpdateNamespaceRequest&, const UpdateNamespaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateNamespaceAsyncHandler;
			typedef Outcome<Error, Model::UpdateNamespaceVpcResult> UpdateNamespaceVpcOutcome;
			typedef std::future<UpdateNamespaceVpcOutcome> UpdateNamespaceVpcOutcomeCallable;
			typedef std::function<void(const SaeClient*, const Model::UpdateNamespaceVpcRequest&, const UpdateNamespaceVpcOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateNamespaceVpcAsyncHandler;

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
			CreateConfigMapOutcome createConfigMap(const Model::CreateConfigMapRequest &request)const;
			void createConfigMapAsync(const Model::CreateConfigMapRequest& request, const CreateConfigMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateConfigMapOutcomeCallable createConfigMapCallable(const Model::CreateConfigMapRequest& request) const;
			CreateIngressOutcome createIngress(const Model::CreateIngressRequest &request)const;
			void createIngressAsync(const Model::CreateIngressRequest& request, const CreateIngressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateIngressOutcomeCallable createIngressCallable(const Model::CreateIngressRequest& request) const;
			CreateNamespaceOutcome createNamespace(const Model::CreateNamespaceRequest &request)const;
			void createNamespaceAsync(const Model::CreateNamespaceRequest& request, const CreateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNamespaceOutcomeCallable createNamespaceCallable(const Model::CreateNamespaceRequest& request) const;
			DeleteApplicationOutcome deleteApplication(const Model::DeleteApplicationRequest &request)const;
			void deleteApplicationAsync(const Model::DeleteApplicationRequest& request, const DeleteApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteApplicationOutcomeCallable deleteApplicationCallable(const Model::DeleteApplicationRequest& request) const;
			DeleteConfigMapOutcome deleteConfigMap(const Model::DeleteConfigMapRequest &request)const;
			void deleteConfigMapAsync(const Model::DeleteConfigMapRequest& request, const DeleteConfigMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteConfigMapOutcomeCallable deleteConfigMapCallable(const Model::DeleteConfigMapRequest& request) const;
			DeleteIngressOutcome deleteIngress(const Model::DeleteIngressRequest &request)const;
			void deleteIngressAsync(const Model::DeleteIngressRequest& request, const DeleteIngressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteIngressOutcomeCallable deleteIngressCallable(const Model::DeleteIngressRequest& request) const;
			DeleteNamespaceOutcome deleteNamespace(const Model::DeleteNamespaceRequest &request)const;
			void deleteNamespaceAsync(const Model::DeleteNamespaceRequest& request, const DeleteNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNamespaceOutcomeCallable deleteNamespaceCallable(const Model::DeleteNamespaceRequest& request) const;
			DeployApplicationOutcome deployApplication(const Model::DeployApplicationRequest &request)const;
			void deployApplicationAsync(const Model::DeployApplicationRequest& request, const DeployApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeployApplicationOutcomeCallable deployApplicationCallable(const Model::DeployApplicationRequest& request) const;
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
			DescribeEdasContainersOutcome describeEdasContainers(const Model::DescribeEdasContainersRequest &request)const;
			void describeEdasContainersAsync(const Model::DescribeEdasContainersRequest& request, const DescribeEdasContainersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeEdasContainersOutcomeCallable describeEdasContainersCallable(const Model::DescribeEdasContainersRequest& request) const;
			DescribeIngressOutcome describeIngress(const Model::DescribeIngressRequest &request)const;
			void describeIngressAsync(const Model::DescribeIngressRequest& request, const DescribeIngressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIngressOutcomeCallable describeIngressCallable(const Model::DescribeIngressRequest& request) const;
			DescribeInstanceLogOutcome describeInstanceLog(const Model::DescribeInstanceLogRequest &request)const;
			void describeInstanceLogAsync(const Model::DescribeInstanceLogRequest& request, const DescribeInstanceLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceLogOutcomeCallable describeInstanceLogCallable(const Model::DescribeInstanceLogRequest& request) const;
			DescribeInstanceSpecificationsOutcome describeInstanceSpecifications(const Model::DescribeInstanceSpecificationsRequest &request)const;
			void describeInstanceSpecificationsAsync(const Model::DescribeInstanceSpecificationsRequest& request, const DescribeInstanceSpecificationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceSpecificationsOutcomeCallable describeInstanceSpecificationsCallable(const Model::DescribeInstanceSpecificationsRequest& request) const;
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
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			ListAppEventsOutcome listAppEvents(const Model::ListAppEventsRequest &request)const;
			void listAppEventsAsync(const Model::ListAppEventsRequest& request, const ListAppEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAppEventsOutcomeCallable listAppEventsCallable(const Model::ListAppEventsRequest& request) const;
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
			ListIngressesOutcome listIngresses(const Model::ListIngressesRequest &request)const;
			void listIngressesAsync(const Model::ListIngressesRequest& request, const ListIngressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListIngressesOutcomeCallable listIngressesCallable(const Model::ListIngressesRequest& request) const;
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
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			QueryResourceStaticsOutcome queryResourceStatics(const Model::QueryResourceStaticsRequest &request)const;
			void queryResourceStaticsAsync(const Model::QueryResourceStaticsRequest& request, const QueryResourceStaticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryResourceStaticsOutcomeCallable queryResourceStaticsCallable(const Model::QueryResourceStaticsRequest& request) const;
			RescaleApplicationOutcome rescaleApplication(const Model::RescaleApplicationRequest &request)const;
			void rescaleApplicationAsync(const Model::RescaleApplicationRequest& request, const RescaleApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RescaleApplicationOutcomeCallable rescaleApplicationCallable(const Model::RescaleApplicationRequest& request) const;
			RescaleApplicationVerticallyOutcome rescaleApplicationVertically(const Model::RescaleApplicationVerticallyRequest &request)const;
			void rescaleApplicationVerticallyAsync(const Model::RescaleApplicationVerticallyRequest& request, const RescaleApplicationVerticallyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RescaleApplicationVerticallyOutcomeCallable rescaleApplicationVerticallyCallable(const Model::RescaleApplicationVerticallyRequest& request) const;
			RestartApplicationOutcome restartApplication(const Model::RestartApplicationRequest &request)const;
			void restartApplicationAsync(const Model::RestartApplicationRequest& request, const RestartApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartApplicationOutcomeCallable restartApplicationCallable(const Model::RestartApplicationRequest& request) const;
			RollbackApplicationOutcome rollbackApplication(const Model::RollbackApplicationRequest &request)const;
			void rollbackApplicationAsync(const Model::RollbackApplicationRequest& request, const RollbackApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RollbackApplicationOutcomeCallable rollbackApplicationCallable(const Model::RollbackApplicationRequest& request) const;
			StartApplicationOutcome startApplication(const Model::StartApplicationRequest &request)const;
			void startApplicationAsync(const Model::StartApplicationRequest& request, const StartApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartApplicationOutcomeCallable startApplicationCallable(const Model::StartApplicationRequest& request) const;
			StopApplicationOutcome stopApplication(const Model::StopApplicationRequest &request)const;
			void stopApplicationAsync(const Model::StopApplicationRequest& request, const StopApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopApplicationOutcomeCallable stopApplicationCallable(const Model::StopApplicationRequest& request) const;
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
			UpdateConfigMapOutcome updateConfigMap(const Model::UpdateConfigMapRequest &request)const;
			void updateConfigMapAsync(const Model::UpdateConfigMapRequest& request, const UpdateConfigMapAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateConfigMapOutcomeCallable updateConfigMapCallable(const Model::UpdateConfigMapRequest& request) const;
			UpdateIngressOutcome updateIngress(const Model::UpdateIngressRequest &request)const;
			void updateIngressAsync(const Model::UpdateIngressRequest& request, const UpdateIngressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateIngressOutcomeCallable updateIngressCallable(const Model::UpdateIngressRequest& request) const;
			UpdateNamespaceOutcome updateNamespace(const Model::UpdateNamespaceRequest &request)const;
			void updateNamespaceAsync(const Model::UpdateNamespaceRequest& request, const UpdateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateNamespaceOutcomeCallable updateNamespaceCallable(const Model::UpdateNamespaceRequest& request) const;
			UpdateNamespaceVpcOutcome updateNamespaceVpc(const Model::UpdateNamespaceVpcRequest &request)const;
			void updateNamespaceVpcAsync(const Model::UpdateNamespaceVpcRequest& request, const UpdateNamespaceVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateNamespaceVpcOutcomeCallable updateNamespaceVpcCallable(const Model::UpdateNamespaceVpcRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_SAE_SAECLIENT_H_
