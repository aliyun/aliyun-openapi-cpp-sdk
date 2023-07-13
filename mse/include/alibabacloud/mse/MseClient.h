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

#ifndef ALIBABACLOUD_MSE_MSECLIENT_H_
#define ALIBABACLOUD_MSE_MSECLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "MseExport.h"
#include "model/AddAuthPolicyRequest.h"
#include "model/AddAuthPolicyResult.h"
#include "model/AddAuthResourceRequest.h"
#include "model/AddAuthResourceResult.h"
#include "model/AddBlackWhiteListRequest.h"
#include "model/AddBlackWhiteListResult.h"
#include "model/AddGatewayRequest.h"
#include "model/AddGatewayResult.h"
#include "model/AddGatewayAuthConsumerRequest.h"
#include "model/AddGatewayAuthConsumerResult.h"
#include "model/AddGatewayDomainRequest.h"
#include "model/AddGatewayDomainResult.h"
#include "model/AddGatewayRouteRequest.h"
#include "model/AddGatewayRouteResult.h"
#include "model/AddGatewayServiceVersionRequest.h"
#include "model/AddGatewayServiceVersionResult.h"
#include "model/AddGatewaySlbRequest.h"
#include "model/AddGatewaySlbResult.h"
#include "model/AddMigrationTaskRequest.h"
#include "model/AddMigrationTaskResult.h"
#include "model/AddMockRuleRequest.h"
#include "model/AddMockRuleResult.h"
#include "model/AddSSLCertRequest.h"
#include "model/AddSSLCertResult.h"
#include "model/AddSecurityGroupRuleRequest.h"
#include "model/AddSecurityGroupRuleResult.h"
#include "model/AddServiceSourceRequest.h"
#include "model/AddServiceSourceResult.h"
#include "model/ApplyGatewayRouteRequest.h"
#include "model/ApplyGatewayRouteResult.h"
#include "model/ApplyTagPoliciesRequest.h"
#include "model/ApplyTagPoliciesResult.h"
#include "model/CloneNacosConfigRequest.h"
#include "model/CloneNacosConfigResult.h"
#include "model/CreateApplicationRequest.h"
#include "model/CreateApplicationResult.h"
#include "model/CreateCircuitBreakerRuleRequest.h"
#include "model/CreateCircuitBreakerRuleResult.h"
#include "model/CreateClusterRequest.h"
#include "model/CreateClusterResult.h"
#include "model/CreateEngineNamespaceRequest.h"
#include "model/CreateEngineNamespaceResult.h"
#include "model/CreateFlowRuleRequest.h"
#include "model/CreateFlowRuleResult.h"
#include "model/CreateMseServiceApplicationRequest.h"
#include "model/CreateMseServiceApplicationResult.h"
#include "model/CreateNacosConfigRequest.h"
#include "model/CreateNacosConfigResult.h"
#include "model/CreateNacosInstanceRequest.h"
#include "model/CreateNacosInstanceResult.h"
#include "model/CreateNacosServiceRequest.h"
#include "model/CreateNacosServiceResult.h"
#include "model/CreateOrUpdateSwimmingLaneRequest.h"
#include "model/CreateOrUpdateSwimmingLaneResult.h"
#include "model/CreateOrUpdateSwimmingLaneGroupRequest.h"
#include "model/CreateOrUpdateSwimmingLaneGroupResult.h"
#include "model/CreateZnodeRequest.h"
#include "model/CreateZnodeResult.h"
#include "model/DeleteAuthResourceRequest.h"
#include "model/DeleteAuthResourceResult.h"
#include "model/DeleteCircuitBreakerRulesRequest.h"
#include "model/DeleteCircuitBreakerRulesResult.h"
#include "model/DeleteClusterRequest.h"
#include "model/DeleteClusterResult.h"
#include "model/DeleteEngineNamespaceRequest.h"
#include "model/DeleteEngineNamespaceResult.h"
#include "model/DeleteFlowRulesRequest.h"
#include "model/DeleteFlowRulesResult.h"
#include "model/DeleteGatewayRequest.h"
#include "model/DeleteGatewayResult.h"
#include "model/DeleteGatewayAuthConsumerRequest.h"
#include "model/DeleteGatewayAuthConsumerResult.h"
#include "model/DeleteGatewayAuthConsumerResourceRequest.h"
#include "model/DeleteGatewayAuthConsumerResourceResult.h"
#include "model/DeleteGatewayDomainRequest.h"
#include "model/DeleteGatewayDomainResult.h"
#include "model/DeleteGatewayRouteRequest.h"
#include "model/DeleteGatewayRouteResult.h"
#include "model/DeleteGatewayServiceRequest.h"
#include "model/DeleteGatewayServiceResult.h"
#include "model/DeleteGatewayServiceVersionRequest.h"
#include "model/DeleteGatewayServiceVersionResult.h"
#include "model/DeleteGatewaySlbRequest.h"
#include "model/DeleteGatewaySlbResult.h"
#include "model/DeleteMigrationTaskRequest.h"
#include "model/DeleteMigrationTaskResult.h"
#include "model/DeleteNacosConfigRequest.h"
#include "model/DeleteNacosConfigResult.h"
#include "model/DeleteNacosConfigsRequest.h"
#include "model/DeleteNacosConfigsResult.h"
#include "model/DeleteNacosInstanceRequest.h"
#include "model/DeleteNacosInstanceResult.h"
#include "model/DeleteNacosServiceRequest.h"
#include "model/DeleteNacosServiceResult.h"
#include "model/DeleteNamespaceRequest.h"
#include "model/DeleteNamespaceResult.h"
#include "model/DeleteSecurityGroupRuleRequest.h"
#include "model/DeleteSecurityGroupRuleResult.h"
#include "model/DeleteServiceSourceRequest.h"
#include "model/DeleteServiceSourceResult.h"
#include "model/DeleteSwimmingLaneRequest.h"
#include "model/DeleteSwimmingLaneResult.h"
#include "model/DeleteSwimmingLaneGroupRequest.h"
#include "model/DeleteSwimmingLaneGroupResult.h"
#include "model/DeleteZnodeRequest.h"
#include "model/DeleteZnodeResult.h"
#include "model/ExportNacosConfigRequest.h"
#include "model/ExportNacosConfigResult.h"
#include "model/ExportZookeeperDataRequest.h"
#include "model/ExportZookeeperDataResult.h"
#include "model/FetchLosslessRuleListRequest.h"
#include "model/FetchLosslessRuleListResult.h"
#include "model/GetAppMessageQueueRouteRequest.h"
#include "model/GetAppMessageQueueRouteResult.h"
#include "model/GetApplicationListRequest.h"
#include "model/GetApplicationListResult.h"
#include "model/GetApplicationListWithMetircsRequest.h"
#include "model/GetApplicationListWithMetircsResult.h"
#include "model/GetBlackWhiteListRequest.h"
#include "model/GetBlackWhiteListResult.h"
#include "model/GetEngineNamepaceRequest.h"
#include "model/GetEngineNamepaceResult.h"
#include "model/GetGatewayRequest.h"
#include "model/GetGatewayResult.h"
#include "model/GetGatewayAuthConsumerDetailRequest.h"
#include "model/GetGatewayAuthConsumerDetailResult.h"
#include "model/GetGatewayDomainDetailRequest.h"
#include "model/GetGatewayDomainDetailResult.h"
#include "model/GetGatewayOptionRequest.h"
#include "model/GetGatewayOptionResult.h"
#include "model/GetGatewayRouteDetailRequest.h"
#include "model/GetGatewayRouteDetailResult.h"
#include "model/GetGatewayServiceDetailRequest.h"
#include "model/GetGatewayServiceDetailResult.h"
#include "model/GetGovernanceKubernetesClusterRequest.h"
#include "model/GetGovernanceKubernetesClusterResult.h"
#include "model/GetImageRequest.h"
#include "model/GetImageResult.h"
#include "model/GetImportFileUrlRequest.h"
#include "model/GetImportFileUrlResult.h"
#include "model/GetKubernetesSourceRequest.h"
#include "model/GetKubernetesSourceResult.h"
#include "model/GetLosslessRuleByAppRequest.h"
#include "model/GetLosslessRuleByAppResult.h"
#include "model/GetMseFeatureSwitchRequest.h"
#include "model/GetMseFeatureSwitchResult.h"
#include "model/GetMseSourceRequest.h"
#include "model/GetMseSourceResult.h"
#include "model/GetNacosConfigRequest.h"
#include "model/GetNacosConfigResult.h"
#include "model/GetNacosHistoryConfigRequest.h"
#include "model/GetNacosHistoryConfigResult.h"
#include "model/GetOverviewRequest.h"
#include "model/GetOverviewResult.h"
#include "model/GetPluginConfigRequest.h"
#include "model/GetPluginConfigResult.h"
#include "model/GetPluginsRequest.h"
#include "model/GetPluginsResult.h"
#include "model/GetServiceListRequest.h"
#include "model/GetServiceListResult.h"
#include "model/GetServiceListPageRequest.h"
#include "model/GetServiceListPageResult.h"
#include "model/GetServiceListenersRequest.h"
#include "model/GetServiceListenersResult.h"
#include "model/GetServiceMethodPageRequest.h"
#include "model/GetServiceMethodPageResult.h"
#include "model/GetTagsBySwimmingLaneGroupIdRequest.h"
#include "model/GetTagsBySwimmingLaneGroupIdResult.h"
#include "model/GetZookeeperDataImportUrlRequest.h"
#include "model/GetZookeeperDataImportUrlResult.h"
#include "model/ImportNacosConfigRequest.h"
#include "model/ImportNacosConfigResult.h"
#include "model/ImportServicesRequest.h"
#include "model/ImportServicesResult.h"
#include "model/ImportZookeeperDataRequest.h"
#include "model/ImportZookeeperDataResult.h"
#include "model/ListAnsInstancesRequest.h"
#include "model/ListAnsInstancesResult.h"
#include "model/ListAnsServiceClustersRequest.h"
#include "model/ListAnsServiceClustersResult.h"
#include "model/ListAnsServicesRequest.h"
#include "model/ListAnsServicesResult.h"
#include "model/ListAppBySwimmingLaneGroupTagRequest.h"
#include "model/ListAppBySwimmingLaneGroupTagResult.h"
#include "model/ListApplicationsWithTagRulesRequest.h"
#include "model/ListApplicationsWithTagRulesResult.h"
#include "model/ListAuthPolicyRequest.h"
#include "model/ListAuthPolicyResult.h"
#include "model/ListCircuitBreakerRulesRequest.h"
#include "model/ListCircuitBreakerRulesResult.h"
#include "model/ListClusterConnectionTypesRequest.h"
#include "model/ListClusterConnectionTypesResult.h"
#include "model/ListClusterHealthCheckTaskRequest.h"
#include "model/ListClusterHealthCheckTaskResult.h"
#include "model/ListClusterTypesRequest.h"
#include "model/ListClusterTypesResult.h"
#include "model/ListClusterVersionsRequest.h"
#include "model/ListClusterVersionsResult.h"
#include "model/ListClustersRequest.h"
#include "model/ListClustersResult.h"
#include "model/ListConfigTrackRequest.h"
#include "model/ListConfigTrackResult.h"
#include "model/ListEngineNamespacesRequest.h"
#include "model/ListEngineNamespacesResult.h"
#include "model/ListEurekaInstancesRequest.h"
#include "model/ListEurekaInstancesResult.h"
#include "model/ListEurekaServicesRequest.h"
#include "model/ListEurekaServicesResult.h"
#include "model/ListExportZookeeperDataRequest.h"
#include "model/ListExportZookeeperDataResult.h"
#include "model/ListFlowRulesRequest.h"
#include "model/ListFlowRulesResult.h"
#include "model/ListGatewayRequest.h"
#include "model/ListGatewayResult.h"
#include "model/ListGatewayAuthConsumerRequest.h"
#include "model/ListGatewayAuthConsumerResult.h"
#include "model/ListGatewayAuthConsumerResourceRequest.h"
#include "model/ListGatewayAuthConsumerResourceResult.h"
#include "model/ListGatewayDomainRequest.h"
#include "model/ListGatewayDomainResult.h"
#include "model/ListGatewayRouteRequest.h"
#include "model/ListGatewayRouteResult.h"
#include "model/ListGatewayRouteOnAuthRequest.h"
#include "model/ListGatewayRouteOnAuthResult.h"
#include "model/ListGatewayServiceRequest.h"
#include "model/ListGatewayServiceResult.h"
#include "model/ListGatewaySlbRequest.h"
#include "model/ListGatewaySlbResult.h"
#include "model/ListInstanceCountRequest.h"
#include "model/ListInstanceCountResult.h"
#include "model/ListListenersByConfigRequest.h"
#include "model/ListListenersByConfigResult.h"
#include "model/ListListenersByIpRequest.h"
#include "model/ListListenersByIpResult.h"
#include "model/ListMigrationTaskRequest.h"
#include "model/ListMigrationTaskResult.h"
#include "model/ListNacosConfigsRequest.h"
#include "model/ListNacosConfigsResult.h"
#include "model/ListNacosHistoryConfigsRequest.h"
#include "model/ListNacosHistoryConfigsResult.h"
#include "model/ListNamingTrackRequest.h"
#include "model/ListNamingTrackResult.h"
#include "model/ListSSLCertRequest.h"
#include "model/ListSSLCertResult.h"
#include "model/ListSecurityGroupRequest.h"
#include "model/ListSecurityGroupResult.h"
#include "model/ListSecurityGroupRuleRequest.h"
#include "model/ListSecurityGroupRuleResult.h"
#include "model/ListServiceSourceRequest.h"
#include "model/ListServiceSourceResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ListZkTrackRequest.h"
#include "model/ListZkTrackResult.h"
#include "model/ListZnodeChildrenRequest.h"
#include "model/ListZnodeChildrenResult.h"
#include "model/ModifyGovernanceKubernetesClusterRequest.h"
#include "model/ModifyGovernanceKubernetesClusterResult.h"
#include "model/ModifyLosslessRuleRequest.h"
#include "model/ModifyLosslessRuleResult.h"
#include "model/OfflineGatewayRouteRequest.h"
#include "model/OfflineGatewayRouteResult.h"
#include "model/OrderClusterHealthCheckRiskNoticeRequest.h"
#include "model/OrderClusterHealthCheckRiskNoticeResult.h"
#include "model/PullServicesRequest.h"
#include "model/PullServicesResult.h"
#include "model/PutClusterHealthCheckTaskRequest.h"
#include "model/PutClusterHealthCheckTaskResult.h"
#include "model/QueryAllSwimmingLaneRequest.h"
#include "model/QueryAllSwimmingLaneResult.h"
#include "model/QueryAllSwimmingLaneGroupRequest.h"
#include "model/QueryAllSwimmingLaneGroupResult.h"
#include "model/QueryBusinessLocationsRequest.h"
#include "model/QueryBusinessLocationsResult.h"
#include "model/QueryClusterDetailRequest.h"
#include "model/QueryClusterDetailResult.h"
#include "model/QueryClusterDiskSpecificationRequest.h"
#include "model/QueryClusterDiskSpecificationResult.h"
#include "model/QueryClusterInfoRequest.h"
#include "model/QueryClusterInfoResult.h"
#include "model/QueryClusterSpecificationRequest.h"
#include "model/QueryClusterSpecificationResult.h"
#include "model/QueryConfigRequest.h"
#include "model/QueryConfigResult.h"
#include "model/QueryGatewayRegionRequest.h"
#include "model/QueryGatewayRegionResult.h"
#include "model/QueryGatewayTypeRequest.h"
#include "model/QueryGatewayTypeResult.h"
#include "model/QueryGovernanceKubernetesClusterRequest.h"
#include "model/QueryGovernanceKubernetesClusterResult.h"
#include "model/QueryInstancesInfoRequest.h"
#include "model/QueryInstancesInfoResult.h"
#include "model/QueryMonitorRequest.h"
#include "model/QueryMonitorResult.h"
#include "model/QueryNamespaceRequest.h"
#include "model/QueryNamespaceResult.h"
#include "model/QuerySlbSpecRequest.h"
#include "model/QuerySlbSpecResult.h"
#include "model/QuerySwimmingLaneByIdRequest.h"
#include "model/QuerySwimmingLaneByIdResult.h"
#include "model/QueryZnodeDetailRequest.h"
#include "model/QueryZnodeDetailResult.h"
#include "model/RemoveApplicationRequest.h"
#include "model/RemoveApplicationResult.h"
#include "model/RemoveAuthPolicyRequest.h"
#include "model/RemoveAuthPolicyResult.h"
#include "model/RestartClusterRequest.h"
#include "model/RestartClusterResult.h"
#include "model/RetryClusterRequest.h"
#include "model/RetryClusterResult.h"
#include "model/SelectGatewaySlbRequest.h"
#include "model/SelectGatewaySlbResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpdateAclRequest.h"
#include "model/UpdateAclResult.h"
#include "model/UpdateAuthPolicyRequest.h"
#include "model/UpdateAuthPolicyResult.h"
#include "model/UpdateBlackWhiteListRequest.h"
#include "model/UpdateBlackWhiteListResult.h"
#include "model/UpdateCircuitBreakerRuleRequest.h"
#include "model/UpdateCircuitBreakerRuleResult.h"
#include "model/UpdateClusterRequest.h"
#include "model/UpdateClusterResult.h"
#include "model/UpdateClusterSpecRequest.h"
#include "model/UpdateClusterSpecResult.h"
#include "model/UpdateConfigRequest.h"
#include "model/UpdateConfigResult.h"
#include "model/UpdateEngineNamespaceRequest.h"
#include "model/UpdateEngineNamespaceResult.h"
#include "model/UpdateFlowRuleRequest.h"
#include "model/UpdateFlowRuleResult.h"
#include "model/UpdateGatewayAuthConsumerRequest.h"
#include "model/UpdateGatewayAuthConsumerResult.h"
#include "model/UpdateGatewayAuthConsumerResourceRequest.h"
#include "model/UpdateGatewayAuthConsumerResourceResult.h"
#include "model/UpdateGatewayAuthConsumerResourceStatusRequest.h"
#include "model/UpdateGatewayAuthConsumerResourceStatusResult.h"
#include "model/UpdateGatewayAuthConsumerStatusRequest.h"
#include "model/UpdateGatewayAuthConsumerStatusResult.h"
#include "model/UpdateGatewayDomainRequest.h"
#include "model/UpdateGatewayDomainResult.h"
#include "model/UpdateGatewayNameRequest.h"
#include "model/UpdateGatewayNameResult.h"
#include "model/UpdateGatewayOptionRequest.h"
#include "model/UpdateGatewayOptionResult.h"
#include "model/UpdateGatewayRouteRequest.h"
#include "model/UpdateGatewayRouteResult.h"
#include "model/UpdateGatewayRouteAuthRequest.h"
#include "model/UpdateGatewayRouteAuthResult.h"
#include "model/UpdateGatewayRouteCORSRequest.h"
#include "model/UpdateGatewayRouteCORSResult.h"
#include "model/UpdateGatewayRouteHTTPRewriteRequest.h"
#include "model/UpdateGatewayRouteHTTPRewriteResult.h"
#include "model/UpdateGatewayRouteHeaderOpRequest.h"
#include "model/UpdateGatewayRouteHeaderOpResult.h"
#include "model/UpdateGatewayRouteRetryRequest.h"
#include "model/UpdateGatewayRouteRetryResult.h"
#include "model/UpdateGatewayRouteTimeoutRequest.h"
#include "model/UpdateGatewayRouteTimeoutResult.h"
#include "model/UpdateGatewayRouteWafStatusRequest.h"
#include "model/UpdateGatewayRouteWafStatusResult.h"
#include "model/UpdateGatewayServiceTrafficPolicyRequest.h"
#include "model/UpdateGatewayServiceTrafficPolicyResult.h"
#include "model/UpdateGatewayServiceVersionRequest.h"
#include "model/UpdateGatewayServiceVersionResult.h"
#include "model/UpdateGatewaySpecRequest.h"
#include "model/UpdateGatewaySpecResult.h"
#include "model/UpdateImageRequest.h"
#include "model/UpdateImageResult.h"
#include "model/UpdateMessageQueueRouteRequest.h"
#include "model/UpdateMessageQueueRouteResult.h"
#include "model/UpdateMigrationTaskRequest.h"
#include "model/UpdateMigrationTaskResult.h"
#include "model/UpdateNacosClusterRequest.h"
#include "model/UpdateNacosClusterResult.h"
#include "model/UpdateNacosConfigRequest.h"
#include "model/UpdateNacosConfigResult.h"
#include "model/UpdateNacosInstanceRequest.h"
#include "model/UpdateNacosInstanceResult.h"
#include "model/UpdateNacosServiceRequest.h"
#include "model/UpdateNacosServiceResult.h"
#include "model/UpdatePluginConfigRequest.h"
#include "model/UpdatePluginConfigResult.h"
#include "model/UpdateSSLCertRequest.h"
#include "model/UpdateSSLCertResult.h"
#include "model/UpdateServiceSourceRequest.h"
#include "model/UpdateServiceSourceResult.h"
#include "model/UpdateZnodeRequest.h"
#include "model/UpdateZnodeResult.h"
#include "model/UpgradeClusterRequest.h"
#include "model/UpgradeClusterResult.h"


namespace AlibabaCloud
{
	namespace Mse
	{
		class ALIBABACLOUD_MSE_EXPORT MseClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddAuthPolicyResult> AddAuthPolicyOutcome;
			typedef std::future<AddAuthPolicyOutcome> AddAuthPolicyOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::AddAuthPolicyRequest&, const AddAuthPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddAuthPolicyAsyncHandler;
			typedef Outcome<Error, Model::AddAuthResourceResult> AddAuthResourceOutcome;
			typedef std::future<AddAuthResourceOutcome> AddAuthResourceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::AddAuthResourceRequest&, const AddAuthResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddAuthResourceAsyncHandler;
			typedef Outcome<Error, Model::AddBlackWhiteListResult> AddBlackWhiteListOutcome;
			typedef std::future<AddBlackWhiteListOutcome> AddBlackWhiteListOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::AddBlackWhiteListRequest&, const AddBlackWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddBlackWhiteListAsyncHandler;
			typedef Outcome<Error, Model::AddGatewayResult> AddGatewayOutcome;
			typedef std::future<AddGatewayOutcome> AddGatewayOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::AddGatewayRequest&, const AddGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddGatewayAsyncHandler;
			typedef Outcome<Error, Model::AddGatewayAuthConsumerResult> AddGatewayAuthConsumerOutcome;
			typedef std::future<AddGatewayAuthConsumerOutcome> AddGatewayAuthConsumerOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::AddGatewayAuthConsumerRequest&, const AddGatewayAuthConsumerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddGatewayAuthConsumerAsyncHandler;
			typedef Outcome<Error, Model::AddGatewayDomainResult> AddGatewayDomainOutcome;
			typedef std::future<AddGatewayDomainOutcome> AddGatewayDomainOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::AddGatewayDomainRequest&, const AddGatewayDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddGatewayDomainAsyncHandler;
			typedef Outcome<Error, Model::AddGatewayRouteResult> AddGatewayRouteOutcome;
			typedef std::future<AddGatewayRouteOutcome> AddGatewayRouteOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::AddGatewayRouteRequest&, const AddGatewayRouteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddGatewayRouteAsyncHandler;
			typedef Outcome<Error, Model::AddGatewayServiceVersionResult> AddGatewayServiceVersionOutcome;
			typedef std::future<AddGatewayServiceVersionOutcome> AddGatewayServiceVersionOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::AddGatewayServiceVersionRequest&, const AddGatewayServiceVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddGatewayServiceVersionAsyncHandler;
			typedef Outcome<Error, Model::AddGatewaySlbResult> AddGatewaySlbOutcome;
			typedef std::future<AddGatewaySlbOutcome> AddGatewaySlbOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::AddGatewaySlbRequest&, const AddGatewaySlbOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddGatewaySlbAsyncHandler;
			typedef Outcome<Error, Model::AddMigrationTaskResult> AddMigrationTaskOutcome;
			typedef std::future<AddMigrationTaskOutcome> AddMigrationTaskOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::AddMigrationTaskRequest&, const AddMigrationTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddMigrationTaskAsyncHandler;
			typedef Outcome<Error, Model::AddMockRuleResult> AddMockRuleOutcome;
			typedef std::future<AddMockRuleOutcome> AddMockRuleOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::AddMockRuleRequest&, const AddMockRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddMockRuleAsyncHandler;
			typedef Outcome<Error, Model::AddSSLCertResult> AddSSLCertOutcome;
			typedef std::future<AddSSLCertOutcome> AddSSLCertOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::AddSSLCertRequest&, const AddSSLCertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddSSLCertAsyncHandler;
			typedef Outcome<Error, Model::AddSecurityGroupRuleResult> AddSecurityGroupRuleOutcome;
			typedef std::future<AddSecurityGroupRuleOutcome> AddSecurityGroupRuleOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::AddSecurityGroupRuleRequest&, const AddSecurityGroupRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddSecurityGroupRuleAsyncHandler;
			typedef Outcome<Error, Model::AddServiceSourceResult> AddServiceSourceOutcome;
			typedef std::future<AddServiceSourceOutcome> AddServiceSourceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::AddServiceSourceRequest&, const AddServiceSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddServiceSourceAsyncHandler;
			typedef Outcome<Error, Model::ApplyGatewayRouteResult> ApplyGatewayRouteOutcome;
			typedef std::future<ApplyGatewayRouteOutcome> ApplyGatewayRouteOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ApplyGatewayRouteRequest&, const ApplyGatewayRouteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ApplyGatewayRouteAsyncHandler;
			typedef Outcome<Error, Model::ApplyTagPoliciesResult> ApplyTagPoliciesOutcome;
			typedef std::future<ApplyTagPoliciesOutcome> ApplyTagPoliciesOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ApplyTagPoliciesRequest&, const ApplyTagPoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ApplyTagPoliciesAsyncHandler;
			typedef Outcome<Error, Model::CloneNacosConfigResult> CloneNacosConfigOutcome;
			typedef std::future<CloneNacosConfigOutcome> CloneNacosConfigOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::CloneNacosConfigRequest&, const CloneNacosConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloneNacosConfigAsyncHandler;
			typedef Outcome<Error, Model::CreateApplicationResult> CreateApplicationOutcome;
			typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::CreateApplicationRequest&, const CreateApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationAsyncHandler;
			typedef Outcome<Error, Model::CreateCircuitBreakerRuleResult> CreateCircuitBreakerRuleOutcome;
			typedef std::future<CreateCircuitBreakerRuleOutcome> CreateCircuitBreakerRuleOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::CreateCircuitBreakerRuleRequest&, const CreateCircuitBreakerRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCircuitBreakerRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateClusterResult> CreateClusterOutcome;
			typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::CreateClusterRequest&, const CreateClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsyncHandler;
			typedef Outcome<Error, Model::CreateEngineNamespaceResult> CreateEngineNamespaceOutcome;
			typedef std::future<CreateEngineNamespaceOutcome> CreateEngineNamespaceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::CreateEngineNamespaceRequest&, const CreateEngineNamespaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEngineNamespaceAsyncHandler;
			typedef Outcome<Error, Model::CreateFlowRuleResult> CreateFlowRuleOutcome;
			typedef std::future<CreateFlowRuleOutcome> CreateFlowRuleOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::CreateFlowRuleRequest&, const CreateFlowRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateMseServiceApplicationResult> CreateMseServiceApplicationOutcome;
			typedef std::future<CreateMseServiceApplicationOutcome> CreateMseServiceApplicationOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::CreateMseServiceApplicationRequest&, const CreateMseServiceApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMseServiceApplicationAsyncHandler;
			typedef Outcome<Error, Model::CreateNacosConfigResult> CreateNacosConfigOutcome;
			typedef std::future<CreateNacosConfigOutcome> CreateNacosConfigOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::CreateNacosConfigRequest&, const CreateNacosConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNacosConfigAsyncHandler;
			typedef Outcome<Error, Model::CreateNacosInstanceResult> CreateNacosInstanceOutcome;
			typedef std::future<CreateNacosInstanceOutcome> CreateNacosInstanceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::CreateNacosInstanceRequest&, const CreateNacosInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNacosInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateNacosServiceResult> CreateNacosServiceOutcome;
			typedef std::future<CreateNacosServiceOutcome> CreateNacosServiceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::CreateNacosServiceRequest&, const CreateNacosServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNacosServiceAsyncHandler;
			typedef Outcome<Error, Model::CreateOrUpdateSwimmingLaneResult> CreateOrUpdateSwimmingLaneOutcome;
			typedef std::future<CreateOrUpdateSwimmingLaneOutcome> CreateOrUpdateSwimmingLaneOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::CreateOrUpdateSwimmingLaneRequest&, const CreateOrUpdateSwimmingLaneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrUpdateSwimmingLaneAsyncHandler;
			typedef Outcome<Error, Model::CreateOrUpdateSwimmingLaneGroupResult> CreateOrUpdateSwimmingLaneGroupOutcome;
			typedef std::future<CreateOrUpdateSwimmingLaneGroupOutcome> CreateOrUpdateSwimmingLaneGroupOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::CreateOrUpdateSwimmingLaneGroupRequest&, const CreateOrUpdateSwimmingLaneGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrUpdateSwimmingLaneGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateZnodeResult> CreateZnodeOutcome;
			typedef std::future<CreateZnodeOutcome> CreateZnodeOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::CreateZnodeRequest&, const CreateZnodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateZnodeAsyncHandler;
			typedef Outcome<Error, Model::DeleteAuthResourceResult> DeleteAuthResourceOutcome;
			typedef std::future<DeleteAuthResourceOutcome> DeleteAuthResourceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteAuthResourceRequest&, const DeleteAuthResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAuthResourceAsyncHandler;
			typedef Outcome<Error, Model::DeleteCircuitBreakerRulesResult> DeleteCircuitBreakerRulesOutcome;
			typedef std::future<DeleteCircuitBreakerRulesOutcome> DeleteCircuitBreakerRulesOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteCircuitBreakerRulesRequest&, const DeleteCircuitBreakerRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCircuitBreakerRulesAsyncHandler;
			typedef Outcome<Error, Model::DeleteClusterResult> DeleteClusterOutcome;
			typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteClusterRequest&, const DeleteClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterAsyncHandler;
			typedef Outcome<Error, Model::DeleteEngineNamespaceResult> DeleteEngineNamespaceOutcome;
			typedef std::future<DeleteEngineNamespaceOutcome> DeleteEngineNamespaceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteEngineNamespaceRequest&, const DeleteEngineNamespaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEngineNamespaceAsyncHandler;
			typedef Outcome<Error, Model::DeleteFlowRulesResult> DeleteFlowRulesOutcome;
			typedef std::future<DeleteFlowRulesOutcome> DeleteFlowRulesOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteFlowRulesRequest&, const DeleteFlowRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFlowRulesAsyncHandler;
			typedef Outcome<Error, Model::DeleteGatewayResult> DeleteGatewayOutcome;
			typedef std::future<DeleteGatewayOutcome> DeleteGatewayOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteGatewayRequest&, const DeleteGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGatewayAsyncHandler;
			typedef Outcome<Error, Model::DeleteGatewayAuthConsumerResult> DeleteGatewayAuthConsumerOutcome;
			typedef std::future<DeleteGatewayAuthConsumerOutcome> DeleteGatewayAuthConsumerOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteGatewayAuthConsumerRequest&, const DeleteGatewayAuthConsumerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGatewayAuthConsumerAsyncHandler;
			typedef Outcome<Error, Model::DeleteGatewayAuthConsumerResourceResult> DeleteGatewayAuthConsumerResourceOutcome;
			typedef std::future<DeleteGatewayAuthConsumerResourceOutcome> DeleteGatewayAuthConsumerResourceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteGatewayAuthConsumerResourceRequest&, const DeleteGatewayAuthConsumerResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGatewayAuthConsumerResourceAsyncHandler;
			typedef Outcome<Error, Model::DeleteGatewayDomainResult> DeleteGatewayDomainOutcome;
			typedef std::future<DeleteGatewayDomainOutcome> DeleteGatewayDomainOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteGatewayDomainRequest&, const DeleteGatewayDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGatewayDomainAsyncHandler;
			typedef Outcome<Error, Model::DeleteGatewayRouteResult> DeleteGatewayRouteOutcome;
			typedef std::future<DeleteGatewayRouteOutcome> DeleteGatewayRouteOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteGatewayRouteRequest&, const DeleteGatewayRouteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGatewayRouteAsyncHandler;
			typedef Outcome<Error, Model::DeleteGatewayServiceResult> DeleteGatewayServiceOutcome;
			typedef std::future<DeleteGatewayServiceOutcome> DeleteGatewayServiceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteGatewayServiceRequest&, const DeleteGatewayServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGatewayServiceAsyncHandler;
			typedef Outcome<Error, Model::DeleteGatewayServiceVersionResult> DeleteGatewayServiceVersionOutcome;
			typedef std::future<DeleteGatewayServiceVersionOutcome> DeleteGatewayServiceVersionOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteGatewayServiceVersionRequest&, const DeleteGatewayServiceVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGatewayServiceVersionAsyncHandler;
			typedef Outcome<Error, Model::DeleteGatewaySlbResult> DeleteGatewaySlbOutcome;
			typedef std::future<DeleteGatewaySlbOutcome> DeleteGatewaySlbOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteGatewaySlbRequest&, const DeleteGatewaySlbOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGatewaySlbAsyncHandler;
			typedef Outcome<Error, Model::DeleteMigrationTaskResult> DeleteMigrationTaskOutcome;
			typedef std::future<DeleteMigrationTaskOutcome> DeleteMigrationTaskOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteMigrationTaskRequest&, const DeleteMigrationTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMigrationTaskAsyncHandler;
			typedef Outcome<Error, Model::DeleteNacosConfigResult> DeleteNacosConfigOutcome;
			typedef std::future<DeleteNacosConfigOutcome> DeleteNacosConfigOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteNacosConfigRequest&, const DeleteNacosConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNacosConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteNacosConfigsResult> DeleteNacosConfigsOutcome;
			typedef std::future<DeleteNacosConfigsOutcome> DeleteNacosConfigsOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteNacosConfigsRequest&, const DeleteNacosConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNacosConfigsAsyncHandler;
			typedef Outcome<Error, Model::DeleteNacosInstanceResult> DeleteNacosInstanceOutcome;
			typedef std::future<DeleteNacosInstanceOutcome> DeleteNacosInstanceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteNacosInstanceRequest&, const DeleteNacosInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNacosInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteNacosServiceResult> DeleteNacosServiceOutcome;
			typedef std::future<DeleteNacosServiceOutcome> DeleteNacosServiceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteNacosServiceRequest&, const DeleteNacosServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNacosServiceAsyncHandler;
			typedef Outcome<Error, Model::DeleteNamespaceResult> DeleteNamespaceOutcome;
			typedef std::future<DeleteNamespaceOutcome> DeleteNamespaceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteNamespaceRequest&, const DeleteNamespaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNamespaceAsyncHandler;
			typedef Outcome<Error, Model::DeleteSecurityGroupRuleResult> DeleteSecurityGroupRuleOutcome;
			typedef std::future<DeleteSecurityGroupRuleOutcome> DeleteSecurityGroupRuleOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteSecurityGroupRuleRequest&, const DeleteSecurityGroupRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityGroupRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteServiceSourceResult> DeleteServiceSourceOutcome;
			typedef std::future<DeleteServiceSourceOutcome> DeleteServiceSourceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteServiceSourceRequest&, const DeleteServiceSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceSourceAsyncHandler;
			typedef Outcome<Error, Model::DeleteSwimmingLaneResult> DeleteSwimmingLaneOutcome;
			typedef std::future<DeleteSwimmingLaneOutcome> DeleteSwimmingLaneOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteSwimmingLaneRequest&, const DeleteSwimmingLaneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSwimmingLaneAsyncHandler;
			typedef Outcome<Error, Model::DeleteSwimmingLaneGroupResult> DeleteSwimmingLaneGroupOutcome;
			typedef std::future<DeleteSwimmingLaneGroupOutcome> DeleteSwimmingLaneGroupOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteSwimmingLaneGroupRequest&, const DeleteSwimmingLaneGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSwimmingLaneGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteZnodeResult> DeleteZnodeOutcome;
			typedef std::future<DeleteZnodeOutcome> DeleteZnodeOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteZnodeRequest&, const DeleteZnodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteZnodeAsyncHandler;
			typedef Outcome<Error, Model::ExportNacosConfigResult> ExportNacosConfigOutcome;
			typedef std::future<ExportNacosConfigOutcome> ExportNacosConfigOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ExportNacosConfigRequest&, const ExportNacosConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportNacosConfigAsyncHandler;
			typedef Outcome<Error, Model::ExportZookeeperDataResult> ExportZookeeperDataOutcome;
			typedef std::future<ExportZookeeperDataOutcome> ExportZookeeperDataOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ExportZookeeperDataRequest&, const ExportZookeeperDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportZookeeperDataAsyncHandler;
			typedef Outcome<Error, Model::FetchLosslessRuleListResult> FetchLosslessRuleListOutcome;
			typedef std::future<FetchLosslessRuleListOutcome> FetchLosslessRuleListOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::FetchLosslessRuleListRequest&, const FetchLosslessRuleListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FetchLosslessRuleListAsyncHandler;
			typedef Outcome<Error, Model::GetAppMessageQueueRouteResult> GetAppMessageQueueRouteOutcome;
			typedef std::future<GetAppMessageQueueRouteOutcome> GetAppMessageQueueRouteOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetAppMessageQueueRouteRequest&, const GetAppMessageQueueRouteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAppMessageQueueRouteAsyncHandler;
			typedef Outcome<Error, Model::GetApplicationListResult> GetApplicationListOutcome;
			typedef std::future<GetApplicationListOutcome> GetApplicationListOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetApplicationListRequest&, const GetApplicationListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetApplicationListAsyncHandler;
			typedef Outcome<Error, Model::GetApplicationListWithMetircsResult> GetApplicationListWithMetircsOutcome;
			typedef std::future<GetApplicationListWithMetircsOutcome> GetApplicationListWithMetircsOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetApplicationListWithMetircsRequest&, const GetApplicationListWithMetircsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetApplicationListWithMetircsAsyncHandler;
			typedef Outcome<Error, Model::GetBlackWhiteListResult> GetBlackWhiteListOutcome;
			typedef std::future<GetBlackWhiteListOutcome> GetBlackWhiteListOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetBlackWhiteListRequest&, const GetBlackWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBlackWhiteListAsyncHandler;
			typedef Outcome<Error, Model::GetEngineNamepaceResult> GetEngineNamepaceOutcome;
			typedef std::future<GetEngineNamepaceOutcome> GetEngineNamepaceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetEngineNamepaceRequest&, const GetEngineNamepaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEngineNamepaceAsyncHandler;
			typedef Outcome<Error, Model::GetGatewayResult> GetGatewayOutcome;
			typedef std::future<GetGatewayOutcome> GetGatewayOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetGatewayRequest&, const GetGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGatewayAsyncHandler;
			typedef Outcome<Error, Model::GetGatewayAuthConsumerDetailResult> GetGatewayAuthConsumerDetailOutcome;
			typedef std::future<GetGatewayAuthConsumerDetailOutcome> GetGatewayAuthConsumerDetailOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetGatewayAuthConsumerDetailRequest&, const GetGatewayAuthConsumerDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGatewayAuthConsumerDetailAsyncHandler;
			typedef Outcome<Error, Model::GetGatewayDomainDetailResult> GetGatewayDomainDetailOutcome;
			typedef std::future<GetGatewayDomainDetailOutcome> GetGatewayDomainDetailOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetGatewayDomainDetailRequest&, const GetGatewayDomainDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGatewayDomainDetailAsyncHandler;
			typedef Outcome<Error, Model::GetGatewayOptionResult> GetGatewayOptionOutcome;
			typedef std::future<GetGatewayOptionOutcome> GetGatewayOptionOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetGatewayOptionRequest&, const GetGatewayOptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGatewayOptionAsyncHandler;
			typedef Outcome<Error, Model::GetGatewayRouteDetailResult> GetGatewayRouteDetailOutcome;
			typedef std::future<GetGatewayRouteDetailOutcome> GetGatewayRouteDetailOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetGatewayRouteDetailRequest&, const GetGatewayRouteDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGatewayRouteDetailAsyncHandler;
			typedef Outcome<Error, Model::GetGatewayServiceDetailResult> GetGatewayServiceDetailOutcome;
			typedef std::future<GetGatewayServiceDetailOutcome> GetGatewayServiceDetailOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetGatewayServiceDetailRequest&, const GetGatewayServiceDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGatewayServiceDetailAsyncHandler;
			typedef Outcome<Error, Model::GetGovernanceKubernetesClusterResult> GetGovernanceKubernetesClusterOutcome;
			typedef std::future<GetGovernanceKubernetesClusterOutcome> GetGovernanceKubernetesClusterOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetGovernanceKubernetesClusterRequest&, const GetGovernanceKubernetesClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGovernanceKubernetesClusterAsyncHandler;
			typedef Outcome<Error, Model::GetImageResult> GetImageOutcome;
			typedef std::future<GetImageOutcome> GetImageOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetImageRequest&, const GetImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetImageAsyncHandler;
			typedef Outcome<Error, Model::GetImportFileUrlResult> GetImportFileUrlOutcome;
			typedef std::future<GetImportFileUrlOutcome> GetImportFileUrlOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetImportFileUrlRequest&, const GetImportFileUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetImportFileUrlAsyncHandler;
			typedef Outcome<Error, Model::GetKubernetesSourceResult> GetKubernetesSourceOutcome;
			typedef std::future<GetKubernetesSourceOutcome> GetKubernetesSourceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetKubernetesSourceRequest&, const GetKubernetesSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetKubernetesSourceAsyncHandler;
			typedef Outcome<Error, Model::GetLosslessRuleByAppResult> GetLosslessRuleByAppOutcome;
			typedef std::future<GetLosslessRuleByAppOutcome> GetLosslessRuleByAppOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetLosslessRuleByAppRequest&, const GetLosslessRuleByAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetLosslessRuleByAppAsyncHandler;
			typedef Outcome<Error, Model::GetMseFeatureSwitchResult> GetMseFeatureSwitchOutcome;
			typedef std::future<GetMseFeatureSwitchOutcome> GetMseFeatureSwitchOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetMseFeatureSwitchRequest&, const GetMseFeatureSwitchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMseFeatureSwitchAsyncHandler;
			typedef Outcome<Error, Model::GetMseSourceResult> GetMseSourceOutcome;
			typedef std::future<GetMseSourceOutcome> GetMseSourceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetMseSourceRequest&, const GetMseSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetMseSourceAsyncHandler;
			typedef Outcome<Error, Model::GetNacosConfigResult> GetNacosConfigOutcome;
			typedef std::future<GetNacosConfigOutcome> GetNacosConfigOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetNacosConfigRequest&, const GetNacosConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNacosConfigAsyncHandler;
			typedef Outcome<Error, Model::GetNacosHistoryConfigResult> GetNacosHistoryConfigOutcome;
			typedef std::future<GetNacosHistoryConfigOutcome> GetNacosHistoryConfigOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetNacosHistoryConfigRequest&, const GetNacosHistoryConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetNacosHistoryConfigAsyncHandler;
			typedef Outcome<Error, Model::GetOverviewResult> GetOverviewOutcome;
			typedef std::future<GetOverviewOutcome> GetOverviewOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetOverviewRequest&, const GetOverviewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetOverviewAsyncHandler;
			typedef Outcome<Error, Model::GetPluginConfigResult> GetPluginConfigOutcome;
			typedef std::future<GetPluginConfigOutcome> GetPluginConfigOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetPluginConfigRequest&, const GetPluginConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPluginConfigAsyncHandler;
			typedef Outcome<Error, Model::GetPluginsResult> GetPluginsOutcome;
			typedef std::future<GetPluginsOutcome> GetPluginsOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetPluginsRequest&, const GetPluginsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPluginsAsyncHandler;
			typedef Outcome<Error, Model::GetServiceListResult> GetServiceListOutcome;
			typedef std::future<GetServiceListOutcome> GetServiceListOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetServiceListRequest&, const GetServiceListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceListAsyncHandler;
			typedef Outcome<Error, Model::GetServiceListPageResult> GetServiceListPageOutcome;
			typedef std::future<GetServiceListPageOutcome> GetServiceListPageOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetServiceListPageRequest&, const GetServiceListPageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceListPageAsyncHandler;
			typedef Outcome<Error, Model::GetServiceListenersResult> GetServiceListenersOutcome;
			typedef std::future<GetServiceListenersOutcome> GetServiceListenersOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetServiceListenersRequest&, const GetServiceListenersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceListenersAsyncHandler;
			typedef Outcome<Error, Model::GetServiceMethodPageResult> GetServiceMethodPageOutcome;
			typedef std::future<GetServiceMethodPageOutcome> GetServiceMethodPageOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetServiceMethodPageRequest&, const GetServiceMethodPageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetServiceMethodPageAsyncHandler;
			typedef Outcome<Error, Model::GetTagsBySwimmingLaneGroupIdResult> GetTagsBySwimmingLaneGroupIdOutcome;
			typedef std::future<GetTagsBySwimmingLaneGroupIdOutcome> GetTagsBySwimmingLaneGroupIdOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetTagsBySwimmingLaneGroupIdRequest&, const GetTagsBySwimmingLaneGroupIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTagsBySwimmingLaneGroupIdAsyncHandler;
			typedef Outcome<Error, Model::GetZookeeperDataImportUrlResult> GetZookeeperDataImportUrlOutcome;
			typedef std::future<GetZookeeperDataImportUrlOutcome> GetZookeeperDataImportUrlOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetZookeeperDataImportUrlRequest&, const GetZookeeperDataImportUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetZookeeperDataImportUrlAsyncHandler;
			typedef Outcome<Error, Model::ImportNacosConfigResult> ImportNacosConfigOutcome;
			typedef std::future<ImportNacosConfigOutcome> ImportNacosConfigOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ImportNacosConfigRequest&, const ImportNacosConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportNacosConfigAsyncHandler;
			typedef Outcome<Error, Model::ImportServicesResult> ImportServicesOutcome;
			typedef std::future<ImportServicesOutcome> ImportServicesOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ImportServicesRequest&, const ImportServicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportServicesAsyncHandler;
			typedef Outcome<Error, Model::ImportZookeeperDataResult> ImportZookeeperDataOutcome;
			typedef std::future<ImportZookeeperDataOutcome> ImportZookeeperDataOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ImportZookeeperDataRequest&, const ImportZookeeperDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportZookeeperDataAsyncHandler;
			typedef Outcome<Error, Model::ListAnsInstancesResult> ListAnsInstancesOutcome;
			typedef std::future<ListAnsInstancesOutcome> ListAnsInstancesOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListAnsInstancesRequest&, const ListAnsInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAnsInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListAnsServiceClustersResult> ListAnsServiceClustersOutcome;
			typedef std::future<ListAnsServiceClustersOutcome> ListAnsServiceClustersOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListAnsServiceClustersRequest&, const ListAnsServiceClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAnsServiceClustersAsyncHandler;
			typedef Outcome<Error, Model::ListAnsServicesResult> ListAnsServicesOutcome;
			typedef std::future<ListAnsServicesOutcome> ListAnsServicesOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListAnsServicesRequest&, const ListAnsServicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAnsServicesAsyncHandler;
			typedef Outcome<Error, Model::ListAppBySwimmingLaneGroupTagResult> ListAppBySwimmingLaneGroupTagOutcome;
			typedef std::future<ListAppBySwimmingLaneGroupTagOutcome> ListAppBySwimmingLaneGroupTagOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListAppBySwimmingLaneGroupTagRequest&, const ListAppBySwimmingLaneGroupTagOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAppBySwimmingLaneGroupTagAsyncHandler;
			typedef Outcome<Error, Model::ListApplicationsWithTagRulesResult> ListApplicationsWithTagRulesOutcome;
			typedef std::future<ListApplicationsWithTagRulesOutcome> ListApplicationsWithTagRulesOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListApplicationsWithTagRulesRequest&, const ListApplicationsWithTagRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListApplicationsWithTagRulesAsyncHandler;
			typedef Outcome<Error, Model::ListAuthPolicyResult> ListAuthPolicyOutcome;
			typedef std::future<ListAuthPolicyOutcome> ListAuthPolicyOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListAuthPolicyRequest&, const ListAuthPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAuthPolicyAsyncHandler;
			typedef Outcome<Error, Model::ListCircuitBreakerRulesResult> ListCircuitBreakerRulesOutcome;
			typedef std::future<ListCircuitBreakerRulesOutcome> ListCircuitBreakerRulesOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListCircuitBreakerRulesRequest&, const ListCircuitBreakerRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListCircuitBreakerRulesAsyncHandler;
			typedef Outcome<Error, Model::ListClusterConnectionTypesResult> ListClusterConnectionTypesOutcome;
			typedef std::future<ListClusterConnectionTypesOutcome> ListClusterConnectionTypesOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListClusterConnectionTypesRequest&, const ListClusterConnectionTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterConnectionTypesAsyncHandler;
			typedef Outcome<Error, Model::ListClusterHealthCheckTaskResult> ListClusterHealthCheckTaskOutcome;
			typedef std::future<ListClusterHealthCheckTaskOutcome> ListClusterHealthCheckTaskOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListClusterHealthCheckTaskRequest&, const ListClusterHealthCheckTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterHealthCheckTaskAsyncHandler;
			typedef Outcome<Error, Model::ListClusterTypesResult> ListClusterTypesOutcome;
			typedef std::future<ListClusterTypesOutcome> ListClusterTypesOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListClusterTypesRequest&, const ListClusterTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterTypesAsyncHandler;
			typedef Outcome<Error, Model::ListClusterVersionsResult> ListClusterVersionsOutcome;
			typedef std::future<ListClusterVersionsOutcome> ListClusterVersionsOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListClusterVersionsRequest&, const ListClusterVersionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterVersionsAsyncHandler;
			typedef Outcome<Error, Model::ListClustersResult> ListClustersOutcome;
			typedef std::future<ListClustersOutcome> ListClustersOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListClustersRequest&, const ListClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClustersAsyncHandler;
			typedef Outcome<Error, Model::ListConfigTrackResult> ListConfigTrackOutcome;
			typedef std::future<ListConfigTrackOutcome> ListConfigTrackOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListConfigTrackRequest&, const ListConfigTrackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListConfigTrackAsyncHandler;
			typedef Outcome<Error, Model::ListEngineNamespacesResult> ListEngineNamespacesOutcome;
			typedef std::future<ListEngineNamespacesOutcome> ListEngineNamespacesOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListEngineNamespacesRequest&, const ListEngineNamespacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEngineNamespacesAsyncHandler;
			typedef Outcome<Error, Model::ListEurekaInstancesResult> ListEurekaInstancesOutcome;
			typedef std::future<ListEurekaInstancesOutcome> ListEurekaInstancesOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListEurekaInstancesRequest&, const ListEurekaInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEurekaInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListEurekaServicesResult> ListEurekaServicesOutcome;
			typedef std::future<ListEurekaServicesOutcome> ListEurekaServicesOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListEurekaServicesRequest&, const ListEurekaServicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEurekaServicesAsyncHandler;
			typedef Outcome<Error, Model::ListExportZookeeperDataResult> ListExportZookeeperDataOutcome;
			typedef std::future<ListExportZookeeperDataOutcome> ListExportZookeeperDataOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListExportZookeeperDataRequest&, const ListExportZookeeperDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListExportZookeeperDataAsyncHandler;
			typedef Outcome<Error, Model::ListFlowRulesResult> ListFlowRulesOutcome;
			typedef std::future<ListFlowRulesOutcome> ListFlowRulesOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListFlowRulesRequest&, const ListFlowRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListFlowRulesAsyncHandler;
			typedef Outcome<Error, Model::ListGatewayResult> ListGatewayOutcome;
			typedef std::future<ListGatewayOutcome> ListGatewayOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListGatewayRequest&, const ListGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGatewayAsyncHandler;
			typedef Outcome<Error, Model::ListGatewayAuthConsumerResult> ListGatewayAuthConsumerOutcome;
			typedef std::future<ListGatewayAuthConsumerOutcome> ListGatewayAuthConsumerOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListGatewayAuthConsumerRequest&, const ListGatewayAuthConsumerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGatewayAuthConsumerAsyncHandler;
			typedef Outcome<Error, Model::ListGatewayAuthConsumerResourceResult> ListGatewayAuthConsumerResourceOutcome;
			typedef std::future<ListGatewayAuthConsumerResourceOutcome> ListGatewayAuthConsumerResourceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListGatewayAuthConsumerResourceRequest&, const ListGatewayAuthConsumerResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGatewayAuthConsumerResourceAsyncHandler;
			typedef Outcome<Error, Model::ListGatewayDomainResult> ListGatewayDomainOutcome;
			typedef std::future<ListGatewayDomainOutcome> ListGatewayDomainOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListGatewayDomainRequest&, const ListGatewayDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGatewayDomainAsyncHandler;
			typedef Outcome<Error, Model::ListGatewayRouteResult> ListGatewayRouteOutcome;
			typedef std::future<ListGatewayRouteOutcome> ListGatewayRouteOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListGatewayRouteRequest&, const ListGatewayRouteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGatewayRouteAsyncHandler;
			typedef Outcome<Error, Model::ListGatewayRouteOnAuthResult> ListGatewayRouteOnAuthOutcome;
			typedef std::future<ListGatewayRouteOnAuthOutcome> ListGatewayRouteOnAuthOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListGatewayRouteOnAuthRequest&, const ListGatewayRouteOnAuthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGatewayRouteOnAuthAsyncHandler;
			typedef Outcome<Error, Model::ListGatewayServiceResult> ListGatewayServiceOutcome;
			typedef std::future<ListGatewayServiceOutcome> ListGatewayServiceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListGatewayServiceRequest&, const ListGatewayServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGatewayServiceAsyncHandler;
			typedef Outcome<Error, Model::ListGatewaySlbResult> ListGatewaySlbOutcome;
			typedef std::future<ListGatewaySlbOutcome> ListGatewaySlbOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListGatewaySlbRequest&, const ListGatewaySlbOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGatewaySlbAsyncHandler;
			typedef Outcome<Error, Model::ListInstanceCountResult> ListInstanceCountOutcome;
			typedef std::future<ListInstanceCountOutcome> ListInstanceCountOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListInstanceCountRequest&, const ListInstanceCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListInstanceCountAsyncHandler;
			typedef Outcome<Error, Model::ListListenersByConfigResult> ListListenersByConfigOutcome;
			typedef std::future<ListListenersByConfigOutcome> ListListenersByConfigOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListListenersByConfigRequest&, const ListListenersByConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListListenersByConfigAsyncHandler;
			typedef Outcome<Error, Model::ListListenersByIpResult> ListListenersByIpOutcome;
			typedef std::future<ListListenersByIpOutcome> ListListenersByIpOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListListenersByIpRequest&, const ListListenersByIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListListenersByIpAsyncHandler;
			typedef Outcome<Error, Model::ListMigrationTaskResult> ListMigrationTaskOutcome;
			typedef std::future<ListMigrationTaskOutcome> ListMigrationTaskOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListMigrationTaskRequest&, const ListMigrationTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListMigrationTaskAsyncHandler;
			typedef Outcome<Error, Model::ListNacosConfigsResult> ListNacosConfigsOutcome;
			typedef std::future<ListNacosConfigsOutcome> ListNacosConfigsOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListNacosConfigsRequest&, const ListNacosConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNacosConfigsAsyncHandler;
			typedef Outcome<Error, Model::ListNacosHistoryConfigsResult> ListNacosHistoryConfigsOutcome;
			typedef std::future<ListNacosHistoryConfigsOutcome> ListNacosHistoryConfigsOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListNacosHistoryConfigsRequest&, const ListNacosHistoryConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNacosHistoryConfigsAsyncHandler;
			typedef Outcome<Error, Model::ListNamingTrackResult> ListNamingTrackOutcome;
			typedef std::future<ListNamingTrackOutcome> ListNamingTrackOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListNamingTrackRequest&, const ListNamingTrackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNamingTrackAsyncHandler;
			typedef Outcome<Error, Model::ListSSLCertResult> ListSSLCertOutcome;
			typedef std::future<ListSSLCertOutcome> ListSSLCertOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListSSLCertRequest&, const ListSSLCertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSSLCertAsyncHandler;
			typedef Outcome<Error, Model::ListSecurityGroupResult> ListSecurityGroupOutcome;
			typedef std::future<ListSecurityGroupOutcome> ListSecurityGroupOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListSecurityGroupRequest&, const ListSecurityGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSecurityGroupAsyncHandler;
			typedef Outcome<Error, Model::ListSecurityGroupRuleResult> ListSecurityGroupRuleOutcome;
			typedef std::future<ListSecurityGroupRuleOutcome> ListSecurityGroupRuleOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListSecurityGroupRuleRequest&, const ListSecurityGroupRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSecurityGroupRuleAsyncHandler;
			typedef Outcome<Error, Model::ListServiceSourceResult> ListServiceSourceOutcome;
			typedef std::future<ListServiceSourceOutcome> ListServiceSourceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListServiceSourceRequest&, const ListServiceSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListServiceSourceAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ListZkTrackResult> ListZkTrackOutcome;
			typedef std::future<ListZkTrackOutcome> ListZkTrackOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListZkTrackRequest&, const ListZkTrackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListZkTrackAsyncHandler;
			typedef Outcome<Error, Model::ListZnodeChildrenResult> ListZnodeChildrenOutcome;
			typedef std::future<ListZnodeChildrenOutcome> ListZnodeChildrenOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListZnodeChildrenRequest&, const ListZnodeChildrenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListZnodeChildrenAsyncHandler;
			typedef Outcome<Error, Model::ModifyGovernanceKubernetesClusterResult> ModifyGovernanceKubernetesClusterOutcome;
			typedef std::future<ModifyGovernanceKubernetesClusterOutcome> ModifyGovernanceKubernetesClusterOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ModifyGovernanceKubernetesClusterRequest&, const ModifyGovernanceKubernetesClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGovernanceKubernetesClusterAsyncHandler;
			typedef Outcome<Error, Model::ModifyLosslessRuleResult> ModifyLosslessRuleOutcome;
			typedef std::future<ModifyLosslessRuleOutcome> ModifyLosslessRuleOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ModifyLosslessRuleRequest&, const ModifyLosslessRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLosslessRuleAsyncHandler;
			typedef Outcome<Error, Model::OfflineGatewayRouteResult> OfflineGatewayRouteOutcome;
			typedef std::future<OfflineGatewayRouteOutcome> OfflineGatewayRouteOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::OfflineGatewayRouteRequest&, const OfflineGatewayRouteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OfflineGatewayRouteAsyncHandler;
			typedef Outcome<Error, Model::OrderClusterHealthCheckRiskNoticeResult> OrderClusterHealthCheckRiskNoticeOutcome;
			typedef std::future<OrderClusterHealthCheckRiskNoticeOutcome> OrderClusterHealthCheckRiskNoticeOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::OrderClusterHealthCheckRiskNoticeRequest&, const OrderClusterHealthCheckRiskNoticeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OrderClusterHealthCheckRiskNoticeAsyncHandler;
			typedef Outcome<Error, Model::PullServicesResult> PullServicesOutcome;
			typedef std::future<PullServicesOutcome> PullServicesOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::PullServicesRequest&, const PullServicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PullServicesAsyncHandler;
			typedef Outcome<Error, Model::PutClusterHealthCheckTaskResult> PutClusterHealthCheckTaskOutcome;
			typedef std::future<PutClusterHealthCheckTaskOutcome> PutClusterHealthCheckTaskOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::PutClusterHealthCheckTaskRequest&, const PutClusterHealthCheckTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PutClusterHealthCheckTaskAsyncHandler;
			typedef Outcome<Error, Model::QueryAllSwimmingLaneResult> QueryAllSwimmingLaneOutcome;
			typedef std::future<QueryAllSwimmingLaneOutcome> QueryAllSwimmingLaneOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::QueryAllSwimmingLaneRequest&, const QueryAllSwimmingLaneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryAllSwimmingLaneAsyncHandler;
			typedef Outcome<Error, Model::QueryAllSwimmingLaneGroupResult> QueryAllSwimmingLaneGroupOutcome;
			typedef std::future<QueryAllSwimmingLaneGroupOutcome> QueryAllSwimmingLaneGroupOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::QueryAllSwimmingLaneGroupRequest&, const QueryAllSwimmingLaneGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryAllSwimmingLaneGroupAsyncHandler;
			typedef Outcome<Error, Model::QueryBusinessLocationsResult> QueryBusinessLocationsOutcome;
			typedef std::future<QueryBusinessLocationsOutcome> QueryBusinessLocationsOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::QueryBusinessLocationsRequest&, const QueryBusinessLocationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryBusinessLocationsAsyncHandler;
			typedef Outcome<Error, Model::QueryClusterDetailResult> QueryClusterDetailOutcome;
			typedef std::future<QueryClusterDetailOutcome> QueryClusterDetailOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::QueryClusterDetailRequest&, const QueryClusterDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryClusterDetailAsyncHandler;
			typedef Outcome<Error, Model::QueryClusterDiskSpecificationResult> QueryClusterDiskSpecificationOutcome;
			typedef std::future<QueryClusterDiskSpecificationOutcome> QueryClusterDiskSpecificationOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::QueryClusterDiskSpecificationRequest&, const QueryClusterDiskSpecificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryClusterDiskSpecificationAsyncHandler;
			typedef Outcome<Error, Model::QueryClusterInfoResult> QueryClusterInfoOutcome;
			typedef std::future<QueryClusterInfoOutcome> QueryClusterInfoOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::QueryClusterInfoRequest&, const QueryClusterInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryClusterInfoAsyncHandler;
			typedef Outcome<Error, Model::QueryClusterSpecificationResult> QueryClusterSpecificationOutcome;
			typedef std::future<QueryClusterSpecificationOutcome> QueryClusterSpecificationOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::QueryClusterSpecificationRequest&, const QueryClusterSpecificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryClusterSpecificationAsyncHandler;
			typedef Outcome<Error, Model::QueryConfigResult> QueryConfigOutcome;
			typedef std::future<QueryConfigOutcome> QueryConfigOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::QueryConfigRequest&, const QueryConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryConfigAsyncHandler;
			typedef Outcome<Error, Model::QueryGatewayRegionResult> QueryGatewayRegionOutcome;
			typedef std::future<QueryGatewayRegionOutcome> QueryGatewayRegionOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::QueryGatewayRegionRequest&, const QueryGatewayRegionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryGatewayRegionAsyncHandler;
			typedef Outcome<Error, Model::QueryGatewayTypeResult> QueryGatewayTypeOutcome;
			typedef std::future<QueryGatewayTypeOutcome> QueryGatewayTypeOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::QueryGatewayTypeRequest&, const QueryGatewayTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryGatewayTypeAsyncHandler;
			typedef Outcome<Error, Model::QueryGovernanceKubernetesClusterResult> QueryGovernanceKubernetesClusterOutcome;
			typedef std::future<QueryGovernanceKubernetesClusterOutcome> QueryGovernanceKubernetesClusterOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::QueryGovernanceKubernetesClusterRequest&, const QueryGovernanceKubernetesClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryGovernanceKubernetesClusterAsyncHandler;
			typedef Outcome<Error, Model::QueryInstancesInfoResult> QueryInstancesInfoOutcome;
			typedef std::future<QueryInstancesInfoOutcome> QueryInstancesInfoOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::QueryInstancesInfoRequest&, const QueryInstancesInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryInstancesInfoAsyncHandler;
			typedef Outcome<Error, Model::QueryMonitorResult> QueryMonitorOutcome;
			typedef std::future<QueryMonitorOutcome> QueryMonitorOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::QueryMonitorRequest&, const QueryMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMonitorAsyncHandler;
			typedef Outcome<Error, Model::QueryNamespaceResult> QueryNamespaceOutcome;
			typedef std::future<QueryNamespaceOutcome> QueryNamespaceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::QueryNamespaceRequest&, const QueryNamespaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryNamespaceAsyncHandler;
			typedef Outcome<Error, Model::QuerySlbSpecResult> QuerySlbSpecOutcome;
			typedef std::future<QuerySlbSpecOutcome> QuerySlbSpecOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::QuerySlbSpecRequest&, const QuerySlbSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySlbSpecAsyncHandler;
			typedef Outcome<Error, Model::QuerySwimmingLaneByIdResult> QuerySwimmingLaneByIdOutcome;
			typedef std::future<QuerySwimmingLaneByIdOutcome> QuerySwimmingLaneByIdOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::QuerySwimmingLaneByIdRequest&, const QuerySwimmingLaneByIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySwimmingLaneByIdAsyncHandler;
			typedef Outcome<Error, Model::QueryZnodeDetailResult> QueryZnodeDetailOutcome;
			typedef std::future<QueryZnodeDetailOutcome> QueryZnodeDetailOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::QueryZnodeDetailRequest&, const QueryZnodeDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryZnodeDetailAsyncHandler;
			typedef Outcome<Error, Model::RemoveApplicationResult> RemoveApplicationOutcome;
			typedef std::future<RemoveApplicationOutcome> RemoveApplicationOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::RemoveApplicationRequest&, const RemoveApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveApplicationAsyncHandler;
			typedef Outcome<Error, Model::RemoveAuthPolicyResult> RemoveAuthPolicyOutcome;
			typedef std::future<RemoveAuthPolicyOutcome> RemoveAuthPolicyOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::RemoveAuthPolicyRequest&, const RemoveAuthPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveAuthPolicyAsyncHandler;
			typedef Outcome<Error, Model::RestartClusterResult> RestartClusterOutcome;
			typedef std::future<RestartClusterOutcome> RestartClusterOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::RestartClusterRequest&, const RestartClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartClusterAsyncHandler;
			typedef Outcome<Error, Model::RetryClusterResult> RetryClusterOutcome;
			typedef std::future<RetryClusterOutcome> RetryClusterOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::RetryClusterRequest&, const RetryClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RetryClusterAsyncHandler;
			typedef Outcome<Error, Model::SelectGatewaySlbResult> SelectGatewaySlbOutcome;
			typedef std::future<SelectGatewaySlbOutcome> SelectGatewaySlbOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::SelectGatewaySlbRequest&, const SelectGatewaySlbOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SelectGatewaySlbAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateAclResult> UpdateAclOutcome;
			typedef std::future<UpdateAclOutcome> UpdateAclOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateAclRequest&, const UpdateAclOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAclAsyncHandler;
			typedef Outcome<Error, Model::UpdateAuthPolicyResult> UpdateAuthPolicyOutcome;
			typedef std::future<UpdateAuthPolicyOutcome> UpdateAuthPolicyOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateAuthPolicyRequest&, const UpdateAuthPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAuthPolicyAsyncHandler;
			typedef Outcome<Error, Model::UpdateBlackWhiteListResult> UpdateBlackWhiteListOutcome;
			typedef std::future<UpdateBlackWhiteListOutcome> UpdateBlackWhiteListOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateBlackWhiteListRequest&, const UpdateBlackWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBlackWhiteListAsyncHandler;
			typedef Outcome<Error, Model::UpdateCircuitBreakerRuleResult> UpdateCircuitBreakerRuleOutcome;
			typedef std::future<UpdateCircuitBreakerRuleOutcome> UpdateCircuitBreakerRuleOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateCircuitBreakerRuleRequest&, const UpdateCircuitBreakerRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateCircuitBreakerRuleAsyncHandler;
			typedef Outcome<Error, Model::UpdateClusterResult> UpdateClusterOutcome;
			typedef std::future<UpdateClusterOutcome> UpdateClusterOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateClusterRequest&, const UpdateClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateClusterAsyncHandler;
			typedef Outcome<Error, Model::UpdateClusterSpecResult> UpdateClusterSpecOutcome;
			typedef std::future<UpdateClusterSpecOutcome> UpdateClusterSpecOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateClusterSpecRequest&, const UpdateClusterSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateClusterSpecAsyncHandler;
			typedef Outcome<Error, Model::UpdateConfigResult> UpdateConfigOutcome;
			typedef std::future<UpdateConfigOutcome> UpdateConfigOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateConfigRequest&, const UpdateConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateEngineNamespaceResult> UpdateEngineNamespaceOutcome;
			typedef std::future<UpdateEngineNamespaceOutcome> UpdateEngineNamespaceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateEngineNamespaceRequest&, const UpdateEngineNamespaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEngineNamespaceAsyncHandler;
			typedef Outcome<Error, Model::UpdateFlowRuleResult> UpdateFlowRuleOutcome;
			typedef std::future<UpdateFlowRuleOutcome> UpdateFlowRuleOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateFlowRuleRequest&, const UpdateFlowRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFlowRuleAsyncHandler;
			typedef Outcome<Error, Model::UpdateGatewayAuthConsumerResult> UpdateGatewayAuthConsumerOutcome;
			typedef std::future<UpdateGatewayAuthConsumerOutcome> UpdateGatewayAuthConsumerOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateGatewayAuthConsumerRequest&, const UpdateGatewayAuthConsumerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGatewayAuthConsumerAsyncHandler;
			typedef Outcome<Error, Model::UpdateGatewayAuthConsumerResourceResult> UpdateGatewayAuthConsumerResourceOutcome;
			typedef std::future<UpdateGatewayAuthConsumerResourceOutcome> UpdateGatewayAuthConsumerResourceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateGatewayAuthConsumerResourceRequest&, const UpdateGatewayAuthConsumerResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGatewayAuthConsumerResourceAsyncHandler;
			typedef Outcome<Error, Model::UpdateGatewayAuthConsumerResourceStatusResult> UpdateGatewayAuthConsumerResourceStatusOutcome;
			typedef std::future<UpdateGatewayAuthConsumerResourceStatusOutcome> UpdateGatewayAuthConsumerResourceStatusOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateGatewayAuthConsumerResourceStatusRequest&, const UpdateGatewayAuthConsumerResourceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGatewayAuthConsumerResourceStatusAsyncHandler;
			typedef Outcome<Error, Model::UpdateGatewayAuthConsumerStatusResult> UpdateGatewayAuthConsumerStatusOutcome;
			typedef std::future<UpdateGatewayAuthConsumerStatusOutcome> UpdateGatewayAuthConsumerStatusOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateGatewayAuthConsumerStatusRequest&, const UpdateGatewayAuthConsumerStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGatewayAuthConsumerStatusAsyncHandler;
			typedef Outcome<Error, Model::UpdateGatewayDomainResult> UpdateGatewayDomainOutcome;
			typedef std::future<UpdateGatewayDomainOutcome> UpdateGatewayDomainOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateGatewayDomainRequest&, const UpdateGatewayDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGatewayDomainAsyncHandler;
			typedef Outcome<Error, Model::UpdateGatewayNameResult> UpdateGatewayNameOutcome;
			typedef std::future<UpdateGatewayNameOutcome> UpdateGatewayNameOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateGatewayNameRequest&, const UpdateGatewayNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGatewayNameAsyncHandler;
			typedef Outcome<Error, Model::UpdateGatewayOptionResult> UpdateGatewayOptionOutcome;
			typedef std::future<UpdateGatewayOptionOutcome> UpdateGatewayOptionOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateGatewayOptionRequest&, const UpdateGatewayOptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGatewayOptionAsyncHandler;
			typedef Outcome<Error, Model::UpdateGatewayRouteResult> UpdateGatewayRouteOutcome;
			typedef std::future<UpdateGatewayRouteOutcome> UpdateGatewayRouteOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateGatewayRouteRequest&, const UpdateGatewayRouteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGatewayRouteAsyncHandler;
			typedef Outcome<Error, Model::UpdateGatewayRouteAuthResult> UpdateGatewayRouteAuthOutcome;
			typedef std::future<UpdateGatewayRouteAuthOutcome> UpdateGatewayRouteAuthOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateGatewayRouteAuthRequest&, const UpdateGatewayRouteAuthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGatewayRouteAuthAsyncHandler;
			typedef Outcome<Error, Model::UpdateGatewayRouteCORSResult> UpdateGatewayRouteCORSOutcome;
			typedef std::future<UpdateGatewayRouteCORSOutcome> UpdateGatewayRouteCORSOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateGatewayRouteCORSRequest&, const UpdateGatewayRouteCORSOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGatewayRouteCORSAsyncHandler;
			typedef Outcome<Error, Model::UpdateGatewayRouteHTTPRewriteResult> UpdateGatewayRouteHTTPRewriteOutcome;
			typedef std::future<UpdateGatewayRouteHTTPRewriteOutcome> UpdateGatewayRouteHTTPRewriteOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateGatewayRouteHTTPRewriteRequest&, const UpdateGatewayRouteHTTPRewriteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGatewayRouteHTTPRewriteAsyncHandler;
			typedef Outcome<Error, Model::UpdateGatewayRouteHeaderOpResult> UpdateGatewayRouteHeaderOpOutcome;
			typedef std::future<UpdateGatewayRouteHeaderOpOutcome> UpdateGatewayRouteHeaderOpOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateGatewayRouteHeaderOpRequest&, const UpdateGatewayRouteHeaderOpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGatewayRouteHeaderOpAsyncHandler;
			typedef Outcome<Error, Model::UpdateGatewayRouteRetryResult> UpdateGatewayRouteRetryOutcome;
			typedef std::future<UpdateGatewayRouteRetryOutcome> UpdateGatewayRouteRetryOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateGatewayRouteRetryRequest&, const UpdateGatewayRouteRetryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGatewayRouteRetryAsyncHandler;
			typedef Outcome<Error, Model::UpdateGatewayRouteTimeoutResult> UpdateGatewayRouteTimeoutOutcome;
			typedef std::future<UpdateGatewayRouteTimeoutOutcome> UpdateGatewayRouteTimeoutOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateGatewayRouteTimeoutRequest&, const UpdateGatewayRouteTimeoutOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGatewayRouteTimeoutAsyncHandler;
			typedef Outcome<Error, Model::UpdateGatewayRouteWafStatusResult> UpdateGatewayRouteWafStatusOutcome;
			typedef std::future<UpdateGatewayRouteWafStatusOutcome> UpdateGatewayRouteWafStatusOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateGatewayRouteWafStatusRequest&, const UpdateGatewayRouteWafStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGatewayRouteWafStatusAsyncHandler;
			typedef Outcome<Error, Model::UpdateGatewayServiceTrafficPolicyResult> UpdateGatewayServiceTrafficPolicyOutcome;
			typedef std::future<UpdateGatewayServiceTrafficPolicyOutcome> UpdateGatewayServiceTrafficPolicyOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateGatewayServiceTrafficPolicyRequest&, const UpdateGatewayServiceTrafficPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGatewayServiceTrafficPolicyAsyncHandler;
			typedef Outcome<Error, Model::UpdateGatewayServiceVersionResult> UpdateGatewayServiceVersionOutcome;
			typedef std::future<UpdateGatewayServiceVersionOutcome> UpdateGatewayServiceVersionOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateGatewayServiceVersionRequest&, const UpdateGatewayServiceVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGatewayServiceVersionAsyncHandler;
			typedef Outcome<Error, Model::UpdateGatewaySpecResult> UpdateGatewaySpecOutcome;
			typedef std::future<UpdateGatewaySpecOutcome> UpdateGatewaySpecOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateGatewaySpecRequest&, const UpdateGatewaySpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGatewaySpecAsyncHandler;
			typedef Outcome<Error, Model::UpdateImageResult> UpdateImageOutcome;
			typedef std::future<UpdateImageOutcome> UpdateImageOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateImageRequest&, const UpdateImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateImageAsyncHandler;
			typedef Outcome<Error, Model::UpdateMessageQueueRouteResult> UpdateMessageQueueRouteOutcome;
			typedef std::future<UpdateMessageQueueRouteOutcome> UpdateMessageQueueRouteOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateMessageQueueRouteRequest&, const UpdateMessageQueueRouteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMessageQueueRouteAsyncHandler;
			typedef Outcome<Error, Model::UpdateMigrationTaskResult> UpdateMigrationTaskOutcome;
			typedef std::future<UpdateMigrationTaskOutcome> UpdateMigrationTaskOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateMigrationTaskRequest&, const UpdateMigrationTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateMigrationTaskAsyncHandler;
			typedef Outcome<Error, Model::UpdateNacosClusterResult> UpdateNacosClusterOutcome;
			typedef std::future<UpdateNacosClusterOutcome> UpdateNacosClusterOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateNacosClusterRequest&, const UpdateNacosClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateNacosClusterAsyncHandler;
			typedef Outcome<Error, Model::UpdateNacosConfigResult> UpdateNacosConfigOutcome;
			typedef std::future<UpdateNacosConfigOutcome> UpdateNacosConfigOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateNacosConfigRequest&, const UpdateNacosConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateNacosConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateNacosInstanceResult> UpdateNacosInstanceOutcome;
			typedef std::future<UpdateNacosInstanceOutcome> UpdateNacosInstanceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateNacosInstanceRequest&, const UpdateNacosInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateNacosInstanceAsyncHandler;
			typedef Outcome<Error, Model::UpdateNacosServiceResult> UpdateNacosServiceOutcome;
			typedef std::future<UpdateNacosServiceOutcome> UpdateNacosServiceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateNacosServiceRequest&, const UpdateNacosServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateNacosServiceAsyncHandler;
			typedef Outcome<Error, Model::UpdatePluginConfigResult> UpdatePluginConfigOutcome;
			typedef std::future<UpdatePluginConfigOutcome> UpdatePluginConfigOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdatePluginConfigRequest&, const UpdatePluginConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdatePluginConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateSSLCertResult> UpdateSSLCertOutcome;
			typedef std::future<UpdateSSLCertOutcome> UpdateSSLCertOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateSSLCertRequest&, const UpdateSSLCertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSSLCertAsyncHandler;
			typedef Outcome<Error, Model::UpdateServiceSourceResult> UpdateServiceSourceOutcome;
			typedef std::future<UpdateServiceSourceOutcome> UpdateServiceSourceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateServiceSourceRequest&, const UpdateServiceSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateServiceSourceAsyncHandler;
			typedef Outcome<Error, Model::UpdateZnodeResult> UpdateZnodeOutcome;
			typedef std::future<UpdateZnodeOutcome> UpdateZnodeOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateZnodeRequest&, const UpdateZnodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateZnodeAsyncHandler;
			typedef Outcome<Error, Model::UpgradeClusterResult> UpgradeClusterOutcome;
			typedef std::future<UpgradeClusterOutcome> UpgradeClusterOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpgradeClusterRequest&, const UpgradeClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeClusterAsyncHandler;

			MseClient(const Credentials &credentials, const ClientConfiguration &configuration);
			MseClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			MseClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~MseClient();
			AddAuthPolicyOutcome addAuthPolicy(const Model::AddAuthPolicyRequest &request)const;
			void addAuthPolicyAsync(const Model::AddAuthPolicyRequest& request, const AddAuthPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddAuthPolicyOutcomeCallable addAuthPolicyCallable(const Model::AddAuthPolicyRequest& request) const;
			AddAuthResourceOutcome addAuthResource(const Model::AddAuthResourceRequest &request)const;
			void addAuthResourceAsync(const Model::AddAuthResourceRequest& request, const AddAuthResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddAuthResourceOutcomeCallable addAuthResourceCallable(const Model::AddAuthResourceRequest& request) const;
			AddBlackWhiteListOutcome addBlackWhiteList(const Model::AddBlackWhiteListRequest &request)const;
			void addBlackWhiteListAsync(const Model::AddBlackWhiteListRequest& request, const AddBlackWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddBlackWhiteListOutcomeCallable addBlackWhiteListCallable(const Model::AddBlackWhiteListRequest& request) const;
			AddGatewayOutcome addGateway(const Model::AddGatewayRequest &request)const;
			void addGatewayAsync(const Model::AddGatewayRequest& request, const AddGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddGatewayOutcomeCallable addGatewayCallable(const Model::AddGatewayRequest& request) const;
			AddGatewayAuthConsumerOutcome addGatewayAuthConsumer(const Model::AddGatewayAuthConsumerRequest &request)const;
			void addGatewayAuthConsumerAsync(const Model::AddGatewayAuthConsumerRequest& request, const AddGatewayAuthConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddGatewayAuthConsumerOutcomeCallable addGatewayAuthConsumerCallable(const Model::AddGatewayAuthConsumerRequest& request) const;
			AddGatewayDomainOutcome addGatewayDomain(const Model::AddGatewayDomainRequest &request)const;
			void addGatewayDomainAsync(const Model::AddGatewayDomainRequest& request, const AddGatewayDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddGatewayDomainOutcomeCallable addGatewayDomainCallable(const Model::AddGatewayDomainRequest& request) const;
			AddGatewayRouteOutcome addGatewayRoute(const Model::AddGatewayRouteRequest &request)const;
			void addGatewayRouteAsync(const Model::AddGatewayRouteRequest& request, const AddGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddGatewayRouteOutcomeCallable addGatewayRouteCallable(const Model::AddGatewayRouteRequest& request) const;
			AddGatewayServiceVersionOutcome addGatewayServiceVersion(const Model::AddGatewayServiceVersionRequest &request)const;
			void addGatewayServiceVersionAsync(const Model::AddGatewayServiceVersionRequest& request, const AddGatewayServiceVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddGatewayServiceVersionOutcomeCallable addGatewayServiceVersionCallable(const Model::AddGatewayServiceVersionRequest& request) const;
			AddGatewaySlbOutcome addGatewaySlb(const Model::AddGatewaySlbRequest &request)const;
			void addGatewaySlbAsync(const Model::AddGatewaySlbRequest& request, const AddGatewaySlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddGatewaySlbOutcomeCallable addGatewaySlbCallable(const Model::AddGatewaySlbRequest& request) const;
			AddMigrationTaskOutcome addMigrationTask(const Model::AddMigrationTaskRequest &request)const;
			void addMigrationTaskAsync(const Model::AddMigrationTaskRequest& request, const AddMigrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddMigrationTaskOutcomeCallable addMigrationTaskCallable(const Model::AddMigrationTaskRequest& request) const;
			AddMockRuleOutcome addMockRule(const Model::AddMockRuleRequest &request)const;
			void addMockRuleAsync(const Model::AddMockRuleRequest& request, const AddMockRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddMockRuleOutcomeCallable addMockRuleCallable(const Model::AddMockRuleRequest& request) const;
			AddSSLCertOutcome addSSLCert(const Model::AddSSLCertRequest &request)const;
			void addSSLCertAsync(const Model::AddSSLCertRequest& request, const AddSSLCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddSSLCertOutcomeCallable addSSLCertCallable(const Model::AddSSLCertRequest& request) const;
			AddSecurityGroupRuleOutcome addSecurityGroupRule(const Model::AddSecurityGroupRuleRequest &request)const;
			void addSecurityGroupRuleAsync(const Model::AddSecurityGroupRuleRequest& request, const AddSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddSecurityGroupRuleOutcomeCallable addSecurityGroupRuleCallable(const Model::AddSecurityGroupRuleRequest& request) const;
			AddServiceSourceOutcome addServiceSource(const Model::AddServiceSourceRequest &request)const;
			void addServiceSourceAsync(const Model::AddServiceSourceRequest& request, const AddServiceSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddServiceSourceOutcomeCallable addServiceSourceCallable(const Model::AddServiceSourceRequest& request) const;
			ApplyGatewayRouteOutcome applyGatewayRoute(const Model::ApplyGatewayRouteRequest &request)const;
			void applyGatewayRouteAsync(const Model::ApplyGatewayRouteRequest& request, const ApplyGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ApplyGatewayRouteOutcomeCallable applyGatewayRouteCallable(const Model::ApplyGatewayRouteRequest& request) const;
			ApplyTagPoliciesOutcome applyTagPolicies(const Model::ApplyTagPoliciesRequest &request)const;
			void applyTagPoliciesAsync(const Model::ApplyTagPoliciesRequest& request, const ApplyTagPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ApplyTagPoliciesOutcomeCallable applyTagPoliciesCallable(const Model::ApplyTagPoliciesRequest& request) const;
			CloneNacosConfigOutcome cloneNacosConfig(const Model::CloneNacosConfigRequest &request)const;
			void cloneNacosConfigAsync(const Model::CloneNacosConfigRequest& request, const CloneNacosConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloneNacosConfigOutcomeCallable cloneNacosConfigCallable(const Model::CloneNacosConfigRequest& request) const;
			CreateApplicationOutcome createApplication(const Model::CreateApplicationRequest &request)const;
			void createApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateApplicationOutcomeCallable createApplicationCallable(const Model::CreateApplicationRequest& request) const;
			CreateCircuitBreakerRuleOutcome createCircuitBreakerRule(const Model::CreateCircuitBreakerRuleRequest &request)const;
			void createCircuitBreakerRuleAsync(const Model::CreateCircuitBreakerRuleRequest& request, const CreateCircuitBreakerRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCircuitBreakerRuleOutcomeCallable createCircuitBreakerRuleCallable(const Model::CreateCircuitBreakerRuleRequest& request) const;
			CreateClusterOutcome createCluster(const Model::CreateClusterRequest &request)const;
			void createClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClusterOutcomeCallable createClusterCallable(const Model::CreateClusterRequest& request) const;
			CreateEngineNamespaceOutcome createEngineNamespace(const Model::CreateEngineNamespaceRequest &request)const;
			void createEngineNamespaceAsync(const Model::CreateEngineNamespaceRequest& request, const CreateEngineNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEngineNamespaceOutcomeCallable createEngineNamespaceCallable(const Model::CreateEngineNamespaceRequest& request) const;
			CreateFlowRuleOutcome createFlowRule(const Model::CreateFlowRuleRequest &request)const;
			void createFlowRuleAsync(const Model::CreateFlowRuleRequest& request, const CreateFlowRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFlowRuleOutcomeCallable createFlowRuleCallable(const Model::CreateFlowRuleRequest& request) const;
			CreateMseServiceApplicationOutcome createMseServiceApplication(const Model::CreateMseServiceApplicationRequest &request)const;
			void createMseServiceApplicationAsync(const Model::CreateMseServiceApplicationRequest& request, const CreateMseServiceApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMseServiceApplicationOutcomeCallable createMseServiceApplicationCallable(const Model::CreateMseServiceApplicationRequest& request) const;
			CreateNacosConfigOutcome createNacosConfig(const Model::CreateNacosConfigRequest &request)const;
			void createNacosConfigAsync(const Model::CreateNacosConfigRequest& request, const CreateNacosConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNacosConfigOutcomeCallable createNacosConfigCallable(const Model::CreateNacosConfigRequest& request) const;
			CreateNacosInstanceOutcome createNacosInstance(const Model::CreateNacosInstanceRequest &request)const;
			void createNacosInstanceAsync(const Model::CreateNacosInstanceRequest& request, const CreateNacosInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNacosInstanceOutcomeCallable createNacosInstanceCallable(const Model::CreateNacosInstanceRequest& request) const;
			CreateNacosServiceOutcome createNacosService(const Model::CreateNacosServiceRequest &request)const;
			void createNacosServiceAsync(const Model::CreateNacosServiceRequest& request, const CreateNacosServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNacosServiceOutcomeCallable createNacosServiceCallable(const Model::CreateNacosServiceRequest& request) const;
			CreateOrUpdateSwimmingLaneOutcome createOrUpdateSwimmingLane(const Model::CreateOrUpdateSwimmingLaneRequest &request)const;
			void createOrUpdateSwimmingLaneAsync(const Model::CreateOrUpdateSwimmingLaneRequest& request, const CreateOrUpdateSwimmingLaneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrUpdateSwimmingLaneOutcomeCallable createOrUpdateSwimmingLaneCallable(const Model::CreateOrUpdateSwimmingLaneRequest& request) const;
			CreateOrUpdateSwimmingLaneGroupOutcome createOrUpdateSwimmingLaneGroup(const Model::CreateOrUpdateSwimmingLaneGroupRequest &request)const;
			void createOrUpdateSwimmingLaneGroupAsync(const Model::CreateOrUpdateSwimmingLaneGroupRequest& request, const CreateOrUpdateSwimmingLaneGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateOrUpdateSwimmingLaneGroupOutcomeCallable createOrUpdateSwimmingLaneGroupCallable(const Model::CreateOrUpdateSwimmingLaneGroupRequest& request) const;
			CreateZnodeOutcome createZnode(const Model::CreateZnodeRequest &request)const;
			void createZnodeAsync(const Model::CreateZnodeRequest& request, const CreateZnodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateZnodeOutcomeCallable createZnodeCallable(const Model::CreateZnodeRequest& request) const;
			DeleteAuthResourceOutcome deleteAuthResource(const Model::DeleteAuthResourceRequest &request)const;
			void deleteAuthResourceAsync(const Model::DeleteAuthResourceRequest& request, const DeleteAuthResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAuthResourceOutcomeCallable deleteAuthResourceCallable(const Model::DeleteAuthResourceRequest& request) const;
			DeleteCircuitBreakerRulesOutcome deleteCircuitBreakerRules(const Model::DeleteCircuitBreakerRulesRequest &request)const;
			void deleteCircuitBreakerRulesAsync(const Model::DeleteCircuitBreakerRulesRequest& request, const DeleteCircuitBreakerRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCircuitBreakerRulesOutcomeCallable deleteCircuitBreakerRulesCallable(const Model::DeleteCircuitBreakerRulesRequest& request) const;
			DeleteClusterOutcome deleteCluster(const Model::DeleteClusterRequest &request)const;
			void deleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteClusterOutcomeCallable deleteClusterCallable(const Model::DeleteClusterRequest& request) const;
			DeleteEngineNamespaceOutcome deleteEngineNamespace(const Model::DeleteEngineNamespaceRequest &request)const;
			void deleteEngineNamespaceAsync(const Model::DeleteEngineNamespaceRequest& request, const DeleteEngineNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEngineNamespaceOutcomeCallable deleteEngineNamespaceCallable(const Model::DeleteEngineNamespaceRequest& request) const;
			DeleteFlowRulesOutcome deleteFlowRules(const Model::DeleteFlowRulesRequest &request)const;
			void deleteFlowRulesAsync(const Model::DeleteFlowRulesRequest& request, const DeleteFlowRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFlowRulesOutcomeCallable deleteFlowRulesCallable(const Model::DeleteFlowRulesRequest& request) const;
			DeleteGatewayOutcome deleteGateway(const Model::DeleteGatewayRequest &request)const;
			void deleteGatewayAsync(const Model::DeleteGatewayRequest& request, const DeleteGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGatewayOutcomeCallable deleteGatewayCallable(const Model::DeleteGatewayRequest& request) const;
			DeleteGatewayAuthConsumerOutcome deleteGatewayAuthConsumer(const Model::DeleteGatewayAuthConsumerRequest &request)const;
			void deleteGatewayAuthConsumerAsync(const Model::DeleteGatewayAuthConsumerRequest& request, const DeleteGatewayAuthConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGatewayAuthConsumerOutcomeCallable deleteGatewayAuthConsumerCallable(const Model::DeleteGatewayAuthConsumerRequest& request) const;
			DeleteGatewayAuthConsumerResourceOutcome deleteGatewayAuthConsumerResource(const Model::DeleteGatewayAuthConsumerResourceRequest &request)const;
			void deleteGatewayAuthConsumerResourceAsync(const Model::DeleteGatewayAuthConsumerResourceRequest& request, const DeleteGatewayAuthConsumerResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGatewayAuthConsumerResourceOutcomeCallable deleteGatewayAuthConsumerResourceCallable(const Model::DeleteGatewayAuthConsumerResourceRequest& request) const;
			DeleteGatewayDomainOutcome deleteGatewayDomain(const Model::DeleteGatewayDomainRequest &request)const;
			void deleteGatewayDomainAsync(const Model::DeleteGatewayDomainRequest& request, const DeleteGatewayDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGatewayDomainOutcomeCallable deleteGatewayDomainCallable(const Model::DeleteGatewayDomainRequest& request) const;
			DeleteGatewayRouteOutcome deleteGatewayRoute(const Model::DeleteGatewayRouteRequest &request)const;
			void deleteGatewayRouteAsync(const Model::DeleteGatewayRouteRequest& request, const DeleteGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGatewayRouteOutcomeCallable deleteGatewayRouteCallable(const Model::DeleteGatewayRouteRequest& request) const;
			DeleteGatewayServiceOutcome deleteGatewayService(const Model::DeleteGatewayServiceRequest &request)const;
			void deleteGatewayServiceAsync(const Model::DeleteGatewayServiceRequest& request, const DeleteGatewayServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGatewayServiceOutcomeCallable deleteGatewayServiceCallable(const Model::DeleteGatewayServiceRequest& request) const;
			DeleteGatewayServiceVersionOutcome deleteGatewayServiceVersion(const Model::DeleteGatewayServiceVersionRequest &request)const;
			void deleteGatewayServiceVersionAsync(const Model::DeleteGatewayServiceVersionRequest& request, const DeleteGatewayServiceVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGatewayServiceVersionOutcomeCallable deleteGatewayServiceVersionCallable(const Model::DeleteGatewayServiceVersionRequest& request) const;
			DeleteGatewaySlbOutcome deleteGatewaySlb(const Model::DeleteGatewaySlbRequest &request)const;
			void deleteGatewaySlbAsync(const Model::DeleteGatewaySlbRequest& request, const DeleteGatewaySlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGatewaySlbOutcomeCallable deleteGatewaySlbCallable(const Model::DeleteGatewaySlbRequest& request) const;
			DeleteMigrationTaskOutcome deleteMigrationTask(const Model::DeleteMigrationTaskRequest &request)const;
			void deleteMigrationTaskAsync(const Model::DeleteMigrationTaskRequest& request, const DeleteMigrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMigrationTaskOutcomeCallable deleteMigrationTaskCallable(const Model::DeleteMigrationTaskRequest& request) const;
			DeleteNacosConfigOutcome deleteNacosConfig(const Model::DeleteNacosConfigRequest &request)const;
			void deleteNacosConfigAsync(const Model::DeleteNacosConfigRequest& request, const DeleteNacosConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNacosConfigOutcomeCallable deleteNacosConfigCallable(const Model::DeleteNacosConfigRequest& request) const;
			DeleteNacosConfigsOutcome deleteNacosConfigs(const Model::DeleteNacosConfigsRequest &request)const;
			void deleteNacosConfigsAsync(const Model::DeleteNacosConfigsRequest& request, const DeleteNacosConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNacosConfigsOutcomeCallable deleteNacosConfigsCallable(const Model::DeleteNacosConfigsRequest& request) const;
			DeleteNacosInstanceOutcome deleteNacosInstance(const Model::DeleteNacosInstanceRequest &request)const;
			void deleteNacosInstanceAsync(const Model::DeleteNacosInstanceRequest& request, const DeleteNacosInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNacosInstanceOutcomeCallable deleteNacosInstanceCallable(const Model::DeleteNacosInstanceRequest& request) const;
			DeleteNacosServiceOutcome deleteNacosService(const Model::DeleteNacosServiceRequest &request)const;
			void deleteNacosServiceAsync(const Model::DeleteNacosServiceRequest& request, const DeleteNacosServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNacosServiceOutcomeCallable deleteNacosServiceCallable(const Model::DeleteNacosServiceRequest& request) const;
			DeleteNamespaceOutcome deleteNamespace(const Model::DeleteNamespaceRequest &request)const;
			void deleteNamespaceAsync(const Model::DeleteNamespaceRequest& request, const DeleteNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNamespaceOutcomeCallable deleteNamespaceCallable(const Model::DeleteNamespaceRequest& request) const;
			DeleteSecurityGroupRuleOutcome deleteSecurityGroupRule(const Model::DeleteSecurityGroupRuleRequest &request)const;
			void deleteSecurityGroupRuleAsync(const Model::DeleteSecurityGroupRuleRequest& request, const DeleteSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSecurityGroupRuleOutcomeCallable deleteSecurityGroupRuleCallable(const Model::DeleteSecurityGroupRuleRequest& request) const;
			DeleteServiceSourceOutcome deleteServiceSource(const Model::DeleteServiceSourceRequest &request)const;
			void deleteServiceSourceAsync(const Model::DeleteServiceSourceRequest& request, const DeleteServiceSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteServiceSourceOutcomeCallable deleteServiceSourceCallable(const Model::DeleteServiceSourceRequest& request) const;
			DeleteSwimmingLaneOutcome deleteSwimmingLane(const Model::DeleteSwimmingLaneRequest &request)const;
			void deleteSwimmingLaneAsync(const Model::DeleteSwimmingLaneRequest& request, const DeleteSwimmingLaneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSwimmingLaneOutcomeCallable deleteSwimmingLaneCallable(const Model::DeleteSwimmingLaneRequest& request) const;
			DeleteSwimmingLaneGroupOutcome deleteSwimmingLaneGroup(const Model::DeleteSwimmingLaneGroupRequest &request)const;
			void deleteSwimmingLaneGroupAsync(const Model::DeleteSwimmingLaneGroupRequest& request, const DeleteSwimmingLaneGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSwimmingLaneGroupOutcomeCallable deleteSwimmingLaneGroupCallable(const Model::DeleteSwimmingLaneGroupRequest& request) const;
			DeleteZnodeOutcome deleteZnode(const Model::DeleteZnodeRequest &request)const;
			void deleteZnodeAsync(const Model::DeleteZnodeRequest& request, const DeleteZnodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteZnodeOutcomeCallable deleteZnodeCallable(const Model::DeleteZnodeRequest& request) const;
			ExportNacosConfigOutcome exportNacosConfig(const Model::ExportNacosConfigRequest &request)const;
			void exportNacosConfigAsync(const Model::ExportNacosConfigRequest& request, const ExportNacosConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportNacosConfigOutcomeCallable exportNacosConfigCallable(const Model::ExportNacosConfigRequest& request) const;
			ExportZookeeperDataOutcome exportZookeeperData(const Model::ExportZookeeperDataRequest &request)const;
			void exportZookeeperDataAsync(const Model::ExportZookeeperDataRequest& request, const ExportZookeeperDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportZookeeperDataOutcomeCallable exportZookeeperDataCallable(const Model::ExportZookeeperDataRequest& request) const;
			FetchLosslessRuleListOutcome fetchLosslessRuleList(const Model::FetchLosslessRuleListRequest &request)const;
			void fetchLosslessRuleListAsync(const Model::FetchLosslessRuleListRequest& request, const FetchLosslessRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FetchLosslessRuleListOutcomeCallable fetchLosslessRuleListCallable(const Model::FetchLosslessRuleListRequest& request) const;
			GetAppMessageQueueRouteOutcome getAppMessageQueueRoute(const Model::GetAppMessageQueueRouteRequest &request)const;
			void getAppMessageQueueRouteAsync(const Model::GetAppMessageQueueRouteRequest& request, const GetAppMessageQueueRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAppMessageQueueRouteOutcomeCallable getAppMessageQueueRouteCallable(const Model::GetAppMessageQueueRouteRequest& request) const;
			GetApplicationListOutcome getApplicationList(const Model::GetApplicationListRequest &request)const;
			void getApplicationListAsync(const Model::GetApplicationListRequest& request, const GetApplicationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetApplicationListOutcomeCallable getApplicationListCallable(const Model::GetApplicationListRequest& request) const;
			GetApplicationListWithMetircsOutcome getApplicationListWithMetircs(const Model::GetApplicationListWithMetircsRequest &request)const;
			void getApplicationListWithMetircsAsync(const Model::GetApplicationListWithMetircsRequest& request, const GetApplicationListWithMetircsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetApplicationListWithMetircsOutcomeCallable getApplicationListWithMetircsCallable(const Model::GetApplicationListWithMetircsRequest& request) const;
			GetBlackWhiteListOutcome getBlackWhiteList(const Model::GetBlackWhiteListRequest &request)const;
			void getBlackWhiteListAsync(const Model::GetBlackWhiteListRequest& request, const GetBlackWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBlackWhiteListOutcomeCallable getBlackWhiteListCallable(const Model::GetBlackWhiteListRequest& request) const;
			GetEngineNamepaceOutcome getEngineNamepace(const Model::GetEngineNamepaceRequest &request)const;
			void getEngineNamepaceAsync(const Model::GetEngineNamepaceRequest& request, const GetEngineNamepaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEngineNamepaceOutcomeCallable getEngineNamepaceCallable(const Model::GetEngineNamepaceRequest& request) const;
			GetGatewayOutcome getGateway(const Model::GetGatewayRequest &request)const;
			void getGatewayAsync(const Model::GetGatewayRequest& request, const GetGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGatewayOutcomeCallable getGatewayCallable(const Model::GetGatewayRequest& request) const;
			GetGatewayAuthConsumerDetailOutcome getGatewayAuthConsumerDetail(const Model::GetGatewayAuthConsumerDetailRequest &request)const;
			void getGatewayAuthConsumerDetailAsync(const Model::GetGatewayAuthConsumerDetailRequest& request, const GetGatewayAuthConsumerDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGatewayAuthConsumerDetailOutcomeCallable getGatewayAuthConsumerDetailCallable(const Model::GetGatewayAuthConsumerDetailRequest& request) const;
			GetGatewayDomainDetailOutcome getGatewayDomainDetail(const Model::GetGatewayDomainDetailRequest &request)const;
			void getGatewayDomainDetailAsync(const Model::GetGatewayDomainDetailRequest& request, const GetGatewayDomainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGatewayDomainDetailOutcomeCallable getGatewayDomainDetailCallable(const Model::GetGatewayDomainDetailRequest& request) const;
			GetGatewayOptionOutcome getGatewayOption(const Model::GetGatewayOptionRequest &request)const;
			void getGatewayOptionAsync(const Model::GetGatewayOptionRequest& request, const GetGatewayOptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGatewayOptionOutcomeCallable getGatewayOptionCallable(const Model::GetGatewayOptionRequest& request) const;
			GetGatewayRouteDetailOutcome getGatewayRouteDetail(const Model::GetGatewayRouteDetailRequest &request)const;
			void getGatewayRouteDetailAsync(const Model::GetGatewayRouteDetailRequest& request, const GetGatewayRouteDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGatewayRouteDetailOutcomeCallable getGatewayRouteDetailCallable(const Model::GetGatewayRouteDetailRequest& request) const;
			GetGatewayServiceDetailOutcome getGatewayServiceDetail(const Model::GetGatewayServiceDetailRequest &request)const;
			void getGatewayServiceDetailAsync(const Model::GetGatewayServiceDetailRequest& request, const GetGatewayServiceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGatewayServiceDetailOutcomeCallable getGatewayServiceDetailCallable(const Model::GetGatewayServiceDetailRequest& request) const;
			GetGovernanceKubernetesClusterOutcome getGovernanceKubernetesCluster(const Model::GetGovernanceKubernetesClusterRequest &request)const;
			void getGovernanceKubernetesClusterAsync(const Model::GetGovernanceKubernetesClusterRequest& request, const GetGovernanceKubernetesClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGovernanceKubernetesClusterOutcomeCallable getGovernanceKubernetesClusterCallable(const Model::GetGovernanceKubernetesClusterRequest& request) const;
			GetImageOutcome getImage(const Model::GetImageRequest &request)const;
			void getImageAsync(const Model::GetImageRequest& request, const GetImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetImageOutcomeCallable getImageCallable(const Model::GetImageRequest& request) const;
			GetImportFileUrlOutcome getImportFileUrl(const Model::GetImportFileUrlRequest &request)const;
			void getImportFileUrlAsync(const Model::GetImportFileUrlRequest& request, const GetImportFileUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetImportFileUrlOutcomeCallable getImportFileUrlCallable(const Model::GetImportFileUrlRequest& request) const;
			GetKubernetesSourceOutcome getKubernetesSource(const Model::GetKubernetesSourceRequest &request)const;
			void getKubernetesSourceAsync(const Model::GetKubernetesSourceRequest& request, const GetKubernetesSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetKubernetesSourceOutcomeCallable getKubernetesSourceCallable(const Model::GetKubernetesSourceRequest& request) const;
			GetLosslessRuleByAppOutcome getLosslessRuleByApp(const Model::GetLosslessRuleByAppRequest &request)const;
			void getLosslessRuleByAppAsync(const Model::GetLosslessRuleByAppRequest& request, const GetLosslessRuleByAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetLosslessRuleByAppOutcomeCallable getLosslessRuleByAppCallable(const Model::GetLosslessRuleByAppRequest& request) const;
			GetMseFeatureSwitchOutcome getMseFeatureSwitch(const Model::GetMseFeatureSwitchRequest &request)const;
			void getMseFeatureSwitchAsync(const Model::GetMseFeatureSwitchRequest& request, const GetMseFeatureSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMseFeatureSwitchOutcomeCallable getMseFeatureSwitchCallable(const Model::GetMseFeatureSwitchRequest& request) const;
			GetMseSourceOutcome getMseSource(const Model::GetMseSourceRequest &request)const;
			void getMseSourceAsync(const Model::GetMseSourceRequest& request, const GetMseSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetMseSourceOutcomeCallable getMseSourceCallable(const Model::GetMseSourceRequest& request) const;
			GetNacosConfigOutcome getNacosConfig(const Model::GetNacosConfigRequest &request)const;
			void getNacosConfigAsync(const Model::GetNacosConfigRequest& request, const GetNacosConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNacosConfigOutcomeCallable getNacosConfigCallable(const Model::GetNacosConfigRequest& request) const;
			GetNacosHistoryConfigOutcome getNacosHistoryConfig(const Model::GetNacosHistoryConfigRequest &request)const;
			void getNacosHistoryConfigAsync(const Model::GetNacosHistoryConfigRequest& request, const GetNacosHistoryConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetNacosHistoryConfigOutcomeCallable getNacosHistoryConfigCallable(const Model::GetNacosHistoryConfigRequest& request) const;
			GetOverviewOutcome getOverview(const Model::GetOverviewRequest &request)const;
			void getOverviewAsync(const Model::GetOverviewRequest& request, const GetOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetOverviewOutcomeCallable getOverviewCallable(const Model::GetOverviewRequest& request) const;
			GetPluginConfigOutcome getPluginConfig(const Model::GetPluginConfigRequest &request)const;
			void getPluginConfigAsync(const Model::GetPluginConfigRequest& request, const GetPluginConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPluginConfigOutcomeCallable getPluginConfigCallable(const Model::GetPluginConfigRequest& request) const;
			GetPluginsOutcome getPlugins(const Model::GetPluginsRequest &request)const;
			void getPluginsAsync(const Model::GetPluginsRequest& request, const GetPluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPluginsOutcomeCallable getPluginsCallable(const Model::GetPluginsRequest& request) const;
			GetServiceListOutcome getServiceList(const Model::GetServiceListRequest &request)const;
			void getServiceListAsync(const Model::GetServiceListRequest& request, const GetServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetServiceListOutcomeCallable getServiceListCallable(const Model::GetServiceListRequest& request) const;
			GetServiceListPageOutcome getServiceListPage(const Model::GetServiceListPageRequest &request)const;
			void getServiceListPageAsync(const Model::GetServiceListPageRequest& request, const GetServiceListPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetServiceListPageOutcomeCallable getServiceListPageCallable(const Model::GetServiceListPageRequest& request) const;
			GetServiceListenersOutcome getServiceListeners(const Model::GetServiceListenersRequest &request)const;
			void getServiceListenersAsync(const Model::GetServiceListenersRequest& request, const GetServiceListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetServiceListenersOutcomeCallable getServiceListenersCallable(const Model::GetServiceListenersRequest& request) const;
			GetServiceMethodPageOutcome getServiceMethodPage(const Model::GetServiceMethodPageRequest &request)const;
			void getServiceMethodPageAsync(const Model::GetServiceMethodPageRequest& request, const GetServiceMethodPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetServiceMethodPageOutcomeCallable getServiceMethodPageCallable(const Model::GetServiceMethodPageRequest& request) const;
			GetTagsBySwimmingLaneGroupIdOutcome getTagsBySwimmingLaneGroupId(const Model::GetTagsBySwimmingLaneGroupIdRequest &request)const;
			void getTagsBySwimmingLaneGroupIdAsync(const Model::GetTagsBySwimmingLaneGroupIdRequest& request, const GetTagsBySwimmingLaneGroupIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTagsBySwimmingLaneGroupIdOutcomeCallable getTagsBySwimmingLaneGroupIdCallable(const Model::GetTagsBySwimmingLaneGroupIdRequest& request) const;
			GetZookeeperDataImportUrlOutcome getZookeeperDataImportUrl(const Model::GetZookeeperDataImportUrlRequest &request)const;
			void getZookeeperDataImportUrlAsync(const Model::GetZookeeperDataImportUrlRequest& request, const GetZookeeperDataImportUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetZookeeperDataImportUrlOutcomeCallable getZookeeperDataImportUrlCallable(const Model::GetZookeeperDataImportUrlRequest& request) const;
			ImportNacosConfigOutcome importNacosConfig(const Model::ImportNacosConfigRequest &request)const;
			void importNacosConfigAsync(const Model::ImportNacosConfigRequest& request, const ImportNacosConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportNacosConfigOutcomeCallable importNacosConfigCallable(const Model::ImportNacosConfigRequest& request) const;
			ImportServicesOutcome importServices(const Model::ImportServicesRequest &request)const;
			void importServicesAsync(const Model::ImportServicesRequest& request, const ImportServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportServicesOutcomeCallable importServicesCallable(const Model::ImportServicesRequest& request) const;
			ImportZookeeperDataOutcome importZookeeperData(const Model::ImportZookeeperDataRequest &request)const;
			void importZookeeperDataAsync(const Model::ImportZookeeperDataRequest& request, const ImportZookeeperDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportZookeeperDataOutcomeCallable importZookeeperDataCallable(const Model::ImportZookeeperDataRequest& request) const;
			ListAnsInstancesOutcome listAnsInstances(const Model::ListAnsInstancesRequest &request)const;
			void listAnsInstancesAsync(const Model::ListAnsInstancesRequest& request, const ListAnsInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAnsInstancesOutcomeCallable listAnsInstancesCallable(const Model::ListAnsInstancesRequest& request) const;
			ListAnsServiceClustersOutcome listAnsServiceClusters(const Model::ListAnsServiceClustersRequest &request)const;
			void listAnsServiceClustersAsync(const Model::ListAnsServiceClustersRequest& request, const ListAnsServiceClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAnsServiceClustersOutcomeCallable listAnsServiceClustersCallable(const Model::ListAnsServiceClustersRequest& request) const;
			ListAnsServicesOutcome listAnsServices(const Model::ListAnsServicesRequest &request)const;
			void listAnsServicesAsync(const Model::ListAnsServicesRequest& request, const ListAnsServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAnsServicesOutcomeCallable listAnsServicesCallable(const Model::ListAnsServicesRequest& request) const;
			ListAppBySwimmingLaneGroupTagOutcome listAppBySwimmingLaneGroupTag(const Model::ListAppBySwimmingLaneGroupTagRequest &request)const;
			void listAppBySwimmingLaneGroupTagAsync(const Model::ListAppBySwimmingLaneGroupTagRequest& request, const ListAppBySwimmingLaneGroupTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAppBySwimmingLaneGroupTagOutcomeCallable listAppBySwimmingLaneGroupTagCallable(const Model::ListAppBySwimmingLaneGroupTagRequest& request) const;
			ListApplicationsWithTagRulesOutcome listApplicationsWithTagRules(const Model::ListApplicationsWithTagRulesRequest &request)const;
			void listApplicationsWithTagRulesAsync(const Model::ListApplicationsWithTagRulesRequest& request, const ListApplicationsWithTagRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListApplicationsWithTagRulesOutcomeCallable listApplicationsWithTagRulesCallable(const Model::ListApplicationsWithTagRulesRequest& request) const;
			ListAuthPolicyOutcome listAuthPolicy(const Model::ListAuthPolicyRequest &request)const;
			void listAuthPolicyAsync(const Model::ListAuthPolicyRequest& request, const ListAuthPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAuthPolicyOutcomeCallable listAuthPolicyCallable(const Model::ListAuthPolicyRequest& request) const;
			ListCircuitBreakerRulesOutcome listCircuitBreakerRules(const Model::ListCircuitBreakerRulesRequest &request)const;
			void listCircuitBreakerRulesAsync(const Model::ListCircuitBreakerRulesRequest& request, const ListCircuitBreakerRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListCircuitBreakerRulesOutcomeCallable listCircuitBreakerRulesCallable(const Model::ListCircuitBreakerRulesRequest& request) const;
			ListClusterConnectionTypesOutcome listClusterConnectionTypes(const Model::ListClusterConnectionTypesRequest &request)const;
			void listClusterConnectionTypesAsync(const Model::ListClusterConnectionTypesRequest& request, const ListClusterConnectionTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterConnectionTypesOutcomeCallable listClusterConnectionTypesCallable(const Model::ListClusterConnectionTypesRequest& request) const;
			ListClusterHealthCheckTaskOutcome listClusterHealthCheckTask(const Model::ListClusterHealthCheckTaskRequest &request)const;
			void listClusterHealthCheckTaskAsync(const Model::ListClusterHealthCheckTaskRequest& request, const ListClusterHealthCheckTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterHealthCheckTaskOutcomeCallable listClusterHealthCheckTaskCallable(const Model::ListClusterHealthCheckTaskRequest& request) const;
			ListClusterTypesOutcome listClusterTypes(const Model::ListClusterTypesRequest &request)const;
			void listClusterTypesAsync(const Model::ListClusterTypesRequest& request, const ListClusterTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterTypesOutcomeCallable listClusterTypesCallable(const Model::ListClusterTypesRequest& request) const;
			ListClusterVersionsOutcome listClusterVersions(const Model::ListClusterVersionsRequest &request)const;
			void listClusterVersionsAsync(const Model::ListClusterVersionsRequest& request, const ListClusterVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterVersionsOutcomeCallable listClusterVersionsCallable(const Model::ListClusterVersionsRequest& request) const;
			ListClustersOutcome listClusters(const Model::ListClustersRequest &request)const;
			void listClustersAsync(const Model::ListClustersRequest& request, const ListClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClustersOutcomeCallable listClustersCallable(const Model::ListClustersRequest& request) const;
			ListConfigTrackOutcome listConfigTrack(const Model::ListConfigTrackRequest &request)const;
			void listConfigTrackAsync(const Model::ListConfigTrackRequest& request, const ListConfigTrackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListConfigTrackOutcomeCallable listConfigTrackCallable(const Model::ListConfigTrackRequest& request) const;
			ListEngineNamespacesOutcome listEngineNamespaces(const Model::ListEngineNamespacesRequest &request)const;
			void listEngineNamespacesAsync(const Model::ListEngineNamespacesRequest& request, const ListEngineNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEngineNamespacesOutcomeCallable listEngineNamespacesCallable(const Model::ListEngineNamespacesRequest& request) const;
			ListEurekaInstancesOutcome listEurekaInstances(const Model::ListEurekaInstancesRequest &request)const;
			void listEurekaInstancesAsync(const Model::ListEurekaInstancesRequest& request, const ListEurekaInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEurekaInstancesOutcomeCallable listEurekaInstancesCallable(const Model::ListEurekaInstancesRequest& request) const;
			ListEurekaServicesOutcome listEurekaServices(const Model::ListEurekaServicesRequest &request)const;
			void listEurekaServicesAsync(const Model::ListEurekaServicesRequest& request, const ListEurekaServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEurekaServicesOutcomeCallable listEurekaServicesCallable(const Model::ListEurekaServicesRequest& request) const;
			ListExportZookeeperDataOutcome listExportZookeeperData(const Model::ListExportZookeeperDataRequest &request)const;
			void listExportZookeeperDataAsync(const Model::ListExportZookeeperDataRequest& request, const ListExportZookeeperDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListExportZookeeperDataOutcomeCallable listExportZookeeperDataCallable(const Model::ListExportZookeeperDataRequest& request) const;
			ListFlowRulesOutcome listFlowRules(const Model::ListFlowRulesRequest &request)const;
			void listFlowRulesAsync(const Model::ListFlowRulesRequest& request, const ListFlowRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListFlowRulesOutcomeCallable listFlowRulesCallable(const Model::ListFlowRulesRequest& request) const;
			ListGatewayOutcome listGateway(const Model::ListGatewayRequest &request)const;
			void listGatewayAsync(const Model::ListGatewayRequest& request, const ListGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGatewayOutcomeCallable listGatewayCallable(const Model::ListGatewayRequest& request) const;
			ListGatewayAuthConsumerOutcome listGatewayAuthConsumer(const Model::ListGatewayAuthConsumerRequest &request)const;
			void listGatewayAuthConsumerAsync(const Model::ListGatewayAuthConsumerRequest& request, const ListGatewayAuthConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGatewayAuthConsumerOutcomeCallable listGatewayAuthConsumerCallable(const Model::ListGatewayAuthConsumerRequest& request) const;
			ListGatewayAuthConsumerResourceOutcome listGatewayAuthConsumerResource(const Model::ListGatewayAuthConsumerResourceRequest &request)const;
			void listGatewayAuthConsumerResourceAsync(const Model::ListGatewayAuthConsumerResourceRequest& request, const ListGatewayAuthConsumerResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGatewayAuthConsumerResourceOutcomeCallable listGatewayAuthConsumerResourceCallable(const Model::ListGatewayAuthConsumerResourceRequest& request) const;
			ListGatewayDomainOutcome listGatewayDomain(const Model::ListGatewayDomainRequest &request)const;
			void listGatewayDomainAsync(const Model::ListGatewayDomainRequest& request, const ListGatewayDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGatewayDomainOutcomeCallable listGatewayDomainCallable(const Model::ListGatewayDomainRequest& request) const;
			ListGatewayRouteOutcome listGatewayRoute(const Model::ListGatewayRouteRequest &request)const;
			void listGatewayRouteAsync(const Model::ListGatewayRouteRequest& request, const ListGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGatewayRouteOutcomeCallable listGatewayRouteCallable(const Model::ListGatewayRouteRequest& request) const;
			ListGatewayRouteOnAuthOutcome listGatewayRouteOnAuth(const Model::ListGatewayRouteOnAuthRequest &request)const;
			void listGatewayRouteOnAuthAsync(const Model::ListGatewayRouteOnAuthRequest& request, const ListGatewayRouteOnAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGatewayRouteOnAuthOutcomeCallable listGatewayRouteOnAuthCallable(const Model::ListGatewayRouteOnAuthRequest& request) const;
			ListGatewayServiceOutcome listGatewayService(const Model::ListGatewayServiceRequest &request)const;
			void listGatewayServiceAsync(const Model::ListGatewayServiceRequest& request, const ListGatewayServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGatewayServiceOutcomeCallable listGatewayServiceCallable(const Model::ListGatewayServiceRequest& request) const;
			ListGatewaySlbOutcome listGatewaySlb(const Model::ListGatewaySlbRequest &request)const;
			void listGatewaySlbAsync(const Model::ListGatewaySlbRequest& request, const ListGatewaySlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGatewaySlbOutcomeCallable listGatewaySlbCallable(const Model::ListGatewaySlbRequest& request) const;
			ListInstanceCountOutcome listInstanceCount(const Model::ListInstanceCountRequest &request)const;
			void listInstanceCountAsync(const Model::ListInstanceCountRequest& request, const ListInstanceCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListInstanceCountOutcomeCallable listInstanceCountCallable(const Model::ListInstanceCountRequest& request) const;
			ListListenersByConfigOutcome listListenersByConfig(const Model::ListListenersByConfigRequest &request)const;
			void listListenersByConfigAsync(const Model::ListListenersByConfigRequest& request, const ListListenersByConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListListenersByConfigOutcomeCallable listListenersByConfigCallable(const Model::ListListenersByConfigRequest& request) const;
			ListListenersByIpOutcome listListenersByIp(const Model::ListListenersByIpRequest &request)const;
			void listListenersByIpAsync(const Model::ListListenersByIpRequest& request, const ListListenersByIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListListenersByIpOutcomeCallable listListenersByIpCallable(const Model::ListListenersByIpRequest& request) const;
			ListMigrationTaskOutcome listMigrationTask(const Model::ListMigrationTaskRequest &request)const;
			void listMigrationTaskAsync(const Model::ListMigrationTaskRequest& request, const ListMigrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListMigrationTaskOutcomeCallable listMigrationTaskCallable(const Model::ListMigrationTaskRequest& request) const;
			ListNacosConfigsOutcome listNacosConfigs(const Model::ListNacosConfigsRequest &request)const;
			void listNacosConfigsAsync(const Model::ListNacosConfigsRequest& request, const ListNacosConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNacosConfigsOutcomeCallable listNacosConfigsCallable(const Model::ListNacosConfigsRequest& request) const;
			ListNacosHistoryConfigsOutcome listNacosHistoryConfigs(const Model::ListNacosHistoryConfigsRequest &request)const;
			void listNacosHistoryConfigsAsync(const Model::ListNacosHistoryConfigsRequest& request, const ListNacosHistoryConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNacosHistoryConfigsOutcomeCallable listNacosHistoryConfigsCallable(const Model::ListNacosHistoryConfigsRequest& request) const;
			ListNamingTrackOutcome listNamingTrack(const Model::ListNamingTrackRequest &request)const;
			void listNamingTrackAsync(const Model::ListNamingTrackRequest& request, const ListNamingTrackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNamingTrackOutcomeCallable listNamingTrackCallable(const Model::ListNamingTrackRequest& request) const;
			ListSSLCertOutcome listSSLCert(const Model::ListSSLCertRequest &request)const;
			void listSSLCertAsync(const Model::ListSSLCertRequest& request, const ListSSLCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSSLCertOutcomeCallable listSSLCertCallable(const Model::ListSSLCertRequest& request) const;
			ListSecurityGroupOutcome listSecurityGroup(const Model::ListSecurityGroupRequest &request)const;
			void listSecurityGroupAsync(const Model::ListSecurityGroupRequest& request, const ListSecurityGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSecurityGroupOutcomeCallable listSecurityGroupCallable(const Model::ListSecurityGroupRequest& request) const;
			ListSecurityGroupRuleOutcome listSecurityGroupRule(const Model::ListSecurityGroupRuleRequest &request)const;
			void listSecurityGroupRuleAsync(const Model::ListSecurityGroupRuleRequest& request, const ListSecurityGroupRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSecurityGroupRuleOutcomeCallable listSecurityGroupRuleCallable(const Model::ListSecurityGroupRuleRequest& request) const;
			ListServiceSourceOutcome listServiceSource(const Model::ListServiceSourceRequest &request)const;
			void listServiceSourceAsync(const Model::ListServiceSourceRequest& request, const ListServiceSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListServiceSourceOutcomeCallable listServiceSourceCallable(const Model::ListServiceSourceRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ListZkTrackOutcome listZkTrack(const Model::ListZkTrackRequest &request)const;
			void listZkTrackAsync(const Model::ListZkTrackRequest& request, const ListZkTrackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListZkTrackOutcomeCallable listZkTrackCallable(const Model::ListZkTrackRequest& request) const;
			ListZnodeChildrenOutcome listZnodeChildren(const Model::ListZnodeChildrenRequest &request)const;
			void listZnodeChildrenAsync(const Model::ListZnodeChildrenRequest& request, const ListZnodeChildrenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListZnodeChildrenOutcomeCallable listZnodeChildrenCallable(const Model::ListZnodeChildrenRequest& request) const;
			ModifyGovernanceKubernetesClusterOutcome modifyGovernanceKubernetesCluster(const Model::ModifyGovernanceKubernetesClusterRequest &request)const;
			void modifyGovernanceKubernetesClusterAsync(const Model::ModifyGovernanceKubernetesClusterRequest& request, const ModifyGovernanceKubernetesClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyGovernanceKubernetesClusterOutcomeCallable modifyGovernanceKubernetesClusterCallable(const Model::ModifyGovernanceKubernetesClusterRequest& request) const;
			ModifyLosslessRuleOutcome modifyLosslessRule(const Model::ModifyLosslessRuleRequest &request)const;
			void modifyLosslessRuleAsync(const Model::ModifyLosslessRuleRequest& request, const ModifyLosslessRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLosslessRuleOutcomeCallable modifyLosslessRuleCallable(const Model::ModifyLosslessRuleRequest& request) const;
			OfflineGatewayRouteOutcome offlineGatewayRoute(const Model::OfflineGatewayRouteRequest &request)const;
			void offlineGatewayRouteAsync(const Model::OfflineGatewayRouteRequest& request, const OfflineGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OfflineGatewayRouteOutcomeCallable offlineGatewayRouteCallable(const Model::OfflineGatewayRouteRequest& request) const;
			OrderClusterHealthCheckRiskNoticeOutcome orderClusterHealthCheckRiskNotice(const Model::OrderClusterHealthCheckRiskNoticeRequest &request)const;
			void orderClusterHealthCheckRiskNoticeAsync(const Model::OrderClusterHealthCheckRiskNoticeRequest& request, const OrderClusterHealthCheckRiskNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OrderClusterHealthCheckRiskNoticeOutcomeCallable orderClusterHealthCheckRiskNoticeCallable(const Model::OrderClusterHealthCheckRiskNoticeRequest& request) const;
			PullServicesOutcome pullServices(const Model::PullServicesRequest &request)const;
			void pullServicesAsync(const Model::PullServicesRequest& request, const PullServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PullServicesOutcomeCallable pullServicesCallable(const Model::PullServicesRequest& request) const;
			PutClusterHealthCheckTaskOutcome putClusterHealthCheckTask(const Model::PutClusterHealthCheckTaskRequest &request)const;
			void putClusterHealthCheckTaskAsync(const Model::PutClusterHealthCheckTaskRequest& request, const PutClusterHealthCheckTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PutClusterHealthCheckTaskOutcomeCallable putClusterHealthCheckTaskCallable(const Model::PutClusterHealthCheckTaskRequest& request) const;
			QueryAllSwimmingLaneOutcome queryAllSwimmingLane(const Model::QueryAllSwimmingLaneRequest &request)const;
			void queryAllSwimmingLaneAsync(const Model::QueryAllSwimmingLaneRequest& request, const QueryAllSwimmingLaneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryAllSwimmingLaneOutcomeCallable queryAllSwimmingLaneCallable(const Model::QueryAllSwimmingLaneRequest& request) const;
			QueryAllSwimmingLaneGroupOutcome queryAllSwimmingLaneGroup(const Model::QueryAllSwimmingLaneGroupRequest &request)const;
			void queryAllSwimmingLaneGroupAsync(const Model::QueryAllSwimmingLaneGroupRequest& request, const QueryAllSwimmingLaneGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryAllSwimmingLaneGroupOutcomeCallable queryAllSwimmingLaneGroupCallable(const Model::QueryAllSwimmingLaneGroupRequest& request) const;
			QueryBusinessLocationsOutcome queryBusinessLocations(const Model::QueryBusinessLocationsRequest &request)const;
			void queryBusinessLocationsAsync(const Model::QueryBusinessLocationsRequest& request, const QueryBusinessLocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryBusinessLocationsOutcomeCallable queryBusinessLocationsCallable(const Model::QueryBusinessLocationsRequest& request) const;
			QueryClusterDetailOutcome queryClusterDetail(const Model::QueryClusterDetailRequest &request)const;
			void queryClusterDetailAsync(const Model::QueryClusterDetailRequest& request, const QueryClusterDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryClusterDetailOutcomeCallable queryClusterDetailCallable(const Model::QueryClusterDetailRequest& request) const;
			QueryClusterDiskSpecificationOutcome queryClusterDiskSpecification(const Model::QueryClusterDiskSpecificationRequest &request)const;
			void queryClusterDiskSpecificationAsync(const Model::QueryClusterDiskSpecificationRequest& request, const QueryClusterDiskSpecificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryClusterDiskSpecificationOutcomeCallable queryClusterDiskSpecificationCallable(const Model::QueryClusterDiskSpecificationRequest& request) const;
			QueryClusterInfoOutcome queryClusterInfo(const Model::QueryClusterInfoRequest &request)const;
			void queryClusterInfoAsync(const Model::QueryClusterInfoRequest& request, const QueryClusterInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryClusterInfoOutcomeCallable queryClusterInfoCallable(const Model::QueryClusterInfoRequest& request) const;
			QueryClusterSpecificationOutcome queryClusterSpecification(const Model::QueryClusterSpecificationRequest &request)const;
			void queryClusterSpecificationAsync(const Model::QueryClusterSpecificationRequest& request, const QueryClusterSpecificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryClusterSpecificationOutcomeCallable queryClusterSpecificationCallable(const Model::QueryClusterSpecificationRequest& request) const;
			QueryConfigOutcome queryConfig(const Model::QueryConfigRequest &request)const;
			void queryConfigAsync(const Model::QueryConfigRequest& request, const QueryConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryConfigOutcomeCallable queryConfigCallable(const Model::QueryConfigRequest& request) const;
			QueryGatewayRegionOutcome queryGatewayRegion(const Model::QueryGatewayRegionRequest &request)const;
			void queryGatewayRegionAsync(const Model::QueryGatewayRegionRequest& request, const QueryGatewayRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryGatewayRegionOutcomeCallable queryGatewayRegionCallable(const Model::QueryGatewayRegionRequest& request) const;
			QueryGatewayTypeOutcome queryGatewayType(const Model::QueryGatewayTypeRequest &request)const;
			void queryGatewayTypeAsync(const Model::QueryGatewayTypeRequest& request, const QueryGatewayTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryGatewayTypeOutcomeCallable queryGatewayTypeCallable(const Model::QueryGatewayTypeRequest& request) const;
			QueryGovernanceKubernetesClusterOutcome queryGovernanceKubernetesCluster(const Model::QueryGovernanceKubernetesClusterRequest &request)const;
			void queryGovernanceKubernetesClusterAsync(const Model::QueryGovernanceKubernetesClusterRequest& request, const QueryGovernanceKubernetesClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryGovernanceKubernetesClusterOutcomeCallable queryGovernanceKubernetesClusterCallable(const Model::QueryGovernanceKubernetesClusterRequest& request) const;
			QueryInstancesInfoOutcome queryInstancesInfo(const Model::QueryInstancesInfoRequest &request)const;
			void queryInstancesInfoAsync(const Model::QueryInstancesInfoRequest& request, const QueryInstancesInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryInstancesInfoOutcomeCallable queryInstancesInfoCallable(const Model::QueryInstancesInfoRequest& request) const;
			QueryMonitorOutcome queryMonitor(const Model::QueryMonitorRequest &request)const;
			void queryMonitorAsync(const Model::QueryMonitorRequest& request, const QueryMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMonitorOutcomeCallable queryMonitorCallable(const Model::QueryMonitorRequest& request) const;
			QueryNamespaceOutcome queryNamespace(const Model::QueryNamespaceRequest &request)const;
			void queryNamespaceAsync(const Model::QueryNamespaceRequest& request, const QueryNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryNamespaceOutcomeCallable queryNamespaceCallable(const Model::QueryNamespaceRequest& request) const;
			QuerySlbSpecOutcome querySlbSpec(const Model::QuerySlbSpecRequest &request)const;
			void querySlbSpecAsync(const Model::QuerySlbSpecRequest& request, const QuerySlbSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySlbSpecOutcomeCallable querySlbSpecCallable(const Model::QuerySlbSpecRequest& request) const;
			QuerySwimmingLaneByIdOutcome querySwimmingLaneById(const Model::QuerySwimmingLaneByIdRequest &request)const;
			void querySwimmingLaneByIdAsync(const Model::QuerySwimmingLaneByIdRequest& request, const QuerySwimmingLaneByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySwimmingLaneByIdOutcomeCallable querySwimmingLaneByIdCallable(const Model::QuerySwimmingLaneByIdRequest& request) const;
			QueryZnodeDetailOutcome queryZnodeDetail(const Model::QueryZnodeDetailRequest &request)const;
			void queryZnodeDetailAsync(const Model::QueryZnodeDetailRequest& request, const QueryZnodeDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryZnodeDetailOutcomeCallable queryZnodeDetailCallable(const Model::QueryZnodeDetailRequest& request) const;
			RemoveApplicationOutcome removeApplication(const Model::RemoveApplicationRequest &request)const;
			void removeApplicationAsync(const Model::RemoveApplicationRequest& request, const RemoveApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveApplicationOutcomeCallable removeApplicationCallable(const Model::RemoveApplicationRequest& request) const;
			RemoveAuthPolicyOutcome removeAuthPolicy(const Model::RemoveAuthPolicyRequest &request)const;
			void removeAuthPolicyAsync(const Model::RemoveAuthPolicyRequest& request, const RemoveAuthPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveAuthPolicyOutcomeCallable removeAuthPolicyCallable(const Model::RemoveAuthPolicyRequest& request) const;
			RestartClusterOutcome restartCluster(const Model::RestartClusterRequest &request)const;
			void restartClusterAsync(const Model::RestartClusterRequest& request, const RestartClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartClusterOutcomeCallable restartClusterCallable(const Model::RestartClusterRequest& request) const;
			RetryClusterOutcome retryCluster(const Model::RetryClusterRequest &request)const;
			void retryClusterAsync(const Model::RetryClusterRequest& request, const RetryClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RetryClusterOutcomeCallable retryClusterCallable(const Model::RetryClusterRequest& request) const;
			SelectGatewaySlbOutcome selectGatewaySlb(const Model::SelectGatewaySlbRequest &request)const;
			void selectGatewaySlbAsync(const Model::SelectGatewaySlbRequest& request, const SelectGatewaySlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SelectGatewaySlbOutcomeCallable selectGatewaySlbCallable(const Model::SelectGatewaySlbRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpdateAclOutcome updateAcl(const Model::UpdateAclRequest &request)const;
			void updateAclAsync(const Model::UpdateAclRequest& request, const UpdateAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAclOutcomeCallable updateAclCallable(const Model::UpdateAclRequest& request) const;
			UpdateAuthPolicyOutcome updateAuthPolicy(const Model::UpdateAuthPolicyRequest &request)const;
			void updateAuthPolicyAsync(const Model::UpdateAuthPolicyRequest& request, const UpdateAuthPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAuthPolicyOutcomeCallable updateAuthPolicyCallable(const Model::UpdateAuthPolicyRequest& request) const;
			UpdateBlackWhiteListOutcome updateBlackWhiteList(const Model::UpdateBlackWhiteListRequest &request)const;
			void updateBlackWhiteListAsync(const Model::UpdateBlackWhiteListRequest& request, const UpdateBlackWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateBlackWhiteListOutcomeCallable updateBlackWhiteListCallable(const Model::UpdateBlackWhiteListRequest& request) const;
			UpdateCircuitBreakerRuleOutcome updateCircuitBreakerRule(const Model::UpdateCircuitBreakerRuleRequest &request)const;
			void updateCircuitBreakerRuleAsync(const Model::UpdateCircuitBreakerRuleRequest& request, const UpdateCircuitBreakerRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateCircuitBreakerRuleOutcomeCallable updateCircuitBreakerRuleCallable(const Model::UpdateCircuitBreakerRuleRequest& request) const;
			UpdateClusterOutcome updateCluster(const Model::UpdateClusterRequest &request)const;
			void updateClusterAsync(const Model::UpdateClusterRequest& request, const UpdateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateClusterOutcomeCallable updateClusterCallable(const Model::UpdateClusterRequest& request) const;
			UpdateClusterSpecOutcome updateClusterSpec(const Model::UpdateClusterSpecRequest &request)const;
			void updateClusterSpecAsync(const Model::UpdateClusterSpecRequest& request, const UpdateClusterSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateClusterSpecOutcomeCallable updateClusterSpecCallable(const Model::UpdateClusterSpecRequest& request) const;
			UpdateConfigOutcome updateConfig(const Model::UpdateConfigRequest &request)const;
			void updateConfigAsync(const Model::UpdateConfigRequest& request, const UpdateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateConfigOutcomeCallable updateConfigCallable(const Model::UpdateConfigRequest& request) const;
			UpdateEngineNamespaceOutcome updateEngineNamespace(const Model::UpdateEngineNamespaceRequest &request)const;
			void updateEngineNamespaceAsync(const Model::UpdateEngineNamespaceRequest& request, const UpdateEngineNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEngineNamespaceOutcomeCallable updateEngineNamespaceCallable(const Model::UpdateEngineNamespaceRequest& request) const;
			UpdateFlowRuleOutcome updateFlowRule(const Model::UpdateFlowRuleRequest &request)const;
			void updateFlowRuleAsync(const Model::UpdateFlowRuleRequest& request, const UpdateFlowRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateFlowRuleOutcomeCallable updateFlowRuleCallable(const Model::UpdateFlowRuleRequest& request) const;
			UpdateGatewayAuthConsumerOutcome updateGatewayAuthConsumer(const Model::UpdateGatewayAuthConsumerRequest &request)const;
			void updateGatewayAuthConsumerAsync(const Model::UpdateGatewayAuthConsumerRequest& request, const UpdateGatewayAuthConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGatewayAuthConsumerOutcomeCallable updateGatewayAuthConsumerCallable(const Model::UpdateGatewayAuthConsumerRequest& request) const;
			UpdateGatewayAuthConsumerResourceOutcome updateGatewayAuthConsumerResource(const Model::UpdateGatewayAuthConsumerResourceRequest &request)const;
			void updateGatewayAuthConsumerResourceAsync(const Model::UpdateGatewayAuthConsumerResourceRequest& request, const UpdateGatewayAuthConsumerResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGatewayAuthConsumerResourceOutcomeCallable updateGatewayAuthConsumerResourceCallable(const Model::UpdateGatewayAuthConsumerResourceRequest& request) const;
			UpdateGatewayAuthConsumerResourceStatusOutcome updateGatewayAuthConsumerResourceStatus(const Model::UpdateGatewayAuthConsumerResourceStatusRequest &request)const;
			void updateGatewayAuthConsumerResourceStatusAsync(const Model::UpdateGatewayAuthConsumerResourceStatusRequest& request, const UpdateGatewayAuthConsumerResourceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGatewayAuthConsumerResourceStatusOutcomeCallable updateGatewayAuthConsumerResourceStatusCallable(const Model::UpdateGatewayAuthConsumerResourceStatusRequest& request) const;
			UpdateGatewayAuthConsumerStatusOutcome updateGatewayAuthConsumerStatus(const Model::UpdateGatewayAuthConsumerStatusRequest &request)const;
			void updateGatewayAuthConsumerStatusAsync(const Model::UpdateGatewayAuthConsumerStatusRequest& request, const UpdateGatewayAuthConsumerStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGatewayAuthConsumerStatusOutcomeCallable updateGatewayAuthConsumerStatusCallable(const Model::UpdateGatewayAuthConsumerStatusRequest& request) const;
			UpdateGatewayDomainOutcome updateGatewayDomain(const Model::UpdateGatewayDomainRequest &request)const;
			void updateGatewayDomainAsync(const Model::UpdateGatewayDomainRequest& request, const UpdateGatewayDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGatewayDomainOutcomeCallable updateGatewayDomainCallable(const Model::UpdateGatewayDomainRequest& request) const;
			UpdateGatewayNameOutcome updateGatewayName(const Model::UpdateGatewayNameRequest &request)const;
			void updateGatewayNameAsync(const Model::UpdateGatewayNameRequest& request, const UpdateGatewayNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGatewayNameOutcomeCallable updateGatewayNameCallable(const Model::UpdateGatewayNameRequest& request) const;
			UpdateGatewayOptionOutcome updateGatewayOption(const Model::UpdateGatewayOptionRequest &request)const;
			void updateGatewayOptionAsync(const Model::UpdateGatewayOptionRequest& request, const UpdateGatewayOptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGatewayOptionOutcomeCallable updateGatewayOptionCallable(const Model::UpdateGatewayOptionRequest& request) const;
			UpdateGatewayRouteOutcome updateGatewayRoute(const Model::UpdateGatewayRouteRequest &request)const;
			void updateGatewayRouteAsync(const Model::UpdateGatewayRouteRequest& request, const UpdateGatewayRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGatewayRouteOutcomeCallable updateGatewayRouteCallable(const Model::UpdateGatewayRouteRequest& request) const;
			UpdateGatewayRouteAuthOutcome updateGatewayRouteAuth(const Model::UpdateGatewayRouteAuthRequest &request)const;
			void updateGatewayRouteAuthAsync(const Model::UpdateGatewayRouteAuthRequest& request, const UpdateGatewayRouteAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGatewayRouteAuthOutcomeCallable updateGatewayRouteAuthCallable(const Model::UpdateGatewayRouteAuthRequest& request) const;
			UpdateGatewayRouteCORSOutcome updateGatewayRouteCORS(const Model::UpdateGatewayRouteCORSRequest &request)const;
			void updateGatewayRouteCORSAsync(const Model::UpdateGatewayRouteCORSRequest& request, const UpdateGatewayRouteCORSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGatewayRouteCORSOutcomeCallable updateGatewayRouteCORSCallable(const Model::UpdateGatewayRouteCORSRequest& request) const;
			UpdateGatewayRouteHTTPRewriteOutcome updateGatewayRouteHTTPRewrite(const Model::UpdateGatewayRouteHTTPRewriteRequest &request)const;
			void updateGatewayRouteHTTPRewriteAsync(const Model::UpdateGatewayRouteHTTPRewriteRequest& request, const UpdateGatewayRouteHTTPRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGatewayRouteHTTPRewriteOutcomeCallable updateGatewayRouteHTTPRewriteCallable(const Model::UpdateGatewayRouteHTTPRewriteRequest& request) const;
			UpdateGatewayRouteHeaderOpOutcome updateGatewayRouteHeaderOp(const Model::UpdateGatewayRouteHeaderOpRequest &request)const;
			void updateGatewayRouteHeaderOpAsync(const Model::UpdateGatewayRouteHeaderOpRequest& request, const UpdateGatewayRouteHeaderOpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGatewayRouteHeaderOpOutcomeCallable updateGatewayRouteHeaderOpCallable(const Model::UpdateGatewayRouteHeaderOpRequest& request) const;
			UpdateGatewayRouteRetryOutcome updateGatewayRouteRetry(const Model::UpdateGatewayRouteRetryRequest &request)const;
			void updateGatewayRouteRetryAsync(const Model::UpdateGatewayRouteRetryRequest& request, const UpdateGatewayRouteRetryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGatewayRouteRetryOutcomeCallable updateGatewayRouteRetryCallable(const Model::UpdateGatewayRouteRetryRequest& request) const;
			UpdateGatewayRouteTimeoutOutcome updateGatewayRouteTimeout(const Model::UpdateGatewayRouteTimeoutRequest &request)const;
			void updateGatewayRouteTimeoutAsync(const Model::UpdateGatewayRouteTimeoutRequest& request, const UpdateGatewayRouteTimeoutAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGatewayRouteTimeoutOutcomeCallable updateGatewayRouteTimeoutCallable(const Model::UpdateGatewayRouteTimeoutRequest& request) const;
			UpdateGatewayRouteWafStatusOutcome updateGatewayRouteWafStatus(const Model::UpdateGatewayRouteWafStatusRequest &request)const;
			void updateGatewayRouteWafStatusAsync(const Model::UpdateGatewayRouteWafStatusRequest& request, const UpdateGatewayRouteWafStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGatewayRouteWafStatusOutcomeCallable updateGatewayRouteWafStatusCallable(const Model::UpdateGatewayRouteWafStatusRequest& request) const;
			UpdateGatewayServiceTrafficPolicyOutcome updateGatewayServiceTrafficPolicy(const Model::UpdateGatewayServiceTrafficPolicyRequest &request)const;
			void updateGatewayServiceTrafficPolicyAsync(const Model::UpdateGatewayServiceTrafficPolicyRequest& request, const UpdateGatewayServiceTrafficPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGatewayServiceTrafficPolicyOutcomeCallable updateGatewayServiceTrafficPolicyCallable(const Model::UpdateGatewayServiceTrafficPolicyRequest& request) const;
			UpdateGatewayServiceVersionOutcome updateGatewayServiceVersion(const Model::UpdateGatewayServiceVersionRequest &request)const;
			void updateGatewayServiceVersionAsync(const Model::UpdateGatewayServiceVersionRequest& request, const UpdateGatewayServiceVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGatewayServiceVersionOutcomeCallable updateGatewayServiceVersionCallable(const Model::UpdateGatewayServiceVersionRequest& request) const;
			UpdateGatewaySpecOutcome updateGatewaySpec(const Model::UpdateGatewaySpecRequest &request)const;
			void updateGatewaySpecAsync(const Model::UpdateGatewaySpecRequest& request, const UpdateGatewaySpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGatewaySpecOutcomeCallable updateGatewaySpecCallable(const Model::UpdateGatewaySpecRequest& request) const;
			UpdateImageOutcome updateImage(const Model::UpdateImageRequest &request)const;
			void updateImageAsync(const Model::UpdateImageRequest& request, const UpdateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateImageOutcomeCallable updateImageCallable(const Model::UpdateImageRequest& request) const;
			UpdateMessageQueueRouteOutcome updateMessageQueueRoute(const Model::UpdateMessageQueueRouteRequest &request)const;
			void updateMessageQueueRouteAsync(const Model::UpdateMessageQueueRouteRequest& request, const UpdateMessageQueueRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMessageQueueRouteOutcomeCallable updateMessageQueueRouteCallable(const Model::UpdateMessageQueueRouteRequest& request) const;
			UpdateMigrationTaskOutcome updateMigrationTask(const Model::UpdateMigrationTaskRequest &request)const;
			void updateMigrationTaskAsync(const Model::UpdateMigrationTaskRequest& request, const UpdateMigrationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateMigrationTaskOutcomeCallable updateMigrationTaskCallable(const Model::UpdateMigrationTaskRequest& request) const;
			UpdateNacosClusterOutcome updateNacosCluster(const Model::UpdateNacosClusterRequest &request)const;
			void updateNacosClusterAsync(const Model::UpdateNacosClusterRequest& request, const UpdateNacosClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateNacosClusterOutcomeCallable updateNacosClusterCallable(const Model::UpdateNacosClusterRequest& request) const;
			UpdateNacosConfigOutcome updateNacosConfig(const Model::UpdateNacosConfigRequest &request)const;
			void updateNacosConfigAsync(const Model::UpdateNacosConfigRequest& request, const UpdateNacosConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateNacosConfigOutcomeCallable updateNacosConfigCallable(const Model::UpdateNacosConfigRequest& request) const;
			UpdateNacosInstanceOutcome updateNacosInstance(const Model::UpdateNacosInstanceRequest &request)const;
			void updateNacosInstanceAsync(const Model::UpdateNacosInstanceRequest& request, const UpdateNacosInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateNacosInstanceOutcomeCallable updateNacosInstanceCallable(const Model::UpdateNacosInstanceRequest& request) const;
			UpdateNacosServiceOutcome updateNacosService(const Model::UpdateNacosServiceRequest &request)const;
			void updateNacosServiceAsync(const Model::UpdateNacosServiceRequest& request, const UpdateNacosServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateNacosServiceOutcomeCallable updateNacosServiceCallable(const Model::UpdateNacosServiceRequest& request) const;
			UpdatePluginConfigOutcome updatePluginConfig(const Model::UpdatePluginConfigRequest &request)const;
			void updatePluginConfigAsync(const Model::UpdatePluginConfigRequest& request, const UpdatePluginConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdatePluginConfigOutcomeCallable updatePluginConfigCallable(const Model::UpdatePluginConfigRequest& request) const;
			UpdateSSLCertOutcome updateSSLCert(const Model::UpdateSSLCertRequest &request)const;
			void updateSSLCertAsync(const Model::UpdateSSLCertRequest& request, const UpdateSSLCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSSLCertOutcomeCallable updateSSLCertCallable(const Model::UpdateSSLCertRequest& request) const;
			UpdateServiceSourceOutcome updateServiceSource(const Model::UpdateServiceSourceRequest &request)const;
			void updateServiceSourceAsync(const Model::UpdateServiceSourceRequest& request, const UpdateServiceSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateServiceSourceOutcomeCallable updateServiceSourceCallable(const Model::UpdateServiceSourceRequest& request) const;
			UpdateZnodeOutcome updateZnode(const Model::UpdateZnodeRequest &request)const;
			void updateZnodeAsync(const Model::UpdateZnodeRequest& request, const UpdateZnodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateZnodeOutcomeCallable updateZnodeCallable(const Model::UpdateZnodeRequest& request) const;
			UpgradeClusterOutcome upgradeCluster(const Model::UpgradeClusterRequest &request)const;
			void upgradeClusterAsync(const Model::UpgradeClusterRequest& request, const UpgradeClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeClusterOutcomeCallable upgradeClusterCallable(const Model::UpgradeClusterRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_MSE_MSECLIENT_H_
