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

#ifndef ALIBABACLOUD_SGW_SGWCLIENT_H_
#define ALIBABACLOUD_SGW_SGWCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "SgwExport.h"
#include "model/ActivateAllInOneGatewayRequest.h"
#include "model/ActivateAllInOneGatewayResult.h"
#include "model/ActivateGatewayRequest.h"
#include "model/ActivateGatewayResult.h"
#include "model/AddSharesToExpressSyncRequest.h"
#include "model/AddSharesToExpressSyncResult.h"
#include "model/AddTagsToGatewayRequest.h"
#include "model/AddTagsToGatewayResult.h"
#include "model/CheckActivationKeyRequest.h"
#include "model/CheckActivationKeyResult.h"
#include "model/CheckBlockVolumeNameRequest.h"
#include "model/CheckBlockVolumeNameResult.h"
#include "model/CheckGatewayEssdSupportRequest.h"
#include "model/CheckGatewayEssdSupportResult.h"
#include "model/CheckMnsServiceRequest.h"
#include "model/CheckMnsServiceResult.h"
#include "model/CheckRoleRequest.h"
#include "model/CheckRoleResult.h"
#include "model/CheckSlrRoleRequest.h"
#include "model/CheckSlrRoleResult.h"
#include "model/CheckUpgradeVersionRequest.h"
#include "model/CheckUpgradeVersionResult.h"
#include "model/CreateCacheRequest.h"
#include "model/CreateCacheResult.h"
#include "model/CreateElasticGatewayPrivateZoneRequest.h"
#include "model/CreateElasticGatewayPrivateZoneResult.h"
#include "model/CreateExpressSyncRequest.h"
#include "model/CreateExpressSyncResult.h"
#include "model/CreateGatewayRequest.h"
#include "model/CreateGatewayResult.h"
#include "model/CreateGatewayBlockVolumeRequest.h"
#include "model/CreateGatewayBlockVolumeResult.h"
#include "model/CreateGatewayCacheDiskRequest.h"
#include "model/CreateGatewayCacheDiskResult.h"
#include "model/CreateGatewayFileShareRequest.h"
#include "model/CreateGatewayFileShareResult.h"
#include "model/CreateGatewayLoggingRequest.h"
#include "model/CreateGatewayLoggingResult.h"
#include "model/CreateGatewaySMBUserRequest.h"
#include "model/CreateGatewaySMBUserResult.h"
#include "model/CreateStorageBundleRequest.h"
#include "model/CreateStorageBundleResult.h"
#include "model/DeleteCSGClientsRequest.h"
#include "model/DeleteCSGClientsResult.h"
#include "model/DeleteElasticGatewayPrivateZoneRequest.h"
#include "model/DeleteElasticGatewayPrivateZoneResult.h"
#include "model/DeleteExpressSyncRequest.h"
#include "model/DeleteExpressSyncResult.h"
#include "model/DeleteGatewayRequest.h"
#include "model/DeleteGatewayResult.h"
#include "model/DeleteGatewayBlockVolumesRequest.h"
#include "model/DeleteGatewayBlockVolumesResult.h"
#include "model/DeleteGatewayCacheDiskRequest.h"
#include "model/DeleteGatewayCacheDiskResult.h"
#include "model/DeleteGatewayFileSharesRequest.h"
#include "model/DeleteGatewayFileSharesResult.h"
#include "model/DeleteGatewayLoggingRequest.h"
#include "model/DeleteGatewayLoggingResult.h"
#include "model/DeleteGatewaySMBUserRequest.h"
#include "model/DeleteGatewaySMBUserResult.h"
#include "model/DeleteStorageBundleRequest.h"
#include "model/DeleteStorageBundleResult.h"
#include "model/DeployCSGClientsRequest.h"
#include "model/DeployCSGClientsResult.h"
#include "model/DeployCacheDiskRequest.h"
#include "model/DeployCacheDiskResult.h"
#include "model/DeployGatewayRequest.h"
#include "model/DeployGatewayResult.h"
#include "model/DescribeAccountConfigRequest.h"
#include "model/DescribeAccountConfigResult.h"
#include "model/DescribeBlockVolumeSnapshotsRequest.h"
#include "model/DescribeBlockVolumeSnapshotsResult.h"
#include "model/DescribeCSGClientTasksRequest.h"
#include "model/DescribeCSGClientTasksResult.h"
#include "model/DescribeCSGClientsRequest.h"
#include "model/DescribeCSGClientsResult.h"
#include "model/DescribeDashboardRequest.h"
#include "model/DescribeDashboardResult.h"
#include "model/DescribeExpireCachesRequest.h"
#include "model/DescribeExpireCachesResult.h"
#include "model/DescribeExpressSyncSharesRequest.h"
#include "model/DescribeExpressSyncSharesResult.h"
#include "model/DescribeExpressSyncsRequest.h"
#include "model/DescribeExpressSyncsResult.h"
#include "model/DescribeGatewayRequest.h"
#include "model/DescribeGatewayResult.h"
#include "model/DescribeGatewayADInfoRequest.h"
#include "model/DescribeGatewayADInfoResult.h"
#include "model/DescribeGatewayActionsRequest.h"
#include "model/DescribeGatewayActionsResult.h"
#include "model/DescribeGatewayAuthInfoRequest.h"
#include "model/DescribeGatewayAuthInfoResult.h"
#include "model/DescribeGatewayBlockVolumesRequest.h"
#include "model/DescribeGatewayBlockVolumesResult.h"
#include "model/DescribeGatewayBucketCachesRequest.h"
#include "model/DescribeGatewayBucketCachesResult.h"
#include "model/DescribeGatewayCachesRequest.h"
#include "model/DescribeGatewayCachesResult.h"
#include "model/DescribeGatewayCapacityLimitRequest.h"
#include "model/DescribeGatewayCapacityLimitResult.h"
#include "model/DescribeGatewayCategoriesRequest.h"
#include "model/DescribeGatewayCategoriesResult.h"
#include "model/DescribeGatewayClassesRequest.h"
#include "model/DescribeGatewayClassesResult.h"
#include "model/DescribeGatewayCredentialRequest.h"
#include "model/DescribeGatewayCredentialResult.h"
#include "model/DescribeGatewayDNSRequest.h"
#include "model/DescribeGatewayDNSResult.h"
#include "model/DescribeGatewayFileSharesRequest.h"
#include "model/DescribeGatewayFileSharesResult.h"
#include "model/DescribeGatewayFileStatusRequest.h"
#include "model/DescribeGatewayFileStatusResult.h"
#include "model/DescribeGatewayImagesRequest.h"
#include "model/DescribeGatewayImagesResult.h"
#include "model/DescribeGatewayInfoRequest.h"
#include "model/DescribeGatewayInfoResult.h"
#include "model/DescribeGatewayLDAPInfoRequest.h"
#include "model/DescribeGatewayLDAPInfoResult.h"
#include "model/DescribeGatewayLocationsRequest.h"
#include "model/DescribeGatewayLocationsResult.h"
#include "model/DescribeGatewayLoggingRequest.h"
#include "model/DescribeGatewayLoggingResult.h"
#include "model/DescribeGatewayLogsRequest.h"
#include "model/DescribeGatewayLogsResult.h"
#include "model/DescribeGatewayModificationClassesRequest.h"
#include "model/DescribeGatewayModificationClassesResult.h"
#include "model/DescribeGatewayNFSClientsRequest.h"
#include "model/DescribeGatewayNFSClientsResult.h"
#include "model/DescribeGatewaySMBUsersRequest.h"
#include "model/DescribeGatewaySMBUsersResult.h"
#include "model/DescribeGatewayStatisticsRequest.h"
#include "model/DescribeGatewayStatisticsResult.h"
#include "model/DescribeGatewayStockRequest.h"
#include "model/DescribeGatewayStockResult.h"
#include "model/DescribeGatewayTypesRequest.h"
#include "model/DescribeGatewayTypesResult.h"
#include "model/DescribeGatewaysRequest.h"
#include "model/DescribeGatewaysResult.h"
#include "model/DescribeGatewaysForCmsRequest.h"
#include "model/DescribeGatewaysForCmsResult.h"
#include "model/DescribeGatewaysTagsRequest.h"
#include "model/DescribeGatewaysTagsResult.h"
#include "model/DescribeKmsKeyRequest.h"
#include "model/DescribeKmsKeyResult.h"
#include "model/DescribeMqttConfigRequest.h"
#include "model/DescribeMqttConfigResult.h"
#include "model/DescribeOssBucketInfoRequest.h"
#include "model/DescribeOssBucketInfoResult.h"
#include "model/DescribeOssBucketsRequest.h"
#include "model/DescribeOssBucketsResult.h"
#include "model/DescribePayAsYouGoPriceRequest.h"
#include "model/DescribePayAsYouGoPriceResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeSharesBucketInfoForExpressSyncRequest.h"
#include "model/DescribeSharesBucketInfoForExpressSyncResult.h"
#include "model/DescribeStorageBundleRequest.h"
#include "model/DescribeStorageBundleResult.h"
#include "model/DescribeStorageBundlesRequest.h"
#include "model/DescribeStorageBundlesResult.h"
#include "model/DescribeSubscriptionPriceRequest.h"
#include "model/DescribeSubscriptionPriceResult.h"
#include "model/DescribeTasksRequest.h"
#include "model/DescribeTasksResult.h"
#include "model/DescribeUserBusinessStatusRequest.h"
#include "model/DescribeUserBusinessStatusResult.h"
#include "model/DescribeVSwitchesRequest.h"
#include "model/DescribeVSwitchesResult.h"
#include "model/DescribeVpcsRequest.h"
#include "model/DescribeVpcsResult.h"
#include "model/DescribeZonesRequest.h"
#include "model/DescribeZonesResult.h"
#include "model/DisableGatewayLoggingRequest.h"
#include "model/DisableGatewayLoggingResult.h"
#include "model/DisableGatewayNFSVersionRequest.h"
#include "model/DisableGatewayNFSVersionResult.h"
#include "model/EnableGatewayIpv6Request.h"
#include "model/EnableGatewayIpv6Result.h"
#include "model/EnableGatewayLoggingRequest.h"
#include "model/EnableGatewayLoggingResult.h"
#include "model/ExpandCacheDiskRequest.h"
#include "model/ExpandCacheDiskResult.h"
#include "model/ExpandGatewayNetworkBandwidthRequest.h"
#include "model/ExpandGatewayNetworkBandwidthResult.h"
#include "model/GenerateGatewayTokenRequest.h"
#include "model/GenerateGatewayTokenResult.h"
#include "model/GenerateMqttTokenRequest.h"
#include "model/GenerateMqttTokenResult.h"
#include "model/GenerateStsTokenRequest.h"
#include "model/GenerateStsTokenResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ModifyGatewayRequest.h"
#include "model/ModifyGatewayResult.h"
#include "model/ModifyGatewayBlockVolumeRequest.h"
#include "model/ModifyGatewayBlockVolumeResult.h"
#include "model/ModifyGatewayClassRequest.h"
#include "model/ModifyGatewayClassResult.h"
#include "model/ModifyGatewayFileShareRequest.h"
#include "model/ModifyGatewayFileShareResult.h"
#include "model/ModifyGatewayFileShareWatermarkRequest.h"
#include "model/ModifyGatewayFileShareWatermarkResult.h"
#include "model/ModifyStorageBundleRequest.h"
#include "model/ModifyStorageBundleResult.h"
#include "model/OpenSgwServiceRequest.h"
#include "model/OpenSgwServiceResult.h"
#include "model/OperateGatewayRequest.h"
#include "model/OperateGatewayResult.h"
#include "model/ReleaseServiceRequest.h"
#include "model/ReleaseServiceResult.h"
#include "model/RemoveSharesFromExpressSyncRequest.h"
#include "model/RemoveSharesFromExpressSyncResult.h"
#include "model/RemoveTagsFromGatewayRequest.h"
#include "model/RemoveTagsFromGatewayResult.h"
#include "model/ReportBlockVolumesRequest.h"
#include "model/ReportBlockVolumesResult.h"
#include "model/ReportFileSharesRequest.h"
#include "model/ReportFileSharesResult.h"
#include "model/ReportGatewayInfoRequest.h"
#include "model/ReportGatewayInfoResult.h"
#include "model/ReportGatewayUsageRequest.h"
#include "model/ReportGatewayUsageResult.h"
#include "model/ResetGatewayPasswordRequest.h"
#include "model/ResetGatewayPasswordResult.h"
#include "model/RestartFileSharesRequest.h"
#include "model/RestartFileSharesResult.h"
#include "model/SetGatewayADInfoRequest.h"
#include "model/SetGatewayADInfoResult.h"
#include "model/SetGatewayDNSRequest.h"
#include "model/SetGatewayDNSResult.h"
#include "model/SetGatewayLDAPInfoRequest.h"
#include "model/SetGatewayLDAPInfoResult.h"
#include "model/SwitchCSGClientsReverseSyncConfigurationRequest.h"
#include "model/SwitchCSGClientsReverseSyncConfigurationResult.h"
#include "model/SwitchGatewayExpirationPolicyRequest.h"
#include "model/SwitchGatewayExpirationPolicyResult.h"
#include "model/SwitchToSubscriptionRequest.h"
#include "model/SwitchToSubscriptionResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/TriggerGatewayRemoteSyncRequest.h"
#include "model/TriggerGatewayRemoteSyncResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"
#include "model/UpdateGatewayBlockVolumeRequest.h"
#include "model/UpdateGatewayBlockVolumeResult.h"
#include "model/UpdateGatewayFileShareRequest.h"
#include "model/UpdateGatewayFileShareResult.h"
#include "model/UpgradeGatewayRequest.h"
#include "model/UpgradeGatewayResult.h"
#include "model/UploadCSGClientLogRequest.h"
#include "model/UploadCSGClientLogResult.h"
#include "model/UploadGatewayLogRequest.h"
#include "model/UploadGatewayLogResult.h"
#include "model/ValidateExpressSyncConfigRequest.h"
#include "model/ValidateExpressSyncConfigResult.h"
#include "model/ValidateGatewayNameRequest.h"
#include "model/ValidateGatewayNameResult.h"


namespace AlibabaCloud
{
	namespace Sgw
	{
		class ALIBABACLOUD_SGW_EXPORT SgwClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ActivateAllInOneGatewayResult> ActivateAllInOneGatewayOutcome;
			typedef std::future<ActivateAllInOneGatewayOutcome> ActivateAllInOneGatewayOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::ActivateAllInOneGatewayRequest&, const ActivateAllInOneGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ActivateAllInOneGatewayAsyncHandler;
			typedef Outcome<Error, Model::ActivateGatewayResult> ActivateGatewayOutcome;
			typedef std::future<ActivateGatewayOutcome> ActivateGatewayOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::ActivateGatewayRequest&, const ActivateGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ActivateGatewayAsyncHandler;
			typedef Outcome<Error, Model::AddSharesToExpressSyncResult> AddSharesToExpressSyncOutcome;
			typedef std::future<AddSharesToExpressSyncOutcome> AddSharesToExpressSyncOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::AddSharesToExpressSyncRequest&, const AddSharesToExpressSyncOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddSharesToExpressSyncAsyncHandler;
			typedef Outcome<Error, Model::AddTagsToGatewayResult> AddTagsToGatewayOutcome;
			typedef std::future<AddTagsToGatewayOutcome> AddTagsToGatewayOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::AddTagsToGatewayRequest&, const AddTagsToGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddTagsToGatewayAsyncHandler;
			typedef Outcome<Error, Model::CheckActivationKeyResult> CheckActivationKeyOutcome;
			typedef std::future<CheckActivationKeyOutcome> CheckActivationKeyOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::CheckActivationKeyRequest&, const CheckActivationKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckActivationKeyAsyncHandler;
			typedef Outcome<Error, Model::CheckBlockVolumeNameResult> CheckBlockVolumeNameOutcome;
			typedef std::future<CheckBlockVolumeNameOutcome> CheckBlockVolumeNameOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::CheckBlockVolumeNameRequest&, const CheckBlockVolumeNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckBlockVolumeNameAsyncHandler;
			typedef Outcome<Error, Model::CheckGatewayEssdSupportResult> CheckGatewayEssdSupportOutcome;
			typedef std::future<CheckGatewayEssdSupportOutcome> CheckGatewayEssdSupportOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::CheckGatewayEssdSupportRequest&, const CheckGatewayEssdSupportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckGatewayEssdSupportAsyncHandler;
			typedef Outcome<Error, Model::CheckMnsServiceResult> CheckMnsServiceOutcome;
			typedef std::future<CheckMnsServiceOutcome> CheckMnsServiceOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::CheckMnsServiceRequest&, const CheckMnsServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckMnsServiceAsyncHandler;
			typedef Outcome<Error, Model::CheckRoleResult> CheckRoleOutcome;
			typedef std::future<CheckRoleOutcome> CheckRoleOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::CheckRoleRequest&, const CheckRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckRoleAsyncHandler;
			typedef Outcome<Error, Model::CheckSlrRoleResult> CheckSlrRoleOutcome;
			typedef std::future<CheckSlrRoleOutcome> CheckSlrRoleOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::CheckSlrRoleRequest&, const CheckSlrRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckSlrRoleAsyncHandler;
			typedef Outcome<Error, Model::CheckUpgradeVersionResult> CheckUpgradeVersionOutcome;
			typedef std::future<CheckUpgradeVersionOutcome> CheckUpgradeVersionOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::CheckUpgradeVersionRequest&, const CheckUpgradeVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CheckUpgradeVersionAsyncHandler;
			typedef Outcome<Error, Model::CreateCacheResult> CreateCacheOutcome;
			typedef std::future<CreateCacheOutcome> CreateCacheOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::CreateCacheRequest&, const CreateCacheOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCacheAsyncHandler;
			typedef Outcome<Error, Model::CreateElasticGatewayPrivateZoneResult> CreateElasticGatewayPrivateZoneOutcome;
			typedef std::future<CreateElasticGatewayPrivateZoneOutcome> CreateElasticGatewayPrivateZoneOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::CreateElasticGatewayPrivateZoneRequest&, const CreateElasticGatewayPrivateZoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateElasticGatewayPrivateZoneAsyncHandler;
			typedef Outcome<Error, Model::CreateExpressSyncResult> CreateExpressSyncOutcome;
			typedef std::future<CreateExpressSyncOutcome> CreateExpressSyncOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::CreateExpressSyncRequest&, const CreateExpressSyncOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateExpressSyncAsyncHandler;
			typedef Outcome<Error, Model::CreateGatewayResult> CreateGatewayOutcome;
			typedef std::future<CreateGatewayOutcome> CreateGatewayOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::CreateGatewayRequest&, const CreateGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGatewayAsyncHandler;
			typedef Outcome<Error, Model::CreateGatewayBlockVolumeResult> CreateGatewayBlockVolumeOutcome;
			typedef std::future<CreateGatewayBlockVolumeOutcome> CreateGatewayBlockVolumeOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::CreateGatewayBlockVolumeRequest&, const CreateGatewayBlockVolumeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGatewayBlockVolumeAsyncHandler;
			typedef Outcome<Error, Model::CreateGatewayCacheDiskResult> CreateGatewayCacheDiskOutcome;
			typedef std::future<CreateGatewayCacheDiskOutcome> CreateGatewayCacheDiskOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::CreateGatewayCacheDiskRequest&, const CreateGatewayCacheDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGatewayCacheDiskAsyncHandler;
			typedef Outcome<Error, Model::CreateGatewayFileShareResult> CreateGatewayFileShareOutcome;
			typedef std::future<CreateGatewayFileShareOutcome> CreateGatewayFileShareOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::CreateGatewayFileShareRequest&, const CreateGatewayFileShareOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGatewayFileShareAsyncHandler;
			typedef Outcome<Error, Model::CreateGatewayLoggingResult> CreateGatewayLoggingOutcome;
			typedef std::future<CreateGatewayLoggingOutcome> CreateGatewayLoggingOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::CreateGatewayLoggingRequest&, const CreateGatewayLoggingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGatewayLoggingAsyncHandler;
			typedef Outcome<Error, Model::CreateGatewaySMBUserResult> CreateGatewaySMBUserOutcome;
			typedef std::future<CreateGatewaySMBUserOutcome> CreateGatewaySMBUserOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::CreateGatewaySMBUserRequest&, const CreateGatewaySMBUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateGatewaySMBUserAsyncHandler;
			typedef Outcome<Error, Model::CreateStorageBundleResult> CreateStorageBundleOutcome;
			typedef std::future<CreateStorageBundleOutcome> CreateStorageBundleOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::CreateStorageBundleRequest&, const CreateStorageBundleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateStorageBundleAsyncHandler;
			typedef Outcome<Error, Model::DeleteCSGClientsResult> DeleteCSGClientsOutcome;
			typedef std::future<DeleteCSGClientsOutcome> DeleteCSGClientsOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DeleteCSGClientsRequest&, const DeleteCSGClientsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCSGClientsAsyncHandler;
			typedef Outcome<Error, Model::DeleteElasticGatewayPrivateZoneResult> DeleteElasticGatewayPrivateZoneOutcome;
			typedef std::future<DeleteElasticGatewayPrivateZoneOutcome> DeleteElasticGatewayPrivateZoneOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DeleteElasticGatewayPrivateZoneRequest&, const DeleteElasticGatewayPrivateZoneOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteElasticGatewayPrivateZoneAsyncHandler;
			typedef Outcome<Error, Model::DeleteExpressSyncResult> DeleteExpressSyncOutcome;
			typedef std::future<DeleteExpressSyncOutcome> DeleteExpressSyncOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DeleteExpressSyncRequest&, const DeleteExpressSyncOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteExpressSyncAsyncHandler;
			typedef Outcome<Error, Model::DeleteGatewayResult> DeleteGatewayOutcome;
			typedef std::future<DeleteGatewayOutcome> DeleteGatewayOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DeleteGatewayRequest&, const DeleteGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGatewayAsyncHandler;
			typedef Outcome<Error, Model::DeleteGatewayBlockVolumesResult> DeleteGatewayBlockVolumesOutcome;
			typedef std::future<DeleteGatewayBlockVolumesOutcome> DeleteGatewayBlockVolumesOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DeleteGatewayBlockVolumesRequest&, const DeleteGatewayBlockVolumesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGatewayBlockVolumesAsyncHandler;
			typedef Outcome<Error, Model::DeleteGatewayCacheDiskResult> DeleteGatewayCacheDiskOutcome;
			typedef std::future<DeleteGatewayCacheDiskOutcome> DeleteGatewayCacheDiskOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DeleteGatewayCacheDiskRequest&, const DeleteGatewayCacheDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGatewayCacheDiskAsyncHandler;
			typedef Outcome<Error, Model::DeleteGatewayFileSharesResult> DeleteGatewayFileSharesOutcome;
			typedef std::future<DeleteGatewayFileSharesOutcome> DeleteGatewayFileSharesOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DeleteGatewayFileSharesRequest&, const DeleteGatewayFileSharesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGatewayFileSharesAsyncHandler;
			typedef Outcome<Error, Model::DeleteGatewayLoggingResult> DeleteGatewayLoggingOutcome;
			typedef std::future<DeleteGatewayLoggingOutcome> DeleteGatewayLoggingOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DeleteGatewayLoggingRequest&, const DeleteGatewayLoggingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGatewayLoggingAsyncHandler;
			typedef Outcome<Error, Model::DeleteGatewaySMBUserResult> DeleteGatewaySMBUserOutcome;
			typedef std::future<DeleteGatewaySMBUserOutcome> DeleteGatewaySMBUserOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DeleteGatewaySMBUserRequest&, const DeleteGatewaySMBUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGatewaySMBUserAsyncHandler;
			typedef Outcome<Error, Model::DeleteStorageBundleResult> DeleteStorageBundleOutcome;
			typedef std::future<DeleteStorageBundleOutcome> DeleteStorageBundleOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DeleteStorageBundleRequest&, const DeleteStorageBundleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStorageBundleAsyncHandler;
			typedef Outcome<Error, Model::DeployCSGClientsResult> DeployCSGClientsOutcome;
			typedef std::future<DeployCSGClientsOutcome> DeployCSGClientsOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DeployCSGClientsRequest&, const DeployCSGClientsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeployCSGClientsAsyncHandler;
			typedef Outcome<Error, Model::DeployCacheDiskResult> DeployCacheDiskOutcome;
			typedef std::future<DeployCacheDiskOutcome> DeployCacheDiskOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DeployCacheDiskRequest&, const DeployCacheDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeployCacheDiskAsyncHandler;
			typedef Outcome<Error, Model::DeployGatewayResult> DeployGatewayOutcome;
			typedef std::future<DeployGatewayOutcome> DeployGatewayOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DeployGatewayRequest&, const DeployGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeployGatewayAsyncHandler;
			typedef Outcome<Error, Model::DescribeAccountConfigResult> DescribeAccountConfigOutcome;
			typedef std::future<DescribeAccountConfigOutcome> DescribeAccountConfigOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeAccountConfigRequest&, const DescribeAccountConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeBlockVolumeSnapshotsResult> DescribeBlockVolumeSnapshotsOutcome;
			typedef std::future<DescribeBlockVolumeSnapshotsOutcome> DescribeBlockVolumeSnapshotsOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeBlockVolumeSnapshotsRequest&, const DescribeBlockVolumeSnapshotsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBlockVolumeSnapshotsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCSGClientTasksResult> DescribeCSGClientTasksOutcome;
			typedef std::future<DescribeCSGClientTasksOutcome> DescribeCSGClientTasksOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeCSGClientTasksRequest&, const DescribeCSGClientTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCSGClientTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeCSGClientsResult> DescribeCSGClientsOutcome;
			typedef std::future<DescribeCSGClientsOutcome> DescribeCSGClientsOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeCSGClientsRequest&, const DescribeCSGClientsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCSGClientsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDashboardResult> DescribeDashboardOutcome;
			typedef std::future<DescribeDashboardOutcome> DescribeDashboardOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeDashboardRequest&, const DescribeDashboardOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDashboardAsyncHandler;
			typedef Outcome<Error, Model::DescribeExpireCachesResult> DescribeExpireCachesOutcome;
			typedef std::future<DescribeExpireCachesOutcome> DescribeExpireCachesOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeExpireCachesRequest&, const DescribeExpireCachesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExpireCachesAsyncHandler;
			typedef Outcome<Error, Model::DescribeExpressSyncSharesResult> DescribeExpressSyncSharesOutcome;
			typedef std::future<DescribeExpressSyncSharesOutcome> DescribeExpressSyncSharesOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeExpressSyncSharesRequest&, const DescribeExpressSyncSharesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExpressSyncSharesAsyncHandler;
			typedef Outcome<Error, Model::DescribeExpressSyncsResult> DescribeExpressSyncsOutcome;
			typedef std::future<DescribeExpressSyncsOutcome> DescribeExpressSyncsOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeExpressSyncsRequest&, const DescribeExpressSyncsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeExpressSyncsAsyncHandler;
			typedef Outcome<Error, Model::DescribeGatewayResult> DescribeGatewayOutcome;
			typedef std::future<DescribeGatewayOutcome> DescribeGatewayOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeGatewayRequest&, const DescribeGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayAsyncHandler;
			typedef Outcome<Error, Model::DescribeGatewayADInfoResult> DescribeGatewayADInfoOutcome;
			typedef std::future<DescribeGatewayADInfoOutcome> DescribeGatewayADInfoOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeGatewayADInfoRequest&, const DescribeGatewayADInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayADInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeGatewayActionsResult> DescribeGatewayActionsOutcome;
			typedef std::future<DescribeGatewayActionsOutcome> DescribeGatewayActionsOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeGatewayActionsRequest&, const DescribeGatewayActionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayActionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeGatewayAuthInfoResult> DescribeGatewayAuthInfoOutcome;
			typedef std::future<DescribeGatewayAuthInfoOutcome> DescribeGatewayAuthInfoOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeGatewayAuthInfoRequest&, const DescribeGatewayAuthInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayAuthInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeGatewayBlockVolumesResult> DescribeGatewayBlockVolumesOutcome;
			typedef std::future<DescribeGatewayBlockVolumesOutcome> DescribeGatewayBlockVolumesOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeGatewayBlockVolumesRequest&, const DescribeGatewayBlockVolumesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayBlockVolumesAsyncHandler;
			typedef Outcome<Error, Model::DescribeGatewayBucketCachesResult> DescribeGatewayBucketCachesOutcome;
			typedef std::future<DescribeGatewayBucketCachesOutcome> DescribeGatewayBucketCachesOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeGatewayBucketCachesRequest&, const DescribeGatewayBucketCachesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayBucketCachesAsyncHandler;
			typedef Outcome<Error, Model::DescribeGatewayCachesResult> DescribeGatewayCachesOutcome;
			typedef std::future<DescribeGatewayCachesOutcome> DescribeGatewayCachesOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeGatewayCachesRequest&, const DescribeGatewayCachesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayCachesAsyncHandler;
			typedef Outcome<Error, Model::DescribeGatewayCapacityLimitResult> DescribeGatewayCapacityLimitOutcome;
			typedef std::future<DescribeGatewayCapacityLimitOutcome> DescribeGatewayCapacityLimitOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeGatewayCapacityLimitRequest&, const DescribeGatewayCapacityLimitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayCapacityLimitAsyncHandler;
			typedef Outcome<Error, Model::DescribeGatewayCategoriesResult> DescribeGatewayCategoriesOutcome;
			typedef std::future<DescribeGatewayCategoriesOutcome> DescribeGatewayCategoriesOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeGatewayCategoriesRequest&, const DescribeGatewayCategoriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayCategoriesAsyncHandler;
			typedef Outcome<Error, Model::DescribeGatewayClassesResult> DescribeGatewayClassesOutcome;
			typedef std::future<DescribeGatewayClassesOutcome> DescribeGatewayClassesOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeGatewayClassesRequest&, const DescribeGatewayClassesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayClassesAsyncHandler;
			typedef Outcome<Error, Model::DescribeGatewayCredentialResult> DescribeGatewayCredentialOutcome;
			typedef std::future<DescribeGatewayCredentialOutcome> DescribeGatewayCredentialOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeGatewayCredentialRequest&, const DescribeGatewayCredentialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayCredentialAsyncHandler;
			typedef Outcome<Error, Model::DescribeGatewayDNSResult> DescribeGatewayDNSOutcome;
			typedef std::future<DescribeGatewayDNSOutcome> DescribeGatewayDNSOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeGatewayDNSRequest&, const DescribeGatewayDNSOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayDNSAsyncHandler;
			typedef Outcome<Error, Model::DescribeGatewayFileSharesResult> DescribeGatewayFileSharesOutcome;
			typedef std::future<DescribeGatewayFileSharesOutcome> DescribeGatewayFileSharesOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeGatewayFileSharesRequest&, const DescribeGatewayFileSharesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayFileSharesAsyncHandler;
			typedef Outcome<Error, Model::DescribeGatewayFileStatusResult> DescribeGatewayFileStatusOutcome;
			typedef std::future<DescribeGatewayFileStatusOutcome> DescribeGatewayFileStatusOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeGatewayFileStatusRequest&, const DescribeGatewayFileStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayFileStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeGatewayImagesResult> DescribeGatewayImagesOutcome;
			typedef std::future<DescribeGatewayImagesOutcome> DescribeGatewayImagesOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeGatewayImagesRequest&, const DescribeGatewayImagesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayImagesAsyncHandler;
			typedef Outcome<Error, Model::DescribeGatewayInfoResult> DescribeGatewayInfoOutcome;
			typedef std::future<DescribeGatewayInfoOutcome> DescribeGatewayInfoOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeGatewayInfoRequest&, const DescribeGatewayInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeGatewayLDAPInfoResult> DescribeGatewayLDAPInfoOutcome;
			typedef std::future<DescribeGatewayLDAPInfoOutcome> DescribeGatewayLDAPInfoOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeGatewayLDAPInfoRequest&, const DescribeGatewayLDAPInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayLDAPInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeGatewayLocationsResult> DescribeGatewayLocationsOutcome;
			typedef std::future<DescribeGatewayLocationsOutcome> DescribeGatewayLocationsOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeGatewayLocationsRequest&, const DescribeGatewayLocationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayLocationsAsyncHandler;
			typedef Outcome<Error, Model::DescribeGatewayLoggingResult> DescribeGatewayLoggingOutcome;
			typedef std::future<DescribeGatewayLoggingOutcome> DescribeGatewayLoggingOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeGatewayLoggingRequest&, const DescribeGatewayLoggingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayLoggingAsyncHandler;
			typedef Outcome<Error, Model::DescribeGatewayLogsResult> DescribeGatewayLogsOutcome;
			typedef std::future<DescribeGatewayLogsOutcome> DescribeGatewayLogsOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeGatewayLogsRequest&, const DescribeGatewayLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeGatewayModificationClassesResult> DescribeGatewayModificationClassesOutcome;
			typedef std::future<DescribeGatewayModificationClassesOutcome> DescribeGatewayModificationClassesOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeGatewayModificationClassesRequest&, const DescribeGatewayModificationClassesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayModificationClassesAsyncHandler;
			typedef Outcome<Error, Model::DescribeGatewayNFSClientsResult> DescribeGatewayNFSClientsOutcome;
			typedef std::future<DescribeGatewayNFSClientsOutcome> DescribeGatewayNFSClientsOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeGatewayNFSClientsRequest&, const DescribeGatewayNFSClientsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayNFSClientsAsyncHandler;
			typedef Outcome<Error, Model::DescribeGatewaySMBUsersResult> DescribeGatewaySMBUsersOutcome;
			typedef std::future<DescribeGatewaySMBUsersOutcome> DescribeGatewaySMBUsersOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeGatewaySMBUsersRequest&, const DescribeGatewaySMBUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewaySMBUsersAsyncHandler;
			typedef Outcome<Error, Model::DescribeGatewayStatisticsResult> DescribeGatewayStatisticsOutcome;
			typedef std::future<DescribeGatewayStatisticsOutcome> DescribeGatewayStatisticsOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeGatewayStatisticsRequest&, const DescribeGatewayStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeGatewayStockResult> DescribeGatewayStockOutcome;
			typedef std::future<DescribeGatewayStockOutcome> DescribeGatewayStockOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeGatewayStockRequest&, const DescribeGatewayStockOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayStockAsyncHandler;
			typedef Outcome<Error, Model::DescribeGatewayTypesResult> DescribeGatewayTypesOutcome;
			typedef std::future<DescribeGatewayTypesOutcome> DescribeGatewayTypesOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeGatewayTypesRequest&, const DescribeGatewayTypesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayTypesAsyncHandler;
			typedef Outcome<Error, Model::DescribeGatewaysResult> DescribeGatewaysOutcome;
			typedef std::future<DescribeGatewaysOutcome> DescribeGatewaysOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeGatewaysRequest&, const DescribeGatewaysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewaysAsyncHandler;
			typedef Outcome<Error, Model::DescribeGatewaysForCmsResult> DescribeGatewaysForCmsOutcome;
			typedef std::future<DescribeGatewaysForCmsOutcome> DescribeGatewaysForCmsOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeGatewaysForCmsRequest&, const DescribeGatewaysForCmsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewaysForCmsAsyncHandler;
			typedef Outcome<Error, Model::DescribeGatewaysTagsResult> DescribeGatewaysTagsOutcome;
			typedef std::future<DescribeGatewaysTagsOutcome> DescribeGatewaysTagsOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeGatewaysTagsRequest&, const DescribeGatewaysTagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewaysTagsAsyncHandler;
			typedef Outcome<Error, Model::DescribeKmsKeyResult> DescribeKmsKeyOutcome;
			typedef std::future<DescribeKmsKeyOutcome> DescribeKmsKeyOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeKmsKeyRequest&, const DescribeKmsKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeKmsKeyAsyncHandler;
			typedef Outcome<Error, Model::DescribeMqttConfigResult> DescribeMqttConfigOutcome;
			typedef std::future<DescribeMqttConfigOutcome> DescribeMqttConfigOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeMqttConfigRequest&, const DescribeMqttConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMqttConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeOssBucketInfoResult> DescribeOssBucketInfoOutcome;
			typedef std::future<DescribeOssBucketInfoOutcome> DescribeOssBucketInfoOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeOssBucketInfoRequest&, const DescribeOssBucketInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOssBucketInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeOssBucketsResult> DescribeOssBucketsOutcome;
			typedef std::future<DescribeOssBucketsOutcome> DescribeOssBucketsOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeOssBucketsRequest&, const DescribeOssBucketsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOssBucketsAsyncHandler;
			typedef Outcome<Error, Model::DescribePayAsYouGoPriceResult> DescribePayAsYouGoPriceOutcome;
			typedef std::future<DescribePayAsYouGoPriceOutcome> DescribePayAsYouGoPriceOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribePayAsYouGoPriceRequest&, const DescribePayAsYouGoPriceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePayAsYouGoPriceAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSharesBucketInfoForExpressSyncResult> DescribeSharesBucketInfoForExpressSyncOutcome;
			typedef std::future<DescribeSharesBucketInfoForExpressSyncOutcome> DescribeSharesBucketInfoForExpressSyncOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeSharesBucketInfoForExpressSyncRequest&, const DescribeSharesBucketInfoForExpressSyncOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSharesBucketInfoForExpressSyncAsyncHandler;
			typedef Outcome<Error, Model::DescribeStorageBundleResult> DescribeStorageBundleOutcome;
			typedef std::future<DescribeStorageBundleOutcome> DescribeStorageBundleOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeStorageBundleRequest&, const DescribeStorageBundleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStorageBundleAsyncHandler;
			typedef Outcome<Error, Model::DescribeStorageBundlesResult> DescribeStorageBundlesOutcome;
			typedef std::future<DescribeStorageBundlesOutcome> DescribeStorageBundlesOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeStorageBundlesRequest&, const DescribeStorageBundlesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStorageBundlesAsyncHandler;
			typedef Outcome<Error, Model::DescribeSubscriptionPriceResult> DescribeSubscriptionPriceOutcome;
			typedef std::future<DescribeSubscriptionPriceOutcome> DescribeSubscriptionPriceOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeSubscriptionPriceRequest&, const DescribeSubscriptionPriceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubscriptionPriceAsyncHandler;
			typedef Outcome<Error, Model::DescribeTasksResult> DescribeTasksOutcome;
			typedef std::future<DescribeTasksOutcome> DescribeTasksOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeTasksRequest&, const DescribeTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserBusinessStatusResult> DescribeUserBusinessStatusOutcome;
			typedef std::future<DescribeUserBusinessStatusOutcome> DescribeUserBusinessStatusOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeUserBusinessStatusRequest&, const DescribeUserBusinessStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserBusinessStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeVSwitchesResult> DescribeVSwitchesOutcome;
			typedef std::future<DescribeVSwitchesOutcome> DescribeVSwitchesOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeVSwitchesRequest&, const DescribeVSwitchesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVSwitchesAsyncHandler;
			typedef Outcome<Error, Model::DescribeVpcsResult> DescribeVpcsOutcome;
			typedef std::future<DescribeVpcsOutcome> DescribeVpcsOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeVpcsRequest&, const DescribeVpcsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVpcsAsyncHandler;
			typedef Outcome<Error, Model::DescribeZonesResult> DescribeZonesOutcome;
			typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DescribeZonesRequest&, const DescribeZonesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
			typedef Outcome<Error, Model::DisableGatewayLoggingResult> DisableGatewayLoggingOutcome;
			typedef std::future<DisableGatewayLoggingOutcome> DisableGatewayLoggingOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DisableGatewayLoggingRequest&, const DisableGatewayLoggingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableGatewayLoggingAsyncHandler;
			typedef Outcome<Error, Model::DisableGatewayNFSVersionResult> DisableGatewayNFSVersionOutcome;
			typedef std::future<DisableGatewayNFSVersionOutcome> DisableGatewayNFSVersionOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::DisableGatewayNFSVersionRequest&, const DisableGatewayNFSVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableGatewayNFSVersionAsyncHandler;
			typedef Outcome<Error, Model::EnableGatewayIpv6Result> EnableGatewayIpv6Outcome;
			typedef std::future<EnableGatewayIpv6Outcome> EnableGatewayIpv6OutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::EnableGatewayIpv6Request&, const EnableGatewayIpv6Outcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableGatewayIpv6AsyncHandler;
			typedef Outcome<Error, Model::EnableGatewayLoggingResult> EnableGatewayLoggingOutcome;
			typedef std::future<EnableGatewayLoggingOutcome> EnableGatewayLoggingOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::EnableGatewayLoggingRequest&, const EnableGatewayLoggingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableGatewayLoggingAsyncHandler;
			typedef Outcome<Error, Model::ExpandCacheDiskResult> ExpandCacheDiskOutcome;
			typedef std::future<ExpandCacheDiskOutcome> ExpandCacheDiskOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::ExpandCacheDiskRequest&, const ExpandCacheDiskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExpandCacheDiskAsyncHandler;
			typedef Outcome<Error, Model::ExpandGatewayNetworkBandwidthResult> ExpandGatewayNetworkBandwidthOutcome;
			typedef std::future<ExpandGatewayNetworkBandwidthOutcome> ExpandGatewayNetworkBandwidthOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::ExpandGatewayNetworkBandwidthRequest&, const ExpandGatewayNetworkBandwidthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExpandGatewayNetworkBandwidthAsyncHandler;
			typedef Outcome<Error, Model::GenerateGatewayTokenResult> GenerateGatewayTokenOutcome;
			typedef std::future<GenerateGatewayTokenOutcome> GenerateGatewayTokenOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::GenerateGatewayTokenRequest&, const GenerateGatewayTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateGatewayTokenAsyncHandler;
			typedef Outcome<Error, Model::GenerateMqttTokenResult> GenerateMqttTokenOutcome;
			typedef std::future<GenerateMqttTokenOutcome> GenerateMqttTokenOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::GenerateMqttTokenRequest&, const GenerateMqttTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateMqttTokenAsyncHandler;
			typedef Outcome<Error, Model::GenerateStsTokenResult> GenerateStsTokenOutcome;
			typedef std::future<GenerateStsTokenOutcome> GenerateStsTokenOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::GenerateStsTokenRequest&, const GenerateStsTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GenerateStsTokenAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ModifyGatewayResult> ModifyGatewayOutcome;
			typedef std::future<ModifyGatewayOutcome> ModifyGatewayOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::ModifyGatewayRequest&, const ModifyGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGatewayAsyncHandler;
			typedef Outcome<Error, Model::ModifyGatewayBlockVolumeResult> ModifyGatewayBlockVolumeOutcome;
			typedef std::future<ModifyGatewayBlockVolumeOutcome> ModifyGatewayBlockVolumeOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::ModifyGatewayBlockVolumeRequest&, const ModifyGatewayBlockVolumeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGatewayBlockVolumeAsyncHandler;
			typedef Outcome<Error, Model::ModifyGatewayClassResult> ModifyGatewayClassOutcome;
			typedef std::future<ModifyGatewayClassOutcome> ModifyGatewayClassOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::ModifyGatewayClassRequest&, const ModifyGatewayClassOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGatewayClassAsyncHandler;
			typedef Outcome<Error, Model::ModifyGatewayFileShareResult> ModifyGatewayFileShareOutcome;
			typedef std::future<ModifyGatewayFileShareOutcome> ModifyGatewayFileShareOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::ModifyGatewayFileShareRequest&, const ModifyGatewayFileShareOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGatewayFileShareAsyncHandler;
			typedef Outcome<Error, Model::ModifyGatewayFileShareWatermarkResult> ModifyGatewayFileShareWatermarkOutcome;
			typedef std::future<ModifyGatewayFileShareWatermarkOutcome> ModifyGatewayFileShareWatermarkOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::ModifyGatewayFileShareWatermarkRequest&, const ModifyGatewayFileShareWatermarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGatewayFileShareWatermarkAsyncHandler;
			typedef Outcome<Error, Model::ModifyStorageBundleResult> ModifyStorageBundleOutcome;
			typedef std::future<ModifyStorageBundleOutcome> ModifyStorageBundleOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::ModifyStorageBundleRequest&, const ModifyStorageBundleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStorageBundleAsyncHandler;
			typedef Outcome<Error, Model::OpenSgwServiceResult> OpenSgwServiceOutcome;
			typedef std::future<OpenSgwServiceOutcome> OpenSgwServiceOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::OpenSgwServiceRequest&, const OpenSgwServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenSgwServiceAsyncHandler;
			typedef Outcome<Error, Model::OperateGatewayResult> OperateGatewayOutcome;
			typedef std::future<OperateGatewayOutcome> OperateGatewayOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::OperateGatewayRequest&, const OperateGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OperateGatewayAsyncHandler;
			typedef Outcome<Error, Model::ReleaseServiceResult> ReleaseServiceOutcome;
			typedef std::future<ReleaseServiceOutcome> ReleaseServiceOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::ReleaseServiceRequest&, const ReleaseServiceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseServiceAsyncHandler;
			typedef Outcome<Error, Model::RemoveSharesFromExpressSyncResult> RemoveSharesFromExpressSyncOutcome;
			typedef std::future<RemoveSharesFromExpressSyncOutcome> RemoveSharesFromExpressSyncOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::RemoveSharesFromExpressSyncRequest&, const RemoveSharesFromExpressSyncOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveSharesFromExpressSyncAsyncHandler;
			typedef Outcome<Error, Model::RemoveTagsFromGatewayResult> RemoveTagsFromGatewayOutcome;
			typedef std::future<RemoveTagsFromGatewayOutcome> RemoveTagsFromGatewayOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::RemoveTagsFromGatewayRequest&, const RemoveTagsFromGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RemoveTagsFromGatewayAsyncHandler;
			typedef Outcome<Error, Model::ReportBlockVolumesResult> ReportBlockVolumesOutcome;
			typedef std::future<ReportBlockVolumesOutcome> ReportBlockVolumesOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::ReportBlockVolumesRequest&, const ReportBlockVolumesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReportBlockVolumesAsyncHandler;
			typedef Outcome<Error, Model::ReportFileSharesResult> ReportFileSharesOutcome;
			typedef std::future<ReportFileSharesOutcome> ReportFileSharesOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::ReportFileSharesRequest&, const ReportFileSharesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReportFileSharesAsyncHandler;
			typedef Outcome<Error, Model::ReportGatewayInfoResult> ReportGatewayInfoOutcome;
			typedef std::future<ReportGatewayInfoOutcome> ReportGatewayInfoOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::ReportGatewayInfoRequest&, const ReportGatewayInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReportGatewayInfoAsyncHandler;
			typedef Outcome<Error, Model::ReportGatewayUsageResult> ReportGatewayUsageOutcome;
			typedef std::future<ReportGatewayUsageOutcome> ReportGatewayUsageOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::ReportGatewayUsageRequest&, const ReportGatewayUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReportGatewayUsageAsyncHandler;
			typedef Outcome<Error, Model::ResetGatewayPasswordResult> ResetGatewayPasswordOutcome;
			typedef std::future<ResetGatewayPasswordOutcome> ResetGatewayPasswordOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::ResetGatewayPasswordRequest&, const ResetGatewayPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetGatewayPasswordAsyncHandler;
			typedef Outcome<Error, Model::RestartFileSharesResult> RestartFileSharesOutcome;
			typedef std::future<RestartFileSharesOutcome> RestartFileSharesOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::RestartFileSharesRequest&, const RestartFileSharesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RestartFileSharesAsyncHandler;
			typedef Outcome<Error, Model::SetGatewayADInfoResult> SetGatewayADInfoOutcome;
			typedef std::future<SetGatewayADInfoOutcome> SetGatewayADInfoOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::SetGatewayADInfoRequest&, const SetGatewayADInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetGatewayADInfoAsyncHandler;
			typedef Outcome<Error, Model::SetGatewayDNSResult> SetGatewayDNSOutcome;
			typedef std::future<SetGatewayDNSOutcome> SetGatewayDNSOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::SetGatewayDNSRequest&, const SetGatewayDNSOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetGatewayDNSAsyncHandler;
			typedef Outcome<Error, Model::SetGatewayLDAPInfoResult> SetGatewayLDAPInfoOutcome;
			typedef std::future<SetGatewayLDAPInfoOutcome> SetGatewayLDAPInfoOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::SetGatewayLDAPInfoRequest&, const SetGatewayLDAPInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetGatewayLDAPInfoAsyncHandler;
			typedef Outcome<Error, Model::SwitchCSGClientsReverseSyncConfigurationResult> SwitchCSGClientsReverseSyncConfigurationOutcome;
			typedef std::future<SwitchCSGClientsReverseSyncConfigurationOutcome> SwitchCSGClientsReverseSyncConfigurationOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::SwitchCSGClientsReverseSyncConfigurationRequest&, const SwitchCSGClientsReverseSyncConfigurationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchCSGClientsReverseSyncConfigurationAsyncHandler;
			typedef Outcome<Error, Model::SwitchGatewayExpirationPolicyResult> SwitchGatewayExpirationPolicyOutcome;
			typedef std::future<SwitchGatewayExpirationPolicyOutcome> SwitchGatewayExpirationPolicyOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::SwitchGatewayExpirationPolicyRequest&, const SwitchGatewayExpirationPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchGatewayExpirationPolicyAsyncHandler;
			typedef Outcome<Error, Model::SwitchToSubscriptionResult> SwitchToSubscriptionOutcome;
			typedef std::future<SwitchToSubscriptionOutcome> SwitchToSubscriptionOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::SwitchToSubscriptionRequest&, const SwitchToSubscriptionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchToSubscriptionAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::TriggerGatewayRemoteSyncResult> TriggerGatewayRemoteSyncOutcome;
			typedef std::future<TriggerGatewayRemoteSyncOutcome> TriggerGatewayRemoteSyncOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::TriggerGatewayRemoteSyncRequest&, const TriggerGatewayRemoteSyncOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TriggerGatewayRemoteSyncAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UpdateGatewayBlockVolumeResult> UpdateGatewayBlockVolumeOutcome;
			typedef std::future<UpdateGatewayBlockVolumeOutcome> UpdateGatewayBlockVolumeOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::UpdateGatewayBlockVolumeRequest&, const UpdateGatewayBlockVolumeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGatewayBlockVolumeAsyncHandler;
			typedef Outcome<Error, Model::UpdateGatewayFileShareResult> UpdateGatewayFileShareOutcome;
			typedef std::future<UpdateGatewayFileShareOutcome> UpdateGatewayFileShareOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::UpdateGatewayFileShareRequest&, const UpdateGatewayFileShareOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateGatewayFileShareAsyncHandler;
			typedef Outcome<Error, Model::UpgradeGatewayResult> UpgradeGatewayOutcome;
			typedef std::future<UpgradeGatewayOutcome> UpgradeGatewayOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::UpgradeGatewayRequest&, const UpgradeGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeGatewayAsyncHandler;
			typedef Outcome<Error, Model::UploadCSGClientLogResult> UploadCSGClientLogOutcome;
			typedef std::future<UploadCSGClientLogOutcome> UploadCSGClientLogOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::UploadCSGClientLogRequest&, const UploadCSGClientLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadCSGClientLogAsyncHandler;
			typedef Outcome<Error, Model::UploadGatewayLogResult> UploadGatewayLogOutcome;
			typedef std::future<UploadGatewayLogOutcome> UploadGatewayLogOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::UploadGatewayLogRequest&, const UploadGatewayLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadGatewayLogAsyncHandler;
			typedef Outcome<Error, Model::ValidateExpressSyncConfigResult> ValidateExpressSyncConfigOutcome;
			typedef std::future<ValidateExpressSyncConfigOutcome> ValidateExpressSyncConfigOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::ValidateExpressSyncConfigRequest&, const ValidateExpressSyncConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ValidateExpressSyncConfigAsyncHandler;
			typedef Outcome<Error, Model::ValidateGatewayNameResult> ValidateGatewayNameOutcome;
			typedef std::future<ValidateGatewayNameOutcome> ValidateGatewayNameOutcomeCallable;
			typedef std::function<void(const SgwClient*, const Model::ValidateGatewayNameRequest&, const ValidateGatewayNameOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ValidateGatewayNameAsyncHandler;

			SgwClient(const Credentials &credentials, const ClientConfiguration &configuration);
			SgwClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			SgwClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~SgwClient();
			ActivateAllInOneGatewayOutcome activateAllInOneGateway(const Model::ActivateAllInOneGatewayRequest &request)const;
			void activateAllInOneGatewayAsync(const Model::ActivateAllInOneGatewayRequest& request, const ActivateAllInOneGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ActivateAllInOneGatewayOutcomeCallable activateAllInOneGatewayCallable(const Model::ActivateAllInOneGatewayRequest& request) const;
			ActivateGatewayOutcome activateGateway(const Model::ActivateGatewayRequest &request)const;
			void activateGatewayAsync(const Model::ActivateGatewayRequest& request, const ActivateGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ActivateGatewayOutcomeCallable activateGatewayCallable(const Model::ActivateGatewayRequest& request) const;
			AddSharesToExpressSyncOutcome addSharesToExpressSync(const Model::AddSharesToExpressSyncRequest &request)const;
			void addSharesToExpressSyncAsync(const Model::AddSharesToExpressSyncRequest& request, const AddSharesToExpressSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddSharesToExpressSyncOutcomeCallable addSharesToExpressSyncCallable(const Model::AddSharesToExpressSyncRequest& request) const;
			AddTagsToGatewayOutcome addTagsToGateway(const Model::AddTagsToGatewayRequest &request)const;
			void addTagsToGatewayAsync(const Model::AddTagsToGatewayRequest& request, const AddTagsToGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddTagsToGatewayOutcomeCallable addTagsToGatewayCallable(const Model::AddTagsToGatewayRequest& request) const;
			CheckActivationKeyOutcome checkActivationKey(const Model::CheckActivationKeyRequest &request)const;
			void checkActivationKeyAsync(const Model::CheckActivationKeyRequest& request, const CheckActivationKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckActivationKeyOutcomeCallable checkActivationKeyCallable(const Model::CheckActivationKeyRequest& request) const;
			CheckBlockVolumeNameOutcome checkBlockVolumeName(const Model::CheckBlockVolumeNameRequest &request)const;
			void checkBlockVolumeNameAsync(const Model::CheckBlockVolumeNameRequest& request, const CheckBlockVolumeNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckBlockVolumeNameOutcomeCallable checkBlockVolumeNameCallable(const Model::CheckBlockVolumeNameRequest& request) const;
			CheckGatewayEssdSupportOutcome checkGatewayEssdSupport(const Model::CheckGatewayEssdSupportRequest &request)const;
			void checkGatewayEssdSupportAsync(const Model::CheckGatewayEssdSupportRequest& request, const CheckGatewayEssdSupportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckGatewayEssdSupportOutcomeCallable checkGatewayEssdSupportCallable(const Model::CheckGatewayEssdSupportRequest& request) const;
			CheckMnsServiceOutcome checkMnsService(const Model::CheckMnsServiceRequest &request)const;
			void checkMnsServiceAsync(const Model::CheckMnsServiceRequest& request, const CheckMnsServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckMnsServiceOutcomeCallable checkMnsServiceCallable(const Model::CheckMnsServiceRequest& request) const;
			CheckRoleOutcome checkRole(const Model::CheckRoleRequest &request)const;
			void checkRoleAsync(const Model::CheckRoleRequest& request, const CheckRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckRoleOutcomeCallable checkRoleCallable(const Model::CheckRoleRequest& request) const;
			CheckSlrRoleOutcome checkSlrRole(const Model::CheckSlrRoleRequest &request)const;
			void checkSlrRoleAsync(const Model::CheckSlrRoleRequest& request, const CheckSlrRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckSlrRoleOutcomeCallable checkSlrRoleCallable(const Model::CheckSlrRoleRequest& request) const;
			CheckUpgradeVersionOutcome checkUpgradeVersion(const Model::CheckUpgradeVersionRequest &request)const;
			void checkUpgradeVersionAsync(const Model::CheckUpgradeVersionRequest& request, const CheckUpgradeVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CheckUpgradeVersionOutcomeCallable checkUpgradeVersionCallable(const Model::CheckUpgradeVersionRequest& request) const;
			CreateCacheOutcome createCache(const Model::CreateCacheRequest &request)const;
			void createCacheAsync(const Model::CreateCacheRequest& request, const CreateCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCacheOutcomeCallable createCacheCallable(const Model::CreateCacheRequest& request) const;
			CreateElasticGatewayPrivateZoneOutcome createElasticGatewayPrivateZone(const Model::CreateElasticGatewayPrivateZoneRequest &request)const;
			void createElasticGatewayPrivateZoneAsync(const Model::CreateElasticGatewayPrivateZoneRequest& request, const CreateElasticGatewayPrivateZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateElasticGatewayPrivateZoneOutcomeCallable createElasticGatewayPrivateZoneCallable(const Model::CreateElasticGatewayPrivateZoneRequest& request) const;
			CreateExpressSyncOutcome createExpressSync(const Model::CreateExpressSyncRequest &request)const;
			void createExpressSyncAsync(const Model::CreateExpressSyncRequest& request, const CreateExpressSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateExpressSyncOutcomeCallable createExpressSyncCallable(const Model::CreateExpressSyncRequest& request) const;
			CreateGatewayOutcome createGateway(const Model::CreateGatewayRequest &request)const;
			void createGatewayAsync(const Model::CreateGatewayRequest& request, const CreateGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGatewayOutcomeCallable createGatewayCallable(const Model::CreateGatewayRequest& request) const;
			CreateGatewayBlockVolumeOutcome createGatewayBlockVolume(const Model::CreateGatewayBlockVolumeRequest &request)const;
			void createGatewayBlockVolumeAsync(const Model::CreateGatewayBlockVolumeRequest& request, const CreateGatewayBlockVolumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGatewayBlockVolumeOutcomeCallable createGatewayBlockVolumeCallable(const Model::CreateGatewayBlockVolumeRequest& request) const;
			CreateGatewayCacheDiskOutcome createGatewayCacheDisk(const Model::CreateGatewayCacheDiskRequest &request)const;
			void createGatewayCacheDiskAsync(const Model::CreateGatewayCacheDiskRequest& request, const CreateGatewayCacheDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGatewayCacheDiskOutcomeCallable createGatewayCacheDiskCallable(const Model::CreateGatewayCacheDiskRequest& request) const;
			CreateGatewayFileShareOutcome createGatewayFileShare(const Model::CreateGatewayFileShareRequest &request)const;
			void createGatewayFileShareAsync(const Model::CreateGatewayFileShareRequest& request, const CreateGatewayFileShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGatewayFileShareOutcomeCallable createGatewayFileShareCallable(const Model::CreateGatewayFileShareRequest& request) const;
			CreateGatewayLoggingOutcome createGatewayLogging(const Model::CreateGatewayLoggingRequest &request)const;
			void createGatewayLoggingAsync(const Model::CreateGatewayLoggingRequest& request, const CreateGatewayLoggingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGatewayLoggingOutcomeCallable createGatewayLoggingCallable(const Model::CreateGatewayLoggingRequest& request) const;
			CreateGatewaySMBUserOutcome createGatewaySMBUser(const Model::CreateGatewaySMBUserRequest &request)const;
			void createGatewaySMBUserAsync(const Model::CreateGatewaySMBUserRequest& request, const CreateGatewaySMBUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateGatewaySMBUserOutcomeCallable createGatewaySMBUserCallable(const Model::CreateGatewaySMBUserRequest& request) const;
			CreateStorageBundleOutcome createStorageBundle(const Model::CreateStorageBundleRequest &request)const;
			void createStorageBundleAsync(const Model::CreateStorageBundleRequest& request, const CreateStorageBundleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateStorageBundleOutcomeCallable createStorageBundleCallable(const Model::CreateStorageBundleRequest& request) const;
			DeleteCSGClientsOutcome deleteCSGClients(const Model::DeleteCSGClientsRequest &request)const;
			void deleteCSGClientsAsync(const Model::DeleteCSGClientsRequest& request, const DeleteCSGClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCSGClientsOutcomeCallable deleteCSGClientsCallable(const Model::DeleteCSGClientsRequest& request) const;
			DeleteElasticGatewayPrivateZoneOutcome deleteElasticGatewayPrivateZone(const Model::DeleteElasticGatewayPrivateZoneRequest &request)const;
			void deleteElasticGatewayPrivateZoneAsync(const Model::DeleteElasticGatewayPrivateZoneRequest& request, const DeleteElasticGatewayPrivateZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteElasticGatewayPrivateZoneOutcomeCallable deleteElasticGatewayPrivateZoneCallable(const Model::DeleteElasticGatewayPrivateZoneRequest& request) const;
			DeleteExpressSyncOutcome deleteExpressSync(const Model::DeleteExpressSyncRequest &request)const;
			void deleteExpressSyncAsync(const Model::DeleteExpressSyncRequest& request, const DeleteExpressSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteExpressSyncOutcomeCallable deleteExpressSyncCallable(const Model::DeleteExpressSyncRequest& request) const;
			DeleteGatewayOutcome deleteGateway(const Model::DeleteGatewayRequest &request)const;
			void deleteGatewayAsync(const Model::DeleteGatewayRequest& request, const DeleteGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGatewayOutcomeCallable deleteGatewayCallable(const Model::DeleteGatewayRequest& request) const;
			DeleteGatewayBlockVolumesOutcome deleteGatewayBlockVolumes(const Model::DeleteGatewayBlockVolumesRequest &request)const;
			void deleteGatewayBlockVolumesAsync(const Model::DeleteGatewayBlockVolumesRequest& request, const DeleteGatewayBlockVolumesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGatewayBlockVolumesOutcomeCallable deleteGatewayBlockVolumesCallable(const Model::DeleteGatewayBlockVolumesRequest& request) const;
			DeleteGatewayCacheDiskOutcome deleteGatewayCacheDisk(const Model::DeleteGatewayCacheDiskRequest &request)const;
			void deleteGatewayCacheDiskAsync(const Model::DeleteGatewayCacheDiskRequest& request, const DeleteGatewayCacheDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGatewayCacheDiskOutcomeCallable deleteGatewayCacheDiskCallable(const Model::DeleteGatewayCacheDiskRequest& request) const;
			DeleteGatewayFileSharesOutcome deleteGatewayFileShares(const Model::DeleteGatewayFileSharesRequest &request)const;
			void deleteGatewayFileSharesAsync(const Model::DeleteGatewayFileSharesRequest& request, const DeleteGatewayFileSharesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGatewayFileSharesOutcomeCallable deleteGatewayFileSharesCallable(const Model::DeleteGatewayFileSharesRequest& request) const;
			DeleteGatewayLoggingOutcome deleteGatewayLogging(const Model::DeleteGatewayLoggingRequest &request)const;
			void deleteGatewayLoggingAsync(const Model::DeleteGatewayLoggingRequest& request, const DeleteGatewayLoggingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGatewayLoggingOutcomeCallable deleteGatewayLoggingCallable(const Model::DeleteGatewayLoggingRequest& request) const;
			DeleteGatewaySMBUserOutcome deleteGatewaySMBUser(const Model::DeleteGatewaySMBUserRequest &request)const;
			void deleteGatewaySMBUserAsync(const Model::DeleteGatewaySMBUserRequest& request, const DeleteGatewaySMBUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGatewaySMBUserOutcomeCallable deleteGatewaySMBUserCallable(const Model::DeleteGatewaySMBUserRequest& request) const;
			DeleteStorageBundleOutcome deleteStorageBundle(const Model::DeleteStorageBundleRequest &request)const;
			void deleteStorageBundleAsync(const Model::DeleteStorageBundleRequest& request, const DeleteStorageBundleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteStorageBundleOutcomeCallable deleteStorageBundleCallable(const Model::DeleteStorageBundleRequest& request) const;
			DeployCSGClientsOutcome deployCSGClients(const Model::DeployCSGClientsRequest &request)const;
			void deployCSGClientsAsync(const Model::DeployCSGClientsRequest& request, const DeployCSGClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeployCSGClientsOutcomeCallable deployCSGClientsCallable(const Model::DeployCSGClientsRequest& request) const;
			DeployCacheDiskOutcome deployCacheDisk(const Model::DeployCacheDiskRequest &request)const;
			void deployCacheDiskAsync(const Model::DeployCacheDiskRequest& request, const DeployCacheDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeployCacheDiskOutcomeCallable deployCacheDiskCallable(const Model::DeployCacheDiskRequest& request) const;
			DeployGatewayOutcome deployGateway(const Model::DeployGatewayRequest &request)const;
			void deployGatewayAsync(const Model::DeployGatewayRequest& request, const DeployGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeployGatewayOutcomeCallable deployGatewayCallable(const Model::DeployGatewayRequest& request) const;
			DescribeAccountConfigOutcome describeAccountConfig(const Model::DescribeAccountConfigRequest &request)const;
			void describeAccountConfigAsync(const Model::DescribeAccountConfigRequest& request, const DescribeAccountConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAccountConfigOutcomeCallable describeAccountConfigCallable(const Model::DescribeAccountConfigRequest& request) const;
			DescribeBlockVolumeSnapshotsOutcome describeBlockVolumeSnapshots(const Model::DescribeBlockVolumeSnapshotsRequest &request)const;
			void describeBlockVolumeSnapshotsAsync(const Model::DescribeBlockVolumeSnapshotsRequest& request, const DescribeBlockVolumeSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBlockVolumeSnapshotsOutcomeCallable describeBlockVolumeSnapshotsCallable(const Model::DescribeBlockVolumeSnapshotsRequest& request) const;
			DescribeCSGClientTasksOutcome describeCSGClientTasks(const Model::DescribeCSGClientTasksRequest &request)const;
			void describeCSGClientTasksAsync(const Model::DescribeCSGClientTasksRequest& request, const DescribeCSGClientTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCSGClientTasksOutcomeCallable describeCSGClientTasksCallable(const Model::DescribeCSGClientTasksRequest& request) const;
			DescribeCSGClientsOutcome describeCSGClients(const Model::DescribeCSGClientsRequest &request)const;
			void describeCSGClientsAsync(const Model::DescribeCSGClientsRequest& request, const DescribeCSGClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCSGClientsOutcomeCallable describeCSGClientsCallable(const Model::DescribeCSGClientsRequest& request) const;
			DescribeDashboardOutcome describeDashboard(const Model::DescribeDashboardRequest &request)const;
			void describeDashboardAsync(const Model::DescribeDashboardRequest& request, const DescribeDashboardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDashboardOutcomeCallable describeDashboardCallable(const Model::DescribeDashboardRequest& request) const;
			DescribeExpireCachesOutcome describeExpireCaches(const Model::DescribeExpireCachesRequest &request)const;
			void describeExpireCachesAsync(const Model::DescribeExpireCachesRequest& request, const DescribeExpireCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExpireCachesOutcomeCallable describeExpireCachesCallable(const Model::DescribeExpireCachesRequest& request) const;
			DescribeExpressSyncSharesOutcome describeExpressSyncShares(const Model::DescribeExpressSyncSharesRequest &request)const;
			void describeExpressSyncSharesAsync(const Model::DescribeExpressSyncSharesRequest& request, const DescribeExpressSyncSharesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExpressSyncSharesOutcomeCallable describeExpressSyncSharesCallable(const Model::DescribeExpressSyncSharesRequest& request) const;
			DescribeExpressSyncsOutcome describeExpressSyncs(const Model::DescribeExpressSyncsRequest &request)const;
			void describeExpressSyncsAsync(const Model::DescribeExpressSyncsRequest& request, const DescribeExpressSyncsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeExpressSyncsOutcomeCallable describeExpressSyncsCallable(const Model::DescribeExpressSyncsRequest& request) const;
			DescribeGatewayOutcome describeGateway(const Model::DescribeGatewayRequest &request)const;
			void describeGatewayAsync(const Model::DescribeGatewayRequest& request, const DescribeGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGatewayOutcomeCallable describeGatewayCallable(const Model::DescribeGatewayRequest& request) const;
			DescribeGatewayADInfoOutcome describeGatewayADInfo(const Model::DescribeGatewayADInfoRequest &request)const;
			void describeGatewayADInfoAsync(const Model::DescribeGatewayADInfoRequest& request, const DescribeGatewayADInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGatewayADInfoOutcomeCallable describeGatewayADInfoCallable(const Model::DescribeGatewayADInfoRequest& request) const;
			DescribeGatewayActionsOutcome describeGatewayActions(const Model::DescribeGatewayActionsRequest &request)const;
			void describeGatewayActionsAsync(const Model::DescribeGatewayActionsRequest& request, const DescribeGatewayActionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGatewayActionsOutcomeCallable describeGatewayActionsCallable(const Model::DescribeGatewayActionsRequest& request) const;
			DescribeGatewayAuthInfoOutcome describeGatewayAuthInfo(const Model::DescribeGatewayAuthInfoRequest &request)const;
			void describeGatewayAuthInfoAsync(const Model::DescribeGatewayAuthInfoRequest& request, const DescribeGatewayAuthInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGatewayAuthInfoOutcomeCallable describeGatewayAuthInfoCallable(const Model::DescribeGatewayAuthInfoRequest& request) const;
			DescribeGatewayBlockVolumesOutcome describeGatewayBlockVolumes(const Model::DescribeGatewayBlockVolumesRequest &request)const;
			void describeGatewayBlockVolumesAsync(const Model::DescribeGatewayBlockVolumesRequest& request, const DescribeGatewayBlockVolumesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGatewayBlockVolumesOutcomeCallable describeGatewayBlockVolumesCallable(const Model::DescribeGatewayBlockVolumesRequest& request) const;
			DescribeGatewayBucketCachesOutcome describeGatewayBucketCaches(const Model::DescribeGatewayBucketCachesRequest &request)const;
			void describeGatewayBucketCachesAsync(const Model::DescribeGatewayBucketCachesRequest& request, const DescribeGatewayBucketCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGatewayBucketCachesOutcomeCallable describeGatewayBucketCachesCallable(const Model::DescribeGatewayBucketCachesRequest& request) const;
			DescribeGatewayCachesOutcome describeGatewayCaches(const Model::DescribeGatewayCachesRequest &request)const;
			void describeGatewayCachesAsync(const Model::DescribeGatewayCachesRequest& request, const DescribeGatewayCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGatewayCachesOutcomeCallable describeGatewayCachesCallable(const Model::DescribeGatewayCachesRequest& request) const;
			DescribeGatewayCapacityLimitOutcome describeGatewayCapacityLimit(const Model::DescribeGatewayCapacityLimitRequest &request)const;
			void describeGatewayCapacityLimitAsync(const Model::DescribeGatewayCapacityLimitRequest& request, const DescribeGatewayCapacityLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGatewayCapacityLimitOutcomeCallable describeGatewayCapacityLimitCallable(const Model::DescribeGatewayCapacityLimitRequest& request) const;
			DescribeGatewayCategoriesOutcome describeGatewayCategories(const Model::DescribeGatewayCategoriesRequest &request)const;
			void describeGatewayCategoriesAsync(const Model::DescribeGatewayCategoriesRequest& request, const DescribeGatewayCategoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGatewayCategoriesOutcomeCallable describeGatewayCategoriesCallable(const Model::DescribeGatewayCategoriesRequest& request) const;
			DescribeGatewayClassesOutcome describeGatewayClasses(const Model::DescribeGatewayClassesRequest &request)const;
			void describeGatewayClassesAsync(const Model::DescribeGatewayClassesRequest& request, const DescribeGatewayClassesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGatewayClassesOutcomeCallable describeGatewayClassesCallable(const Model::DescribeGatewayClassesRequest& request) const;
			DescribeGatewayCredentialOutcome describeGatewayCredential(const Model::DescribeGatewayCredentialRequest &request)const;
			void describeGatewayCredentialAsync(const Model::DescribeGatewayCredentialRequest& request, const DescribeGatewayCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGatewayCredentialOutcomeCallable describeGatewayCredentialCallable(const Model::DescribeGatewayCredentialRequest& request) const;
			DescribeGatewayDNSOutcome describeGatewayDNS(const Model::DescribeGatewayDNSRequest &request)const;
			void describeGatewayDNSAsync(const Model::DescribeGatewayDNSRequest& request, const DescribeGatewayDNSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGatewayDNSOutcomeCallable describeGatewayDNSCallable(const Model::DescribeGatewayDNSRequest& request) const;
			DescribeGatewayFileSharesOutcome describeGatewayFileShares(const Model::DescribeGatewayFileSharesRequest &request)const;
			void describeGatewayFileSharesAsync(const Model::DescribeGatewayFileSharesRequest& request, const DescribeGatewayFileSharesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGatewayFileSharesOutcomeCallable describeGatewayFileSharesCallable(const Model::DescribeGatewayFileSharesRequest& request) const;
			DescribeGatewayFileStatusOutcome describeGatewayFileStatus(const Model::DescribeGatewayFileStatusRequest &request)const;
			void describeGatewayFileStatusAsync(const Model::DescribeGatewayFileStatusRequest& request, const DescribeGatewayFileStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGatewayFileStatusOutcomeCallable describeGatewayFileStatusCallable(const Model::DescribeGatewayFileStatusRequest& request) const;
			DescribeGatewayImagesOutcome describeGatewayImages(const Model::DescribeGatewayImagesRequest &request)const;
			void describeGatewayImagesAsync(const Model::DescribeGatewayImagesRequest& request, const DescribeGatewayImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGatewayImagesOutcomeCallable describeGatewayImagesCallable(const Model::DescribeGatewayImagesRequest& request) const;
			DescribeGatewayInfoOutcome describeGatewayInfo(const Model::DescribeGatewayInfoRequest &request)const;
			void describeGatewayInfoAsync(const Model::DescribeGatewayInfoRequest& request, const DescribeGatewayInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGatewayInfoOutcomeCallable describeGatewayInfoCallable(const Model::DescribeGatewayInfoRequest& request) const;
			DescribeGatewayLDAPInfoOutcome describeGatewayLDAPInfo(const Model::DescribeGatewayLDAPInfoRequest &request)const;
			void describeGatewayLDAPInfoAsync(const Model::DescribeGatewayLDAPInfoRequest& request, const DescribeGatewayLDAPInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGatewayLDAPInfoOutcomeCallable describeGatewayLDAPInfoCallable(const Model::DescribeGatewayLDAPInfoRequest& request) const;
			DescribeGatewayLocationsOutcome describeGatewayLocations(const Model::DescribeGatewayLocationsRequest &request)const;
			void describeGatewayLocationsAsync(const Model::DescribeGatewayLocationsRequest& request, const DescribeGatewayLocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGatewayLocationsOutcomeCallable describeGatewayLocationsCallable(const Model::DescribeGatewayLocationsRequest& request) const;
			DescribeGatewayLoggingOutcome describeGatewayLogging(const Model::DescribeGatewayLoggingRequest &request)const;
			void describeGatewayLoggingAsync(const Model::DescribeGatewayLoggingRequest& request, const DescribeGatewayLoggingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGatewayLoggingOutcomeCallable describeGatewayLoggingCallable(const Model::DescribeGatewayLoggingRequest& request) const;
			DescribeGatewayLogsOutcome describeGatewayLogs(const Model::DescribeGatewayLogsRequest &request)const;
			void describeGatewayLogsAsync(const Model::DescribeGatewayLogsRequest& request, const DescribeGatewayLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGatewayLogsOutcomeCallable describeGatewayLogsCallable(const Model::DescribeGatewayLogsRequest& request) const;
			DescribeGatewayModificationClassesOutcome describeGatewayModificationClasses(const Model::DescribeGatewayModificationClassesRequest &request)const;
			void describeGatewayModificationClassesAsync(const Model::DescribeGatewayModificationClassesRequest& request, const DescribeGatewayModificationClassesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGatewayModificationClassesOutcomeCallable describeGatewayModificationClassesCallable(const Model::DescribeGatewayModificationClassesRequest& request) const;
			DescribeGatewayNFSClientsOutcome describeGatewayNFSClients(const Model::DescribeGatewayNFSClientsRequest &request)const;
			void describeGatewayNFSClientsAsync(const Model::DescribeGatewayNFSClientsRequest& request, const DescribeGatewayNFSClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGatewayNFSClientsOutcomeCallable describeGatewayNFSClientsCallable(const Model::DescribeGatewayNFSClientsRequest& request) const;
			DescribeGatewaySMBUsersOutcome describeGatewaySMBUsers(const Model::DescribeGatewaySMBUsersRequest &request)const;
			void describeGatewaySMBUsersAsync(const Model::DescribeGatewaySMBUsersRequest& request, const DescribeGatewaySMBUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGatewaySMBUsersOutcomeCallable describeGatewaySMBUsersCallable(const Model::DescribeGatewaySMBUsersRequest& request) const;
			DescribeGatewayStatisticsOutcome describeGatewayStatistics(const Model::DescribeGatewayStatisticsRequest &request)const;
			void describeGatewayStatisticsAsync(const Model::DescribeGatewayStatisticsRequest& request, const DescribeGatewayStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGatewayStatisticsOutcomeCallable describeGatewayStatisticsCallable(const Model::DescribeGatewayStatisticsRequest& request) const;
			DescribeGatewayStockOutcome describeGatewayStock(const Model::DescribeGatewayStockRequest &request)const;
			void describeGatewayStockAsync(const Model::DescribeGatewayStockRequest& request, const DescribeGatewayStockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGatewayStockOutcomeCallable describeGatewayStockCallable(const Model::DescribeGatewayStockRequest& request) const;
			DescribeGatewayTypesOutcome describeGatewayTypes(const Model::DescribeGatewayTypesRequest &request)const;
			void describeGatewayTypesAsync(const Model::DescribeGatewayTypesRequest& request, const DescribeGatewayTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGatewayTypesOutcomeCallable describeGatewayTypesCallable(const Model::DescribeGatewayTypesRequest& request) const;
			DescribeGatewaysOutcome describeGateways(const Model::DescribeGatewaysRequest &request)const;
			void describeGatewaysAsync(const Model::DescribeGatewaysRequest& request, const DescribeGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGatewaysOutcomeCallable describeGatewaysCallable(const Model::DescribeGatewaysRequest& request) const;
			DescribeGatewaysForCmsOutcome describeGatewaysForCms(const Model::DescribeGatewaysForCmsRequest &request)const;
			void describeGatewaysForCmsAsync(const Model::DescribeGatewaysForCmsRequest& request, const DescribeGatewaysForCmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGatewaysForCmsOutcomeCallable describeGatewaysForCmsCallable(const Model::DescribeGatewaysForCmsRequest& request) const;
			DescribeGatewaysTagsOutcome describeGatewaysTags(const Model::DescribeGatewaysTagsRequest &request)const;
			void describeGatewaysTagsAsync(const Model::DescribeGatewaysTagsRequest& request, const DescribeGatewaysTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGatewaysTagsOutcomeCallable describeGatewaysTagsCallable(const Model::DescribeGatewaysTagsRequest& request) const;
			DescribeKmsKeyOutcome describeKmsKey(const Model::DescribeKmsKeyRequest &request)const;
			void describeKmsKeyAsync(const Model::DescribeKmsKeyRequest& request, const DescribeKmsKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeKmsKeyOutcomeCallable describeKmsKeyCallable(const Model::DescribeKmsKeyRequest& request) const;
			DescribeMqttConfigOutcome describeMqttConfig(const Model::DescribeMqttConfigRequest &request)const;
			void describeMqttConfigAsync(const Model::DescribeMqttConfigRequest& request, const DescribeMqttConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeMqttConfigOutcomeCallable describeMqttConfigCallable(const Model::DescribeMqttConfigRequest& request) const;
			DescribeOssBucketInfoOutcome describeOssBucketInfo(const Model::DescribeOssBucketInfoRequest &request)const;
			void describeOssBucketInfoAsync(const Model::DescribeOssBucketInfoRequest& request, const DescribeOssBucketInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOssBucketInfoOutcomeCallable describeOssBucketInfoCallable(const Model::DescribeOssBucketInfoRequest& request) const;
			DescribeOssBucketsOutcome describeOssBuckets(const Model::DescribeOssBucketsRequest &request)const;
			void describeOssBucketsAsync(const Model::DescribeOssBucketsRequest& request, const DescribeOssBucketsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOssBucketsOutcomeCallable describeOssBucketsCallable(const Model::DescribeOssBucketsRequest& request) const;
			DescribePayAsYouGoPriceOutcome describePayAsYouGoPrice(const Model::DescribePayAsYouGoPriceRequest &request)const;
			void describePayAsYouGoPriceAsync(const Model::DescribePayAsYouGoPriceRequest& request, const DescribePayAsYouGoPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePayAsYouGoPriceOutcomeCallable describePayAsYouGoPriceCallable(const Model::DescribePayAsYouGoPriceRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeSharesBucketInfoForExpressSyncOutcome describeSharesBucketInfoForExpressSync(const Model::DescribeSharesBucketInfoForExpressSyncRequest &request)const;
			void describeSharesBucketInfoForExpressSyncAsync(const Model::DescribeSharesBucketInfoForExpressSyncRequest& request, const DescribeSharesBucketInfoForExpressSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSharesBucketInfoForExpressSyncOutcomeCallable describeSharesBucketInfoForExpressSyncCallable(const Model::DescribeSharesBucketInfoForExpressSyncRequest& request) const;
			DescribeStorageBundleOutcome describeStorageBundle(const Model::DescribeStorageBundleRequest &request)const;
			void describeStorageBundleAsync(const Model::DescribeStorageBundleRequest& request, const DescribeStorageBundleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStorageBundleOutcomeCallable describeStorageBundleCallable(const Model::DescribeStorageBundleRequest& request) const;
			DescribeStorageBundlesOutcome describeStorageBundles(const Model::DescribeStorageBundlesRequest &request)const;
			void describeStorageBundlesAsync(const Model::DescribeStorageBundlesRequest& request, const DescribeStorageBundlesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStorageBundlesOutcomeCallable describeStorageBundlesCallable(const Model::DescribeStorageBundlesRequest& request) const;
			DescribeSubscriptionPriceOutcome describeSubscriptionPrice(const Model::DescribeSubscriptionPriceRequest &request)const;
			void describeSubscriptionPriceAsync(const Model::DescribeSubscriptionPriceRequest& request, const DescribeSubscriptionPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSubscriptionPriceOutcomeCallable describeSubscriptionPriceCallable(const Model::DescribeSubscriptionPriceRequest& request) const;
			DescribeTasksOutcome describeTasks(const Model::DescribeTasksRequest &request)const;
			void describeTasksAsync(const Model::DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTasksOutcomeCallable describeTasksCallable(const Model::DescribeTasksRequest& request) const;
			DescribeUserBusinessStatusOutcome describeUserBusinessStatus(const Model::DescribeUserBusinessStatusRequest &request)const;
			void describeUserBusinessStatusAsync(const Model::DescribeUserBusinessStatusRequest& request, const DescribeUserBusinessStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserBusinessStatusOutcomeCallable describeUserBusinessStatusCallable(const Model::DescribeUserBusinessStatusRequest& request) const;
			DescribeVSwitchesOutcome describeVSwitches(const Model::DescribeVSwitchesRequest &request)const;
			void describeVSwitchesAsync(const Model::DescribeVSwitchesRequest& request, const DescribeVSwitchesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVSwitchesOutcomeCallable describeVSwitchesCallable(const Model::DescribeVSwitchesRequest& request) const;
			DescribeVpcsOutcome describeVpcs(const Model::DescribeVpcsRequest &request)const;
			void describeVpcsAsync(const Model::DescribeVpcsRequest& request, const DescribeVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVpcsOutcomeCallable describeVpcsCallable(const Model::DescribeVpcsRequest& request) const;
			DescribeZonesOutcome describeZones(const Model::DescribeZonesRequest &request)const;
			void describeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeZonesOutcomeCallable describeZonesCallable(const Model::DescribeZonesRequest& request) const;
			DisableGatewayLoggingOutcome disableGatewayLogging(const Model::DisableGatewayLoggingRequest &request)const;
			void disableGatewayLoggingAsync(const Model::DisableGatewayLoggingRequest& request, const DisableGatewayLoggingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableGatewayLoggingOutcomeCallable disableGatewayLoggingCallable(const Model::DisableGatewayLoggingRequest& request) const;
			DisableGatewayNFSVersionOutcome disableGatewayNFSVersion(const Model::DisableGatewayNFSVersionRequest &request)const;
			void disableGatewayNFSVersionAsync(const Model::DisableGatewayNFSVersionRequest& request, const DisableGatewayNFSVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableGatewayNFSVersionOutcomeCallable disableGatewayNFSVersionCallable(const Model::DisableGatewayNFSVersionRequest& request) const;
			EnableGatewayIpv6Outcome enableGatewayIpv6(const Model::EnableGatewayIpv6Request &request)const;
			void enableGatewayIpv6Async(const Model::EnableGatewayIpv6Request& request, const EnableGatewayIpv6AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableGatewayIpv6OutcomeCallable enableGatewayIpv6Callable(const Model::EnableGatewayIpv6Request& request) const;
			EnableGatewayLoggingOutcome enableGatewayLogging(const Model::EnableGatewayLoggingRequest &request)const;
			void enableGatewayLoggingAsync(const Model::EnableGatewayLoggingRequest& request, const EnableGatewayLoggingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableGatewayLoggingOutcomeCallable enableGatewayLoggingCallable(const Model::EnableGatewayLoggingRequest& request) const;
			ExpandCacheDiskOutcome expandCacheDisk(const Model::ExpandCacheDiskRequest &request)const;
			void expandCacheDiskAsync(const Model::ExpandCacheDiskRequest& request, const ExpandCacheDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExpandCacheDiskOutcomeCallable expandCacheDiskCallable(const Model::ExpandCacheDiskRequest& request) const;
			ExpandGatewayNetworkBandwidthOutcome expandGatewayNetworkBandwidth(const Model::ExpandGatewayNetworkBandwidthRequest &request)const;
			void expandGatewayNetworkBandwidthAsync(const Model::ExpandGatewayNetworkBandwidthRequest& request, const ExpandGatewayNetworkBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExpandGatewayNetworkBandwidthOutcomeCallable expandGatewayNetworkBandwidthCallable(const Model::ExpandGatewayNetworkBandwidthRequest& request) const;
			GenerateGatewayTokenOutcome generateGatewayToken(const Model::GenerateGatewayTokenRequest &request)const;
			void generateGatewayTokenAsync(const Model::GenerateGatewayTokenRequest& request, const GenerateGatewayTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateGatewayTokenOutcomeCallable generateGatewayTokenCallable(const Model::GenerateGatewayTokenRequest& request) const;
			GenerateMqttTokenOutcome generateMqttToken(const Model::GenerateMqttTokenRequest &request)const;
			void generateMqttTokenAsync(const Model::GenerateMqttTokenRequest& request, const GenerateMqttTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateMqttTokenOutcomeCallable generateMqttTokenCallable(const Model::GenerateMqttTokenRequest& request) const;
			GenerateStsTokenOutcome generateStsToken(const Model::GenerateStsTokenRequest &request)const;
			void generateStsTokenAsync(const Model::GenerateStsTokenRequest& request, const GenerateStsTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GenerateStsTokenOutcomeCallable generateStsTokenCallable(const Model::GenerateStsTokenRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ModifyGatewayOutcome modifyGateway(const Model::ModifyGatewayRequest &request)const;
			void modifyGatewayAsync(const Model::ModifyGatewayRequest& request, const ModifyGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyGatewayOutcomeCallable modifyGatewayCallable(const Model::ModifyGatewayRequest& request) const;
			ModifyGatewayBlockVolumeOutcome modifyGatewayBlockVolume(const Model::ModifyGatewayBlockVolumeRequest &request)const;
			void modifyGatewayBlockVolumeAsync(const Model::ModifyGatewayBlockVolumeRequest& request, const ModifyGatewayBlockVolumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyGatewayBlockVolumeOutcomeCallable modifyGatewayBlockVolumeCallable(const Model::ModifyGatewayBlockVolumeRequest& request) const;
			ModifyGatewayClassOutcome modifyGatewayClass(const Model::ModifyGatewayClassRequest &request)const;
			void modifyGatewayClassAsync(const Model::ModifyGatewayClassRequest& request, const ModifyGatewayClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyGatewayClassOutcomeCallable modifyGatewayClassCallable(const Model::ModifyGatewayClassRequest& request) const;
			ModifyGatewayFileShareOutcome modifyGatewayFileShare(const Model::ModifyGatewayFileShareRequest &request)const;
			void modifyGatewayFileShareAsync(const Model::ModifyGatewayFileShareRequest& request, const ModifyGatewayFileShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyGatewayFileShareOutcomeCallable modifyGatewayFileShareCallable(const Model::ModifyGatewayFileShareRequest& request) const;
			ModifyGatewayFileShareWatermarkOutcome modifyGatewayFileShareWatermark(const Model::ModifyGatewayFileShareWatermarkRequest &request)const;
			void modifyGatewayFileShareWatermarkAsync(const Model::ModifyGatewayFileShareWatermarkRequest& request, const ModifyGatewayFileShareWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyGatewayFileShareWatermarkOutcomeCallable modifyGatewayFileShareWatermarkCallable(const Model::ModifyGatewayFileShareWatermarkRequest& request) const;
			ModifyStorageBundleOutcome modifyStorageBundle(const Model::ModifyStorageBundleRequest &request)const;
			void modifyStorageBundleAsync(const Model::ModifyStorageBundleRequest& request, const ModifyStorageBundleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyStorageBundleOutcomeCallable modifyStorageBundleCallable(const Model::ModifyStorageBundleRequest& request) const;
			OpenSgwServiceOutcome openSgwService(const Model::OpenSgwServiceRequest &request)const;
			void openSgwServiceAsync(const Model::OpenSgwServiceRequest& request, const OpenSgwServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenSgwServiceOutcomeCallable openSgwServiceCallable(const Model::OpenSgwServiceRequest& request) const;
			OperateGatewayOutcome operateGateway(const Model::OperateGatewayRequest &request)const;
			void operateGatewayAsync(const Model::OperateGatewayRequest& request, const OperateGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OperateGatewayOutcomeCallable operateGatewayCallable(const Model::OperateGatewayRequest& request) const;
			ReleaseServiceOutcome releaseService(const Model::ReleaseServiceRequest &request)const;
			void releaseServiceAsync(const Model::ReleaseServiceRequest& request, const ReleaseServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseServiceOutcomeCallable releaseServiceCallable(const Model::ReleaseServiceRequest& request) const;
			RemoveSharesFromExpressSyncOutcome removeSharesFromExpressSync(const Model::RemoveSharesFromExpressSyncRequest &request)const;
			void removeSharesFromExpressSyncAsync(const Model::RemoveSharesFromExpressSyncRequest& request, const RemoveSharesFromExpressSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveSharesFromExpressSyncOutcomeCallable removeSharesFromExpressSyncCallable(const Model::RemoveSharesFromExpressSyncRequest& request) const;
			RemoveTagsFromGatewayOutcome removeTagsFromGateway(const Model::RemoveTagsFromGatewayRequest &request)const;
			void removeTagsFromGatewayAsync(const Model::RemoveTagsFromGatewayRequest& request, const RemoveTagsFromGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RemoveTagsFromGatewayOutcomeCallable removeTagsFromGatewayCallable(const Model::RemoveTagsFromGatewayRequest& request) const;
			ReportBlockVolumesOutcome reportBlockVolumes(const Model::ReportBlockVolumesRequest &request)const;
			void reportBlockVolumesAsync(const Model::ReportBlockVolumesRequest& request, const ReportBlockVolumesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReportBlockVolumesOutcomeCallable reportBlockVolumesCallable(const Model::ReportBlockVolumesRequest& request) const;
			ReportFileSharesOutcome reportFileShares(const Model::ReportFileSharesRequest &request)const;
			void reportFileSharesAsync(const Model::ReportFileSharesRequest& request, const ReportFileSharesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReportFileSharesOutcomeCallable reportFileSharesCallable(const Model::ReportFileSharesRequest& request) const;
			ReportGatewayInfoOutcome reportGatewayInfo(const Model::ReportGatewayInfoRequest &request)const;
			void reportGatewayInfoAsync(const Model::ReportGatewayInfoRequest& request, const ReportGatewayInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReportGatewayInfoOutcomeCallable reportGatewayInfoCallable(const Model::ReportGatewayInfoRequest& request) const;
			ReportGatewayUsageOutcome reportGatewayUsage(const Model::ReportGatewayUsageRequest &request)const;
			void reportGatewayUsageAsync(const Model::ReportGatewayUsageRequest& request, const ReportGatewayUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReportGatewayUsageOutcomeCallable reportGatewayUsageCallable(const Model::ReportGatewayUsageRequest& request) const;
			ResetGatewayPasswordOutcome resetGatewayPassword(const Model::ResetGatewayPasswordRequest &request)const;
			void resetGatewayPasswordAsync(const Model::ResetGatewayPasswordRequest& request, const ResetGatewayPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetGatewayPasswordOutcomeCallable resetGatewayPasswordCallable(const Model::ResetGatewayPasswordRequest& request) const;
			RestartFileSharesOutcome restartFileShares(const Model::RestartFileSharesRequest &request)const;
			void restartFileSharesAsync(const Model::RestartFileSharesRequest& request, const RestartFileSharesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RestartFileSharesOutcomeCallable restartFileSharesCallable(const Model::RestartFileSharesRequest& request) const;
			SetGatewayADInfoOutcome setGatewayADInfo(const Model::SetGatewayADInfoRequest &request)const;
			void setGatewayADInfoAsync(const Model::SetGatewayADInfoRequest& request, const SetGatewayADInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetGatewayADInfoOutcomeCallable setGatewayADInfoCallable(const Model::SetGatewayADInfoRequest& request) const;
			SetGatewayDNSOutcome setGatewayDNS(const Model::SetGatewayDNSRequest &request)const;
			void setGatewayDNSAsync(const Model::SetGatewayDNSRequest& request, const SetGatewayDNSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetGatewayDNSOutcomeCallable setGatewayDNSCallable(const Model::SetGatewayDNSRequest& request) const;
			SetGatewayLDAPInfoOutcome setGatewayLDAPInfo(const Model::SetGatewayLDAPInfoRequest &request)const;
			void setGatewayLDAPInfoAsync(const Model::SetGatewayLDAPInfoRequest& request, const SetGatewayLDAPInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetGatewayLDAPInfoOutcomeCallable setGatewayLDAPInfoCallable(const Model::SetGatewayLDAPInfoRequest& request) const;
			SwitchCSGClientsReverseSyncConfigurationOutcome switchCSGClientsReverseSyncConfiguration(const Model::SwitchCSGClientsReverseSyncConfigurationRequest &request)const;
			void switchCSGClientsReverseSyncConfigurationAsync(const Model::SwitchCSGClientsReverseSyncConfigurationRequest& request, const SwitchCSGClientsReverseSyncConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchCSGClientsReverseSyncConfigurationOutcomeCallable switchCSGClientsReverseSyncConfigurationCallable(const Model::SwitchCSGClientsReverseSyncConfigurationRequest& request) const;
			SwitchGatewayExpirationPolicyOutcome switchGatewayExpirationPolicy(const Model::SwitchGatewayExpirationPolicyRequest &request)const;
			void switchGatewayExpirationPolicyAsync(const Model::SwitchGatewayExpirationPolicyRequest& request, const SwitchGatewayExpirationPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchGatewayExpirationPolicyOutcomeCallable switchGatewayExpirationPolicyCallable(const Model::SwitchGatewayExpirationPolicyRequest& request) const;
			SwitchToSubscriptionOutcome switchToSubscription(const Model::SwitchToSubscriptionRequest &request)const;
			void switchToSubscriptionAsync(const Model::SwitchToSubscriptionRequest& request, const SwitchToSubscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchToSubscriptionOutcomeCallable switchToSubscriptionCallable(const Model::SwitchToSubscriptionRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			TriggerGatewayRemoteSyncOutcome triggerGatewayRemoteSync(const Model::TriggerGatewayRemoteSyncRequest &request)const;
			void triggerGatewayRemoteSyncAsync(const Model::TriggerGatewayRemoteSyncRequest& request, const TriggerGatewayRemoteSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TriggerGatewayRemoteSyncOutcomeCallable triggerGatewayRemoteSyncCallable(const Model::TriggerGatewayRemoteSyncRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
			UpdateGatewayBlockVolumeOutcome updateGatewayBlockVolume(const Model::UpdateGatewayBlockVolumeRequest &request)const;
			void updateGatewayBlockVolumeAsync(const Model::UpdateGatewayBlockVolumeRequest& request, const UpdateGatewayBlockVolumeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGatewayBlockVolumeOutcomeCallable updateGatewayBlockVolumeCallable(const Model::UpdateGatewayBlockVolumeRequest& request) const;
			UpdateGatewayFileShareOutcome updateGatewayFileShare(const Model::UpdateGatewayFileShareRequest &request)const;
			void updateGatewayFileShareAsync(const Model::UpdateGatewayFileShareRequest& request, const UpdateGatewayFileShareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateGatewayFileShareOutcomeCallable updateGatewayFileShareCallable(const Model::UpdateGatewayFileShareRequest& request) const;
			UpgradeGatewayOutcome upgradeGateway(const Model::UpgradeGatewayRequest &request)const;
			void upgradeGatewayAsync(const Model::UpgradeGatewayRequest& request, const UpgradeGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeGatewayOutcomeCallable upgradeGatewayCallable(const Model::UpgradeGatewayRequest& request) const;
			UploadCSGClientLogOutcome uploadCSGClientLog(const Model::UploadCSGClientLogRequest &request)const;
			void uploadCSGClientLogAsync(const Model::UploadCSGClientLogRequest& request, const UploadCSGClientLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadCSGClientLogOutcomeCallable uploadCSGClientLogCallable(const Model::UploadCSGClientLogRequest& request) const;
			UploadGatewayLogOutcome uploadGatewayLog(const Model::UploadGatewayLogRequest &request)const;
			void uploadGatewayLogAsync(const Model::UploadGatewayLogRequest& request, const UploadGatewayLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadGatewayLogOutcomeCallable uploadGatewayLogCallable(const Model::UploadGatewayLogRequest& request) const;
			ValidateExpressSyncConfigOutcome validateExpressSyncConfig(const Model::ValidateExpressSyncConfigRequest &request)const;
			void validateExpressSyncConfigAsync(const Model::ValidateExpressSyncConfigRequest& request, const ValidateExpressSyncConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ValidateExpressSyncConfigOutcomeCallable validateExpressSyncConfigCallable(const Model::ValidateExpressSyncConfigRequest& request) const;
			ValidateGatewayNameOutcome validateGatewayName(const Model::ValidateGatewayNameRequest &request)const;
			void validateGatewayNameAsync(const Model::ValidateGatewayNameRequest& request, const ValidateGatewayNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ValidateGatewayNameOutcomeCallable validateGatewayNameCallable(const Model::ValidateGatewayNameRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_SGW_SGWCLIENT_H_
