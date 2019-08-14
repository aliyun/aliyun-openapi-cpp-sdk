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
#include "model/AddNetworkOptimizationSettingRequest.h"
#include "model/AddNetworkOptimizationSettingResult.h"
#include "model/ActivateSmartAccessGatewayRequest.h"
#include "model/ActivateSmartAccessGatewayResult.h"
#include "model/DeleteACLRuleRequest.h"
#include "model/DeleteACLRuleResult.h"
#include "model/CreateSmartAccessGatewayClientUserRequest.h"
#include "model/CreateSmartAccessGatewayClientUserResult.h"
#include "model/UnicomSignConfirmRequest.h"
#include "model/UnicomSignConfirmResult.h"
#include "model/CreateNetworkOptimizationRequest.h"
#include "model/CreateNetworkOptimizationResult.h"
#include "model/RevokeSagInstanceFromCcnRequest.h"
#include "model/RevokeSagInstanceFromCcnResult.h"
#include "model/ModifySagRemoteAccessRequest.h"
#include "model/ModifySagRemoteAccessResult.h"
#include "model/DeleteSmartAccessGatewayClientUserRequest.h"
#include "model/DeleteSmartAccessGatewayClientUserResult.h"
#include "model/CreateQosCarRequest.h"
#include "model/CreateQosCarResult.h"
#include "model/DescribeGrantRulesRequest.h"
#include "model/DescribeGrantRulesResult.h"
#include "model/UnbindSmartAccessGatewayRequest.h"
#include "model/UnbindSmartAccessGatewayResult.h"
#include "model/CreateSmartAccessGatewayRequest.h"
#include "model/CreateSmartAccessGatewayResult.h"
#include "model/ClearSagRouteableAddressRequest.h"
#include "model/ClearSagRouteableAddressResult.h"
#include "model/AssociateQosRequest.h"
#include "model/AssociateQosResult.h"
#include "model/DeleteFlowLogRequest.h"
#include "model/DeleteFlowLogResult.h"
#include "model/ModifyCloudConnectNetworkRequest.h"
#include "model/ModifyCloudConnectNetworkResult.h"
#include "model/DescribeSagOnlineClientStatisticsRequest.h"
#include "model/DescribeSagOnlineClientStatisticsResult.h"
#include "model/DescribeSmartAccessGatewayRoutesRequest.h"
#include "model/DescribeSmartAccessGatewayRoutesResult.h"
#include "model/DowngradeSmartAccessGatewayRequest.h"
#include "model/DowngradeSmartAccessGatewayResult.h"
#include "model/ModifySmartAccessGatewayUpBandwidthRequest.h"
#include "model/ModifySmartAccessGatewayUpBandwidthResult.h"
#include "model/GrantSagInstanceToCcnRequest.h"
#include "model/GrantSagInstanceToCcnResult.h"
#include "model/ModifySmartAccessGatewayRequest.h"
#include "model/ModifySmartAccessGatewayResult.h"
#include "model/UpdateSmartAccessGatewayVersionRequest.h"
#include "model/UpdateSmartAccessGatewayVersionResult.h"
#include "model/ModifyFlowLogAttributeRequest.h"
#include "model/ModifyFlowLogAttributeResult.h"
#include "model/DescribeQosPoliciesRequest.h"
#include "model/DescribeQosPoliciesResult.h"
#include "model/DescribeACLAttributeRequest.h"
#include "model/DescribeACLAttributeResult.h"
#include "model/CreateQosRequest.h"
#include "model/CreateQosResult.h"
#include "model/CreateSmartAccessGatewaySoftwareRequest.h"
#include "model/CreateSmartAccessGatewaySoftwareResult.h"
#include "model/DescribeSmartAccessGatewayAttributeRequest.h"
#include "model/DescribeSmartAccessGatewayAttributeResult.h"
#include "model/DescribeNetworkOptimizationSagsRequest.h"
#include "model/DescribeNetworkOptimizationSagsResult.h"
#include "model/CreateCloudConnectNetworkRequest.h"
#include "model/CreateCloudConnectNetworkResult.h"
#include "model/DeleteQosPolicyRequest.h"
#include "model/DeleteQosPolicyResult.h"
#include "model/DescribeQosesRequest.h"
#include "model/DescribeQosesResult.h"
#include "model/DeleteSnatEntryRequest.h"
#include "model/DeleteSnatEntryResult.h"
#include "model/DeleteQosRequest.h"
#include "model/DeleteQosResult.h"
#include "model/DescribeSmartAccessGatewaysRequest.h"
#include "model/DescribeSmartAccessGatewaysResult.h"
#include "model/DescribeGrantSagRulesRequest.h"
#include "model/DescribeGrantSagRulesResult.h"
#include "model/DescribeUserOnlineClientsRequest.h"
#include "model/DescribeUserOnlineClientsResult.h"
#include "model/DescribeQosCarsRequest.h"
#include "model/DescribeQosCarsResult.h"
#include "model/DescribeUserOnlineClientStatisticsRequest.h"
#include "model/DescribeUserOnlineClientStatisticsResult.h"
#include "model/BindVbrRequest.h"
#include "model/BindVbrResult.h"
#include "model/CreateDedicatedLineBackupRequest.h"
#include "model/CreateDedicatedLineBackupResult.h"
#include "model/DescribeUserFlowStatisticsRequest.h"
#include "model/DescribeUserFlowStatisticsResult.h"
#include "model/DisableSmartAccessGatewayUserRequest.h"
#include "model/DisableSmartAccessGatewayUserResult.h"
#include "model/DeleteDnatEntryRequest.h"
#include "model/DeleteDnatEntryResult.h"
#include "model/SetSagRouteableAddressRequest.h"
#include "model/SetSagRouteableAddressResult.h"
#include "model/ModifyACLRequest.h"
#include "model/ModifyACLResult.h"
#include "model/DescribeFlowLogsRequest.h"
#include "model/DescribeFlowLogsResult.h"
#include "model/DescribeSmartAccessGatewayClientUsersRequest.h"
#include "model/DescribeSmartAccessGatewayClientUsersResult.h"
#include "model/GetSmartAccessGatewayUseLimitRequest.h"
#include "model/GetSmartAccessGatewayUseLimitResult.h"
#include "model/UnicomOrderConfirmRequest.h"
#include "model/UnicomOrderConfirmResult.h"
#include "model/ModifyQosPolicyRequest.h"
#include "model/ModifyQosPolicyResult.h"
#include "model/DescribeNetworkOptimizationsRequest.h"
#include "model/DescribeNetworkOptimizationsResult.h"
#include "model/GrantInstanceToCbnRequest.h"
#include "model/GrantInstanceToCbnResult.h"
#include "model/AddSnatEntryRequest.h"
#include "model/AddSnatEntryResult.h"
#include "model/DeleteNetworkOptimizationRequest.h"
#include "model/DeleteNetworkOptimizationResult.h"
#include "model/AddDnatEntryRequest.h"
#include "model/AddDnatEntryResult.h"
#include "model/ModifyNetworkOptimizationRequest.h"
#include "model/ModifyNetworkOptimizationResult.h"
#include "model/DescribeSnatEntriesRequest.h"
#include "model/DescribeSnatEntriesResult.h"
#include "model/AddACLRuleRequest.h"
#include "model/AddACLRuleResult.h"
#include "model/AssociateFlowLogRequest.h"
#include "model/AssociateFlowLogResult.h"
#include "model/ModifyQosCarRequest.h"
#include "model/ModifyQosCarResult.h"
#include "model/BindSmartAccessGatewayRequest.h"
#include "model/BindSmartAccessGatewayResult.h"
#include "model/DisassociateACLRequest.h"
#include "model/DisassociateACLResult.h"
#include "model/DeleteSAGLinkLevelHaRequest.h"
#include "model/DeleteSAGLinkLevelHaResult.h"
#include "model/DeactiveFlowLogRequest.h"
#include "model/DeactiveFlowLogResult.h"
#include "model/CreateFlowLogRequest.h"
#include "model/CreateFlowLogResult.h"
#include "model/ActiveFlowLogRequest.h"
#include "model/ActiveFlowLogResult.h"
#include "model/SwitchSAGHaStateRequest.h"
#include "model/SwitchSAGHaStateResult.h"
#include "model/KickOutClientsRequest.h"
#include "model/KickOutClientsResult.h"
#include "model/DescribeSagRouteableAddressRequest.h"
#include "model/DescribeSagRouteableAddressResult.h"
#include "model/SwitchCloudBoxHaStateRequest.h"
#include "model/SwitchCloudBoxHaStateResult.h"
#include "model/AttachNetworkOptimizationSagsRequest.h"
#include "model/AttachNetworkOptimizationSagsResult.h"
#include "model/DeleteACLRequest.h"
#include "model/DeleteACLResult.h"
#include "model/AssociateACLRequest.h"
#include "model/AssociateACLResult.h"
#include "model/DescribeDnatEntriesRequest.h"
#include "model/DescribeDnatEntriesResult.h"
#include "model/DescribeSmartAccessGatewayVersionsRequest.h"
#include "model/DescribeSmartAccessGatewayVersionsResult.h"
#include "model/RevokeInstanceFromCbnRequest.h"
#include "model/RevokeInstanceFromCbnResult.h"
#include "model/CreateQosPolicyRequest.h"
#include "model/CreateQosPolicyResult.h"
#include "model/ModifySerialNumberRequest.h"
#include "model/ModifySerialNumberResult.h"
#include "model/DescribeFlowLogSagsRequest.h"
#include "model/DescribeFlowLogSagsResult.h"
#include "model/DeleteDedicatedLineBackupRequest.h"
#include "model/DeleteDedicatedLineBackupResult.h"
#include "model/DescribeACLsRequest.h"
#include "model/DescribeACLsResult.h"
#include "model/ResetSmartAccessGatewayClientUserPasswordRequest.h"
#include "model/ResetSmartAccessGatewayClientUserPasswordResult.h"
#include "model/UnlockSmartAccessGatewayRequest.h"
#include "model/UnlockSmartAccessGatewayResult.h"
#include "model/DescribeUnbindFlowLogSagsRequest.h"
#include "model/DescribeUnbindFlowLogSagsResult.h"
#include "model/CreateSAGLinkLevelHaRequest.h"
#include "model/CreateSAGLinkLevelHaResult.h"
#include "model/DisassociateFlowLogRequest.h"
#include "model/DisassociateFlowLogResult.h"
#include "model/DescribeSmartAccessGatewayHaRequest.h"
#include "model/DescribeSmartAccessGatewayHaResult.h"
#include "model/DescribeNetworkOptimizationSettingsRequest.h"
#include "model/DescribeNetworkOptimizationSettingsResult.h"
#include "model/DeleteCloudConnectNetworkRequest.h"
#include "model/DeleteCloudConnectNetworkResult.h"
#include "model/CreateACLRequest.h"
#include "model/CreateACLResult.h"
#include "model/RebootSmartAccessGatewayRequest.h"
#include "model/RebootSmartAccessGatewayResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/ModifyACLRuleRequest.h"
#include "model/ModifyACLRuleResult.h"
#include "model/DescribeCloudConnectNetworksRequest.h"
#include "model/DescribeCloudConnectNetworksResult.h"
#include "model/ModifySmartAccessGatewayClientUserRequest.h"
#include "model/ModifySmartAccessGatewayClientUserResult.h"
#include "model/DeleteNetworkOptimizationSettingRequest.h"
#include "model/DeleteNetworkOptimizationSettingResult.h"
#include "model/GetCloudConnectNetworkUseLimitRequest.h"
#include "model/GetCloudConnectNetworkUseLimitResult.h"
#include "model/UpgradeSmartAccessGatewayRequest.h"
#include "model/UpgradeSmartAccessGatewayResult.h"
#include "model/DeleteQosCarRequest.h"
#include "model/DeleteQosCarResult.h"
#include "model/DisassociateQosRequest.h"
#include "model/DisassociateQosResult.h"
#include "model/DetachNetworkOptimizationSagsRequest.h"
#include "model/DetachNetworkOptimizationSagsResult.h"
#include "model/EnableSmartAccessGatewayUserRequest.h"
#include "model/EnableSmartAccessGatewayUserResult.h"
#include "model/ModifyQosRequest.h"
#include "model/ModifyQosResult.h"
#include "model/UnbindVbrRequest.h"
#include "model/UnbindVbrResult.h"
#include "model/DescribeBindableSmartAccessGatewaysRequest.h"
#include "model/DescribeBindableSmartAccessGatewaysResult.h"


namespace AlibabaCloud
{
	namespace Smartag
	{
		class ALIBABACLOUD_SMARTAG_EXPORT SmartagClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddNetworkOptimizationSettingResult> AddNetworkOptimizationSettingOutcome;
			typedef std::future<AddNetworkOptimizationSettingOutcome> AddNetworkOptimizationSettingOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::AddNetworkOptimizationSettingRequest&, const AddNetworkOptimizationSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddNetworkOptimizationSettingAsyncHandler;
			typedef Outcome<Error, Model::ActivateSmartAccessGatewayResult> ActivateSmartAccessGatewayOutcome;
			typedef std::future<ActivateSmartAccessGatewayOutcome> ActivateSmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ActivateSmartAccessGatewayRequest&, const ActivateSmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ActivateSmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::DeleteACLRuleResult> DeleteACLRuleOutcome;
			typedef std::future<DeleteACLRuleOutcome> DeleteACLRuleOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteACLRuleRequest&, const DeleteACLRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteACLRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateSmartAccessGatewayClientUserResult> CreateSmartAccessGatewayClientUserOutcome;
			typedef std::future<CreateSmartAccessGatewayClientUserOutcome> CreateSmartAccessGatewayClientUserOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateSmartAccessGatewayClientUserRequest&, const CreateSmartAccessGatewayClientUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSmartAccessGatewayClientUserAsyncHandler;
			typedef Outcome<Error, Model::UnicomSignConfirmResult> UnicomSignConfirmOutcome;
			typedef std::future<UnicomSignConfirmOutcome> UnicomSignConfirmOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::UnicomSignConfirmRequest&, const UnicomSignConfirmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnicomSignConfirmAsyncHandler;
			typedef Outcome<Error, Model::CreateNetworkOptimizationResult> CreateNetworkOptimizationOutcome;
			typedef std::future<CreateNetworkOptimizationOutcome> CreateNetworkOptimizationOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateNetworkOptimizationRequest&, const CreateNetworkOptimizationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkOptimizationAsyncHandler;
			typedef Outcome<Error, Model::RevokeSagInstanceFromCcnResult> RevokeSagInstanceFromCcnOutcome;
			typedef std::future<RevokeSagInstanceFromCcnOutcome> RevokeSagInstanceFromCcnOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::RevokeSagInstanceFromCcnRequest&, const RevokeSagInstanceFromCcnOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeSagInstanceFromCcnAsyncHandler;
			typedef Outcome<Error, Model::ModifySagRemoteAccessResult> ModifySagRemoteAccessOutcome;
			typedef std::future<ModifySagRemoteAccessOutcome> ModifySagRemoteAccessOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifySagRemoteAccessRequest&, const ModifySagRemoteAccessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySagRemoteAccessAsyncHandler;
			typedef Outcome<Error, Model::DeleteSmartAccessGatewayClientUserResult> DeleteSmartAccessGatewayClientUserOutcome;
			typedef std::future<DeleteSmartAccessGatewayClientUserOutcome> DeleteSmartAccessGatewayClientUserOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteSmartAccessGatewayClientUserRequest&, const DeleteSmartAccessGatewayClientUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSmartAccessGatewayClientUserAsyncHandler;
			typedef Outcome<Error, Model::CreateQosCarResult> CreateQosCarOutcome;
			typedef std::future<CreateQosCarOutcome> CreateQosCarOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateQosCarRequest&, const CreateQosCarOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateQosCarAsyncHandler;
			typedef Outcome<Error, Model::DescribeGrantRulesResult> DescribeGrantRulesOutcome;
			typedef std::future<DescribeGrantRulesOutcome> DescribeGrantRulesOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeGrantRulesRequest&, const DescribeGrantRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGrantRulesAsyncHandler;
			typedef Outcome<Error, Model::UnbindSmartAccessGatewayResult> UnbindSmartAccessGatewayOutcome;
			typedef std::future<UnbindSmartAccessGatewayOutcome> UnbindSmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::UnbindSmartAccessGatewayRequest&, const UnbindSmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindSmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::CreateSmartAccessGatewayResult> CreateSmartAccessGatewayOutcome;
			typedef std::future<CreateSmartAccessGatewayOutcome> CreateSmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateSmartAccessGatewayRequest&, const CreateSmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::ClearSagRouteableAddressResult> ClearSagRouteableAddressOutcome;
			typedef std::future<ClearSagRouteableAddressOutcome> ClearSagRouteableAddressOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ClearSagRouteableAddressRequest&, const ClearSagRouteableAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ClearSagRouteableAddressAsyncHandler;
			typedef Outcome<Error, Model::AssociateQosResult> AssociateQosOutcome;
			typedef std::future<AssociateQosOutcome> AssociateQosOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::AssociateQosRequest&, const AssociateQosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateQosAsyncHandler;
			typedef Outcome<Error, Model::DeleteFlowLogResult> DeleteFlowLogOutcome;
			typedef std::future<DeleteFlowLogOutcome> DeleteFlowLogOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteFlowLogRequest&, const DeleteFlowLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFlowLogAsyncHandler;
			typedef Outcome<Error, Model::ModifyCloudConnectNetworkResult> ModifyCloudConnectNetworkOutcome;
			typedef std::future<ModifyCloudConnectNetworkOutcome> ModifyCloudConnectNetworkOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifyCloudConnectNetworkRequest&, const ModifyCloudConnectNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudConnectNetworkAsyncHandler;
			typedef Outcome<Error, Model::DescribeSagOnlineClientStatisticsResult> DescribeSagOnlineClientStatisticsOutcome;
			typedef std::future<DescribeSagOnlineClientStatisticsOutcome> DescribeSagOnlineClientStatisticsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSagOnlineClientStatisticsRequest&, const DescribeSagOnlineClientStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSagOnlineClientStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSmartAccessGatewayRoutesResult> DescribeSmartAccessGatewayRoutesOutcome;
			typedef std::future<DescribeSmartAccessGatewayRoutesOutcome> DescribeSmartAccessGatewayRoutesOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSmartAccessGatewayRoutesRequest&, const DescribeSmartAccessGatewayRoutesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmartAccessGatewayRoutesAsyncHandler;
			typedef Outcome<Error, Model::DowngradeSmartAccessGatewayResult> DowngradeSmartAccessGatewayOutcome;
			typedef std::future<DowngradeSmartAccessGatewayOutcome> DowngradeSmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DowngradeSmartAccessGatewayRequest&, const DowngradeSmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DowngradeSmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::ModifySmartAccessGatewayUpBandwidthResult> ModifySmartAccessGatewayUpBandwidthOutcome;
			typedef std::future<ModifySmartAccessGatewayUpBandwidthOutcome> ModifySmartAccessGatewayUpBandwidthOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifySmartAccessGatewayUpBandwidthRequest&, const ModifySmartAccessGatewayUpBandwidthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySmartAccessGatewayUpBandwidthAsyncHandler;
			typedef Outcome<Error, Model::GrantSagInstanceToCcnResult> GrantSagInstanceToCcnOutcome;
			typedef std::future<GrantSagInstanceToCcnOutcome> GrantSagInstanceToCcnOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::GrantSagInstanceToCcnRequest&, const GrantSagInstanceToCcnOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantSagInstanceToCcnAsyncHandler;
			typedef Outcome<Error, Model::ModifySmartAccessGatewayResult> ModifySmartAccessGatewayOutcome;
			typedef std::future<ModifySmartAccessGatewayOutcome> ModifySmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifySmartAccessGatewayRequest&, const ModifySmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::UpdateSmartAccessGatewayVersionResult> UpdateSmartAccessGatewayVersionOutcome;
			typedef std::future<UpdateSmartAccessGatewayVersionOutcome> UpdateSmartAccessGatewayVersionOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::UpdateSmartAccessGatewayVersionRequest&, const UpdateSmartAccessGatewayVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSmartAccessGatewayVersionAsyncHandler;
			typedef Outcome<Error, Model::ModifyFlowLogAttributeResult> ModifyFlowLogAttributeOutcome;
			typedef std::future<ModifyFlowLogAttributeOutcome> ModifyFlowLogAttributeOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifyFlowLogAttributeRequest&, const ModifyFlowLogAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFlowLogAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeQosPoliciesResult> DescribeQosPoliciesOutcome;
			typedef std::future<DescribeQosPoliciesOutcome> DescribeQosPoliciesOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeQosPoliciesRequest&, const DescribeQosPoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQosPoliciesAsyncHandler;
			typedef Outcome<Error, Model::DescribeACLAttributeResult> DescribeACLAttributeOutcome;
			typedef std::future<DescribeACLAttributeOutcome> DescribeACLAttributeOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeACLAttributeRequest&, const DescribeACLAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeACLAttributeAsyncHandler;
			typedef Outcome<Error, Model::CreateQosResult> CreateQosOutcome;
			typedef std::future<CreateQosOutcome> CreateQosOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateQosRequest&, const CreateQosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateQosAsyncHandler;
			typedef Outcome<Error, Model::CreateSmartAccessGatewaySoftwareResult> CreateSmartAccessGatewaySoftwareOutcome;
			typedef std::future<CreateSmartAccessGatewaySoftwareOutcome> CreateSmartAccessGatewaySoftwareOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateSmartAccessGatewaySoftwareRequest&, const CreateSmartAccessGatewaySoftwareOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSmartAccessGatewaySoftwareAsyncHandler;
			typedef Outcome<Error, Model::DescribeSmartAccessGatewayAttributeResult> DescribeSmartAccessGatewayAttributeOutcome;
			typedef std::future<DescribeSmartAccessGatewayAttributeOutcome> DescribeSmartAccessGatewayAttributeOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSmartAccessGatewayAttributeRequest&, const DescribeSmartAccessGatewayAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmartAccessGatewayAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeNetworkOptimizationSagsResult> DescribeNetworkOptimizationSagsOutcome;
			typedef std::future<DescribeNetworkOptimizationSagsOutcome> DescribeNetworkOptimizationSagsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeNetworkOptimizationSagsRequest&, const DescribeNetworkOptimizationSagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkOptimizationSagsAsyncHandler;
			typedef Outcome<Error, Model::CreateCloudConnectNetworkResult> CreateCloudConnectNetworkOutcome;
			typedef std::future<CreateCloudConnectNetworkOutcome> CreateCloudConnectNetworkOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateCloudConnectNetworkRequest&, const CreateCloudConnectNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudConnectNetworkAsyncHandler;
			typedef Outcome<Error, Model::DeleteQosPolicyResult> DeleteQosPolicyOutcome;
			typedef std::future<DeleteQosPolicyOutcome> DeleteQosPolicyOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteQosPolicyRequest&, const DeleteQosPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQosPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeQosesResult> DescribeQosesOutcome;
			typedef std::future<DescribeQosesOutcome> DescribeQosesOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeQosesRequest&, const DescribeQosesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQosesAsyncHandler;
			typedef Outcome<Error, Model::DeleteSnatEntryResult> DeleteSnatEntryOutcome;
			typedef std::future<DeleteSnatEntryOutcome> DeleteSnatEntryOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteSnatEntryRequest&, const DeleteSnatEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnatEntryAsyncHandler;
			typedef Outcome<Error, Model::DeleteQosResult> DeleteQosOutcome;
			typedef std::future<DeleteQosOutcome> DeleteQosOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteQosRequest&, const DeleteQosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQosAsyncHandler;
			typedef Outcome<Error, Model::DescribeSmartAccessGatewaysResult> DescribeSmartAccessGatewaysOutcome;
			typedef std::future<DescribeSmartAccessGatewaysOutcome> DescribeSmartAccessGatewaysOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSmartAccessGatewaysRequest&, const DescribeSmartAccessGatewaysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmartAccessGatewaysAsyncHandler;
			typedef Outcome<Error, Model::DescribeGrantSagRulesResult> DescribeGrantSagRulesOutcome;
			typedef std::future<DescribeGrantSagRulesOutcome> DescribeGrantSagRulesOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeGrantSagRulesRequest&, const DescribeGrantSagRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGrantSagRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserOnlineClientsResult> DescribeUserOnlineClientsOutcome;
			typedef std::future<DescribeUserOnlineClientsOutcome> DescribeUserOnlineClientsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeUserOnlineClientsRequest&, const DescribeUserOnlineClientsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserOnlineClientsAsyncHandler;
			typedef Outcome<Error, Model::DescribeQosCarsResult> DescribeQosCarsOutcome;
			typedef std::future<DescribeQosCarsOutcome> DescribeQosCarsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeQosCarsRequest&, const DescribeQosCarsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQosCarsAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserOnlineClientStatisticsResult> DescribeUserOnlineClientStatisticsOutcome;
			typedef std::future<DescribeUserOnlineClientStatisticsOutcome> DescribeUserOnlineClientStatisticsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeUserOnlineClientStatisticsRequest&, const DescribeUserOnlineClientStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserOnlineClientStatisticsAsyncHandler;
			typedef Outcome<Error, Model::BindVbrResult> BindVbrOutcome;
			typedef std::future<BindVbrOutcome> BindVbrOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::BindVbrRequest&, const BindVbrOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindVbrAsyncHandler;
			typedef Outcome<Error, Model::CreateDedicatedLineBackupResult> CreateDedicatedLineBackupOutcome;
			typedef std::future<CreateDedicatedLineBackupOutcome> CreateDedicatedLineBackupOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateDedicatedLineBackupRequest&, const CreateDedicatedLineBackupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDedicatedLineBackupAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserFlowStatisticsResult> DescribeUserFlowStatisticsOutcome;
			typedef std::future<DescribeUserFlowStatisticsOutcome> DescribeUserFlowStatisticsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeUserFlowStatisticsRequest&, const DescribeUserFlowStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserFlowStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DisableSmartAccessGatewayUserResult> DisableSmartAccessGatewayUserOutcome;
			typedef std::future<DisableSmartAccessGatewayUserOutcome> DisableSmartAccessGatewayUserOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DisableSmartAccessGatewayUserRequest&, const DisableSmartAccessGatewayUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableSmartAccessGatewayUserAsyncHandler;
			typedef Outcome<Error, Model::DeleteDnatEntryResult> DeleteDnatEntryOutcome;
			typedef std::future<DeleteDnatEntryOutcome> DeleteDnatEntryOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteDnatEntryRequest&, const DeleteDnatEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDnatEntryAsyncHandler;
			typedef Outcome<Error, Model::SetSagRouteableAddressResult> SetSagRouteableAddressOutcome;
			typedef std::future<SetSagRouteableAddressOutcome> SetSagRouteableAddressOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::SetSagRouteableAddressRequest&, const SetSagRouteableAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetSagRouteableAddressAsyncHandler;
			typedef Outcome<Error, Model::ModifyACLResult> ModifyACLOutcome;
			typedef std::future<ModifyACLOutcome> ModifyACLOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifyACLRequest&, const ModifyACLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyACLAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowLogsResult> DescribeFlowLogsOutcome;
			typedef std::future<DescribeFlowLogsOutcome> DescribeFlowLogsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeFlowLogsRequest&, const DescribeFlowLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSmartAccessGatewayClientUsersResult> DescribeSmartAccessGatewayClientUsersOutcome;
			typedef std::future<DescribeSmartAccessGatewayClientUsersOutcome> DescribeSmartAccessGatewayClientUsersOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSmartAccessGatewayClientUsersRequest&, const DescribeSmartAccessGatewayClientUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmartAccessGatewayClientUsersAsyncHandler;
			typedef Outcome<Error, Model::GetSmartAccessGatewayUseLimitResult> GetSmartAccessGatewayUseLimitOutcome;
			typedef std::future<GetSmartAccessGatewayUseLimitOutcome> GetSmartAccessGatewayUseLimitOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::GetSmartAccessGatewayUseLimitRequest&, const GetSmartAccessGatewayUseLimitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSmartAccessGatewayUseLimitAsyncHandler;
			typedef Outcome<Error, Model::UnicomOrderConfirmResult> UnicomOrderConfirmOutcome;
			typedef std::future<UnicomOrderConfirmOutcome> UnicomOrderConfirmOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::UnicomOrderConfirmRequest&, const UnicomOrderConfirmOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnicomOrderConfirmAsyncHandler;
			typedef Outcome<Error, Model::ModifyQosPolicyResult> ModifyQosPolicyOutcome;
			typedef std::future<ModifyQosPolicyOutcome> ModifyQosPolicyOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifyQosPolicyRequest&, const ModifyQosPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyQosPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeNetworkOptimizationsResult> DescribeNetworkOptimizationsOutcome;
			typedef std::future<DescribeNetworkOptimizationsOutcome> DescribeNetworkOptimizationsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeNetworkOptimizationsRequest&, const DescribeNetworkOptimizationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkOptimizationsAsyncHandler;
			typedef Outcome<Error, Model::GrantInstanceToCbnResult> GrantInstanceToCbnOutcome;
			typedef std::future<GrantInstanceToCbnOutcome> GrantInstanceToCbnOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::GrantInstanceToCbnRequest&, const GrantInstanceToCbnOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantInstanceToCbnAsyncHandler;
			typedef Outcome<Error, Model::AddSnatEntryResult> AddSnatEntryOutcome;
			typedef std::future<AddSnatEntryOutcome> AddSnatEntryOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::AddSnatEntryRequest&, const AddSnatEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddSnatEntryAsyncHandler;
			typedef Outcome<Error, Model::DeleteNetworkOptimizationResult> DeleteNetworkOptimizationOutcome;
			typedef std::future<DeleteNetworkOptimizationOutcome> DeleteNetworkOptimizationOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteNetworkOptimizationRequest&, const DeleteNetworkOptimizationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetworkOptimizationAsyncHandler;
			typedef Outcome<Error, Model::AddDnatEntryResult> AddDnatEntryOutcome;
			typedef std::future<AddDnatEntryOutcome> AddDnatEntryOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::AddDnatEntryRequest&, const AddDnatEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddDnatEntryAsyncHandler;
			typedef Outcome<Error, Model::ModifyNetworkOptimizationResult> ModifyNetworkOptimizationOutcome;
			typedef std::future<ModifyNetworkOptimizationOutcome> ModifyNetworkOptimizationOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifyNetworkOptimizationRequest&, const ModifyNetworkOptimizationOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetworkOptimizationAsyncHandler;
			typedef Outcome<Error, Model::DescribeSnatEntriesResult> DescribeSnatEntriesOutcome;
			typedef std::future<DescribeSnatEntriesOutcome> DescribeSnatEntriesOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSnatEntriesRequest&, const DescribeSnatEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnatEntriesAsyncHandler;
			typedef Outcome<Error, Model::AddACLRuleResult> AddACLRuleOutcome;
			typedef std::future<AddACLRuleOutcome> AddACLRuleOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::AddACLRuleRequest&, const AddACLRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddACLRuleAsyncHandler;
			typedef Outcome<Error, Model::AssociateFlowLogResult> AssociateFlowLogOutcome;
			typedef std::future<AssociateFlowLogOutcome> AssociateFlowLogOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::AssociateFlowLogRequest&, const AssociateFlowLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateFlowLogAsyncHandler;
			typedef Outcome<Error, Model::ModifyQosCarResult> ModifyQosCarOutcome;
			typedef std::future<ModifyQosCarOutcome> ModifyQosCarOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifyQosCarRequest&, const ModifyQosCarOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyQosCarAsyncHandler;
			typedef Outcome<Error, Model::BindSmartAccessGatewayResult> BindSmartAccessGatewayOutcome;
			typedef std::future<BindSmartAccessGatewayOutcome> BindSmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::BindSmartAccessGatewayRequest&, const BindSmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindSmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::DisassociateACLResult> DisassociateACLOutcome;
			typedef std::future<DisassociateACLOutcome> DisassociateACLOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DisassociateACLRequest&, const DisassociateACLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateACLAsyncHandler;
			typedef Outcome<Error, Model::DeleteSAGLinkLevelHaResult> DeleteSAGLinkLevelHaOutcome;
			typedef std::future<DeleteSAGLinkLevelHaOutcome> DeleteSAGLinkLevelHaOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteSAGLinkLevelHaRequest&, const DeleteSAGLinkLevelHaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSAGLinkLevelHaAsyncHandler;
			typedef Outcome<Error, Model::DeactiveFlowLogResult> DeactiveFlowLogOutcome;
			typedef std::future<DeactiveFlowLogOutcome> DeactiveFlowLogOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeactiveFlowLogRequest&, const DeactiveFlowLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeactiveFlowLogAsyncHandler;
			typedef Outcome<Error, Model::CreateFlowLogResult> CreateFlowLogOutcome;
			typedef std::future<CreateFlowLogOutcome> CreateFlowLogOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateFlowLogRequest&, const CreateFlowLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowLogAsyncHandler;
			typedef Outcome<Error, Model::ActiveFlowLogResult> ActiveFlowLogOutcome;
			typedef std::future<ActiveFlowLogOutcome> ActiveFlowLogOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ActiveFlowLogRequest&, const ActiveFlowLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ActiveFlowLogAsyncHandler;
			typedef Outcome<Error, Model::SwitchSAGHaStateResult> SwitchSAGHaStateOutcome;
			typedef std::future<SwitchSAGHaStateOutcome> SwitchSAGHaStateOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::SwitchSAGHaStateRequest&, const SwitchSAGHaStateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchSAGHaStateAsyncHandler;
			typedef Outcome<Error, Model::KickOutClientsResult> KickOutClientsOutcome;
			typedef std::future<KickOutClientsOutcome> KickOutClientsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::KickOutClientsRequest&, const KickOutClientsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> KickOutClientsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSagRouteableAddressResult> DescribeSagRouteableAddressOutcome;
			typedef std::future<DescribeSagRouteableAddressOutcome> DescribeSagRouteableAddressOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSagRouteableAddressRequest&, const DescribeSagRouteableAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSagRouteableAddressAsyncHandler;
			typedef Outcome<Error, Model::SwitchCloudBoxHaStateResult> SwitchCloudBoxHaStateOutcome;
			typedef std::future<SwitchCloudBoxHaStateOutcome> SwitchCloudBoxHaStateOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::SwitchCloudBoxHaStateRequest&, const SwitchCloudBoxHaStateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchCloudBoxHaStateAsyncHandler;
			typedef Outcome<Error, Model::AttachNetworkOptimizationSagsResult> AttachNetworkOptimizationSagsOutcome;
			typedef std::future<AttachNetworkOptimizationSagsOutcome> AttachNetworkOptimizationSagsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::AttachNetworkOptimizationSagsRequest&, const AttachNetworkOptimizationSagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachNetworkOptimizationSagsAsyncHandler;
			typedef Outcome<Error, Model::DeleteACLResult> DeleteACLOutcome;
			typedef std::future<DeleteACLOutcome> DeleteACLOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteACLRequest&, const DeleteACLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteACLAsyncHandler;
			typedef Outcome<Error, Model::AssociateACLResult> AssociateACLOutcome;
			typedef std::future<AssociateACLOutcome> AssociateACLOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::AssociateACLRequest&, const AssociateACLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateACLAsyncHandler;
			typedef Outcome<Error, Model::DescribeDnatEntriesResult> DescribeDnatEntriesOutcome;
			typedef std::future<DescribeDnatEntriesOutcome> DescribeDnatEntriesOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeDnatEntriesRequest&, const DescribeDnatEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDnatEntriesAsyncHandler;
			typedef Outcome<Error, Model::DescribeSmartAccessGatewayVersionsResult> DescribeSmartAccessGatewayVersionsOutcome;
			typedef std::future<DescribeSmartAccessGatewayVersionsOutcome> DescribeSmartAccessGatewayVersionsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSmartAccessGatewayVersionsRequest&, const DescribeSmartAccessGatewayVersionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmartAccessGatewayVersionsAsyncHandler;
			typedef Outcome<Error, Model::RevokeInstanceFromCbnResult> RevokeInstanceFromCbnOutcome;
			typedef std::future<RevokeInstanceFromCbnOutcome> RevokeInstanceFromCbnOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::RevokeInstanceFromCbnRequest&, const RevokeInstanceFromCbnOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeInstanceFromCbnAsyncHandler;
			typedef Outcome<Error, Model::CreateQosPolicyResult> CreateQosPolicyOutcome;
			typedef std::future<CreateQosPolicyOutcome> CreateQosPolicyOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateQosPolicyRequest&, const CreateQosPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateQosPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifySerialNumberResult> ModifySerialNumberOutcome;
			typedef std::future<ModifySerialNumberOutcome> ModifySerialNumberOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifySerialNumberRequest&, const ModifySerialNumberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySerialNumberAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowLogSagsResult> DescribeFlowLogSagsOutcome;
			typedef std::future<DescribeFlowLogSagsOutcome> DescribeFlowLogSagsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeFlowLogSagsRequest&, const DescribeFlowLogSagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowLogSagsAsyncHandler;
			typedef Outcome<Error, Model::DeleteDedicatedLineBackupResult> DeleteDedicatedLineBackupOutcome;
			typedef std::future<DeleteDedicatedLineBackupOutcome> DeleteDedicatedLineBackupOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteDedicatedLineBackupRequest&, const DeleteDedicatedLineBackupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDedicatedLineBackupAsyncHandler;
			typedef Outcome<Error, Model::DescribeACLsResult> DescribeACLsOutcome;
			typedef std::future<DescribeACLsOutcome> DescribeACLsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeACLsRequest&, const DescribeACLsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeACLsAsyncHandler;
			typedef Outcome<Error, Model::ResetSmartAccessGatewayClientUserPasswordResult> ResetSmartAccessGatewayClientUserPasswordOutcome;
			typedef std::future<ResetSmartAccessGatewayClientUserPasswordOutcome> ResetSmartAccessGatewayClientUserPasswordOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ResetSmartAccessGatewayClientUserPasswordRequest&, const ResetSmartAccessGatewayClientUserPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetSmartAccessGatewayClientUserPasswordAsyncHandler;
			typedef Outcome<Error, Model::UnlockSmartAccessGatewayResult> UnlockSmartAccessGatewayOutcome;
			typedef std::future<UnlockSmartAccessGatewayOutcome> UnlockSmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::UnlockSmartAccessGatewayRequest&, const UnlockSmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnlockSmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::DescribeUnbindFlowLogSagsResult> DescribeUnbindFlowLogSagsOutcome;
			typedef std::future<DescribeUnbindFlowLogSagsOutcome> DescribeUnbindFlowLogSagsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeUnbindFlowLogSagsRequest&, const DescribeUnbindFlowLogSagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUnbindFlowLogSagsAsyncHandler;
			typedef Outcome<Error, Model::CreateSAGLinkLevelHaResult> CreateSAGLinkLevelHaOutcome;
			typedef std::future<CreateSAGLinkLevelHaOutcome> CreateSAGLinkLevelHaOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateSAGLinkLevelHaRequest&, const CreateSAGLinkLevelHaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSAGLinkLevelHaAsyncHandler;
			typedef Outcome<Error, Model::DisassociateFlowLogResult> DisassociateFlowLogOutcome;
			typedef std::future<DisassociateFlowLogOutcome> DisassociateFlowLogOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DisassociateFlowLogRequest&, const DisassociateFlowLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateFlowLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeSmartAccessGatewayHaResult> DescribeSmartAccessGatewayHaOutcome;
			typedef std::future<DescribeSmartAccessGatewayHaOutcome> DescribeSmartAccessGatewayHaOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSmartAccessGatewayHaRequest&, const DescribeSmartAccessGatewayHaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmartAccessGatewayHaAsyncHandler;
			typedef Outcome<Error, Model::DescribeNetworkOptimizationSettingsResult> DescribeNetworkOptimizationSettingsOutcome;
			typedef std::future<DescribeNetworkOptimizationSettingsOutcome> DescribeNetworkOptimizationSettingsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeNetworkOptimizationSettingsRequest&, const DescribeNetworkOptimizationSettingsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkOptimizationSettingsAsyncHandler;
			typedef Outcome<Error, Model::DeleteCloudConnectNetworkResult> DeleteCloudConnectNetworkOutcome;
			typedef std::future<DeleteCloudConnectNetworkOutcome> DeleteCloudConnectNetworkOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteCloudConnectNetworkRequest&, const DeleteCloudConnectNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudConnectNetworkAsyncHandler;
			typedef Outcome<Error, Model::CreateACLResult> CreateACLOutcome;
			typedef std::future<CreateACLOutcome> CreateACLOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateACLRequest&, const CreateACLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateACLAsyncHandler;
			typedef Outcome<Error, Model::RebootSmartAccessGatewayResult> RebootSmartAccessGatewayOutcome;
			typedef std::future<RebootSmartAccessGatewayOutcome> RebootSmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::RebootSmartAccessGatewayRequest&, const RebootSmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RebootSmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::ModifyACLRuleResult> ModifyACLRuleOutcome;
			typedef std::future<ModifyACLRuleOutcome> ModifyACLRuleOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifyACLRuleRequest&, const ModifyACLRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyACLRuleAsyncHandler;
			typedef Outcome<Error, Model::DescribeCloudConnectNetworksResult> DescribeCloudConnectNetworksOutcome;
			typedef std::future<DescribeCloudConnectNetworksOutcome> DescribeCloudConnectNetworksOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeCloudConnectNetworksRequest&, const DescribeCloudConnectNetworksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudConnectNetworksAsyncHandler;
			typedef Outcome<Error, Model::ModifySmartAccessGatewayClientUserResult> ModifySmartAccessGatewayClientUserOutcome;
			typedef std::future<ModifySmartAccessGatewayClientUserOutcome> ModifySmartAccessGatewayClientUserOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifySmartAccessGatewayClientUserRequest&, const ModifySmartAccessGatewayClientUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySmartAccessGatewayClientUserAsyncHandler;
			typedef Outcome<Error, Model::DeleteNetworkOptimizationSettingResult> DeleteNetworkOptimizationSettingOutcome;
			typedef std::future<DeleteNetworkOptimizationSettingOutcome> DeleteNetworkOptimizationSettingOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteNetworkOptimizationSettingRequest&, const DeleteNetworkOptimizationSettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetworkOptimizationSettingAsyncHandler;
			typedef Outcome<Error, Model::GetCloudConnectNetworkUseLimitResult> GetCloudConnectNetworkUseLimitOutcome;
			typedef std::future<GetCloudConnectNetworkUseLimitOutcome> GetCloudConnectNetworkUseLimitOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::GetCloudConnectNetworkUseLimitRequest&, const GetCloudConnectNetworkUseLimitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCloudConnectNetworkUseLimitAsyncHandler;
			typedef Outcome<Error, Model::UpgradeSmartAccessGatewayResult> UpgradeSmartAccessGatewayOutcome;
			typedef std::future<UpgradeSmartAccessGatewayOutcome> UpgradeSmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::UpgradeSmartAccessGatewayRequest&, const UpgradeSmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeSmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::DeleteQosCarResult> DeleteQosCarOutcome;
			typedef std::future<DeleteQosCarOutcome> DeleteQosCarOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteQosCarRequest&, const DeleteQosCarOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQosCarAsyncHandler;
			typedef Outcome<Error, Model::DisassociateQosResult> DisassociateQosOutcome;
			typedef std::future<DisassociateQosOutcome> DisassociateQosOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DisassociateQosRequest&, const DisassociateQosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateQosAsyncHandler;
			typedef Outcome<Error, Model::DetachNetworkOptimizationSagsResult> DetachNetworkOptimizationSagsOutcome;
			typedef std::future<DetachNetworkOptimizationSagsOutcome> DetachNetworkOptimizationSagsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DetachNetworkOptimizationSagsRequest&, const DetachNetworkOptimizationSagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachNetworkOptimizationSagsAsyncHandler;
			typedef Outcome<Error, Model::EnableSmartAccessGatewayUserResult> EnableSmartAccessGatewayUserOutcome;
			typedef std::future<EnableSmartAccessGatewayUserOutcome> EnableSmartAccessGatewayUserOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::EnableSmartAccessGatewayUserRequest&, const EnableSmartAccessGatewayUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableSmartAccessGatewayUserAsyncHandler;
			typedef Outcome<Error, Model::ModifyQosResult> ModifyQosOutcome;
			typedef std::future<ModifyQosOutcome> ModifyQosOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifyQosRequest&, const ModifyQosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyQosAsyncHandler;
			typedef Outcome<Error, Model::UnbindVbrResult> UnbindVbrOutcome;
			typedef std::future<UnbindVbrOutcome> UnbindVbrOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::UnbindVbrRequest&, const UnbindVbrOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindVbrAsyncHandler;
			typedef Outcome<Error, Model::DescribeBindableSmartAccessGatewaysResult> DescribeBindableSmartAccessGatewaysOutcome;
			typedef std::future<DescribeBindableSmartAccessGatewaysOutcome> DescribeBindableSmartAccessGatewaysOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeBindableSmartAccessGatewaysRequest&, const DescribeBindableSmartAccessGatewaysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBindableSmartAccessGatewaysAsyncHandler;

			SmartagClient(const Credentials &credentials, const ClientConfiguration &configuration);
			SmartagClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			SmartagClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~SmartagClient();
			AddNetworkOptimizationSettingOutcome addNetworkOptimizationSetting(const Model::AddNetworkOptimizationSettingRequest &request)const;
			void addNetworkOptimizationSettingAsync(const Model::AddNetworkOptimizationSettingRequest& request, const AddNetworkOptimizationSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddNetworkOptimizationSettingOutcomeCallable addNetworkOptimizationSettingCallable(const Model::AddNetworkOptimizationSettingRequest& request) const;
			ActivateSmartAccessGatewayOutcome activateSmartAccessGateway(const Model::ActivateSmartAccessGatewayRequest &request)const;
			void activateSmartAccessGatewayAsync(const Model::ActivateSmartAccessGatewayRequest& request, const ActivateSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ActivateSmartAccessGatewayOutcomeCallable activateSmartAccessGatewayCallable(const Model::ActivateSmartAccessGatewayRequest& request) const;
			DeleteACLRuleOutcome deleteACLRule(const Model::DeleteACLRuleRequest &request)const;
			void deleteACLRuleAsync(const Model::DeleteACLRuleRequest& request, const DeleteACLRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteACLRuleOutcomeCallable deleteACLRuleCallable(const Model::DeleteACLRuleRequest& request) const;
			CreateSmartAccessGatewayClientUserOutcome createSmartAccessGatewayClientUser(const Model::CreateSmartAccessGatewayClientUserRequest &request)const;
			void createSmartAccessGatewayClientUserAsync(const Model::CreateSmartAccessGatewayClientUserRequest& request, const CreateSmartAccessGatewayClientUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSmartAccessGatewayClientUserOutcomeCallable createSmartAccessGatewayClientUserCallable(const Model::CreateSmartAccessGatewayClientUserRequest& request) const;
			UnicomSignConfirmOutcome unicomSignConfirm(const Model::UnicomSignConfirmRequest &request)const;
			void unicomSignConfirmAsync(const Model::UnicomSignConfirmRequest& request, const UnicomSignConfirmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnicomSignConfirmOutcomeCallable unicomSignConfirmCallable(const Model::UnicomSignConfirmRequest& request) const;
			CreateNetworkOptimizationOutcome createNetworkOptimization(const Model::CreateNetworkOptimizationRequest &request)const;
			void createNetworkOptimizationAsync(const Model::CreateNetworkOptimizationRequest& request, const CreateNetworkOptimizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNetworkOptimizationOutcomeCallable createNetworkOptimizationCallable(const Model::CreateNetworkOptimizationRequest& request) const;
			RevokeSagInstanceFromCcnOutcome revokeSagInstanceFromCcn(const Model::RevokeSagInstanceFromCcnRequest &request)const;
			void revokeSagInstanceFromCcnAsync(const Model::RevokeSagInstanceFromCcnRequest& request, const RevokeSagInstanceFromCcnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeSagInstanceFromCcnOutcomeCallable revokeSagInstanceFromCcnCallable(const Model::RevokeSagInstanceFromCcnRequest& request) const;
			ModifySagRemoteAccessOutcome modifySagRemoteAccess(const Model::ModifySagRemoteAccessRequest &request)const;
			void modifySagRemoteAccessAsync(const Model::ModifySagRemoteAccessRequest& request, const ModifySagRemoteAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySagRemoteAccessOutcomeCallable modifySagRemoteAccessCallable(const Model::ModifySagRemoteAccessRequest& request) const;
			DeleteSmartAccessGatewayClientUserOutcome deleteSmartAccessGatewayClientUser(const Model::DeleteSmartAccessGatewayClientUserRequest &request)const;
			void deleteSmartAccessGatewayClientUserAsync(const Model::DeleteSmartAccessGatewayClientUserRequest& request, const DeleteSmartAccessGatewayClientUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSmartAccessGatewayClientUserOutcomeCallable deleteSmartAccessGatewayClientUserCallable(const Model::DeleteSmartAccessGatewayClientUserRequest& request) const;
			CreateQosCarOutcome createQosCar(const Model::CreateQosCarRequest &request)const;
			void createQosCarAsync(const Model::CreateQosCarRequest& request, const CreateQosCarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateQosCarOutcomeCallable createQosCarCallable(const Model::CreateQosCarRequest& request) const;
			DescribeGrantRulesOutcome describeGrantRules(const Model::DescribeGrantRulesRequest &request)const;
			void describeGrantRulesAsync(const Model::DescribeGrantRulesRequest& request, const DescribeGrantRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGrantRulesOutcomeCallable describeGrantRulesCallable(const Model::DescribeGrantRulesRequest& request) const;
			UnbindSmartAccessGatewayOutcome unbindSmartAccessGateway(const Model::UnbindSmartAccessGatewayRequest &request)const;
			void unbindSmartAccessGatewayAsync(const Model::UnbindSmartAccessGatewayRequest& request, const UnbindSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindSmartAccessGatewayOutcomeCallable unbindSmartAccessGatewayCallable(const Model::UnbindSmartAccessGatewayRequest& request) const;
			CreateSmartAccessGatewayOutcome createSmartAccessGateway(const Model::CreateSmartAccessGatewayRequest &request)const;
			void createSmartAccessGatewayAsync(const Model::CreateSmartAccessGatewayRequest& request, const CreateSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSmartAccessGatewayOutcomeCallable createSmartAccessGatewayCallable(const Model::CreateSmartAccessGatewayRequest& request) const;
			ClearSagRouteableAddressOutcome clearSagRouteableAddress(const Model::ClearSagRouteableAddressRequest &request)const;
			void clearSagRouteableAddressAsync(const Model::ClearSagRouteableAddressRequest& request, const ClearSagRouteableAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ClearSagRouteableAddressOutcomeCallable clearSagRouteableAddressCallable(const Model::ClearSagRouteableAddressRequest& request) const;
			AssociateQosOutcome associateQos(const Model::AssociateQosRequest &request)const;
			void associateQosAsync(const Model::AssociateQosRequest& request, const AssociateQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateQosOutcomeCallable associateQosCallable(const Model::AssociateQosRequest& request) const;
			DeleteFlowLogOutcome deleteFlowLog(const Model::DeleteFlowLogRequest &request)const;
			void deleteFlowLogAsync(const Model::DeleteFlowLogRequest& request, const DeleteFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFlowLogOutcomeCallable deleteFlowLogCallable(const Model::DeleteFlowLogRequest& request) const;
			ModifyCloudConnectNetworkOutcome modifyCloudConnectNetwork(const Model::ModifyCloudConnectNetworkRequest &request)const;
			void modifyCloudConnectNetworkAsync(const Model::ModifyCloudConnectNetworkRequest& request, const ModifyCloudConnectNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCloudConnectNetworkOutcomeCallable modifyCloudConnectNetworkCallable(const Model::ModifyCloudConnectNetworkRequest& request) const;
			DescribeSagOnlineClientStatisticsOutcome describeSagOnlineClientStatistics(const Model::DescribeSagOnlineClientStatisticsRequest &request)const;
			void describeSagOnlineClientStatisticsAsync(const Model::DescribeSagOnlineClientStatisticsRequest& request, const DescribeSagOnlineClientStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSagOnlineClientStatisticsOutcomeCallable describeSagOnlineClientStatisticsCallable(const Model::DescribeSagOnlineClientStatisticsRequest& request) const;
			DescribeSmartAccessGatewayRoutesOutcome describeSmartAccessGatewayRoutes(const Model::DescribeSmartAccessGatewayRoutesRequest &request)const;
			void describeSmartAccessGatewayRoutesAsync(const Model::DescribeSmartAccessGatewayRoutesRequest& request, const DescribeSmartAccessGatewayRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSmartAccessGatewayRoutesOutcomeCallable describeSmartAccessGatewayRoutesCallable(const Model::DescribeSmartAccessGatewayRoutesRequest& request) const;
			DowngradeSmartAccessGatewayOutcome downgradeSmartAccessGateway(const Model::DowngradeSmartAccessGatewayRequest &request)const;
			void downgradeSmartAccessGatewayAsync(const Model::DowngradeSmartAccessGatewayRequest& request, const DowngradeSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DowngradeSmartAccessGatewayOutcomeCallable downgradeSmartAccessGatewayCallable(const Model::DowngradeSmartAccessGatewayRequest& request) const;
			ModifySmartAccessGatewayUpBandwidthOutcome modifySmartAccessGatewayUpBandwidth(const Model::ModifySmartAccessGatewayUpBandwidthRequest &request)const;
			void modifySmartAccessGatewayUpBandwidthAsync(const Model::ModifySmartAccessGatewayUpBandwidthRequest& request, const ModifySmartAccessGatewayUpBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySmartAccessGatewayUpBandwidthOutcomeCallable modifySmartAccessGatewayUpBandwidthCallable(const Model::ModifySmartAccessGatewayUpBandwidthRequest& request) const;
			GrantSagInstanceToCcnOutcome grantSagInstanceToCcn(const Model::GrantSagInstanceToCcnRequest &request)const;
			void grantSagInstanceToCcnAsync(const Model::GrantSagInstanceToCcnRequest& request, const GrantSagInstanceToCcnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrantSagInstanceToCcnOutcomeCallable grantSagInstanceToCcnCallable(const Model::GrantSagInstanceToCcnRequest& request) const;
			ModifySmartAccessGatewayOutcome modifySmartAccessGateway(const Model::ModifySmartAccessGatewayRequest &request)const;
			void modifySmartAccessGatewayAsync(const Model::ModifySmartAccessGatewayRequest& request, const ModifySmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySmartAccessGatewayOutcomeCallable modifySmartAccessGatewayCallable(const Model::ModifySmartAccessGatewayRequest& request) const;
			UpdateSmartAccessGatewayVersionOutcome updateSmartAccessGatewayVersion(const Model::UpdateSmartAccessGatewayVersionRequest &request)const;
			void updateSmartAccessGatewayVersionAsync(const Model::UpdateSmartAccessGatewayVersionRequest& request, const UpdateSmartAccessGatewayVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSmartAccessGatewayVersionOutcomeCallable updateSmartAccessGatewayVersionCallable(const Model::UpdateSmartAccessGatewayVersionRequest& request) const;
			ModifyFlowLogAttributeOutcome modifyFlowLogAttribute(const Model::ModifyFlowLogAttributeRequest &request)const;
			void modifyFlowLogAttributeAsync(const Model::ModifyFlowLogAttributeRequest& request, const ModifyFlowLogAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFlowLogAttributeOutcomeCallable modifyFlowLogAttributeCallable(const Model::ModifyFlowLogAttributeRequest& request) const;
			DescribeQosPoliciesOutcome describeQosPolicies(const Model::DescribeQosPoliciesRequest &request)const;
			void describeQosPoliciesAsync(const Model::DescribeQosPoliciesRequest& request, const DescribeQosPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeQosPoliciesOutcomeCallable describeQosPoliciesCallable(const Model::DescribeQosPoliciesRequest& request) const;
			DescribeACLAttributeOutcome describeACLAttribute(const Model::DescribeACLAttributeRequest &request)const;
			void describeACLAttributeAsync(const Model::DescribeACLAttributeRequest& request, const DescribeACLAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeACLAttributeOutcomeCallable describeACLAttributeCallable(const Model::DescribeACLAttributeRequest& request) const;
			CreateQosOutcome createQos(const Model::CreateQosRequest &request)const;
			void createQosAsync(const Model::CreateQosRequest& request, const CreateQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateQosOutcomeCallable createQosCallable(const Model::CreateQosRequest& request) const;
			CreateSmartAccessGatewaySoftwareOutcome createSmartAccessGatewaySoftware(const Model::CreateSmartAccessGatewaySoftwareRequest &request)const;
			void createSmartAccessGatewaySoftwareAsync(const Model::CreateSmartAccessGatewaySoftwareRequest& request, const CreateSmartAccessGatewaySoftwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSmartAccessGatewaySoftwareOutcomeCallable createSmartAccessGatewaySoftwareCallable(const Model::CreateSmartAccessGatewaySoftwareRequest& request) const;
			DescribeSmartAccessGatewayAttributeOutcome describeSmartAccessGatewayAttribute(const Model::DescribeSmartAccessGatewayAttributeRequest &request)const;
			void describeSmartAccessGatewayAttributeAsync(const Model::DescribeSmartAccessGatewayAttributeRequest& request, const DescribeSmartAccessGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSmartAccessGatewayAttributeOutcomeCallable describeSmartAccessGatewayAttributeCallable(const Model::DescribeSmartAccessGatewayAttributeRequest& request) const;
			DescribeNetworkOptimizationSagsOutcome describeNetworkOptimizationSags(const Model::DescribeNetworkOptimizationSagsRequest &request)const;
			void describeNetworkOptimizationSagsAsync(const Model::DescribeNetworkOptimizationSagsRequest& request, const DescribeNetworkOptimizationSagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNetworkOptimizationSagsOutcomeCallable describeNetworkOptimizationSagsCallable(const Model::DescribeNetworkOptimizationSagsRequest& request) const;
			CreateCloudConnectNetworkOutcome createCloudConnectNetwork(const Model::CreateCloudConnectNetworkRequest &request)const;
			void createCloudConnectNetworkAsync(const Model::CreateCloudConnectNetworkRequest& request, const CreateCloudConnectNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCloudConnectNetworkOutcomeCallable createCloudConnectNetworkCallable(const Model::CreateCloudConnectNetworkRequest& request) const;
			DeleteQosPolicyOutcome deleteQosPolicy(const Model::DeleteQosPolicyRequest &request)const;
			void deleteQosPolicyAsync(const Model::DeleteQosPolicyRequest& request, const DeleteQosPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteQosPolicyOutcomeCallable deleteQosPolicyCallable(const Model::DeleteQosPolicyRequest& request) const;
			DescribeQosesOutcome describeQoses(const Model::DescribeQosesRequest &request)const;
			void describeQosesAsync(const Model::DescribeQosesRequest& request, const DescribeQosesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeQosesOutcomeCallable describeQosesCallable(const Model::DescribeQosesRequest& request) const;
			DeleteSnatEntryOutcome deleteSnatEntry(const Model::DeleteSnatEntryRequest &request)const;
			void deleteSnatEntryAsync(const Model::DeleteSnatEntryRequest& request, const DeleteSnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSnatEntryOutcomeCallable deleteSnatEntryCallable(const Model::DeleteSnatEntryRequest& request) const;
			DeleteQosOutcome deleteQos(const Model::DeleteQosRequest &request)const;
			void deleteQosAsync(const Model::DeleteQosRequest& request, const DeleteQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteQosOutcomeCallable deleteQosCallable(const Model::DeleteQosRequest& request) const;
			DescribeSmartAccessGatewaysOutcome describeSmartAccessGateways(const Model::DescribeSmartAccessGatewaysRequest &request)const;
			void describeSmartAccessGatewaysAsync(const Model::DescribeSmartAccessGatewaysRequest& request, const DescribeSmartAccessGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSmartAccessGatewaysOutcomeCallable describeSmartAccessGatewaysCallable(const Model::DescribeSmartAccessGatewaysRequest& request) const;
			DescribeGrantSagRulesOutcome describeGrantSagRules(const Model::DescribeGrantSagRulesRequest &request)const;
			void describeGrantSagRulesAsync(const Model::DescribeGrantSagRulesRequest& request, const DescribeGrantSagRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGrantSagRulesOutcomeCallable describeGrantSagRulesCallable(const Model::DescribeGrantSagRulesRequest& request) const;
			DescribeUserOnlineClientsOutcome describeUserOnlineClients(const Model::DescribeUserOnlineClientsRequest &request)const;
			void describeUserOnlineClientsAsync(const Model::DescribeUserOnlineClientsRequest& request, const DescribeUserOnlineClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserOnlineClientsOutcomeCallable describeUserOnlineClientsCallable(const Model::DescribeUserOnlineClientsRequest& request) const;
			DescribeQosCarsOutcome describeQosCars(const Model::DescribeQosCarsRequest &request)const;
			void describeQosCarsAsync(const Model::DescribeQosCarsRequest& request, const DescribeQosCarsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeQosCarsOutcomeCallable describeQosCarsCallable(const Model::DescribeQosCarsRequest& request) const;
			DescribeUserOnlineClientStatisticsOutcome describeUserOnlineClientStatistics(const Model::DescribeUserOnlineClientStatisticsRequest &request)const;
			void describeUserOnlineClientStatisticsAsync(const Model::DescribeUserOnlineClientStatisticsRequest& request, const DescribeUserOnlineClientStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserOnlineClientStatisticsOutcomeCallable describeUserOnlineClientStatisticsCallable(const Model::DescribeUserOnlineClientStatisticsRequest& request) const;
			BindVbrOutcome bindVbr(const Model::BindVbrRequest &request)const;
			void bindVbrAsync(const Model::BindVbrRequest& request, const BindVbrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindVbrOutcomeCallable bindVbrCallable(const Model::BindVbrRequest& request) const;
			CreateDedicatedLineBackupOutcome createDedicatedLineBackup(const Model::CreateDedicatedLineBackupRequest &request)const;
			void createDedicatedLineBackupAsync(const Model::CreateDedicatedLineBackupRequest& request, const CreateDedicatedLineBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDedicatedLineBackupOutcomeCallable createDedicatedLineBackupCallable(const Model::CreateDedicatedLineBackupRequest& request) const;
			DescribeUserFlowStatisticsOutcome describeUserFlowStatistics(const Model::DescribeUserFlowStatisticsRequest &request)const;
			void describeUserFlowStatisticsAsync(const Model::DescribeUserFlowStatisticsRequest& request, const DescribeUserFlowStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserFlowStatisticsOutcomeCallable describeUserFlowStatisticsCallable(const Model::DescribeUserFlowStatisticsRequest& request) const;
			DisableSmartAccessGatewayUserOutcome disableSmartAccessGatewayUser(const Model::DisableSmartAccessGatewayUserRequest &request)const;
			void disableSmartAccessGatewayUserAsync(const Model::DisableSmartAccessGatewayUserRequest& request, const DisableSmartAccessGatewayUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableSmartAccessGatewayUserOutcomeCallable disableSmartAccessGatewayUserCallable(const Model::DisableSmartAccessGatewayUserRequest& request) const;
			DeleteDnatEntryOutcome deleteDnatEntry(const Model::DeleteDnatEntryRequest &request)const;
			void deleteDnatEntryAsync(const Model::DeleteDnatEntryRequest& request, const DeleteDnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDnatEntryOutcomeCallable deleteDnatEntryCallable(const Model::DeleteDnatEntryRequest& request) const;
			SetSagRouteableAddressOutcome setSagRouteableAddress(const Model::SetSagRouteableAddressRequest &request)const;
			void setSagRouteableAddressAsync(const Model::SetSagRouteableAddressRequest& request, const SetSagRouteableAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetSagRouteableAddressOutcomeCallable setSagRouteableAddressCallable(const Model::SetSagRouteableAddressRequest& request) const;
			ModifyACLOutcome modifyACL(const Model::ModifyACLRequest &request)const;
			void modifyACLAsync(const Model::ModifyACLRequest& request, const ModifyACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyACLOutcomeCallable modifyACLCallable(const Model::ModifyACLRequest& request) const;
			DescribeFlowLogsOutcome describeFlowLogs(const Model::DescribeFlowLogsRequest &request)const;
			void describeFlowLogsAsync(const Model::DescribeFlowLogsRequest& request, const DescribeFlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowLogsOutcomeCallable describeFlowLogsCallable(const Model::DescribeFlowLogsRequest& request) const;
			DescribeSmartAccessGatewayClientUsersOutcome describeSmartAccessGatewayClientUsers(const Model::DescribeSmartAccessGatewayClientUsersRequest &request)const;
			void describeSmartAccessGatewayClientUsersAsync(const Model::DescribeSmartAccessGatewayClientUsersRequest& request, const DescribeSmartAccessGatewayClientUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSmartAccessGatewayClientUsersOutcomeCallable describeSmartAccessGatewayClientUsersCallable(const Model::DescribeSmartAccessGatewayClientUsersRequest& request) const;
			GetSmartAccessGatewayUseLimitOutcome getSmartAccessGatewayUseLimit(const Model::GetSmartAccessGatewayUseLimitRequest &request)const;
			void getSmartAccessGatewayUseLimitAsync(const Model::GetSmartAccessGatewayUseLimitRequest& request, const GetSmartAccessGatewayUseLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSmartAccessGatewayUseLimitOutcomeCallable getSmartAccessGatewayUseLimitCallable(const Model::GetSmartAccessGatewayUseLimitRequest& request) const;
			UnicomOrderConfirmOutcome unicomOrderConfirm(const Model::UnicomOrderConfirmRequest &request)const;
			void unicomOrderConfirmAsync(const Model::UnicomOrderConfirmRequest& request, const UnicomOrderConfirmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnicomOrderConfirmOutcomeCallable unicomOrderConfirmCallable(const Model::UnicomOrderConfirmRequest& request) const;
			ModifyQosPolicyOutcome modifyQosPolicy(const Model::ModifyQosPolicyRequest &request)const;
			void modifyQosPolicyAsync(const Model::ModifyQosPolicyRequest& request, const ModifyQosPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyQosPolicyOutcomeCallable modifyQosPolicyCallable(const Model::ModifyQosPolicyRequest& request) const;
			DescribeNetworkOptimizationsOutcome describeNetworkOptimizations(const Model::DescribeNetworkOptimizationsRequest &request)const;
			void describeNetworkOptimizationsAsync(const Model::DescribeNetworkOptimizationsRequest& request, const DescribeNetworkOptimizationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNetworkOptimizationsOutcomeCallable describeNetworkOptimizationsCallable(const Model::DescribeNetworkOptimizationsRequest& request) const;
			GrantInstanceToCbnOutcome grantInstanceToCbn(const Model::GrantInstanceToCbnRequest &request)const;
			void grantInstanceToCbnAsync(const Model::GrantInstanceToCbnRequest& request, const GrantInstanceToCbnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrantInstanceToCbnOutcomeCallable grantInstanceToCbnCallable(const Model::GrantInstanceToCbnRequest& request) const;
			AddSnatEntryOutcome addSnatEntry(const Model::AddSnatEntryRequest &request)const;
			void addSnatEntryAsync(const Model::AddSnatEntryRequest& request, const AddSnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddSnatEntryOutcomeCallable addSnatEntryCallable(const Model::AddSnatEntryRequest& request) const;
			DeleteNetworkOptimizationOutcome deleteNetworkOptimization(const Model::DeleteNetworkOptimizationRequest &request)const;
			void deleteNetworkOptimizationAsync(const Model::DeleteNetworkOptimizationRequest& request, const DeleteNetworkOptimizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNetworkOptimizationOutcomeCallable deleteNetworkOptimizationCallable(const Model::DeleteNetworkOptimizationRequest& request) const;
			AddDnatEntryOutcome addDnatEntry(const Model::AddDnatEntryRequest &request)const;
			void addDnatEntryAsync(const Model::AddDnatEntryRequest& request, const AddDnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddDnatEntryOutcomeCallable addDnatEntryCallable(const Model::AddDnatEntryRequest& request) const;
			ModifyNetworkOptimizationOutcome modifyNetworkOptimization(const Model::ModifyNetworkOptimizationRequest &request)const;
			void modifyNetworkOptimizationAsync(const Model::ModifyNetworkOptimizationRequest& request, const ModifyNetworkOptimizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyNetworkOptimizationOutcomeCallable modifyNetworkOptimizationCallable(const Model::ModifyNetworkOptimizationRequest& request) const;
			DescribeSnatEntriesOutcome describeSnatEntries(const Model::DescribeSnatEntriesRequest &request)const;
			void describeSnatEntriesAsync(const Model::DescribeSnatEntriesRequest& request, const DescribeSnatEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSnatEntriesOutcomeCallable describeSnatEntriesCallable(const Model::DescribeSnatEntriesRequest& request) const;
			AddACLRuleOutcome addACLRule(const Model::AddACLRuleRequest &request)const;
			void addACLRuleAsync(const Model::AddACLRuleRequest& request, const AddACLRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddACLRuleOutcomeCallable addACLRuleCallable(const Model::AddACLRuleRequest& request) const;
			AssociateFlowLogOutcome associateFlowLog(const Model::AssociateFlowLogRequest &request)const;
			void associateFlowLogAsync(const Model::AssociateFlowLogRequest& request, const AssociateFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateFlowLogOutcomeCallable associateFlowLogCallable(const Model::AssociateFlowLogRequest& request) const;
			ModifyQosCarOutcome modifyQosCar(const Model::ModifyQosCarRequest &request)const;
			void modifyQosCarAsync(const Model::ModifyQosCarRequest& request, const ModifyQosCarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyQosCarOutcomeCallable modifyQosCarCallable(const Model::ModifyQosCarRequest& request) const;
			BindSmartAccessGatewayOutcome bindSmartAccessGateway(const Model::BindSmartAccessGatewayRequest &request)const;
			void bindSmartAccessGatewayAsync(const Model::BindSmartAccessGatewayRequest& request, const BindSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindSmartAccessGatewayOutcomeCallable bindSmartAccessGatewayCallable(const Model::BindSmartAccessGatewayRequest& request) const;
			DisassociateACLOutcome disassociateACL(const Model::DisassociateACLRequest &request)const;
			void disassociateACLAsync(const Model::DisassociateACLRequest& request, const DisassociateACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisassociateACLOutcomeCallable disassociateACLCallable(const Model::DisassociateACLRequest& request) const;
			DeleteSAGLinkLevelHaOutcome deleteSAGLinkLevelHa(const Model::DeleteSAGLinkLevelHaRequest &request)const;
			void deleteSAGLinkLevelHaAsync(const Model::DeleteSAGLinkLevelHaRequest& request, const DeleteSAGLinkLevelHaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSAGLinkLevelHaOutcomeCallable deleteSAGLinkLevelHaCallable(const Model::DeleteSAGLinkLevelHaRequest& request) const;
			DeactiveFlowLogOutcome deactiveFlowLog(const Model::DeactiveFlowLogRequest &request)const;
			void deactiveFlowLogAsync(const Model::DeactiveFlowLogRequest& request, const DeactiveFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeactiveFlowLogOutcomeCallable deactiveFlowLogCallable(const Model::DeactiveFlowLogRequest& request) const;
			CreateFlowLogOutcome createFlowLog(const Model::CreateFlowLogRequest &request)const;
			void createFlowLogAsync(const Model::CreateFlowLogRequest& request, const CreateFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFlowLogOutcomeCallable createFlowLogCallable(const Model::CreateFlowLogRequest& request) const;
			ActiveFlowLogOutcome activeFlowLog(const Model::ActiveFlowLogRequest &request)const;
			void activeFlowLogAsync(const Model::ActiveFlowLogRequest& request, const ActiveFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ActiveFlowLogOutcomeCallable activeFlowLogCallable(const Model::ActiveFlowLogRequest& request) const;
			SwitchSAGHaStateOutcome switchSAGHaState(const Model::SwitchSAGHaStateRequest &request)const;
			void switchSAGHaStateAsync(const Model::SwitchSAGHaStateRequest& request, const SwitchSAGHaStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchSAGHaStateOutcomeCallable switchSAGHaStateCallable(const Model::SwitchSAGHaStateRequest& request) const;
			KickOutClientsOutcome kickOutClients(const Model::KickOutClientsRequest &request)const;
			void kickOutClientsAsync(const Model::KickOutClientsRequest& request, const KickOutClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			KickOutClientsOutcomeCallable kickOutClientsCallable(const Model::KickOutClientsRequest& request) const;
			DescribeSagRouteableAddressOutcome describeSagRouteableAddress(const Model::DescribeSagRouteableAddressRequest &request)const;
			void describeSagRouteableAddressAsync(const Model::DescribeSagRouteableAddressRequest& request, const DescribeSagRouteableAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSagRouteableAddressOutcomeCallable describeSagRouteableAddressCallable(const Model::DescribeSagRouteableAddressRequest& request) const;
			SwitchCloudBoxHaStateOutcome switchCloudBoxHaState(const Model::SwitchCloudBoxHaStateRequest &request)const;
			void switchCloudBoxHaStateAsync(const Model::SwitchCloudBoxHaStateRequest& request, const SwitchCloudBoxHaStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchCloudBoxHaStateOutcomeCallable switchCloudBoxHaStateCallable(const Model::SwitchCloudBoxHaStateRequest& request) const;
			AttachNetworkOptimizationSagsOutcome attachNetworkOptimizationSags(const Model::AttachNetworkOptimizationSagsRequest &request)const;
			void attachNetworkOptimizationSagsAsync(const Model::AttachNetworkOptimizationSagsRequest& request, const AttachNetworkOptimizationSagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachNetworkOptimizationSagsOutcomeCallable attachNetworkOptimizationSagsCallable(const Model::AttachNetworkOptimizationSagsRequest& request) const;
			DeleteACLOutcome deleteACL(const Model::DeleteACLRequest &request)const;
			void deleteACLAsync(const Model::DeleteACLRequest& request, const DeleteACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteACLOutcomeCallable deleteACLCallable(const Model::DeleteACLRequest& request) const;
			AssociateACLOutcome associateACL(const Model::AssociateACLRequest &request)const;
			void associateACLAsync(const Model::AssociateACLRequest& request, const AssociateACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateACLOutcomeCallable associateACLCallable(const Model::AssociateACLRequest& request) const;
			DescribeDnatEntriesOutcome describeDnatEntries(const Model::DescribeDnatEntriesRequest &request)const;
			void describeDnatEntriesAsync(const Model::DescribeDnatEntriesRequest& request, const DescribeDnatEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDnatEntriesOutcomeCallable describeDnatEntriesCallable(const Model::DescribeDnatEntriesRequest& request) const;
			DescribeSmartAccessGatewayVersionsOutcome describeSmartAccessGatewayVersions(const Model::DescribeSmartAccessGatewayVersionsRequest &request)const;
			void describeSmartAccessGatewayVersionsAsync(const Model::DescribeSmartAccessGatewayVersionsRequest& request, const DescribeSmartAccessGatewayVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSmartAccessGatewayVersionsOutcomeCallable describeSmartAccessGatewayVersionsCallable(const Model::DescribeSmartAccessGatewayVersionsRequest& request) const;
			RevokeInstanceFromCbnOutcome revokeInstanceFromCbn(const Model::RevokeInstanceFromCbnRequest &request)const;
			void revokeInstanceFromCbnAsync(const Model::RevokeInstanceFromCbnRequest& request, const RevokeInstanceFromCbnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeInstanceFromCbnOutcomeCallable revokeInstanceFromCbnCallable(const Model::RevokeInstanceFromCbnRequest& request) const;
			CreateQosPolicyOutcome createQosPolicy(const Model::CreateQosPolicyRequest &request)const;
			void createQosPolicyAsync(const Model::CreateQosPolicyRequest& request, const CreateQosPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateQosPolicyOutcomeCallable createQosPolicyCallable(const Model::CreateQosPolicyRequest& request) const;
			ModifySerialNumberOutcome modifySerialNumber(const Model::ModifySerialNumberRequest &request)const;
			void modifySerialNumberAsync(const Model::ModifySerialNumberRequest& request, const ModifySerialNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySerialNumberOutcomeCallable modifySerialNumberCallable(const Model::ModifySerialNumberRequest& request) const;
			DescribeFlowLogSagsOutcome describeFlowLogSags(const Model::DescribeFlowLogSagsRequest &request)const;
			void describeFlowLogSagsAsync(const Model::DescribeFlowLogSagsRequest& request, const DescribeFlowLogSagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowLogSagsOutcomeCallable describeFlowLogSagsCallable(const Model::DescribeFlowLogSagsRequest& request) const;
			DeleteDedicatedLineBackupOutcome deleteDedicatedLineBackup(const Model::DeleteDedicatedLineBackupRequest &request)const;
			void deleteDedicatedLineBackupAsync(const Model::DeleteDedicatedLineBackupRequest& request, const DeleteDedicatedLineBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDedicatedLineBackupOutcomeCallable deleteDedicatedLineBackupCallable(const Model::DeleteDedicatedLineBackupRequest& request) const;
			DescribeACLsOutcome describeACLs(const Model::DescribeACLsRequest &request)const;
			void describeACLsAsync(const Model::DescribeACLsRequest& request, const DescribeACLsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeACLsOutcomeCallable describeACLsCallable(const Model::DescribeACLsRequest& request) const;
			ResetSmartAccessGatewayClientUserPasswordOutcome resetSmartAccessGatewayClientUserPassword(const Model::ResetSmartAccessGatewayClientUserPasswordRequest &request)const;
			void resetSmartAccessGatewayClientUserPasswordAsync(const Model::ResetSmartAccessGatewayClientUserPasswordRequest& request, const ResetSmartAccessGatewayClientUserPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetSmartAccessGatewayClientUserPasswordOutcomeCallable resetSmartAccessGatewayClientUserPasswordCallable(const Model::ResetSmartAccessGatewayClientUserPasswordRequest& request) const;
			UnlockSmartAccessGatewayOutcome unlockSmartAccessGateway(const Model::UnlockSmartAccessGatewayRequest &request)const;
			void unlockSmartAccessGatewayAsync(const Model::UnlockSmartAccessGatewayRequest& request, const UnlockSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnlockSmartAccessGatewayOutcomeCallable unlockSmartAccessGatewayCallable(const Model::UnlockSmartAccessGatewayRequest& request) const;
			DescribeUnbindFlowLogSagsOutcome describeUnbindFlowLogSags(const Model::DescribeUnbindFlowLogSagsRequest &request)const;
			void describeUnbindFlowLogSagsAsync(const Model::DescribeUnbindFlowLogSagsRequest& request, const DescribeUnbindFlowLogSagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUnbindFlowLogSagsOutcomeCallable describeUnbindFlowLogSagsCallable(const Model::DescribeUnbindFlowLogSagsRequest& request) const;
			CreateSAGLinkLevelHaOutcome createSAGLinkLevelHa(const Model::CreateSAGLinkLevelHaRequest &request)const;
			void createSAGLinkLevelHaAsync(const Model::CreateSAGLinkLevelHaRequest& request, const CreateSAGLinkLevelHaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSAGLinkLevelHaOutcomeCallable createSAGLinkLevelHaCallable(const Model::CreateSAGLinkLevelHaRequest& request) const;
			DisassociateFlowLogOutcome disassociateFlowLog(const Model::DisassociateFlowLogRequest &request)const;
			void disassociateFlowLogAsync(const Model::DisassociateFlowLogRequest& request, const DisassociateFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisassociateFlowLogOutcomeCallable disassociateFlowLogCallable(const Model::DisassociateFlowLogRequest& request) const;
			DescribeSmartAccessGatewayHaOutcome describeSmartAccessGatewayHa(const Model::DescribeSmartAccessGatewayHaRequest &request)const;
			void describeSmartAccessGatewayHaAsync(const Model::DescribeSmartAccessGatewayHaRequest& request, const DescribeSmartAccessGatewayHaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSmartAccessGatewayHaOutcomeCallable describeSmartAccessGatewayHaCallable(const Model::DescribeSmartAccessGatewayHaRequest& request) const;
			DescribeNetworkOptimizationSettingsOutcome describeNetworkOptimizationSettings(const Model::DescribeNetworkOptimizationSettingsRequest &request)const;
			void describeNetworkOptimizationSettingsAsync(const Model::DescribeNetworkOptimizationSettingsRequest& request, const DescribeNetworkOptimizationSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNetworkOptimizationSettingsOutcomeCallable describeNetworkOptimizationSettingsCallable(const Model::DescribeNetworkOptimizationSettingsRequest& request) const;
			DeleteCloudConnectNetworkOutcome deleteCloudConnectNetwork(const Model::DeleteCloudConnectNetworkRequest &request)const;
			void deleteCloudConnectNetworkAsync(const Model::DeleteCloudConnectNetworkRequest& request, const DeleteCloudConnectNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCloudConnectNetworkOutcomeCallable deleteCloudConnectNetworkCallable(const Model::DeleteCloudConnectNetworkRequest& request) const;
			CreateACLOutcome createACL(const Model::CreateACLRequest &request)const;
			void createACLAsync(const Model::CreateACLRequest& request, const CreateACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateACLOutcomeCallable createACLCallable(const Model::CreateACLRequest& request) const;
			RebootSmartAccessGatewayOutcome rebootSmartAccessGateway(const Model::RebootSmartAccessGatewayRequest &request)const;
			void rebootSmartAccessGatewayAsync(const Model::RebootSmartAccessGatewayRequest& request, const RebootSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RebootSmartAccessGatewayOutcomeCallable rebootSmartAccessGatewayCallable(const Model::RebootSmartAccessGatewayRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			ModifyACLRuleOutcome modifyACLRule(const Model::ModifyACLRuleRequest &request)const;
			void modifyACLRuleAsync(const Model::ModifyACLRuleRequest& request, const ModifyACLRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyACLRuleOutcomeCallable modifyACLRuleCallable(const Model::ModifyACLRuleRequest& request) const;
			DescribeCloudConnectNetworksOutcome describeCloudConnectNetworks(const Model::DescribeCloudConnectNetworksRequest &request)const;
			void describeCloudConnectNetworksAsync(const Model::DescribeCloudConnectNetworksRequest& request, const DescribeCloudConnectNetworksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCloudConnectNetworksOutcomeCallable describeCloudConnectNetworksCallable(const Model::DescribeCloudConnectNetworksRequest& request) const;
			ModifySmartAccessGatewayClientUserOutcome modifySmartAccessGatewayClientUser(const Model::ModifySmartAccessGatewayClientUserRequest &request)const;
			void modifySmartAccessGatewayClientUserAsync(const Model::ModifySmartAccessGatewayClientUserRequest& request, const ModifySmartAccessGatewayClientUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySmartAccessGatewayClientUserOutcomeCallable modifySmartAccessGatewayClientUserCallable(const Model::ModifySmartAccessGatewayClientUserRequest& request) const;
			DeleteNetworkOptimizationSettingOutcome deleteNetworkOptimizationSetting(const Model::DeleteNetworkOptimizationSettingRequest &request)const;
			void deleteNetworkOptimizationSettingAsync(const Model::DeleteNetworkOptimizationSettingRequest& request, const DeleteNetworkOptimizationSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNetworkOptimizationSettingOutcomeCallable deleteNetworkOptimizationSettingCallable(const Model::DeleteNetworkOptimizationSettingRequest& request) const;
			GetCloudConnectNetworkUseLimitOutcome getCloudConnectNetworkUseLimit(const Model::GetCloudConnectNetworkUseLimitRequest &request)const;
			void getCloudConnectNetworkUseLimitAsync(const Model::GetCloudConnectNetworkUseLimitRequest& request, const GetCloudConnectNetworkUseLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCloudConnectNetworkUseLimitOutcomeCallable getCloudConnectNetworkUseLimitCallable(const Model::GetCloudConnectNetworkUseLimitRequest& request) const;
			UpgradeSmartAccessGatewayOutcome upgradeSmartAccessGateway(const Model::UpgradeSmartAccessGatewayRequest &request)const;
			void upgradeSmartAccessGatewayAsync(const Model::UpgradeSmartAccessGatewayRequest& request, const UpgradeSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeSmartAccessGatewayOutcomeCallable upgradeSmartAccessGatewayCallable(const Model::UpgradeSmartAccessGatewayRequest& request) const;
			DeleteQosCarOutcome deleteQosCar(const Model::DeleteQosCarRequest &request)const;
			void deleteQosCarAsync(const Model::DeleteQosCarRequest& request, const DeleteQosCarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteQosCarOutcomeCallable deleteQosCarCallable(const Model::DeleteQosCarRequest& request) const;
			DisassociateQosOutcome disassociateQos(const Model::DisassociateQosRequest &request)const;
			void disassociateQosAsync(const Model::DisassociateQosRequest& request, const DisassociateQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisassociateQosOutcomeCallable disassociateQosCallable(const Model::DisassociateQosRequest& request) const;
			DetachNetworkOptimizationSagsOutcome detachNetworkOptimizationSags(const Model::DetachNetworkOptimizationSagsRequest &request)const;
			void detachNetworkOptimizationSagsAsync(const Model::DetachNetworkOptimizationSagsRequest& request, const DetachNetworkOptimizationSagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachNetworkOptimizationSagsOutcomeCallable detachNetworkOptimizationSagsCallable(const Model::DetachNetworkOptimizationSagsRequest& request) const;
			EnableSmartAccessGatewayUserOutcome enableSmartAccessGatewayUser(const Model::EnableSmartAccessGatewayUserRequest &request)const;
			void enableSmartAccessGatewayUserAsync(const Model::EnableSmartAccessGatewayUserRequest& request, const EnableSmartAccessGatewayUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableSmartAccessGatewayUserOutcomeCallable enableSmartAccessGatewayUserCallable(const Model::EnableSmartAccessGatewayUserRequest& request) const;
			ModifyQosOutcome modifyQos(const Model::ModifyQosRequest &request)const;
			void modifyQosAsync(const Model::ModifyQosRequest& request, const ModifyQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyQosOutcomeCallable modifyQosCallable(const Model::ModifyQosRequest& request) const;
			UnbindVbrOutcome unbindVbr(const Model::UnbindVbrRequest &request)const;
			void unbindVbrAsync(const Model::UnbindVbrRequest& request, const UnbindVbrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindVbrOutcomeCallable unbindVbrCallable(const Model::UnbindVbrRequest& request) const;
			DescribeBindableSmartAccessGatewaysOutcome describeBindableSmartAccessGateways(const Model::DescribeBindableSmartAccessGatewaysRequest &request)const;
			void describeBindableSmartAccessGatewaysAsync(const Model::DescribeBindableSmartAccessGatewaysRequest& request, const DescribeBindableSmartAccessGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBindableSmartAccessGatewaysOutcomeCallable describeBindableSmartAccessGatewaysCallable(const Model::DescribeBindableSmartAccessGatewaysRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_SMARTAG_SMARTAGCLIENT_H_
