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
#include "model/ActivateSmartAccessGatewayRequest.h"
#include "model/ActivateSmartAccessGatewayResult.h"
#include "model/ActiveFlowLogRequest.h"
#include "model/ActiveFlowLogResult.h"
#include "model/AddACLRuleRequest.h"
#include "model/AddACLRuleResult.h"
#include "model/AddDnatEntryRequest.h"
#include "model/AddDnatEntryResult.h"
#include "model/AddSnatEntryRequest.h"
#include "model/AddSnatEntryResult.h"
#include "model/AssociateACLRequest.h"
#include "model/AssociateACLResult.h"
#include "model/AssociateFlowLogRequest.h"
#include "model/AssociateFlowLogResult.h"
#include "model/AssociateQosRequest.h"
#include "model/AssociateQosResult.h"
#include "model/BindSerialNumberRequest.h"
#include "model/BindSerialNumberResult.h"
#include "model/BindSmartAccessGatewayRequest.h"
#include "model/BindSmartAccessGatewayResult.h"
#include "model/BindVbrRequest.h"
#include "model/BindVbrResult.h"
#include "model/ClearSagCipherRequest.h"
#include "model/ClearSagCipherResult.h"
#include "model/ClearSagRouteableAddressRequest.h"
#include "model/ClearSagRouteableAddressResult.h"
#include "model/CreateACLRequest.h"
#include "model/CreateACLResult.h"
#include "model/CreateCloudConnectNetworkRequest.h"
#include "model/CreateCloudConnectNetworkResult.h"
#include "model/CreateEnterpriseCodeRequest.h"
#include "model/CreateEnterpriseCodeResult.h"
#include "model/CreateFlowLogRequest.h"
#include "model/CreateFlowLogResult.h"
#include "model/CreateHealthCheckRequest.h"
#include "model/CreateHealthCheckResult.h"
#include "model/CreateQosRequest.h"
#include "model/CreateQosResult.h"
#include "model/CreateQosCarRequest.h"
#include "model/CreateQosCarResult.h"
#include "model/CreateQosPolicyRequest.h"
#include "model/CreateQosPolicyResult.h"
#include "model/CreateSagExpressConnectInterfaceRequest.h"
#include "model/CreateSagExpressConnectInterfaceResult.h"
#include "model/CreateSagStaticRouteRequest.h"
#include "model/CreateSagStaticRouteResult.h"
#include "model/CreateSmartAccessGatewayRequest.h"
#include "model/CreateSmartAccessGatewayResult.h"
#include "model/CreateSmartAccessGatewayClientUserRequest.h"
#include "model/CreateSmartAccessGatewayClientUserResult.h"
#include "model/CreateSmartAccessGatewaySoftwareRequest.h"
#include "model/CreateSmartAccessGatewaySoftwareResult.h"
#include "model/DeactiveFlowLogRequest.h"
#include "model/DeactiveFlowLogResult.h"
#include "model/DeleteACLRequest.h"
#include "model/DeleteACLResult.h"
#include "model/DeleteACLRuleRequest.h"
#include "model/DeleteACLRuleResult.h"
#include "model/DeleteCloudConnectNetworkRequest.h"
#include "model/DeleteCloudConnectNetworkResult.h"
#include "model/DeleteDnatEntryRequest.h"
#include "model/DeleteDnatEntryResult.h"
#include "model/DeleteEnterpriseCodeRequest.h"
#include "model/DeleteEnterpriseCodeResult.h"
#include "model/DeleteFlowLogRequest.h"
#include "model/DeleteFlowLogResult.h"
#include "model/DeleteHealthCheckRequest.h"
#include "model/DeleteHealthCheckResult.h"
#include "model/DeleteQosRequest.h"
#include "model/DeleteQosResult.h"
#include "model/DeleteQosCarRequest.h"
#include "model/DeleteQosCarResult.h"
#include "model/DeleteQosPolicyRequest.h"
#include "model/DeleteQosPolicyResult.h"
#include "model/DeleteRouteDistributionStrategyRequest.h"
#include "model/DeleteRouteDistributionStrategyResult.h"
#include "model/DeleteSagExpressConnectInterfaceRequest.h"
#include "model/DeleteSagExpressConnectInterfaceResult.h"
#include "model/DeleteSagStaticRouteRequest.h"
#include "model/DeleteSagStaticRouteResult.h"
#include "model/DeleteSmartAccessGatewayRequest.h"
#include "model/DeleteSmartAccessGatewayResult.h"
#include "model/DeleteSmartAccessGatewayClientUserRequest.h"
#include "model/DeleteSmartAccessGatewayClientUserResult.h"
#include "model/DeleteSnatEntryRequest.h"
#include "model/DeleteSnatEntryResult.h"
#include "model/DescribeACLAttributeRequest.h"
#include "model/DescribeACLAttributeResult.h"
#include "model/DescribeACLsRequest.h"
#include "model/DescribeACLsResult.h"
#include "model/DescribeBindableSmartAccessGatewaysRequest.h"
#include "model/DescribeBindableSmartAccessGatewaysResult.h"
#include "model/DescribeClientUserDNSRequest.h"
#include "model/DescribeClientUserDNSResult.h"
#include "model/DescribeCloudConnectNetworksRequest.h"
#include "model/DescribeCloudConnectNetworksResult.h"
#include "model/DescribeDeviceAutoUpgradePolicyRequest.h"
#include "model/DescribeDeviceAutoUpgradePolicyResult.h"
#include "model/DescribeDnatEntriesRequest.h"
#include "model/DescribeDnatEntriesResult.h"
#include "model/DescribeFlowLogSagsRequest.h"
#include "model/DescribeFlowLogSagsResult.h"
#include "model/DescribeFlowLogsRequest.h"
#include "model/DescribeFlowLogsResult.h"
#include "model/DescribeGrantRulesRequest.h"
#include "model/DescribeGrantRulesResult.h"
#include "model/DescribeGrantSagRulesRequest.h"
#include "model/DescribeGrantSagRulesResult.h"
#include "model/DescribeGrantSagVbrRulesRequest.h"
#include "model/DescribeGrantSagVbrRulesResult.h"
#include "model/DescribeHealthCheckAttributeRequest.h"
#include "model/DescribeHealthCheckAttributeResult.h"
#include "model/DescribeHealthChecksRequest.h"
#include "model/DescribeHealthChecksResult.h"
#include "model/DescribeQosCarsRequest.h"
#include "model/DescribeQosCarsResult.h"
#include "model/DescribeQosPoliciesRequest.h"
#include "model/DescribeQosPoliciesResult.h"
#include "model/DescribeQosesRequest.h"
#include "model/DescribeQosesResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeRouteDistributionStrategiesRequest.h"
#include "model/DescribeRouteDistributionStrategiesResult.h"
#include "model/DescribeSAGDeviceInfoRequest.h"
#include "model/DescribeSAGDeviceInfoResult.h"
#include "model/DescribeSagCurrentDnsRequest.h"
#include "model/DescribeSagCurrentDnsResult.h"
#include "model/DescribeSagDropTopNRequest.h"
#include "model/DescribeSagDropTopNResult.h"
#include "model/DescribeSagExpressConnectInterfaceListRequest.h"
#include "model/DescribeSagExpressConnectInterfaceListResult.h"
#include "model/DescribeSagGlobalRouteProtocolRequest.h"
#include "model/DescribeSagGlobalRouteProtocolResult.h"
#include "model/DescribeSagHaRequest.h"
#include "model/DescribeSagHaResult.h"
#include "model/DescribeSagLanListRequest.h"
#include "model/DescribeSagLanListResult.h"
#include "model/DescribeSagManagementPortRequest.h"
#include "model/DescribeSagManagementPortResult.h"
#include "model/DescribeSagOnlineClientStatisticsRequest.h"
#include "model/DescribeSagOnlineClientStatisticsResult.h"
#include "model/DescribeSagPortListRequest.h"
#include "model/DescribeSagPortListResult.h"
#include "model/DescribeSagPortRouteProtocolListRequest.h"
#include "model/DescribeSagPortRouteProtocolListResult.h"
#include "model/DescribeSagRemoteAccessRequest.h"
#include "model/DescribeSagRemoteAccessResult.h"
#include "model/DescribeSagRouteListRequest.h"
#include "model/DescribeSagRouteListResult.h"
#include "model/DescribeSagRouteProtocolBgpRequest.h"
#include "model/DescribeSagRouteProtocolBgpResult.h"
#include "model/DescribeSagRouteProtocolOspfRequest.h"
#include "model/DescribeSagRouteProtocolOspfResult.h"
#include "model/DescribeSagStaticRouteListRequest.h"
#include "model/DescribeSagStaticRouteListResult.h"
#include "model/DescribeSagTrafficTopNRequest.h"
#include "model/DescribeSagTrafficTopNResult.h"
#include "model/DescribeSagUserDnsRequest.h"
#include "model/DescribeSagUserDnsResult.h"
#include "model/DescribeSagVbrRelationsRequest.h"
#include "model/DescribeSagVbrRelationsResult.h"
#include "model/DescribeSagWan4GRequest.h"
#include "model/DescribeSagWan4GResult.h"
#include "model/DescribeSagWanListRequest.h"
#include "model/DescribeSagWanListResult.h"
#include "model/DescribeSagWanSnatRequest.h"
#include "model/DescribeSagWanSnatResult.h"
#include "model/DescribeSagWifiRequest.h"
#include "model/DescribeSagWifiResult.h"
#include "model/DescribeSmartAccessGatewayAttributeRequest.h"
#include "model/DescribeSmartAccessGatewayAttributeResult.h"
#include "model/DescribeSmartAccessGatewayClientUsersRequest.h"
#include "model/DescribeSmartAccessGatewayClientUsersResult.h"
#include "model/DescribeSmartAccessGatewayHaRequest.h"
#include "model/DescribeSmartAccessGatewayHaResult.h"
#include "model/DescribeSmartAccessGatewayVersionsRequest.h"
#include "model/DescribeSmartAccessGatewayVersionsResult.h"
#include "model/DescribeSmartAccessGatewaysRequest.h"
#include "model/DescribeSmartAccessGatewaysResult.h"
#include "model/DescribeSnatEntriesRequest.h"
#include "model/DescribeSnatEntriesResult.h"
#include "model/DescribeUnbindFlowLogSagsRequest.h"
#include "model/DescribeUnbindFlowLogSagsResult.h"
#include "model/DescribeUserFlowStatisticsRequest.h"
#include "model/DescribeUserFlowStatisticsResult.h"
#include "model/DescribeUserOnlineClientStatisticsRequest.h"
#include "model/DescribeUserOnlineClientStatisticsResult.h"
#include "model/DescribeUserOnlineClientsRequest.h"
#include "model/DescribeUserOnlineClientsResult.h"
#include "model/DiagnoseSmartAccessGatewayRequest.h"
#include "model/DiagnoseSmartAccessGatewayResult.h"
#include "model/DisableSmartAGDpiMonitorRequest.h"
#include "model/DisableSmartAGDpiMonitorResult.h"
#include "model/DisableSmartAccessGatewayUserRequest.h"
#include "model/DisableSmartAccessGatewayUserResult.h"
#include "model/DisassociateACLRequest.h"
#include "model/DisassociateACLResult.h"
#include "model/DisassociateFlowLogRequest.h"
#include "model/DisassociateFlowLogResult.h"
#include "model/DisassociateQosRequest.h"
#include "model/DisassociateQosResult.h"
#include "model/DiscribeSmartAccessGatewayDiagnosisReportRequest.h"
#include "model/DiscribeSmartAccessGatewayDiagnosisReportResult.h"
#include "model/DowngradeSmartAccessGatewayRequest.h"
#include "model/DowngradeSmartAccessGatewayResult.h"
#include "model/DowngradeSmartAccessGatewaySoftwareRequest.h"
#include "model/DowngradeSmartAccessGatewaySoftwareResult.h"
#include "model/EnableSmartAGDpiMonitorRequest.h"
#include "model/EnableSmartAGDpiMonitorResult.h"
#include "model/EnableSmartAccessGatewayUserRequest.h"
#include "model/EnableSmartAccessGatewayUserResult.h"
#include "model/GetAclAttributeRequest.h"
#include "model/GetAclAttributeResult.h"
#include "model/GetCloudConnectNetworkUseLimitRequest.h"
#include "model/GetCloudConnectNetworkUseLimitResult.h"
#include "model/GetQosAttributeRequest.h"
#include "model/GetQosAttributeResult.h"
#include "model/GetSmartAGDpiAttributeRequest.h"
#include "model/GetSmartAGDpiAttributeResult.h"
#include "model/GetSmartAccessGatewayUseLimitRequest.h"
#include "model/GetSmartAccessGatewayUseLimitResult.h"
#include "model/GrantInstanceToCbnRequest.h"
#include "model/GrantInstanceToCbnResult.h"
#include "model/GrantSagInstanceToCcnRequest.h"
#include "model/GrantSagInstanceToCcnResult.h"
#include "model/GrantSagInstanceToVbrRequest.h"
#include "model/GrantSagInstanceToVbrResult.h"
#include "model/KickOutClientsRequest.h"
#include "model/KickOutClientsResult.h"
#include "model/ListAccessPointNetworkQualitiesRequest.h"
#include "model/ListAccessPointNetworkQualitiesResult.h"
#include "model/ListAccessPointsRequest.h"
#include "model/ListAccessPointsResult.h"
#include "model/ListDpiConfigErrorRequest.h"
#include "model/ListDpiConfigErrorResult.h"
#include "model/ListDpiGroupsRequest.h"
#include "model/ListDpiGroupsResult.h"
#include "model/ListDpiSignaturesRequest.h"
#include "model/ListDpiSignaturesResult.h"
#include "model/ListEnterpriseCodeRequest.h"
#include "model/ListEnterpriseCodeResult.h"
#include "model/ListSmartAGApiUnsupportedFeatureRequest.h"
#include "model/ListSmartAGApiUnsupportedFeatureResult.h"
#include "model/ListSmartAGByAccessPointRequest.h"
#include "model/ListSmartAGByAccessPointResult.h"
#include "model/ModifyACLRequest.h"
#include "model/ModifyACLResult.h"
#include "model/ModifyACLRuleRequest.h"
#include "model/ModifyACLRuleResult.h"
#include "model/ModifyClientUserDNSRequest.h"
#include "model/ModifyClientUserDNSResult.h"
#include "model/ModifyCloudConnectNetworkRequest.h"
#include "model/ModifyCloudConnectNetworkResult.h"
#include "model/ModifyDeviceAutoUpgradePolicyRequest.h"
#include "model/ModifyDeviceAutoUpgradePolicyResult.h"
#include "model/ModifyFlowLogAttributeRequest.h"
#include "model/ModifyFlowLogAttributeResult.h"
#include "model/ModifyHealthCheckRequest.h"
#include "model/ModifyHealthCheckResult.h"
#include "model/ModifyQosRequest.h"
#include "model/ModifyQosResult.h"
#include "model/ModifyQosCarRequest.h"
#include "model/ModifyQosCarResult.h"
#include "model/ModifyQosPolicyRequest.h"
#include "model/ModifyQosPolicyResult.h"
#include "model/ModifyRouteDistributionStrategyRequest.h"
#include "model/ModifyRouteDistributionStrategyResult.h"
#include "model/ModifySAGAdminPasswordRequest.h"
#include "model/ModifySAGAdminPasswordResult.h"
#include "model/ModifySagExpressConnectInterfaceRequest.h"
#include "model/ModifySagExpressConnectInterfaceResult.h"
#include "model/ModifySagGlobalRouteProtocolRequest.h"
#include "model/ModifySagGlobalRouteProtocolResult.h"
#include "model/ModifySagHaRequest.h"
#include "model/ModifySagHaResult.h"
#include "model/ModifySagLanRequest.h"
#include "model/ModifySagLanResult.h"
#include "model/ModifySagManagementPortRequest.h"
#include "model/ModifySagManagementPortResult.h"
#include "model/ModifySagPortRoleRequest.h"
#include "model/ModifySagPortRoleResult.h"
#include "model/ModifySagPortRouteProtocolRequest.h"
#include "model/ModifySagPortRouteProtocolResult.h"
#include "model/ModifySagRemoteAccessRequest.h"
#include "model/ModifySagRemoteAccessResult.h"
#include "model/ModifySagRouteProtocolBgpRequest.h"
#include "model/ModifySagRouteProtocolBgpResult.h"
#include "model/ModifySagRouteProtocolOspfRequest.h"
#include "model/ModifySagRouteProtocolOspfResult.h"
#include "model/ModifySagStaticRouteRequest.h"
#include "model/ModifySagStaticRouteResult.h"
#include "model/ModifySagUserDnsRequest.h"
#include "model/ModifySagUserDnsResult.h"
#include "model/ModifySagWanRequest.h"
#include "model/ModifySagWanResult.h"
#include "model/ModifySagWanSnatRequest.h"
#include "model/ModifySagWanSnatResult.h"
#include "model/ModifySagWifiRequest.h"
#include "model/ModifySagWifiResult.h"
#include "model/ModifySmartAccessGatewayRequest.h"
#include "model/ModifySmartAccessGatewayResult.h"
#include "model/ModifySmartAccessGatewayClientUserRequest.h"
#include "model/ModifySmartAccessGatewayClientUserResult.h"
#include "model/ModifySmartAccessGatewayUpBandwidthRequest.h"
#include "model/ModifySmartAccessGatewayUpBandwidthResult.h"
#include "model/MoveResourceGroupRequest.h"
#include "model/MoveResourceGroupResult.h"
#include "model/ProbeAccessPointNetworkQualityRequest.h"
#include "model/ProbeAccessPointNetworkQualityResult.h"
#include "model/RebootSmartAccessGatewayRequest.h"
#include "model/RebootSmartAccessGatewayResult.h"
#include "model/ResetSmartAccessGatewayClientUserPasswordRequest.h"
#include "model/ResetSmartAccessGatewayClientUserPasswordResult.h"
#include "model/RevokeInstanceFromCbnRequest.h"
#include "model/RevokeInstanceFromCbnResult.h"
#include "model/RevokeInstanceFromVbrRequest.h"
#include "model/RevokeInstanceFromVbrResult.h"
#include "model/RevokeSagInstanceFromCcnRequest.h"
#include "model/RevokeSagInstanceFromCcnResult.h"
#include "model/RoamClientUserRequest.h"
#include "model/RoamClientUserResult.h"
#include "model/SynchronizeSmartAGWebConfigRequest.h"
#include "model/SynchronizeSmartAGWebConfigResult.h"
#include "model/UnbindSerialNumberRequest.h"
#include "model/UnbindSerialNumberResult.h"
#include "model/UnbindSmartAccessGatewayRequest.h"
#include "model/UnbindSmartAccessGatewayResult.h"
#include "model/UnbindVbrRequest.h"
#include "model/UnbindVbrResult.h"
#include "model/UnlockSmartAccessGatewayRequest.h"
#include "model/UnlockSmartAccessGatewayResult.h"
#include "model/UpdateEnterpriseCodeRequest.h"
#include "model/UpdateEnterpriseCodeResult.h"
#include "model/UpdateSmartAGAccessPointRequest.h"
#include "model/UpdateSmartAGAccessPointResult.h"
#include "model/UpdateSmartAGDpiAttributeRequest.h"
#include "model/UpdateSmartAGDpiAttributeResult.h"
#include "model/UpdateSmartAGEnterpriseCodeRequest.h"
#include "model/UpdateSmartAGEnterpriseCodeResult.h"
#include "model/UpdateSmartAccessGatewayVersionRequest.h"
#include "model/UpdateSmartAccessGatewayVersionResult.h"
#include "model/UpgradeSmartAccessGatewayRequest.h"
#include "model/UpgradeSmartAccessGatewayResult.h"
#include "model/UpgradeSmartAccessGatewaySoftwareRequest.h"
#include "model/UpgradeSmartAccessGatewaySoftwareResult.h"


namespace AlibabaCloud
{
	namespace Smartag
	{
		class ALIBABACLOUD_SMARTAG_EXPORT SmartagClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::ActivateSmartAccessGatewayResult> ActivateSmartAccessGatewayOutcome;
			typedef std::future<ActivateSmartAccessGatewayOutcome> ActivateSmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ActivateSmartAccessGatewayRequest&, const ActivateSmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ActivateSmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::ActiveFlowLogResult> ActiveFlowLogOutcome;
			typedef std::future<ActiveFlowLogOutcome> ActiveFlowLogOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ActiveFlowLogRequest&, const ActiveFlowLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ActiveFlowLogAsyncHandler;
			typedef Outcome<Error, Model::AddACLRuleResult> AddACLRuleOutcome;
			typedef std::future<AddACLRuleOutcome> AddACLRuleOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::AddACLRuleRequest&, const AddACLRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddACLRuleAsyncHandler;
			typedef Outcome<Error, Model::AddDnatEntryResult> AddDnatEntryOutcome;
			typedef std::future<AddDnatEntryOutcome> AddDnatEntryOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::AddDnatEntryRequest&, const AddDnatEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddDnatEntryAsyncHandler;
			typedef Outcome<Error, Model::AddSnatEntryResult> AddSnatEntryOutcome;
			typedef std::future<AddSnatEntryOutcome> AddSnatEntryOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::AddSnatEntryRequest&, const AddSnatEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddSnatEntryAsyncHandler;
			typedef Outcome<Error, Model::AssociateACLResult> AssociateACLOutcome;
			typedef std::future<AssociateACLOutcome> AssociateACLOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::AssociateACLRequest&, const AssociateACLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateACLAsyncHandler;
			typedef Outcome<Error, Model::AssociateFlowLogResult> AssociateFlowLogOutcome;
			typedef std::future<AssociateFlowLogOutcome> AssociateFlowLogOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::AssociateFlowLogRequest&, const AssociateFlowLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateFlowLogAsyncHandler;
			typedef Outcome<Error, Model::AssociateQosResult> AssociateQosOutcome;
			typedef std::future<AssociateQosOutcome> AssociateQosOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::AssociateQosRequest&, const AssociateQosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateQosAsyncHandler;
			typedef Outcome<Error, Model::BindSerialNumberResult> BindSerialNumberOutcome;
			typedef std::future<BindSerialNumberOutcome> BindSerialNumberOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::BindSerialNumberRequest&, const BindSerialNumberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindSerialNumberAsyncHandler;
			typedef Outcome<Error, Model::BindSmartAccessGatewayResult> BindSmartAccessGatewayOutcome;
			typedef std::future<BindSmartAccessGatewayOutcome> BindSmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::BindSmartAccessGatewayRequest&, const BindSmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindSmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::BindVbrResult> BindVbrOutcome;
			typedef std::future<BindVbrOutcome> BindVbrOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::BindVbrRequest&, const BindVbrOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BindVbrAsyncHandler;
			typedef Outcome<Error, Model::ClearSagCipherResult> ClearSagCipherOutcome;
			typedef std::future<ClearSagCipherOutcome> ClearSagCipherOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ClearSagCipherRequest&, const ClearSagCipherOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ClearSagCipherAsyncHandler;
			typedef Outcome<Error, Model::ClearSagRouteableAddressResult> ClearSagRouteableAddressOutcome;
			typedef std::future<ClearSagRouteableAddressOutcome> ClearSagRouteableAddressOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ClearSagRouteableAddressRequest&, const ClearSagRouteableAddressOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ClearSagRouteableAddressAsyncHandler;
			typedef Outcome<Error, Model::CreateACLResult> CreateACLOutcome;
			typedef std::future<CreateACLOutcome> CreateACLOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateACLRequest&, const CreateACLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateACLAsyncHandler;
			typedef Outcome<Error, Model::CreateCloudConnectNetworkResult> CreateCloudConnectNetworkOutcome;
			typedef std::future<CreateCloudConnectNetworkOutcome> CreateCloudConnectNetworkOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateCloudConnectNetworkRequest&, const CreateCloudConnectNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudConnectNetworkAsyncHandler;
			typedef Outcome<Error, Model::CreateEnterpriseCodeResult> CreateEnterpriseCodeOutcome;
			typedef std::future<CreateEnterpriseCodeOutcome> CreateEnterpriseCodeOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateEnterpriseCodeRequest&, const CreateEnterpriseCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateEnterpriseCodeAsyncHandler;
			typedef Outcome<Error, Model::CreateFlowLogResult> CreateFlowLogOutcome;
			typedef std::future<CreateFlowLogOutcome> CreateFlowLogOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateFlowLogRequest&, const CreateFlowLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateFlowLogAsyncHandler;
			typedef Outcome<Error, Model::CreateHealthCheckResult> CreateHealthCheckOutcome;
			typedef std::future<CreateHealthCheckOutcome> CreateHealthCheckOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateHealthCheckRequest&, const CreateHealthCheckOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateHealthCheckAsyncHandler;
			typedef Outcome<Error, Model::CreateQosResult> CreateQosOutcome;
			typedef std::future<CreateQosOutcome> CreateQosOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateQosRequest&, const CreateQosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateQosAsyncHandler;
			typedef Outcome<Error, Model::CreateQosCarResult> CreateQosCarOutcome;
			typedef std::future<CreateQosCarOutcome> CreateQosCarOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateQosCarRequest&, const CreateQosCarOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateQosCarAsyncHandler;
			typedef Outcome<Error, Model::CreateQosPolicyResult> CreateQosPolicyOutcome;
			typedef std::future<CreateQosPolicyOutcome> CreateQosPolicyOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateQosPolicyRequest&, const CreateQosPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateQosPolicyAsyncHandler;
			typedef Outcome<Error, Model::CreateSagExpressConnectInterfaceResult> CreateSagExpressConnectInterfaceOutcome;
			typedef std::future<CreateSagExpressConnectInterfaceOutcome> CreateSagExpressConnectInterfaceOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateSagExpressConnectInterfaceRequest&, const CreateSagExpressConnectInterfaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSagExpressConnectInterfaceAsyncHandler;
			typedef Outcome<Error, Model::CreateSagStaticRouteResult> CreateSagStaticRouteOutcome;
			typedef std::future<CreateSagStaticRouteOutcome> CreateSagStaticRouteOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateSagStaticRouteRequest&, const CreateSagStaticRouteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSagStaticRouteAsyncHandler;
			typedef Outcome<Error, Model::CreateSmartAccessGatewayResult> CreateSmartAccessGatewayOutcome;
			typedef std::future<CreateSmartAccessGatewayOutcome> CreateSmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateSmartAccessGatewayRequest&, const CreateSmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::CreateSmartAccessGatewayClientUserResult> CreateSmartAccessGatewayClientUserOutcome;
			typedef std::future<CreateSmartAccessGatewayClientUserOutcome> CreateSmartAccessGatewayClientUserOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateSmartAccessGatewayClientUserRequest&, const CreateSmartAccessGatewayClientUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSmartAccessGatewayClientUserAsyncHandler;
			typedef Outcome<Error, Model::CreateSmartAccessGatewaySoftwareResult> CreateSmartAccessGatewaySoftwareOutcome;
			typedef std::future<CreateSmartAccessGatewaySoftwareOutcome> CreateSmartAccessGatewaySoftwareOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::CreateSmartAccessGatewaySoftwareRequest&, const CreateSmartAccessGatewaySoftwareOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSmartAccessGatewaySoftwareAsyncHandler;
			typedef Outcome<Error, Model::DeactiveFlowLogResult> DeactiveFlowLogOutcome;
			typedef std::future<DeactiveFlowLogOutcome> DeactiveFlowLogOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeactiveFlowLogRequest&, const DeactiveFlowLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeactiveFlowLogAsyncHandler;
			typedef Outcome<Error, Model::DeleteACLResult> DeleteACLOutcome;
			typedef std::future<DeleteACLOutcome> DeleteACLOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteACLRequest&, const DeleteACLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteACLAsyncHandler;
			typedef Outcome<Error, Model::DeleteACLRuleResult> DeleteACLRuleOutcome;
			typedef std::future<DeleteACLRuleOutcome> DeleteACLRuleOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteACLRuleRequest&, const DeleteACLRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteACLRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteCloudConnectNetworkResult> DeleteCloudConnectNetworkOutcome;
			typedef std::future<DeleteCloudConnectNetworkOutcome> DeleteCloudConnectNetworkOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteCloudConnectNetworkRequest&, const DeleteCloudConnectNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudConnectNetworkAsyncHandler;
			typedef Outcome<Error, Model::DeleteDnatEntryResult> DeleteDnatEntryOutcome;
			typedef std::future<DeleteDnatEntryOutcome> DeleteDnatEntryOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteDnatEntryRequest&, const DeleteDnatEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDnatEntryAsyncHandler;
			typedef Outcome<Error, Model::DeleteEnterpriseCodeResult> DeleteEnterpriseCodeOutcome;
			typedef std::future<DeleteEnterpriseCodeOutcome> DeleteEnterpriseCodeOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteEnterpriseCodeRequest&, const DeleteEnterpriseCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteEnterpriseCodeAsyncHandler;
			typedef Outcome<Error, Model::DeleteFlowLogResult> DeleteFlowLogOutcome;
			typedef std::future<DeleteFlowLogOutcome> DeleteFlowLogOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteFlowLogRequest&, const DeleteFlowLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFlowLogAsyncHandler;
			typedef Outcome<Error, Model::DeleteHealthCheckResult> DeleteHealthCheckOutcome;
			typedef std::future<DeleteHealthCheckOutcome> DeleteHealthCheckOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteHealthCheckRequest&, const DeleteHealthCheckOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteHealthCheckAsyncHandler;
			typedef Outcome<Error, Model::DeleteQosResult> DeleteQosOutcome;
			typedef std::future<DeleteQosOutcome> DeleteQosOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteQosRequest&, const DeleteQosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQosAsyncHandler;
			typedef Outcome<Error, Model::DeleteQosCarResult> DeleteQosCarOutcome;
			typedef std::future<DeleteQosCarOutcome> DeleteQosCarOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteQosCarRequest&, const DeleteQosCarOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQosCarAsyncHandler;
			typedef Outcome<Error, Model::DeleteQosPolicyResult> DeleteQosPolicyOutcome;
			typedef std::future<DeleteQosPolicyOutcome> DeleteQosPolicyOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteQosPolicyRequest&, const DeleteQosPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQosPolicyAsyncHandler;
			typedef Outcome<Error, Model::DeleteRouteDistributionStrategyResult> DeleteRouteDistributionStrategyOutcome;
			typedef std::future<DeleteRouteDistributionStrategyOutcome> DeleteRouteDistributionStrategyOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteRouteDistributionStrategyRequest&, const DeleteRouteDistributionStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRouteDistributionStrategyAsyncHandler;
			typedef Outcome<Error, Model::DeleteSagExpressConnectInterfaceResult> DeleteSagExpressConnectInterfaceOutcome;
			typedef std::future<DeleteSagExpressConnectInterfaceOutcome> DeleteSagExpressConnectInterfaceOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteSagExpressConnectInterfaceRequest&, const DeleteSagExpressConnectInterfaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSagExpressConnectInterfaceAsyncHandler;
			typedef Outcome<Error, Model::DeleteSagStaticRouteResult> DeleteSagStaticRouteOutcome;
			typedef std::future<DeleteSagStaticRouteOutcome> DeleteSagStaticRouteOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteSagStaticRouteRequest&, const DeleteSagStaticRouteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSagStaticRouteAsyncHandler;
			typedef Outcome<Error, Model::DeleteSmartAccessGatewayResult> DeleteSmartAccessGatewayOutcome;
			typedef std::future<DeleteSmartAccessGatewayOutcome> DeleteSmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteSmartAccessGatewayRequest&, const DeleteSmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::DeleteSmartAccessGatewayClientUserResult> DeleteSmartAccessGatewayClientUserOutcome;
			typedef std::future<DeleteSmartAccessGatewayClientUserOutcome> DeleteSmartAccessGatewayClientUserOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteSmartAccessGatewayClientUserRequest&, const DeleteSmartAccessGatewayClientUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSmartAccessGatewayClientUserAsyncHandler;
			typedef Outcome<Error, Model::DeleteSnatEntryResult> DeleteSnatEntryOutcome;
			typedef std::future<DeleteSnatEntryOutcome> DeleteSnatEntryOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DeleteSnatEntryRequest&, const DeleteSnatEntryOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSnatEntryAsyncHandler;
			typedef Outcome<Error, Model::DescribeACLAttributeResult> DescribeACLAttributeOutcome;
			typedef std::future<DescribeACLAttributeOutcome> DescribeACLAttributeOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeACLAttributeRequest&, const DescribeACLAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeACLAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeACLsResult> DescribeACLsOutcome;
			typedef std::future<DescribeACLsOutcome> DescribeACLsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeACLsRequest&, const DescribeACLsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeACLsAsyncHandler;
			typedef Outcome<Error, Model::DescribeBindableSmartAccessGatewaysResult> DescribeBindableSmartAccessGatewaysOutcome;
			typedef std::future<DescribeBindableSmartAccessGatewaysOutcome> DescribeBindableSmartAccessGatewaysOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeBindableSmartAccessGatewaysRequest&, const DescribeBindableSmartAccessGatewaysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBindableSmartAccessGatewaysAsyncHandler;
			typedef Outcome<Error, Model::DescribeClientUserDNSResult> DescribeClientUserDNSOutcome;
			typedef std::future<DescribeClientUserDNSOutcome> DescribeClientUserDNSOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeClientUserDNSRequest&, const DescribeClientUserDNSOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClientUserDNSAsyncHandler;
			typedef Outcome<Error, Model::DescribeCloudConnectNetworksResult> DescribeCloudConnectNetworksOutcome;
			typedef std::future<DescribeCloudConnectNetworksOutcome> DescribeCloudConnectNetworksOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeCloudConnectNetworksRequest&, const DescribeCloudConnectNetworksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudConnectNetworksAsyncHandler;
			typedef Outcome<Error, Model::DescribeDeviceAutoUpgradePolicyResult> DescribeDeviceAutoUpgradePolicyOutcome;
			typedef std::future<DescribeDeviceAutoUpgradePolicyOutcome> DescribeDeviceAutoUpgradePolicyOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeDeviceAutoUpgradePolicyRequest&, const DescribeDeviceAutoUpgradePolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceAutoUpgradePolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeDnatEntriesResult> DescribeDnatEntriesOutcome;
			typedef std::future<DescribeDnatEntriesOutcome> DescribeDnatEntriesOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeDnatEntriesRequest&, const DescribeDnatEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDnatEntriesAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowLogSagsResult> DescribeFlowLogSagsOutcome;
			typedef std::future<DescribeFlowLogSagsOutcome> DescribeFlowLogSagsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeFlowLogSagsRequest&, const DescribeFlowLogSagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowLogSagsAsyncHandler;
			typedef Outcome<Error, Model::DescribeFlowLogsResult> DescribeFlowLogsOutcome;
			typedef std::future<DescribeFlowLogsOutcome> DescribeFlowLogsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeFlowLogsRequest&, const DescribeFlowLogsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowLogsAsyncHandler;
			typedef Outcome<Error, Model::DescribeGrantRulesResult> DescribeGrantRulesOutcome;
			typedef std::future<DescribeGrantRulesOutcome> DescribeGrantRulesOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeGrantRulesRequest&, const DescribeGrantRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGrantRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeGrantSagRulesResult> DescribeGrantSagRulesOutcome;
			typedef std::future<DescribeGrantSagRulesOutcome> DescribeGrantSagRulesOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeGrantSagRulesRequest&, const DescribeGrantSagRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGrantSagRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeGrantSagVbrRulesResult> DescribeGrantSagVbrRulesOutcome;
			typedef std::future<DescribeGrantSagVbrRulesOutcome> DescribeGrantSagVbrRulesOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeGrantSagVbrRulesRequest&, const DescribeGrantSagVbrRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGrantSagVbrRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeHealthCheckAttributeResult> DescribeHealthCheckAttributeOutcome;
			typedef std::future<DescribeHealthCheckAttributeOutcome> DescribeHealthCheckAttributeOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeHealthCheckAttributeRequest&, const DescribeHealthCheckAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHealthCheckAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeHealthChecksResult> DescribeHealthChecksOutcome;
			typedef std::future<DescribeHealthChecksOutcome> DescribeHealthChecksOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeHealthChecksRequest&, const DescribeHealthChecksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHealthChecksAsyncHandler;
			typedef Outcome<Error, Model::DescribeQosCarsResult> DescribeQosCarsOutcome;
			typedef std::future<DescribeQosCarsOutcome> DescribeQosCarsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeQosCarsRequest&, const DescribeQosCarsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQosCarsAsyncHandler;
			typedef Outcome<Error, Model::DescribeQosPoliciesResult> DescribeQosPoliciesOutcome;
			typedef std::future<DescribeQosPoliciesOutcome> DescribeQosPoliciesOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeQosPoliciesRequest&, const DescribeQosPoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQosPoliciesAsyncHandler;
			typedef Outcome<Error, Model::DescribeQosesResult> DescribeQosesOutcome;
			typedef std::future<DescribeQosesOutcome> DescribeQosesOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeQosesRequest&, const DescribeQosesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQosesAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRouteDistributionStrategiesResult> DescribeRouteDistributionStrategiesOutcome;
			typedef std::future<DescribeRouteDistributionStrategiesOutcome> DescribeRouteDistributionStrategiesOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeRouteDistributionStrategiesRequest&, const DescribeRouteDistributionStrategiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRouteDistributionStrategiesAsyncHandler;
			typedef Outcome<Error, Model::DescribeSAGDeviceInfoResult> DescribeSAGDeviceInfoOutcome;
			typedef std::future<DescribeSAGDeviceInfoOutcome> DescribeSAGDeviceInfoOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSAGDeviceInfoRequest&, const DescribeSAGDeviceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSAGDeviceInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeSagCurrentDnsResult> DescribeSagCurrentDnsOutcome;
			typedef std::future<DescribeSagCurrentDnsOutcome> DescribeSagCurrentDnsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSagCurrentDnsRequest&, const DescribeSagCurrentDnsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSagCurrentDnsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSagDropTopNResult> DescribeSagDropTopNOutcome;
			typedef std::future<DescribeSagDropTopNOutcome> DescribeSagDropTopNOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSagDropTopNRequest&, const DescribeSagDropTopNOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSagDropTopNAsyncHandler;
			typedef Outcome<Error, Model::DescribeSagExpressConnectInterfaceListResult> DescribeSagExpressConnectInterfaceListOutcome;
			typedef std::future<DescribeSagExpressConnectInterfaceListOutcome> DescribeSagExpressConnectInterfaceListOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSagExpressConnectInterfaceListRequest&, const DescribeSagExpressConnectInterfaceListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSagExpressConnectInterfaceListAsyncHandler;
			typedef Outcome<Error, Model::DescribeSagGlobalRouteProtocolResult> DescribeSagGlobalRouteProtocolOutcome;
			typedef std::future<DescribeSagGlobalRouteProtocolOutcome> DescribeSagGlobalRouteProtocolOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSagGlobalRouteProtocolRequest&, const DescribeSagGlobalRouteProtocolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSagGlobalRouteProtocolAsyncHandler;
			typedef Outcome<Error, Model::DescribeSagHaResult> DescribeSagHaOutcome;
			typedef std::future<DescribeSagHaOutcome> DescribeSagHaOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSagHaRequest&, const DescribeSagHaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSagHaAsyncHandler;
			typedef Outcome<Error, Model::DescribeSagLanListResult> DescribeSagLanListOutcome;
			typedef std::future<DescribeSagLanListOutcome> DescribeSagLanListOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSagLanListRequest&, const DescribeSagLanListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSagLanListAsyncHandler;
			typedef Outcome<Error, Model::DescribeSagManagementPortResult> DescribeSagManagementPortOutcome;
			typedef std::future<DescribeSagManagementPortOutcome> DescribeSagManagementPortOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSagManagementPortRequest&, const DescribeSagManagementPortOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSagManagementPortAsyncHandler;
			typedef Outcome<Error, Model::DescribeSagOnlineClientStatisticsResult> DescribeSagOnlineClientStatisticsOutcome;
			typedef std::future<DescribeSagOnlineClientStatisticsOutcome> DescribeSagOnlineClientStatisticsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSagOnlineClientStatisticsRequest&, const DescribeSagOnlineClientStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSagOnlineClientStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSagPortListResult> DescribeSagPortListOutcome;
			typedef std::future<DescribeSagPortListOutcome> DescribeSagPortListOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSagPortListRequest&, const DescribeSagPortListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSagPortListAsyncHandler;
			typedef Outcome<Error, Model::DescribeSagPortRouteProtocolListResult> DescribeSagPortRouteProtocolListOutcome;
			typedef std::future<DescribeSagPortRouteProtocolListOutcome> DescribeSagPortRouteProtocolListOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSagPortRouteProtocolListRequest&, const DescribeSagPortRouteProtocolListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSagPortRouteProtocolListAsyncHandler;
			typedef Outcome<Error, Model::DescribeSagRemoteAccessResult> DescribeSagRemoteAccessOutcome;
			typedef std::future<DescribeSagRemoteAccessOutcome> DescribeSagRemoteAccessOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSagRemoteAccessRequest&, const DescribeSagRemoteAccessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSagRemoteAccessAsyncHandler;
			typedef Outcome<Error, Model::DescribeSagRouteListResult> DescribeSagRouteListOutcome;
			typedef std::future<DescribeSagRouteListOutcome> DescribeSagRouteListOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSagRouteListRequest&, const DescribeSagRouteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSagRouteListAsyncHandler;
			typedef Outcome<Error, Model::DescribeSagRouteProtocolBgpResult> DescribeSagRouteProtocolBgpOutcome;
			typedef std::future<DescribeSagRouteProtocolBgpOutcome> DescribeSagRouteProtocolBgpOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSagRouteProtocolBgpRequest&, const DescribeSagRouteProtocolBgpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSagRouteProtocolBgpAsyncHandler;
			typedef Outcome<Error, Model::DescribeSagRouteProtocolOspfResult> DescribeSagRouteProtocolOspfOutcome;
			typedef std::future<DescribeSagRouteProtocolOspfOutcome> DescribeSagRouteProtocolOspfOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSagRouteProtocolOspfRequest&, const DescribeSagRouteProtocolOspfOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSagRouteProtocolOspfAsyncHandler;
			typedef Outcome<Error, Model::DescribeSagStaticRouteListResult> DescribeSagStaticRouteListOutcome;
			typedef std::future<DescribeSagStaticRouteListOutcome> DescribeSagStaticRouteListOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSagStaticRouteListRequest&, const DescribeSagStaticRouteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSagStaticRouteListAsyncHandler;
			typedef Outcome<Error, Model::DescribeSagTrafficTopNResult> DescribeSagTrafficTopNOutcome;
			typedef std::future<DescribeSagTrafficTopNOutcome> DescribeSagTrafficTopNOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSagTrafficTopNRequest&, const DescribeSagTrafficTopNOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSagTrafficTopNAsyncHandler;
			typedef Outcome<Error, Model::DescribeSagUserDnsResult> DescribeSagUserDnsOutcome;
			typedef std::future<DescribeSagUserDnsOutcome> DescribeSagUserDnsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSagUserDnsRequest&, const DescribeSagUserDnsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSagUserDnsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSagVbrRelationsResult> DescribeSagVbrRelationsOutcome;
			typedef std::future<DescribeSagVbrRelationsOutcome> DescribeSagVbrRelationsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSagVbrRelationsRequest&, const DescribeSagVbrRelationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSagVbrRelationsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSagWan4GResult> DescribeSagWan4GOutcome;
			typedef std::future<DescribeSagWan4GOutcome> DescribeSagWan4GOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSagWan4GRequest&, const DescribeSagWan4GOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSagWan4GAsyncHandler;
			typedef Outcome<Error, Model::DescribeSagWanListResult> DescribeSagWanListOutcome;
			typedef std::future<DescribeSagWanListOutcome> DescribeSagWanListOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSagWanListRequest&, const DescribeSagWanListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSagWanListAsyncHandler;
			typedef Outcome<Error, Model::DescribeSagWanSnatResult> DescribeSagWanSnatOutcome;
			typedef std::future<DescribeSagWanSnatOutcome> DescribeSagWanSnatOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSagWanSnatRequest&, const DescribeSagWanSnatOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSagWanSnatAsyncHandler;
			typedef Outcome<Error, Model::DescribeSagWifiResult> DescribeSagWifiOutcome;
			typedef std::future<DescribeSagWifiOutcome> DescribeSagWifiOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSagWifiRequest&, const DescribeSagWifiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSagWifiAsyncHandler;
			typedef Outcome<Error, Model::DescribeSmartAccessGatewayAttributeResult> DescribeSmartAccessGatewayAttributeOutcome;
			typedef std::future<DescribeSmartAccessGatewayAttributeOutcome> DescribeSmartAccessGatewayAttributeOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSmartAccessGatewayAttributeRequest&, const DescribeSmartAccessGatewayAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmartAccessGatewayAttributeAsyncHandler;
			typedef Outcome<Error, Model::DescribeSmartAccessGatewayClientUsersResult> DescribeSmartAccessGatewayClientUsersOutcome;
			typedef std::future<DescribeSmartAccessGatewayClientUsersOutcome> DescribeSmartAccessGatewayClientUsersOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSmartAccessGatewayClientUsersRequest&, const DescribeSmartAccessGatewayClientUsersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmartAccessGatewayClientUsersAsyncHandler;
			typedef Outcome<Error, Model::DescribeSmartAccessGatewayHaResult> DescribeSmartAccessGatewayHaOutcome;
			typedef std::future<DescribeSmartAccessGatewayHaOutcome> DescribeSmartAccessGatewayHaOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSmartAccessGatewayHaRequest&, const DescribeSmartAccessGatewayHaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmartAccessGatewayHaAsyncHandler;
			typedef Outcome<Error, Model::DescribeSmartAccessGatewayVersionsResult> DescribeSmartAccessGatewayVersionsOutcome;
			typedef std::future<DescribeSmartAccessGatewayVersionsOutcome> DescribeSmartAccessGatewayVersionsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSmartAccessGatewayVersionsRequest&, const DescribeSmartAccessGatewayVersionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmartAccessGatewayVersionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSmartAccessGatewaysResult> DescribeSmartAccessGatewaysOutcome;
			typedef std::future<DescribeSmartAccessGatewaysOutcome> DescribeSmartAccessGatewaysOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSmartAccessGatewaysRequest&, const DescribeSmartAccessGatewaysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSmartAccessGatewaysAsyncHandler;
			typedef Outcome<Error, Model::DescribeSnatEntriesResult> DescribeSnatEntriesOutcome;
			typedef std::future<DescribeSnatEntriesOutcome> DescribeSnatEntriesOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeSnatEntriesRequest&, const DescribeSnatEntriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSnatEntriesAsyncHandler;
			typedef Outcome<Error, Model::DescribeUnbindFlowLogSagsResult> DescribeUnbindFlowLogSagsOutcome;
			typedef std::future<DescribeUnbindFlowLogSagsOutcome> DescribeUnbindFlowLogSagsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeUnbindFlowLogSagsRequest&, const DescribeUnbindFlowLogSagsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUnbindFlowLogSagsAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserFlowStatisticsResult> DescribeUserFlowStatisticsOutcome;
			typedef std::future<DescribeUserFlowStatisticsOutcome> DescribeUserFlowStatisticsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeUserFlowStatisticsRequest&, const DescribeUserFlowStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserFlowStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserOnlineClientStatisticsResult> DescribeUserOnlineClientStatisticsOutcome;
			typedef std::future<DescribeUserOnlineClientStatisticsOutcome> DescribeUserOnlineClientStatisticsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeUserOnlineClientStatisticsRequest&, const DescribeUserOnlineClientStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserOnlineClientStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserOnlineClientsResult> DescribeUserOnlineClientsOutcome;
			typedef std::future<DescribeUserOnlineClientsOutcome> DescribeUserOnlineClientsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DescribeUserOnlineClientsRequest&, const DescribeUserOnlineClientsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserOnlineClientsAsyncHandler;
			typedef Outcome<Error, Model::DiagnoseSmartAccessGatewayResult> DiagnoseSmartAccessGatewayOutcome;
			typedef std::future<DiagnoseSmartAccessGatewayOutcome> DiagnoseSmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DiagnoseSmartAccessGatewayRequest&, const DiagnoseSmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DiagnoseSmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::DisableSmartAGDpiMonitorResult> DisableSmartAGDpiMonitorOutcome;
			typedef std::future<DisableSmartAGDpiMonitorOutcome> DisableSmartAGDpiMonitorOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DisableSmartAGDpiMonitorRequest&, const DisableSmartAGDpiMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableSmartAGDpiMonitorAsyncHandler;
			typedef Outcome<Error, Model::DisableSmartAccessGatewayUserResult> DisableSmartAccessGatewayUserOutcome;
			typedef std::future<DisableSmartAccessGatewayUserOutcome> DisableSmartAccessGatewayUserOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DisableSmartAccessGatewayUserRequest&, const DisableSmartAccessGatewayUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableSmartAccessGatewayUserAsyncHandler;
			typedef Outcome<Error, Model::DisassociateACLResult> DisassociateACLOutcome;
			typedef std::future<DisassociateACLOutcome> DisassociateACLOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DisassociateACLRequest&, const DisassociateACLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateACLAsyncHandler;
			typedef Outcome<Error, Model::DisassociateFlowLogResult> DisassociateFlowLogOutcome;
			typedef std::future<DisassociateFlowLogOutcome> DisassociateFlowLogOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DisassociateFlowLogRequest&, const DisassociateFlowLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateFlowLogAsyncHandler;
			typedef Outcome<Error, Model::DisassociateQosResult> DisassociateQosOutcome;
			typedef std::future<DisassociateQosOutcome> DisassociateQosOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DisassociateQosRequest&, const DisassociateQosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisassociateQosAsyncHandler;
			typedef Outcome<Error, Model::DiscribeSmartAccessGatewayDiagnosisReportResult> DiscribeSmartAccessGatewayDiagnosisReportOutcome;
			typedef std::future<DiscribeSmartAccessGatewayDiagnosisReportOutcome> DiscribeSmartAccessGatewayDiagnosisReportOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DiscribeSmartAccessGatewayDiagnosisReportRequest&, const DiscribeSmartAccessGatewayDiagnosisReportOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DiscribeSmartAccessGatewayDiagnosisReportAsyncHandler;
			typedef Outcome<Error, Model::DowngradeSmartAccessGatewayResult> DowngradeSmartAccessGatewayOutcome;
			typedef std::future<DowngradeSmartAccessGatewayOutcome> DowngradeSmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DowngradeSmartAccessGatewayRequest&, const DowngradeSmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DowngradeSmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::DowngradeSmartAccessGatewaySoftwareResult> DowngradeSmartAccessGatewaySoftwareOutcome;
			typedef std::future<DowngradeSmartAccessGatewaySoftwareOutcome> DowngradeSmartAccessGatewaySoftwareOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::DowngradeSmartAccessGatewaySoftwareRequest&, const DowngradeSmartAccessGatewaySoftwareOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DowngradeSmartAccessGatewaySoftwareAsyncHandler;
			typedef Outcome<Error, Model::EnableSmartAGDpiMonitorResult> EnableSmartAGDpiMonitorOutcome;
			typedef std::future<EnableSmartAGDpiMonitorOutcome> EnableSmartAGDpiMonitorOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::EnableSmartAGDpiMonitorRequest&, const EnableSmartAGDpiMonitorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableSmartAGDpiMonitorAsyncHandler;
			typedef Outcome<Error, Model::EnableSmartAccessGatewayUserResult> EnableSmartAccessGatewayUserOutcome;
			typedef std::future<EnableSmartAccessGatewayUserOutcome> EnableSmartAccessGatewayUserOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::EnableSmartAccessGatewayUserRequest&, const EnableSmartAccessGatewayUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableSmartAccessGatewayUserAsyncHandler;
			typedef Outcome<Error, Model::GetAclAttributeResult> GetAclAttributeOutcome;
			typedef std::future<GetAclAttributeOutcome> GetAclAttributeOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::GetAclAttributeRequest&, const GetAclAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAclAttributeAsyncHandler;
			typedef Outcome<Error, Model::GetCloudConnectNetworkUseLimitResult> GetCloudConnectNetworkUseLimitOutcome;
			typedef std::future<GetCloudConnectNetworkUseLimitOutcome> GetCloudConnectNetworkUseLimitOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::GetCloudConnectNetworkUseLimitRequest&, const GetCloudConnectNetworkUseLimitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetCloudConnectNetworkUseLimitAsyncHandler;
			typedef Outcome<Error, Model::GetQosAttributeResult> GetQosAttributeOutcome;
			typedef std::future<GetQosAttributeOutcome> GetQosAttributeOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::GetQosAttributeRequest&, const GetQosAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetQosAttributeAsyncHandler;
			typedef Outcome<Error, Model::GetSmartAGDpiAttributeResult> GetSmartAGDpiAttributeOutcome;
			typedef std::future<GetSmartAGDpiAttributeOutcome> GetSmartAGDpiAttributeOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::GetSmartAGDpiAttributeRequest&, const GetSmartAGDpiAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSmartAGDpiAttributeAsyncHandler;
			typedef Outcome<Error, Model::GetSmartAccessGatewayUseLimitResult> GetSmartAccessGatewayUseLimitOutcome;
			typedef std::future<GetSmartAccessGatewayUseLimitOutcome> GetSmartAccessGatewayUseLimitOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::GetSmartAccessGatewayUseLimitRequest&, const GetSmartAccessGatewayUseLimitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetSmartAccessGatewayUseLimitAsyncHandler;
			typedef Outcome<Error, Model::GrantInstanceToCbnResult> GrantInstanceToCbnOutcome;
			typedef std::future<GrantInstanceToCbnOutcome> GrantInstanceToCbnOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::GrantInstanceToCbnRequest&, const GrantInstanceToCbnOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantInstanceToCbnAsyncHandler;
			typedef Outcome<Error, Model::GrantSagInstanceToCcnResult> GrantSagInstanceToCcnOutcome;
			typedef std::future<GrantSagInstanceToCcnOutcome> GrantSagInstanceToCcnOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::GrantSagInstanceToCcnRequest&, const GrantSagInstanceToCcnOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantSagInstanceToCcnAsyncHandler;
			typedef Outcome<Error, Model::GrantSagInstanceToVbrResult> GrantSagInstanceToVbrOutcome;
			typedef std::future<GrantSagInstanceToVbrOutcome> GrantSagInstanceToVbrOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::GrantSagInstanceToVbrRequest&, const GrantSagInstanceToVbrOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantSagInstanceToVbrAsyncHandler;
			typedef Outcome<Error, Model::KickOutClientsResult> KickOutClientsOutcome;
			typedef std::future<KickOutClientsOutcome> KickOutClientsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::KickOutClientsRequest&, const KickOutClientsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> KickOutClientsAsyncHandler;
			typedef Outcome<Error, Model::ListAccessPointNetworkQualitiesResult> ListAccessPointNetworkQualitiesOutcome;
			typedef std::future<ListAccessPointNetworkQualitiesOutcome> ListAccessPointNetworkQualitiesOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ListAccessPointNetworkQualitiesRequest&, const ListAccessPointNetworkQualitiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAccessPointNetworkQualitiesAsyncHandler;
			typedef Outcome<Error, Model::ListAccessPointsResult> ListAccessPointsOutcome;
			typedef std::future<ListAccessPointsOutcome> ListAccessPointsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ListAccessPointsRequest&, const ListAccessPointsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAccessPointsAsyncHandler;
			typedef Outcome<Error, Model::ListDpiConfigErrorResult> ListDpiConfigErrorOutcome;
			typedef std::future<ListDpiConfigErrorOutcome> ListDpiConfigErrorOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ListDpiConfigErrorRequest&, const ListDpiConfigErrorOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDpiConfigErrorAsyncHandler;
			typedef Outcome<Error, Model::ListDpiGroupsResult> ListDpiGroupsOutcome;
			typedef std::future<ListDpiGroupsOutcome> ListDpiGroupsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ListDpiGroupsRequest&, const ListDpiGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDpiGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListDpiSignaturesResult> ListDpiSignaturesOutcome;
			typedef std::future<ListDpiSignaturesOutcome> ListDpiSignaturesOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ListDpiSignaturesRequest&, const ListDpiSignaturesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListDpiSignaturesAsyncHandler;
			typedef Outcome<Error, Model::ListEnterpriseCodeResult> ListEnterpriseCodeOutcome;
			typedef std::future<ListEnterpriseCodeOutcome> ListEnterpriseCodeOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ListEnterpriseCodeRequest&, const ListEnterpriseCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListEnterpriseCodeAsyncHandler;
			typedef Outcome<Error, Model::ListSmartAGApiUnsupportedFeatureResult> ListSmartAGApiUnsupportedFeatureOutcome;
			typedef std::future<ListSmartAGApiUnsupportedFeatureOutcome> ListSmartAGApiUnsupportedFeatureOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ListSmartAGApiUnsupportedFeatureRequest&, const ListSmartAGApiUnsupportedFeatureOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSmartAGApiUnsupportedFeatureAsyncHandler;
			typedef Outcome<Error, Model::ListSmartAGByAccessPointResult> ListSmartAGByAccessPointOutcome;
			typedef std::future<ListSmartAGByAccessPointOutcome> ListSmartAGByAccessPointOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ListSmartAGByAccessPointRequest&, const ListSmartAGByAccessPointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListSmartAGByAccessPointAsyncHandler;
			typedef Outcome<Error, Model::ModifyACLResult> ModifyACLOutcome;
			typedef std::future<ModifyACLOutcome> ModifyACLOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifyACLRequest&, const ModifyACLOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyACLAsyncHandler;
			typedef Outcome<Error, Model::ModifyACLRuleResult> ModifyACLRuleOutcome;
			typedef std::future<ModifyACLRuleOutcome> ModifyACLRuleOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifyACLRuleRequest&, const ModifyACLRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyACLRuleAsyncHandler;
			typedef Outcome<Error, Model::ModifyClientUserDNSResult> ModifyClientUserDNSOutcome;
			typedef std::future<ModifyClientUserDNSOutcome> ModifyClientUserDNSOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifyClientUserDNSRequest&, const ModifyClientUserDNSOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClientUserDNSAsyncHandler;
			typedef Outcome<Error, Model::ModifyCloudConnectNetworkResult> ModifyCloudConnectNetworkOutcome;
			typedef std::future<ModifyCloudConnectNetworkOutcome> ModifyCloudConnectNetworkOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifyCloudConnectNetworkRequest&, const ModifyCloudConnectNetworkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudConnectNetworkAsyncHandler;
			typedef Outcome<Error, Model::ModifyDeviceAutoUpgradePolicyResult> ModifyDeviceAutoUpgradePolicyOutcome;
			typedef std::future<ModifyDeviceAutoUpgradePolicyOutcome> ModifyDeviceAutoUpgradePolicyOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifyDeviceAutoUpgradePolicyRequest&, const ModifyDeviceAutoUpgradePolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDeviceAutoUpgradePolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifyFlowLogAttributeResult> ModifyFlowLogAttributeOutcome;
			typedef std::future<ModifyFlowLogAttributeOutcome> ModifyFlowLogAttributeOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifyFlowLogAttributeRequest&, const ModifyFlowLogAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFlowLogAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyHealthCheckResult> ModifyHealthCheckOutcome;
			typedef std::future<ModifyHealthCheckOutcome> ModifyHealthCheckOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifyHealthCheckRequest&, const ModifyHealthCheckOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHealthCheckAsyncHandler;
			typedef Outcome<Error, Model::ModifyQosResult> ModifyQosOutcome;
			typedef std::future<ModifyQosOutcome> ModifyQosOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifyQosRequest&, const ModifyQosOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyQosAsyncHandler;
			typedef Outcome<Error, Model::ModifyQosCarResult> ModifyQosCarOutcome;
			typedef std::future<ModifyQosCarOutcome> ModifyQosCarOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifyQosCarRequest&, const ModifyQosCarOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyQosCarAsyncHandler;
			typedef Outcome<Error, Model::ModifyQosPolicyResult> ModifyQosPolicyOutcome;
			typedef std::future<ModifyQosPolicyOutcome> ModifyQosPolicyOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifyQosPolicyRequest&, const ModifyQosPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyQosPolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifyRouteDistributionStrategyResult> ModifyRouteDistributionStrategyOutcome;
			typedef std::future<ModifyRouteDistributionStrategyOutcome> ModifyRouteDistributionStrategyOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifyRouteDistributionStrategyRequest&, const ModifyRouteDistributionStrategyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRouteDistributionStrategyAsyncHandler;
			typedef Outcome<Error, Model::ModifySAGAdminPasswordResult> ModifySAGAdminPasswordOutcome;
			typedef std::future<ModifySAGAdminPasswordOutcome> ModifySAGAdminPasswordOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifySAGAdminPasswordRequest&, const ModifySAGAdminPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySAGAdminPasswordAsyncHandler;
			typedef Outcome<Error, Model::ModifySagExpressConnectInterfaceResult> ModifySagExpressConnectInterfaceOutcome;
			typedef std::future<ModifySagExpressConnectInterfaceOutcome> ModifySagExpressConnectInterfaceOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifySagExpressConnectInterfaceRequest&, const ModifySagExpressConnectInterfaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySagExpressConnectInterfaceAsyncHandler;
			typedef Outcome<Error, Model::ModifySagGlobalRouteProtocolResult> ModifySagGlobalRouteProtocolOutcome;
			typedef std::future<ModifySagGlobalRouteProtocolOutcome> ModifySagGlobalRouteProtocolOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifySagGlobalRouteProtocolRequest&, const ModifySagGlobalRouteProtocolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySagGlobalRouteProtocolAsyncHandler;
			typedef Outcome<Error, Model::ModifySagHaResult> ModifySagHaOutcome;
			typedef std::future<ModifySagHaOutcome> ModifySagHaOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifySagHaRequest&, const ModifySagHaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySagHaAsyncHandler;
			typedef Outcome<Error, Model::ModifySagLanResult> ModifySagLanOutcome;
			typedef std::future<ModifySagLanOutcome> ModifySagLanOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifySagLanRequest&, const ModifySagLanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySagLanAsyncHandler;
			typedef Outcome<Error, Model::ModifySagManagementPortResult> ModifySagManagementPortOutcome;
			typedef std::future<ModifySagManagementPortOutcome> ModifySagManagementPortOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifySagManagementPortRequest&, const ModifySagManagementPortOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySagManagementPortAsyncHandler;
			typedef Outcome<Error, Model::ModifySagPortRoleResult> ModifySagPortRoleOutcome;
			typedef std::future<ModifySagPortRoleOutcome> ModifySagPortRoleOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifySagPortRoleRequest&, const ModifySagPortRoleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySagPortRoleAsyncHandler;
			typedef Outcome<Error, Model::ModifySagPortRouteProtocolResult> ModifySagPortRouteProtocolOutcome;
			typedef std::future<ModifySagPortRouteProtocolOutcome> ModifySagPortRouteProtocolOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifySagPortRouteProtocolRequest&, const ModifySagPortRouteProtocolOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySagPortRouteProtocolAsyncHandler;
			typedef Outcome<Error, Model::ModifySagRemoteAccessResult> ModifySagRemoteAccessOutcome;
			typedef std::future<ModifySagRemoteAccessOutcome> ModifySagRemoteAccessOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifySagRemoteAccessRequest&, const ModifySagRemoteAccessOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySagRemoteAccessAsyncHandler;
			typedef Outcome<Error, Model::ModifySagRouteProtocolBgpResult> ModifySagRouteProtocolBgpOutcome;
			typedef std::future<ModifySagRouteProtocolBgpOutcome> ModifySagRouteProtocolBgpOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifySagRouteProtocolBgpRequest&, const ModifySagRouteProtocolBgpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySagRouteProtocolBgpAsyncHandler;
			typedef Outcome<Error, Model::ModifySagRouteProtocolOspfResult> ModifySagRouteProtocolOspfOutcome;
			typedef std::future<ModifySagRouteProtocolOspfOutcome> ModifySagRouteProtocolOspfOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifySagRouteProtocolOspfRequest&, const ModifySagRouteProtocolOspfOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySagRouteProtocolOspfAsyncHandler;
			typedef Outcome<Error, Model::ModifySagStaticRouteResult> ModifySagStaticRouteOutcome;
			typedef std::future<ModifySagStaticRouteOutcome> ModifySagStaticRouteOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifySagStaticRouteRequest&, const ModifySagStaticRouteOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySagStaticRouteAsyncHandler;
			typedef Outcome<Error, Model::ModifySagUserDnsResult> ModifySagUserDnsOutcome;
			typedef std::future<ModifySagUserDnsOutcome> ModifySagUserDnsOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifySagUserDnsRequest&, const ModifySagUserDnsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySagUserDnsAsyncHandler;
			typedef Outcome<Error, Model::ModifySagWanResult> ModifySagWanOutcome;
			typedef std::future<ModifySagWanOutcome> ModifySagWanOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifySagWanRequest&, const ModifySagWanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySagWanAsyncHandler;
			typedef Outcome<Error, Model::ModifySagWanSnatResult> ModifySagWanSnatOutcome;
			typedef std::future<ModifySagWanSnatOutcome> ModifySagWanSnatOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifySagWanSnatRequest&, const ModifySagWanSnatOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySagWanSnatAsyncHandler;
			typedef Outcome<Error, Model::ModifySagWifiResult> ModifySagWifiOutcome;
			typedef std::future<ModifySagWifiOutcome> ModifySagWifiOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifySagWifiRequest&, const ModifySagWifiOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySagWifiAsyncHandler;
			typedef Outcome<Error, Model::ModifySmartAccessGatewayResult> ModifySmartAccessGatewayOutcome;
			typedef std::future<ModifySmartAccessGatewayOutcome> ModifySmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifySmartAccessGatewayRequest&, const ModifySmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::ModifySmartAccessGatewayClientUserResult> ModifySmartAccessGatewayClientUserOutcome;
			typedef std::future<ModifySmartAccessGatewayClientUserOutcome> ModifySmartAccessGatewayClientUserOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifySmartAccessGatewayClientUserRequest&, const ModifySmartAccessGatewayClientUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySmartAccessGatewayClientUserAsyncHandler;
			typedef Outcome<Error, Model::ModifySmartAccessGatewayUpBandwidthResult> ModifySmartAccessGatewayUpBandwidthOutcome;
			typedef std::future<ModifySmartAccessGatewayUpBandwidthOutcome> ModifySmartAccessGatewayUpBandwidthOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ModifySmartAccessGatewayUpBandwidthRequest&, const ModifySmartAccessGatewayUpBandwidthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySmartAccessGatewayUpBandwidthAsyncHandler;
			typedef Outcome<Error, Model::MoveResourceGroupResult> MoveResourceGroupOutcome;
			typedef std::future<MoveResourceGroupOutcome> MoveResourceGroupOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::MoveResourceGroupRequest&, const MoveResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MoveResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::ProbeAccessPointNetworkQualityResult> ProbeAccessPointNetworkQualityOutcome;
			typedef std::future<ProbeAccessPointNetworkQualityOutcome> ProbeAccessPointNetworkQualityOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ProbeAccessPointNetworkQualityRequest&, const ProbeAccessPointNetworkQualityOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ProbeAccessPointNetworkQualityAsyncHandler;
			typedef Outcome<Error, Model::RebootSmartAccessGatewayResult> RebootSmartAccessGatewayOutcome;
			typedef std::future<RebootSmartAccessGatewayOutcome> RebootSmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::RebootSmartAccessGatewayRequest&, const RebootSmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RebootSmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::ResetSmartAccessGatewayClientUserPasswordResult> ResetSmartAccessGatewayClientUserPasswordOutcome;
			typedef std::future<ResetSmartAccessGatewayClientUserPasswordOutcome> ResetSmartAccessGatewayClientUserPasswordOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::ResetSmartAccessGatewayClientUserPasswordRequest&, const ResetSmartAccessGatewayClientUserPasswordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ResetSmartAccessGatewayClientUserPasswordAsyncHandler;
			typedef Outcome<Error, Model::RevokeInstanceFromCbnResult> RevokeInstanceFromCbnOutcome;
			typedef std::future<RevokeInstanceFromCbnOutcome> RevokeInstanceFromCbnOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::RevokeInstanceFromCbnRequest&, const RevokeInstanceFromCbnOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeInstanceFromCbnAsyncHandler;
			typedef Outcome<Error, Model::RevokeInstanceFromVbrResult> RevokeInstanceFromVbrOutcome;
			typedef std::future<RevokeInstanceFromVbrOutcome> RevokeInstanceFromVbrOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::RevokeInstanceFromVbrRequest&, const RevokeInstanceFromVbrOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeInstanceFromVbrAsyncHandler;
			typedef Outcome<Error, Model::RevokeSagInstanceFromCcnResult> RevokeSagInstanceFromCcnOutcome;
			typedef std::future<RevokeSagInstanceFromCcnOutcome> RevokeSagInstanceFromCcnOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::RevokeSagInstanceFromCcnRequest&, const RevokeSagInstanceFromCcnOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokeSagInstanceFromCcnAsyncHandler;
			typedef Outcome<Error, Model::RoamClientUserResult> RoamClientUserOutcome;
			typedef std::future<RoamClientUserOutcome> RoamClientUserOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::RoamClientUserRequest&, const RoamClientUserOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RoamClientUserAsyncHandler;
			typedef Outcome<Error, Model::SynchronizeSmartAGWebConfigResult> SynchronizeSmartAGWebConfigOutcome;
			typedef std::future<SynchronizeSmartAGWebConfigOutcome> SynchronizeSmartAGWebConfigOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::SynchronizeSmartAGWebConfigRequest&, const SynchronizeSmartAGWebConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SynchronizeSmartAGWebConfigAsyncHandler;
			typedef Outcome<Error, Model::UnbindSerialNumberResult> UnbindSerialNumberOutcome;
			typedef std::future<UnbindSerialNumberOutcome> UnbindSerialNumberOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::UnbindSerialNumberRequest&, const UnbindSerialNumberOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindSerialNumberAsyncHandler;
			typedef Outcome<Error, Model::UnbindSmartAccessGatewayResult> UnbindSmartAccessGatewayOutcome;
			typedef std::future<UnbindSmartAccessGatewayOutcome> UnbindSmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::UnbindSmartAccessGatewayRequest&, const UnbindSmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindSmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::UnbindVbrResult> UnbindVbrOutcome;
			typedef std::future<UnbindVbrOutcome> UnbindVbrOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::UnbindVbrRequest&, const UnbindVbrOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnbindVbrAsyncHandler;
			typedef Outcome<Error, Model::UnlockSmartAccessGatewayResult> UnlockSmartAccessGatewayOutcome;
			typedef std::future<UnlockSmartAccessGatewayOutcome> UnlockSmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::UnlockSmartAccessGatewayRequest&, const UnlockSmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UnlockSmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::UpdateEnterpriseCodeResult> UpdateEnterpriseCodeOutcome;
			typedef std::future<UpdateEnterpriseCodeOutcome> UpdateEnterpriseCodeOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::UpdateEnterpriseCodeRequest&, const UpdateEnterpriseCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateEnterpriseCodeAsyncHandler;
			typedef Outcome<Error, Model::UpdateSmartAGAccessPointResult> UpdateSmartAGAccessPointOutcome;
			typedef std::future<UpdateSmartAGAccessPointOutcome> UpdateSmartAGAccessPointOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::UpdateSmartAGAccessPointRequest&, const UpdateSmartAGAccessPointOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSmartAGAccessPointAsyncHandler;
			typedef Outcome<Error, Model::UpdateSmartAGDpiAttributeResult> UpdateSmartAGDpiAttributeOutcome;
			typedef std::future<UpdateSmartAGDpiAttributeOutcome> UpdateSmartAGDpiAttributeOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::UpdateSmartAGDpiAttributeRequest&, const UpdateSmartAGDpiAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSmartAGDpiAttributeAsyncHandler;
			typedef Outcome<Error, Model::UpdateSmartAGEnterpriseCodeResult> UpdateSmartAGEnterpriseCodeOutcome;
			typedef std::future<UpdateSmartAGEnterpriseCodeOutcome> UpdateSmartAGEnterpriseCodeOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::UpdateSmartAGEnterpriseCodeRequest&, const UpdateSmartAGEnterpriseCodeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSmartAGEnterpriseCodeAsyncHandler;
			typedef Outcome<Error, Model::UpdateSmartAccessGatewayVersionResult> UpdateSmartAccessGatewayVersionOutcome;
			typedef std::future<UpdateSmartAccessGatewayVersionOutcome> UpdateSmartAccessGatewayVersionOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::UpdateSmartAccessGatewayVersionRequest&, const UpdateSmartAccessGatewayVersionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateSmartAccessGatewayVersionAsyncHandler;
			typedef Outcome<Error, Model::UpgradeSmartAccessGatewayResult> UpgradeSmartAccessGatewayOutcome;
			typedef std::future<UpgradeSmartAccessGatewayOutcome> UpgradeSmartAccessGatewayOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::UpgradeSmartAccessGatewayRequest&, const UpgradeSmartAccessGatewayOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeSmartAccessGatewayAsyncHandler;
			typedef Outcome<Error, Model::UpgradeSmartAccessGatewaySoftwareResult> UpgradeSmartAccessGatewaySoftwareOutcome;
			typedef std::future<UpgradeSmartAccessGatewaySoftwareOutcome> UpgradeSmartAccessGatewaySoftwareOutcomeCallable;
			typedef std::function<void(const SmartagClient*, const Model::UpgradeSmartAccessGatewaySoftwareRequest&, const UpgradeSmartAccessGatewaySoftwareOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeSmartAccessGatewaySoftwareAsyncHandler;

			SmartagClient(const Credentials &credentials, const ClientConfiguration &configuration);
			SmartagClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			SmartagClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~SmartagClient();
			ActivateSmartAccessGatewayOutcome activateSmartAccessGateway(const Model::ActivateSmartAccessGatewayRequest &request)const;
			void activateSmartAccessGatewayAsync(const Model::ActivateSmartAccessGatewayRequest& request, const ActivateSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ActivateSmartAccessGatewayOutcomeCallable activateSmartAccessGatewayCallable(const Model::ActivateSmartAccessGatewayRequest& request) const;
			ActiveFlowLogOutcome activeFlowLog(const Model::ActiveFlowLogRequest &request)const;
			void activeFlowLogAsync(const Model::ActiveFlowLogRequest& request, const ActiveFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ActiveFlowLogOutcomeCallable activeFlowLogCallable(const Model::ActiveFlowLogRequest& request) const;
			AddACLRuleOutcome addACLRule(const Model::AddACLRuleRequest &request)const;
			void addACLRuleAsync(const Model::AddACLRuleRequest& request, const AddACLRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddACLRuleOutcomeCallable addACLRuleCallable(const Model::AddACLRuleRequest& request) const;
			AddDnatEntryOutcome addDnatEntry(const Model::AddDnatEntryRequest &request)const;
			void addDnatEntryAsync(const Model::AddDnatEntryRequest& request, const AddDnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddDnatEntryOutcomeCallable addDnatEntryCallable(const Model::AddDnatEntryRequest& request) const;
			AddSnatEntryOutcome addSnatEntry(const Model::AddSnatEntryRequest &request)const;
			void addSnatEntryAsync(const Model::AddSnatEntryRequest& request, const AddSnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddSnatEntryOutcomeCallable addSnatEntryCallable(const Model::AddSnatEntryRequest& request) const;
			AssociateACLOutcome associateACL(const Model::AssociateACLRequest &request)const;
			void associateACLAsync(const Model::AssociateACLRequest& request, const AssociateACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateACLOutcomeCallable associateACLCallable(const Model::AssociateACLRequest& request) const;
			AssociateFlowLogOutcome associateFlowLog(const Model::AssociateFlowLogRequest &request)const;
			void associateFlowLogAsync(const Model::AssociateFlowLogRequest& request, const AssociateFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateFlowLogOutcomeCallable associateFlowLogCallable(const Model::AssociateFlowLogRequest& request) const;
			AssociateQosOutcome associateQos(const Model::AssociateQosRequest &request)const;
			void associateQosAsync(const Model::AssociateQosRequest& request, const AssociateQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateQosOutcomeCallable associateQosCallable(const Model::AssociateQosRequest& request) const;
			BindSerialNumberOutcome bindSerialNumber(const Model::BindSerialNumberRequest &request)const;
			void bindSerialNumberAsync(const Model::BindSerialNumberRequest& request, const BindSerialNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindSerialNumberOutcomeCallable bindSerialNumberCallable(const Model::BindSerialNumberRequest& request) const;
			BindSmartAccessGatewayOutcome bindSmartAccessGateway(const Model::BindSmartAccessGatewayRequest &request)const;
			void bindSmartAccessGatewayAsync(const Model::BindSmartAccessGatewayRequest& request, const BindSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindSmartAccessGatewayOutcomeCallable bindSmartAccessGatewayCallable(const Model::BindSmartAccessGatewayRequest& request) const;
			BindVbrOutcome bindVbr(const Model::BindVbrRequest &request)const;
			void bindVbrAsync(const Model::BindVbrRequest& request, const BindVbrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BindVbrOutcomeCallable bindVbrCallable(const Model::BindVbrRequest& request) const;
			ClearSagCipherOutcome clearSagCipher(const Model::ClearSagCipherRequest &request)const;
			void clearSagCipherAsync(const Model::ClearSagCipherRequest& request, const ClearSagCipherAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ClearSagCipherOutcomeCallable clearSagCipherCallable(const Model::ClearSagCipherRequest& request) const;
			ClearSagRouteableAddressOutcome clearSagRouteableAddress(const Model::ClearSagRouteableAddressRequest &request)const;
			void clearSagRouteableAddressAsync(const Model::ClearSagRouteableAddressRequest& request, const ClearSagRouteableAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ClearSagRouteableAddressOutcomeCallable clearSagRouteableAddressCallable(const Model::ClearSagRouteableAddressRequest& request) const;
			CreateACLOutcome createACL(const Model::CreateACLRequest &request)const;
			void createACLAsync(const Model::CreateACLRequest& request, const CreateACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateACLOutcomeCallable createACLCallable(const Model::CreateACLRequest& request) const;
			CreateCloudConnectNetworkOutcome createCloudConnectNetwork(const Model::CreateCloudConnectNetworkRequest &request)const;
			void createCloudConnectNetworkAsync(const Model::CreateCloudConnectNetworkRequest& request, const CreateCloudConnectNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCloudConnectNetworkOutcomeCallable createCloudConnectNetworkCallable(const Model::CreateCloudConnectNetworkRequest& request) const;
			CreateEnterpriseCodeOutcome createEnterpriseCode(const Model::CreateEnterpriseCodeRequest &request)const;
			void createEnterpriseCodeAsync(const Model::CreateEnterpriseCodeRequest& request, const CreateEnterpriseCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateEnterpriseCodeOutcomeCallable createEnterpriseCodeCallable(const Model::CreateEnterpriseCodeRequest& request) const;
			CreateFlowLogOutcome createFlowLog(const Model::CreateFlowLogRequest &request)const;
			void createFlowLogAsync(const Model::CreateFlowLogRequest& request, const CreateFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateFlowLogOutcomeCallable createFlowLogCallable(const Model::CreateFlowLogRequest& request) const;
			CreateHealthCheckOutcome createHealthCheck(const Model::CreateHealthCheckRequest &request)const;
			void createHealthCheckAsync(const Model::CreateHealthCheckRequest& request, const CreateHealthCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateHealthCheckOutcomeCallable createHealthCheckCallable(const Model::CreateHealthCheckRequest& request) const;
			CreateQosOutcome createQos(const Model::CreateQosRequest &request)const;
			void createQosAsync(const Model::CreateQosRequest& request, const CreateQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateQosOutcomeCallable createQosCallable(const Model::CreateQosRequest& request) const;
			CreateQosCarOutcome createQosCar(const Model::CreateQosCarRequest &request)const;
			void createQosCarAsync(const Model::CreateQosCarRequest& request, const CreateQosCarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateQosCarOutcomeCallable createQosCarCallable(const Model::CreateQosCarRequest& request) const;
			CreateQosPolicyOutcome createQosPolicy(const Model::CreateQosPolicyRequest &request)const;
			void createQosPolicyAsync(const Model::CreateQosPolicyRequest& request, const CreateQosPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateQosPolicyOutcomeCallable createQosPolicyCallable(const Model::CreateQosPolicyRequest& request) const;
			CreateSagExpressConnectInterfaceOutcome createSagExpressConnectInterface(const Model::CreateSagExpressConnectInterfaceRequest &request)const;
			void createSagExpressConnectInterfaceAsync(const Model::CreateSagExpressConnectInterfaceRequest& request, const CreateSagExpressConnectInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSagExpressConnectInterfaceOutcomeCallable createSagExpressConnectInterfaceCallable(const Model::CreateSagExpressConnectInterfaceRequest& request) const;
			CreateSagStaticRouteOutcome createSagStaticRoute(const Model::CreateSagStaticRouteRequest &request)const;
			void createSagStaticRouteAsync(const Model::CreateSagStaticRouteRequest& request, const CreateSagStaticRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSagStaticRouteOutcomeCallable createSagStaticRouteCallable(const Model::CreateSagStaticRouteRequest& request) const;
			CreateSmartAccessGatewayOutcome createSmartAccessGateway(const Model::CreateSmartAccessGatewayRequest &request)const;
			void createSmartAccessGatewayAsync(const Model::CreateSmartAccessGatewayRequest& request, const CreateSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSmartAccessGatewayOutcomeCallable createSmartAccessGatewayCallable(const Model::CreateSmartAccessGatewayRequest& request) const;
			CreateSmartAccessGatewayClientUserOutcome createSmartAccessGatewayClientUser(const Model::CreateSmartAccessGatewayClientUserRequest &request)const;
			void createSmartAccessGatewayClientUserAsync(const Model::CreateSmartAccessGatewayClientUserRequest& request, const CreateSmartAccessGatewayClientUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSmartAccessGatewayClientUserOutcomeCallable createSmartAccessGatewayClientUserCallable(const Model::CreateSmartAccessGatewayClientUserRequest& request) const;
			CreateSmartAccessGatewaySoftwareOutcome createSmartAccessGatewaySoftware(const Model::CreateSmartAccessGatewaySoftwareRequest &request)const;
			void createSmartAccessGatewaySoftwareAsync(const Model::CreateSmartAccessGatewaySoftwareRequest& request, const CreateSmartAccessGatewaySoftwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSmartAccessGatewaySoftwareOutcomeCallable createSmartAccessGatewaySoftwareCallable(const Model::CreateSmartAccessGatewaySoftwareRequest& request) const;
			DeactiveFlowLogOutcome deactiveFlowLog(const Model::DeactiveFlowLogRequest &request)const;
			void deactiveFlowLogAsync(const Model::DeactiveFlowLogRequest& request, const DeactiveFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeactiveFlowLogOutcomeCallable deactiveFlowLogCallable(const Model::DeactiveFlowLogRequest& request) const;
			DeleteACLOutcome deleteACL(const Model::DeleteACLRequest &request)const;
			void deleteACLAsync(const Model::DeleteACLRequest& request, const DeleteACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteACLOutcomeCallable deleteACLCallable(const Model::DeleteACLRequest& request) const;
			DeleteACLRuleOutcome deleteACLRule(const Model::DeleteACLRuleRequest &request)const;
			void deleteACLRuleAsync(const Model::DeleteACLRuleRequest& request, const DeleteACLRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteACLRuleOutcomeCallable deleteACLRuleCallable(const Model::DeleteACLRuleRequest& request) const;
			DeleteCloudConnectNetworkOutcome deleteCloudConnectNetwork(const Model::DeleteCloudConnectNetworkRequest &request)const;
			void deleteCloudConnectNetworkAsync(const Model::DeleteCloudConnectNetworkRequest& request, const DeleteCloudConnectNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteCloudConnectNetworkOutcomeCallable deleteCloudConnectNetworkCallable(const Model::DeleteCloudConnectNetworkRequest& request) const;
			DeleteDnatEntryOutcome deleteDnatEntry(const Model::DeleteDnatEntryRequest &request)const;
			void deleteDnatEntryAsync(const Model::DeleteDnatEntryRequest& request, const DeleteDnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDnatEntryOutcomeCallable deleteDnatEntryCallable(const Model::DeleteDnatEntryRequest& request) const;
			DeleteEnterpriseCodeOutcome deleteEnterpriseCode(const Model::DeleteEnterpriseCodeRequest &request)const;
			void deleteEnterpriseCodeAsync(const Model::DeleteEnterpriseCodeRequest& request, const DeleteEnterpriseCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteEnterpriseCodeOutcomeCallable deleteEnterpriseCodeCallable(const Model::DeleteEnterpriseCodeRequest& request) const;
			DeleteFlowLogOutcome deleteFlowLog(const Model::DeleteFlowLogRequest &request)const;
			void deleteFlowLogAsync(const Model::DeleteFlowLogRequest& request, const DeleteFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFlowLogOutcomeCallable deleteFlowLogCallable(const Model::DeleteFlowLogRequest& request) const;
			DeleteHealthCheckOutcome deleteHealthCheck(const Model::DeleteHealthCheckRequest &request)const;
			void deleteHealthCheckAsync(const Model::DeleteHealthCheckRequest& request, const DeleteHealthCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteHealthCheckOutcomeCallable deleteHealthCheckCallable(const Model::DeleteHealthCheckRequest& request) const;
			DeleteQosOutcome deleteQos(const Model::DeleteQosRequest &request)const;
			void deleteQosAsync(const Model::DeleteQosRequest& request, const DeleteQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteQosOutcomeCallable deleteQosCallable(const Model::DeleteQosRequest& request) const;
			DeleteQosCarOutcome deleteQosCar(const Model::DeleteQosCarRequest &request)const;
			void deleteQosCarAsync(const Model::DeleteQosCarRequest& request, const DeleteQosCarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteQosCarOutcomeCallable deleteQosCarCallable(const Model::DeleteQosCarRequest& request) const;
			DeleteQosPolicyOutcome deleteQosPolicy(const Model::DeleteQosPolicyRequest &request)const;
			void deleteQosPolicyAsync(const Model::DeleteQosPolicyRequest& request, const DeleteQosPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteQosPolicyOutcomeCallable deleteQosPolicyCallable(const Model::DeleteQosPolicyRequest& request) const;
			DeleteRouteDistributionStrategyOutcome deleteRouteDistributionStrategy(const Model::DeleteRouteDistributionStrategyRequest &request)const;
			void deleteRouteDistributionStrategyAsync(const Model::DeleteRouteDistributionStrategyRequest& request, const DeleteRouteDistributionStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteRouteDistributionStrategyOutcomeCallable deleteRouteDistributionStrategyCallable(const Model::DeleteRouteDistributionStrategyRequest& request) const;
			DeleteSagExpressConnectInterfaceOutcome deleteSagExpressConnectInterface(const Model::DeleteSagExpressConnectInterfaceRequest &request)const;
			void deleteSagExpressConnectInterfaceAsync(const Model::DeleteSagExpressConnectInterfaceRequest& request, const DeleteSagExpressConnectInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSagExpressConnectInterfaceOutcomeCallable deleteSagExpressConnectInterfaceCallable(const Model::DeleteSagExpressConnectInterfaceRequest& request) const;
			DeleteSagStaticRouteOutcome deleteSagStaticRoute(const Model::DeleteSagStaticRouteRequest &request)const;
			void deleteSagStaticRouteAsync(const Model::DeleteSagStaticRouteRequest& request, const DeleteSagStaticRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSagStaticRouteOutcomeCallable deleteSagStaticRouteCallable(const Model::DeleteSagStaticRouteRequest& request) const;
			DeleteSmartAccessGatewayOutcome deleteSmartAccessGateway(const Model::DeleteSmartAccessGatewayRequest &request)const;
			void deleteSmartAccessGatewayAsync(const Model::DeleteSmartAccessGatewayRequest& request, const DeleteSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSmartAccessGatewayOutcomeCallable deleteSmartAccessGatewayCallable(const Model::DeleteSmartAccessGatewayRequest& request) const;
			DeleteSmartAccessGatewayClientUserOutcome deleteSmartAccessGatewayClientUser(const Model::DeleteSmartAccessGatewayClientUserRequest &request)const;
			void deleteSmartAccessGatewayClientUserAsync(const Model::DeleteSmartAccessGatewayClientUserRequest& request, const DeleteSmartAccessGatewayClientUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSmartAccessGatewayClientUserOutcomeCallable deleteSmartAccessGatewayClientUserCallable(const Model::DeleteSmartAccessGatewayClientUserRequest& request) const;
			DeleteSnatEntryOutcome deleteSnatEntry(const Model::DeleteSnatEntryRequest &request)const;
			void deleteSnatEntryAsync(const Model::DeleteSnatEntryRequest& request, const DeleteSnatEntryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSnatEntryOutcomeCallable deleteSnatEntryCallable(const Model::DeleteSnatEntryRequest& request) const;
			DescribeACLAttributeOutcome describeACLAttribute(const Model::DescribeACLAttributeRequest &request)const;
			void describeACLAttributeAsync(const Model::DescribeACLAttributeRequest& request, const DescribeACLAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeACLAttributeOutcomeCallable describeACLAttributeCallable(const Model::DescribeACLAttributeRequest& request) const;
			DescribeACLsOutcome describeACLs(const Model::DescribeACLsRequest &request)const;
			void describeACLsAsync(const Model::DescribeACLsRequest& request, const DescribeACLsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeACLsOutcomeCallable describeACLsCallable(const Model::DescribeACLsRequest& request) const;
			DescribeBindableSmartAccessGatewaysOutcome describeBindableSmartAccessGateways(const Model::DescribeBindableSmartAccessGatewaysRequest &request)const;
			void describeBindableSmartAccessGatewaysAsync(const Model::DescribeBindableSmartAccessGatewaysRequest& request, const DescribeBindableSmartAccessGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBindableSmartAccessGatewaysOutcomeCallable describeBindableSmartAccessGatewaysCallable(const Model::DescribeBindableSmartAccessGatewaysRequest& request) const;
			DescribeClientUserDNSOutcome describeClientUserDNS(const Model::DescribeClientUserDNSRequest &request)const;
			void describeClientUserDNSAsync(const Model::DescribeClientUserDNSRequest& request, const DescribeClientUserDNSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeClientUserDNSOutcomeCallable describeClientUserDNSCallable(const Model::DescribeClientUserDNSRequest& request) const;
			DescribeCloudConnectNetworksOutcome describeCloudConnectNetworks(const Model::DescribeCloudConnectNetworksRequest &request)const;
			void describeCloudConnectNetworksAsync(const Model::DescribeCloudConnectNetworksRequest& request, const DescribeCloudConnectNetworksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCloudConnectNetworksOutcomeCallable describeCloudConnectNetworksCallable(const Model::DescribeCloudConnectNetworksRequest& request) const;
			DescribeDeviceAutoUpgradePolicyOutcome describeDeviceAutoUpgradePolicy(const Model::DescribeDeviceAutoUpgradePolicyRequest &request)const;
			void describeDeviceAutoUpgradePolicyAsync(const Model::DescribeDeviceAutoUpgradePolicyRequest& request, const DescribeDeviceAutoUpgradePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDeviceAutoUpgradePolicyOutcomeCallable describeDeviceAutoUpgradePolicyCallable(const Model::DescribeDeviceAutoUpgradePolicyRequest& request) const;
			DescribeDnatEntriesOutcome describeDnatEntries(const Model::DescribeDnatEntriesRequest &request)const;
			void describeDnatEntriesAsync(const Model::DescribeDnatEntriesRequest& request, const DescribeDnatEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDnatEntriesOutcomeCallable describeDnatEntriesCallable(const Model::DescribeDnatEntriesRequest& request) const;
			DescribeFlowLogSagsOutcome describeFlowLogSags(const Model::DescribeFlowLogSagsRequest &request)const;
			void describeFlowLogSagsAsync(const Model::DescribeFlowLogSagsRequest& request, const DescribeFlowLogSagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowLogSagsOutcomeCallable describeFlowLogSagsCallable(const Model::DescribeFlowLogSagsRequest& request) const;
			DescribeFlowLogsOutcome describeFlowLogs(const Model::DescribeFlowLogsRequest &request)const;
			void describeFlowLogsAsync(const Model::DescribeFlowLogsRequest& request, const DescribeFlowLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFlowLogsOutcomeCallable describeFlowLogsCallable(const Model::DescribeFlowLogsRequest& request) const;
			DescribeGrantRulesOutcome describeGrantRules(const Model::DescribeGrantRulesRequest &request)const;
			void describeGrantRulesAsync(const Model::DescribeGrantRulesRequest& request, const DescribeGrantRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGrantRulesOutcomeCallable describeGrantRulesCallable(const Model::DescribeGrantRulesRequest& request) const;
			DescribeGrantSagRulesOutcome describeGrantSagRules(const Model::DescribeGrantSagRulesRequest &request)const;
			void describeGrantSagRulesAsync(const Model::DescribeGrantSagRulesRequest& request, const DescribeGrantSagRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGrantSagRulesOutcomeCallable describeGrantSagRulesCallable(const Model::DescribeGrantSagRulesRequest& request) const;
			DescribeGrantSagVbrRulesOutcome describeGrantSagVbrRules(const Model::DescribeGrantSagVbrRulesRequest &request)const;
			void describeGrantSagVbrRulesAsync(const Model::DescribeGrantSagVbrRulesRequest& request, const DescribeGrantSagVbrRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeGrantSagVbrRulesOutcomeCallable describeGrantSagVbrRulesCallable(const Model::DescribeGrantSagVbrRulesRequest& request) const;
			DescribeHealthCheckAttributeOutcome describeHealthCheckAttribute(const Model::DescribeHealthCheckAttributeRequest &request)const;
			void describeHealthCheckAttributeAsync(const Model::DescribeHealthCheckAttributeRequest& request, const DescribeHealthCheckAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHealthCheckAttributeOutcomeCallable describeHealthCheckAttributeCallable(const Model::DescribeHealthCheckAttributeRequest& request) const;
			DescribeHealthChecksOutcome describeHealthChecks(const Model::DescribeHealthChecksRequest &request)const;
			void describeHealthChecksAsync(const Model::DescribeHealthChecksRequest& request, const DescribeHealthChecksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHealthChecksOutcomeCallable describeHealthChecksCallable(const Model::DescribeHealthChecksRequest& request) const;
			DescribeQosCarsOutcome describeQosCars(const Model::DescribeQosCarsRequest &request)const;
			void describeQosCarsAsync(const Model::DescribeQosCarsRequest& request, const DescribeQosCarsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeQosCarsOutcomeCallable describeQosCarsCallable(const Model::DescribeQosCarsRequest& request) const;
			DescribeQosPoliciesOutcome describeQosPolicies(const Model::DescribeQosPoliciesRequest &request)const;
			void describeQosPoliciesAsync(const Model::DescribeQosPoliciesRequest& request, const DescribeQosPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeQosPoliciesOutcomeCallable describeQosPoliciesCallable(const Model::DescribeQosPoliciesRequest& request) const;
			DescribeQosesOutcome describeQoses(const Model::DescribeQosesRequest &request)const;
			void describeQosesAsync(const Model::DescribeQosesRequest& request, const DescribeQosesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeQosesOutcomeCallable describeQosesCallable(const Model::DescribeQosesRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeRouteDistributionStrategiesOutcome describeRouteDistributionStrategies(const Model::DescribeRouteDistributionStrategiesRequest &request)const;
			void describeRouteDistributionStrategiesAsync(const Model::DescribeRouteDistributionStrategiesRequest& request, const DescribeRouteDistributionStrategiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRouteDistributionStrategiesOutcomeCallable describeRouteDistributionStrategiesCallable(const Model::DescribeRouteDistributionStrategiesRequest& request) const;
			DescribeSAGDeviceInfoOutcome describeSAGDeviceInfo(const Model::DescribeSAGDeviceInfoRequest &request)const;
			void describeSAGDeviceInfoAsync(const Model::DescribeSAGDeviceInfoRequest& request, const DescribeSAGDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSAGDeviceInfoOutcomeCallable describeSAGDeviceInfoCallable(const Model::DescribeSAGDeviceInfoRequest& request) const;
			DescribeSagCurrentDnsOutcome describeSagCurrentDns(const Model::DescribeSagCurrentDnsRequest &request)const;
			void describeSagCurrentDnsAsync(const Model::DescribeSagCurrentDnsRequest& request, const DescribeSagCurrentDnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSagCurrentDnsOutcomeCallable describeSagCurrentDnsCallable(const Model::DescribeSagCurrentDnsRequest& request) const;
			DescribeSagDropTopNOutcome describeSagDropTopN(const Model::DescribeSagDropTopNRequest &request)const;
			void describeSagDropTopNAsync(const Model::DescribeSagDropTopNRequest& request, const DescribeSagDropTopNAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSagDropTopNOutcomeCallable describeSagDropTopNCallable(const Model::DescribeSagDropTopNRequest& request) const;
			DescribeSagExpressConnectInterfaceListOutcome describeSagExpressConnectInterfaceList(const Model::DescribeSagExpressConnectInterfaceListRequest &request)const;
			void describeSagExpressConnectInterfaceListAsync(const Model::DescribeSagExpressConnectInterfaceListRequest& request, const DescribeSagExpressConnectInterfaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSagExpressConnectInterfaceListOutcomeCallable describeSagExpressConnectInterfaceListCallable(const Model::DescribeSagExpressConnectInterfaceListRequest& request) const;
			DescribeSagGlobalRouteProtocolOutcome describeSagGlobalRouteProtocol(const Model::DescribeSagGlobalRouteProtocolRequest &request)const;
			void describeSagGlobalRouteProtocolAsync(const Model::DescribeSagGlobalRouteProtocolRequest& request, const DescribeSagGlobalRouteProtocolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSagGlobalRouteProtocolOutcomeCallable describeSagGlobalRouteProtocolCallable(const Model::DescribeSagGlobalRouteProtocolRequest& request) const;
			DescribeSagHaOutcome describeSagHa(const Model::DescribeSagHaRequest &request)const;
			void describeSagHaAsync(const Model::DescribeSagHaRequest& request, const DescribeSagHaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSagHaOutcomeCallable describeSagHaCallable(const Model::DescribeSagHaRequest& request) const;
			DescribeSagLanListOutcome describeSagLanList(const Model::DescribeSagLanListRequest &request)const;
			void describeSagLanListAsync(const Model::DescribeSagLanListRequest& request, const DescribeSagLanListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSagLanListOutcomeCallable describeSagLanListCallable(const Model::DescribeSagLanListRequest& request) const;
			DescribeSagManagementPortOutcome describeSagManagementPort(const Model::DescribeSagManagementPortRequest &request)const;
			void describeSagManagementPortAsync(const Model::DescribeSagManagementPortRequest& request, const DescribeSagManagementPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSagManagementPortOutcomeCallable describeSagManagementPortCallable(const Model::DescribeSagManagementPortRequest& request) const;
			DescribeSagOnlineClientStatisticsOutcome describeSagOnlineClientStatistics(const Model::DescribeSagOnlineClientStatisticsRequest &request)const;
			void describeSagOnlineClientStatisticsAsync(const Model::DescribeSagOnlineClientStatisticsRequest& request, const DescribeSagOnlineClientStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSagOnlineClientStatisticsOutcomeCallable describeSagOnlineClientStatisticsCallable(const Model::DescribeSagOnlineClientStatisticsRequest& request) const;
			DescribeSagPortListOutcome describeSagPortList(const Model::DescribeSagPortListRequest &request)const;
			void describeSagPortListAsync(const Model::DescribeSagPortListRequest& request, const DescribeSagPortListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSagPortListOutcomeCallable describeSagPortListCallable(const Model::DescribeSagPortListRequest& request) const;
			DescribeSagPortRouteProtocolListOutcome describeSagPortRouteProtocolList(const Model::DescribeSagPortRouteProtocolListRequest &request)const;
			void describeSagPortRouteProtocolListAsync(const Model::DescribeSagPortRouteProtocolListRequest& request, const DescribeSagPortRouteProtocolListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSagPortRouteProtocolListOutcomeCallable describeSagPortRouteProtocolListCallable(const Model::DescribeSagPortRouteProtocolListRequest& request) const;
			DescribeSagRemoteAccessOutcome describeSagRemoteAccess(const Model::DescribeSagRemoteAccessRequest &request)const;
			void describeSagRemoteAccessAsync(const Model::DescribeSagRemoteAccessRequest& request, const DescribeSagRemoteAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSagRemoteAccessOutcomeCallable describeSagRemoteAccessCallable(const Model::DescribeSagRemoteAccessRequest& request) const;
			DescribeSagRouteListOutcome describeSagRouteList(const Model::DescribeSagRouteListRequest &request)const;
			void describeSagRouteListAsync(const Model::DescribeSagRouteListRequest& request, const DescribeSagRouteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSagRouteListOutcomeCallable describeSagRouteListCallable(const Model::DescribeSagRouteListRequest& request) const;
			DescribeSagRouteProtocolBgpOutcome describeSagRouteProtocolBgp(const Model::DescribeSagRouteProtocolBgpRequest &request)const;
			void describeSagRouteProtocolBgpAsync(const Model::DescribeSagRouteProtocolBgpRequest& request, const DescribeSagRouteProtocolBgpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSagRouteProtocolBgpOutcomeCallable describeSagRouteProtocolBgpCallable(const Model::DescribeSagRouteProtocolBgpRequest& request) const;
			DescribeSagRouteProtocolOspfOutcome describeSagRouteProtocolOspf(const Model::DescribeSagRouteProtocolOspfRequest &request)const;
			void describeSagRouteProtocolOspfAsync(const Model::DescribeSagRouteProtocolOspfRequest& request, const DescribeSagRouteProtocolOspfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSagRouteProtocolOspfOutcomeCallable describeSagRouteProtocolOspfCallable(const Model::DescribeSagRouteProtocolOspfRequest& request) const;
			DescribeSagStaticRouteListOutcome describeSagStaticRouteList(const Model::DescribeSagStaticRouteListRequest &request)const;
			void describeSagStaticRouteListAsync(const Model::DescribeSagStaticRouteListRequest& request, const DescribeSagStaticRouteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSagStaticRouteListOutcomeCallable describeSagStaticRouteListCallable(const Model::DescribeSagStaticRouteListRequest& request) const;
			DescribeSagTrafficTopNOutcome describeSagTrafficTopN(const Model::DescribeSagTrafficTopNRequest &request)const;
			void describeSagTrafficTopNAsync(const Model::DescribeSagTrafficTopNRequest& request, const DescribeSagTrafficTopNAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSagTrafficTopNOutcomeCallable describeSagTrafficTopNCallable(const Model::DescribeSagTrafficTopNRequest& request) const;
			DescribeSagUserDnsOutcome describeSagUserDns(const Model::DescribeSagUserDnsRequest &request)const;
			void describeSagUserDnsAsync(const Model::DescribeSagUserDnsRequest& request, const DescribeSagUserDnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSagUserDnsOutcomeCallable describeSagUserDnsCallable(const Model::DescribeSagUserDnsRequest& request) const;
			DescribeSagVbrRelationsOutcome describeSagVbrRelations(const Model::DescribeSagVbrRelationsRequest &request)const;
			void describeSagVbrRelationsAsync(const Model::DescribeSagVbrRelationsRequest& request, const DescribeSagVbrRelationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSagVbrRelationsOutcomeCallable describeSagVbrRelationsCallable(const Model::DescribeSagVbrRelationsRequest& request) const;
			DescribeSagWan4GOutcome describeSagWan4G(const Model::DescribeSagWan4GRequest &request)const;
			void describeSagWan4GAsync(const Model::DescribeSagWan4GRequest& request, const DescribeSagWan4GAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSagWan4GOutcomeCallable describeSagWan4GCallable(const Model::DescribeSagWan4GRequest& request) const;
			DescribeSagWanListOutcome describeSagWanList(const Model::DescribeSagWanListRequest &request)const;
			void describeSagWanListAsync(const Model::DescribeSagWanListRequest& request, const DescribeSagWanListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSagWanListOutcomeCallable describeSagWanListCallable(const Model::DescribeSagWanListRequest& request) const;
			DescribeSagWanSnatOutcome describeSagWanSnat(const Model::DescribeSagWanSnatRequest &request)const;
			void describeSagWanSnatAsync(const Model::DescribeSagWanSnatRequest& request, const DescribeSagWanSnatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSagWanSnatOutcomeCallable describeSagWanSnatCallable(const Model::DescribeSagWanSnatRequest& request) const;
			DescribeSagWifiOutcome describeSagWifi(const Model::DescribeSagWifiRequest &request)const;
			void describeSagWifiAsync(const Model::DescribeSagWifiRequest& request, const DescribeSagWifiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSagWifiOutcomeCallable describeSagWifiCallable(const Model::DescribeSagWifiRequest& request) const;
			DescribeSmartAccessGatewayAttributeOutcome describeSmartAccessGatewayAttribute(const Model::DescribeSmartAccessGatewayAttributeRequest &request)const;
			void describeSmartAccessGatewayAttributeAsync(const Model::DescribeSmartAccessGatewayAttributeRequest& request, const DescribeSmartAccessGatewayAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSmartAccessGatewayAttributeOutcomeCallable describeSmartAccessGatewayAttributeCallable(const Model::DescribeSmartAccessGatewayAttributeRequest& request) const;
			DescribeSmartAccessGatewayClientUsersOutcome describeSmartAccessGatewayClientUsers(const Model::DescribeSmartAccessGatewayClientUsersRequest &request)const;
			void describeSmartAccessGatewayClientUsersAsync(const Model::DescribeSmartAccessGatewayClientUsersRequest& request, const DescribeSmartAccessGatewayClientUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSmartAccessGatewayClientUsersOutcomeCallable describeSmartAccessGatewayClientUsersCallable(const Model::DescribeSmartAccessGatewayClientUsersRequest& request) const;
			DescribeSmartAccessGatewayHaOutcome describeSmartAccessGatewayHa(const Model::DescribeSmartAccessGatewayHaRequest &request)const;
			void describeSmartAccessGatewayHaAsync(const Model::DescribeSmartAccessGatewayHaRequest& request, const DescribeSmartAccessGatewayHaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSmartAccessGatewayHaOutcomeCallable describeSmartAccessGatewayHaCallable(const Model::DescribeSmartAccessGatewayHaRequest& request) const;
			DescribeSmartAccessGatewayVersionsOutcome describeSmartAccessGatewayVersions(const Model::DescribeSmartAccessGatewayVersionsRequest &request)const;
			void describeSmartAccessGatewayVersionsAsync(const Model::DescribeSmartAccessGatewayVersionsRequest& request, const DescribeSmartAccessGatewayVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSmartAccessGatewayVersionsOutcomeCallable describeSmartAccessGatewayVersionsCallable(const Model::DescribeSmartAccessGatewayVersionsRequest& request) const;
			DescribeSmartAccessGatewaysOutcome describeSmartAccessGateways(const Model::DescribeSmartAccessGatewaysRequest &request)const;
			void describeSmartAccessGatewaysAsync(const Model::DescribeSmartAccessGatewaysRequest& request, const DescribeSmartAccessGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSmartAccessGatewaysOutcomeCallable describeSmartAccessGatewaysCallable(const Model::DescribeSmartAccessGatewaysRequest& request) const;
			DescribeSnatEntriesOutcome describeSnatEntries(const Model::DescribeSnatEntriesRequest &request)const;
			void describeSnatEntriesAsync(const Model::DescribeSnatEntriesRequest& request, const DescribeSnatEntriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSnatEntriesOutcomeCallable describeSnatEntriesCallable(const Model::DescribeSnatEntriesRequest& request) const;
			DescribeUnbindFlowLogSagsOutcome describeUnbindFlowLogSags(const Model::DescribeUnbindFlowLogSagsRequest &request)const;
			void describeUnbindFlowLogSagsAsync(const Model::DescribeUnbindFlowLogSagsRequest& request, const DescribeUnbindFlowLogSagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUnbindFlowLogSagsOutcomeCallable describeUnbindFlowLogSagsCallable(const Model::DescribeUnbindFlowLogSagsRequest& request) const;
			DescribeUserFlowStatisticsOutcome describeUserFlowStatistics(const Model::DescribeUserFlowStatisticsRequest &request)const;
			void describeUserFlowStatisticsAsync(const Model::DescribeUserFlowStatisticsRequest& request, const DescribeUserFlowStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserFlowStatisticsOutcomeCallable describeUserFlowStatisticsCallable(const Model::DescribeUserFlowStatisticsRequest& request) const;
			DescribeUserOnlineClientStatisticsOutcome describeUserOnlineClientStatistics(const Model::DescribeUserOnlineClientStatisticsRequest &request)const;
			void describeUserOnlineClientStatisticsAsync(const Model::DescribeUserOnlineClientStatisticsRequest& request, const DescribeUserOnlineClientStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserOnlineClientStatisticsOutcomeCallable describeUserOnlineClientStatisticsCallable(const Model::DescribeUserOnlineClientStatisticsRequest& request) const;
			DescribeUserOnlineClientsOutcome describeUserOnlineClients(const Model::DescribeUserOnlineClientsRequest &request)const;
			void describeUserOnlineClientsAsync(const Model::DescribeUserOnlineClientsRequest& request, const DescribeUserOnlineClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserOnlineClientsOutcomeCallable describeUserOnlineClientsCallable(const Model::DescribeUserOnlineClientsRequest& request) const;
			DiagnoseSmartAccessGatewayOutcome diagnoseSmartAccessGateway(const Model::DiagnoseSmartAccessGatewayRequest &request)const;
			void diagnoseSmartAccessGatewayAsync(const Model::DiagnoseSmartAccessGatewayRequest& request, const DiagnoseSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DiagnoseSmartAccessGatewayOutcomeCallable diagnoseSmartAccessGatewayCallable(const Model::DiagnoseSmartAccessGatewayRequest& request) const;
			DisableSmartAGDpiMonitorOutcome disableSmartAGDpiMonitor(const Model::DisableSmartAGDpiMonitorRequest &request)const;
			void disableSmartAGDpiMonitorAsync(const Model::DisableSmartAGDpiMonitorRequest& request, const DisableSmartAGDpiMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableSmartAGDpiMonitorOutcomeCallable disableSmartAGDpiMonitorCallable(const Model::DisableSmartAGDpiMonitorRequest& request) const;
			DisableSmartAccessGatewayUserOutcome disableSmartAccessGatewayUser(const Model::DisableSmartAccessGatewayUserRequest &request)const;
			void disableSmartAccessGatewayUserAsync(const Model::DisableSmartAccessGatewayUserRequest& request, const DisableSmartAccessGatewayUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableSmartAccessGatewayUserOutcomeCallable disableSmartAccessGatewayUserCallable(const Model::DisableSmartAccessGatewayUserRequest& request) const;
			DisassociateACLOutcome disassociateACL(const Model::DisassociateACLRequest &request)const;
			void disassociateACLAsync(const Model::DisassociateACLRequest& request, const DisassociateACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisassociateACLOutcomeCallable disassociateACLCallable(const Model::DisassociateACLRequest& request) const;
			DisassociateFlowLogOutcome disassociateFlowLog(const Model::DisassociateFlowLogRequest &request)const;
			void disassociateFlowLogAsync(const Model::DisassociateFlowLogRequest& request, const DisassociateFlowLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisassociateFlowLogOutcomeCallable disassociateFlowLogCallable(const Model::DisassociateFlowLogRequest& request) const;
			DisassociateQosOutcome disassociateQos(const Model::DisassociateQosRequest &request)const;
			void disassociateQosAsync(const Model::DisassociateQosRequest& request, const DisassociateQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisassociateQosOutcomeCallable disassociateQosCallable(const Model::DisassociateQosRequest& request) const;
			DiscribeSmartAccessGatewayDiagnosisReportOutcome discribeSmartAccessGatewayDiagnosisReport(const Model::DiscribeSmartAccessGatewayDiagnosisReportRequest &request)const;
			void discribeSmartAccessGatewayDiagnosisReportAsync(const Model::DiscribeSmartAccessGatewayDiagnosisReportRequest& request, const DiscribeSmartAccessGatewayDiagnosisReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DiscribeSmartAccessGatewayDiagnosisReportOutcomeCallable discribeSmartAccessGatewayDiagnosisReportCallable(const Model::DiscribeSmartAccessGatewayDiagnosisReportRequest& request) const;
			DowngradeSmartAccessGatewayOutcome downgradeSmartAccessGateway(const Model::DowngradeSmartAccessGatewayRequest &request)const;
			void downgradeSmartAccessGatewayAsync(const Model::DowngradeSmartAccessGatewayRequest& request, const DowngradeSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DowngradeSmartAccessGatewayOutcomeCallable downgradeSmartAccessGatewayCallable(const Model::DowngradeSmartAccessGatewayRequest& request) const;
			DowngradeSmartAccessGatewaySoftwareOutcome downgradeSmartAccessGatewaySoftware(const Model::DowngradeSmartAccessGatewaySoftwareRequest &request)const;
			void downgradeSmartAccessGatewaySoftwareAsync(const Model::DowngradeSmartAccessGatewaySoftwareRequest& request, const DowngradeSmartAccessGatewaySoftwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DowngradeSmartAccessGatewaySoftwareOutcomeCallable downgradeSmartAccessGatewaySoftwareCallable(const Model::DowngradeSmartAccessGatewaySoftwareRequest& request) const;
			EnableSmartAGDpiMonitorOutcome enableSmartAGDpiMonitor(const Model::EnableSmartAGDpiMonitorRequest &request)const;
			void enableSmartAGDpiMonitorAsync(const Model::EnableSmartAGDpiMonitorRequest& request, const EnableSmartAGDpiMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableSmartAGDpiMonitorOutcomeCallable enableSmartAGDpiMonitorCallable(const Model::EnableSmartAGDpiMonitorRequest& request) const;
			EnableSmartAccessGatewayUserOutcome enableSmartAccessGatewayUser(const Model::EnableSmartAccessGatewayUserRequest &request)const;
			void enableSmartAccessGatewayUserAsync(const Model::EnableSmartAccessGatewayUserRequest& request, const EnableSmartAccessGatewayUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableSmartAccessGatewayUserOutcomeCallable enableSmartAccessGatewayUserCallable(const Model::EnableSmartAccessGatewayUserRequest& request) const;
			GetAclAttributeOutcome getAclAttribute(const Model::GetAclAttributeRequest &request)const;
			void getAclAttributeAsync(const Model::GetAclAttributeRequest& request, const GetAclAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAclAttributeOutcomeCallable getAclAttributeCallable(const Model::GetAclAttributeRequest& request) const;
			GetCloudConnectNetworkUseLimitOutcome getCloudConnectNetworkUseLimit(const Model::GetCloudConnectNetworkUseLimitRequest &request)const;
			void getCloudConnectNetworkUseLimitAsync(const Model::GetCloudConnectNetworkUseLimitRequest& request, const GetCloudConnectNetworkUseLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetCloudConnectNetworkUseLimitOutcomeCallable getCloudConnectNetworkUseLimitCallable(const Model::GetCloudConnectNetworkUseLimitRequest& request) const;
			GetQosAttributeOutcome getQosAttribute(const Model::GetQosAttributeRequest &request)const;
			void getQosAttributeAsync(const Model::GetQosAttributeRequest& request, const GetQosAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetQosAttributeOutcomeCallable getQosAttributeCallable(const Model::GetQosAttributeRequest& request) const;
			GetSmartAGDpiAttributeOutcome getSmartAGDpiAttribute(const Model::GetSmartAGDpiAttributeRequest &request)const;
			void getSmartAGDpiAttributeAsync(const Model::GetSmartAGDpiAttributeRequest& request, const GetSmartAGDpiAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSmartAGDpiAttributeOutcomeCallable getSmartAGDpiAttributeCallable(const Model::GetSmartAGDpiAttributeRequest& request) const;
			GetSmartAccessGatewayUseLimitOutcome getSmartAccessGatewayUseLimit(const Model::GetSmartAccessGatewayUseLimitRequest &request)const;
			void getSmartAccessGatewayUseLimitAsync(const Model::GetSmartAccessGatewayUseLimitRequest& request, const GetSmartAccessGatewayUseLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetSmartAccessGatewayUseLimitOutcomeCallable getSmartAccessGatewayUseLimitCallable(const Model::GetSmartAccessGatewayUseLimitRequest& request) const;
			GrantInstanceToCbnOutcome grantInstanceToCbn(const Model::GrantInstanceToCbnRequest &request)const;
			void grantInstanceToCbnAsync(const Model::GrantInstanceToCbnRequest& request, const GrantInstanceToCbnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrantInstanceToCbnOutcomeCallable grantInstanceToCbnCallable(const Model::GrantInstanceToCbnRequest& request) const;
			GrantSagInstanceToCcnOutcome grantSagInstanceToCcn(const Model::GrantSagInstanceToCcnRequest &request)const;
			void grantSagInstanceToCcnAsync(const Model::GrantSagInstanceToCcnRequest& request, const GrantSagInstanceToCcnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrantSagInstanceToCcnOutcomeCallable grantSagInstanceToCcnCallable(const Model::GrantSagInstanceToCcnRequest& request) const;
			GrantSagInstanceToVbrOutcome grantSagInstanceToVbr(const Model::GrantSagInstanceToVbrRequest &request)const;
			void grantSagInstanceToVbrAsync(const Model::GrantSagInstanceToVbrRequest& request, const GrantSagInstanceToVbrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrantSagInstanceToVbrOutcomeCallable grantSagInstanceToVbrCallable(const Model::GrantSagInstanceToVbrRequest& request) const;
			KickOutClientsOutcome kickOutClients(const Model::KickOutClientsRequest &request)const;
			void kickOutClientsAsync(const Model::KickOutClientsRequest& request, const KickOutClientsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			KickOutClientsOutcomeCallable kickOutClientsCallable(const Model::KickOutClientsRequest& request) const;
			ListAccessPointNetworkQualitiesOutcome listAccessPointNetworkQualities(const Model::ListAccessPointNetworkQualitiesRequest &request)const;
			void listAccessPointNetworkQualitiesAsync(const Model::ListAccessPointNetworkQualitiesRequest& request, const ListAccessPointNetworkQualitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAccessPointNetworkQualitiesOutcomeCallable listAccessPointNetworkQualitiesCallable(const Model::ListAccessPointNetworkQualitiesRequest& request) const;
			ListAccessPointsOutcome listAccessPoints(const Model::ListAccessPointsRequest &request)const;
			void listAccessPointsAsync(const Model::ListAccessPointsRequest& request, const ListAccessPointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAccessPointsOutcomeCallable listAccessPointsCallable(const Model::ListAccessPointsRequest& request) const;
			ListDpiConfigErrorOutcome listDpiConfigError(const Model::ListDpiConfigErrorRequest &request)const;
			void listDpiConfigErrorAsync(const Model::ListDpiConfigErrorRequest& request, const ListDpiConfigErrorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDpiConfigErrorOutcomeCallable listDpiConfigErrorCallable(const Model::ListDpiConfigErrorRequest& request) const;
			ListDpiGroupsOutcome listDpiGroups(const Model::ListDpiGroupsRequest &request)const;
			void listDpiGroupsAsync(const Model::ListDpiGroupsRequest& request, const ListDpiGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDpiGroupsOutcomeCallable listDpiGroupsCallable(const Model::ListDpiGroupsRequest& request) const;
			ListDpiSignaturesOutcome listDpiSignatures(const Model::ListDpiSignaturesRequest &request)const;
			void listDpiSignaturesAsync(const Model::ListDpiSignaturesRequest& request, const ListDpiSignaturesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListDpiSignaturesOutcomeCallable listDpiSignaturesCallable(const Model::ListDpiSignaturesRequest& request) const;
			ListEnterpriseCodeOutcome listEnterpriseCode(const Model::ListEnterpriseCodeRequest &request)const;
			void listEnterpriseCodeAsync(const Model::ListEnterpriseCodeRequest& request, const ListEnterpriseCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListEnterpriseCodeOutcomeCallable listEnterpriseCodeCallable(const Model::ListEnterpriseCodeRequest& request) const;
			ListSmartAGApiUnsupportedFeatureOutcome listSmartAGApiUnsupportedFeature(const Model::ListSmartAGApiUnsupportedFeatureRequest &request)const;
			void listSmartAGApiUnsupportedFeatureAsync(const Model::ListSmartAGApiUnsupportedFeatureRequest& request, const ListSmartAGApiUnsupportedFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSmartAGApiUnsupportedFeatureOutcomeCallable listSmartAGApiUnsupportedFeatureCallable(const Model::ListSmartAGApiUnsupportedFeatureRequest& request) const;
			ListSmartAGByAccessPointOutcome listSmartAGByAccessPoint(const Model::ListSmartAGByAccessPointRequest &request)const;
			void listSmartAGByAccessPointAsync(const Model::ListSmartAGByAccessPointRequest& request, const ListSmartAGByAccessPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListSmartAGByAccessPointOutcomeCallable listSmartAGByAccessPointCallable(const Model::ListSmartAGByAccessPointRequest& request) const;
			ModifyACLOutcome modifyACL(const Model::ModifyACLRequest &request)const;
			void modifyACLAsync(const Model::ModifyACLRequest& request, const ModifyACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyACLOutcomeCallable modifyACLCallable(const Model::ModifyACLRequest& request) const;
			ModifyACLRuleOutcome modifyACLRule(const Model::ModifyACLRuleRequest &request)const;
			void modifyACLRuleAsync(const Model::ModifyACLRuleRequest& request, const ModifyACLRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyACLRuleOutcomeCallable modifyACLRuleCallable(const Model::ModifyACLRuleRequest& request) const;
			ModifyClientUserDNSOutcome modifyClientUserDNS(const Model::ModifyClientUserDNSRequest &request)const;
			void modifyClientUserDNSAsync(const Model::ModifyClientUserDNSRequest& request, const ModifyClientUserDNSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyClientUserDNSOutcomeCallable modifyClientUserDNSCallable(const Model::ModifyClientUserDNSRequest& request) const;
			ModifyCloudConnectNetworkOutcome modifyCloudConnectNetwork(const Model::ModifyCloudConnectNetworkRequest &request)const;
			void modifyCloudConnectNetworkAsync(const Model::ModifyCloudConnectNetworkRequest& request, const ModifyCloudConnectNetworkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCloudConnectNetworkOutcomeCallable modifyCloudConnectNetworkCallable(const Model::ModifyCloudConnectNetworkRequest& request) const;
			ModifyDeviceAutoUpgradePolicyOutcome modifyDeviceAutoUpgradePolicy(const Model::ModifyDeviceAutoUpgradePolicyRequest &request)const;
			void modifyDeviceAutoUpgradePolicyAsync(const Model::ModifyDeviceAutoUpgradePolicyRequest& request, const ModifyDeviceAutoUpgradePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDeviceAutoUpgradePolicyOutcomeCallable modifyDeviceAutoUpgradePolicyCallable(const Model::ModifyDeviceAutoUpgradePolicyRequest& request) const;
			ModifyFlowLogAttributeOutcome modifyFlowLogAttribute(const Model::ModifyFlowLogAttributeRequest &request)const;
			void modifyFlowLogAttributeAsync(const Model::ModifyFlowLogAttributeRequest& request, const ModifyFlowLogAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFlowLogAttributeOutcomeCallable modifyFlowLogAttributeCallable(const Model::ModifyFlowLogAttributeRequest& request) const;
			ModifyHealthCheckOutcome modifyHealthCheck(const Model::ModifyHealthCheckRequest &request)const;
			void modifyHealthCheckAsync(const Model::ModifyHealthCheckRequest& request, const ModifyHealthCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyHealthCheckOutcomeCallable modifyHealthCheckCallable(const Model::ModifyHealthCheckRequest& request) const;
			ModifyQosOutcome modifyQos(const Model::ModifyQosRequest &request)const;
			void modifyQosAsync(const Model::ModifyQosRequest& request, const ModifyQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyQosOutcomeCallable modifyQosCallable(const Model::ModifyQosRequest& request) const;
			ModifyQosCarOutcome modifyQosCar(const Model::ModifyQosCarRequest &request)const;
			void modifyQosCarAsync(const Model::ModifyQosCarRequest& request, const ModifyQosCarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyQosCarOutcomeCallable modifyQosCarCallable(const Model::ModifyQosCarRequest& request) const;
			ModifyQosPolicyOutcome modifyQosPolicy(const Model::ModifyQosPolicyRequest &request)const;
			void modifyQosPolicyAsync(const Model::ModifyQosPolicyRequest& request, const ModifyQosPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyQosPolicyOutcomeCallable modifyQosPolicyCallable(const Model::ModifyQosPolicyRequest& request) const;
			ModifyRouteDistributionStrategyOutcome modifyRouteDistributionStrategy(const Model::ModifyRouteDistributionStrategyRequest &request)const;
			void modifyRouteDistributionStrategyAsync(const Model::ModifyRouteDistributionStrategyRequest& request, const ModifyRouteDistributionStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyRouteDistributionStrategyOutcomeCallable modifyRouteDistributionStrategyCallable(const Model::ModifyRouteDistributionStrategyRequest& request) const;
			ModifySAGAdminPasswordOutcome modifySAGAdminPassword(const Model::ModifySAGAdminPasswordRequest &request)const;
			void modifySAGAdminPasswordAsync(const Model::ModifySAGAdminPasswordRequest& request, const ModifySAGAdminPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySAGAdminPasswordOutcomeCallable modifySAGAdminPasswordCallable(const Model::ModifySAGAdminPasswordRequest& request) const;
			ModifySagExpressConnectInterfaceOutcome modifySagExpressConnectInterface(const Model::ModifySagExpressConnectInterfaceRequest &request)const;
			void modifySagExpressConnectInterfaceAsync(const Model::ModifySagExpressConnectInterfaceRequest& request, const ModifySagExpressConnectInterfaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySagExpressConnectInterfaceOutcomeCallable modifySagExpressConnectInterfaceCallable(const Model::ModifySagExpressConnectInterfaceRequest& request) const;
			ModifySagGlobalRouteProtocolOutcome modifySagGlobalRouteProtocol(const Model::ModifySagGlobalRouteProtocolRequest &request)const;
			void modifySagGlobalRouteProtocolAsync(const Model::ModifySagGlobalRouteProtocolRequest& request, const ModifySagGlobalRouteProtocolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySagGlobalRouteProtocolOutcomeCallable modifySagGlobalRouteProtocolCallable(const Model::ModifySagGlobalRouteProtocolRequest& request) const;
			ModifySagHaOutcome modifySagHa(const Model::ModifySagHaRequest &request)const;
			void modifySagHaAsync(const Model::ModifySagHaRequest& request, const ModifySagHaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySagHaOutcomeCallable modifySagHaCallable(const Model::ModifySagHaRequest& request) const;
			ModifySagLanOutcome modifySagLan(const Model::ModifySagLanRequest &request)const;
			void modifySagLanAsync(const Model::ModifySagLanRequest& request, const ModifySagLanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySagLanOutcomeCallable modifySagLanCallable(const Model::ModifySagLanRequest& request) const;
			ModifySagManagementPortOutcome modifySagManagementPort(const Model::ModifySagManagementPortRequest &request)const;
			void modifySagManagementPortAsync(const Model::ModifySagManagementPortRequest& request, const ModifySagManagementPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySagManagementPortOutcomeCallable modifySagManagementPortCallable(const Model::ModifySagManagementPortRequest& request) const;
			ModifySagPortRoleOutcome modifySagPortRole(const Model::ModifySagPortRoleRequest &request)const;
			void modifySagPortRoleAsync(const Model::ModifySagPortRoleRequest& request, const ModifySagPortRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySagPortRoleOutcomeCallable modifySagPortRoleCallable(const Model::ModifySagPortRoleRequest& request) const;
			ModifySagPortRouteProtocolOutcome modifySagPortRouteProtocol(const Model::ModifySagPortRouteProtocolRequest &request)const;
			void modifySagPortRouteProtocolAsync(const Model::ModifySagPortRouteProtocolRequest& request, const ModifySagPortRouteProtocolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySagPortRouteProtocolOutcomeCallable modifySagPortRouteProtocolCallable(const Model::ModifySagPortRouteProtocolRequest& request) const;
			ModifySagRemoteAccessOutcome modifySagRemoteAccess(const Model::ModifySagRemoteAccessRequest &request)const;
			void modifySagRemoteAccessAsync(const Model::ModifySagRemoteAccessRequest& request, const ModifySagRemoteAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySagRemoteAccessOutcomeCallable modifySagRemoteAccessCallable(const Model::ModifySagRemoteAccessRequest& request) const;
			ModifySagRouteProtocolBgpOutcome modifySagRouteProtocolBgp(const Model::ModifySagRouteProtocolBgpRequest &request)const;
			void modifySagRouteProtocolBgpAsync(const Model::ModifySagRouteProtocolBgpRequest& request, const ModifySagRouteProtocolBgpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySagRouteProtocolBgpOutcomeCallable modifySagRouteProtocolBgpCallable(const Model::ModifySagRouteProtocolBgpRequest& request) const;
			ModifySagRouteProtocolOspfOutcome modifySagRouteProtocolOspf(const Model::ModifySagRouteProtocolOspfRequest &request)const;
			void modifySagRouteProtocolOspfAsync(const Model::ModifySagRouteProtocolOspfRequest& request, const ModifySagRouteProtocolOspfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySagRouteProtocolOspfOutcomeCallable modifySagRouteProtocolOspfCallable(const Model::ModifySagRouteProtocolOspfRequest& request) const;
			ModifySagStaticRouteOutcome modifySagStaticRoute(const Model::ModifySagStaticRouteRequest &request)const;
			void modifySagStaticRouteAsync(const Model::ModifySagStaticRouteRequest& request, const ModifySagStaticRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySagStaticRouteOutcomeCallable modifySagStaticRouteCallable(const Model::ModifySagStaticRouteRequest& request) const;
			ModifySagUserDnsOutcome modifySagUserDns(const Model::ModifySagUserDnsRequest &request)const;
			void modifySagUserDnsAsync(const Model::ModifySagUserDnsRequest& request, const ModifySagUserDnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySagUserDnsOutcomeCallable modifySagUserDnsCallable(const Model::ModifySagUserDnsRequest& request) const;
			ModifySagWanOutcome modifySagWan(const Model::ModifySagWanRequest &request)const;
			void modifySagWanAsync(const Model::ModifySagWanRequest& request, const ModifySagWanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySagWanOutcomeCallable modifySagWanCallable(const Model::ModifySagWanRequest& request) const;
			ModifySagWanSnatOutcome modifySagWanSnat(const Model::ModifySagWanSnatRequest &request)const;
			void modifySagWanSnatAsync(const Model::ModifySagWanSnatRequest& request, const ModifySagWanSnatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySagWanSnatOutcomeCallable modifySagWanSnatCallable(const Model::ModifySagWanSnatRequest& request) const;
			ModifySagWifiOutcome modifySagWifi(const Model::ModifySagWifiRequest &request)const;
			void modifySagWifiAsync(const Model::ModifySagWifiRequest& request, const ModifySagWifiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySagWifiOutcomeCallable modifySagWifiCallable(const Model::ModifySagWifiRequest& request) const;
			ModifySmartAccessGatewayOutcome modifySmartAccessGateway(const Model::ModifySmartAccessGatewayRequest &request)const;
			void modifySmartAccessGatewayAsync(const Model::ModifySmartAccessGatewayRequest& request, const ModifySmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySmartAccessGatewayOutcomeCallable modifySmartAccessGatewayCallable(const Model::ModifySmartAccessGatewayRequest& request) const;
			ModifySmartAccessGatewayClientUserOutcome modifySmartAccessGatewayClientUser(const Model::ModifySmartAccessGatewayClientUserRequest &request)const;
			void modifySmartAccessGatewayClientUserAsync(const Model::ModifySmartAccessGatewayClientUserRequest& request, const ModifySmartAccessGatewayClientUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySmartAccessGatewayClientUserOutcomeCallable modifySmartAccessGatewayClientUserCallable(const Model::ModifySmartAccessGatewayClientUserRequest& request) const;
			ModifySmartAccessGatewayUpBandwidthOutcome modifySmartAccessGatewayUpBandwidth(const Model::ModifySmartAccessGatewayUpBandwidthRequest &request)const;
			void modifySmartAccessGatewayUpBandwidthAsync(const Model::ModifySmartAccessGatewayUpBandwidthRequest& request, const ModifySmartAccessGatewayUpBandwidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySmartAccessGatewayUpBandwidthOutcomeCallable modifySmartAccessGatewayUpBandwidthCallable(const Model::ModifySmartAccessGatewayUpBandwidthRequest& request) const;
			MoveResourceGroupOutcome moveResourceGroup(const Model::MoveResourceGroupRequest &request)const;
			void moveResourceGroupAsync(const Model::MoveResourceGroupRequest& request, const MoveResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MoveResourceGroupOutcomeCallable moveResourceGroupCallable(const Model::MoveResourceGroupRequest& request) const;
			ProbeAccessPointNetworkQualityOutcome probeAccessPointNetworkQuality(const Model::ProbeAccessPointNetworkQualityRequest &request)const;
			void probeAccessPointNetworkQualityAsync(const Model::ProbeAccessPointNetworkQualityRequest& request, const ProbeAccessPointNetworkQualityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ProbeAccessPointNetworkQualityOutcomeCallable probeAccessPointNetworkQualityCallable(const Model::ProbeAccessPointNetworkQualityRequest& request) const;
			RebootSmartAccessGatewayOutcome rebootSmartAccessGateway(const Model::RebootSmartAccessGatewayRequest &request)const;
			void rebootSmartAccessGatewayAsync(const Model::RebootSmartAccessGatewayRequest& request, const RebootSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RebootSmartAccessGatewayOutcomeCallable rebootSmartAccessGatewayCallable(const Model::RebootSmartAccessGatewayRequest& request) const;
			ResetSmartAccessGatewayClientUserPasswordOutcome resetSmartAccessGatewayClientUserPassword(const Model::ResetSmartAccessGatewayClientUserPasswordRequest &request)const;
			void resetSmartAccessGatewayClientUserPasswordAsync(const Model::ResetSmartAccessGatewayClientUserPasswordRequest& request, const ResetSmartAccessGatewayClientUserPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ResetSmartAccessGatewayClientUserPasswordOutcomeCallable resetSmartAccessGatewayClientUserPasswordCallable(const Model::ResetSmartAccessGatewayClientUserPasswordRequest& request) const;
			RevokeInstanceFromCbnOutcome revokeInstanceFromCbn(const Model::RevokeInstanceFromCbnRequest &request)const;
			void revokeInstanceFromCbnAsync(const Model::RevokeInstanceFromCbnRequest& request, const RevokeInstanceFromCbnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeInstanceFromCbnOutcomeCallable revokeInstanceFromCbnCallable(const Model::RevokeInstanceFromCbnRequest& request) const;
			RevokeInstanceFromVbrOutcome revokeInstanceFromVbr(const Model::RevokeInstanceFromVbrRequest &request)const;
			void revokeInstanceFromVbrAsync(const Model::RevokeInstanceFromVbrRequest& request, const RevokeInstanceFromVbrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeInstanceFromVbrOutcomeCallable revokeInstanceFromVbrCallable(const Model::RevokeInstanceFromVbrRequest& request) const;
			RevokeSagInstanceFromCcnOutcome revokeSagInstanceFromCcn(const Model::RevokeSagInstanceFromCcnRequest &request)const;
			void revokeSagInstanceFromCcnAsync(const Model::RevokeSagInstanceFromCcnRequest& request, const RevokeSagInstanceFromCcnAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokeSagInstanceFromCcnOutcomeCallable revokeSagInstanceFromCcnCallable(const Model::RevokeSagInstanceFromCcnRequest& request) const;
			RoamClientUserOutcome roamClientUser(const Model::RoamClientUserRequest &request)const;
			void roamClientUserAsync(const Model::RoamClientUserRequest& request, const RoamClientUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RoamClientUserOutcomeCallable roamClientUserCallable(const Model::RoamClientUserRequest& request) const;
			SynchronizeSmartAGWebConfigOutcome synchronizeSmartAGWebConfig(const Model::SynchronizeSmartAGWebConfigRequest &request)const;
			void synchronizeSmartAGWebConfigAsync(const Model::SynchronizeSmartAGWebConfigRequest& request, const SynchronizeSmartAGWebConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SynchronizeSmartAGWebConfigOutcomeCallable synchronizeSmartAGWebConfigCallable(const Model::SynchronizeSmartAGWebConfigRequest& request) const;
			UnbindSerialNumberOutcome unbindSerialNumber(const Model::UnbindSerialNumberRequest &request)const;
			void unbindSerialNumberAsync(const Model::UnbindSerialNumberRequest& request, const UnbindSerialNumberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindSerialNumberOutcomeCallable unbindSerialNumberCallable(const Model::UnbindSerialNumberRequest& request) const;
			UnbindSmartAccessGatewayOutcome unbindSmartAccessGateway(const Model::UnbindSmartAccessGatewayRequest &request)const;
			void unbindSmartAccessGatewayAsync(const Model::UnbindSmartAccessGatewayRequest& request, const UnbindSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindSmartAccessGatewayOutcomeCallable unbindSmartAccessGatewayCallable(const Model::UnbindSmartAccessGatewayRequest& request) const;
			UnbindVbrOutcome unbindVbr(const Model::UnbindVbrRequest &request)const;
			void unbindVbrAsync(const Model::UnbindVbrRequest& request, const UnbindVbrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnbindVbrOutcomeCallable unbindVbrCallable(const Model::UnbindVbrRequest& request) const;
			UnlockSmartAccessGatewayOutcome unlockSmartAccessGateway(const Model::UnlockSmartAccessGatewayRequest &request)const;
			void unlockSmartAccessGatewayAsync(const Model::UnlockSmartAccessGatewayRequest& request, const UnlockSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UnlockSmartAccessGatewayOutcomeCallable unlockSmartAccessGatewayCallable(const Model::UnlockSmartAccessGatewayRequest& request) const;
			UpdateEnterpriseCodeOutcome updateEnterpriseCode(const Model::UpdateEnterpriseCodeRequest &request)const;
			void updateEnterpriseCodeAsync(const Model::UpdateEnterpriseCodeRequest& request, const UpdateEnterpriseCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateEnterpriseCodeOutcomeCallable updateEnterpriseCodeCallable(const Model::UpdateEnterpriseCodeRequest& request) const;
			UpdateSmartAGAccessPointOutcome updateSmartAGAccessPoint(const Model::UpdateSmartAGAccessPointRequest &request)const;
			void updateSmartAGAccessPointAsync(const Model::UpdateSmartAGAccessPointRequest& request, const UpdateSmartAGAccessPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSmartAGAccessPointOutcomeCallable updateSmartAGAccessPointCallable(const Model::UpdateSmartAGAccessPointRequest& request) const;
			UpdateSmartAGDpiAttributeOutcome updateSmartAGDpiAttribute(const Model::UpdateSmartAGDpiAttributeRequest &request)const;
			void updateSmartAGDpiAttributeAsync(const Model::UpdateSmartAGDpiAttributeRequest& request, const UpdateSmartAGDpiAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSmartAGDpiAttributeOutcomeCallable updateSmartAGDpiAttributeCallable(const Model::UpdateSmartAGDpiAttributeRequest& request) const;
			UpdateSmartAGEnterpriseCodeOutcome updateSmartAGEnterpriseCode(const Model::UpdateSmartAGEnterpriseCodeRequest &request)const;
			void updateSmartAGEnterpriseCodeAsync(const Model::UpdateSmartAGEnterpriseCodeRequest& request, const UpdateSmartAGEnterpriseCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSmartAGEnterpriseCodeOutcomeCallable updateSmartAGEnterpriseCodeCallable(const Model::UpdateSmartAGEnterpriseCodeRequest& request) const;
			UpdateSmartAccessGatewayVersionOutcome updateSmartAccessGatewayVersion(const Model::UpdateSmartAccessGatewayVersionRequest &request)const;
			void updateSmartAccessGatewayVersionAsync(const Model::UpdateSmartAccessGatewayVersionRequest& request, const UpdateSmartAccessGatewayVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateSmartAccessGatewayVersionOutcomeCallable updateSmartAccessGatewayVersionCallable(const Model::UpdateSmartAccessGatewayVersionRequest& request) const;
			UpgradeSmartAccessGatewayOutcome upgradeSmartAccessGateway(const Model::UpgradeSmartAccessGatewayRequest &request)const;
			void upgradeSmartAccessGatewayAsync(const Model::UpgradeSmartAccessGatewayRequest& request, const UpgradeSmartAccessGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeSmartAccessGatewayOutcomeCallable upgradeSmartAccessGatewayCallable(const Model::UpgradeSmartAccessGatewayRequest& request) const;
			UpgradeSmartAccessGatewaySoftwareOutcome upgradeSmartAccessGatewaySoftware(const Model::UpgradeSmartAccessGatewaySoftwareRequest &request)const;
			void upgradeSmartAccessGatewaySoftwareAsync(const Model::UpgradeSmartAccessGatewaySoftwareRequest& request, const UpgradeSmartAccessGatewaySoftwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpgradeSmartAccessGatewaySoftwareOutcomeCallable upgradeSmartAccessGatewaySoftwareCallable(const Model::UpgradeSmartAccessGatewaySoftwareRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_SMARTAG_SMARTAGCLIENT_H_
