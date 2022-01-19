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
#include "model/AddAuthResourceRequest.h"
#include "model/AddAuthResourceResult.h"
#include "model/AddBlackWhiteListRequest.h"
#include "model/AddBlackWhiteListResult.h"
#include "model/AddGatewayRequest.h"
#include "model/AddGatewayResult.h"
#include "model/AddGatewayDomainRequest.h"
#include "model/AddGatewayDomainResult.h"
#include "model/AddGatewayServiceVersionRequest.h"
#include "model/AddGatewayServiceVersionResult.h"
#include "model/AddGatewaySlbRequest.h"
#include "model/AddGatewaySlbResult.h"
#include "model/AddMockRuleRequest.h"
#include "model/AddMockRuleResult.h"
#include "model/AddSSLCertRequest.h"
#include "model/AddSSLCertResult.h"
#include "model/AddServiceSourceRequest.h"
#include "model/AddServiceSourceResult.h"
#include "model/CloneNacosConfigRequest.h"
#include "model/CloneNacosConfigResult.h"
#include "model/CreateAlarmRuleRequest.h"
#include "model/CreateAlarmRuleResult.h"
#include "model/CreateApplicationRequest.h"
#include "model/CreateApplicationResult.h"
#include "model/CreateClusterRequest.h"
#include "model/CreateClusterResult.h"
#include "model/CreateEngineNamespaceRequest.h"
#include "model/CreateEngineNamespaceResult.h"
#include "model/CreateNacosConfigRequest.h"
#include "model/CreateNacosConfigResult.h"
#include "model/CreateNacosInstanceRequest.h"
#include "model/CreateNacosInstanceResult.h"
#include "model/CreateNacosServiceRequest.h"
#include "model/CreateNacosServiceResult.h"
#include "model/CreateZnodeRequest.h"
#include "model/CreateZnodeResult.h"
#include "model/DeleteAlarmRuleRequest.h"
#include "model/DeleteAlarmRuleResult.h"
#include "model/DeleteAuthResourceRequest.h"
#include "model/DeleteAuthResourceResult.h"
#include "model/DeleteClusterRequest.h"
#include "model/DeleteClusterResult.h"
#include "model/DeleteEngineNamespaceRequest.h"
#include "model/DeleteEngineNamespaceResult.h"
#include "model/DeleteGatewayRequest.h"
#include "model/DeleteGatewayResult.h"
#include "model/DeleteGatewayDomainRequest.h"
#include "model/DeleteGatewayDomainResult.h"
#include "model/DeleteGatewayServiceVersionRequest.h"
#include "model/DeleteGatewayServiceVersionResult.h"
#include "model/DeleteGatewaySlbRequest.h"
#include "model/DeleteGatewaySlbResult.h"
#include "model/DeleteNacosConfigRequest.h"
#include "model/DeleteNacosConfigResult.h"
#include "model/DeleteNacosConfigsRequest.h"
#include "model/DeleteNacosConfigsResult.h"
#include "model/DeleteNacosServiceRequest.h"
#include "model/DeleteNacosServiceResult.h"
#include "model/DeleteServiceSourceRequest.h"
#include "model/DeleteServiceSourceResult.h"
#include "model/DeleteZnodeRequest.h"
#include "model/DeleteZnodeResult.h"
#include "model/ExportNacosConfigRequest.h"
#include "model/ExportNacosConfigResult.h"
#include "model/GetBlackWhiteListRequest.h"
#include "model/GetBlackWhiteListResult.h"
#include "model/GetEngineNamepaceRequest.h"
#include "model/GetEngineNamepaceResult.h"
#include "model/GetGatewayRequest.h"
#include "model/GetGatewayResult.h"
#include "model/GetGatewayDomainDetailRequest.h"
#include "model/GetGatewayDomainDetailResult.h"
#include "model/GetGatewayOptionRequest.h"
#include "model/GetGatewayOptionResult.h"
#include "model/GetGatewayServiceDetailRequest.h"
#include "model/GetGatewayServiceDetailResult.h"
#include "model/GetGovernanceKubernetesClusterRequest.h"
#include "model/GetGovernanceKubernetesClusterResult.h"
#include "model/GetGovernanceKubernetesClusterListRequest.h"
#include "model/GetGovernanceKubernetesClusterListResult.h"
#include "model/GetImageRequest.h"
#include "model/GetImageResult.h"
#include "model/GetImportFileUrlRequest.h"
#include "model/GetImportFileUrlResult.h"
#include "model/GetKubernetesSourceRequest.h"
#include "model/GetKubernetesSourceResult.h"
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
#include "model/ImportNacosConfigRequest.h"
#include "model/ImportNacosConfigResult.h"
#include "model/ImportServicesRequest.h"
#include "model/ImportServicesResult.h"
#include "model/ListAlarmContactGroupsRequest.h"
#include "model/ListAlarmContactGroupsResult.h"
#include "model/ListAlarmHistoriesRequest.h"
#include "model/ListAlarmHistoriesResult.h"
#include "model/ListAlarmItemsRequest.h"
#include "model/ListAlarmItemsResult.h"
#include "model/ListAlarmRulesRequest.h"
#include "model/ListAlarmRulesResult.h"
#include "model/ListAnsInstancesRequest.h"
#include "model/ListAnsInstancesResult.h"
#include "model/ListAnsServiceClustersRequest.h"
#include "model/ListAnsServiceClustersResult.h"
#include "model/ListAnsServicesRequest.h"
#include "model/ListAnsServicesResult.h"
#include "model/ListClusterConnectionTypesRequest.h"
#include "model/ListClusterConnectionTypesResult.h"
#include "model/ListClusterTypesRequest.h"
#include "model/ListClusterTypesResult.h"
#include "model/ListClusterVersionsRequest.h"
#include "model/ListClusterVersionsResult.h"
#include "model/ListClustersRequest.h"
#include "model/ListClustersResult.h"
#include "model/ListEngineNamespacesRequest.h"
#include "model/ListEngineNamespacesResult.h"
#include "model/ListEurekaInstancesRequest.h"
#include "model/ListEurekaInstancesResult.h"
#include "model/ListEurekaServicesRequest.h"
#include "model/ListEurekaServicesResult.h"
#include "model/ListGatewayRequest.h"
#include "model/ListGatewayResult.h"
#include "model/ListGatewayDomainRequest.h"
#include "model/ListGatewayDomainResult.h"
#include "model/ListGatewayServiceRequest.h"
#include "model/ListGatewayServiceResult.h"
#include "model/ListGatewaySlbRequest.h"
#include "model/ListGatewaySlbResult.h"
#include "model/ListListenersByConfigRequest.h"
#include "model/ListListenersByConfigResult.h"
#include "model/ListListenersByIpRequest.h"
#include "model/ListListenersByIpResult.h"
#include "model/ListNacosConfigsRequest.h"
#include "model/ListNacosConfigsResult.h"
#include "model/ListNacosHistoryConfigsRequest.h"
#include "model/ListNacosHistoryConfigsResult.h"
#include "model/ListSSLCertRequest.h"
#include "model/ListSSLCertResult.h"
#include "model/ListServiceSourceRequest.h"
#include "model/ListServiceSourceResult.h"
#include "model/ListZnodeChildrenRequest.h"
#include "model/ListZnodeChildrenResult.h"
#include "model/ModifyGovernanceKubernetesClusterRequest.h"
#include "model/ModifyGovernanceKubernetesClusterResult.h"
#include "model/PullServicesRequest.h"
#include "model/PullServicesResult.h"
#include "model/QueryBusinessLocationsRequest.h"
#include "model/QueryBusinessLocationsResult.h"
#include "model/QueryClusterDetailRequest.h"
#include "model/QueryClusterDetailResult.h"
#include "model/QueryClusterDiskSpecificationRequest.h"
#include "model/QueryClusterDiskSpecificationResult.h"
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
#include "model/QueryMonitorRequest.h"
#include "model/QueryMonitorResult.h"
#include "model/QuerySlbSpecRequest.h"
#include "model/QuerySlbSpecResult.h"
#include "model/QueryZnodeDetailRequest.h"
#include "model/QueryZnodeDetailResult.h"
#include "model/RestartClusterRequest.h"
#include "model/RestartClusterResult.h"
#include "model/RetryClusterRequest.h"
#include "model/RetryClusterResult.h"
#include "model/ScalingClusterRequest.h"
#include "model/ScalingClusterResult.h"
#include "model/SelectGatewaySlbRequest.h"
#include "model/SelectGatewaySlbResult.h"
#include "model/UpdateAclRequest.h"
#include "model/UpdateAclResult.h"
#include "model/UpdateBlackWhiteListRequest.h"
#include "model/UpdateBlackWhiteListResult.h"
#include "model/UpdateClusterRequest.h"
#include "model/UpdateClusterResult.h"
#include "model/UpdateConfigRequest.h"
#include "model/UpdateConfigResult.h"
#include "model/UpdateEngineNamespaceRequest.h"
#include "model/UpdateEngineNamespaceResult.h"
#include "model/UpdateGatewayDomainRequest.h"
#include "model/UpdateGatewayDomainResult.h"
#include "model/UpdateGatewayNameRequest.h"
#include "model/UpdateGatewayNameResult.h"
#include "model/UpdateGatewayOptionRequest.h"
#include "model/UpdateGatewayOptionResult.h"
#include "model/UpdateGatewayRouteHTTPRewriteRequest.h"
#include "model/UpdateGatewayRouteHTTPRewriteResult.h"
#include "model/UpdateGatewayServiceVersionRequest.h"
#include "model/UpdateGatewayServiceVersionResult.h"
#include "model/UpdateImageRequest.h"
#include "model/UpdateImageResult.h"
#include "model/UpdateNacosClusterRequest.h"
#include "model/UpdateNacosClusterResult.h"
#include "model/UpdateNacosConfigRequest.h"
#include "model/UpdateNacosConfigResult.h"
#include "model/UpdateNacosInstanceRequest.h"
#include "model/UpdateNacosInstanceResult.h"
#include "model/UpdateNacosServiceRequest.h"
#include "model/UpdateNacosServiceResult.h"
#include "model/UpdateSSLCertRequest.h"
#include "model/UpdateSSLCertResult.h"
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
			typedef Outcome<Error, Model::AddAuthResourceResult> AddAuthResourceOutcome;
			typedef std::future<AddAuthResourceOutcome> AddAuthResourceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::AddAuthResourceRequest&, const AddAuthResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddAuthResourceAsyncHandler;
			typedef Outcome<Error, Model::AddBlackWhiteListResult> AddBlackWhiteListOutcome;
			typedef std::future<AddBlackWhiteListOutcome> AddBlackWhiteListOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::AddBlackWhiteListRequest&, const AddBlackWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddBlackWhiteListAsyncHandler;
			typedef Outcome<Error, Model::AddGatewayResult> AddGatewayOutcome;
			typedef std::future<AddGatewayOutcome> AddGatewayOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::AddGatewayRequest&, const AddGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddGatewayAsyncHandler;
			typedef Outcome<Error, Model::AddGatewayDomainResult> AddGatewayDomainOutcome;
			typedef std::future<AddGatewayDomainOutcome> AddGatewayDomainOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::AddGatewayDomainRequest&, const AddGatewayDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddGatewayDomainAsyncHandler;
			typedef Outcome<Error, Model::AddGatewayServiceVersionResult> AddGatewayServiceVersionOutcome;
			typedef std::future<AddGatewayServiceVersionOutcome> AddGatewayServiceVersionOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::AddGatewayServiceVersionRequest&, const AddGatewayServiceVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddGatewayServiceVersionAsyncHandler;
			typedef Outcome<Error, Model::AddGatewaySlbResult> AddGatewaySlbOutcome;
			typedef std::future<AddGatewaySlbOutcome> AddGatewaySlbOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::AddGatewaySlbRequest&, const AddGatewaySlbOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddGatewaySlbAsyncHandler;
			typedef Outcome<Error, Model::AddMockRuleResult> AddMockRuleOutcome;
			typedef std::future<AddMockRuleOutcome> AddMockRuleOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::AddMockRuleRequest&, const AddMockRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddMockRuleAsyncHandler;
			typedef Outcome<Error, Model::AddSSLCertResult> AddSSLCertOutcome;
			typedef std::future<AddSSLCertOutcome> AddSSLCertOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::AddSSLCertRequest&, const AddSSLCertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddSSLCertAsyncHandler;
			typedef Outcome<Error, Model::AddServiceSourceResult> AddServiceSourceOutcome;
			typedef std::future<AddServiceSourceOutcome> AddServiceSourceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::AddServiceSourceRequest&, const AddServiceSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddServiceSourceAsyncHandler;
			typedef Outcome<Error, Model::CloneNacosConfigResult> CloneNacosConfigOutcome;
			typedef std::future<CloneNacosConfigOutcome> CloneNacosConfigOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::CloneNacosConfigRequest&, const CloneNacosConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloneNacosConfigAsyncHandler;
			typedef Outcome<Error, Model::CreateAlarmRuleResult> CreateAlarmRuleOutcome;
			typedef std::future<CreateAlarmRuleOutcome> CreateAlarmRuleOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::CreateAlarmRuleRequest&, const CreateAlarmRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAlarmRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateApplicationResult> CreateApplicationOutcome;
			typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::CreateApplicationRequest&, const CreateApplicationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationAsyncHandler;
			typedef Outcome<Error, Model::CreateClusterResult> CreateClusterOutcome;
			typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::CreateClusterRequest&, const CreateClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterAsyncHandler;
			typedef Outcome<Error, Model::CreateEngineNamespaceResult> CreateEngineNamespaceOutcome;
			typedef std::future<CreateEngineNamespaceOutcome> CreateEngineNamespaceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::CreateEngineNamespaceRequest&, const CreateEngineNamespaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEngineNamespaceAsyncHandler;
			typedef Outcome<Error, Model::CreateNacosConfigResult> CreateNacosConfigOutcome;
			typedef std::future<CreateNacosConfigOutcome> CreateNacosConfigOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::CreateNacosConfigRequest&, const CreateNacosConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNacosConfigAsyncHandler;
			typedef Outcome<Error, Model::CreateNacosInstanceResult> CreateNacosInstanceOutcome;
			typedef std::future<CreateNacosInstanceOutcome> CreateNacosInstanceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::CreateNacosInstanceRequest&, const CreateNacosInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNacosInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateNacosServiceResult> CreateNacosServiceOutcome;
			typedef std::future<CreateNacosServiceOutcome> CreateNacosServiceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::CreateNacosServiceRequest&, const CreateNacosServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNacosServiceAsyncHandler;
			typedef Outcome<Error, Model::CreateZnodeResult> CreateZnodeOutcome;
			typedef std::future<CreateZnodeOutcome> CreateZnodeOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::CreateZnodeRequest&, const CreateZnodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateZnodeAsyncHandler;
			typedef Outcome<Error, Model::DeleteAlarmRuleResult> DeleteAlarmRuleOutcome;
			typedef std::future<DeleteAlarmRuleOutcome> DeleteAlarmRuleOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteAlarmRuleRequest&, const DeleteAlarmRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAlarmRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteAuthResourceResult> DeleteAuthResourceOutcome;
			typedef std::future<DeleteAuthResourceOutcome> DeleteAuthResourceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteAuthResourceRequest&, const DeleteAuthResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAuthResourceAsyncHandler;
			typedef Outcome<Error, Model::DeleteClusterResult> DeleteClusterOutcome;
			typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteClusterRequest&, const DeleteClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterAsyncHandler;
			typedef Outcome<Error, Model::DeleteEngineNamespaceResult> DeleteEngineNamespaceOutcome;
			typedef std::future<DeleteEngineNamespaceOutcome> DeleteEngineNamespaceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteEngineNamespaceRequest&, const DeleteEngineNamespaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEngineNamespaceAsyncHandler;
			typedef Outcome<Error, Model::DeleteGatewayResult> DeleteGatewayOutcome;
			typedef std::future<DeleteGatewayOutcome> DeleteGatewayOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteGatewayRequest&, const DeleteGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGatewayAsyncHandler;
			typedef Outcome<Error, Model::DeleteGatewayDomainResult> DeleteGatewayDomainOutcome;
			typedef std::future<DeleteGatewayDomainOutcome> DeleteGatewayDomainOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteGatewayDomainRequest&, const DeleteGatewayDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGatewayDomainAsyncHandler;
			typedef Outcome<Error, Model::DeleteGatewayServiceVersionResult> DeleteGatewayServiceVersionOutcome;
			typedef std::future<DeleteGatewayServiceVersionOutcome> DeleteGatewayServiceVersionOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteGatewayServiceVersionRequest&, const DeleteGatewayServiceVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGatewayServiceVersionAsyncHandler;
			typedef Outcome<Error, Model::DeleteGatewaySlbResult> DeleteGatewaySlbOutcome;
			typedef std::future<DeleteGatewaySlbOutcome> DeleteGatewaySlbOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteGatewaySlbRequest&, const DeleteGatewaySlbOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGatewaySlbAsyncHandler;
			typedef Outcome<Error, Model::DeleteNacosConfigResult> DeleteNacosConfigOutcome;
			typedef std::future<DeleteNacosConfigOutcome> DeleteNacosConfigOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteNacosConfigRequest&, const DeleteNacosConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNacosConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteNacosConfigsResult> DeleteNacosConfigsOutcome;
			typedef std::future<DeleteNacosConfigsOutcome> DeleteNacosConfigsOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteNacosConfigsRequest&, const DeleteNacosConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNacosConfigsAsyncHandler;
			typedef Outcome<Error, Model::DeleteNacosServiceResult> DeleteNacosServiceOutcome;
			typedef std::future<DeleteNacosServiceOutcome> DeleteNacosServiceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteNacosServiceRequest&, const DeleteNacosServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNacosServiceAsyncHandler;
			typedef Outcome<Error, Model::DeleteServiceSourceResult> DeleteServiceSourceOutcome;
			typedef std::future<DeleteServiceSourceOutcome> DeleteServiceSourceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteServiceSourceRequest&, const DeleteServiceSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteServiceSourceAsyncHandler;
			typedef Outcome<Error, Model::DeleteZnodeResult> DeleteZnodeOutcome;
			typedef std::future<DeleteZnodeOutcome> DeleteZnodeOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::DeleteZnodeRequest&, const DeleteZnodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteZnodeAsyncHandler;
			typedef Outcome<Error, Model::ExportNacosConfigResult> ExportNacosConfigOutcome;
			typedef std::future<ExportNacosConfigOutcome> ExportNacosConfigOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ExportNacosConfigRequest&, const ExportNacosConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExportNacosConfigAsyncHandler;
			typedef Outcome<Error, Model::GetBlackWhiteListResult> GetBlackWhiteListOutcome;
			typedef std::future<GetBlackWhiteListOutcome> GetBlackWhiteListOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetBlackWhiteListRequest&, const GetBlackWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetBlackWhiteListAsyncHandler;
			typedef Outcome<Error, Model::GetEngineNamepaceResult> GetEngineNamepaceOutcome;
			typedef std::future<GetEngineNamepaceOutcome> GetEngineNamepaceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetEngineNamepaceRequest&, const GetEngineNamepaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetEngineNamepaceAsyncHandler;
			typedef Outcome<Error, Model::GetGatewayResult> GetGatewayOutcome;
			typedef std::future<GetGatewayOutcome> GetGatewayOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetGatewayRequest&, const GetGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGatewayAsyncHandler;
			typedef Outcome<Error, Model::GetGatewayDomainDetailResult> GetGatewayDomainDetailOutcome;
			typedef std::future<GetGatewayDomainDetailOutcome> GetGatewayDomainDetailOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetGatewayDomainDetailRequest&, const GetGatewayDomainDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGatewayDomainDetailAsyncHandler;
			typedef Outcome<Error, Model::GetGatewayOptionResult> GetGatewayOptionOutcome;
			typedef std::future<GetGatewayOptionOutcome> GetGatewayOptionOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetGatewayOptionRequest&, const GetGatewayOptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGatewayOptionAsyncHandler;
			typedef Outcome<Error, Model::GetGatewayServiceDetailResult> GetGatewayServiceDetailOutcome;
			typedef std::future<GetGatewayServiceDetailOutcome> GetGatewayServiceDetailOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetGatewayServiceDetailRequest&, const GetGatewayServiceDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGatewayServiceDetailAsyncHandler;
			typedef Outcome<Error, Model::GetGovernanceKubernetesClusterResult> GetGovernanceKubernetesClusterOutcome;
			typedef std::future<GetGovernanceKubernetesClusterOutcome> GetGovernanceKubernetesClusterOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetGovernanceKubernetesClusterRequest&, const GetGovernanceKubernetesClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGovernanceKubernetesClusterAsyncHandler;
			typedef Outcome<Error, Model::GetGovernanceKubernetesClusterListResult> GetGovernanceKubernetesClusterListOutcome;
			typedef std::future<GetGovernanceKubernetesClusterListOutcome> GetGovernanceKubernetesClusterListOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetGovernanceKubernetesClusterListRequest&, const GetGovernanceKubernetesClusterListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGovernanceKubernetesClusterListAsyncHandler;
			typedef Outcome<Error, Model::GetImageResult> GetImageOutcome;
			typedef std::future<GetImageOutcome> GetImageOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetImageRequest&, const GetImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetImageAsyncHandler;
			typedef Outcome<Error, Model::GetImportFileUrlResult> GetImportFileUrlOutcome;
			typedef std::future<GetImportFileUrlOutcome> GetImportFileUrlOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetImportFileUrlRequest&, const GetImportFileUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetImportFileUrlAsyncHandler;
			typedef Outcome<Error, Model::GetKubernetesSourceResult> GetKubernetesSourceOutcome;
			typedef std::future<GetKubernetesSourceOutcome> GetKubernetesSourceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::GetKubernetesSourceRequest&, const GetKubernetesSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetKubernetesSourceAsyncHandler;
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
			typedef Outcome<Error, Model::ImportNacosConfigResult> ImportNacosConfigOutcome;
			typedef std::future<ImportNacosConfigOutcome> ImportNacosConfigOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ImportNacosConfigRequest&, const ImportNacosConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportNacosConfigAsyncHandler;
			typedef Outcome<Error, Model::ImportServicesResult> ImportServicesOutcome;
			typedef std::future<ImportServicesOutcome> ImportServicesOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ImportServicesRequest&, const ImportServicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportServicesAsyncHandler;
			typedef Outcome<Error, Model::ListAlarmContactGroupsResult> ListAlarmContactGroupsOutcome;
			typedef std::future<ListAlarmContactGroupsOutcome> ListAlarmContactGroupsOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListAlarmContactGroupsRequest&, const ListAlarmContactGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAlarmContactGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListAlarmHistoriesResult> ListAlarmHistoriesOutcome;
			typedef std::future<ListAlarmHistoriesOutcome> ListAlarmHistoriesOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListAlarmHistoriesRequest&, const ListAlarmHistoriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAlarmHistoriesAsyncHandler;
			typedef Outcome<Error, Model::ListAlarmItemsResult> ListAlarmItemsOutcome;
			typedef std::future<ListAlarmItemsOutcome> ListAlarmItemsOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListAlarmItemsRequest&, const ListAlarmItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAlarmItemsAsyncHandler;
			typedef Outcome<Error, Model::ListAlarmRulesResult> ListAlarmRulesOutcome;
			typedef std::future<ListAlarmRulesOutcome> ListAlarmRulesOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListAlarmRulesRequest&, const ListAlarmRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAlarmRulesAsyncHandler;
			typedef Outcome<Error, Model::ListAnsInstancesResult> ListAnsInstancesOutcome;
			typedef std::future<ListAnsInstancesOutcome> ListAnsInstancesOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListAnsInstancesRequest&, const ListAnsInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAnsInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListAnsServiceClustersResult> ListAnsServiceClustersOutcome;
			typedef std::future<ListAnsServiceClustersOutcome> ListAnsServiceClustersOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListAnsServiceClustersRequest&, const ListAnsServiceClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAnsServiceClustersAsyncHandler;
			typedef Outcome<Error, Model::ListAnsServicesResult> ListAnsServicesOutcome;
			typedef std::future<ListAnsServicesOutcome> ListAnsServicesOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListAnsServicesRequest&, const ListAnsServicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAnsServicesAsyncHandler;
			typedef Outcome<Error, Model::ListClusterConnectionTypesResult> ListClusterConnectionTypesOutcome;
			typedef std::future<ListClusterConnectionTypesOutcome> ListClusterConnectionTypesOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListClusterConnectionTypesRequest&, const ListClusterConnectionTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterConnectionTypesAsyncHandler;
			typedef Outcome<Error, Model::ListClusterTypesResult> ListClusterTypesOutcome;
			typedef std::future<ListClusterTypesOutcome> ListClusterTypesOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListClusterTypesRequest&, const ListClusterTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterTypesAsyncHandler;
			typedef Outcome<Error, Model::ListClusterVersionsResult> ListClusterVersionsOutcome;
			typedef std::future<ListClusterVersionsOutcome> ListClusterVersionsOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListClusterVersionsRequest&, const ListClusterVersionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClusterVersionsAsyncHandler;
			typedef Outcome<Error, Model::ListClustersResult> ListClustersOutcome;
			typedef std::future<ListClustersOutcome> ListClustersOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListClustersRequest&, const ListClustersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListClustersAsyncHandler;
			typedef Outcome<Error, Model::ListEngineNamespacesResult> ListEngineNamespacesOutcome;
			typedef std::future<ListEngineNamespacesOutcome> ListEngineNamespacesOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListEngineNamespacesRequest&, const ListEngineNamespacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEngineNamespacesAsyncHandler;
			typedef Outcome<Error, Model::ListEurekaInstancesResult> ListEurekaInstancesOutcome;
			typedef std::future<ListEurekaInstancesOutcome> ListEurekaInstancesOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListEurekaInstancesRequest&, const ListEurekaInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEurekaInstancesAsyncHandler;
			typedef Outcome<Error, Model::ListEurekaServicesResult> ListEurekaServicesOutcome;
			typedef std::future<ListEurekaServicesOutcome> ListEurekaServicesOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListEurekaServicesRequest&, const ListEurekaServicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEurekaServicesAsyncHandler;
			typedef Outcome<Error, Model::ListGatewayResult> ListGatewayOutcome;
			typedef std::future<ListGatewayOutcome> ListGatewayOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListGatewayRequest&, const ListGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGatewayAsyncHandler;
			typedef Outcome<Error, Model::ListGatewayDomainResult> ListGatewayDomainOutcome;
			typedef std::future<ListGatewayDomainOutcome> ListGatewayDomainOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListGatewayDomainRequest&, const ListGatewayDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGatewayDomainAsyncHandler;
			typedef Outcome<Error, Model::ListGatewayServiceResult> ListGatewayServiceOutcome;
			typedef std::future<ListGatewayServiceOutcome> ListGatewayServiceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListGatewayServiceRequest&, const ListGatewayServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGatewayServiceAsyncHandler;
			typedef Outcome<Error, Model::ListGatewaySlbResult> ListGatewaySlbOutcome;
			typedef std::future<ListGatewaySlbOutcome> ListGatewaySlbOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListGatewaySlbRequest&, const ListGatewaySlbOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGatewaySlbAsyncHandler;
			typedef Outcome<Error, Model::ListListenersByConfigResult> ListListenersByConfigOutcome;
			typedef std::future<ListListenersByConfigOutcome> ListListenersByConfigOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListListenersByConfigRequest&, const ListListenersByConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListListenersByConfigAsyncHandler;
			typedef Outcome<Error, Model::ListListenersByIpResult> ListListenersByIpOutcome;
			typedef std::future<ListListenersByIpOutcome> ListListenersByIpOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListListenersByIpRequest&, const ListListenersByIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListListenersByIpAsyncHandler;
			typedef Outcome<Error, Model::ListNacosConfigsResult> ListNacosConfigsOutcome;
			typedef std::future<ListNacosConfigsOutcome> ListNacosConfigsOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListNacosConfigsRequest&, const ListNacosConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNacosConfigsAsyncHandler;
			typedef Outcome<Error, Model::ListNacosHistoryConfigsResult> ListNacosHistoryConfigsOutcome;
			typedef std::future<ListNacosHistoryConfigsOutcome> ListNacosHistoryConfigsOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListNacosHistoryConfigsRequest&, const ListNacosHistoryConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNacosHistoryConfigsAsyncHandler;
			typedef Outcome<Error, Model::ListSSLCertResult> ListSSLCertOutcome;
			typedef std::future<ListSSLCertOutcome> ListSSLCertOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListSSLCertRequest&, const ListSSLCertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSSLCertAsyncHandler;
			typedef Outcome<Error, Model::ListServiceSourceResult> ListServiceSourceOutcome;
			typedef std::future<ListServiceSourceOutcome> ListServiceSourceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListServiceSourceRequest&, const ListServiceSourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListServiceSourceAsyncHandler;
			typedef Outcome<Error, Model::ListZnodeChildrenResult> ListZnodeChildrenOutcome;
			typedef std::future<ListZnodeChildrenOutcome> ListZnodeChildrenOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ListZnodeChildrenRequest&, const ListZnodeChildrenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListZnodeChildrenAsyncHandler;
			typedef Outcome<Error, Model::ModifyGovernanceKubernetesClusterResult> ModifyGovernanceKubernetesClusterOutcome;
			typedef std::future<ModifyGovernanceKubernetesClusterOutcome> ModifyGovernanceKubernetesClusterOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ModifyGovernanceKubernetesClusterRequest&, const ModifyGovernanceKubernetesClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGovernanceKubernetesClusterAsyncHandler;
			typedef Outcome<Error, Model::PullServicesResult> PullServicesOutcome;
			typedef std::future<PullServicesOutcome> PullServicesOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::PullServicesRequest&, const PullServicesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> PullServicesAsyncHandler;
			typedef Outcome<Error, Model::QueryBusinessLocationsResult> QueryBusinessLocationsOutcome;
			typedef std::future<QueryBusinessLocationsOutcome> QueryBusinessLocationsOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::QueryBusinessLocationsRequest&, const QueryBusinessLocationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryBusinessLocationsAsyncHandler;
			typedef Outcome<Error, Model::QueryClusterDetailResult> QueryClusterDetailOutcome;
			typedef std::future<QueryClusterDetailOutcome> QueryClusterDetailOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::QueryClusterDetailRequest&, const QueryClusterDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryClusterDetailAsyncHandler;
			typedef Outcome<Error, Model::QueryClusterDiskSpecificationResult> QueryClusterDiskSpecificationOutcome;
			typedef std::future<QueryClusterDiskSpecificationOutcome> QueryClusterDiskSpecificationOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::QueryClusterDiskSpecificationRequest&, const QueryClusterDiskSpecificationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryClusterDiskSpecificationAsyncHandler;
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
			typedef Outcome<Error, Model::QueryMonitorResult> QueryMonitorOutcome;
			typedef std::future<QueryMonitorOutcome> QueryMonitorOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::QueryMonitorRequest&, const QueryMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryMonitorAsyncHandler;
			typedef Outcome<Error, Model::QuerySlbSpecResult> QuerySlbSpecOutcome;
			typedef std::future<QuerySlbSpecOutcome> QuerySlbSpecOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::QuerySlbSpecRequest&, const QuerySlbSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QuerySlbSpecAsyncHandler;
			typedef Outcome<Error, Model::QueryZnodeDetailResult> QueryZnodeDetailOutcome;
			typedef std::future<QueryZnodeDetailOutcome> QueryZnodeDetailOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::QueryZnodeDetailRequest&, const QueryZnodeDetailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryZnodeDetailAsyncHandler;
			typedef Outcome<Error, Model::RestartClusterResult> RestartClusterOutcome;
			typedef std::future<RestartClusterOutcome> RestartClusterOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::RestartClusterRequest&, const RestartClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartClusterAsyncHandler;
			typedef Outcome<Error, Model::RetryClusterResult> RetryClusterOutcome;
			typedef std::future<RetryClusterOutcome> RetryClusterOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::RetryClusterRequest&, const RetryClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RetryClusterAsyncHandler;
			typedef Outcome<Error, Model::ScalingClusterResult> ScalingClusterOutcome;
			typedef std::future<ScalingClusterOutcome> ScalingClusterOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::ScalingClusterRequest&, const ScalingClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ScalingClusterAsyncHandler;
			typedef Outcome<Error, Model::SelectGatewaySlbResult> SelectGatewaySlbOutcome;
			typedef std::future<SelectGatewaySlbOutcome> SelectGatewaySlbOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::SelectGatewaySlbRequest&, const SelectGatewaySlbOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SelectGatewaySlbAsyncHandler;
			typedef Outcome<Error, Model::UpdateAclResult> UpdateAclOutcome;
			typedef std::future<UpdateAclOutcome> UpdateAclOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateAclRequest&, const UpdateAclOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAclAsyncHandler;
			typedef Outcome<Error, Model::UpdateBlackWhiteListResult> UpdateBlackWhiteListOutcome;
			typedef std::future<UpdateBlackWhiteListOutcome> UpdateBlackWhiteListOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateBlackWhiteListRequest&, const UpdateBlackWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateBlackWhiteListAsyncHandler;
			typedef Outcome<Error, Model::UpdateClusterResult> UpdateClusterOutcome;
			typedef std::future<UpdateClusterOutcome> UpdateClusterOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateClusterRequest&, const UpdateClusterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateClusterAsyncHandler;
			typedef Outcome<Error, Model::UpdateConfigResult> UpdateConfigOutcome;
			typedef std::future<UpdateConfigOutcome> UpdateConfigOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateConfigRequest&, const UpdateConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateConfigAsyncHandler;
			typedef Outcome<Error, Model::UpdateEngineNamespaceResult> UpdateEngineNamespaceOutcome;
			typedef std::future<UpdateEngineNamespaceOutcome> UpdateEngineNamespaceOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateEngineNamespaceRequest&, const UpdateEngineNamespaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEngineNamespaceAsyncHandler;
			typedef Outcome<Error, Model::UpdateGatewayDomainResult> UpdateGatewayDomainOutcome;
			typedef std::future<UpdateGatewayDomainOutcome> UpdateGatewayDomainOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateGatewayDomainRequest&, const UpdateGatewayDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGatewayDomainAsyncHandler;
			typedef Outcome<Error, Model::UpdateGatewayNameResult> UpdateGatewayNameOutcome;
			typedef std::future<UpdateGatewayNameOutcome> UpdateGatewayNameOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateGatewayNameRequest&, const UpdateGatewayNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGatewayNameAsyncHandler;
			typedef Outcome<Error, Model::UpdateGatewayOptionResult> UpdateGatewayOptionOutcome;
			typedef std::future<UpdateGatewayOptionOutcome> UpdateGatewayOptionOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateGatewayOptionRequest&, const UpdateGatewayOptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGatewayOptionAsyncHandler;
			typedef Outcome<Error, Model::UpdateGatewayRouteHTTPRewriteResult> UpdateGatewayRouteHTTPRewriteOutcome;
			typedef std::future<UpdateGatewayRouteHTTPRewriteOutcome> UpdateGatewayRouteHTTPRewriteOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateGatewayRouteHTTPRewriteRequest&, const UpdateGatewayRouteHTTPRewriteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGatewayRouteHTTPRewriteAsyncHandler;
			typedef Outcome<Error, Model::UpdateGatewayServiceVersionResult> UpdateGatewayServiceVersionOutcome;
			typedef std::future<UpdateGatewayServiceVersionOutcome> UpdateGatewayServiceVersionOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateGatewayServiceVersionRequest&, const UpdateGatewayServiceVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGatewayServiceVersionAsyncHandler;
			typedef Outcome<Error, Model::UpdateImageResult> UpdateImageOutcome;
			typedef std::future<UpdateImageOutcome> UpdateImageOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateImageRequest&, const UpdateImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateImageAsyncHandler;
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
			typedef Outcome<Error, Model::UpdateSSLCertResult> UpdateSSLCertOutcome;
			typedef std::future<UpdateSSLCertOutcome> UpdateSSLCertOutcomeCallable;
			typedef std::function<void(const MseClient*, const Model::UpdateSSLCertRequest&, const UpdateSSLCertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSSLCertAsyncHandler;
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
			AddAuthResourceOutcome addAuthResource(const Model::AddAuthResourceRequest &request)const;
			void addAuthResourceAsync(const Model::AddAuthResourceRequest& request, const AddAuthResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddAuthResourceOutcomeCallable addAuthResourceCallable(const Model::AddAuthResourceRequest& request) const;
			AddBlackWhiteListOutcome addBlackWhiteList(const Model::AddBlackWhiteListRequest &request)const;
			void addBlackWhiteListAsync(const Model::AddBlackWhiteListRequest& request, const AddBlackWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddBlackWhiteListOutcomeCallable addBlackWhiteListCallable(const Model::AddBlackWhiteListRequest& request) const;
			AddGatewayOutcome addGateway(const Model::AddGatewayRequest &request)const;
			void addGatewayAsync(const Model::AddGatewayRequest& request, const AddGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddGatewayOutcomeCallable addGatewayCallable(const Model::AddGatewayRequest& request) const;
			AddGatewayDomainOutcome addGatewayDomain(const Model::AddGatewayDomainRequest &request)const;
			void addGatewayDomainAsync(const Model::AddGatewayDomainRequest& request, const AddGatewayDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddGatewayDomainOutcomeCallable addGatewayDomainCallable(const Model::AddGatewayDomainRequest& request) const;
			AddGatewayServiceVersionOutcome addGatewayServiceVersion(const Model::AddGatewayServiceVersionRequest &request)const;
			void addGatewayServiceVersionAsync(const Model::AddGatewayServiceVersionRequest& request, const AddGatewayServiceVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddGatewayServiceVersionOutcomeCallable addGatewayServiceVersionCallable(const Model::AddGatewayServiceVersionRequest& request) const;
			AddGatewaySlbOutcome addGatewaySlb(const Model::AddGatewaySlbRequest &request)const;
			void addGatewaySlbAsync(const Model::AddGatewaySlbRequest& request, const AddGatewaySlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddGatewaySlbOutcomeCallable addGatewaySlbCallable(const Model::AddGatewaySlbRequest& request) const;
			AddMockRuleOutcome addMockRule(const Model::AddMockRuleRequest &request)const;
			void addMockRuleAsync(const Model::AddMockRuleRequest& request, const AddMockRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddMockRuleOutcomeCallable addMockRuleCallable(const Model::AddMockRuleRequest& request) const;
			AddSSLCertOutcome addSSLCert(const Model::AddSSLCertRequest &request)const;
			void addSSLCertAsync(const Model::AddSSLCertRequest& request, const AddSSLCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddSSLCertOutcomeCallable addSSLCertCallable(const Model::AddSSLCertRequest& request) const;
			AddServiceSourceOutcome addServiceSource(const Model::AddServiceSourceRequest &request)const;
			void addServiceSourceAsync(const Model::AddServiceSourceRequest& request, const AddServiceSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddServiceSourceOutcomeCallable addServiceSourceCallable(const Model::AddServiceSourceRequest& request) const;
			CloneNacosConfigOutcome cloneNacosConfig(const Model::CloneNacosConfigRequest &request)const;
			void cloneNacosConfigAsync(const Model::CloneNacosConfigRequest& request, const CloneNacosConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloneNacosConfigOutcomeCallable cloneNacosConfigCallable(const Model::CloneNacosConfigRequest& request) const;
			CreateAlarmRuleOutcome createAlarmRule(const Model::CreateAlarmRuleRequest &request)const;
			void createAlarmRuleAsync(const Model::CreateAlarmRuleRequest& request, const CreateAlarmRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAlarmRuleOutcomeCallable createAlarmRuleCallable(const Model::CreateAlarmRuleRequest& request) const;
			CreateApplicationOutcome createApplication(const Model::CreateApplicationRequest &request)const;
			void createApplicationAsync(const Model::CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateApplicationOutcomeCallable createApplicationCallable(const Model::CreateApplicationRequest& request) const;
			CreateClusterOutcome createCluster(const Model::CreateClusterRequest &request)const;
			void createClusterAsync(const Model::CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateClusterOutcomeCallable createClusterCallable(const Model::CreateClusterRequest& request) const;
			CreateEngineNamespaceOutcome createEngineNamespace(const Model::CreateEngineNamespaceRequest &request)const;
			void createEngineNamespaceAsync(const Model::CreateEngineNamespaceRequest& request, const CreateEngineNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEngineNamespaceOutcomeCallable createEngineNamespaceCallable(const Model::CreateEngineNamespaceRequest& request) const;
			CreateNacosConfigOutcome createNacosConfig(const Model::CreateNacosConfigRequest &request)const;
			void createNacosConfigAsync(const Model::CreateNacosConfigRequest& request, const CreateNacosConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNacosConfigOutcomeCallable createNacosConfigCallable(const Model::CreateNacosConfigRequest& request) const;
			CreateNacosInstanceOutcome createNacosInstance(const Model::CreateNacosInstanceRequest &request)const;
			void createNacosInstanceAsync(const Model::CreateNacosInstanceRequest& request, const CreateNacosInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNacosInstanceOutcomeCallable createNacosInstanceCallable(const Model::CreateNacosInstanceRequest& request) const;
			CreateNacosServiceOutcome createNacosService(const Model::CreateNacosServiceRequest &request)const;
			void createNacosServiceAsync(const Model::CreateNacosServiceRequest& request, const CreateNacosServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNacosServiceOutcomeCallable createNacosServiceCallable(const Model::CreateNacosServiceRequest& request) const;
			CreateZnodeOutcome createZnode(const Model::CreateZnodeRequest &request)const;
			void createZnodeAsync(const Model::CreateZnodeRequest& request, const CreateZnodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateZnodeOutcomeCallable createZnodeCallable(const Model::CreateZnodeRequest& request) const;
			DeleteAlarmRuleOutcome deleteAlarmRule(const Model::DeleteAlarmRuleRequest &request)const;
			void deleteAlarmRuleAsync(const Model::DeleteAlarmRuleRequest& request, const DeleteAlarmRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAlarmRuleOutcomeCallable deleteAlarmRuleCallable(const Model::DeleteAlarmRuleRequest& request) const;
			DeleteAuthResourceOutcome deleteAuthResource(const Model::DeleteAuthResourceRequest &request)const;
			void deleteAuthResourceAsync(const Model::DeleteAuthResourceRequest& request, const DeleteAuthResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAuthResourceOutcomeCallable deleteAuthResourceCallable(const Model::DeleteAuthResourceRequest& request) const;
			DeleteClusterOutcome deleteCluster(const Model::DeleteClusterRequest &request)const;
			void deleteClusterAsync(const Model::DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteClusterOutcomeCallable deleteClusterCallable(const Model::DeleteClusterRequest& request) const;
			DeleteEngineNamespaceOutcome deleteEngineNamespace(const Model::DeleteEngineNamespaceRequest &request)const;
			void deleteEngineNamespaceAsync(const Model::DeleteEngineNamespaceRequest& request, const DeleteEngineNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEngineNamespaceOutcomeCallable deleteEngineNamespaceCallable(const Model::DeleteEngineNamespaceRequest& request) const;
			DeleteGatewayOutcome deleteGateway(const Model::DeleteGatewayRequest &request)const;
			void deleteGatewayAsync(const Model::DeleteGatewayRequest& request, const DeleteGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGatewayOutcomeCallable deleteGatewayCallable(const Model::DeleteGatewayRequest& request) const;
			DeleteGatewayDomainOutcome deleteGatewayDomain(const Model::DeleteGatewayDomainRequest &request)const;
			void deleteGatewayDomainAsync(const Model::DeleteGatewayDomainRequest& request, const DeleteGatewayDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGatewayDomainOutcomeCallable deleteGatewayDomainCallable(const Model::DeleteGatewayDomainRequest& request) const;
			DeleteGatewayServiceVersionOutcome deleteGatewayServiceVersion(const Model::DeleteGatewayServiceVersionRequest &request)const;
			void deleteGatewayServiceVersionAsync(const Model::DeleteGatewayServiceVersionRequest& request, const DeleteGatewayServiceVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGatewayServiceVersionOutcomeCallable deleteGatewayServiceVersionCallable(const Model::DeleteGatewayServiceVersionRequest& request) const;
			DeleteGatewaySlbOutcome deleteGatewaySlb(const Model::DeleteGatewaySlbRequest &request)const;
			void deleteGatewaySlbAsync(const Model::DeleteGatewaySlbRequest& request, const DeleteGatewaySlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGatewaySlbOutcomeCallable deleteGatewaySlbCallable(const Model::DeleteGatewaySlbRequest& request) const;
			DeleteNacosConfigOutcome deleteNacosConfig(const Model::DeleteNacosConfigRequest &request)const;
			void deleteNacosConfigAsync(const Model::DeleteNacosConfigRequest& request, const DeleteNacosConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNacosConfigOutcomeCallable deleteNacosConfigCallable(const Model::DeleteNacosConfigRequest& request) const;
			DeleteNacosConfigsOutcome deleteNacosConfigs(const Model::DeleteNacosConfigsRequest &request)const;
			void deleteNacosConfigsAsync(const Model::DeleteNacosConfigsRequest& request, const DeleteNacosConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNacosConfigsOutcomeCallable deleteNacosConfigsCallable(const Model::DeleteNacosConfigsRequest& request) const;
			DeleteNacosServiceOutcome deleteNacosService(const Model::DeleteNacosServiceRequest &request)const;
			void deleteNacosServiceAsync(const Model::DeleteNacosServiceRequest& request, const DeleteNacosServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNacosServiceOutcomeCallable deleteNacosServiceCallable(const Model::DeleteNacosServiceRequest& request) const;
			DeleteServiceSourceOutcome deleteServiceSource(const Model::DeleteServiceSourceRequest &request)const;
			void deleteServiceSourceAsync(const Model::DeleteServiceSourceRequest& request, const DeleteServiceSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteServiceSourceOutcomeCallable deleteServiceSourceCallable(const Model::DeleteServiceSourceRequest& request) const;
			DeleteZnodeOutcome deleteZnode(const Model::DeleteZnodeRequest &request)const;
			void deleteZnodeAsync(const Model::DeleteZnodeRequest& request, const DeleteZnodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteZnodeOutcomeCallable deleteZnodeCallable(const Model::DeleteZnodeRequest& request) const;
			ExportNacosConfigOutcome exportNacosConfig(const Model::ExportNacosConfigRequest &request)const;
			void exportNacosConfigAsync(const Model::ExportNacosConfigRequest& request, const ExportNacosConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExportNacosConfigOutcomeCallable exportNacosConfigCallable(const Model::ExportNacosConfigRequest& request) const;
			GetBlackWhiteListOutcome getBlackWhiteList(const Model::GetBlackWhiteListRequest &request)const;
			void getBlackWhiteListAsync(const Model::GetBlackWhiteListRequest& request, const GetBlackWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetBlackWhiteListOutcomeCallable getBlackWhiteListCallable(const Model::GetBlackWhiteListRequest& request) const;
			GetEngineNamepaceOutcome getEngineNamepace(const Model::GetEngineNamepaceRequest &request)const;
			void getEngineNamepaceAsync(const Model::GetEngineNamepaceRequest& request, const GetEngineNamepaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetEngineNamepaceOutcomeCallable getEngineNamepaceCallable(const Model::GetEngineNamepaceRequest& request) const;
			GetGatewayOutcome getGateway(const Model::GetGatewayRequest &request)const;
			void getGatewayAsync(const Model::GetGatewayRequest& request, const GetGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGatewayOutcomeCallable getGatewayCallable(const Model::GetGatewayRequest& request) const;
			GetGatewayDomainDetailOutcome getGatewayDomainDetail(const Model::GetGatewayDomainDetailRequest &request)const;
			void getGatewayDomainDetailAsync(const Model::GetGatewayDomainDetailRequest& request, const GetGatewayDomainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGatewayDomainDetailOutcomeCallable getGatewayDomainDetailCallable(const Model::GetGatewayDomainDetailRequest& request) const;
			GetGatewayOptionOutcome getGatewayOption(const Model::GetGatewayOptionRequest &request)const;
			void getGatewayOptionAsync(const Model::GetGatewayOptionRequest& request, const GetGatewayOptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGatewayOptionOutcomeCallable getGatewayOptionCallable(const Model::GetGatewayOptionRequest& request) const;
			GetGatewayServiceDetailOutcome getGatewayServiceDetail(const Model::GetGatewayServiceDetailRequest &request)const;
			void getGatewayServiceDetailAsync(const Model::GetGatewayServiceDetailRequest& request, const GetGatewayServiceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGatewayServiceDetailOutcomeCallable getGatewayServiceDetailCallable(const Model::GetGatewayServiceDetailRequest& request) const;
			GetGovernanceKubernetesClusterOutcome getGovernanceKubernetesCluster(const Model::GetGovernanceKubernetesClusterRequest &request)const;
			void getGovernanceKubernetesClusterAsync(const Model::GetGovernanceKubernetesClusterRequest& request, const GetGovernanceKubernetesClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGovernanceKubernetesClusterOutcomeCallable getGovernanceKubernetesClusterCallable(const Model::GetGovernanceKubernetesClusterRequest& request) const;
			GetGovernanceKubernetesClusterListOutcome getGovernanceKubernetesClusterList(const Model::GetGovernanceKubernetesClusterListRequest &request)const;
			void getGovernanceKubernetesClusterListAsync(const Model::GetGovernanceKubernetesClusterListRequest& request, const GetGovernanceKubernetesClusterListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGovernanceKubernetesClusterListOutcomeCallable getGovernanceKubernetesClusterListCallable(const Model::GetGovernanceKubernetesClusterListRequest& request) const;
			GetImageOutcome getImage(const Model::GetImageRequest &request)const;
			void getImageAsync(const Model::GetImageRequest& request, const GetImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetImageOutcomeCallable getImageCallable(const Model::GetImageRequest& request) const;
			GetImportFileUrlOutcome getImportFileUrl(const Model::GetImportFileUrlRequest &request)const;
			void getImportFileUrlAsync(const Model::GetImportFileUrlRequest& request, const GetImportFileUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetImportFileUrlOutcomeCallable getImportFileUrlCallable(const Model::GetImportFileUrlRequest& request) const;
			GetKubernetesSourceOutcome getKubernetesSource(const Model::GetKubernetesSourceRequest &request)const;
			void getKubernetesSourceAsync(const Model::GetKubernetesSourceRequest& request, const GetKubernetesSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetKubernetesSourceOutcomeCallable getKubernetesSourceCallable(const Model::GetKubernetesSourceRequest& request) const;
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
			ImportNacosConfigOutcome importNacosConfig(const Model::ImportNacosConfigRequest &request)const;
			void importNacosConfigAsync(const Model::ImportNacosConfigRequest& request, const ImportNacosConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportNacosConfigOutcomeCallable importNacosConfigCallable(const Model::ImportNacosConfigRequest& request) const;
			ImportServicesOutcome importServices(const Model::ImportServicesRequest &request)const;
			void importServicesAsync(const Model::ImportServicesRequest& request, const ImportServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportServicesOutcomeCallable importServicesCallable(const Model::ImportServicesRequest& request) const;
			ListAlarmContactGroupsOutcome listAlarmContactGroups(const Model::ListAlarmContactGroupsRequest &request)const;
			void listAlarmContactGroupsAsync(const Model::ListAlarmContactGroupsRequest& request, const ListAlarmContactGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAlarmContactGroupsOutcomeCallable listAlarmContactGroupsCallable(const Model::ListAlarmContactGroupsRequest& request) const;
			ListAlarmHistoriesOutcome listAlarmHistories(const Model::ListAlarmHistoriesRequest &request)const;
			void listAlarmHistoriesAsync(const Model::ListAlarmHistoriesRequest& request, const ListAlarmHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAlarmHistoriesOutcomeCallable listAlarmHistoriesCallable(const Model::ListAlarmHistoriesRequest& request) const;
			ListAlarmItemsOutcome listAlarmItems(const Model::ListAlarmItemsRequest &request)const;
			void listAlarmItemsAsync(const Model::ListAlarmItemsRequest& request, const ListAlarmItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAlarmItemsOutcomeCallable listAlarmItemsCallable(const Model::ListAlarmItemsRequest& request) const;
			ListAlarmRulesOutcome listAlarmRules(const Model::ListAlarmRulesRequest &request)const;
			void listAlarmRulesAsync(const Model::ListAlarmRulesRequest& request, const ListAlarmRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAlarmRulesOutcomeCallable listAlarmRulesCallable(const Model::ListAlarmRulesRequest& request) const;
			ListAnsInstancesOutcome listAnsInstances(const Model::ListAnsInstancesRequest &request)const;
			void listAnsInstancesAsync(const Model::ListAnsInstancesRequest& request, const ListAnsInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAnsInstancesOutcomeCallable listAnsInstancesCallable(const Model::ListAnsInstancesRequest& request) const;
			ListAnsServiceClustersOutcome listAnsServiceClusters(const Model::ListAnsServiceClustersRequest &request)const;
			void listAnsServiceClustersAsync(const Model::ListAnsServiceClustersRequest& request, const ListAnsServiceClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAnsServiceClustersOutcomeCallable listAnsServiceClustersCallable(const Model::ListAnsServiceClustersRequest& request) const;
			ListAnsServicesOutcome listAnsServices(const Model::ListAnsServicesRequest &request)const;
			void listAnsServicesAsync(const Model::ListAnsServicesRequest& request, const ListAnsServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAnsServicesOutcomeCallable listAnsServicesCallable(const Model::ListAnsServicesRequest& request) const;
			ListClusterConnectionTypesOutcome listClusterConnectionTypes(const Model::ListClusterConnectionTypesRequest &request)const;
			void listClusterConnectionTypesAsync(const Model::ListClusterConnectionTypesRequest& request, const ListClusterConnectionTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterConnectionTypesOutcomeCallable listClusterConnectionTypesCallable(const Model::ListClusterConnectionTypesRequest& request) const;
			ListClusterTypesOutcome listClusterTypes(const Model::ListClusterTypesRequest &request)const;
			void listClusterTypesAsync(const Model::ListClusterTypesRequest& request, const ListClusterTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterTypesOutcomeCallable listClusterTypesCallable(const Model::ListClusterTypesRequest& request) const;
			ListClusterVersionsOutcome listClusterVersions(const Model::ListClusterVersionsRequest &request)const;
			void listClusterVersionsAsync(const Model::ListClusterVersionsRequest& request, const ListClusterVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClusterVersionsOutcomeCallable listClusterVersionsCallable(const Model::ListClusterVersionsRequest& request) const;
			ListClustersOutcome listClusters(const Model::ListClustersRequest &request)const;
			void listClustersAsync(const Model::ListClustersRequest& request, const ListClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListClustersOutcomeCallable listClustersCallable(const Model::ListClustersRequest& request) const;
			ListEngineNamespacesOutcome listEngineNamespaces(const Model::ListEngineNamespacesRequest &request)const;
			void listEngineNamespacesAsync(const Model::ListEngineNamespacesRequest& request, const ListEngineNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEngineNamespacesOutcomeCallable listEngineNamespacesCallable(const Model::ListEngineNamespacesRequest& request) const;
			ListEurekaInstancesOutcome listEurekaInstances(const Model::ListEurekaInstancesRequest &request)const;
			void listEurekaInstancesAsync(const Model::ListEurekaInstancesRequest& request, const ListEurekaInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEurekaInstancesOutcomeCallable listEurekaInstancesCallable(const Model::ListEurekaInstancesRequest& request) const;
			ListEurekaServicesOutcome listEurekaServices(const Model::ListEurekaServicesRequest &request)const;
			void listEurekaServicesAsync(const Model::ListEurekaServicesRequest& request, const ListEurekaServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEurekaServicesOutcomeCallable listEurekaServicesCallable(const Model::ListEurekaServicesRequest& request) const;
			ListGatewayOutcome listGateway(const Model::ListGatewayRequest &request)const;
			void listGatewayAsync(const Model::ListGatewayRequest& request, const ListGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGatewayOutcomeCallable listGatewayCallable(const Model::ListGatewayRequest& request) const;
			ListGatewayDomainOutcome listGatewayDomain(const Model::ListGatewayDomainRequest &request)const;
			void listGatewayDomainAsync(const Model::ListGatewayDomainRequest& request, const ListGatewayDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGatewayDomainOutcomeCallable listGatewayDomainCallable(const Model::ListGatewayDomainRequest& request) const;
			ListGatewayServiceOutcome listGatewayService(const Model::ListGatewayServiceRequest &request)const;
			void listGatewayServiceAsync(const Model::ListGatewayServiceRequest& request, const ListGatewayServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGatewayServiceOutcomeCallable listGatewayServiceCallable(const Model::ListGatewayServiceRequest& request) const;
			ListGatewaySlbOutcome listGatewaySlb(const Model::ListGatewaySlbRequest &request)const;
			void listGatewaySlbAsync(const Model::ListGatewaySlbRequest& request, const ListGatewaySlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGatewaySlbOutcomeCallable listGatewaySlbCallable(const Model::ListGatewaySlbRequest& request) const;
			ListListenersByConfigOutcome listListenersByConfig(const Model::ListListenersByConfigRequest &request)const;
			void listListenersByConfigAsync(const Model::ListListenersByConfigRequest& request, const ListListenersByConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListListenersByConfigOutcomeCallable listListenersByConfigCallable(const Model::ListListenersByConfigRequest& request) const;
			ListListenersByIpOutcome listListenersByIp(const Model::ListListenersByIpRequest &request)const;
			void listListenersByIpAsync(const Model::ListListenersByIpRequest& request, const ListListenersByIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListListenersByIpOutcomeCallable listListenersByIpCallable(const Model::ListListenersByIpRequest& request) const;
			ListNacosConfigsOutcome listNacosConfigs(const Model::ListNacosConfigsRequest &request)const;
			void listNacosConfigsAsync(const Model::ListNacosConfigsRequest& request, const ListNacosConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNacosConfigsOutcomeCallable listNacosConfigsCallable(const Model::ListNacosConfigsRequest& request) const;
			ListNacosHistoryConfigsOutcome listNacosHistoryConfigs(const Model::ListNacosHistoryConfigsRequest &request)const;
			void listNacosHistoryConfigsAsync(const Model::ListNacosHistoryConfigsRequest& request, const ListNacosHistoryConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNacosHistoryConfigsOutcomeCallable listNacosHistoryConfigsCallable(const Model::ListNacosHistoryConfigsRequest& request) const;
			ListSSLCertOutcome listSSLCert(const Model::ListSSLCertRequest &request)const;
			void listSSLCertAsync(const Model::ListSSLCertRequest& request, const ListSSLCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSSLCertOutcomeCallable listSSLCertCallable(const Model::ListSSLCertRequest& request) const;
			ListServiceSourceOutcome listServiceSource(const Model::ListServiceSourceRequest &request)const;
			void listServiceSourceAsync(const Model::ListServiceSourceRequest& request, const ListServiceSourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListServiceSourceOutcomeCallable listServiceSourceCallable(const Model::ListServiceSourceRequest& request) const;
			ListZnodeChildrenOutcome listZnodeChildren(const Model::ListZnodeChildrenRequest &request)const;
			void listZnodeChildrenAsync(const Model::ListZnodeChildrenRequest& request, const ListZnodeChildrenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListZnodeChildrenOutcomeCallable listZnodeChildrenCallable(const Model::ListZnodeChildrenRequest& request) const;
			ModifyGovernanceKubernetesClusterOutcome modifyGovernanceKubernetesCluster(const Model::ModifyGovernanceKubernetesClusterRequest &request)const;
			void modifyGovernanceKubernetesClusterAsync(const Model::ModifyGovernanceKubernetesClusterRequest& request, const ModifyGovernanceKubernetesClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyGovernanceKubernetesClusterOutcomeCallable modifyGovernanceKubernetesClusterCallable(const Model::ModifyGovernanceKubernetesClusterRequest& request) const;
			PullServicesOutcome pullServices(const Model::PullServicesRequest &request)const;
			void pullServicesAsync(const Model::PullServicesRequest& request, const PullServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			PullServicesOutcomeCallable pullServicesCallable(const Model::PullServicesRequest& request) const;
			QueryBusinessLocationsOutcome queryBusinessLocations(const Model::QueryBusinessLocationsRequest &request)const;
			void queryBusinessLocationsAsync(const Model::QueryBusinessLocationsRequest& request, const QueryBusinessLocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryBusinessLocationsOutcomeCallable queryBusinessLocationsCallable(const Model::QueryBusinessLocationsRequest& request) const;
			QueryClusterDetailOutcome queryClusterDetail(const Model::QueryClusterDetailRequest &request)const;
			void queryClusterDetailAsync(const Model::QueryClusterDetailRequest& request, const QueryClusterDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryClusterDetailOutcomeCallable queryClusterDetailCallable(const Model::QueryClusterDetailRequest& request) const;
			QueryClusterDiskSpecificationOutcome queryClusterDiskSpecification(const Model::QueryClusterDiskSpecificationRequest &request)const;
			void queryClusterDiskSpecificationAsync(const Model::QueryClusterDiskSpecificationRequest& request, const QueryClusterDiskSpecificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryClusterDiskSpecificationOutcomeCallable queryClusterDiskSpecificationCallable(const Model::QueryClusterDiskSpecificationRequest& request) const;
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
			QueryMonitorOutcome queryMonitor(const Model::QueryMonitorRequest &request)const;
			void queryMonitorAsync(const Model::QueryMonitorRequest& request, const QueryMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryMonitorOutcomeCallable queryMonitorCallable(const Model::QueryMonitorRequest& request) const;
			QuerySlbSpecOutcome querySlbSpec(const Model::QuerySlbSpecRequest &request)const;
			void querySlbSpecAsync(const Model::QuerySlbSpecRequest& request, const QuerySlbSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QuerySlbSpecOutcomeCallable querySlbSpecCallable(const Model::QuerySlbSpecRequest& request) const;
			QueryZnodeDetailOutcome queryZnodeDetail(const Model::QueryZnodeDetailRequest &request)const;
			void queryZnodeDetailAsync(const Model::QueryZnodeDetailRequest& request, const QueryZnodeDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryZnodeDetailOutcomeCallable queryZnodeDetailCallable(const Model::QueryZnodeDetailRequest& request) const;
			RestartClusterOutcome restartCluster(const Model::RestartClusterRequest &request)const;
			void restartClusterAsync(const Model::RestartClusterRequest& request, const RestartClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartClusterOutcomeCallable restartClusterCallable(const Model::RestartClusterRequest& request) const;
			RetryClusterOutcome retryCluster(const Model::RetryClusterRequest &request)const;
			void retryClusterAsync(const Model::RetryClusterRequest& request, const RetryClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RetryClusterOutcomeCallable retryClusterCallable(const Model::RetryClusterRequest& request) const;
			ScalingClusterOutcome scalingCluster(const Model::ScalingClusterRequest &request)const;
			void scalingClusterAsync(const Model::ScalingClusterRequest& request, const ScalingClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ScalingClusterOutcomeCallable scalingClusterCallable(const Model::ScalingClusterRequest& request) const;
			SelectGatewaySlbOutcome selectGatewaySlb(const Model::SelectGatewaySlbRequest &request)const;
			void selectGatewaySlbAsync(const Model::SelectGatewaySlbRequest& request, const SelectGatewaySlbAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SelectGatewaySlbOutcomeCallable selectGatewaySlbCallable(const Model::SelectGatewaySlbRequest& request) const;
			UpdateAclOutcome updateAcl(const Model::UpdateAclRequest &request)const;
			void updateAclAsync(const Model::UpdateAclRequest& request, const UpdateAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateAclOutcomeCallable updateAclCallable(const Model::UpdateAclRequest& request) const;
			UpdateBlackWhiteListOutcome updateBlackWhiteList(const Model::UpdateBlackWhiteListRequest &request)const;
			void updateBlackWhiteListAsync(const Model::UpdateBlackWhiteListRequest& request, const UpdateBlackWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateBlackWhiteListOutcomeCallable updateBlackWhiteListCallable(const Model::UpdateBlackWhiteListRequest& request) const;
			UpdateClusterOutcome updateCluster(const Model::UpdateClusterRequest &request)const;
			void updateClusterAsync(const Model::UpdateClusterRequest& request, const UpdateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateClusterOutcomeCallable updateClusterCallable(const Model::UpdateClusterRequest& request) const;
			UpdateConfigOutcome updateConfig(const Model::UpdateConfigRequest &request)const;
			void updateConfigAsync(const Model::UpdateConfigRequest& request, const UpdateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateConfigOutcomeCallable updateConfigCallable(const Model::UpdateConfigRequest& request) const;
			UpdateEngineNamespaceOutcome updateEngineNamespace(const Model::UpdateEngineNamespaceRequest &request)const;
			void updateEngineNamespaceAsync(const Model::UpdateEngineNamespaceRequest& request, const UpdateEngineNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEngineNamespaceOutcomeCallable updateEngineNamespaceCallable(const Model::UpdateEngineNamespaceRequest& request) const;
			UpdateGatewayDomainOutcome updateGatewayDomain(const Model::UpdateGatewayDomainRequest &request)const;
			void updateGatewayDomainAsync(const Model::UpdateGatewayDomainRequest& request, const UpdateGatewayDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGatewayDomainOutcomeCallable updateGatewayDomainCallable(const Model::UpdateGatewayDomainRequest& request) const;
			UpdateGatewayNameOutcome updateGatewayName(const Model::UpdateGatewayNameRequest &request)const;
			void updateGatewayNameAsync(const Model::UpdateGatewayNameRequest& request, const UpdateGatewayNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGatewayNameOutcomeCallable updateGatewayNameCallable(const Model::UpdateGatewayNameRequest& request) const;
			UpdateGatewayOptionOutcome updateGatewayOption(const Model::UpdateGatewayOptionRequest &request)const;
			void updateGatewayOptionAsync(const Model::UpdateGatewayOptionRequest& request, const UpdateGatewayOptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGatewayOptionOutcomeCallable updateGatewayOptionCallable(const Model::UpdateGatewayOptionRequest& request) const;
			UpdateGatewayRouteHTTPRewriteOutcome updateGatewayRouteHTTPRewrite(const Model::UpdateGatewayRouteHTTPRewriteRequest &request)const;
			void updateGatewayRouteHTTPRewriteAsync(const Model::UpdateGatewayRouteHTTPRewriteRequest& request, const UpdateGatewayRouteHTTPRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGatewayRouteHTTPRewriteOutcomeCallable updateGatewayRouteHTTPRewriteCallable(const Model::UpdateGatewayRouteHTTPRewriteRequest& request) const;
			UpdateGatewayServiceVersionOutcome updateGatewayServiceVersion(const Model::UpdateGatewayServiceVersionRequest &request)const;
			void updateGatewayServiceVersionAsync(const Model::UpdateGatewayServiceVersionRequest& request, const UpdateGatewayServiceVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGatewayServiceVersionOutcomeCallable updateGatewayServiceVersionCallable(const Model::UpdateGatewayServiceVersionRequest& request) const;
			UpdateImageOutcome updateImage(const Model::UpdateImageRequest &request)const;
			void updateImageAsync(const Model::UpdateImageRequest& request, const UpdateImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateImageOutcomeCallable updateImageCallable(const Model::UpdateImageRequest& request) const;
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
			UpdateSSLCertOutcome updateSSLCert(const Model::UpdateSSLCertRequest &request)const;
			void updateSSLCertAsync(const Model::UpdateSSLCertRequest& request, const UpdateSSLCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSSLCertOutcomeCallable updateSSLCertCallable(const Model::UpdateSSLCertRequest& request) const;
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
