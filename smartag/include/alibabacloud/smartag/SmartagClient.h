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

#ifndef ALIBABACLOUD_SMARTAG_SMARTAGCLIENT_H_
#define ALIBABACLOUD_SMARTAG_SMARTAGCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "SmartagExport.h"
#include "model/GrantInstanceToCbnRequest.h"
#include "model/GrantInstanceToCbnResult.h"
#include "model/DeleteNetworkOptimizationRequest.h"
#include "model/DeleteNetworkOptimizationResult.h"
#include "model/AddNetworkOptimizationSettingRequest.h"
#include "model/AddNetworkOptimizationSettingResult.h"
#include "model/ActivateSmartAccessGatewayRequest.h"
#include "model/ActivateSmartAccessGatewayResult.h"
#include "model/DeleteACLRuleRequest.h"
#include "model/DeleteACLRuleResult.h"
#include "model/ModifyNetworkOptimizationRequest.h"
#include "model/ModifyNetworkOptimizationResult.h"
#include "model/CreateSmartAccessGatewayClientUserRequest.h"
#include "model/CreateSmartAccessGatewayClientUserResult.h"
#include "model/UnicomSignConfirmRequest.h"
#include "model/UnicomSignConfirmResult.h"
#include "model/AddACLRuleRequest.h"
#include "model/AddACLRuleResult.h"
#include "model/DisassociateACLRequest.h"
#include "model/DisassociateACLResult.h"
#include "model/BindSmartAccessGatewayRequest.h"
#include "model/BindSmartAccessGatewayResult.h"
#include "model/CreateNetworkOptimizationRequest.h"
#include "model/CreateNetworkOptimizationResult.h"
#include "model/DeleteSAGLinkLevelHaRequest.h"
#include "model/DeleteSAGLinkLevelHaResult.h"
#include "model/DeleteSmartAccessGatewayClientUserRequest.h"
#include "model/DeleteSmartAccessGatewayClientUserResult.h"
#include "model/KickOutClientsRequest.h"
#include "model/KickOutClientsResult.h"
#include "model/SwitchSAGHaStateRequest.h"
#include "model/SwitchSAGHaStateResult.h"
#include "model/DescribeSagRouteableAddressRequest.h"
#include "model/DescribeSagRouteableAddressResult.h"
#include "model/DescribeGrantRulesRequest.h"
#include "model/DescribeGrantRulesResult.h"
#include "model/SwitchCloudBoxHaStateRequest.h"
#include "model/SwitchCloudBoxHaStateResult.h"
#include "model/UnbindSmartAccessGatewayRequest.h"
#include "model/UnbindSmartAccessGatewayResult.h"
#include "model/CreateSmartAccessGatewayRequest.h"
#include "model/CreateSmartAccessGatewayResult.h"
#include "model/AttachNetworkOptimizationSagsRequest.h"
#include "model/AttachNetworkOptimizationSagsResult.h"
#include "model/ClearSagRouteableAddressRequest.h"
#include "model/ClearSagRouteableAddressResult.h"
#include "model/ModifyCloudConnectNetworkRequest.h"
#include "model/ModifyCloudConnectNetworkResult.h"
#include "model/DeleteACLRequest.h"
#include "model/DeleteACLResult.h"
#include "model/DescribeSagOnlineClientStatisticsRequest.h"
#include "model/DescribeSagOnlineClientStatisticsResult.h"
#include "model/DowngradeSmartAccessGatewayRequest.h"
#include "model/DowngradeSmartAccessGatewayResult.h"
#include "model/AssociateACLRequest.h"
#include "model/AssociateACLResult.h"
#include "model/DescribeSmartAccessGatewayVersionsRequest.h"
#include "model/DescribeSmartAccessGatewayVersionsResult.h"
#include "model/UpdateSmartAccessGatewayVersionRequest.h"
#include "model/UpdateSmartAccessGatewayVersionResult.h"
#include "model/ModifySmartAccessGatewayRequest.h"
#include "model/ModifySmartAccessGatewayResult.h"
#include "model/RevokeInstanceFromCbnRequest.h"
#include "model/RevokeInstanceFromCbnResult.h"
#include "model/ModifySerialNumberRequest.h"
#include "model/ModifySerialNumberResult.h"
#include "model/DescribeACLAttributeRequest.h"
#include "model/DescribeACLAttributeResult.h"
#include "model/DeleteDedicatedLineBackupRequest.h"
#include "model/DeleteDedicatedLineBackupResult.h"
#include "model/ResetSmartAccessGatewayClientUserPasswordRequest.h"
#include "model/ResetSmartAccessGatewayClientUserPasswordResult.h"
#include "model/DescribeACLsRequest.h"
#include "model/DescribeACLsResult.h"
#include "model/UnlockSmartAccessGatewayRequest.h"
#include "model/UnlockSmartAccessGatewayResult.h"
#include "model/CreateSAGLinkLevelHaRequest.h"
#include "model/CreateSAGLinkLevelHaResult.h"
#include "model/DescribeSmartAccessGatewayHaRequest.h"
#include "model/DescribeSmartAccessGatewayHaResult.h"
#include "model/CreateSmartAccessGatewaySoftwareRequest.h"
#include "model/CreateSmartAccessGatewaySoftwareResult.h"
#include "model/DescribeNetworkOptimizationSettingsRequest.h"
#include "model/DescribeNetworkOptimizationSettingsResult.h"
#include "model/DeleteCloudConnectNetworkRequest.h"
#include "model/DeleteCloudConnectNetworkResult.h"
#include "model/CreateACLRequest.h"
#include "model/CreateACLResult.h"
#include "model/DescribeNetworkOptimizationSagsRequest.h"
#include "model/DescribeNetworkOptimizationSagsResult.h"
#include "model/CreateCloudConnectNetworkRequest.h"
#include "model/CreateCloudConnectNetworkResult.h"
#include "model/RebootSmartAccessGatewayRequest.h"
#include "model/RebootSmartAccessGatewayResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeCloudConnectNetworksRequest.h"
#include "model/DescribeCloudConnectNetworksResult.h"
#include "model/ModifyACLRuleRequest.h"
#include "model/ModifyACLRuleResult.h"
#include "model/ModifySmartAccessGatewayClientUserRequest.h"
#include "model/ModifySmartAccessGatewayClientUserResult.h"
#include "model/DeleteNetworkOptimizationSettingRequest.h"
#include "model/DeleteNetworkOptimizationSettingResult.h"
#include "model/GetCloudConnectNetworkUseLimitRequest.h"
#include "model/GetCloudConnectNetworkUseLimitResult.h"
#include "model/DescribeSmartAccessGatewaysRequest.h"
#include "model/DescribeSmartAccessGatewaysResult.h"
#include "model/UpgradeSmartAccessGatewayRequest.h"
#include "model/UpgradeSmartAccessGatewayResult.h"
#include "model/DescribeUserOnlineClientsRequest.h"
#include "model/DescribeUserOnlineClientsResult.h"
#include "model/DetachNetworkOptimizationSagsRequest.h"
#include "model/DetachNetworkOptimizationSagsResult.h"
#include "model/DescribeUserOnlineClientStatisticsRequest.h"
#include "model/DescribeUserOnlineClientStatisticsResult.h"
#include "model/CreateDedicatedLineBackupRequest.h"
#include "model/CreateDedicatedLineBackupResult.h"
#include "model/DescribeUserFlowStatisticsRequest.h"
#include "model/DescribeUserFlowStatisticsResult.h"
#include "model/SetSagRouteableAddressRequest.h"
#include "model/SetSagRouteableAddressResult.h"
#include "model/ModifyACLRequest.h"
#include "model/ModifyACLResult.h"
#include "model/DescribeSmartAccessGatewayClientUsersRequest.h"
#include "model/DescribeSmartAccessGatewayClientUsersResult.h"
#include "model/GetSmartAccessGatewayUseLimitRequest.h"
#include "model/GetSmartAccessGatewayUseLimitResult.h"
#include "model/UnicomOrderConfirmRequest.h"
#include "model/UnicomOrderConfirmResult.h"
#include "model/DescribeNetworkOptimizationsRequest.h"
#include "model/DescribeNetworkOptimizationsResult.h"


namespace AlibabaCloud
{
	namespace Smartag
	{
		class ALIBABACLOUD_SMARTAG_EXPORT SmartagClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::GrantInstanceToCbnResult> GrantInstanceToCbnOutcome;
			typedef std::future<GrantInstanceToCbnOutcome> GrantInstanceToCbnOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::GrantInstanceToCbnRequest&, const GrantInstanceToCbnOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantInstanceToCbnAsyncHandler;
			typedef Outcome<Error, Model::DeleteNetworkOptimizationResult> DeleteNetworkOptimizationOutcome;
			typedef std::future<DeleteNetworkOptimizationOutcome> DeleteNetworkOptimizationOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteNetworkOptimizationRequest&, const DeleteNetworkOptimizationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetworkOptimizationAsyncHandler;
			typedef Outcome<Error, Model::AddNetworkOptimizationSettingResult> AddNetworkOptimizationSettingOutcome;
			typedef std::future<AddNetworkOptimizationSettingOutcome> AddNetworkOptimizationSettingOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::AddNetworkOptimizationSettingRequest&, const AddNetworkOptimizationSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddNetworkOptimizationSettingAsyncHandler;
			typedef Outcome<Error, Model::ActivateSmartAccessGatewayResult> ActivateSmartAccessGatewayOutcome;
			typedef std::future<ActivateSmartAccessGatewayOutcome> ActivateSmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ActivateSmartAccessGatewayRequest&, const ActivateSmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ActivateSmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::DeleteACLRuleResult> DeleteACLRuleOutcome;
			typedef std::future<DeleteACLRuleOutcome> DeleteACLRuleOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteACLRuleRequest&, const DeleteACLRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteACLRuleAsyncHandler;
			typedef Outcome<Error, Model::ModifyNetworkOptimizationResult> ModifyNetworkOptimizationOutcome;
			typedef std::future<ModifyNetworkOptimizationOutcome> ModifyNetworkOptimizationOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifyNetworkOptimizationRequest&, const ModifyNetworkOptimizationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetworkOptimizationAsyncHandler;
			typedef Outcome<Error, Model::CreateSmartAccessGatewayClientUserResult> CreateSmartAccessGatewayClientUserOutcome;
			typedef std::future<CreateSmartAccessGatewayClientUserOutcome> CreateSmartAccessGatewayClientUserOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateSmartAccessGatewayClientUserRequest&, const CreateSmartAccessGatewayClientUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSmartAccessGatewayClientUserAsyncHandler;
			typedef Outcome<Error, Model::UnicomSignConfirmResult> UnicomSignConfirmOutcome;
			typedef std::future<UnicomSignConfirmOutcome> UnicomSignConfirmOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::UnicomSignConfirmRequest&, const UnicomSignConfirmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnicomSignConfirmAsyncHandler;
			typedef Outcome<Error, Model::AddACLRuleResult> AddACLRuleOutcome;
			typedef std::future<AddACLRuleOutcome> AddACLRuleOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::AddACLRuleRequest&, const AddACLRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddACLRuleAsyncHandler;
			typedef Outcome<Error, Model::DisassociateACLResult> DisassociateACLOutcome;
			typedef std::future<DisassociateACLOutcome> DisassociateACLOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DisassociateACLRequest&, const DisassociateACLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateACLAsyncHandler;
			typedef Outcome<Error, Model::BindSmartAccessGatewayResult> BindSmartAccessGatewayOutcome;
			typedef std::future<BindSmartAccessGatewayOutcome> BindSmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::BindSmartAccessGatewayRequest&, const BindSmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindSmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::CreateNetworkOptimizationResult> CreateNetworkOptimizationOutcome;
			typedef std::future<CreateNetworkOptimizationOutcome> CreateNetworkOptimizationOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateNetworkOptimizationRequest&, const CreateNetworkOptimizationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkOptimizationAsyncHandler;
			typedef Outcome<Error, Model::DeleteSAGLinkLevelHaResult> DeleteSAGLinkLevelHaOutcome;
			typedef std::future<DeleteSAGLinkLevelHaOutcome> DeleteSAGLinkLevelHaOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteSAGLinkLevelHaRequest&, const DeleteSAGLinkLevelHaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSAGLinkLevelHaAsyncHandler;
			typedef Outcome<Error, Model::DeleteSmartAccessGatewayClientUserResult> DeleteSmartAccessGatewayClientUserOutcome;
			typedef std::future<DeleteSmartAccessGatewayClientUserOutcome> DeleteSmartAccessGatewayClientUserOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteSmartAccessGatewayClientUserRequest&, const DeleteSmartAccessGatewayClientUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSmartAccessGatewayClientUserAsyncHandler;
			typedef Outcome<Error, Model::KickOutClientsResult> KickOutClientsOutcome;
			typedef std::future<KickOutClientsOutcome> KickOutClientsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::KickOutClientsRequest&, const KickOutClientsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> KickOutClientsAsyncHandler;
			typedef Outcome<Error, Model::SwitchSAGHaStateResult> SwitchSAGHaStateOutcome;
			typedef std::future<SwitchSAGHaStateOutcome> SwitchSAGHaStateOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::SwitchSAGHaStateRequest&, const SwitchSAGHaStateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchSAGHaStateAsyncHandler;
			typedef Outcome<Error, Model::DescribeSagRouteableAddressResult> DescribeSagRouteableAddressOutcome;
			typedef std::future<DescribeSagRouteableAddressOutcome> DescribeSagRouteableAddressOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSagRouteableAddressRequest&, const DescribeSagRouteableAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSagRouteableAddressAsyncHandler;
			typedef Outcome<Error, Model::DescribeGrantRulesResult> DescribeGrantRulesOutcome;
			typedef std::future<DescribeGrantRulesOutcome> DescribeGrantRulesOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeGrantRulesRequest&, const DescribeGrantRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGrantRulesAsyncHandler;
			typedef Outcome<Error, Model::SwitchCloudBoxHaStateResult> SwitchCloudBoxHaStateOutcome;
			typedef std::future<SwitchCloudBoxHaStateOutcome> SwitchCloudBoxHaStateOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::SwitchCloudBoxHaStateRequest&, const SwitchCloudBoxHaStateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchCloudBoxHaStateAsyncHandler;
			typedef Outcome<Error, Model::UnbindSmartAccessGatewayResult> UnbindSmartAccessGatewayOutcome;
			typedef std::future<UnbindSmartAccessGatewayOutcome> UnbindSmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::UnbindSmartAccessGatewayRequest&, const UnbindSmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindSmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::CreateSmartAccessGatewayResult> CreateSmartAccessGatewayOutcome;
			typedef std::future<CreateSmartAccessGatewayOutcome> CreateSmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateSmartAccessGatewayRequest&, const CreateSmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::AttachNetworkOptimizationSagsResult> AttachNetworkOptimizationSagsOutcome;
			typedef std::future<AttachNetworkOptimizationSagsOutcome> AttachNetworkOptimizationSagsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::AttachNetworkOptimizationSagsRequest&, const AttachNetworkOptimizationSagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachNetworkOptimizationSagsAsyncHandler;
			typedef Outcome<Error, Model::ClearSagRouteableAddressResult> ClearSagRouteableAddressOutcome;
			typedef std::future<ClearSagRouteableAddressOutcome> ClearSagRouteableAddressOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ClearSagRouteableAddressRequest&, const ClearSagRouteableAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ClearSagRouteableAddressAsyncHandler;
			typedef Outcome<Error, Model::ModifyCloudConnectNetworkResult> ModifyCloudConnectNetworkOutcome;
			typedef std::future<ModifyCloudConnectNetworkOutcome> ModifyCloudConnectNetworkOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifyCloudConnectNetworkRequest&, const ModifyCloudConnectNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudConnectNetworkAsyncHandler;
			typedef Outcome<Error, Model::DeleteACLResult> DeleteACLOutcome;
			typedef std::future<DeleteACLOutcome> DeleteACLOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteACLRequest&, const DeleteACLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteACLAsyncHandler;
			typedef Outcome<Error, Model::DescribeSagOnlineClientStatisticsResult> DescribeSagOnlineClientStatisticsOutcome;
			typedef std::future<DescribeSagOnlineClientStatisticsOutcome> DescribeSagOnlineClientStatisticsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSagOnlineClientStatisticsRequest&, const DescribeSagOnlineClientStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSagOnlineClientStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DowngradeSmartAccessGatewayResult> DowngradeSmartAccessGatewayOutcome;
			typedef std::future<DowngradeSmartAccessGatewayOutcome> DowngradeSmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DowngradeSmartAccessGatewayRequest&, const DowngradeSmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DowngradeSmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::AssociateACLResult> AssociateACLOutcome;
			typedef std::future<AssociateACLOutcome> AssociateACLOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::AssociateACLRequest&, const AssociateACLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateACLAsyncHandler;
			typedef Outcome<Error, Model::DescribeSmartAccessGatewayVersionsResult> DescribeSmartAccessGatewayVersionsOutcome;
			typedef std::future<DescribeSmartAccessGatewayVersionsOutcome> DescribeSmartAccessGatewayVersionsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSmartAccessGatewayVersionsRequest&, const DescribeSmartAccessGatewayVersionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmartAccessGatewayVersionsAsyncHandler;
			typedef Outcome<Error, Model::UpdateSmartAccessGatewayVersionResult> UpdateSmartAccessGatewayVersionOutcome;
			typedef std::future<UpdateSmartAccessGatewayVersionOutcome> UpdateSmartAccessGatewayVersionOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::UpdateSmartAccessGatewayVersionRequest&, const UpdateSmartAccessGatewayVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSmartAccessGatewayVersionAsyncHandler;
			typedef Outcome<Error, Model::ModifySmartAccessGatewayResult> ModifySmartAccessGatewayOutcome;
			typedef std::future<ModifySmartAccessGatewayOutcome> ModifySmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifySmartAccessGatewayRequest&, const ModifySmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::RevokeInstanceFromCbnResult> RevokeInstanceFromCbnOutcome;
			typedef std::future<RevokeInstanceFromCbnOutcome> RevokeInstanceFromCbnOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::RevokeInstanceFromCbnRequest&, const RevokeInstanceFromCbnOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeInstanceFromCbnAsyncHandler;
			typedef Outcome<Error, Model::ModifySerialNumberResult> ModifySerialNumberOutcome;
			typedef std::future<ModifySerialNumberOutcome> ModifySerialNumberOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifySerialNumberRequest&, const ModifySerialNumberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySerialNumberAsyncHandler;
			typedef Outcome<Error, Model::DescribeACLAttributeResult> DescribeACLAttributeOutcome;
			typedef std::future<DescribeACLAttributeOutcome> DescribeACLAttributeOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeACLAttributeRequest&, const DescribeACLAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeACLAttributeAsyncHandler;
			typedef Outcome<Error, Model::DeleteDedicatedLineBackupResult> DeleteDedicatedLineBackupOutcome;
			typedef std::future<DeleteDedicatedLineBackupOutcome> DeleteDedicatedLineBackupOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteDedicatedLineBackupRequest&, const DeleteDedicatedLineBackupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDedicatedLineBackupAsyncHandler;
			typedef Outcome<Error, Model::ResetSmartAccessGatewayClientUserPasswordResult> ResetSmartAccessGatewayClientUserPasswordOutcome;
			typedef std::future<ResetSmartAccessGatewayClientUserPasswordOutcome> ResetSmartAccessGatewayClientUserPasswordOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ResetSmartAccessGatewayClientUserPasswordRequest&, const ResetSmartAccessGatewayClientUserPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetSmartAccessGatewayClientUserPasswordAsyncHandler;
			typedef Outcome<Error, Model::DescribeACLsResult> DescribeACLsOutcome;
			typedef std::future<DescribeACLsOutcome> DescribeACLsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeACLsRequest&, const DescribeACLsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeACLsAsyncHandler;
			typedef Outcome<Error, Model::UnlockSmartAccessGatewayResult> UnlockSmartAccessGatewayOutcome;
			typedef std::future<UnlockSmartAccessGatewayOutcome> UnlockSmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::UnlockSmartAccessGatewayRequest&, const UnlockSmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnlockSmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::CreateSAGLinkLevelHaResult> CreateSAGLinkLevelHaOutcome;
			typedef std::future<CreateSAGLinkLevelHaOutcome> CreateSAGLinkLevelHaOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateSAGLinkLevelHaRequest&, const CreateSAGLinkLevelHaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSAGLinkLevelHaAsyncHandler;
			typedef Outcome<Error, Model::DescribeSmartAccessGatewayHaResult> DescribeSmartAccessGatewayHaOutcome;
			typedef std::future<DescribeSmartAccessGatewayHaOutcome> DescribeSmartAccessGatewayHaOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSmartAccessGatewayHaRequest&, const DescribeSmartAccessGatewayHaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmartAccessGatewayHaAsyncHandler;
			typedef Outcome<Error, Model::CreateSmartAccessGatewaySoftwareResult> CreateSmartAccessGatewaySoftwareOutcome;
			typedef std::future<CreateSmartAccessGatewaySoftwareOutcome> CreateSmartAccessGatewaySoftwareOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateSmartAccessGatewaySoftwareRequest&, const CreateSmartAccessGatewaySoftwareOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSmartAccessGatewaySoftwareAsyncHandler;
			typedef Outcome<Error, Model::DescribeNetworkOptimizationSettingsResult> DescribeNetworkOptimizationSettingsOutcome;
			typedef std::future<DescribeNetworkOptimizationSettingsOutcome> DescribeNetworkOptimizationSettingsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeNetworkOptimizationSettingsRequest&, const DescribeNetworkOptimizationSettingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkOptimizationSettingsAsyncHandler;
			typedef Outcome<Error, Model::DeleteCloudConnectNetworkResult> DeleteCloudConnectNetworkOutcome;
			typedef std::future<DeleteCloudConnectNetworkOutcome> DeleteCloudConnectNetworkOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteCloudConnectNetworkRequest&, const DeleteCloudConnectNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudConnectNetworkAsyncHandler;
			typedef Outcome<Error, Model::CreateACLResult> CreateACLOutcome;
			typedef std::future<CreateACLOutcome> CreateACLOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateACLRequest&, const CreateACLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateACLAsyncHandler;
			typedef Outcome<Error, Model::DescribeNetworkOptimizationSagsResult> DescribeNetworkOptimizationSagsOutcome;
			typedef std::future<DescribeNetworkOptimizationSagsOutcome> DescribeNetworkOptimizationSagsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeNetworkOptimizationSagsRequest&, const DescribeNetworkOptimizationSagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkOptimizationSagsAsyncHandler;
			typedef Outcome<Error, Model::CreateCloudConnectNetworkResult> CreateCloudConnectNetworkOutcome;
			typedef std::future<CreateCloudConnectNetworkOutcome> CreateCloudConnectNetworkOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateCloudConnectNetworkRequest&, const CreateCloudConnectNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudConnectNetworkAsyncHandler;
			typedef Outcome<Error, Model::RebootSmartAccessGatewayResult> RebootSmartAccessGatewayOutcome;
			typedef std::future<RebootSmartAccessGatewayOutcome> RebootSmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::RebootSmartAccessGatewayRequest&, const RebootSmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RebootSmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCloudConnectNetworksResult> DescribeCloudConnectNetworksOutcome;
			typedef std::future<DescribeCloudConnectNetworksOutcome> DescribeCloudConnectNetworksOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeCloudConnectNetworksRequest&, const DescribeCloudConnectNetworksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudConnectNetworksAsyncHandler;
			typedef Outcome<Error, Model::ModifyACLRuleResult> ModifyACLRuleOutcome;
			typedef std::future<ModifyACLRuleOutcome> ModifyACLRuleOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifyACLRuleRequest&, const ModifyACLRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyACLRuleAsyncHandler;
			typedef Outcome<Error, Model::ModifySmartAccessGatewayClientUserResult> ModifySmartAccessGatewayClientUserOutcome;
			typedef std::future<ModifySmartAccessGatewayClientUserOutcome> ModifySmartAccessGatewayClientUserOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifySmartAccessGatewayClientUserRequest&, const ModifySmartAccessGatewayClientUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySmartAccessGatewayClientUserAsyncHandler;
			typedef Outcome<Error, Model::DeleteNetworkOptimizationSettingResult> DeleteNetworkOptimizationSettingOutcome;
			typedef std::future<DeleteNetworkOptimizationSettingOutcome> DeleteNetworkOptimizationSettingOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteNetworkOptimizationSettingRequest&, const DeleteNetworkOptimizationSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetworkOptimizationSettingAsyncHandler;
			typedef Outcome<Error, Model::GetCloudConnectNetworkUseLimitResult> GetCloudConnectNetworkUseLimitOutcome;
			typedef std::future<GetCloudConnectNetworkUseLimitOutcome> GetCloudConnectNetworkUseLimitOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::GetCloudConnectNetworkUseLimitRequest&, const GetCloudConnectNetworkUseLimitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCloudConnectNetworkUseLimitAsyncHandler;
			typedef Outcome<Error, Model::DescribeSmartAccessGatewaysResult> DescribeSmartAccessGatewaysOutcome;
			typedef std::future<DescribeSmartAccessGatewaysOutcome> DescribeSmartAccessGatewaysOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSmartAccessGatewaysRequest&, const DescribeSmartAccessGatewaysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmartAccessGatewaysAsyncHandler;
			typedef Outcome<Error, Model::UpgradeSmartAccessGatewayResult> UpgradeSmartAccessGatewayOutcome;
			typedef std::future<UpgradeSmartAccessGatewayOutcome> UpgradeSmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::UpgradeSmartAccessGatewayRequest&, const UpgradeSmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeSmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserOnlineClientsResult> DescribeUserOnlineClientsOutcome;
			typedef std::future<DescribeUserOnlineClientsOutcome> DescribeUserOnlineClientsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeUserOnlineClientsRequest&, const DescribeUserOnlineClientsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserOnlineClientsAsyncHandler;
			typedef Outcome<Error, Model::DetachNetworkOptimizationSagsResult> DetachNetworkOptimizationSagsOutcome;
			typedef std::future<DetachNetworkOptimizationSagsOutcome> DetachNetworkOptimizationSagsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DetachNetworkOptimizationSagsRequest&, const DetachNetworkOptimizationSagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachNetworkOptimizationSagsAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserOnlineClientStatisticsResult> DescribeUserOnlineClientStatisticsOutcome;
			typedef std::future<DescribeUserOnlineClientStatisticsOutcome> DescribeUserOnlineClientStatisticsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeUserOnlineClientStatisticsRequest&, const DescribeUserOnlineClientStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserOnlineClientStatisticsAsyncHandler;
			typedef Outcome<Error, Model::CreateDedicatedLineBackupResult> CreateDedicatedLineBackupOutcome;
			typedef std::future<CreateDedicatedLineBackupOutcome> CreateDedicatedLineBackupOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateDedicatedLineBackupRequest&, const CreateDedicatedLineBackupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDedicatedLineBackupAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserFlowStatisticsResult> DescribeUserFlowStatisticsOutcome;
			typedef std::future<DescribeUserFlowStatisticsOutcome> DescribeUserFlowStatisticsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeUserFlowStatisticsRequest&, const DescribeUserFlowStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserFlowStatisticsAsyncHandler;
			typedef Outcome<Error, Model::SetSagRouteableAddressResult> SetSagRouteableAddressOutcome;
			typedef std::future<SetSagRouteableAddressOutcome> SetSagRouteableAddressOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::SetSagRouteableAddressRequest&, const SetSagRouteableAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetSagRouteableAddressAsyncHandler;
			typedef Outcome<Error, Model::ModifyACLResult> ModifyACLOutcome;
			typedef std::future<ModifyACLOutcome> ModifyACLOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifyACLRequest&, const ModifyACLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyACLAsyncHandler;
			typedef Outcome<Error, Model::DescribeSmartAccessGatewayClientUsersResult> DescribeSmartAccessGatewayClientUsersOutcome;
			typedef std::future<DescribeSmartAccessGatewayClientUsersOutcome> DescribeSmartAccessGatewayClientUsersOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSmartAccessGatewayClientUsersRequest&, const DescribeSmartAccessGatewayClientUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmartAccessGatewayClientUsersAsyncHandler;
			typedef Outcome<Error, Model::GetSmartAccessGatewayUseLimitResult> GetSmartAccessGatewayUseLimitOutcome;
			typedef std::future<GetSmartAccessGatewayUseLimitOutcome> GetSmartAccessGatewayUseLimitOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::GetSmartAccessGatewayUseLimitRequest&, const GetSmartAccessGatewayUseLimitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSmartAccessGatewayUseLimitAsyncHandler;
			typedef Outcome<Error, Model::UnicomOrderConfirmResult> UnicomOrderConfirmOutcome;
			typedef std::future<UnicomOrderConfirmOutcome> UnicomOrderConfirmOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::UnicomOrderConfirmRequest&, const UnicomOrderConfirmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnicomOrderConfirmAsyncHandler;
			typedef Outcome<Error, Model::DescribeNetworkOptimizationsResult> DescribeNetworkOptimizationsOutcome;
			typedef std::future<DescribeNetworkOptimizationsOutcome> DescribeNetworkOptimizationsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeNetworkOptimizationsRequest&, const DescribeNetworkOptimizationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkOptimizationsAsyncHandler;

			SmartagClient(const Credentials &credentials, const ClientConfiguration &configuration);
			SmartagClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			SmartagClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~SmartagClient();
			GrantInstanceToCbnOutcome grantInstanceToCbn(const Model::GrantInstanceToCbnRequest &request)const;
			void grantInstanceToCbnAsync(const Model::GrantInstanceToCbnRequest& request, const GrantInstanceToCbnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrantInstanceToCbnOutcomeCallable grantInstanceToCbnCallable(const Model::GrantInstanceToCbnRequest& request) const;
			DeleteNetworkOptimizationOutcome deleteNetworkOptimization(const Model::DeleteNetworkOptimizationRequest &request)const;
			void deleteNetworkOptimizationAsync(const Model::DeleteNetworkOptimizationRequest& request, const DeleteNetworkOptimizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNetworkOptimizationOutcomeCallable deleteNetworkOptimizationCallable(const Model::DeleteNetworkOptimizationRequest& request) const;
			AddNetworkOptimizationSettingOutcome addNetworkOptimizationSetting(const Model::AddNetworkOptimizationSettingRequest &request)const;
			void addNetworkOptimizationSettingAsync(const Model::AddNetworkOptimizationSettingRequest& request, const AddNetworkOptimizationSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddNetworkOptimizationSettingOutcomeCallable addNetworkOptimizationSettingCallable(const Model::AddNetworkOptimizationSettingRequest& request) const;
			ActivateSmartAccessGatewayOutcome activateSmartAccessGateway(const Model::ActivateSmartAccessGatewayRequest &request)const;
			void activateSmartAccessGatewayAsync(const Model::ActivateSmartAccessGatewayRequest& request, const ActivateSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ActivateSmartAccessGatewayOutcomeCallable activateSmartAccessGatewayCallable(const Model::ActivateSmartAccessGatewayRequest& request) const;
			DeleteACLRuleOutcome deleteACLRule(const Model::DeleteACLRuleRequest &request)const;
			void deleteACLRuleAsync(const Model::DeleteACLRuleRequest& request, const DeleteACLRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteACLRuleOutcomeCallable deleteACLRuleCallable(const Model::DeleteACLRuleRequest& request) const;
			ModifyNetworkOptimizationOutcome modifyNetworkOptimization(const Model::ModifyNetworkOptimizationRequest &request)const;
			void modifyNetworkOptimizationAsync(const Model::ModifyNetworkOptimizationRequest& request, const ModifyNetworkOptimizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyNetworkOptimizationOutcomeCallable modifyNetworkOptimizationCallable(const Model::ModifyNetworkOptimizationRequest& request) const;
			CreateSmartAccessGatewayClientUserOutcome createSmartAccessGatewayClientUser(const Model::CreateSmartAccessGatewayClientUserRequest &request)const;
			void createSmartAccessGatewayClientUserAsync(const Model::CreateSmartAccessGatewayClientUserRequest& request, const CreateSmartAccessGatewayClientUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSmartAccessGatewayClientUserOutcomeCallable createSmartAccessGatewayClientUserCallable(const Model::CreateSmartAccessGatewayClientUserRequest& request) const;
			UnicomSignConfirmOutcome unicomSignConfirm(const Model::UnicomSignConfirmRequest &request)const;
			void unicomSignConfirmAsync(const Model::UnicomSignConfirmRequest& request, const UnicomSignConfirmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnicomSignConfirmOutcomeCallable unicomSignConfirmCallable(const Model::UnicomSignConfirmRequest& request) const;
			AddACLRuleOutcome addACLRule(const Model::AddACLRuleRequest &request)const;
			void addACLRuleAsync(const Model::AddACLRuleRequest& request, const AddACLRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddACLRuleOutcomeCallable addACLRuleCallable(const Model::AddACLRuleRequest& request) const;
			DisassociateACLOutcome disassociateACL(const Model::DisassociateACLRequest &request)const;
			void disassociateACLAsync(const Model::DisassociateACLRequest& request, const DisassociateACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisassociateACLOutcomeCallable disassociateACLCallable(const Model::DisassociateACLRequest& request) const;
			BindSmartAccessGatewayOutcome bindSmartAccessGateway(const Model::BindSmartAccessGatewayRequest &request)const;
			void bindSmartAccessGatewayAsync(const Model::BindSmartAccessGatewayRequest& request, const BindSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindSmartAccessGatewayOutcomeCallable bindSmartAccessGatewayCallable(const Model::BindSmartAccessGatewayRequest& request) const;
			CreateNetworkOptimizationOutcome createNetworkOptimization(const Model::CreateNetworkOptimizationRequest &request)const;
			void createNetworkOptimizationAsync(const Model::CreateNetworkOptimizationRequest& request, const CreateNetworkOptimizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNetworkOptimizationOutcomeCallable createNetworkOptimizationCallable(const Model::CreateNetworkOptimizationRequest& request) const;
			DeleteSAGLinkLevelHaOutcome deleteSAGLinkLevelHa(const Model::DeleteSAGLinkLevelHaRequest &request)const;
			void deleteSAGLinkLevelHaAsync(const Model::DeleteSAGLinkLevelHaRequest& request, const DeleteSAGLinkLevelHaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSAGLinkLevelHaOutcomeCallable deleteSAGLinkLevelHaCallable(const Model::DeleteSAGLinkLevelHaRequest& request) const;
			DeleteSmartAccessGatewayClientUserOutcome deleteSmartAccessGatewayClientUser(const Model::DeleteSmartAccessGatewayClientUserRequest &request)const;
			void deleteSmartAccessGatewayClientUserAsync(const Model::DeleteSmartAccessGatewayClientUserRequest& request, const DeleteSmartAccessGatewayClientUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSmartAccessGatewayClientUserOutcomeCallable deleteSmartAccessGatewayClientUserCallable(const Model::DeleteSmartAccessGatewayClientUserRequest& request) const;
			KickOutClientsOutcome kickOutClients(const Model::KickOutClientsRequest &request)const;
			void kickOutClientsAsync(const Model::KickOutClientsRequest& request, const KickOutClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			KickOutClientsOutcomeCallable kickOutClientsCallable(const Model::KickOutClientsRequest& request) const;
			SwitchSAGHaStateOutcome switchSAGHaState(const Model::SwitchSAGHaStateRequest &request)const;
			void switchSAGHaStateAsync(const Model::SwitchSAGHaStateRequest& request, const SwitchSAGHaStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchSAGHaStateOutcomeCallable switchSAGHaStateCallable(const Model::SwitchSAGHaStateRequest& request) const;
			DescribeSagRouteableAddressOutcome describeSagRouteableAddress(const Model::DescribeSagRouteableAddressRequest &request)const;
			void describeSagRouteableAddressAsync(const Model::DescribeSagRouteableAddressRequest& request, const DescribeSagRouteableAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSagRouteableAddressOutcomeCallable describeSagRouteableAddressCallable(const Model::DescribeSagRouteableAddressRequest& request) const;
			DescribeGrantRulesOutcome describeGrantRules(const Model::DescribeGrantRulesRequest &request)const;
			void describeGrantRulesAsync(const Model::DescribeGrantRulesRequest& request, const DescribeGrantRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGrantRulesOutcomeCallable describeGrantRulesCallable(const Model::DescribeGrantRulesRequest& request) const;
			SwitchCloudBoxHaStateOutcome switchCloudBoxHaState(const Model::SwitchCloudBoxHaStateRequest &request)const;
			void switchCloudBoxHaStateAsync(const Model::SwitchCloudBoxHaStateRequest& request, const SwitchCloudBoxHaStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchCloudBoxHaStateOutcomeCallable switchCloudBoxHaStateCallable(const Model::SwitchCloudBoxHaStateRequest& request) const;
			UnbindSmartAccessGatewayOutcome unbindSmartAccessGateway(const Model::UnbindSmartAccessGatewayRequest &request)const;
			void unbindSmartAccessGatewayAsync(const Model::UnbindSmartAccessGatewayRequest& request, const UnbindSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindSmartAccessGatewayOutcomeCallable unbindSmartAccessGatewayCallable(const Model::UnbindSmartAccessGatewayRequest& request) const;
			CreateSmartAccessGatewayOutcome createSmartAccessGateway(const Model::CreateSmartAccessGatewayRequest &request)const;
			void createSmartAccessGatewayAsync(const Model::CreateSmartAccessGatewayRequest& request, const CreateSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSmartAccessGatewayOutcomeCallable createSmartAccessGatewayCallable(const Model::CreateSmartAccessGatewayRequest& request) const;
			AttachNetworkOptimizationSagsOutcome attachNetworkOptimizationSags(const Model::AttachNetworkOptimizationSagsRequest &request)const;
			void attachNetworkOptimizationSagsAsync(const Model::AttachNetworkOptimizationSagsRequest& request, const AttachNetworkOptimizationSagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachNetworkOptimizationSagsOutcomeCallable attachNetworkOptimizationSagsCallable(const Model::AttachNetworkOptimizationSagsRequest& request) const;
			ClearSagRouteableAddressOutcome clearSagRouteableAddress(const Model::ClearSagRouteableAddressRequest &request)const;
			void clearSagRouteableAddressAsync(const Model::ClearSagRouteableAddressRequest& request, const ClearSagRouteableAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ClearSagRouteableAddressOutcomeCallable clearSagRouteableAddressCallable(const Model::ClearSagRouteableAddressRequest& request) const;
			ModifyCloudConnectNetworkOutcome modifyCloudConnectNetwork(const Model::ModifyCloudConnectNetworkRequest &request)const;
			void modifyCloudConnectNetworkAsync(const Model::ModifyCloudConnectNetworkRequest& request, const ModifyCloudConnectNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCloudConnectNetworkOutcomeCallable modifyCloudConnectNetworkCallable(const Model::ModifyCloudConnectNetworkRequest& request) const;
			DeleteACLOutcome deleteACL(const Model::DeleteACLRequest &request)const;
			void deleteACLAsync(const Model::DeleteACLRequest& request, const DeleteACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteACLOutcomeCallable deleteACLCallable(const Model::DeleteACLRequest& request) const;
			DescribeSagOnlineClientStatisticsOutcome describeSagOnlineClientStatistics(const Model::DescribeSagOnlineClientStatisticsRequest &request)const;
			void describeSagOnlineClientStatisticsAsync(const Model::DescribeSagOnlineClientStatisticsRequest& request, const DescribeSagOnlineClientStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSagOnlineClientStatisticsOutcomeCallable describeSagOnlineClientStatisticsCallable(const Model::DescribeSagOnlineClientStatisticsRequest& request) const;
			DowngradeSmartAccessGatewayOutcome downgradeSmartAccessGateway(const Model::DowngradeSmartAccessGatewayRequest &request)const;
			void downgradeSmartAccessGatewayAsync(const Model::DowngradeSmartAccessGatewayRequest& request, const DowngradeSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DowngradeSmartAccessGatewayOutcomeCallable downgradeSmartAccessGatewayCallable(const Model::DowngradeSmartAccessGatewayRequest& request) const;
			AssociateACLOutcome associateACL(const Model::AssociateACLRequest &request)const;
			void associateACLAsync(const Model::AssociateACLRequest& request, const AssociateACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateACLOutcomeCallable associateACLCallable(const Model::AssociateACLRequest& request) const;
			DescribeSmartAccessGatewayVersionsOutcome describeSmartAccessGatewayVersions(const Model::DescribeSmartAccessGatewayVersionsRequest &request)const;
			void describeSmartAccessGatewayVersionsAsync(const Model::DescribeSmartAccessGatewayVersionsRequest& request, const DescribeSmartAccessGatewayVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSmartAccessGatewayVersionsOutcomeCallable describeSmartAccessGatewayVersionsCallable(const Model::DescribeSmartAccessGatewayVersionsRequest& request) const;
			UpdateSmartAccessGatewayVersionOutcome updateSmartAccessGatewayVersion(const Model::UpdateSmartAccessGatewayVersionRequest &request)const;
			void updateSmartAccessGatewayVersionAsync(const Model::UpdateSmartAccessGatewayVersionRequest& request, const UpdateSmartAccessGatewayVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSmartAccessGatewayVersionOutcomeCallable updateSmartAccessGatewayVersionCallable(const Model::UpdateSmartAccessGatewayVersionRequest& request) const;
			ModifySmartAccessGatewayOutcome modifySmartAccessGateway(const Model::ModifySmartAccessGatewayRequest &request)const;
			void modifySmartAccessGatewayAsync(const Model::ModifySmartAccessGatewayRequest& request, const ModifySmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySmartAccessGatewayOutcomeCallable modifySmartAccessGatewayCallable(const Model::ModifySmartAccessGatewayRequest& request) const;
			RevokeInstanceFromCbnOutcome revokeInstanceFromCbn(const Model::RevokeInstanceFromCbnRequest &request)const;
			void revokeInstanceFromCbnAsync(const Model::RevokeInstanceFromCbnRequest& request, const RevokeInstanceFromCbnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeInstanceFromCbnOutcomeCallable revokeInstanceFromCbnCallable(const Model::RevokeInstanceFromCbnRequest& request) const;
			ModifySerialNumberOutcome modifySerialNumber(const Model::ModifySerialNumberRequest &request)const;
			void modifySerialNumberAsync(const Model::ModifySerialNumberRequest& request, const ModifySerialNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySerialNumberOutcomeCallable modifySerialNumberCallable(const Model::ModifySerialNumberRequest& request) const;
			DescribeACLAttributeOutcome describeACLAttribute(const Model::DescribeACLAttributeRequest &request)const;
			void describeACLAttributeAsync(const Model::DescribeACLAttributeRequest& request, const DescribeACLAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeACLAttributeOutcomeCallable describeACLAttributeCallable(const Model::DescribeACLAttributeRequest& request) const;
			DeleteDedicatedLineBackupOutcome deleteDedicatedLineBackup(const Model::DeleteDedicatedLineBackupRequest &request)const;
			void deleteDedicatedLineBackupAsync(const Model::DeleteDedicatedLineBackupRequest& request, const DeleteDedicatedLineBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDedicatedLineBackupOutcomeCallable deleteDedicatedLineBackupCallable(const Model::DeleteDedicatedLineBackupRequest& request) const;
			ResetSmartAccessGatewayClientUserPasswordOutcome resetSmartAccessGatewayClientUserPassword(const Model::ResetSmartAccessGatewayClientUserPasswordRequest &request)const;
			void resetSmartAccessGatewayClientUserPasswordAsync(const Model::ResetSmartAccessGatewayClientUserPasswordRequest& request, const ResetSmartAccessGatewayClientUserPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetSmartAccessGatewayClientUserPasswordOutcomeCallable resetSmartAccessGatewayClientUserPasswordCallable(const Model::ResetSmartAccessGatewayClientUserPasswordRequest& request) const;
			DescribeACLsOutcome describeACLs(const Model::DescribeACLsRequest &request)const;
			void describeACLsAsync(const Model::DescribeACLsRequest& request, const DescribeACLsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeACLsOutcomeCallable describeACLsCallable(const Model::DescribeACLsRequest& request) const;
			UnlockSmartAccessGatewayOutcome unlockSmartAccessGateway(const Model::UnlockSmartAccessGatewayRequest &request)const;
			void unlockSmartAccessGatewayAsync(const Model::UnlockSmartAccessGatewayRequest& request, const UnlockSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnlockSmartAccessGatewayOutcomeCallable unlockSmartAccessGatewayCallable(const Model::UnlockSmartAccessGatewayRequest& request) const;
			CreateSAGLinkLevelHaOutcome createSAGLinkLevelHa(const Model::CreateSAGLinkLevelHaRequest &request)const;
			void createSAGLinkLevelHaAsync(const Model::CreateSAGLinkLevelHaRequest& request, const CreateSAGLinkLevelHaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSAGLinkLevelHaOutcomeCallable createSAGLinkLevelHaCallable(const Model::CreateSAGLinkLevelHaRequest& request) const;
			DescribeSmartAccessGatewayHaOutcome describeSmartAccessGatewayHa(const Model::DescribeSmartAccessGatewayHaRequest &request)const;
			void describeSmartAccessGatewayHaAsync(const Model::DescribeSmartAccessGatewayHaRequest& request, const DescribeSmartAccessGatewayHaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSmartAccessGatewayHaOutcomeCallable describeSmartAccessGatewayHaCallable(const Model::DescribeSmartAccessGatewayHaRequest& request) const;
			CreateSmartAccessGatewaySoftwareOutcome createSmartAccessGatewaySoftware(const Model::CreateSmartAccessGatewaySoftwareRequest &request)const;
			void createSmartAccessGatewaySoftwareAsync(const Model::CreateSmartAccessGatewaySoftwareRequest& request, const CreateSmartAccessGatewaySoftwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSmartAccessGatewaySoftwareOutcomeCallable createSmartAccessGatewaySoftwareCallable(const Model::CreateSmartAccessGatewaySoftwareRequest& request) const;
			DescribeNetworkOptimizationSettingsOutcome describeNetworkOptimizationSettings(const Model::DescribeNetworkOptimizationSettingsRequest &request)const;
			void describeNetworkOptimizationSettingsAsync(const Model::DescribeNetworkOptimizationSettingsRequest& request, const DescribeNetworkOptimizationSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNetworkOptimizationSettingsOutcomeCallable describeNetworkOptimizationSettingsCallable(const Model::DescribeNetworkOptimizationSettingsRequest& request) const;
			DeleteCloudConnectNetworkOutcome deleteCloudConnectNetwork(const Model::DeleteCloudConnectNetworkRequest &request)const;
			void deleteCloudConnectNetworkAsync(const Model::DeleteCloudConnectNetworkRequest& request, const DeleteCloudConnectNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCloudConnectNetworkOutcomeCallable deleteCloudConnectNetworkCallable(const Model::DeleteCloudConnectNetworkRequest& request) const;
			CreateACLOutcome createACL(const Model::CreateACLRequest &request)const;
			void createACLAsync(const Model::CreateACLRequest& request, const CreateACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateACLOutcomeCallable createACLCallable(const Model::CreateACLRequest& request) const;
			DescribeNetworkOptimizationSagsOutcome describeNetworkOptimizationSags(const Model::DescribeNetworkOptimizationSagsRequest &request)const;
			void describeNetworkOptimizationSagsAsync(const Model::DescribeNetworkOptimizationSagsRequest& request, const DescribeNetworkOptimizationSagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNetworkOptimizationSagsOutcomeCallable describeNetworkOptimizationSagsCallable(const Model::DescribeNetworkOptimizationSagsRequest& request) const;
			CreateCloudConnectNetworkOutcome createCloudConnectNetwork(const Model::CreateCloudConnectNetworkRequest &request)const;
			void createCloudConnectNetworkAsync(const Model::CreateCloudConnectNetworkRequest& request, const CreateCloudConnectNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCloudConnectNetworkOutcomeCallable createCloudConnectNetworkCallable(const Model::CreateCloudConnectNetworkRequest& request) const;
			RebootSmartAccessGatewayOutcome rebootSmartAccessGateway(const Model::RebootSmartAccessGatewayRequest &request)const;
			void rebootSmartAccessGatewayAsync(const Model::RebootSmartAccessGatewayRequest& request, const RebootSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RebootSmartAccessGatewayOutcomeCallable rebootSmartAccessGatewayCallable(const Model::RebootSmartAccessGatewayRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeCloudConnectNetworksOutcome describeCloudConnectNetworks(const Model::DescribeCloudConnectNetworksRequest &request)const;
			void describeCloudConnectNetworksAsync(const Model::DescribeCloudConnectNetworksRequest& request, const DescribeCloudConnectNetworksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCloudConnectNetworksOutcomeCallable describeCloudConnectNetworksCallable(const Model::DescribeCloudConnectNetworksRequest& request) const;
			ModifyACLRuleOutcome modifyACLRule(const Model::ModifyACLRuleRequest &request)const;
			void modifyACLRuleAsync(const Model::ModifyACLRuleRequest& request, const ModifyACLRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyACLRuleOutcomeCallable modifyACLRuleCallable(const Model::ModifyACLRuleRequest& request) const;
			ModifySmartAccessGatewayClientUserOutcome modifySmartAccessGatewayClientUser(const Model::ModifySmartAccessGatewayClientUserRequest &request)const;
			void modifySmartAccessGatewayClientUserAsync(const Model::ModifySmartAccessGatewayClientUserRequest& request, const ModifySmartAccessGatewayClientUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySmartAccessGatewayClientUserOutcomeCallable modifySmartAccessGatewayClientUserCallable(const Model::ModifySmartAccessGatewayClientUserRequest& request) const;
			DeleteNetworkOptimizationSettingOutcome deleteNetworkOptimizationSetting(const Model::DeleteNetworkOptimizationSettingRequest &request)const;
			void deleteNetworkOptimizationSettingAsync(const Model::DeleteNetworkOptimizationSettingRequest& request, const DeleteNetworkOptimizationSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNetworkOptimizationSettingOutcomeCallable deleteNetworkOptimizationSettingCallable(const Model::DeleteNetworkOptimizationSettingRequest& request) const;
			GetCloudConnectNetworkUseLimitOutcome getCloudConnectNetworkUseLimit(const Model::GetCloudConnectNetworkUseLimitRequest &request)const;
			void getCloudConnectNetworkUseLimitAsync(const Model::GetCloudConnectNetworkUseLimitRequest& request, const GetCloudConnectNetworkUseLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCloudConnectNetworkUseLimitOutcomeCallable getCloudConnectNetworkUseLimitCallable(const Model::GetCloudConnectNetworkUseLimitRequest& request) const;
			DescribeSmartAccessGatewaysOutcome describeSmartAccessGateways(const Model::DescribeSmartAccessGatewaysRequest &request)const;
			void describeSmartAccessGatewaysAsync(const Model::DescribeSmartAccessGatewaysRequest& request, const DescribeSmartAccessGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSmartAccessGatewaysOutcomeCallable describeSmartAccessGatewaysCallable(const Model::DescribeSmartAccessGatewaysRequest& request) const;
			UpgradeSmartAccessGatewayOutcome upgradeSmartAccessGateway(const Model::UpgradeSmartAccessGatewayRequest &request)const;
			void upgradeSmartAccessGatewayAsync(const Model::UpgradeSmartAccessGatewayRequest& request, const UpgradeSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeSmartAccessGatewayOutcomeCallable upgradeSmartAccessGatewayCallable(const Model::UpgradeSmartAccessGatewayRequest& request) const;
			DescribeUserOnlineClientsOutcome describeUserOnlineClients(const Model::DescribeUserOnlineClientsRequest &request)const;
			void describeUserOnlineClientsAsync(const Model::DescribeUserOnlineClientsRequest& request, const DescribeUserOnlineClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserOnlineClientsOutcomeCallable describeUserOnlineClientsCallable(const Model::DescribeUserOnlineClientsRequest& request) const;
			DetachNetworkOptimizationSagsOutcome detachNetworkOptimizationSags(const Model::DetachNetworkOptimizationSagsRequest &request)const;
			void detachNetworkOptimizationSagsAsync(const Model::DetachNetworkOptimizationSagsRequest& request, const DetachNetworkOptimizationSagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachNetworkOptimizationSagsOutcomeCallable detachNetworkOptimizationSagsCallable(const Model::DetachNetworkOptimizationSagsRequest& request) const;
			DescribeUserOnlineClientStatisticsOutcome describeUserOnlineClientStatistics(const Model::DescribeUserOnlineClientStatisticsRequest &request)const;
			void describeUserOnlineClientStatisticsAsync(const Model::DescribeUserOnlineClientStatisticsRequest& request, const DescribeUserOnlineClientStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserOnlineClientStatisticsOutcomeCallable describeUserOnlineClientStatisticsCallable(const Model::DescribeUserOnlineClientStatisticsRequest& request) const;
			CreateDedicatedLineBackupOutcome createDedicatedLineBackup(const Model::CreateDedicatedLineBackupRequest &request)const;
			void createDedicatedLineBackupAsync(const Model::CreateDedicatedLineBackupRequest& request, const CreateDedicatedLineBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDedicatedLineBackupOutcomeCallable createDedicatedLineBackupCallable(const Model::CreateDedicatedLineBackupRequest& request) const;
			DescribeUserFlowStatisticsOutcome describeUserFlowStatistics(const Model::DescribeUserFlowStatisticsRequest &request)const;
			void describeUserFlowStatisticsAsync(const Model::DescribeUserFlowStatisticsRequest& request, const DescribeUserFlowStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserFlowStatisticsOutcomeCallable describeUserFlowStatisticsCallable(const Model::DescribeUserFlowStatisticsRequest& request) const;
			SetSagRouteableAddressOutcome setSagRouteableAddress(const Model::SetSagRouteableAddressRequest &request)const;
			void setSagRouteableAddressAsync(const Model::SetSagRouteableAddressRequest& request, const SetSagRouteableAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetSagRouteableAddressOutcomeCallable setSagRouteableAddressCallable(const Model::SetSagRouteableAddressRequest& request) const;
			ModifyACLOutcome modifyACL(const Model::ModifyACLRequest &request)const;
			void modifyACLAsync(const Model::ModifyACLRequest& request, const ModifyACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyACLOutcomeCallable modifyACLCallable(const Model::ModifyACLRequest& request) const;
			DescribeSmartAccessGatewayClientUsersOutcome describeSmartAccessGatewayClientUsers(const Model::DescribeSmartAccessGatewayClientUsersRequest &request)const;
			void describeSmartAccessGatewayClientUsersAsync(const Model::DescribeSmartAccessGatewayClientUsersRequest& request, const DescribeSmartAccessGatewayClientUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSmartAccessGatewayClientUsersOutcomeCallable describeSmartAccessGatewayClientUsersCallable(const Model::DescribeSmartAccessGatewayClientUsersRequest& request) const;
			GetSmartAccessGatewayUseLimitOutcome getSmartAccessGatewayUseLimit(const Model::GetSmartAccessGatewayUseLimitRequest &request)const;
			void getSmartAccessGatewayUseLimitAsync(const Model::GetSmartAccessGatewayUseLimitRequest& request, const GetSmartAccessGatewayUseLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSmartAccessGatewayUseLimitOutcomeCallable getSmartAccessGatewayUseLimitCallable(const Model::GetSmartAccessGatewayUseLimitRequest& request) const;
			UnicomOrderConfirmOutcome unicomOrderConfirm(const Model::UnicomOrderConfirmRequest &request)const;
			void unicomOrderConfirmAsync(const Model::UnicomOrderConfirmRequest& request, const UnicomOrderConfirmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnicomOrderConfirmOutcomeCallable unicomOrderConfirmCallable(const Model::UnicomOrderConfirmRequest& request) const;
			DescribeNetworkOptimizationsOutcome describeNetworkOptimizations(const Model::DescribeNetworkOptimizationsRequest &request)const;
			void describeNetworkOptimizationsAsync(const Model::DescribeNetworkOptimizationsRequest& request, const DescribeNetworkOptimizationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNetworkOptimizationsOutcomeCallable describeNetworkOptimizationsCallable(const Model::DescribeNetworkOptimizationsRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_SMARTAG_SMARTAGCLIENT_H_
