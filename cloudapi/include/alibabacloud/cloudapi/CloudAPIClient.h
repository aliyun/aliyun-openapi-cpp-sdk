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

#ifndef ALIBABACLOUD_CLOUDAPI_CLOUDAPICLIENT_H_
#define ALIBABACLOUD_CLOUDAPI_CLOUDAPICLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "CloudAPIExport.h"
#include "model/AbolishApiRequest.h"
#include "model/AbolishApiResult.h"
#include "model/AddAccessControlListEntryRequest.h"
#include "model/AddAccessControlListEntryResult.h"
#include "model/AddIpControlPolicyItemRequest.h"
#include "model/AddIpControlPolicyItemResult.h"
#include "model/AddTrafficSpecialControlRequest.h"
#include "model/AddTrafficSpecialControlResult.h"
#include "model/AttachApiProductRequest.h"
#include "model/AttachApiProductResult.h"
#include "model/AttachPluginRequest.h"
#include "model/AttachPluginResult.h"
#include "model/BatchAbolishApisRequest.h"
#include "model/BatchAbolishApisResult.h"
#include "model/BatchDeployApisRequest.h"
#include "model/BatchDeployApisResult.h"
#include "model/CreateAccessControlListRequest.h"
#include "model/CreateAccessControlListResult.h"
#include "model/CreateApiRequest.h"
#include "model/CreateApiResult.h"
#include "model/CreateApiGroupRequest.h"
#include "model/CreateApiGroupResult.h"
#include "model/CreateApiStageVariableRequest.h"
#include "model/CreateApiStageVariableResult.h"
#include "model/CreateAppRequest.h"
#include "model/CreateAppResult.h"
#include "model/CreateBackendRequest.h"
#include "model/CreateBackendResult.h"
#include "model/CreateBackendModelRequest.h"
#include "model/CreateBackendModelResult.h"
#include "model/CreateDatasetRequest.h"
#include "model/CreateDatasetResult.h"
#include "model/CreateDatasetItemRequest.h"
#include "model/CreateDatasetItemResult.h"
#include "model/CreateInstanceRequest.h"
#include "model/CreateInstanceResult.h"
#include "model/CreateIntranetDomainRequest.h"
#include "model/CreateIntranetDomainResult.h"
#include "model/CreateIpControlRequest.h"
#include "model/CreateIpControlResult.h"
#include "model/CreateLogConfigRequest.h"
#include "model/CreateLogConfigResult.h"
#include "model/CreateModelRequest.h"
#include "model/CreateModelResult.h"
#include "model/CreateMonitorGroupRequest.h"
#include "model/CreateMonitorGroupResult.h"
#include "model/CreatePluginRequest.h"
#include "model/CreatePluginResult.h"
#include "model/CreateSignatureRequest.h"
#include "model/CreateSignatureResult.h"
#include "model/CreateTrafficControlRequest.h"
#include "model/CreateTrafficControlResult.h"
#include "model/DeleteAccessControlListRequest.h"
#include "model/DeleteAccessControlListResult.h"
#include "model/DeleteAllTrafficSpecialControlRequest.h"
#include "model/DeleteAllTrafficSpecialControlResult.h"
#include "model/DeleteApiRequest.h"
#include "model/DeleteApiResult.h"
#include "model/DeleteApiGroupRequest.h"
#include "model/DeleteApiGroupResult.h"
#include "model/DeleteApiProductRequest.h"
#include "model/DeleteApiProductResult.h"
#include "model/DeleteApiStageVariableRequest.h"
#include "model/DeleteApiStageVariableResult.h"
#include "model/DeleteAppRequest.h"
#include "model/DeleteAppResult.h"
#include "model/DeleteBackendRequest.h"
#include "model/DeleteBackendResult.h"
#include "model/DeleteBackendModelRequest.h"
#include "model/DeleteBackendModelResult.h"
#include "model/DeleteDatasetRequest.h"
#include "model/DeleteDatasetResult.h"
#include "model/DeleteDatasetItemRequest.h"
#include "model/DeleteDatasetItemResult.h"
#include "model/DeleteDomainRequest.h"
#include "model/DeleteDomainResult.h"
#include "model/DeleteDomainCertificateRequest.h"
#include "model/DeleteDomainCertificateResult.h"
#include "model/DeleteInstanceRequest.h"
#include "model/DeleteInstanceResult.h"
#include "model/DeleteIpControlRequest.h"
#include "model/DeleteIpControlResult.h"
#include "model/DeleteLogConfigRequest.h"
#include "model/DeleteLogConfigResult.h"
#include "model/DeleteModelRequest.h"
#include "model/DeleteModelResult.h"
#include "model/DeleteMonitorGroupRequest.h"
#include "model/DeleteMonitorGroupResult.h"
#include "model/DeletePluginRequest.h"
#include "model/DeletePluginResult.h"
#include "model/DeleteSignatureRequest.h"
#include "model/DeleteSignatureResult.h"
#include "model/DeleteTrafficControlRequest.h"
#include "model/DeleteTrafficControlResult.h"
#include "model/DeleteTrafficSpecialControlRequest.h"
#include "model/DeleteTrafficSpecialControlResult.h"
#include "model/DeployApiRequest.h"
#include "model/DeployApiResult.h"
#include "model/DescribeAbolishApiTaskRequest.h"
#include "model/DescribeAbolishApiTaskResult.h"
#include "model/DescribeAccessControlListAttributeRequest.h"
#include "model/DescribeAccessControlListAttributeResult.h"
#include "model/DescribeAccessControlListsRequest.h"
#include "model/DescribeAccessControlListsResult.h"
#include "model/DescribeApiRequest.h"
#include "model/DescribeApiResult.h"
#include "model/DescribeApiDocRequest.h"
#include "model/DescribeApiDocResult.h"
#include "model/DescribeApiGroupRequest.h"
#include "model/DescribeApiGroupResult.h"
#include "model/DescribeApiGroupVpcWhitelistRequest.h"
#include "model/DescribeApiGroupVpcWhitelistResult.h"
#include "model/DescribeApiGroupsRequest.h"
#include "model/DescribeApiGroupsResult.h"
#include "model/DescribeApiHistoriesRequest.h"
#include "model/DescribeApiHistoriesResult.h"
#include "model/DescribeApiHistoryRequest.h"
#include "model/DescribeApiHistoryResult.h"
#include "model/DescribeApiIpControlsRequest.h"
#include "model/DescribeApiIpControlsResult.h"
#include "model/DescribeApiLatencyDataRequest.h"
#include "model/DescribeApiLatencyDataResult.h"
#include "model/DescribeApiMarketAttributesRequest.h"
#include "model/DescribeApiMarketAttributesResult.h"
#include "model/DescribeApiProductApisRequest.h"
#include "model/DescribeApiProductApisResult.h"
#include "model/DescribeApiProductsByAppRequest.h"
#include "model/DescribeApiProductsByAppResult.h"
#include "model/DescribeApiQpsDataRequest.h"
#include "model/DescribeApiQpsDataResult.h"
#include "model/DescribeApiSignaturesRequest.h"
#include "model/DescribeApiSignaturesResult.h"
#include "model/DescribeApiTrafficControlsRequest.h"
#include "model/DescribeApiTrafficControlsResult.h"
#include "model/DescribeApiTrafficDataRequest.h"
#include "model/DescribeApiTrafficDataResult.h"
#include "model/DescribeApisRequest.h"
#include "model/DescribeApisResult.h"
#include "model/DescribeApisByAppRequest.h"
#include "model/DescribeApisByAppResult.h"
#include "model/DescribeApisByBackendRequest.h"
#include "model/DescribeApisByBackendResult.h"
#include "model/DescribeApisByIpControlRequest.h"
#include "model/DescribeApisByIpControlResult.h"
#include "model/DescribeApisBySignatureRequest.h"
#include "model/DescribeApisBySignatureResult.h"
#include "model/DescribeApisByTrafficControlRequest.h"
#include "model/DescribeApisByTrafficControlResult.h"
#include "model/DescribeApisWithStageNameIntegratedByAppRequest.h"
#include "model/DescribeApisWithStageNameIntegratedByAppResult.h"
#include "model/DescribeAppRequest.h"
#include "model/DescribeAppResult.h"
#include "model/DescribeAppAttributesRequest.h"
#include "model/DescribeAppAttributesResult.h"
#include "model/DescribeAppSecurityRequest.h"
#include "model/DescribeAppSecurityResult.h"
#include "model/DescribeAppsRequest.h"
#include "model/DescribeAppsResult.h"
#include "model/DescribeAppsByApiProductRequest.h"
#include "model/DescribeAppsByApiProductResult.h"
#include "model/DescribeAuthorizedApisRequest.h"
#include "model/DescribeAuthorizedApisResult.h"
#include "model/DescribeAuthorizedAppsRequest.h"
#include "model/DescribeAuthorizedAppsResult.h"
#include "model/DescribeBackendInfoRequest.h"
#include "model/DescribeBackendInfoResult.h"
#include "model/DescribeBackendListRequest.h"
#include "model/DescribeBackendListResult.h"
#include "model/DescribeDatasetInfoRequest.h"
#include "model/DescribeDatasetInfoResult.h"
#include "model/DescribeDatasetItemInfoRequest.h"
#include "model/DescribeDatasetItemInfoResult.h"
#include "model/DescribeDatasetItemListRequest.h"
#include "model/DescribeDatasetItemListResult.h"
#include "model/DescribeDatasetListRequest.h"
#include "model/DescribeDatasetListResult.h"
#include "model/DescribeDeployApiTaskRequest.h"
#include "model/DescribeDeployApiTaskResult.h"
#include "model/DescribeDeployedApiRequest.h"
#include "model/DescribeDeployedApiResult.h"
#include "model/DescribeDeployedApisRequest.h"
#include "model/DescribeDeployedApisResult.h"
#include "model/DescribeDomainRequest.h"
#include "model/DescribeDomainResult.h"
#include "model/DescribeGroupLatencyRequest.h"
#include "model/DescribeGroupLatencyResult.h"
#include "model/DescribeGroupQpsRequest.h"
#include "model/DescribeGroupQpsResult.h"
#include "model/DescribeGroupTrafficRequest.h"
#include "model/DescribeGroupTrafficResult.h"
#include "model/DescribeHistoryApisRequest.h"
#include "model/DescribeHistoryApisResult.h"
#include "model/DescribeImportOASTaskRequest.h"
#include "model/DescribeImportOASTaskResult.h"
#include "model/DescribeInstanceDropConnectionsRequest.h"
#include "model/DescribeInstanceDropConnectionsResult.h"
#include "model/DescribeInstanceDropPacketRequest.h"
#include "model/DescribeInstanceDropPacketResult.h"
#include "model/DescribeInstanceHttpCodeRequest.h"
#include "model/DescribeInstanceHttpCodeResult.h"
#include "model/DescribeInstanceLatencyRequest.h"
#include "model/DescribeInstanceLatencyResult.h"
#include "model/DescribeInstanceNewConnectionsRequest.h"
#include "model/DescribeInstanceNewConnectionsResult.h"
#include "model/DescribeInstancePacketsRequest.h"
#include "model/DescribeInstancePacketsResult.h"
#include "model/DescribeInstanceQpsRequest.h"
#include "model/DescribeInstanceQpsResult.h"
#include "model/DescribeInstanceSlbConnectRequest.h"
#include "model/DescribeInstanceSlbConnectResult.h"
#include "model/DescribeInstanceTrafficRequest.h"
#include "model/DescribeInstanceTrafficResult.h"
#include "model/DescribeInstancesRequest.h"
#include "model/DescribeInstancesResult.h"
#include "model/DescribeIpControlPolicyItemsRequest.h"
#include "model/DescribeIpControlPolicyItemsResult.h"
#include "model/DescribeIpControlsRequest.h"
#include "model/DescribeIpControlsResult.h"
#include "model/DescribeLogConfigRequest.h"
#include "model/DescribeLogConfigResult.h"
#include "model/DescribeMarketRemainsQuotaRequest.h"
#include "model/DescribeMarketRemainsQuotaResult.h"
#include "model/DescribeModelsRequest.h"
#include "model/DescribeModelsResult.h"
#include "model/DescribePluginApisRequest.h"
#include "model/DescribePluginApisResult.h"
#include "model/DescribePluginSchemasRequest.h"
#include "model/DescribePluginSchemasResult.h"
#include "model/DescribePluginTemplatesRequest.h"
#include "model/DescribePluginTemplatesResult.h"
#include "model/DescribePluginsRequest.h"
#include "model/DescribePluginsResult.h"
#include "model/DescribePluginsByApiRequest.h"
#include "model/DescribePluginsByApiResult.h"
#include "model/DescribePurchasedApiGroupRequest.h"
#include "model/DescribePurchasedApiGroupResult.h"
#include "model/DescribePurchasedApiGroupsRequest.h"
#include "model/DescribePurchasedApiGroupsResult.h"
#include "model/DescribePurchasedApisRequest.h"
#include "model/DescribePurchasedApisResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeSignaturesRequest.h"
#include "model/DescribeSignaturesResult.h"
#include "model/DescribeSignaturesByApiRequest.h"
#include "model/DescribeSignaturesByApiResult.h"
#include "model/DescribeSummaryDataRequest.h"
#include "model/DescribeSummaryDataResult.h"
#include "model/DescribeSystemParametersRequest.h"
#include "model/DescribeSystemParametersResult.h"
#include "model/DescribeTrafficControlsRequest.h"
#include "model/DescribeTrafficControlsResult.h"
#include "model/DescribeTrafficControlsByApiRequest.h"
#include "model/DescribeTrafficControlsByApiResult.h"
#include "model/DescribeUpdateBackendTaskRequest.h"
#include "model/DescribeUpdateBackendTaskResult.h"
#include "model/DescribeUpdateVpcInfoTaskRequest.h"
#include "model/DescribeUpdateVpcInfoTaskResult.h"
#include "model/DescribeVpcAccessesRequest.h"
#include "model/DescribeVpcAccessesResult.h"
#include "model/DescribeZonesRequest.h"
#include "model/DescribeZonesResult.h"
#include "model/DetachApiProductRequest.h"
#include "model/DetachApiProductResult.h"
#include "model/DetachPluginRequest.h"
#include "model/DetachPluginResult.h"
#include "model/DisableInstanceAccessControlRequest.h"
#include "model/DisableInstanceAccessControlResult.h"
#include "model/DryRunSwaggerRequest.h"
#include "model/DryRunSwaggerResult.h"
#include "model/EnableInstanceAccessControlRequest.h"
#include "model/EnableInstanceAccessControlResult.h"
#include "model/ImportOASRequest.h"
#include "model/ImportOASResult.h"
#include "model/ImportSwaggerRequest.h"
#include "model/ImportSwaggerResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ModifyApiRequest.h"
#include "model/ModifyApiResult.h"
#include "model/ModifyApiConfigurationRequest.h"
#include "model/ModifyApiConfigurationResult.h"
#include "model/ModifyApiGroupRequest.h"
#include "model/ModifyApiGroupResult.h"
#include "model/ModifyApiGroupVpcWhitelistRequest.h"
#include "model/ModifyApiGroupVpcWhitelistResult.h"
#include "model/ModifyAppRequest.h"
#include "model/ModifyAppResult.h"
#include "model/ModifyBackendRequest.h"
#include "model/ModifyBackendResult.h"
#include "model/ModifyBackendModelRequest.h"
#include "model/ModifyBackendModelResult.h"
#include "model/ModifyDatasetRequest.h"
#include "model/ModifyDatasetResult.h"
#include "model/ModifyDatasetItemRequest.h"
#include "model/ModifyDatasetItemResult.h"
#include "model/ModifyInstanceSpecRequest.h"
#include "model/ModifyInstanceSpecResult.h"
#include "model/ModifyIntranetDomainPolicyRequest.h"
#include "model/ModifyIntranetDomainPolicyResult.h"
#include "model/ModifyIpControlRequest.h"
#include "model/ModifyIpControlResult.h"
#include "model/ModifyIpControlPolicyItemRequest.h"
#include "model/ModifyIpControlPolicyItemResult.h"
#include "model/ModifyLogConfigRequest.h"
#include "model/ModifyLogConfigResult.h"
#include "model/ModifyModelRequest.h"
#include "model/ModifyModelResult.h"
#include "model/ModifyPluginRequest.h"
#include "model/ModifyPluginResult.h"
#include "model/ModifySignatureRequest.h"
#include "model/ModifySignatureResult.h"
#include "model/ModifyTrafficControlRequest.h"
#include "model/ModifyTrafficControlResult.h"
#include "model/ModifyVpcAccessAndUpdateApisRequest.h"
#include "model/ModifyVpcAccessAndUpdateApisResult.h"
#include "model/OpenApiGatewayServiceRequest.h"
#include "model/OpenApiGatewayServiceResult.h"
#include "model/QueryRequestLogsRequest.h"
#include "model/QueryRequestLogsResult.h"
#include "model/ReactivateDomainRequest.h"
#include "model/ReactivateDomainResult.h"
#include "model/RemoveAccessControlListEntryRequest.h"
#include "model/RemoveAccessControlListEntryResult.h"
#include "model/RemoveApiProductsAuthoritiesRequest.h"
#include "model/RemoveApiProductsAuthoritiesResult.h"
#include "model/RemoveApisAuthoritiesRequest.h"
#include "model/RemoveApisAuthoritiesResult.h"
#include "model/RemoveAppsAuthoritiesRequest.h"
#include "model/RemoveAppsAuthoritiesResult.h"
#include "model/RemoveIpControlApisRequest.h"
#include "model/RemoveIpControlApisResult.h"
#include "model/RemoveIpControlPolicyItemRequest.h"
#include "model/RemoveIpControlPolicyItemResult.h"
#include "model/RemoveSignatureApisRequest.h"
#include "model/RemoveSignatureApisResult.h"
#include "model/RemoveTrafficControlApisRequest.h"
#include "model/RemoveTrafficControlApisResult.h"
#include "model/RemoveVpcAccessRequest.h"
#include "model/RemoveVpcAccessResult.h"
#include "model/RemoveVpcAccessAndAbolishApisRequest.h"
#include "model/RemoveVpcAccessAndAbolishApisResult.h"
#include "model/ResetAppCodeRequest.h"
#include "model/ResetAppCodeResult.h"
#include "model/ResetAppSecretRequest.h"
#include "model/ResetAppSecretResult.h"
#include "model/SdkGenerateByAppRequest.h"
#include "model/SdkGenerateByAppResult.h"
#include "model/SdkGenerateByAppForRegionRequest.h"
#include "model/SdkGenerateByAppForRegionResult.h"
#include "model/SdkGenerateByGroupRequest.h"
#include "model/SdkGenerateByGroupResult.h"
#include "model/SetAccessControlListAttributeRequest.h"
#include "model/SetAccessControlListAttributeResult.h"
#include "model/SetApiProductsAuthoritiesRequest.h"
#include "model/SetApiProductsAuthoritiesResult.h"
#include "model/SetApisAuthoritiesRequest.h"
#include "model/SetApisAuthoritiesResult.h"
#include "model/SetAppsAuthoritiesRequest.h"
#include "model/SetAppsAuthoritiesResult.h"
#include "model/SetDomainRequest.h"
#include "model/SetDomainResult.h"
#include "model/SetDomainCertificateRequest.h"
#include "model/SetDomainCertificateResult.h"
#include "model/SetDomainWebSocketStatusRequest.h"
#include "model/SetDomainWebSocketStatusResult.h"
#include "model/SetGroupAuthAppCodeRequest.h"
#include "model/SetGroupAuthAppCodeResult.h"
#include "model/SetIpControlApisRequest.h"
#include "model/SetIpControlApisResult.h"
#include "model/SetSignatureApisRequest.h"
#include "model/SetSignatureApisResult.h"
#include "model/SetTrafficControlApisRequest.h"
#include "model/SetTrafficControlApisResult.h"
#include "model/SetVpcAccessRequest.h"
#include "model/SetVpcAccessResult.h"
#include "model/SetWildcardDomainPatternsRequest.h"
#include "model/SetWildcardDomainPatternsResult.h"
#include "model/SwitchApiRequest.h"
#include "model/SwitchApiResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/ValidateVpcConnectivityRequest.h"
#include "model/ValidateVpcConnectivityResult.h"


namespace AlibabaCloud
{
	namespace CloudAPI
	{
		class ALIBABACLOUD_CLOUDAPI_EXPORT CloudAPIClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AbolishApiResult> AbolishApiOutcome;
			typedef std::future<AbolishApiOutcome> AbolishApiOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::AbolishApiRequest&, const AbolishApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AbolishApiAsyncHandler;
			typedef Outcome<Error, Model::AddAccessControlListEntryResult> AddAccessControlListEntryOutcome;
			typedef std::future<AddAccessControlListEntryOutcome> AddAccessControlListEntryOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::AddAccessControlListEntryRequest&, const AddAccessControlListEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddAccessControlListEntryAsyncHandler;
			typedef Outcome<Error, Model::AddIpControlPolicyItemResult> AddIpControlPolicyItemOutcome;
			typedef std::future<AddIpControlPolicyItemOutcome> AddIpControlPolicyItemOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::AddIpControlPolicyItemRequest&, const AddIpControlPolicyItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddIpControlPolicyItemAsyncHandler;
			typedef Outcome<Error, Model::AddTrafficSpecialControlResult> AddTrafficSpecialControlOutcome;
			typedef std::future<AddTrafficSpecialControlOutcome> AddTrafficSpecialControlOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::AddTrafficSpecialControlRequest&, const AddTrafficSpecialControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddTrafficSpecialControlAsyncHandler;
			typedef Outcome<Error, Model::AttachApiProductResult> AttachApiProductOutcome;
			typedef std::future<AttachApiProductOutcome> AttachApiProductOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::AttachApiProductRequest&, const AttachApiProductOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachApiProductAsyncHandler;
			typedef Outcome<Error, Model::AttachPluginResult> AttachPluginOutcome;
			typedef std::future<AttachPluginOutcome> AttachPluginOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::AttachPluginRequest&, const AttachPluginOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachPluginAsyncHandler;
			typedef Outcome<Error, Model::BatchAbolishApisResult> BatchAbolishApisOutcome;
			typedef std::future<BatchAbolishApisOutcome> BatchAbolishApisOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::BatchAbolishApisRequest&, const BatchAbolishApisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchAbolishApisAsyncHandler;
			typedef Outcome<Error, Model::BatchDeployApisResult> BatchDeployApisOutcome;
			typedef std::future<BatchDeployApisOutcome> BatchDeployApisOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::BatchDeployApisRequest&, const BatchDeployApisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeployApisAsyncHandler;
			typedef Outcome<Error, Model::CreateAccessControlListResult> CreateAccessControlListOutcome;
			typedef std::future<CreateAccessControlListOutcome> CreateAccessControlListOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::CreateAccessControlListRequest&, const CreateAccessControlListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccessControlListAsyncHandler;
			typedef Outcome<Error, Model::CreateApiResult> CreateApiOutcome;
			typedef std::future<CreateApiOutcome> CreateApiOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::CreateApiRequest&, const CreateApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateApiAsyncHandler;
			typedef Outcome<Error, Model::CreateApiGroupResult> CreateApiGroupOutcome;
			typedef std::future<CreateApiGroupOutcome> CreateApiGroupOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::CreateApiGroupRequest&, const CreateApiGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateApiGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateApiStageVariableResult> CreateApiStageVariableOutcome;
			typedef std::future<CreateApiStageVariableOutcome> CreateApiStageVariableOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::CreateApiStageVariableRequest&, const CreateApiStageVariableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateApiStageVariableAsyncHandler;
			typedef Outcome<Error, Model::CreateAppResult> CreateAppOutcome;
			typedef std::future<CreateAppOutcome> CreateAppOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::CreateAppRequest&, const CreateAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppAsyncHandler;
			typedef Outcome<Error, Model::CreateBackendResult> CreateBackendOutcome;
			typedef std::future<CreateBackendOutcome> CreateBackendOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::CreateBackendRequest&, const CreateBackendOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackendAsyncHandler;
			typedef Outcome<Error, Model::CreateBackendModelResult> CreateBackendModelOutcome;
			typedef std::future<CreateBackendModelOutcome> CreateBackendModelOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::CreateBackendModelRequest&, const CreateBackendModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackendModelAsyncHandler;
			typedef Outcome<Error, Model::CreateDatasetResult> CreateDatasetOutcome;
			typedef std::future<CreateDatasetOutcome> CreateDatasetOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::CreateDatasetRequest&, const CreateDatasetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatasetAsyncHandler;
			typedef Outcome<Error, Model::CreateDatasetItemResult> CreateDatasetItemOutcome;
			typedef std::future<CreateDatasetItemOutcome> CreateDatasetItemOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::CreateDatasetItemRequest&, const CreateDatasetItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDatasetItemAsyncHandler;
			typedef Outcome<Error, Model::CreateInstanceResult> CreateInstanceOutcome;
			typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::CreateInstanceRequest&, const CreateInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateInstanceAsyncHandler;
			typedef Outcome<Error, Model::CreateIntranetDomainResult> CreateIntranetDomainOutcome;
			typedef std::future<CreateIntranetDomainOutcome> CreateIntranetDomainOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::CreateIntranetDomainRequest&, const CreateIntranetDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateIntranetDomainAsyncHandler;
			typedef Outcome<Error, Model::CreateIpControlResult> CreateIpControlOutcome;
			typedef std::future<CreateIpControlOutcome> CreateIpControlOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::CreateIpControlRequest&, const CreateIpControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateIpControlAsyncHandler;
			typedef Outcome<Error, Model::CreateLogConfigResult> CreateLogConfigOutcome;
			typedef std::future<CreateLogConfigOutcome> CreateLogConfigOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::CreateLogConfigRequest&, const CreateLogConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLogConfigAsyncHandler;
			typedef Outcome<Error, Model::CreateModelResult> CreateModelOutcome;
			typedef std::future<CreateModelOutcome> CreateModelOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::CreateModelRequest&, const CreateModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateModelAsyncHandler;
			typedef Outcome<Error, Model::CreateMonitorGroupResult> CreateMonitorGroupOutcome;
			typedef std::future<CreateMonitorGroupOutcome> CreateMonitorGroupOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::CreateMonitorGroupRequest&, const CreateMonitorGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateMonitorGroupAsyncHandler;
			typedef Outcome<Error, Model::CreatePluginResult> CreatePluginOutcome;
			typedef std::future<CreatePluginOutcome> CreatePluginOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::CreatePluginRequest&, const CreatePluginOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePluginAsyncHandler;
			typedef Outcome<Error, Model::CreateSignatureResult> CreateSignatureOutcome;
			typedef std::future<CreateSignatureOutcome> CreateSignatureOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::CreateSignatureRequest&, const CreateSignatureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSignatureAsyncHandler;
			typedef Outcome<Error, Model::CreateTrafficControlResult> CreateTrafficControlOutcome;
			typedef std::future<CreateTrafficControlOutcome> CreateTrafficControlOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::CreateTrafficControlRequest&, const CreateTrafficControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTrafficControlAsyncHandler;
			typedef Outcome<Error, Model::DeleteAccessControlListResult> DeleteAccessControlListOutcome;
			typedef std::future<DeleteAccessControlListOutcome> DeleteAccessControlListOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DeleteAccessControlListRequest&, const DeleteAccessControlListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccessControlListAsyncHandler;
			typedef Outcome<Error, Model::DeleteAllTrafficSpecialControlResult> DeleteAllTrafficSpecialControlOutcome;
			typedef std::future<DeleteAllTrafficSpecialControlOutcome> DeleteAllTrafficSpecialControlOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DeleteAllTrafficSpecialControlRequest&, const DeleteAllTrafficSpecialControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAllTrafficSpecialControlAsyncHandler;
			typedef Outcome<Error, Model::DeleteApiResult> DeleteApiOutcome;
			typedef std::future<DeleteApiOutcome> DeleteApiOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DeleteApiRequest&, const DeleteApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApiAsyncHandler;
			typedef Outcome<Error, Model::DeleteApiGroupResult> DeleteApiGroupOutcome;
			typedef std::future<DeleteApiGroupOutcome> DeleteApiGroupOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DeleteApiGroupRequest&, const DeleteApiGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApiGroupAsyncHandler;
			typedef Outcome<Error, Model::DeleteApiProductResult> DeleteApiProductOutcome;
			typedef std::future<DeleteApiProductOutcome> DeleteApiProductOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DeleteApiProductRequest&, const DeleteApiProductOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApiProductAsyncHandler;
			typedef Outcome<Error, Model::DeleteApiStageVariableResult> DeleteApiStageVariableOutcome;
			typedef std::future<DeleteApiStageVariableOutcome> DeleteApiStageVariableOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DeleteApiStageVariableRequest&, const DeleteApiStageVariableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApiStageVariableAsyncHandler;
			typedef Outcome<Error, Model::DeleteAppResult> DeleteAppOutcome;
			typedef std::future<DeleteAppOutcome> DeleteAppOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DeleteAppRequest&, const DeleteAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAppAsyncHandler;
			typedef Outcome<Error, Model::DeleteBackendResult> DeleteBackendOutcome;
			typedef std::future<DeleteBackendOutcome> DeleteBackendOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DeleteBackendRequest&, const DeleteBackendOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBackendAsyncHandler;
			typedef Outcome<Error, Model::DeleteBackendModelResult> DeleteBackendModelOutcome;
			typedef std::future<DeleteBackendModelOutcome> DeleteBackendModelOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DeleteBackendModelRequest&, const DeleteBackendModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBackendModelAsyncHandler;
			typedef Outcome<Error, Model::DeleteDatasetResult> DeleteDatasetOutcome;
			typedef std::future<DeleteDatasetOutcome> DeleteDatasetOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DeleteDatasetRequest&, const DeleteDatasetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDatasetAsyncHandler;
			typedef Outcome<Error, Model::DeleteDatasetItemResult> DeleteDatasetItemOutcome;
			typedef std::future<DeleteDatasetItemOutcome> DeleteDatasetItemOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DeleteDatasetItemRequest&, const DeleteDatasetItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDatasetItemAsyncHandler;
			typedef Outcome<Error, Model::DeleteDomainResult> DeleteDomainOutcome;
			typedef std::future<DeleteDomainOutcome> DeleteDomainOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DeleteDomainRequest&, const DeleteDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDomainAsyncHandler;
			typedef Outcome<Error, Model::DeleteDomainCertificateResult> DeleteDomainCertificateOutcome;
			typedef std::future<DeleteDomainCertificateOutcome> DeleteDomainCertificateOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DeleteDomainCertificateRequest&, const DeleteDomainCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDomainCertificateAsyncHandler;
			typedef Outcome<Error, Model::DeleteInstanceResult> DeleteInstanceOutcome;
			typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DeleteInstanceRequest&, const DeleteInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteIpControlResult> DeleteIpControlOutcome;
			typedef std::future<DeleteIpControlOutcome> DeleteIpControlOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DeleteIpControlRequest&, const DeleteIpControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteIpControlAsyncHandler;
			typedef Outcome<Error, Model::DeleteLogConfigResult> DeleteLogConfigOutcome;
			typedef std::future<DeleteLogConfigOutcome> DeleteLogConfigOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DeleteLogConfigRequest&, const DeleteLogConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLogConfigAsyncHandler;
			typedef Outcome<Error, Model::DeleteModelResult> DeleteModelOutcome;
			typedef std::future<DeleteModelOutcome> DeleteModelOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DeleteModelRequest&, const DeleteModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteModelAsyncHandler;
			typedef Outcome<Error, Model::DeleteMonitorGroupResult> DeleteMonitorGroupOutcome;
			typedef std::future<DeleteMonitorGroupOutcome> DeleteMonitorGroupOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DeleteMonitorGroupRequest&, const DeleteMonitorGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMonitorGroupAsyncHandler;
			typedef Outcome<Error, Model::DeletePluginResult> DeletePluginOutcome;
			typedef std::future<DeletePluginOutcome> DeletePluginOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DeletePluginRequest&, const DeletePluginOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePluginAsyncHandler;
			typedef Outcome<Error, Model::DeleteSignatureResult> DeleteSignatureOutcome;
			typedef std::future<DeleteSignatureOutcome> DeleteSignatureOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DeleteSignatureRequest&, const DeleteSignatureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSignatureAsyncHandler;
			typedef Outcome<Error, Model::DeleteTrafficControlResult> DeleteTrafficControlOutcome;
			typedef std::future<DeleteTrafficControlOutcome> DeleteTrafficControlOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DeleteTrafficControlRequest&, const DeleteTrafficControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTrafficControlAsyncHandler;
			typedef Outcome<Error, Model::DeleteTrafficSpecialControlResult> DeleteTrafficSpecialControlOutcome;
			typedef std::future<DeleteTrafficSpecialControlOutcome> DeleteTrafficSpecialControlOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DeleteTrafficSpecialControlRequest&, const DeleteTrafficSpecialControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTrafficSpecialControlAsyncHandler;
			typedef Outcome<Error, Model::DeployApiResult> DeployApiOutcome;
			typedef std::future<DeployApiOutcome> DeployApiOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DeployApiRequest&, const DeployApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeployApiAsyncHandler;
			typedef Outcome<Error, Model::DescribeAbolishApiTaskResult> DescribeAbolishApiTaskOutcome;
			typedef std::future<DescribeAbolishApiTaskOutcome> DescribeAbolishApiTaskOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeAbolishApiTaskRequest&, const DescribeAbolishApiTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAbolishApiTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccessControlListAttributeResult> DescribeAccessControlListAttributeOutcome;
			typedef std::future<DescribeAccessControlListAttributeOutcome> DescribeAccessControlListAttributeOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeAccessControlListAttributeRequest&, const DescribeAccessControlListAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessControlListAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccessControlListsResult> DescribeAccessControlListsOutcome;
			typedef std::future<DescribeAccessControlListsOutcome> DescribeAccessControlListsOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeAccessControlListsRequest&, const DescribeAccessControlListsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccessControlListsAsyncHandler;
			typedef Outcome<Error, Model::DescribeApiResult> DescribeApiOutcome;
			typedef std::future<DescribeApiOutcome> DescribeApiOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeApiRequest&, const DescribeApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiAsyncHandler;
			typedef Outcome<Error, Model::DescribeApiDocResult> DescribeApiDocOutcome;
			typedef std::future<DescribeApiDocOutcome> DescribeApiDocOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeApiDocRequest&, const DescribeApiDocOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiDocAsyncHandler;
			typedef Outcome<Error, Model::DescribeApiGroupResult> DescribeApiGroupOutcome;
			typedef std::future<DescribeApiGroupOutcome> DescribeApiGroupOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeApiGroupRequest&, const DescribeApiGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeApiGroupVpcWhitelistResult> DescribeApiGroupVpcWhitelistOutcome;
			typedef std::future<DescribeApiGroupVpcWhitelistOutcome> DescribeApiGroupVpcWhitelistOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeApiGroupVpcWhitelistRequest&, const DescribeApiGroupVpcWhitelistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiGroupVpcWhitelistAsyncHandler;
			typedef Outcome<Error, Model::DescribeApiGroupsResult> DescribeApiGroupsOutcome;
			typedef std::future<DescribeApiGroupsOutcome> DescribeApiGroupsOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeApiGroupsRequest&, const DescribeApiGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiGroupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeApiHistoriesResult> DescribeApiHistoriesOutcome;
			typedef std::future<DescribeApiHistoriesOutcome> DescribeApiHistoriesOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeApiHistoriesRequest&, const DescribeApiHistoriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiHistoriesAsyncHandler;
			typedef Outcome<Error, Model::DescribeApiHistoryResult> DescribeApiHistoryOutcome;
			typedef std::future<DescribeApiHistoryOutcome> DescribeApiHistoryOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeApiHistoryRequest&, const DescribeApiHistoryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiHistoryAsyncHandler;
			typedef Outcome<Error, Model::DescribeApiIpControlsResult> DescribeApiIpControlsOutcome;
			typedef std::future<DescribeApiIpControlsOutcome> DescribeApiIpControlsOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeApiIpControlsRequest&, const DescribeApiIpControlsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiIpControlsAsyncHandler;
			typedef Outcome<Error, Model::DescribeApiLatencyDataResult> DescribeApiLatencyDataOutcome;
			typedef std::future<DescribeApiLatencyDataOutcome> DescribeApiLatencyDataOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeApiLatencyDataRequest&, const DescribeApiLatencyDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiLatencyDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeApiMarketAttributesResult> DescribeApiMarketAttributesOutcome;
			typedef std::future<DescribeApiMarketAttributesOutcome> DescribeApiMarketAttributesOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeApiMarketAttributesRequest&, const DescribeApiMarketAttributesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiMarketAttributesAsyncHandler;
			typedef Outcome<Error, Model::DescribeApiProductApisResult> DescribeApiProductApisOutcome;
			typedef std::future<DescribeApiProductApisOutcome> DescribeApiProductApisOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeApiProductApisRequest&, const DescribeApiProductApisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiProductApisAsyncHandler;
			typedef Outcome<Error, Model::DescribeApiProductsByAppResult> DescribeApiProductsByAppOutcome;
			typedef std::future<DescribeApiProductsByAppOutcome> DescribeApiProductsByAppOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeApiProductsByAppRequest&, const DescribeApiProductsByAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiProductsByAppAsyncHandler;
			typedef Outcome<Error, Model::DescribeApiQpsDataResult> DescribeApiQpsDataOutcome;
			typedef std::future<DescribeApiQpsDataOutcome> DescribeApiQpsDataOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeApiQpsDataRequest&, const DescribeApiQpsDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiQpsDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeApiSignaturesResult> DescribeApiSignaturesOutcome;
			typedef std::future<DescribeApiSignaturesOutcome> DescribeApiSignaturesOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeApiSignaturesRequest&, const DescribeApiSignaturesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiSignaturesAsyncHandler;
			typedef Outcome<Error, Model::DescribeApiTrafficControlsResult> DescribeApiTrafficControlsOutcome;
			typedef std::future<DescribeApiTrafficControlsOutcome> DescribeApiTrafficControlsOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeApiTrafficControlsRequest&, const DescribeApiTrafficControlsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiTrafficControlsAsyncHandler;
			typedef Outcome<Error, Model::DescribeApiTrafficDataResult> DescribeApiTrafficDataOutcome;
			typedef std::future<DescribeApiTrafficDataOutcome> DescribeApiTrafficDataOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeApiTrafficDataRequest&, const DescribeApiTrafficDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApiTrafficDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeApisResult> DescribeApisOutcome;
			typedef std::future<DescribeApisOutcome> DescribeApisOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeApisRequest&, const DescribeApisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApisAsyncHandler;
			typedef Outcome<Error, Model::DescribeApisByAppResult> DescribeApisByAppOutcome;
			typedef std::future<DescribeApisByAppOutcome> DescribeApisByAppOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeApisByAppRequest&, const DescribeApisByAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApisByAppAsyncHandler;
			typedef Outcome<Error, Model::DescribeApisByBackendResult> DescribeApisByBackendOutcome;
			typedef std::future<DescribeApisByBackendOutcome> DescribeApisByBackendOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeApisByBackendRequest&, const DescribeApisByBackendOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApisByBackendAsyncHandler;
			typedef Outcome<Error, Model::DescribeApisByIpControlResult> DescribeApisByIpControlOutcome;
			typedef std::future<DescribeApisByIpControlOutcome> DescribeApisByIpControlOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeApisByIpControlRequest&, const DescribeApisByIpControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApisByIpControlAsyncHandler;
			typedef Outcome<Error, Model::DescribeApisBySignatureResult> DescribeApisBySignatureOutcome;
			typedef std::future<DescribeApisBySignatureOutcome> DescribeApisBySignatureOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeApisBySignatureRequest&, const DescribeApisBySignatureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApisBySignatureAsyncHandler;
			typedef Outcome<Error, Model::DescribeApisByTrafficControlResult> DescribeApisByTrafficControlOutcome;
			typedef std::future<DescribeApisByTrafficControlOutcome> DescribeApisByTrafficControlOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeApisByTrafficControlRequest&, const DescribeApisByTrafficControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApisByTrafficControlAsyncHandler;
			typedef Outcome<Error, Model::DescribeApisWithStageNameIntegratedByAppResult> DescribeApisWithStageNameIntegratedByAppOutcome;
			typedef std::future<DescribeApisWithStageNameIntegratedByAppOutcome> DescribeApisWithStageNameIntegratedByAppOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeApisWithStageNameIntegratedByAppRequest&, const DescribeApisWithStageNameIntegratedByAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApisWithStageNameIntegratedByAppAsyncHandler;
			typedef Outcome<Error, Model::DescribeAppResult> DescribeAppOutcome;
			typedef std::future<DescribeAppOutcome> DescribeAppOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeAppRequest&, const DescribeAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppAsyncHandler;
			typedef Outcome<Error, Model::DescribeAppAttributesResult> DescribeAppAttributesOutcome;
			typedef std::future<DescribeAppAttributesOutcome> DescribeAppAttributesOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeAppAttributesRequest&, const DescribeAppAttributesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppAttributesAsyncHandler;
			typedef Outcome<Error, Model::DescribeAppSecurityResult> DescribeAppSecurityOutcome;
			typedef std::future<DescribeAppSecurityOutcome> DescribeAppSecurityOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeAppSecurityRequest&, const DescribeAppSecurityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppSecurityAsyncHandler;
			typedef Outcome<Error, Model::DescribeAppsResult> DescribeAppsOutcome;
			typedef std::future<DescribeAppsOutcome> DescribeAppsOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeAppsRequest&, const DescribeAppsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAppsByApiProductResult> DescribeAppsByApiProductOutcome;
			typedef std::future<DescribeAppsByApiProductOutcome> DescribeAppsByApiProductOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeAppsByApiProductRequest&, const DescribeAppsByApiProductOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAppsByApiProductAsyncHandler;
			typedef Outcome<Error, Model::DescribeAuthorizedApisResult> DescribeAuthorizedApisOutcome;
			typedef std::future<DescribeAuthorizedApisOutcome> DescribeAuthorizedApisOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeAuthorizedApisRequest&, const DescribeAuthorizedApisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuthorizedApisAsyncHandler;
			typedef Outcome<Error, Model::DescribeAuthorizedAppsResult> DescribeAuthorizedAppsOutcome;
			typedef std::future<DescribeAuthorizedAppsOutcome> DescribeAuthorizedAppsOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeAuthorizedAppsRequest&, const DescribeAuthorizedAppsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuthorizedAppsAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackendInfoResult> DescribeBackendInfoOutcome;
			typedef std::future<DescribeBackendInfoOutcome> DescribeBackendInfoOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeBackendInfoRequest&, const DescribeBackendInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackendInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackendListResult> DescribeBackendListOutcome;
			typedef std::future<DescribeBackendListOutcome> DescribeBackendListOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeBackendListRequest&, const DescribeBackendListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackendListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDatasetInfoResult> DescribeDatasetInfoOutcome;
			typedef std::future<DescribeDatasetInfoOutcome> DescribeDatasetInfoOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeDatasetInfoRequest&, const DescribeDatasetInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatasetInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDatasetItemInfoResult> DescribeDatasetItemInfoOutcome;
			typedef std::future<DescribeDatasetItemInfoOutcome> DescribeDatasetItemInfoOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeDatasetItemInfoRequest&, const DescribeDatasetItemInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatasetItemInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeDatasetItemListResult> DescribeDatasetItemListOutcome;
			typedef std::future<DescribeDatasetItemListOutcome> DescribeDatasetItemListOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeDatasetItemListRequest&, const DescribeDatasetItemListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatasetItemListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDatasetListResult> DescribeDatasetListOutcome;
			typedef std::future<DescribeDatasetListOutcome> DescribeDatasetListOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeDatasetListRequest&, const DescribeDatasetListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDatasetListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDeployApiTaskResult> DescribeDeployApiTaskOutcome;
			typedef std::future<DescribeDeployApiTaskOutcome> DescribeDeployApiTaskOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeDeployApiTaskRequest&, const DescribeDeployApiTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeployApiTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeDeployedApiResult> DescribeDeployedApiOutcome;
			typedef std::future<DescribeDeployedApiOutcome> DescribeDeployedApiOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeDeployedApiRequest&, const DescribeDeployedApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeployedApiAsyncHandler;
			typedef Outcome<Error, Model::DescribeDeployedApisResult> DescribeDeployedApisOutcome;
			typedef std::future<DescribeDeployedApisOutcome> DescribeDeployedApisOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeDeployedApisRequest&, const DescribeDeployedApisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeployedApisAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainResult> DescribeDomainOutcome;
			typedef std::future<DescribeDomainOutcome> DescribeDomainOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeDomainRequest&, const DescribeDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainAsyncHandler;
			typedef Outcome<Error, Model::DescribeGroupLatencyResult> DescribeGroupLatencyOutcome;
			typedef std::future<DescribeGroupLatencyOutcome> DescribeGroupLatencyOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeGroupLatencyRequest&, const DescribeGroupLatencyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupLatencyAsyncHandler;
			typedef Outcome<Error, Model::DescribeGroupQpsResult> DescribeGroupQpsOutcome;
			typedef std::future<DescribeGroupQpsOutcome> DescribeGroupQpsOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeGroupQpsRequest&, const DescribeGroupQpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupQpsAsyncHandler;
			typedef Outcome<Error, Model::DescribeGroupTrafficResult> DescribeGroupTrafficOutcome;
			typedef std::future<DescribeGroupTrafficOutcome> DescribeGroupTrafficOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeGroupTrafficRequest&, const DescribeGroupTrafficOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGroupTrafficAsyncHandler;
			typedef Outcome<Error, Model::DescribeHistoryApisResult> DescribeHistoryApisOutcome;
			typedef std::future<DescribeHistoryApisOutcome> DescribeHistoryApisOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeHistoryApisRequest&, const DescribeHistoryApisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHistoryApisAsyncHandler;
			typedef Outcome<Error, Model::DescribeImportOASTaskResult> DescribeImportOASTaskOutcome;
			typedef std::future<DescribeImportOASTaskOutcome> DescribeImportOASTaskOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeImportOASTaskRequest&, const DescribeImportOASTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeImportOASTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceDropConnectionsResult> DescribeInstanceDropConnectionsOutcome;
			typedef std::future<DescribeInstanceDropConnectionsOutcome> DescribeInstanceDropConnectionsOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeInstanceDropConnectionsRequest&, const DescribeInstanceDropConnectionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceDropConnectionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceDropPacketResult> DescribeInstanceDropPacketOutcome;
			typedef std::future<DescribeInstanceDropPacketOutcome> DescribeInstanceDropPacketOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeInstanceDropPacketRequest&, const DescribeInstanceDropPacketOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceDropPacketAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceHttpCodeResult> DescribeInstanceHttpCodeOutcome;
			typedef std::future<DescribeInstanceHttpCodeOutcome> DescribeInstanceHttpCodeOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeInstanceHttpCodeRequest&, const DescribeInstanceHttpCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceHttpCodeAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceLatencyResult> DescribeInstanceLatencyOutcome;
			typedef std::future<DescribeInstanceLatencyOutcome> DescribeInstanceLatencyOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeInstanceLatencyRequest&, const DescribeInstanceLatencyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceLatencyAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceNewConnectionsResult> DescribeInstanceNewConnectionsOutcome;
			typedef std::future<DescribeInstanceNewConnectionsOutcome> DescribeInstanceNewConnectionsOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeInstanceNewConnectionsRequest&, const DescribeInstanceNewConnectionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceNewConnectionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstancePacketsResult> DescribeInstancePacketsOutcome;
			typedef std::future<DescribeInstancePacketsOutcome> DescribeInstancePacketsOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeInstancePacketsRequest&, const DescribeInstancePacketsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancePacketsAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceQpsResult> DescribeInstanceQpsOutcome;
			typedef std::future<DescribeInstanceQpsOutcome> DescribeInstanceQpsOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeInstanceQpsRequest&, const DescribeInstanceQpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceQpsAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceSlbConnectResult> DescribeInstanceSlbConnectOutcome;
			typedef std::future<DescribeInstanceSlbConnectOutcome> DescribeInstanceSlbConnectOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeInstanceSlbConnectRequest&, const DescribeInstanceSlbConnectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceSlbConnectAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceTrafficResult> DescribeInstanceTrafficOutcome;
			typedef std::future<DescribeInstanceTrafficOutcome> DescribeInstanceTrafficOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeInstanceTrafficRequest&, const DescribeInstanceTrafficOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceTrafficAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstancesResult> DescribeInstancesOutcome;
			typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeInstancesRequest&, const DescribeInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeIpControlPolicyItemsResult> DescribeIpControlPolicyItemsOutcome;
			typedef std::future<DescribeIpControlPolicyItemsOutcome> DescribeIpControlPolicyItemsOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeIpControlPolicyItemsRequest&, const DescribeIpControlPolicyItemsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpControlPolicyItemsAsyncHandler;
			typedef Outcome<Error, Model::DescribeIpControlsResult> DescribeIpControlsOutcome;
			typedef std::future<DescribeIpControlsOutcome> DescribeIpControlsOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeIpControlsRequest&, const DescribeIpControlsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpControlsAsyncHandler;
			typedef Outcome<Error, Model::DescribeLogConfigResult> DescribeLogConfigOutcome;
			typedef std::future<DescribeLogConfigOutcome> DescribeLogConfigOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeLogConfigRequest&, const DescribeLogConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeMarketRemainsQuotaResult> DescribeMarketRemainsQuotaOutcome;
			typedef std::future<DescribeMarketRemainsQuotaOutcome> DescribeMarketRemainsQuotaOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeMarketRemainsQuotaRequest&, const DescribeMarketRemainsQuotaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMarketRemainsQuotaAsyncHandler;
			typedef Outcome<Error, Model::DescribeModelsResult> DescribeModelsOutcome;
			typedef std::future<DescribeModelsOutcome> DescribeModelsOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeModelsRequest&, const DescribeModelsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelsAsyncHandler;
			typedef Outcome<Error, Model::DescribePluginApisResult> DescribePluginApisOutcome;
			typedef std::future<DescribePluginApisOutcome> DescribePluginApisOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribePluginApisRequest&, const DescribePluginApisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePluginApisAsyncHandler;
			typedef Outcome<Error, Model::DescribePluginSchemasResult> DescribePluginSchemasOutcome;
			typedef std::future<DescribePluginSchemasOutcome> DescribePluginSchemasOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribePluginSchemasRequest&, const DescribePluginSchemasOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePluginSchemasAsyncHandler;
			typedef Outcome<Error, Model::DescribePluginTemplatesResult> DescribePluginTemplatesOutcome;
			typedef std::future<DescribePluginTemplatesOutcome> DescribePluginTemplatesOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribePluginTemplatesRequest&, const DescribePluginTemplatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePluginTemplatesAsyncHandler;
			typedef Outcome<Error, Model::DescribePluginsResult> DescribePluginsOutcome;
			typedef std::future<DescribePluginsOutcome> DescribePluginsOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribePluginsRequest&, const DescribePluginsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePluginsAsyncHandler;
			typedef Outcome<Error, Model::DescribePluginsByApiResult> DescribePluginsByApiOutcome;
			typedef std::future<DescribePluginsByApiOutcome> DescribePluginsByApiOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribePluginsByApiRequest&, const DescribePluginsByApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePluginsByApiAsyncHandler;
			typedef Outcome<Error, Model::DescribePurchasedApiGroupResult> DescribePurchasedApiGroupOutcome;
			typedef std::future<DescribePurchasedApiGroupOutcome> DescribePurchasedApiGroupOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribePurchasedApiGroupRequest&, const DescribePurchasedApiGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePurchasedApiGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribePurchasedApiGroupsResult> DescribePurchasedApiGroupsOutcome;
			typedef std::future<DescribePurchasedApiGroupsOutcome> DescribePurchasedApiGroupsOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribePurchasedApiGroupsRequest&, const DescribePurchasedApiGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePurchasedApiGroupsAsyncHandler;
			typedef Outcome<Error, Model::DescribePurchasedApisResult> DescribePurchasedApisOutcome;
			typedef std::future<DescribePurchasedApisOutcome> DescribePurchasedApisOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribePurchasedApisRequest&, const DescribePurchasedApisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePurchasedApisAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSignaturesResult> DescribeSignaturesOutcome;
			typedef std::future<DescribeSignaturesOutcome> DescribeSignaturesOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeSignaturesRequest&, const DescribeSignaturesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSignaturesAsyncHandler;
			typedef Outcome<Error, Model::DescribeSignaturesByApiResult> DescribeSignaturesByApiOutcome;
			typedef std::future<DescribeSignaturesByApiOutcome> DescribeSignaturesByApiOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeSignaturesByApiRequest&, const DescribeSignaturesByApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSignaturesByApiAsyncHandler;
			typedef Outcome<Error, Model::DescribeSummaryDataResult> DescribeSummaryDataOutcome;
			typedef std::future<DescribeSummaryDataOutcome> DescribeSummaryDataOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeSummaryDataRequest&, const DescribeSummaryDataOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSummaryDataAsyncHandler;
			typedef Outcome<Error, Model::DescribeSystemParametersResult> DescribeSystemParametersOutcome;
			typedef std::future<DescribeSystemParametersOutcome> DescribeSystemParametersOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeSystemParametersRequest&, const DescribeSystemParametersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSystemParametersAsyncHandler;
			typedef Outcome<Error, Model::DescribeTrafficControlsResult> DescribeTrafficControlsOutcome;
			typedef std::future<DescribeTrafficControlsOutcome> DescribeTrafficControlsOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeTrafficControlsRequest&, const DescribeTrafficControlsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrafficControlsAsyncHandler;
			typedef Outcome<Error, Model::DescribeTrafficControlsByApiResult> DescribeTrafficControlsByApiOutcome;
			typedef std::future<DescribeTrafficControlsByApiOutcome> DescribeTrafficControlsByApiOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeTrafficControlsByApiRequest&, const DescribeTrafficControlsByApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrafficControlsByApiAsyncHandler;
			typedef Outcome<Error, Model::DescribeUpdateBackendTaskResult> DescribeUpdateBackendTaskOutcome;
			typedef std::future<DescribeUpdateBackendTaskOutcome> DescribeUpdateBackendTaskOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeUpdateBackendTaskRequest&, const DescribeUpdateBackendTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUpdateBackendTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeUpdateVpcInfoTaskResult> DescribeUpdateVpcInfoTaskOutcome;
			typedef std::future<DescribeUpdateVpcInfoTaskOutcome> DescribeUpdateVpcInfoTaskOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeUpdateVpcInfoTaskRequest&, const DescribeUpdateVpcInfoTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUpdateVpcInfoTaskAsyncHandler;
			typedef Outcome<Error, Model::DescribeVpcAccessesResult> DescribeVpcAccessesOutcome;
			typedef std::future<DescribeVpcAccessesOutcome> DescribeVpcAccessesOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeVpcAccessesRequest&, const DescribeVpcAccessesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcAccessesAsyncHandler;
			typedef Outcome<Error, Model::DescribeZonesResult> DescribeZonesOutcome;
			typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DescribeZonesRequest&, const DescribeZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
			typedef Outcome<Error, Model::DetachApiProductResult> DetachApiProductOutcome;
			typedef std::future<DetachApiProductOutcome> DetachApiProductOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DetachApiProductRequest&, const DetachApiProductOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachApiProductAsyncHandler;
			typedef Outcome<Error, Model::DetachPluginResult> DetachPluginOutcome;
			typedef std::future<DetachPluginOutcome> DetachPluginOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DetachPluginRequest&, const DetachPluginOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachPluginAsyncHandler;
			typedef Outcome<Error, Model::DisableInstanceAccessControlResult> DisableInstanceAccessControlOutcome;
			typedef std::future<DisableInstanceAccessControlOutcome> DisableInstanceAccessControlOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DisableInstanceAccessControlRequest&, const DisableInstanceAccessControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableInstanceAccessControlAsyncHandler;
			typedef Outcome<Error, Model::DryRunSwaggerResult> DryRunSwaggerOutcome;
			typedef std::future<DryRunSwaggerOutcome> DryRunSwaggerOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::DryRunSwaggerRequest&, const DryRunSwaggerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DryRunSwaggerAsyncHandler;
			typedef Outcome<Error, Model::EnableInstanceAccessControlResult> EnableInstanceAccessControlOutcome;
			typedef std::future<EnableInstanceAccessControlOutcome> EnableInstanceAccessControlOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::EnableInstanceAccessControlRequest&, const EnableInstanceAccessControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableInstanceAccessControlAsyncHandler;
			typedef Outcome<Error, Model::ImportOASResult> ImportOASOutcome;
			typedef std::future<ImportOASOutcome> ImportOASOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::ImportOASRequest&, const ImportOASOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportOASAsyncHandler;
			typedef Outcome<Error, Model::ImportSwaggerResult> ImportSwaggerOutcome;
			typedef std::future<ImportSwaggerOutcome> ImportSwaggerOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::ImportSwaggerRequest&, const ImportSwaggerOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImportSwaggerAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ModifyApiResult> ModifyApiOutcome;
			typedef std::future<ModifyApiOutcome> ModifyApiOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::ModifyApiRequest&, const ModifyApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApiAsyncHandler;
			typedef Outcome<Error, Model::ModifyApiConfigurationResult> ModifyApiConfigurationOutcome;
			typedef std::future<ModifyApiConfigurationOutcome> ModifyApiConfigurationOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::ModifyApiConfigurationRequest&, const ModifyApiConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApiConfigurationAsyncHandler;
			typedef Outcome<Error, Model::ModifyApiGroupResult> ModifyApiGroupOutcome;
			typedef std::future<ModifyApiGroupOutcome> ModifyApiGroupOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::ModifyApiGroupRequest&, const ModifyApiGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApiGroupAsyncHandler;
			typedef Outcome<Error, Model::ModifyApiGroupVpcWhitelistResult> ModifyApiGroupVpcWhitelistOutcome;
			typedef std::future<ModifyApiGroupVpcWhitelistOutcome> ModifyApiGroupVpcWhitelistOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::ModifyApiGroupVpcWhitelistRequest&, const ModifyApiGroupVpcWhitelistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApiGroupVpcWhitelistAsyncHandler;
			typedef Outcome<Error, Model::ModifyAppResult> ModifyAppOutcome;
			typedef std::future<ModifyAppOutcome> ModifyAppOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::ModifyAppRequest&, const ModifyAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAppAsyncHandler;
			typedef Outcome<Error, Model::ModifyBackendResult> ModifyBackendOutcome;
			typedef std::future<ModifyBackendOutcome> ModifyBackendOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::ModifyBackendRequest&, const ModifyBackendOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackendAsyncHandler;
			typedef Outcome<Error, Model::ModifyBackendModelResult> ModifyBackendModelOutcome;
			typedef std::future<ModifyBackendModelOutcome> ModifyBackendModelOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::ModifyBackendModelRequest&, const ModifyBackendModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackendModelAsyncHandler;
			typedef Outcome<Error, Model::ModifyDatasetResult> ModifyDatasetOutcome;
			typedef std::future<ModifyDatasetOutcome> ModifyDatasetOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::ModifyDatasetRequest&, const ModifyDatasetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatasetAsyncHandler;
			typedef Outcome<Error, Model::ModifyDatasetItemResult> ModifyDatasetItemOutcome;
			typedef std::future<ModifyDatasetItemOutcome> ModifyDatasetItemOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::ModifyDatasetItemRequest&, const ModifyDatasetItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDatasetItemAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceSpecResult> ModifyInstanceSpecOutcome;
			typedef std::future<ModifyInstanceSpecOutcome> ModifyInstanceSpecOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::ModifyInstanceSpecRequest&, const ModifyInstanceSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceSpecAsyncHandler;
			typedef Outcome<Error, Model::ModifyIntranetDomainPolicyResult> ModifyIntranetDomainPolicyOutcome;
			typedef std::future<ModifyIntranetDomainPolicyOutcome> ModifyIntranetDomainPolicyOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::ModifyIntranetDomainPolicyRequest&, const ModifyIntranetDomainPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIntranetDomainPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifyIpControlResult> ModifyIpControlOutcome;
			typedef std::future<ModifyIpControlOutcome> ModifyIpControlOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::ModifyIpControlRequest&, const ModifyIpControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIpControlAsyncHandler;
			typedef Outcome<Error, Model::ModifyIpControlPolicyItemResult> ModifyIpControlPolicyItemOutcome;
			typedef std::future<ModifyIpControlPolicyItemOutcome> ModifyIpControlPolicyItemOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::ModifyIpControlPolicyItemRequest&, const ModifyIpControlPolicyItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyIpControlPolicyItemAsyncHandler;
			typedef Outcome<Error, Model::ModifyLogConfigResult> ModifyLogConfigOutcome;
			typedef std::future<ModifyLogConfigOutcome> ModifyLogConfigOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::ModifyLogConfigRequest&, const ModifyLogConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLogConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyModelResult> ModifyModelOutcome;
			typedef std::future<ModifyModelOutcome> ModifyModelOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::ModifyModelRequest&, const ModifyModelOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModelAsyncHandler;
			typedef Outcome<Error, Model::ModifyPluginResult> ModifyPluginOutcome;
			typedef std::future<ModifyPluginOutcome> ModifyPluginOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::ModifyPluginRequest&, const ModifyPluginOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPluginAsyncHandler;
			typedef Outcome<Error, Model::ModifySignatureResult> ModifySignatureOutcome;
			typedef std::future<ModifySignatureOutcome> ModifySignatureOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::ModifySignatureRequest&, const ModifySignatureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySignatureAsyncHandler;
			typedef Outcome<Error, Model::ModifyTrafficControlResult> ModifyTrafficControlOutcome;
			typedef std::future<ModifyTrafficControlOutcome> ModifyTrafficControlOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::ModifyTrafficControlRequest&, const ModifyTrafficControlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTrafficControlAsyncHandler;
			typedef Outcome<Error, Model::ModifyVpcAccessAndUpdateApisResult> ModifyVpcAccessAndUpdateApisOutcome;
			typedef std::future<ModifyVpcAccessAndUpdateApisOutcome> ModifyVpcAccessAndUpdateApisOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::ModifyVpcAccessAndUpdateApisRequest&, const ModifyVpcAccessAndUpdateApisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVpcAccessAndUpdateApisAsyncHandler;
			typedef Outcome<Error, Model::OpenApiGatewayServiceResult> OpenApiGatewayServiceOutcome;
			typedef std::future<OpenApiGatewayServiceOutcome> OpenApiGatewayServiceOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::OpenApiGatewayServiceRequest&, const OpenApiGatewayServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenApiGatewayServiceAsyncHandler;
			typedef Outcome<Error, Model::QueryRequestLogsResult> QueryRequestLogsOutcome;
			typedef std::future<QueryRequestLogsOutcome> QueryRequestLogsOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::QueryRequestLogsRequest&, const QueryRequestLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> QueryRequestLogsAsyncHandler;
			typedef Outcome<Error, Model::ReactivateDomainResult> ReactivateDomainOutcome;
			typedef std::future<ReactivateDomainOutcome> ReactivateDomainOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::ReactivateDomainRequest&, const ReactivateDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReactivateDomainAsyncHandler;
			typedef Outcome<Error, Model::RemoveAccessControlListEntryResult> RemoveAccessControlListEntryOutcome;
			typedef std::future<RemoveAccessControlListEntryOutcome> RemoveAccessControlListEntryOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::RemoveAccessControlListEntryRequest&, const RemoveAccessControlListEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveAccessControlListEntryAsyncHandler;
			typedef Outcome<Error, Model::RemoveApiProductsAuthoritiesResult> RemoveApiProductsAuthoritiesOutcome;
			typedef std::future<RemoveApiProductsAuthoritiesOutcome> RemoveApiProductsAuthoritiesOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::RemoveApiProductsAuthoritiesRequest&, const RemoveApiProductsAuthoritiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveApiProductsAuthoritiesAsyncHandler;
			typedef Outcome<Error, Model::RemoveApisAuthoritiesResult> RemoveApisAuthoritiesOutcome;
			typedef std::future<RemoveApisAuthoritiesOutcome> RemoveApisAuthoritiesOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::RemoveApisAuthoritiesRequest&, const RemoveApisAuthoritiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveApisAuthoritiesAsyncHandler;
			typedef Outcome<Error, Model::RemoveAppsAuthoritiesResult> RemoveAppsAuthoritiesOutcome;
			typedef std::future<RemoveAppsAuthoritiesOutcome> RemoveAppsAuthoritiesOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::RemoveAppsAuthoritiesRequest&, const RemoveAppsAuthoritiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveAppsAuthoritiesAsyncHandler;
			typedef Outcome<Error, Model::RemoveIpControlApisResult> RemoveIpControlApisOutcome;
			typedef std::future<RemoveIpControlApisOutcome> RemoveIpControlApisOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::RemoveIpControlApisRequest&, const RemoveIpControlApisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveIpControlApisAsyncHandler;
			typedef Outcome<Error, Model::RemoveIpControlPolicyItemResult> RemoveIpControlPolicyItemOutcome;
			typedef std::future<RemoveIpControlPolicyItemOutcome> RemoveIpControlPolicyItemOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::RemoveIpControlPolicyItemRequest&, const RemoveIpControlPolicyItemOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveIpControlPolicyItemAsyncHandler;
			typedef Outcome<Error, Model::RemoveSignatureApisResult> RemoveSignatureApisOutcome;
			typedef std::future<RemoveSignatureApisOutcome> RemoveSignatureApisOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::RemoveSignatureApisRequest&, const RemoveSignatureApisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveSignatureApisAsyncHandler;
			typedef Outcome<Error, Model::RemoveTrafficControlApisResult> RemoveTrafficControlApisOutcome;
			typedef std::future<RemoveTrafficControlApisOutcome> RemoveTrafficControlApisOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::RemoveTrafficControlApisRequest&, const RemoveTrafficControlApisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveTrafficControlApisAsyncHandler;
			typedef Outcome<Error, Model::RemoveVpcAccessResult> RemoveVpcAccessOutcome;
			typedef std::future<RemoveVpcAccessOutcome> RemoveVpcAccessOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::RemoveVpcAccessRequest&, const RemoveVpcAccessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveVpcAccessAsyncHandler;
			typedef Outcome<Error, Model::RemoveVpcAccessAndAbolishApisResult> RemoveVpcAccessAndAbolishApisOutcome;
			typedef std::future<RemoveVpcAccessAndAbolishApisOutcome> RemoveVpcAccessAndAbolishApisOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::RemoveVpcAccessAndAbolishApisRequest&, const RemoveVpcAccessAndAbolishApisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveVpcAccessAndAbolishApisAsyncHandler;
			typedef Outcome<Error, Model::ResetAppCodeResult> ResetAppCodeOutcome;
			typedef std::future<ResetAppCodeOutcome> ResetAppCodeOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::ResetAppCodeRequest&, const ResetAppCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetAppCodeAsyncHandler;
			typedef Outcome<Error, Model::ResetAppSecretResult> ResetAppSecretOutcome;
			typedef std::future<ResetAppSecretOutcome> ResetAppSecretOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::ResetAppSecretRequest&, const ResetAppSecretOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetAppSecretAsyncHandler;
			typedef Outcome<Error, Model::SdkGenerateByAppResult> SdkGenerateByAppOutcome;
			typedef std::future<SdkGenerateByAppOutcome> SdkGenerateByAppOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::SdkGenerateByAppRequest&, const SdkGenerateByAppOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SdkGenerateByAppAsyncHandler;
			typedef Outcome<Error, Model::SdkGenerateByAppForRegionResult> SdkGenerateByAppForRegionOutcome;
			typedef std::future<SdkGenerateByAppForRegionOutcome> SdkGenerateByAppForRegionOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::SdkGenerateByAppForRegionRequest&, const SdkGenerateByAppForRegionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SdkGenerateByAppForRegionAsyncHandler;
			typedef Outcome<Error, Model::SdkGenerateByGroupResult> SdkGenerateByGroupOutcome;
			typedef std::future<SdkGenerateByGroupOutcome> SdkGenerateByGroupOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::SdkGenerateByGroupRequest&, const SdkGenerateByGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SdkGenerateByGroupAsyncHandler;
			typedef Outcome<Error, Model::SetAccessControlListAttributeResult> SetAccessControlListAttributeOutcome;
			typedef std::future<SetAccessControlListAttributeOutcome> SetAccessControlListAttributeOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::SetAccessControlListAttributeRequest&, const SetAccessControlListAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetAccessControlListAttributeAsyncHandler;
			typedef Outcome<Error, Model::SetApiProductsAuthoritiesResult> SetApiProductsAuthoritiesOutcome;
			typedef std::future<SetApiProductsAuthoritiesOutcome> SetApiProductsAuthoritiesOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::SetApiProductsAuthoritiesRequest&, const SetApiProductsAuthoritiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetApiProductsAuthoritiesAsyncHandler;
			typedef Outcome<Error, Model::SetApisAuthoritiesResult> SetApisAuthoritiesOutcome;
			typedef std::future<SetApisAuthoritiesOutcome> SetApisAuthoritiesOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::SetApisAuthoritiesRequest&, const SetApisAuthoritiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetApisAuthoritiesAsyncHandler;
			typedef Outcome<Error, Model::SetAppsAuthoritiesResult> SetAppsAuthoritiesOutcome;
			typedef std::future<SetAppsAuthoritiesOutcome> SetAppsAuthoritiesOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::SetAppsAuthoritiesRequest&, const SetAppsAuthoritiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetAppsAuthoritiesAsyncHandler;
			typedef Outcome<Error, Model::SetDomainResult> SetDomainOutcome;
			typedef std::future<SetDomainOutcome> SetDomainOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::SetDomainRequest&, const SetDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDomainAsyncHandler;
			typedef Outcome<Error, Model::SetDomainCertificateResult> SetDomainCertificateOutcome;
			typedef std::future<SetDomainCertificateOutcome> SetDomainCertificateOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::SetDomainCertificateRequest&, const SetDomainCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDomainCertificateAsyncHandler;
			typedef Outcome<Error, Model::SetDomainWebSocketStatusResult> SetDomainWebSocketStatusOutcome;
			typedef std::future<SetDomainWebSocketStatusOutcome> SetDomainWebSocketStatusOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::SetDomainWebSocketStatusRequest&, const SetDomainWebSocketStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDomainWebSocketStatusAsyncHandler;
			typedef Outcome<Error, Model::SetGroupAuthAppCodeResult> SetGroupAuthAppCodeOutcome;
			typedef std::future<SetGroupAuthAppCodeOutcome> SetGroupAuthAppCodeOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::SetGroupAuthAppCodeRequest&, const SetGroupAuthAppCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetGroupAuthAppCodeAsyncHandler;
			typedef Outcome<Error, Model::SetIpControlApisResult> SetIpControlApisOutcome;
			typedef std::future<SetIpControlApisOutcome> SetIpControlApisOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::SetIpControlApisRequest&, const SetIpControlApisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetIpControlApisAsyncHandler;
			typedef Outcome<Error, Model::SetSignatureApisResult> SetSignatureApisOutcome;
			typedef std::future<SetSignatureApisOutcome> SetSignatureApisOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::SetSignatureApisRequest&, const SetSignatureApisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetSignatureApisAsyncHandler;
			typedef Outcome<Error, Model::SetTrafficControlApisResult> SetTrafficControlApisOutcome;
			typedef std::future<SetTrafficControlApisOutcome> SetTrafficControlApisOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::SetTrafficControlApisRequest&, const SetTrafficControlApisOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetTrafficControlApisAsyncHandler;
			typedef Outcome<Error, Model::SetVpcAccessResult> SetVpcAccessOutcome;
			typedef std::future<SetVpcAccessOutcome> SetVpcAccessOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::SetVpcAccessRequest&, const SetVpcAccessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetVpcAccessAsyncHandler;
			typedef Outcome<Error, Model::SetWildcardDomainPatternsResult> SetWildcardDomainPatternsOutcome;
			typedef std::future<SetWildcardDomainPatternsOutcome> SetWildcardDomainPatternsOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::SetWildcardDomainPatternsRequest&, const SetWildcardDomainPatternsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetWildcardDomainPatternsAsyncHandler;
			typedef Outcome<Error, Model::SwitchApiResult> SwitchApiOutcome;
			typedef std::future<SwitchApiOutcome> SwitchApiOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::SwitchApiRequest&, const SwitchApiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchApiAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ValidateVpcConnectivityResult> ValidateVpcConnectivityOutcome;
			typedef std::future<ValidateVpcConnectivityOutcome> ValidateVpcConnectivityOutcomeCallable;
			typedef std::function<void(const CloudAPIClient*, const Model::ValidateVpcConnectivityRequest&, const ValidateVpcConnectivityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ValidateVpcConnectivityAsyncHandler;

			CloudAPIClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CloudAPIClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CloudAPIClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CloudAPIClient();
			AbolishApiOutcome abolishApi(const Model::AbolishApiRequest &request)const;
			void abolishApiAsync(const Model::AbolishApiRequest& request, const AbolishApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AbolishApiOutcomeCallable abolishApiCallable(const Model::AbolishApiRequest& request) const;
			AddAccessControlListEntryOutcome addAccessControlListEntry(const Model::AddAccessControlListEntryRequest &request)const;
			void addAccessControlListEntryAsync(const Model::AddAccessControlListEntryRequest& request, const AddAccessControlListEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddAccessControlListEntryOutcomeCallable addAccessControlListEntryCallable(const Model::AddAccessControlListEntryRequest& request) const;
			AddIpControlPolicyItemOutcome addIpControlPolicyItem(const Model::AddIpControlPolicyItemRequest &request)const;
			void addIpControlPolicyItemAsync(const Model::AddIpControlPolicyItemRequest& request, const AddIpControlPolicyItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddIpControlPolicyItemOutcomeCallable addIpControlPolicyItemCallable(const Model::AddIpControlPolicyItemRequest& request) const;
			AddTrafficSpecialControlOutcome addTrafficSpecialControl(const Model::AddTrafficSpecialControlRequest &request)const;
			void addTrafficSpecialControlAsync(const Model::AddTrafficSpecialControlRequest& request, const AddTrafficSpecialControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddTrafficSpecialControlOutcomeCallable addTrafficSpecialControlCallable(const Model::AddTrafficSpecialControlRequest& request) const;
			AttachApiProductOutcome attachApiProduct(const Model::AttachApiProductRequest &request)const;
			void attachApiProductAsync(const Model::AttachApiProductRequest& request, const AttachApiProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachApiProductOutcomeCallable attachApiProductCallable(const Model::AttachApiProductRequest& request) const;
			AttachPluginOutcome attachPlugin(const Model::AttachPluginRequest &request)const;
			void attachPluginAsync(const Model::AttachPluginRequest& request, const AttachPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachPluginOutcomeCallable attachPluginCallable(const Model::AttachPluginRequest& request) const;
			BatchAbolishApisOutcome batchAbolishApis(const Model::BatchAbolishApisRequest &request)const;
			void batchAbolishApisAsync(const Model::BatchAbolishApisRequest& request, const BatchAbolishApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchAbolishApisOutcomeCallable batchAbolishApisCallable(const Model::BatchAbolishApisRequest& request) const;
			BatchDeployApisOutcome batchDeployApis(const Model::BatchDeployApisRequest &request)const;
			void batchDeployApisAsync(const Model::BatchDeployApisRequest& request, const BatchDeployApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchDeployApisOutcomeCallable batchDeployApisCallable(const Model::BatchDeployApisRequest& request) const;
			CreateAccessControlListOutcome createAccessControlList(const Model::CreateAccessControlListRequest &request)const;
			void createAccessControlListAsync(const Model::CreateAccessControlListRequest& request, const CreateAccessControlListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAccessControlListOutcomeCallable createAccessControlListCallable(const Model::CreateAccessControlListRequest& request) const;
			CreateApiOutcome createApi(const Model::CreateApiRequest &request)const;
			void createApiAsync(const Model::CreateApiRequest& request, const CreateApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateApiOutcomeCallable createApiCallable(const Model::CreateApiRequest& request) const;
			CreateApiGroupOutcome createApiGroup(const Model::CreateApiGroupRequest &request)const;
			void createApiGroupAsync(const Model::CreateApiGroupRequest& request, const CreateApiGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateApiGroupOutcomeCallable createApiGroupCallable(const Model::CreateApiGroupRequest& request) const;
			CreateApiStageVariableOutcome createApiStageVariable(const Model::CreateApiStageVariableRequest &request)const;
			void createApiStageVariableAsync(const Model::CreateApiStageVariableRequest& request, const CreateApiStageVariableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateApiStageVariableOutcomeCallable createApiStageVariableCallable(const Model::CreateApiStageVariableRequest& request) const;
			CreateAppOutcome createApp(const Model::CreateAppRequest &request)const;
			void createAppAsync(const Model::CreateAppRequest& request, const CreateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAppOutcomeCallable createAppCallable(const Model::CreateAppRequest& request) const;
			CreateBackendOutcome createBackend(const Model::CreateBackendRequest &request)const;
			void createBackendAsync(const Model::CreateBackendRequest& request, const CreateBackendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBackendOutcomeCallable createBackendCallable(const Model::CreateBackendRequest& request) const;
			CreateBackendModelOutcome createBackendModel(const Model::CreateBackendModelRequest &request)const;
			void createBackendModelAsync(const Model::CreateBackendModelRequest& request, const CreateBackendModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateBackendModelOutcomeCallable createBackendModelCallable(const Model::CreateBackendModelRequest& request) const;
			CreateDatasetOutcome createDataset(const Model::CreateDatasetRequest &request)const;
			void createDatasetAsync(const Model::CreateDatasetRequest& request, const CreateDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDatasetOutcomeCallable createDatasetCallable(const Model::CreateDatasetRequest& request) const;
			CreateDatasetItemOutcome createDatasetItem(const Model::CreateDatasetItemRequest &request)const;
			void createDatasetItemAsync(const Model::CreateDatasetItemRequest& request, const CreateDatasetItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDatasetItemOutcomeCallable createDatasetItemCallable(const Model::CreateDatasetItemRequest& request) const;
			CreateInstanceOutcome createInstance(const Model::CreateInstanceRequest &request)const;
			void createInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateInstanceOutcomeCallable createInstanceCallable(const Model::CreateInstanceRequest& request) const;
			CreateIntranetDomainOutcome createIntranetDomain(const Model::CreateIntranetDomainRequest &request)const;
			void createIntranetDomainAsync(const Model::CreateIntranetDomainRequest& request, const CreateIntranetDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateIntranetDomainOutcomeCallable createIntranetDomainCallable(const Model::CreateIntranetDomainRequest& request) const;
			CreateIpControlOutcome createIpControl(const Model::CreateIpControlRequest &request)const;
			void createIpControlAsync(const Model::CreateIpControlRequest& request, const CreateIpControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateIpControlOutcomeCallable createIpControlCallable(const Model::CreateIpControlRequest& request) const;
			CreateLogConfigOutcome createLogConfig(const Model::CreateLogConfigRequest &request)const;
			void createLogConfigAsync(const Model::CreateLogConfigRequest& request, const CreateLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLogConfigOutcomeCallable createLogConfigCallable(const Model::CreateLogConfigRequest& request) const;
			CreateModelOutcome createModel(const Model::CreateModelRequest &request)const;
			void createModelAsync(const Model::CreateModelRequest& request, const CreateModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateModelOutcomeCallable createModelCallable(const Model::CreateModelRequest& request) const;
			CreateMonitorGroupOutcome createMonitorGroup(const Model::CreateMonitorGroupRequest &request)const;
			void createMonitorGroupAsync(const Model::CreateMonitorGroupRequest& request, const CreateMonitorGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateMonitorGroupOutcomeCallable createMonitorGroupCallable(const Model::CreateMonitorGroupRequest& request) const;
			CreatePluginOutcome createPlugin(const Model::CreatePluginRequest &request)const;
			void createPluginAsync(const Model::CreatePluginRequest& request, const CreatePluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePluginOutcomeCallable createPluginCallable(const Model::CreatePluginRequest& request) const;
			CreateSignatureOutcome createSignature(const Model::CreateSignatureRequest &request)const;
			void createSignatureAsync(const Model::CreateSignatureRequest& request, const CreateSignatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSignatureOutcomeCallable createSignatureCallable(const Model::CreateSignatureRequest& request) const;
			CreateTrafficControlOutcome createTrafficControl(const Model::CreateTrafficControlRequest &request)const;
			void createTrafficControlAsync(const Model::CreateTrafficControlRequest& request, const CreateTrafficControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTrafficControlOutcomeCallable createTrafficControlCallable(const Model::CreateTrafficControlRequest& request) const;
			DeleteAccessControlListOutcome deleteAccessControlList(const Model::DeleteAccessControlListRequest &request)const;
			void deleteAccessControlListAsync(const Model::DeleteAccessControlListRequest& request, const DeleteAccessControlListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAccessControlListOutcomeCallable deleteAccessControlListCallable(const Model::DeleteAccessControlListRequest& request) const;
			DeleteAllTrafficSpecialControlOutcome deleteAllTrafficSpecialControl(const Model::DeleteAllTrafficSpecialControlRequest &request)const;
			void deleteAllTrafficSpecialControlAsync(const Model::DeleteAllTrafficSpecialControlRequest& request, const DeleteAllTrafficSpecialControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAllTrafficSpecialControlOutcomeCallable deleteAllTrafficSpecialControlCallable(const Model::DeleteAllTrafficSpecialControlRequest& request) const;
			DeleteApiOutcome deleteApi(const Model::DeleteApiRequest &request)const;
			void deleteApiAsync(const Model::DeleteApiRequest& request, const DeleteApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteApiOutcomeCallable deleteApiCallable(const Model::DeleteApiRequest& request) const;
			DeleteApiGroupOutcome deleteApiGroup(const Model::DeleteApiGroupRequest &request)const;
			void deleteApiGroupAsync(const Model::DeleteApiGroupRequest& request, const DeleteApiGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteApiGroupOutcomeCallable deleteApiGroupCallable(const Model::DeleteApiGroupRequest& request) const;
			DeleteApiProductOutcome deleteApiProduct(const Model::DeleteApiProductRequest &request)const;
			void deleteApiProductAsync(const Model::DeleteApiProductRequest& request, const DeleteApiProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteApiProductOutcomeCallable deleteApiProductCallable(const Model::DeleteApiProductRequest& request) const;
			DeleteApiStageVariableOutcome deleteApiStageVariable(const Model::DeleteApiStageVariableRequest &request)const;
			void deleteApiStageVariableAsync(const Model::DeleteApiStageVariableRequest& request, const DeleteApiStageVariableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteApiStageVariableOutcomeCallable deleteApiStageVariableCallable(const Model::DeleteApiStageVariableRequest& request) const;
			DeleteAppOutcome deleteApp(const Model::DeleteAppRequest &request)const;
			void deleteAppAsync(const Model::DeleteAppRequest& request, const DeleteAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAppOutcomeCallable deleteAppCallable(const Model::DeleteAppRequest& request) const;
			DeleteBackendOutcome deleteBackend(const Model::DeleteBackendRequest &request)const;
			void deleteBackendAsync(const Model::DeleteBackendRequest& request, const DeleteBackendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBackendOutcomeCallable deleteBackendCallable(const Model::DeleteBackendRequest& request) const;
			DeleteBackendModelOutcome deleteBackendModel(const Model::DeleteBackendModelRequest &request)const;
			void deleteBackendModelAsync(const Model::DeleteBackendModelRequest& request, const DeleteBackendModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteBackendModelOutcomeCallable deleteBackendModelCallable(const Model::DeleteBackendModelRequest& request) const;
			DeleteDatasetOutcome deleteDataset(const Model::DeleteDatasetRequest &request)const;
			void deleteDatasetAsync(const Model::DeleteDatasetRequest& request, const DeleteDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDatasetOutcomeCallable deleteDatasetCallable(const Model::DeleteDatasetRequest& request) const;
			DeleteDatasetItemOutcome deleteDatasetItem(const Model::DeleteDatasetItemRequest &request)const;
			void deleteDatasetItemAsync(const Model::DeleteDatasetItemRequest& request, const DeleteDatasetItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDatasetItemOutcomeCallable deleteDatasetItemCallable(const Model::DeleteDatasetItemRequest& request) const;
			DeleteDomainOutcome deleteDomain(const Model::DeleteDomainRequest &request)const;
			void deleteDomainAsync(const Model::DeleteDomainRequest& request, const DeleteDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDomainOutcomeCallable deleteDomainCallable(const Model::DeleteDomainRequest& request) const;
			DeleteDomainCertificateOutcome deleteDomainCertificate(const Model::DeleteDomainCertificateRequest &request)const;
			void deleteDomainCertificateAsync(const Model::DeleteDomainCertificateRequest& request, const DeleteDomainCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDomainCertificateOutcomeCallable deleteDomainCertificateCallable(const Model::DeleteDomainCertificateRequest& request) const;
			DeleteInstanceOutcome deleteInstance(const Model::DeleteInstanceRequest &request)const;
			void deleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteInstanceOutcomeCallable deleteInstanceCallable(const Model::DeleteInstanceRequest& request) const;
			DeleteIpControlOutcome deleteIpControl(const Model::DeleteIpControlRequest &request)const;
			void deleteIpControlAsync(const Model::DeleteIpControlRequest& request, const DeleteIpControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteIpControlOutcomeCallable deleteIpControlCallable(const Model::DeleteIpControlRequest& request) const;
			DeleteLogConfigOutcome deleteLogConfig(const Model::DeleteLogConfigRequest &request)const;
			void deleteLogConfigAsync(const Model::DeleteLogConfigRequest& request, const DeleteLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLogConfigOutcomeCallable deleteLogConfigCallable(const Model::DeleteLogConfigRequest& request) const;
			DeleteModelOutcome deleteModel(const Model::DeleteModelRequest &request)const;
			void deleteModelAsync(const Model::DeleteModelRequest& request, const DeleteModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteModelOutcomeCallable deleteModelCallable(const Model::DeleteModelRequest& request) const;
			DeleteMonitorGroupOutcome deleteMonitorGroup(const Model::DeleteMonitorGroupRequest &request)const;
			void deleteMonitorGroupAsync(const Model::DeleteMonitorGroupRequest& request, const DeleteMonitorGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteMonitorGroupOutcomeCallable deleteMonitorGroupCallable(const Model::DeleteMonitorGroupRequest& request) const;
			DeletePluginOutcome deletePlugin(const Model::DeletePluginRequest &request)const;
			void deletePluginAsync(const Model::DeletePluginRequest& request, const DeletePluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePluginOutcomeCallable deletePluginCallable(const Model::DeletePluginRequest& request) const;
			DeleteSignatureOutcome deleteSignature(const Model::DeleteSignatureRequest &request)const;
			void deleteSignatureAsync(const Model::DeleteSignatureRequest& request, const DeleteSignatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSignatureOutcomeCallable deleteSignatureCallable(const Model::DeleteSignatureRequest& request) const;
			DeleteTrafficControlOutcome deleteTrafficControl(const Model::DeleteTrafficControlRequest &request)const;
			void deleteTrafficControlAsync(const Model::DeleteTrafficControlRequest& request, const DeleteTrafficControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTrafficControlOutcomeCallable deleteTrafficControlCallable(const Model::DeleteTrafficControlRequest& request) const;
			DeleteTrafficSpecialControlOutcome deleteTrafficSpecialControl(const Model::DeleteTrafficSpecialControlRequest &request)const;
			void deleteTrafficSpecialControlAsync(const Model::DeleteTrafficSpecialControlRequest& request, const DeleteTrafficSpecialControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTrafficSpecialControlOutcomeCallable deleteTrafficSpecialControlCallable(const Model::DeleteTrafficSpecialControlRequest& request) const;
			DeployApiOutcome deployApi(const Model::DeployApiRequest &request)const;
			void deployApiAsync(const Model::DeployApiRequest& request, const DeployApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeployApiOutcomeCallable deployApiCallable(const Model::DeployApiRequest& request) const;
			DescribeAbolishApiTaskOutcome describeAbolishApiTask(const Model::DescribeAbolishApiTaskRequest &request)const;
			void describeAbolishApiTaskAsync(const Model::DescribeAbolishApiTaskRequest& request, const DescribeAbolishApiTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAbolishApiTaskOutcomeCallable describeAbolishApiTaskCallable(const Model::DescribeAbolishApiTaskRequest& request) const;
			DescribeAccessControlListAttributeOutcome describeAccessControlListAttribute(const Model::DescribeAccessControlListAttributeRequest &request)const;
			void describeAccessControlListAttributeAsync(const Model::DescribeAccessControlListAttributeRequest& request, const DescribeAccessControlListAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccessControlListAttributeOutcomeCallable describeAccessControlListAttributeCallable(const Model::DescribeAccessControlListAttributeRequest& request) const;
			DescribeAccessControlListsOutcome describeAccessControlLists(const Model::DescribeAccessControlListsRequest &request)const;
			void describeAccessControlListsAsync(const Model::DescribeAccessControlListsRequest& request, const DescribeAccessControlListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccessControlListsOutcomeCallable describeAccessControlListsCallable(const Model::DescribeAccessControlListsRequest& request) const;
			DescribeApiOutcome describeApi(const Model::DescribeApiRequest &request)const;
			void describeApiAsync(const Model::DescribeApiRequest& request, const DescribeApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApiOutcomeCallable describeApiCallable(const Model::DescribeApiRequest& request) const;
			DescribeApiDocOutcome describeApiDoc(const Model::DescribeApiDocRequest &request)const;
			void describeApiDocAsync(const Model::DescribeApiDocRequest& request, const DescribeApiDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApiDocOutcomeCallable describeApiDocCallable(const Model::DescribeApiDocRequest& request) const;
			DescribeApiGroupOutcome describeApiGroup(const Model::DescribeApiGroupRequest &request)const;
			void describeApiGroupAsync(const Model::DescribeApiGroupRequest& request, const DescribeApiGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApiGroupOutcomeCallable describeApiGroupCallable(const Model::DescribeApiGroupRequest& request) const;
			DescribeApiGroupVpcWhitelistOutcome describeApiGroupVpcWhitelist(const Model::DescribeApiGroupVpcWhitelistRequest &request)const;
			void describeApiGroupVpcWhitelistAsync(const Model::DescribeApiGroupVpcWhitelistRequest& request, const DescribeApiGroupVpcWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApiGroupVpcWhitelistOutcomeCallable describeApiGroupVpcWhitelistCallable(const Model::DescribeApiGroupVpcWhitelistRequest& request) const;
			DescribeApiGroupsOutcome describeApiGroups(const Model::DescribeApiGroupsRequest &request)const;
			void describeApiGroupsAsync(const Model::DescribeApiGroupsRequest& request, const DescribeApiGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApiGroupsOutcomeCallable describeApiGroupsCallable(const Model::DescribeApiGroupsRequest& request) const;
			DescribeApiHistoriesOutcome describeApiHistories(const Model::DescribeApiHistoriesRequest &request)const;
			void describeApiHistoriesAsync(const Model::DescribeApiHistoriesRequest& request, const DescribeApiHistoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApiHistoriesOutcomeCallable describeApiHistoriesCallable(const Model::DescribeApiHistoriesRequest& request) const;
			DescribeApiHistoryOutcome describeApiHistory(const Model::DescribeApiHistoryRequest &request)const;
			void describeApiHistoryAsync(const Model::DescribeApiHistoryRequest& request, const DescribeApiHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApiHistoryOutcomeCallable describeApiHistoryCallable(const Model::DescribeApiHistoryRequest& request) const;
			DescribeApiIpControlsOutcome describeApiIpControls(const Model::DescribeApiIpControlsRequest &request)const;
			void describeApiIpControlsAsync(const Model::DescribeApiIpControlsRequest& request, const DescribeApiIpControlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApiIpControlsOutcomeCallable describeApiIpControlsCallable(const Model::DescribeApiIpControlsRequest& request) const;
			DescribeApiLatencyDataOutcome describeApiLatencyData(const Model::DescribeApiLatencyDataRequest &request)const;
			void describeApiLatencyDataAsync(const Model::DescribeApiLatencyDataRequest& request, const DescribeApiLatencyDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApiLatencyDataOutcomeCallable describeApiLatencyDataCallable(const Model::DescribeApiLatencyDataRequest& request) const;
			DescribeApiMarketAttributesOutcome describeApiMarketAttributes(const Model::DescribeApiMarketAttributesRequest &request)const;
			void describeApiMarketAttributesAsync(const Model::DescribeApiMarketAttributesRequest& request, const DescribeApiMarketAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApiMarketAttributesOutcomeCallable describeApiMarketAttributesCallable(const Model::DescribeApiMarketAttributesRequest& request) const;
			DescribeApiProductApisOutcome describeApiProductApis(const Model::DescribeApiProductApisRequest &request)const;
			void describeApiProductApisAsync(const Model::DescribeApiProductApisRequest& request, const DescribeApiProductApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApiProductApisOutcomeCallable describeApiProductApisCallable(const Model::DescribeApiProductApisRequest& request) const;
			DescribeApiProductsByAppOutcome describeApiProductsByApp(const Model::DescribeApiProductsByAppRequest &request)const;
			void describeApiProductsByAppAsync(const Model::DescribeApiProductsByAppRequest& request, const DescribeApiProductsByAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApiProductsByAppOutcomeCallable describeApiProductsByAppCallable(const Model::DescribeApiProductsByAppRequest& request) const;
			DescribeApiQpsDataOutcome describeApiQpsData(const Model::DescribeApiQpsDataRequest &request)const;
			void describeApiQpsDataAsync(const Model::DescribeApiQpsDataRequest& request, const DescribeApiQpsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApiQpsDataOutcomeCallable describeApiQpsDataCallable(const Model::DescribeApiQpsDataRequest& request) const;
			DescribeApiSignaturesOutcome describeApiSignatures(const Model::DescribeApiSignaturesRequest &request)const;
			void describeApiSignaturesAsync(const Model::DescribeApiSignaturesRequest& request, const DescribeApiSignaturesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApiSignaturesOutcomeCallable describeApiSignaturesCallable(const Model::DescribeApiSignaturesRequest& request) const;
			DescribeApiTrafficControlsOutcome describeApiTrafficControls(const Model::DescribeApiTrafficControlsRequest &request)const;
			void describeApiTrafficControlsAsync(const Model::DescribeApiTrafficControlsRequest& request, const DescribeApiTrafficControlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApiTrafficControlsOutcomeCallable describeApiTrafficControlsCallable(const Model::DescribeApiTrafficControlsRequest& request) const;
			DescribeApiTrafficDataOutcome describeApiTrafficData(const Model::DescribeApiTrafficDataRequest &request)const;
			void describeApiTrafficDataAsync(const Model::DescribeApiTrafficDataRequest& request, const DescribeApiTrafficDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApiTrafficDataOutcomeCallable describeApiTrafficDataCallable(const Model::DescribeApiTrafficDataRequest& request) const;
			DescribeApisOutcome describeApis(const Model::DescribeApisRequest &request)const;
			void describeApisAsync(const Model::DescribeApisRequest& request, const DescribeApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApisOutcomeCallable describeApisCallable(const Model::DescribeApisRequest& request) const;
			DescribeApisByAppOutcome describeApisByApp(const Model::DescribeApisByAppRequest &request)const;
			void describeApisByAppAsync(const Model::DescribeApisByAppRequest& request, const DescribeApisByAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApisByAppOutcomeCallable describeApisByAppCallable(const Model::DescribeApisByAppRequest& request) const;
			DescribeApisByBackendOutcome describeApisByBackend(const Model::DescribeApisByBackendRequest &request)const;
			void describeApisByBackendAsync(const Model::DescribeApisByBackendRequest& request, const DescribeApisByBackendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApisByBackendOutcomeCallable describeApisByBackendCallable(const Model::DescribeApisByBackendRequest& request) const;
			DescribeApisByIpControlOutcome describeApisByIpControl(const Model::DescribeApisByIpControlRequest &request)const;
			void describeApisByIpControlAsync(const Model::DescribeApisByIpControlRequest& request, const DescribeApisByIpControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApisByIpControlOutcomeCallable describeApisByIpControlCallable(const Model::DescribeApisByIpControlRequest& request) const;
			DescribeApisBySignatureOutcome describeApisBySignature(const Model::DescribeApisBySignatureRequest &request)const;
			void describeApisBySignatureAsync(const Model::DescribeApisBySignatureRequest& request, const DescribeApisBySignatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApisBySignatureOutcomeCallable describeApisBySignatureCallable(const Model::DescribeApisBySignatureRequest& request) const;
			DescribeApisByTrafficControlOutcome describeApisByTrafficControl(const Model::DescribeApisByTrafficControlRequest &request)const;
			void describeApisByTrafficControlAsync(const Model::DescribeApisByTrafficControlRequest& request, const DescribeApisByTrafficControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApisByTrafficControlOutcomeCallable describeApisByTrafficControlCallable(const Model::DescribeApisByTrafficControlRequest& request) const;
			DescribeApisWithStageNameIntegratedByAppOutcome describeApisWithStageNameIntegratedByApp(const Model::DescribeApisWithStageNameIntegratedByAppRequest &request)const;
			void describeApisWithStageNameIntegratedByAppAsync(const Model::DescribeApisWithStageNameIntegratedByAppRequest& request, const DescribeApisWithStageNameIntegratedByAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeApisWithStageNameIntegratedByAppOutcomeCallable describeApisWithStageNameIntegratedByAppCallable(const Model::DescribeApisWithStageNameIntegratedByAppRequest& request) const;
			DescribeAppOutcome describeApp(const Model::DescribeAppRequest &request)const;
			void describeAppAsync(const Model::DescribeAppRequest& request, const DescribeAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAppOutcomeCallable describeAppCallable(const Model::DescribeAppRequest& request) const;
			DescribeAppAttributesOutcome describeAppAttributes(const Model::DescribeAppAttributesRequest &request)const;
			void describeAppAttributesAsync(const Model::DescribeAppAttributesRequest& request, const DescribeAppAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAppAttributesOutcomeCallable describeAppAttributesCallable(const Model::DescribeAppAttributesRequest& request) const;
			DescribeAppSecurityOutcome describeAppSecurity(const Model::DescribeAppSecurityRequest &request)const;
			void describeAppSecurityAsync(const Model::DescribeAppSecurityRequest& request, const DescribeAppSecurityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAppSecurityOutcomeCallable describeAppSecurityCallable(const Model::DescribeAppSecurityRequest& request) const;
			DescribeAppsOutcome describeApps(const Model::DescribeAppsRequest &request)const;
			void describeAppsAsync(const Model::DescribeAppsRequest& request, const DescribeAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAppsOutcomeCallable describeAppsCallable(const Model::DescribeAppsRequest& request) const;
			DescribeAppsByApiProductOutcome describeAppsByApiProduct(const Model::DescribeAppsByApiProductRequest &request)const;
			void describeAppsByApiProductAsync(const Model::DescribeAppsByApiProductRequest& request, const DescribeAppsByApiProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAppsByApiProductOutcomeCallable describeAppsByApiProductCallable(const Model::DescribeAppsByApiProductRequest& request) const;
			DescribeAuthorizedApisOutcome describeAuthorizedApis(const Model::DescribeAuthorizedApisRequest &request)const;
			void describeAuthorizedApisAsync(const Model::DescribeAuthorizedApisRequest& request, const DescribeAuthorizedApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAuthorizedApisOutcomeCallable describeAuthorizedApisCallable(const Model::DescribeAuthorizedApisRequest& request) const;
			DescribeAuthorizedAppsOutcome describeAuthorizedApps(const Model::DescribeAuthorizedAppsRequest &request)const;
			void describeAuthorizedAppsAsync(const Model::DescribeAuthorizedAppsRequest& request, const DescribeAuthorizedAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAuthorizedAppsOutcomeCallable describeAuthorizedAppsCallable(const Model::DescribeAuthorizedAppsRequest& request) const;
			DescribeBackendInfoOutcome describeBackendInfo(const Model::DescribeBackendInfoRequest &request)const;
			void describeBackendInfoAsync(const Model::DescribeBackendInfoRequest& request, const DescribeBackendInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackendInfoOutcomeCallable describeBackendInfoCallable(const Model::DescribeBackendInfoRequest& request) const;
			DescribeBackendListOutcome describeBackendList(const Model::DescribeBackendListRequest &request)const;
			void describeBackendListAsync(const Model::DescribeBackendListRequest& request, const DescribeBackendListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackendListOutcomeCallable describeBackendListCallable(const Model::DescribeBackendListRequest& request) const;
			DescribeDatasetInfoOutcome describeDatasetInfo(const Model::DescribeDatasetInfoRequest &request)const;
			void describeDatasetInfoAsync(const Model::DescribeDatasetInfoRequest& request, const DescribeDatasetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDatasetInfoOutcomeCallable describeDatasetInfoCallable(const Model::DescribeDatasetInfoRequest& request) const;
			DescribeDatasetItemInfoOutcome describeDatasetItemInfo(const Model::DescribeDatasetItemInfoRequest &request)const;
			void describeDatasetItemInfoAsync(const Model::DescribeDatasetItemInfoRequest& request, const DescribeDatasetItemInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDatasetItemInfoOutcomeCallable describeDatasetItemInfoCallable(const Model::DescribeDatasetItemInfoRequest& request) const;
			DescribeDatasetItemListOutcome describeDatasetItemList(const Model::DescribeDatasetItemListRequest &request)const;
			void describeDatasetItemListAsync(const Model::DescribeDatasetItemListRequest& request, const DescribeDatasetItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDatasetItemListOutcomeCallable describeDatasetItemListCallable(const Model::DescribeDatasetItemListRequest& request) const;
			DescribeDatasetListOutcome describeDatasetList(const Model::DescribeDatasetListRequest &request)const;
			void describeDatasetListAsync(const Model::DescribeDatasetListRequest& request, const DescribeDatasetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDatasetListOutcomeCallable describeDatasetListCallable(const Model::DescribeDatasetListRequest& request) const;
			DescribeDeployApiTaskOutcome describeDeployApiTask(const Model::DescribeDeployApiTaskRequest &request)const;
			void describeDeployApiTaskAsync(const Model::DescribeDeployApiTaskRequest& request, const DescribeDeployApiTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDeployApiTaskOutcomeCallable describeDeployApiTaskCallable(const Model::DescribeDeployApiTaskRequest& request) const;
			DescribeDeployedApiOutcome describeDeployedApi(const Model::DescribeDeployedApiRequest &request)const;
			void describeDeployedApiAsync(const Model::DescribeDeployedApiRequest& request, const DescribeDeployedApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDeployedApiOutcomeCallable describeDeployedApiCallable(const Model::DescribeDeployedApiRequest& request) const;
			DescribeDeployedApisOutcome describeDeployedApis(const Model::DescribeDeployedApisRequest &request)const;
			void describeDeployedApisAsync(const Model::DescribeDeployedApisRequest& request, const DescribeDeployedApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDeployedApisOutcomeCallable describeDeployedApisCallable(const Model::DescribeDeployedApisRequest& request) const;
			DescribeDomainOutcome describeDomain(const Model::DescribeDomainRequest &request)const;
			void describeDomainAsync(const Model::DescribeDomainRequest& request, const DescribeDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainOutcomeCallable describeDomainCallable(const Model::DescribeDomainRequest& request) const;
			DescribeGroupLatencyOutcome describeGroupLatency(const Model::DescribeGroupLatencyRequest &request)const;
			void describeGroupLatencyAsync(const Model::DescribeGroupLatencyRequest& request, const DescribeGroupLatencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGroupLatencyOutcomeCallable describeGroupLatencyCallable(const Model::DescribeGroupLatencyRequest& request) const;
			DescribeGroupQpsOutcome describeGroupQps(const Model::DescribeGroupQpsRequest &request)const;
			void describeGroupQpsAsync(const Model::DescribeGroupQpsRequest& request, const DescribeGroupQpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGroupQpsOutcomeCallable describeGroupQpsCallable(const Model::DescribeGroupQpsRequest& request) const;
			DescribeGroupTrafficOutcome describeGroupTraffic(const Model::DescribeGroupTrafficRequest &request)const;
			void describeGroupTrafficAsync(const Model::DescribeGroupTrafficRequest& request, const DescribeGroupTrafficAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGroupTrafficOutcomeCallable describeGroupTrafficCallable(const Model::DescribeGroupTrafficRequest& request) const;
			DescribeHistoryApisOutcome describeHistoryApis(const Model::DescribeHistoryApisRequest &request)const;
			void describeHistoryApisAsync(const Model::DescribeHistoryApisRequest& request, const DescribeHistoryApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHistoryApisOutcomeCallable describeHistoryApisCallable(const Model::DescribeHistoryApisRequest& request) const;
			DescribeImportOASTaskOutcome describeImportOASTask(const Model::DescribeImportOASTaskRequest &request)const;
			void describeImportOASTaskAsync(const Model::DescribeImportOASTaskRequest& request, const DescribeImportOASTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeImportOASTaskOutcomeCallable describeImportOASTaskCallable(const Model::DescribeImportOASTaskRequest& request) const;
			DescribeInstanceDropConnectionsOutcome describeInstanceDropConnections(const Model::DescribeInstanceDropConnectionsRequest &request)const;
			void describeInstanceDropConnectionsAsync(const Model::DescribeInstanceDropConnectionsRequest& request, const DescribeInstanceDropConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceDropConnectionsOutcomeCallable describeInstanceDropConnectionsCallable(const Model::DescribeInstanceDropConnectionsRequest& request) const;
			DescribeInstanceDropPacketOutcome describeInstanceDropPacket(const Model::DescribeInstanceDropPacketRequest &request)const;
			void describeInstanceDropPacketAsync(const Model::DescribeInstanceDropPacketRequest& request, const DescribeInstanceDropPacketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceDropPacketOutcomeCallable describeInstanceDropPacketCallable(const Model::DescribeInstanceDropPacketRequest& request) const;
			DescribeInstanceHttpCodeOutcome describeInstanceHttpCode(const Model::DescribeInstanceHttpCodeRequest &request)const;
			void describeInstanceHttpCodeAsync(const Model::DescribeInstanceHttpCodeRequest& request, const DescribeInstanceHttpCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceHttpCodeOutcomeCallable describeInstanceHttpCodeCallable(const Model::DescribeInstanceHttpCodeRequest& request) const;
			DescribeInstanceLatencyOutcome describeInstanceLatency(const Model::DescribeInstanceLatencyRequest &request)const;
			void describeInstanceLatencyAsync(const Model::DescribeInstanceLatencyRequest& request, const DescribeInstanceLatencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceLatencyOutcomeCallable describeInstanceLatencyCallable(const Model::DescribeInstanceLatencyRequest& request) const;
			DescribeInstanceNewConnectionsOutcome describeInstanceNewConnections(const Model::DescribeInstanceNewConnectionsRequest &request)const;
			void describeInstanceNewConnectionsAsync(const Model::DescribeInstanceNewConnectionsRequest& request, const DescribeInstanceNewConnectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceNewConnectionsOutcomeCallable describeInstanceNewConnectionsCallable(const Model::DescribeInstanceNewConnectionsRequest& request) const;
			DescribeInstancePacketsOutcome describeInstancePackets(const Model::DescribeInstancePacketsRequest &request)const;
			void describeInstancePacketsAsync(const Model::DescribeInstancePacketsRequest& request, const DescribeInstancePacketsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstancePacketsOutcomeCallable describeInstancePacketsCallable(const Model::DescribeInstancePacketsRequest& request) const;
			DescribeInstanceQpsOutcome describeInstanceQps(const Model::DescribeInstanceQpsRequest &request)const;
			void describeInstanceQpsAsync(const Model::DescribeInstanceQpsRequest& request, const DescribeInstanceQpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceQpsOutcomeCallable describeInstanceQpsCallable(const Model::DescribeInstanceQpsRequest& request) const;
			DescribeInstanceSlbConnectOutcome describeInstanceSlbConnect(const Model::DescribeInstanceSlbConnectRequest &request)const;
			void describeInstanceSlbConnectAsync(const Model::DescribeInstanceSlbConnectRequest& request, const DescribeInstanceSlbConnectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceSlbConnectOutcomeCallable describeInstanceSlbConnectCallable(const Model::DescribeInstanceSlbConnectRequest& request) const;
			DescribeInstanceTrafficOutcome describeInstanceTraffic(const Model::DescribeInstanceTrafficRequest &request)const;
			void describeInstanceTrafficAsync(const Model::DescribeInstanceTrafficRequest& request, const DescribeInstanceTrafficAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceTrafficOutcomeCallable describeInstanceTrafficCallable(const Model::DescribeInstanceTrafficRequest& request) const;
			DescribeInstancesOutcome describeInstances(const Model::DescribeInstancesRequest &request)const;
			void describeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstancesOutcomeCallable describeInstancesCallable(const Model::DescribeInstancesRequest& request) const;
			DescribeIpControlPolicyItemsOutcome describeIpControlPolicyItems(const Model::DescribeIpControlPolicyItemsRequest &request)const;
			void describeIpControlPolicyItemsAsync(const Model::DescribeIpControlPolicyItemsRequest& request, const DescribeIpControlPolicyItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIpControlPolicyItemsOutcomeCallable describeIpControlPolicyItemsCallable(const Model::DescribeIpControlPolicyItemsRequest& request) const;
			DescribeIpControlsOutcome describeIpControls(const Model::DescribeIpControlsRequest &request)const;
			void describeIpControlsAsync(const Model::DescribeIpControlsRequest& request, const DescribeIpControlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIpControlsOutcomeCallable describeIpControlsCallable(const Model::DescribeIpControlsRequest& request) const;
			DescribeLogConfigOutcome describeLogConfig(const Model::DescribeLogConfigRequest &request)const;
			void describeLogConfigAsync(const Model::DescribeLogConfigRequest& request, const DescribeLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLogConfigOutcomeCallable describeLogConfigCallable(const Model::DescribeLogConfigRequest& request) const;
			DescribeMarketRemainsQuotaOutcome describeMarketRemainsQuota(const Model::DescribeMarketRemainsQuotaRequest &request)const;
			void describeMarketRemainsQuotaAsync(const Model::DescribeMarketRemainsQuotaRequest& request, const DescribeMarketRemainsQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMarketRemainsQuotaOutcomeCallable describeMarketRemainsQuotaCallable(const Model::DescribeMarketRemainsQuotaRequest& request) const;
			DescribeModelsOutcome describeModels(const Model::DescribeModelsRequest &request)const;
			void describeModelsAsync(const Model::DescribeModelsRequest& request, const DescribeModelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeModelsOutcomeCallable describeModelsCallable(const Model::DescribeModelsRequest& request) const;
			DescribePluginApisOutcome describePluginApis(const Model::DescribePluginApisRequest &request)const;
			void describePluginApisAsync(const Model::DescribePluginApisRequest& request, const DescribePluginApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePluginApisOutcomeCallable describePluginApisCallable(const Model::DescribePluginApisRequest& request) const;
			DescribePluginSchemasOutcome describePluginSchemas(const Model::DescribePluginSchemasRequest &request)const;
			void describePluginSchemasAsync(const Model::DescribePluginSchemasRequest& request, const DescribePluginSchemasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePluginSchemasOutcomeCallable describePluginSchemasCallable(const Model::DescribePluginSchemasRequest& request) const;
			DescribePluginTemplatesOutcome describePluginTemplates(const Model::DescribePluginTemplatesRequest &request)const;
			void describePluginTemplatesAsync(const Model::DescribePluginTemplatesRequest& request, const DescribePluginTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePluginTemplatesOutcomeCallable describePluginTemplatesCallable(const Model::DescribePluginTemplatesRequest& request) const;
			DescribePluginsOutcome describePlugins(const Model::DescribePluginsRequest &request)const;
			void describePluginsAsync(const Model::DescribePluginsRequest& request, const DescribePluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePluginsOutcomeCallable describePluginsCallable(const Model::DescribePluginsRequest& request) const;
			DescribePluginsByApiOutcome describePluginsByApi(const Model::DescribePluginsByApiRequest &request)const;
			void describePluginsByApiAsync(const Model::DescribePluginsByApiRequest& request, const DescribePluginsByApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePluginsByApiOutcomeCallable describePluginsByApiCallable(const Model::DescribePluginsByApiRequest& request) const;
			DescribePurchasedApiGroupOutcome describePurchasedApiGroup(const Model::DescribePurchasedApiGroupRequest &request)const;
			void describePurchasedApiGroupAsync(const Model::DescribePurchasedApiGroupRequest& request, const DescribePurchasedApiGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePurchasedApiGroupOutcomeCallable describePurchasedApiGroupCallable(const Model::DescribePurchasedApiGroupRequest& request) const;
			DescribePurchasedApiGroupsOutcome describePurchasedApiGroups(const Model::DescribePurchasedApiGroupsRequest &request)const;
			void describePurchasedApiGroupsAsync(const Model::DescribePurchasedApiGroupsRequest& request, const DescribePurchasedApiGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePurchasedApiGroupsOutcomeCallable describePurchasedApiGroupsCallable(const Model::DescribePurchasedApiGroupsRequest& request) const;
			DescribePurchasedApisOutcome describePurchasedApis(const Model::DescribePurchasedApisRequest &request)const;
			void describePurchasedApisAsync(const Model::DescribePurchasedApisRequest& request, const DescribePurchasedApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePurchasedApisOutcomeCallable describePurchasedApisCallable(const Model::DescribePurchasedApisRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeSignaturesOutcome describeSignatures(const Model::DescribeSignaturesRequest &request)const;
			void describeSignaturesAsync(const Model::DescribeSignaturesRequest& request, const DescribeSignaturesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSignaturesOutcomeCallable describeSignaturesCallable(const Model::DescribeSignaturesRequest& request) const;
			DescribeSignaturesByApiOutcome describeSignaturesByApi(const Model::DescribeSignaturesByApiRequest &request)const;
			void describeSignaturesByApiAsync(const Model::DescribeSignaturesByApiRequest& request, const DescribeSignaturesByApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSignaturesByApiOutcomeCallable describeSignaturesByApiCallable(const Model::DescribeSignaturesByApiRequest& request) const;
			DescribeSummaryDataOutcome describeSummaryData(const Model::DescribeSummaryDataRequest &request)const;
			void describeSummaryDataAsync(const Model::DescribeSummaryDataRequest& request, const DescribeSummaryDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSummaryDataOutcomeCallable describeSummaryDataCallable(const Model::DescribeSummaryDataRequest& request) const;
			DescribeSystemParametersOutcome describeSystemParameters(const Model::DescribeSystemParametersRequest &request)const;
			void describeSystemParametersAsync(const Model::DescribeSystemParametersRequest& request, const DescribeSystemParametersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSystemParametersOutcomeCallable describeSystemParametersCallable(const Model::DescribeSystemParametersRequest& request) const;
			DescribeTrafficControlsOutcome describeTrafficControls(const Model::DescribeTrafficControlsRequest &request)const;
			void describeTrafficControlsAsync(const Model::DescribeTrafficControlsRequest& request, const DescribeTrafficControlsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTrafficControlsOutcomeCallable describeTrafficControlsCallable(const Model::DescribeTrafficControlsRequest& request) const;
			DescribeTrafficControlsByApiOutcome describeTrafficControlsByApi(const Model::DescribeTrafficControlsByApiRequest &request)const;
			void describeTrafficControlsByApiAsync(const Model::DescribeTrafficControlsByApiRequest& request, const DescribeTrafficControlsByApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTrafficControlsByApiOutcomeCallable describeTrafficControlsByApiCallable(const Model::DescribeTrafficControlsByApiRequest& request) const;
			DescribeUpdateBackendTaskOutcome describeUpdateBackendTask(const Model::DescribeUpdateBackendTaskRequest &request)const;
			void describeUpdateBackendTaskAsync(const Model::DescribeUpdateBackendTaskRequest& request, const DescribeUpdateBackendTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUpdateBackendTaskOutcomeCallable describeUpdateBackendTaskCallable(const Model::DescribeUpdateBackendTaskRequest& request) const;
			DescribeUpdateVpcInfoTaskOutcome describeUpdateVpcInfoTask(const Model::DescribeUpdateVpcInfoTaskRequest &request)const;
			void describeUpdateVpcInfoTaskAsync(const Model::DescribeUpdateVpcInfoTaskRequest& request, const DescribeUpdateVpcInfoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUpdateVpcInfoTaskOutcomeCallable describeUpdateVpcInfoTaskCallable(const Model::DescribeUpdateVpcInfoTaskRequest& request) const;
			DescribeVpcAccessesOutcome describeVpcAccesses(const Model::DescribeVpcAccessesRequest &request)const;
			void describeVpcAccessesAsync(const Model::DescribeVpcAccessesRequest& request, const DescribeVpcAccessesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVpcAccessesOutcomeCallable describeVpcAccessesCallable(const Model::DescribeVpcAccessesRequest& request) const;
			DescribeZonesOutcome describeZones(const Model::DescribeZonesRequest &request)const;
			void describeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeZonesOutcomeCallable describeZonesCallable(const Model::DescribeZonesRequest& request) const;
			DetachApiProductOutcome detachApiProduct(const Model::DetachApiProductRequest &request)const;
			void detachApiProductAsync(const Model::DetachApiProductRequest& request, const DetachApiProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachApiProductOutcomeCallable detachApiProductCallable(const Model::DetachApiProductRequest& request) const;
			DetachPluginOutcome detachPlugin(const Model::DetachPluginRequest &request)const;
			void detachPluginAsync(const Model::DetachPluginRequest& request, const DetachPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachPluginOutcomeCallable detachPluginCallable(const Model::DetachPluginRequest& request) const;
			DisableInstanceAccessControlOutcome disableInstanceAccessControl(const Model::DisableInstanceAccessControlRequest &request)const;
			void disableInstanceAccessControlAsync(const Model::DisableInstanceAccessControlRequest& request, const DisableInstanceAccessControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableInstanceAccessControlOutcomeCallable disableInstanceAccessControlCallable(const Model::DisableInstanceAccessControlRequest& request) const;
			DryRunSwaggerOutcome dryRunSwagger(const Model::DryRunSwaggerRequest &request)const;
			void dryRunSwaggerAsync(const Model::DryRunSwaggerRequest& request, const DryRunSwaggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DryRunSwaggerOutcomeCallable dryRunSwaggerCallable(const Model::DryRunSwaggerRequest& request) const;
			EnableInstanceAccessControlOutcome enableInstanceAccessControl(const Model::EnableInstanceAccessControlRequest &request)const;
			void enableInstanceAccessControlAsync(const Model::EnableInstanceAccessControlRequest& request, const EnableInstanceAccessControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableInstanceAccessControlOutcomeCallable enableInstanceAccessControlCallable(const Model::EnableInstanceAccessControlRequest& request) const;
			ImportOASOutcome importOAS(const Model::ImportOASRequest &request)const;
			void importOASAsync(const Model::ImportOASRequest& request, const ImportOASAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportOASOutcomeCallable importOASCallable(const Model::ImportOASRequest& request) const;
			ImportSwaggerOutcome importSwagger(const Model::ImportSwaggerRequest &request)const;
			void importSwaggerAsync(const Model::ImportSwaggerRequest& request, const ImportSwaggerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImportSwaggerOutcomeCallable importSwaggerCallable(const Model::ImportSwaggerRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ModifyApiOutcome modifyApi(const Model::ModifyApiRequest &request)const;
			void modifyApiAsync(const Model::ModifyApiRequest& request, const ModifyApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyApiOutcomeCallable modifyApiCallable(const Model::ModifyApiRequest& request) const;
			ModifyApiConfigurationOutcome modifyApiConfiguration(const Model::ModifyApiConfigurationRequest &request)const;
			void modifyApiConfigurationAsync(const Model::ModifyApiConfigurationRequest& request, const ModifyApiConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyApiConfigurationOutcomeCallable modifyApiConfigurationCallable(const Model::ModifyApiConfigurationRequest& request) const;
			ModifyApiGroupOutcome modifyApiGroup(const Model::ModifyApiGroupRequest &request)const;
			void modifyApiGroupAsync(const Model::ModifyApiGroupRequest& request, const ModifyApiGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyApiGroupOutcomeCallable modifyApiGroupCallable(const Model::ModifyApiGroupRequest& request) const;
			ModifyApiGroupVpcWhitelistOutcome modifyApiGroupVpcWhitelist(const Model::ModifyApiGroupVpcWhitelistRequest &request)const;
			void modifyApiGroupVpcWhitelistAsync(const Model::ModifyApiGroupVpcWhitelistRequest& request, const ModifyApiGroupVpcWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyApiGroupVpcWhitelistOutcomeCallable modifyApiGroupVpcWhitelistCallable(const Model::ModifyApiGroupVpcWhitelistRequest& request) const;
			ModifyAppOutcome modifyApp(const Model::ModifyAppRequest &request)const;
			void modifyAppAsync(const Model::ModifyAppRequest& request, const ModifyAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyAppOutcomeCallable modifyAppCallable(const Model::ModifyAppRequest& request) const;
			ModifyBackendOutcome modifyBackend(const Model::ModifyBackendRequest &request)const;
			void modifyBackendAsync(const Model::ModifyBackendRequest& request, const ModifyBackendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBackendOutcomeCallable modifyBackendCallable(const Model::ModifyBackendRequest& request) const;
			ModifyBackendModelOutcome modifyBackendModel(const Model::ModifyBackendModelRequest &request)const;
			void modifyBackendModelAsync(const Model::ModifyBackendModelRequest& request, const ModifyBackendModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBackendModelOutcomeCallable modifyBackendModelCallable(const Model::ModifyBackendModelRequest& request) const;
			ModifyDatasetOutcome modifyDataset(const Model::ModifyDatasetRequest &request)const;
			void modifyDatasetAsync(const Model::ModifyDatasetRequest& request, const ModifyDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDatasetOutcomeCallable modifyDatasetCallable(const Model::ModifyDatasetRequest& request) const;
			ModifyDatasetItemOutcome modifyDatasetItem(const Model::ModifyDatasetItemRequest &request)const;
			void modifyDatasetItemAsync(const Model::ModifyDatasetItemRequest& request, const ModifyDatasetItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDatasetItemOutcomeCallable modifyDatasetItemCallable(const Model::ModifyDatasetItemRequest& request) const;
			ModifyInstanceSpecOutcome modifyInstanceSpec(const Model::ModifyInstanceSpecRequest &request)const;
			void modifyInstanceSpecAsync(const Model::ModifyInstanceSpecRequest& request, const ModifyInstanceSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceSpecOutcomeCallable modifyInstanceSpecCallable(const Model::ModifyInstanceSpecRequest& request) const;
			ModifyIntranetDomainPolicyOutcome modifyIntranetDomainPolicy(const Model::ModifyIntranetDomainPolicyRequest &request)const;
			void modifyIntranetDomainPolicyAsync(const Model::ModifyIntranetDomainPolicyRequest& request, const ModifyIntranetDomainPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyIntranetDomainPolicyOutcomeCallable modifyIntranetDomainPolicyCallable(const Model::ModifyIntranetDomainPolicyRequest& request) const;
			ModifyIpControlOutcome modifyIpControl(const Model::ModifyIpControlRequest &request)const;
			void modifyIpControlAsync(const Model::ModifyIpControlRequest& request, const ModifyIpControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyIpControlOutcomeCallable modifyIpControlCallable(const Model::ModifyIpControlRequest& request) const;
			ModifyIpControlPolicyItemOutcome modifyIpControlPolicyItem(const Model::ModifyIpControlPolicyItemRequest &request)const;
			void modifyIpControlPolicyItemAsync(const Model::ModifyIpControlPolicyItemRequest& request, const ModifyIpControlPolicyItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyIpControlPolicyItemOutcomeCallable modifyIpControlPolicyItemCallable(const Model::ModifyIpControlPolicyItemRequest& request) const;
			ModifyLogConfigOutcome modifyLogConfig(const Model::ModifyLogConfigRequest &request)const;
			void modifyLogConfigAsync(const Model::ModifyLogConfigRequest& request, const ModifyLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLogConfigOutcomeCallable modifyLogConfigCallable(const Model::ModifyLogConfigRequest& request) const;
			ModifyModelOutcome modifyModel(const Model::ModifyModelRequest &request)const;
			void modifyModelAsync(const Model::ModifyModelRequest& request, const ModifyModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyModelOutcomeCallable modifyModelCallable(const Model::ModifyModelRequest& request) const;
			ModifyPluginOutcome modifyPlugin(const Model::ModifyPluginRequest &request)const;
			void modifyPluginAsync(const Model::ModifyPluginRequest& request, const ModifyPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyPluginOutcomeCallable modifyPluginCallable(const Model::ModifyPluginRequest& request) const;
			ModifySignatureOutcome modifySignature(const Model::ModifySignatureRequest &request)const;
			void modifySignatureAsync(const Model::ModifySignatureRequest& request, const ModifySignatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySignatureOutcomeCallable modifySignatureCallable(const Model::ModifySignatureRequest& request) const;
			ModifyTrafficControlOutcome modifyTrafficControl(const Model::ModifyTrafficControlRequest &request)const;
			void modifyTrafficControlAsync(const Model::ModifyTrafficControlRequest& request, const ModifyTrafficControlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyTrafficControlOutcomeCallable modifyTrafficControlCallable(const Model::ModifyTrafficControlRequest& request) const;
			ModifyVpcAccessAndUpdateApisOutcome modifyVpcAccessAndUpdateApis(const Model::ModifyVpcAccessAndUpdateApisRequest &request)const;
			void modifyVpcAccessAndUpdateApisAsync(const Model::ModifyVpcAccessAndUpdateApisRequest& request, const ModifyVpcAccessAndUpdateApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyVpcAccessAndUpdateApisOutcomeCallable modifyVpcAccessAndUpdateApisCallable(const Model::ModifyVpcAccessAndUpdateApisRequest& request) const;
			OpenApiGatewayServiceOutcome openApiGatewayService(const Model::OpenApiGatewayServiceRequest &request)const;
			void openApiGatewayServiceAsync(const Model::OpenApiGatewayServiceRequest& request, const OpenApiGatewayServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenApiGatewayServiceOutcomeCallable openApiGatewayServiceCallable(const Model::OpenApiGatewayServiceRequest& request) const;
			QueryRequestLogsOutcome queryRequestLogs(const Model::QueryRequestLogsRequest &request)const;
			void queryRequestLogsAsync(const Model::QueryRequestLogsRequest& request, const QueryRequestLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			QueryRequestLogsOutcomeCallable queryRequestLogsCallable(const Model::QueryRequestLogsRequest& request) const;
			ReactivateDomainOutcome reactivateDomain(const Model::ReactivateDomainRequest &request)const;
			void reactivateDomainAsync(const Model::ReactivateDomainRequest& request, const ReactivateDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReactivateDomainOutcomeCallable reactivateDomainCallable(const Model::ReactivateDomainRequest& request) const;
			RemoveAccessControlListEntryOutcome removeAccessControlListEntry(const Model::RemoveAccessControlListEntryRequest &request)const;
			void removeAccessControlListEntryAsync(const Model::RemoveAccessControlListEntryRequest& request, const RemoveAccessControlListEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveAccessControlListEntryOutcomeCallable removeAccessControlListEntryCallable(const Model::RemoveAccessControlListEntryRequest& request) const;
			RemoveApiProductsAuthoritiesOutcome removeApiProductsAuthorities(const Model::RemoveApiProductsAuthoritiesRequest &request)const;
			void removeApiProductsAuthoritiesAsync(const Model::RemoveApiProductsAuthoritiesRequest& request, const RemoveApiProductsAuthoritiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveApiProductsAuthoritiesOutcomeCallable removeApiProductsAuthoritiesCallable(const Model::RemoveApiProductsAuthoritiesRequest& request) const;
			RemoveApisAuthoritiesOutcome removeApisAuthorities(const Model::RemoveApisAuthoritiesRequest &request)const;
			void removeApisAuthoritiesAsync(const Model::RemoveApisAuthoritiesRequest& request, const RemoveApisAuthoritiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveApisAuthoritiesOutcomeCallable removeApisAuthoritiesCallable(const Model::RemoveApisAuthoritiesRequest& request) const;
			RemoveAppsAuthoritiesOutcome removeAppsAuthorities(const Model::RemoveAppsAuthoritiesRequest &request)const;
			void removeAppsAuthoritiesAsync(const Model::RemoveAppsAuthoritiesRequest& request, const RemoveAppsAuthoritiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveAppsAuthoritiesOutcomeCallable removeAppsAuthoritiesCallable(const Model::RemoveAppsAuthoritiesRequest& request) const;
			RemoveIpControlApisOutcome removeIpControlApis(const Model::RemoveIpControlApisRequest &request)const;
			void removeIpControlApisAsync(const Model::RemoveIpControlApisRequest& request, const RemoveIpControlApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveIpControlApisOutcomeCallable removeIpControlApisCallable(const Model::RemoveIpControlApisRequest& request) const;
			RemoveIpControlPolicyItemOutcome removeIpControlPolicyItem(const Model::RemoveIpControlPolicyItemRequest &request)const;
			void removeIpControlPolicyItemAsync(const Model::RemoveIpControlPolicyItemRequest& request, const RemoveIpControlPolicyItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveIpControlPolicyItemOutcomeCallable removeIpControlPolicyItemCallable(const Model::RemoveIpControlPolicyItemRequest& request) const;
			RemoveSignatureApisOutcome removeSignatureApis(const Model::RemoveSignatureApisRequest &request)const;
			void removeSignatureApisAsync(const Model::RemoveSignatureApisRequest& request, const RemoveSignatureApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveSignatureApisOutcomeCallable removeSignatureApisCallable(const Model::RemoveSignatureApisRequest& request) const;
			RemoveTrafficControlApisOutcome removeTrafficControlApis(const Model::RemoveTrafficControlApisRequest &request)const;
			void removeTrafficControlApisAsync(const Model::RemoveTrafficControlApisRequest& request, const RemoveTrafficControlApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveTrafficControlApisOutcomeCallable removeTrafficControlApisCallable(const Model::RemoveTrafficControlApisRequest& request) const;
			RemoveVpcAccessOutcome removeVpcAccess(const Model::RemoveVpcAccessRequest &request)const;
			void removeVpcAccessAsync(const Model::RemoveVpcAccessRequest& request, const RemoveVpcAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveVpcAccessOutcomeCallable removeVpcAccessCallable(const Model::RemoveVpcAccessRequest& request) const;
			RemoveVpcAccessAndAbolishApisOutcome removeVpcAccessAndAbolishApis(const Model::RemoveVpcAccessAndAbolishApisRequest &request)const;
			void removeVpcAccessAndAbolishApisAsync(const Model::RemoveVpcAccessAndAbolishApisRequest& request, const RemoveVpcAccessAndAbolishApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveVpcAccessAndAbolishApisOutcomeCallable removeVpcAccessAndAbolishApisCallable(const Model::RemoveVpcAccessAndAbolishApisRequest& request) const;
			ResetAppCodeOutcome resetAppCode(const Model::ResetAppCodeRequest &request)const;
			void resetAppCodeAsync(const Model::ResetAppCodeRequest& request, const ResetAppCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetAppCodeOutcomeCallable resetAppCodeCallable(const Model::ResetAppCodeRequest& request) const;
			ResetAppSecretOutcome resetAppSecret(const Model::ResetAppSecretRequest &request)const;
			void resetAppSecretAsync(const Model::ResetAppSecretRequest& request, const ResetAppSecretAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetAppSecretOutcomeCallable resetAppSecretCallable(const Model::ResetAppSecretRequest& request) const;
			SdkGenerateByAppOutcome sdkGenerateByApp(const Model::SdkGenerateByAppRequest &request)const;
			void sdkGenerateByAppAsync(const Model::SdkGenerateByAppRequest& request, const SdkGenerateByAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SdkGenerateByAppOutcomeCallable sdkGenerateByAppCallable(const Model::SdkGenerateByAppRequest& request) const;
			SdkGenerateByAppForRegionOutcome sdkGenerateByAppForRegion(const Model::SdkGenerateByAppForRegionRequest &request)const;
			void sdkGenerateByAppForRegionAsync(const Model::SdkGenerateByAppForRegionRequest& request, const SdkGenerateByAppForRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SdkGenerateByAppForRegionOutcomeCallable sdkGenerateByAppForRegionCallable(const Model::SdkGenerateByAppForRegionRequest& request) const;
			SdkGenerateByGroupOutcome sdkGenerateByGroup(const Model::SdkGenerateByGroupRequest &request)const;
			void sdkGenerateByGroupAsync(const Model::SdkGenerateByGroupRequest& request, const SdkGenerateByGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SdkGenerateByGroupOutcomeCallable sdkGenerateByGroupCallable(const Model::SdkGenerateByGroupRequest& request) const;
			SetAccessControlListAttributeOutcome setAccessControlListAttribute(const Model::SetAccessControlListAttributeRequest &request)const;
			void setAccessControlListAttributeAsync(const Model::SetAccessControlListAttributeRequest& request, const SetAccessControlListAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetAccessControlListAttributeOutcomeCallable setAccessControlListAttributeCallable(const Model::SetAccessControlListAttributeRequest& request) const;
			SetApiProductsAuthoritiesOutcome setApiProductsAuthorities(const Model::SetApiProductsAuthoritiesRequest &request)const;
			void setApiProductsAuthoritiesAsync(const Model::SetApiProductsAuthoritiesRequest& request, const SetApiProductsAuthoritiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetApiProductsAuthoritiesOutcomeCallable setApiProductsAuthoritiesCallable(const Model::SetApiProductsAuthoritiesRequest& request) const;
			SetApisAuthoritiesOutcome setApisAuthorities(const Model::SetApisAuthoritiesRequest &request)const;
			void setApisAuthoritiesAsync(const Model::SetApisAuthoritiesRequest& request, const SetApisAuthoritiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetApisAuthoritiesOutcomeCallable setApisAuthoritiesCallable(const Model::SetApisAuthoritiesRequest& request) const;
			SetAppsAuthoritiesOutcome setAppsAuthorities(const Model::SetAppsAuthoritiesRequest &request)const;
			void setAppsAuthoritiesAsync(const Model::SetAppsAuthoritiesRequest& request, const SetAppsAuthoritiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetAppsAuthoritiesOutcomeCallable setAppsAuthoritiesCallable(const Model::SetAppsAuthoritiesRequest& request) const;
			SetDomainOutcome setDomain(const Model::SetDomainRequest &request)const;
			void setDomainAsync(const Model::SetDomainRequest& request, const SetDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDomainOutcomeCallable setDomainCallable(const Model::SetDomainRequest& request) const;
			SetDomainCertificateOutcome setDomainCertificate(const Model::SetDomainCertificateRequest &request)const;
			void setDomainCertificateAsync(const Model::SetDomainCertificateRequest& request, const SetDomainCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDomainCertificateOutcomeCallable setDomainCertificateCallable(const Model::SetDomainCertificateRequest& request) const;
			SetDomainWebSocketStatusOutcome setDomainWebSocketStatus(const Model::SetDomainWebSocketStatusRequest &request)const;
			void setDomainWebSocketStatusAsync(const Model::SetDomainWebSocketStatusRequest& request, const SetDomainWebSocketStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDomainWebSocketStatusOutcomeCallable setDomainWebSocketStatusCallable(const Model::SetDomainWebSocketStatusRequest& request) const;
			SetGroupAuthAppCodeOutcome setGroupAuthAppCode(const Model::SetGroupAuthAppCodeRequest &request)const;
			void setGroupAuthAppCodeAsync(const Model::SetGroupAuthAppCodeRequest& request, const SetGroupAuthAppCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetGroupAuthAppCodeOutcomeCallable setGroupAuthAppCodeCallable(const Model::SetGroupAuthAppCodeRequest& request) const;
			SetIpControlApisOutcome setIpControlApis(const Model::SetIpControlApisRequest &request)const;
			void setIpControlApisAsync(const Model::SetIpControlApisRequest& request, const SetIpControlApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetIpControlApisOutcomeCallable setIpControlApisCallable(const Model::SetIpControlApisRequest& request) const;
			SetSignatureApisOutcome setSignatureApis(const Model::SetSignatureApisRequest &request)const;
			void setSignatureApisAsync(const Model::SetSignatureApisRequest& request, const SetSignatureApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetSignatureApisOutcomeCallable setSignatureApisCallable(const Model::SetSignatureApisRequest& request) const;
			SetTrafficControlApisOutcome setTrafficControlApis(const Model::SetTrafficControlApisRequest &request)const;
			void setTrafficControlApisAsync(const Model::SetTrafficControlApisRequest& request, const SetTrafficControlApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetTrafficControlApisOutcomeCallable setTrafficControlApisCallable(const Model::SetTrafficControlApisRequest& request) const;
			SetVpcAccessOutcome setVpcAccess(const Model::SetVpcAccessRequest &request)const;
			void setVpcAccessAsync(const Model::SetVpcAccessRequest& request, const SetVpcAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetVpcAccessOutcomeCallable setVpcAccessCallable(const Model::SetVpcAccessRequest& request) const;
			SetWildcardDomainPatternsOutcome setWildcardDomainPatterns(const Model::SetWildcardDomainPatternsRequest &request)const;
			void setWildcardDomainPatternsAsync(const Model::SetWildcardDomainPatternsRequest& request, const SetWildcardDomainPatternsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetWildcardDomainPatternsOutcomeCallable setWildcardDomainPatternsCallable(const Model::SetWildcardDomainPatternsRequest& request) const;
			SwitchApiOutcome switchApi(const Model::SwitchApiRequest &request)const;
			void switchApiAsync(const Model::SwitchApiRequest& request, const SwitchApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchApiOutcomeCallable switchApiCallable(const Model::SwitchApiRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			ValidateVpcConnectivityOutcome validateVpcConnectivity(const Model::ValidateVpcConnectivityRequest &request)const;
			void validateVpcConnectivityAsync(const Model::ValidateVpcConnectivityRequest& request, const ValidateVpcConnectivityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ValidateVpcConnectivityOutcomeCallable validateVpcConnectivityCallable(const Model::ValidateVpcConnectivityRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CLOUDAPI_CLOUDAPICLIENT_H_
