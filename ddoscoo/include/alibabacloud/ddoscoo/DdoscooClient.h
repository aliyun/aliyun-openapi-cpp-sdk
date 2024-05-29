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

#ifndef ALIBABACLOUD_DDOSCOO_DDOSCOOCLIENT_H_
#define ALIBABACLOUD_DDOSCOO_DDOSCOOCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "DdoscooExport.h"
#include "model/AddAutoCcBlacklistRequest.h"
#include "model/AddAutoCcBlacklistResult.h"
#include "model/AddAutoCcWhitelistRequest.h"
#include "model/AddAutoCcWhitelistResult.h"
#include "model/AssociateWebCertRequest.h"
#include "model/AssociateWebCertResult.h"
#include "model/AttachSceneDefenseObjectRequest.h"
#include "model/AttachSceneDefenseObjectResult.h"
#include "model/ConfigL7RsPolicyRequest.h"
#include "model/ConfigL7RsPolicyResult.h"
#include "model/ConfigLayer4RealLimitRequest.h"
#include "model/ConfigLayer4RealLimitResult.h"
#include "model/ConfigLayer4RemarkRequest.h"
#include "model/ConfigLayer4RemarkResult.h"
#include "model/ConfigLayer4RuleBakModeRequest.h"
#include "model/ConfigLayer4RuleBakModeResult.h"
#include "model/ConfigLayer4RulePolicyRequest.h"
#include "model/ConfigLayer4RulePolicyResult.h"
#include "model/ConfigNetworkRegionBlockRequest.h"
#include "model/ConfigNetworkRegionBlockResult.h"
#include "model/ConfigNetworkRulesRequest.h"
#include "model/ConfigNetworkRulesResult.h"
#include "model/ConfigUdpReflectRequest.h"
#include "model/ConfigUdpReflectResult.h"
#include "model/ConfigWebCCTemplateRequest.h"
#include "model/ConfigWebCCTemplateResult.h"
#include "model/ConfigWebIpSetRequest.h"
#include "model/ConfigWebIpSetResult.h"
#include "model/CreateAsyncTaskRequest.h"
#include "model/CreateAsyncTaskResult.h"
#include "model/CreateDomainResourceRequest.h"
#include "model/CreateDomainResourceResult.h"
#include "model/CreateNetworkRulesRequest.h"
#include "model/CreateNetworkRulesResult.h"
#include "model/CreatePortRequest.h"
#include "model/CreatePortResult.h"
#include "model/CreateSceneDefensePolicyRequest.h"
#include "model/CreateSceneDefensePolicyResult.h"
#include "model/CreateSchedulerRuleRequest.h"
#include "model/CreateSchedulerRuleResult.h"
#include "model/CreateTagResourcesRequest.h"
#include "model/CreateTagResourcesResult.h"
#include "model/CreateWebCCRuleRequest.h"
#include "model/CreateWebCCRuleResult.h"
#include "model/CreateWebRuleRequest.h"
#include "model/CreateWebRuleResult.h"
#include "model/DeleteAsyncTaskRequest.h"
#include "model/DeleteAsyncTaskResult.h"
#include "model/DeleteAutoCcBlacklistRequest.h"
#include "model/DeleteAutoCcBlacklistResult.h"
#include "model/DeleteAutoCcWhitelistRequest.h"
#include "model/DeleteAutoCcWhitelistResult.h"
#include "model/DeleteDomainResourceRequest.h"
#include "model/DeleteDomainResourceResult.h"
#include "model/DeleteNetworkRuleRequest.h"
#include "model/DeleteNetworkRuleResult.h"
#include "model/DeletePortRequest.h"
#include "model/DeletePortResult.h"
#include "model/DeleteSceneDefensePolicyRequest.h"
#include "model/DeleteSceneDefensePolicyResult.h"
#include "model/DeleteSchedulerRuleRequest.h"
#include "model/DeleteSchedulerRuleResult.h"
#include "model/DeleteTagResourcesRequest.h"
#include "model/DeleteTagResourcesResult.h"
#include "model/DeleteWebCCRuleRequest.h"
#include "model/DeleteWebCCRuleResult.h"
#include "model/DeleteWebCacheCustomRuleRequest.h"
#include "model/DeleteWebCacheCustomRuleResult.h"
#include "model/DeleteWebPreciseAccessRuleRequest.h"
#include "model/DeleteWebPreciseAccessRuleResult.h"
#include "model/DeleteWebRuleRequest.h"
#include "model/DeleteWebRuleResult.h"
#include "model/DescribeAsyncTasksRequest.h"
#include "model/DescribeAsyncTasksResult.h"
#include "model/DescribeAttackAnalysisMaxQpsRequest.h"
#include "model/DescribeAttackAnalysisMaxQpsResult.h"
#include "model/DescribeAutoCcBlacklistRequest.h"
#include "model/DescribeAutoCcBlacklistResult.h"
#include "model/DescribeAutoCcListCountRequest.h"
#include "model/DescribeAutoCcListCountResult.h"
#include "model/DescribeAutoCcWhitelistRequest.h"
#include "model/DescribeAutoCcWhitelistResult.h"
#include "model/DescribeBackSourceCidrRequest.h"
#include "model/DescribeBackSourceCidrResult.h"
#include "model/DescribeBlackholeStatusRequest.h"
#include "model/DescribeBlackholeStatusResult.h"
#include "model/DescribeBlockStatusRequest.h"
#include "model/DescribeBlockStatusResult.h"
#include "model/DescribeCertsRequest.h"
#include "model/DescribeCertsResult.h"
#include "model/DescribeCnameReusesRequest.h"
#include "model/DescribeCnameReusesResult.h"
#include "model/DescribeDDoSEventsRequest.h"
#include "model/DescribeDDoSEventsResult.h"
#include "model/DescribeDDosAllEventListRequest.h"
#include "model/DescribeDDosAllEventListResult.h"
#include "model/DescribeDDosEventAreaRequest.h"
#include "model/DescribeDDosEventAreaResult.h"
#include "model/DescribeDDosEventAttackTypeRequest.h"
#include "model/DescribeDDosEventAttackTypeResult.h"
#include "model/DescribeDDosEventIspRequest.h"
#include "model/DescribeDDosEventIspResult.h"
#include "model/DescribeDDosEventMaxRequest.h"
#include "model/DescribeDDosEventMaxResult.h"
#include "model/DescribeDDosEventSrcIpRequest.h"
#include "model/DescribeDDosEventSrcIpResult.h"
#include "model/DescribeDefenseCountStatisticsRequest.h"
#include "model/DescribeDefenseCountStatisticsResult.h"
#include "model/DescribeDefenseRecordsRequest.h"
#include "model/DescribeDefenseRecordsResult.h"
#include "model/DescribeDomainAttackEventsRequest.h"
#include "model/DescribeDomainAttackEventsResult.h"
#include "model/DescribeDomainOverviewRequest.h"
#include "model/DescribeDomainOverviewResult.h"
#include "model/DescribeDomainQPSListRequest.h"
#include "model/DescribeDomainQPSListResult.h"
#include "model/DescribeDomainResourceRequest.h"
#include "model/DescribeDomainResourceResult.h"
#include "model/DescribeDomainSecurityProfileRequest.h"
#include "model/DescribeDomainSecurityProfileResult.h"
#include "model/DescribeDomainStatusCodeCountRequest.h"
#include "model/DescribeDomainStatusCodeCountResult.h"
#include "model/DescribeDomainStatusCodeListRequest.h"
#include "model/DescribeDomainStatusCodeListResult.h"
#include "model/DescribeDomainTopAttackListRequest.h"
#include "model/DescribeDomainTopAttackListResult.h"
#include "model/DescribeDomainViewSourceCountriesRequest.h"
#include "model/DescribeDomainViewSourceCountriesResult.h"
#include "model/DescribeDomainViewSourceProvincesRequest.h"
#include "model/DescribeDomainViewSourceProvincesResult.h"
#include "model/DescribeDomainViewTopCostTimeRequest.h"
#include "model/DescribeDomainViewTopCostTimeResult.h"
#include "model/DescribeDomainViewTopUrlRequest.h"
#include "model/DescribeDomainViewTopUrlResult.h"
#include "model/DescribeDomainsRequest.h"
#include "model/DescribeDomainsResult.h"
#include "model/DescribeElasticBandwidthSpecRequest.h"
#include "model/DescribeElasticBandwidthSpecResult.h"
#include "model/DescribeElasticQpsRequest.h"
#include "model/DescribeElasticQpsResult.h"
#include "model/DescribeElasticQpsRecordRequest.h"
#include "model/DescribeElasticQpsRecordResult.h"
#include "model/DescribeHeadersRequest.h"
#include "model/DescribeHeadersResult.h"
#include "model/DescribeHealthCheckListRequest.h"
#include "model/DescribeHealthCheckListResult.h"
#include "model/DescribeHealthCheckStatusRequest.h"
#include "model/DescribeHealthCheckStatusResult.h"
#include "model/DescribeInstanceDetailsRequest.h"
#include "model/DescribeInstanceDetailsResult.h"
#include "model/DescribeInstanceExtRequest.h"
#include "model/DescribeInstanceExtResult.h"
#include "model/DescribeInstanceIdsRequest.h"
#include "model/DescribeInstanceIdsResult.h"
#include "model/DescribeInstanceSpecsRequest.h"
#include "model/DescribeInstanceSpecsResult.h"
#include "model/DescribeInstanceStatisticsRequest.h"
#include "model/DescribeInstanceStatisticsResult.h"
#include "model/DescribeInstanceStatusRequest.h"
#include "model/DescribeInstanceStatusResult.h"
#include "model/DescribeInstancesRequest.h"
#include "model/DescribeInstancesResult.h"
#include "model/DescribeL7RsPolicyRequest.h"
#include "model/DescribeL7RsPolicyResult.h"
#include "model/DescribeLayer4RulePolicyRequest.h"
#include "model/DescribeLayer4RulePolicyResult.h"
#include "model/DescribeLogStoreExistStatusRequest.h"
#include "model/DescribeLogStoreExistStatusResult.h"
#include "model/DescribeNetworkRegionBlockRequest.h"
#include "model/DescribeNetworkRegionBlockResult.h"
#include "model/DescribeNetworkRuleAttributesRequest.h"
#include "model/DescribeNetworkRuleAttributesResult.h"
#include "model/DescribeNetworkRulesRequest.h"
#include "model/DescribeNetworkRulesResult.h"
#include "model/DescribeOpEntitiesRequest.h"
#include "model/DescribeOpEntitiesResult.h"
#include "model/DescribePortRequest.h"
#include "model/DescribePortResult.h"
#include "model/DescribePortAttackMaxFlowRequest.h"
#include "model/DescribePortAttackMaxFlowResult.h"
#include "model/DescribePortAutoCcStatusRequest.h"
#include "model/DescribePortAutoCcStatusResult.h"
#include "model/DescribePortCcAttackTopIPRequest.h"
#include "model/DescribePortCcAttackTopIPResult.h"
#include "model/DescribePortConnsCountRequest.h"
#include "model/DescribePortConnsCountResult.h"
#include "model/DescribePortConnsListRequest.h"
#include "model/DescribePortConnsListResult.h"
#include "model/DescribePortFlowListRequest.h"
#include "model/DescribePortFlowListResult.h"
#include "model/DescribePortMaxConnsRequest.h"
#include "model/DescribePortMaxConnsResult.h"
#include "model/DescribePortViewSourceCountriesRequest.h"
#include "model/DescribePortViewSourceCountriesResult.h"
#include "model/DescribePortViewSourceIspsRequest.h"
#include "model/DescribePortViewSourceIspsResult.h"
#include "model/DescribePortViewSourceProvincesRequest.h"
#include "model/DescribePortViewSourceProvincesResult.h"
#include "model/DescribeSceneDefenseObjectsRequest.h"
#include "model/DescribeSceneDefenseObjectsResult.h"
#include "model/DescribeSceneDefensePoliciesRequest.h"
#include "model/DescribeSceneDefensePoliciesResult.h"
#include "model/DescribeSchedulerRulesRequest.h"
#include "model/DescribeSchedulerRulesResult.h"
#include "model/DescribeSlaEventListRequest.h"
#include "model/DescribeSlaEventListResult.h"
#include "model/DescribeSlsAuthStatusRequest.h"
#include "model/DescribeSlsAuthStatusResult.h"
#include "model/DescribeSlsLogstoreInfoRequest.h"
#include "model/DescribeSlsLogstoreInfoResult.h"
#include "model/DescribeSlsOpenStatusRequest.h"
#include "model/DescribeSlsOpenStatusResult.h"
#include "model/DescribeStsGrantStatusRequest.h"
#include "model/DescribeStsGrantStatusResult.h"
#include "model/DescribeSystemLogRequest.h"
#include "model/DescribeSystemLogResult.h"
#include "model/DescribeTagKeysRequest.h"
#include "model/DescribeTagKeysResult.h"
#include "model/DescribeTagResourcesRequest.h"
#include "model/DescribeTagResourcesResult.h"
#include "model/DescribeTotalAttackMaxFlowRequest.h"
#include "model/DescribeTotalAttackMaxFlowResult.h"
#include "model/DescribeUdpReflectRequest.h"
#include "model/DescribeUdpReflectResult.h"
#include "model/DescribeUnBlackholeCountRequest.h"
#include "model/DescribeUnBlackholeCountResult.h"
#include "model/DescribeUnBlockCountRequest.h"
#include "model/DescribeUnBlockCountResult.h"
#include "model/DescribeWebAccessLogDispatchStatusRequest.h"
#include "model/DescribeWebAccessLogDispatchStatusResult.h"
#include "model/DescribeWebAccessLogEmptyCountRequest.h"
#include "model/DescribeWebAccessLogEmptyCountResult.h"
#include "model/DescribeWebAccessLogStatusRequest.h"
#include "model/DescribeWebAccessLogStatusResult.h"
#include "model/DescribeWebAccessModeRequest.h"
#include "model/DescribeWebAccessModeResult.h"
#include "model/DescribeWebAreaBlockConfigsRequest.h"
#include "model/DescribeWebAreaBlockConfigsResult.h"
#include "model/DescribeWebCCRulesRequest.h"
#include "model/DescribeWebCCRulesResult.h"
#include "model/DescribeWebCacheConfigsRequest.h"
#include "model/DescribeWebCacheConfigsResult.h"
#include "model/DescribeWebCcProtectSwitchRequest.h"
#include "model/DescribeWebCcProtectSwitchResult.h"
#include "model/DescribeWebCustomPortsRequest.h"
#include "model/DescribeWebCustomPortsResult.h"
#include "model/DescribeWebInstanceRelationsRequest.h"
#include "model/DescribeWebInstanceRelationsResult.h"
#include "model/DescribeWebPreciseAccessRuleRequest.h"
#include "model/DescribeWebPreciseAccessRuleResult.h"
#include "model/DescribeWebReportTopIpRequest.h"
#include "model/DescribeWebReportTopIpResult.h"
#include "model/DescribeWebRulesRequest.h"
#include "model/DescribeWebRulesResult.h"
#include "model/DetachSceneDefenseObjectRequest.h"
#include "model/DetachSceneDefenseObjectResult.h"
#include "model/DisableSceneDefensePolicyRequest.h"
#include "model/DisableSceneDefensePolicyResult.h"
#include "model/DisableWebAccessLogConfigRequest.h"
#include "model/DisableWebAccessLogConfigResult.h"
#include "model/DisableWebCCRequest.h"
#include "model/DisableWebCCResult.h"
#include "model/DisableWebCCRuleRequest.h"
#include "model/DisableWebCCRuleResult.h"
#include "model/EmptyAutoCcBlacklistRequest.h"
#include "model/EmptyAutoCcBlacklistResult.h"
#include "model/EmptyAutoCcWhitelistRequest.h"
#include "model/EmptyAutoCcWhitelistResult.h"
#include "model/EmptySlsLogstoreRequest.h"
#include "model/EmptySlsLogstoreResult.h"
#include "model/EnableSceneDefensePolicyRequest.h"
#include "model/EnableSceneDefensePolicyResult.h"
#include "model/EnableWebAccessLogConfigRequest.h"
#include "model/EnableWebAccessLogConfigResult.h"
#include "model/EnableWebCCRequest.h"
#include "model/EnableWebCCResult.h"
#include "model/EnableWebCCRuleRequest.h"
#include "model/EnableWebCCRuleResult.h"
#include "model/ModifyBizBandWidthModeRequest.h"
#include "model/ModifyBizBandWidthModeResult.h"
#include "model/ModifyBlackholeStatusRequest.h"
#include "model/ModifyBlackholeStatusResult.h"
#include "model/ModifyBlockStatusRequest.h"
#include "model/ModifyBlockStatusResult.h"
#include "model/ModifyCnameReuseRequest.h"
#include "model/ModifyCnameReuseResult.h"
#include "model/ModifyDomainResourceRequest.h"
#include "model/ModifyDomainResourceResult.h"
#include "model/ModifyElasticBandWidthRequest.h"
#include "model/ModifyElasticBandWidthResult.h"
#include "model/ModifyElasticBizBandWidthRequest.h"
#include "model/ModifyElasticBizBandWidthResult.h"
#include "model/ModifyElasticBizQpsRequest.h"
#include "model/ModifyElasticBizQpsResult.h"
#include "model/ModifyFullLogTtlRequest.h"
#include "model/ModifyFullLogTtlResult.h"
#include "model/ModifyHeadersRequest.h"
#include "model/ModifyHeadersResult.h"
#include "model/ModifyHealthCheckConfigRequest.h"
#include "model/ModifyHealthCheckConfigResult.h"
#include "model/ModifyHttp2EnableRequest.h"
#include "model/ModifyHttp2EnableResult.h"
#include "model/ModifyInstanceRemarkRequest.h"
#include "model/ModifyInstanceRemarkResult.h"
#include "model/ModifyNetworkRuleAttributeRequest.h"
#include "model/ModifyNetworkRuleAttributeResult.h"
#include "model/ModifyOcspStatusRequest.h"
#include "model/ModifyOcspStatusResult.h"
#include "model/ModifyPortRequest.h"
#include "model/ModifyPortResult.h"
#include "model/ModifyPortAutoCcStatusRequest.h"
#include "model/ModifyPortAutoCcStatusResult.h"
#include "model/ModifyQpsModeRequest.h"
#include "model/ModifyQpsModeResult.h"
#include "model/ModifySceneDefensePolicyRequest.h"
#include "model/ModifySceneDefensePolicyResult.h"
#include "model/ModifySchedulerRuleRequest.h"
#include "model/ModifySchedulerRuleResult.h"
#include "model/ModifyTlsConfigRequest.h"
#include "model/ModifyTlsConfigResult.h"
#include "model/ModifyWebAIProtectModeRequest.h"
#include "model/ModifyWebAIProtectModeResult.h"
#include "model/ModifyWebAIProtectSwitchRequest.h"
#include "model/ModifyWebAIProtectSwitchResult.h"
#include "model/ModifyWebAccessModeRequest.h"
#include "model/ModifyWebAccessModeResult.h"
#include "model/ModifyWebAreaBlockRequest.h"
#include "model/ModifyWebAreaBlockResult.h"
#include "model/ModifyWebAreaBlockSwitchRequest.h"
#include "model/ModifyWebAreaBlockSwitchResult.h"
#include "model/ModifyWebCCRuleRequest.h"
#include "model/ModifyWebCCRuleResult.h"
#include "model/ModifyWebCacheCustomRuleRequest.h"
#include "model/ModifyWebCacheCustomRuleResult.h"
#include "model/ModifyWebCacheModeRequest.h"
#include "model/ModifyWebCacheModeResult.h"
#include "model/ModifyWebCacheSwitchRequest.h"
#include "model/ModifyWebCacheSwitchResult.h"
#include "model/ModifyWebIpSetSwitchRequest.h"
#include "model/ModifyWebIpSetSwitchResult.h"
#include "model/ModifyWebPreciseAccessRuleRequest.h"
#include "model/ModifyWebPreciseAccessRuleResult.h"
#include "model/ModifyWebPreciseAccessSwitchRequest.h"
#include "model/ModifyWebPreciseAccessSwitchResult.h"
#include "model/ModifyWebRuleRequest.h"
#include "model/ModifyWebRuleResult.h"
#include "model/ReleaseInstanceRequest.h"
#include "model/ReleaseInstanceResult.h"
#include "model/SwitchSchedulerRuleRequest.h"
#include "model/SwitchSchedulerRuleResult.h"


namespace AlibabaCloud
{
	namespace Ddoscoo
	{
		class ALIBABACLOUD_DDOSCOO_EXPORT DdoscooClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddAutoCcBlacklistResult> AddAutoCcBlacklistOutcome;
			typedef std::future<AddAutoCcBlacklistOutcome> AddAutoCcBlacklistOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::AddAutoCcBlacklistRequest&, const AddAutoCcBlacklistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddAutoCcBlacklistAsyncHandler;
			typedef Outcome<Error, Model::AddAutoCcWhitelistResult> AddAutoCcWhitelistOutcome;
			typedef std::future<AddAutoCcWhitelistOutcome> AddAutoCcWhitelistOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::AddAutoCcWhitelistRequest&, const AddAutoCcWhitelistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddAutoCcWhitelistAsyncHandler;
			typedef Outcome<Error, Model::AssociateWebCertResult> AssociateWebCertOutcome;
			typedef std::future<AssociateWebCertOutcome> AssociateWebCertOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::AssociateWebCertRequest&, const AssociateWebCertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AssociateWebCertAsyncHandler;
			typedef Outcome<Error, Model::AttachSceneDefenseObjectResult> AttachSceneDefenseObjectOutcome;
			typedef std::future<AttachSceneDefenseObjectOutcome> AttachSceneDefenseObjectOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::AttachSceneDefenseObjectRequest&, const AttachSceneDefenseObjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AttachSceneDefenseObjectAsyncHandler;
			typedef Outcome<Error, Model::ConfigL7RsPolicyResult> ConfigL7RsPolicyOutcome;
			typedef std::future<ConfigL7RsPolicyOutcome> ConfigL7RsPolicyOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ConfigL7RsPolicyRequest&, const ConfigL7RsPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigL7RsPolicyAsyncHandler;
			typedef Outcome<Error, Model::ConfigLayer4RealLimitResult> ConfigLayer4RealLimitOutcome;
			typedef std::future<ConfigLayer4RealLimitOutcome> ConfigLayer4RealLimitOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ConfigLayer4RealLimitRequest&, const ConfigLayer4RealLimitOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigLayer4RealLimitAsyncHandler;
			typedef Outcome<Error, Model::ConfigLayer4RemarkResult> ConfigLayer4RemarkOutcome;
			typedef std::future<ConfigLayer4RemarkOutcome> ConfigLayer4RemarkOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ConfigLayer4RemarkRequest&, const ConfigLayer4RemarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigLayer4RemarkAsyncHandler;
			typedef Outcome<Error, Model::ConfigLayer4RuleBakModeResult> ConfigLayer4RuleBakModeOutcome;
			typedef std::future<ConfigLayer4RuleBakModeOutcome> ConfigLayer4RuleBakModeOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ConfigLayer4RuleBakModeRequest&, const ConfigLayer4RuleBakModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigLayer4RuleBakModeAsyncHandler;
			typedef Outcome<Error, Model::ConfigLayer4RulePolicyResult> ConfigLayer4RulePolicyOutcome;
			typedef std::future<ConfigLayer4RulePolicyOutcome> ConfigLayer4RulePolicyOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ConfigLayer4RulePolicyRequest&, const ConfigLayer4RulePolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigLayer4RulePolicyAsyncHandler;
			typedef Outcome<Error, Model::ConfigNetworkRegionBlockResult> ConfigNetworkRegionBlockOutcome;
			typedef std::future<ConfigNetworkRegionBlockOutcome> ConfigNetworkRegionBlockOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ConfigNetworkRegionBlockRequest&, const ConfigNetworkRegionBlockOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigNetworkRegionBlockAsyncHandler;
			typedef Outcome<Error, Model::ConfigNetworkRulesResult> ConfigNetworkRulesOutcome;
			typedef std::future<ConfigNetworkRulesOutcome> ConfigNetworkRulesOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ConfigNetworkRulesRequest&, const ConfigNetworkRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigNetworkRulesAsyncHandler;
			typedef Outcome<Error, Model::ConfigUdpReflectResult> ConfigUdpReflectOutcome;
			typedef std::future<ConfigUdpReflectOutcome> ConfigUdpReflectOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ConfigUdpReflectRequest&, const ConfigUdpReflectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigUdpReflectAsyncHandler;
			typedef Outcome<Error, Model::ConfigWebCCTemplateResult> ConfigWebCCTemplateOutcome;
			typedef std::future<ConfigWebCCTemplateOutcome> ConfigWebCCTemplateOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ConfigWebCCTemplateRequest&, const ConfigWebCCTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigWebCCTemplateAsyncHandler;
			typedef Outcome<Error, Model::ConfigWebIpSetResult> ConfigWebIpSetOutcome;
			typedef std::future<ConfigWebIpSetOutcome> ConfigWebIpSetOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ConfigWebIpSetRequest&, const ConfigWebIpSetOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigWebIpSetAsyncHandler;
			typedef Outcome<Error, Model::CreateAsyncTaskResult> CreateAsyncTaskOutcome;
			typedef std::future<CreateAsyncTaskOutcome> CreateAsyncTaskOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::CreateAsyncTaskRequest&, const CreateAsyncTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAsyncTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateDomainResourceResult> CreateDomainResourceOutcome;
			typedef std::future<CreateDomainResourceOutcome> CreateDomainResourceOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::CreateDomainResourceRequest&, const CreateDomainResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDomainResourceAsyncHandler;
			typedef Outcome<Error, Model::CreateNetworkRulesResult> CreateNetworkRulesOutcome;
			typedef std::future<CreateNetworkRulesOutcome> CreateNetworkRulesOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::CreateNetworkRulesRequest&, const CreateNetworkRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNetworkRulesAsyncHandler;
			typedef Outcome<Error, Model::CreatePortResult> CreatePortOutcome;
			typedef std::future<CreatePortOutcome> CreatePortOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::CreatePortRequest&, const CreatePortOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreatePortAsyncHandler;
			typedef Outcome<Error, Model::CreateSceneDefensePolicyResult> CreateSceneDefensePolicyOutcome;
			typedef std::future<CreateSceneDefensePolicyOutcome> CreateSceneDefensePolicyOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::CreateSceneDefensePolicyRequest&, const CreateSceneDefensePolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSceneDefensePolicyAsyncHandler;
			typedef Outcome<Error, Model::CreateSchedulerRuleResult> CreateSchedulerRuleOutcome;
			typedef std::future<CreateSchedulerRuleOutcome> CreateSchedulerRuleOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::CreateSchedulerRuleRequest&, const CreateSchedulerRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateSchedulerRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateTagResourcesResult> CreateTagResourcesOutcome;
			typedef std::future<CreateTagResourcesOutcome> CreateTagResourcesOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::CreateTagResourcesRequest&, const CreateTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::CreateWebCCRuleResult> CreateWebCCRuleOutcome;
			typedef std::future<CreateWebCCRuleOutcome> CreateWebCCRuleOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::CreateWebCCRuleRequest&, const CreateWebCCRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateWebCCRuleAsyncHandler;
			typedef Outcome<Error, Model::CreateWebRuleResult> CreateWebRuleOutcome;
			typedef std::future<CreateWebRuleOutcome> CreateWebRuleOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::CreateWebRuleRequest&, const CreateWebRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateWebRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteAsyncTaskResult> DeleteAsyncTaskOutcome;
			typedef std::future<DeleteAsyncTaskOutcome> DeleteAsyncTaskOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DeleteAsyncTaskRequest&, const DeleteAsyncTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAsyncTaskAsyncHandler;
			typedef Outcome<Error, Model::DeleteAutoCcBlacklistResult> DeleteAutoCcBlacklistOutcome;
			typedef std::future<DeleteAutoCcBlacklistOutcome> DeleteAutoCcBlacklistOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DeleteAutoCcBlacklistRequest&, const DeleteAutoCcBlacklistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAutoCcBlacklistAsyncHandler;
			typedef Outcome<Error, Model::DeleteAutoCcWhitelistResult> DeleteAutoCcWhitelistOutcome;
			typedef std::future<DeleteAutoCcWhitelistOutcome> DeleteAutoCcWhitelistOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DeleteAutoCcWhitelistRequest&, const DeleteAutoCcWhitelistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAutoCcWhitelistAsyncHandler;
			typedef Outcome<Error, Model::DeleteDomainResourceResult> DeleteDomainResourceOutcome;
			typedef std::future<DeleteDomainResourceOutcome> DeleteDomainResourceOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DeleteDomainResourceRequest&, const DeleteDomainResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDomainResourceAsyncHandler;
			typedef Outcome<Error, Model::DeleteNetworkRuleResult> DeleteNetworkRuleOutcome;
			typedef std::future<DeleteNetworkRuleOutcome> DeleteNetworkRuleOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DeleteNetworkRuleRequest&, const DeleteNetworkRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteNetworkRuleAsyncHandler;
			typedef Outcome<Error, Model::DeletePortResult> DeletePortOutcome;
			typedef std::future<DeletePortOutcome> DeletePortOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DeletePortRequest&, const DeletePortOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePortAsyncHandler;
			typedef Outcome<Error, Model::DeleteSceneDefensePolicyResult> DeleteSceneDefensePolicyOutcome;
			typedef std::future<DeleteSceneDefensePolicyOutcome> DeleteSceneDefensePolicyOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DeleteSceneDefensePolicyRequest&, const DeleteSceneDefensePolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSceneDefensePolicyAsyncHandler;
			typedef Outcome<Error, Model::DeleteSchedulerRuleResult> DeleteSchedulerRuleOutcome;
			typedef std::future<DeleteSchedulerRuleOutcome> DeleteSchedulerRuleOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DeleteSchedulerRuleRequest&, const DeleteSchedulerRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSchedulerRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteTagResourcesResult> DeleteTagResourcesOutcome;
			typedef std::future<DeleteTagResourcesOutcome> DeleteTagResourcesOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DeleteTagResourcesRequest&, const DeleteTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::DeleteWebCCRuleResult> DeleteWebCCRuleOutcome;
			typedef std::future<DeleteWebCCRuleOutcome> DeleteWebCCRuleOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DeleteWebCCRuleRequest&, const DeleteWebCCRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWebCCRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteWebCacheCustomRuleResult> DeleteWebCacheCustomRuleOutcome;
			typedef std::future<DeleteWebCacheCustomRuleOutcome> DeleteWebCacheCustomRuleOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DeleteWebCacheCustomRuleRequest&, const DeleteWebCacheCustomRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWebCacheCustomRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteWebPreciseAccessRuleResult> DeleteWebPreciseAccessRuleOutcome;
			typedef std::future<DeleteWebPreciseAccessRuleOutcome> DeleteWebPreciseAccessRuleOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DeleteWebPreciseAccessRuleRequest&, const DeleteWebPreciseAccessRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWebPreciseAccessRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteWebRuleResult> DeleteWebRuleOutcome;
			typedef std::future<DeleteWebRuleOutcome> DeleteWebRuleOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DeleteWebRuleRequest&, const DeleteWebRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWebRuleAsyncHandler;
			typedef Outcome<Error, Model::DescribeAsyncTasksResult> DescribeAsyncTasksOutcome;
			typedef std::future<DescribeAsyncTasksOutcome> DescribeAsyncTasksOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeAsyncTasksRequest&, const DescribeAsyncTasksOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAsyncTasksAsyncHandler;
			typedef Outcome<Error, Model::DescribeAttackAnalysisMaxQpsResult> DescribeAttackAnalysisMaxQpsOutcome;
			typedef std::future<DescribeAttackAnalysisMaxQpsOutcome> DescribeAttackAnalysisMaxQpsOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeAttackAnalysisMaxQpsRequest&, const DescribeAttackAnalysisMaxQpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAttackAnalysisMaxQpsAsyncHandler;
			typedef Outcome<Error, Model::DescribeAutoCcBlacklistResult> DescribeAutoCcBlacklistOutcome;
			typedef std::future<DescribeAutoCcBlacklistOutcome> DescribeAutoCcBlacklistOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeAutoCcBlacklistRequest&, const DescribeAutoCcBlacklistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoCcBlacklistAsyncHandler;
			typedef Outcome<Error, Model::DescribeAutoCcListCountResult> DescribeAutoCcListCountOutcome;
			typedef std::future<DescribeAutoCcListCountOutcome> DescribeAutoCcListCountOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeAutoCcListCountRequest&, const DescribeAutoCcListCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoCcListCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeAutoCcWhitelistResult> DescribeAutoCcWhitelistOutcome;
			typedef std::future<DescribeAutoCcWhitelistOutcome> DescribeAutoCcWhitelistOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeAutoCcWhitelistRequest&, const DescribeAutoCcWhitelistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAutoCcWhitelistAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackSourceCidrResult> DescribeBackSourceCidrOutcome;
			typedef std::future<DescribeBackSourceCidrOutcome> DescribeBackSourceCidrOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeBackSourceCidrRequest&, const DescribeBackSourceCidrOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackSourceCidrAsyncHandler;
			typedef Outcome<Error, Model::DescribeBlackholeStatusResult> DescribeBlackholeStatusOutcome;
			typedef std::future<DescribeBlackholeStatusOutcome> DescribeBlackholeStatusOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeBlackholeStatusRequest&, const DescribeBlackholeStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBlackholeStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeBlockStatusResult> DescribeBlockStatusOutcome;
			typedef std::future<DescribeBlockStatusOutcome> DescribeBlockStatusOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeBlockStatusRequest&, const DescribeBlockStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBlockStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeCertsResult> DescribeCertsOutcome;
			typedef std::future<DescribeCertsOutcome> DescribeCertsOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeCertsRequest&, const DescribeCertsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertsAsyncHandler;
			typedef Outcome<Error, Model::DescribeCnameReusesResult> DescribeCnameReusesOutcome;
			typedef std::future<DescribeCnameReusesOutcome> DescribeCnameReusesOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeCnameReusesRequest&, const DescribeCnameReusesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCnameReusesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDDoSEventsResult> DescribeDDoSEventsOutcome;
			typedef std::future<DescribeDDoSEventsOutcome> DescribeDDoSEventsOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeDDoSEventsRequest&, const DescribeDDoSEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSEventsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDDosAllEventListResult> DescribeDDosAllEventListOutcome;
			typedef std::future<DescribeDDosAllEventListOutcome> DescribeDDosAllEventListOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeDDosAllEventListRequest&, const DescribeDDosAllEventListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDosAllEventListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDDosEventAreaResult> DescribeDDosEventAreaOutcome;
			typedef std::future<DescribeDDosEventAreaOutcome> DescribeDDosEventAreaOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeDDosEventAreaRequest&, const DescribeDDosEventAreaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDosEventAreaAsyncHandler;
			typedef Outcome<Error, Model::DescribeDDosEventAttackTypeResult> DescribeDDosEventAttackTypeOutcome;
			typedef std::future<DescribeDDosEventAttackTypeOutcome> DescribeDDosEventAttackTypeOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeDDosEventAttackTypeRequest&, const DescribeDDosEventAttackTypeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDosEventAttackTypeAsyncHandler;
			typedef Outcome<Error, Model::DescribeDDosEventIspResult> DescribeDDosEventIspOutcome;
			typedef std::future<DescribeDDosEventIspOutcome> DescribeDDosEventIspOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeDDosEventIspRequest&, const DescribeDDosEventIspOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDosEventIspAsyncHandler;
			typedef Outcome<Error, Model::DescribeDDosEventMaxResult> DescribeDDosEventMaxOutcome;
			typedef std::future<DescribeDDosEventMaxOutcome> DescribeDDosEventMaxOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeDDosEventMaxRequest&, const DescribeDDosEventMaxOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDosEventMaxAsyncHandler;
			typedef Outcome<Error, Model::DescribeDDosEventSrcIpResult> DescribeDDosEventSrcIpOutcome;
			typedef std::future<DescribeDDosEventSrcIpOutcome> DescribeDDosEventSrcIpOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeDDosEventSrcIpRequest&, const DescribeDDosEventSrcIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDosEventSrcIpAsyncHandler;
			typedef Outcome<Error, Model::DescribeDefenseCountStatisticsResult> DescribeDefenseCountStatisticsOutcome;
			typedef std::future<DescribeDefenseCountStatisticsOutcome> DescribeDefenseCountStatisticsOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeDefenseCountStatisticsRequest&, const DescribeDefenseCountStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDefenseCountStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDefenseRecordsResult> DescribeDefenseRecordsOutcome;
			typedef std::future<DescribeDefenseRecordsOutcome> DescribeDefenseRecordsOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeDefenseRecordsRequest&, const DescribeDefenseRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDefenseRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainAttackEventsResult> DescribeDomainAttackEventsOutcome;
			typedef std::future<DescribeDomainAttackEventsOutcome> DescribeDomainAttackEventsOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeDomainAttackEventsRequest&, const DescribeDomainAttackEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainAttackEventsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainOverviewResult> DescribeDomainOverviewOutcome;
			typedef std::future<DescribeDomainOverviewOutcome> DescribeDomainOverviewOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeDomainOverviewRequest&, const DescribeDomainOverviewOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainOverviewAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainQPSListResult> DescribeDomainQPSListOutcome;
			typedef std::future<DescribeDomainQPSListOutcome> DescribeDomainQPSListOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeDomainQPSListRequest&, const DescribeDomainQPSListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainQPSListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainResourceResult> DescribeDomainResourceOutcome;
			typedef std::future<DescribeDomainResourceOutcome> DescribeDomainResourceOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeDomainResourceRequest&, const DescribeDomainResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainResourceAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainSecurityProfileResult> DescribeDomainSecurityProfileOutcome;
			typedef std::future<DescribeDomainSecurityProfileOutcome> DescribeDomainSecurityProfileOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeDomainSecurityProfileRequest&, const DescribeDomainSecurityProfileOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainSecurityProfileAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainStatusCodeCountResult> DescribeDomainStatusCodeCountOutcome;
			typedef std::future<DescribeDomainStatusCodeCountOutcome> DescribeDomainStatusCodeCountOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeDomainStatusCodeCountRequest&, const DescribeDomainStatusCodeCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainStatusCodeCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainStatusCodeListResult> DescribeDomainStatusCodeListOutcome;
			typedef std::future<DescribeDomainStatusCodeListOutcome> DescribeDomainStatusCodeListOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeDomainStatusCodeListRequest&, const DescribeDomainStatusCodeListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainStatusCodeListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainTopAttackListResult> DescribeDomainTopAttackListOutcome;
			typedef std::future<DescribeDomainTopAttackListOutcome> DescribeDomainTopAttackListOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeDomainTopAttackListRequest&, const DescribeDomainTopAttackListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainTopAttackListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainViewSourceCountriesResult> DescribeDomainViewSourceCountriesOutcome;
			typedef std::future<DescribeDomainViewSourceCountriesOutcome> DescribeDomainViewSourceCountriesOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeDomainViewSourceCountriesRequest&, const DescribeDomainViewSourceCountriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainViewSourceCountriesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainViewSourceProvincesResult> DescribeDomainViewSourceProvincesOutcome;
			typedef std::future<DescribeDomainViewSourceProvincesOutcome> DescribeDomainViewSourceProvincesOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeDomainViewSourceProvincesRequest&, const DescribeDomainViewSourceProvincesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainViewSourceProvincesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainViewTopCostTimeResult> DescribeDomainViewTopCostTimeOutcome;
			typedef std::future<DescribeDomainViewTopCostTimeOutcome> DescribeDomainViewTopCostTimeOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeDomainViewTopCostTimeRequest&, const DescribeDomainViewTopCostTimeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainViewTopCostTimeAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainViewTopUrlResult> DescribeDomainViewTopUrlOutcome;
			typedef std::future<DescribeDomainViewTopUrlOutcome> DescribeDomainViewTopUrlOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeDomainViewTopUrlRequest&, const DescribeDomainViewTopUrlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainViewTopUrlAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainsResult> DescribeDomainsOutcome;
			typedef std::future<DescribeDomainsOutcome> DescribeDomainsOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeDomainsRequest&, const DescribeDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainsAsyncHandler;
			typedef Outcome<Error, Model::DescribeElasticBandwidthSpecResult> DescribeElasticBandwidthSpecOutcome;
			typedef std::future<DescribeElasticBandwidthSpecOutcome> DescribeElasticBandwidthSpecOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeElasticBandwidthSpecRequest&, const DescribeElasticBandwidthSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeElasticBandwidthSpecAsyncHandler;
			typedef Outcome<Error, Model::DescribeElasticQpsResult> DescribeElasticQpsOutcome;
			typedef std::future<DescribeElasticQpsOutcome> DescribeElasticQpsOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeElasticQpsRequest&, const DescribeElasticQpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeElasticQpsAsyncHandler;
			typedef Outcome<Error, Model::DescribeElasticQpsRecordResult> DescribeElasticQpsRecordOutcome;
			typedef std::future<DescribeElasticQpsRecordOutcome> DescribeElasticQpsRecordOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeElasticQpsRecordRequest&, const DescribeElasticQpsRecordOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeElasticQpsRecordAsyncHandler;
			typedef Outcome<Error, Model::DescribeHeadersResult> DescribeHeadersOutcome;
			typedef std::future<DescribeHeadersOutcome> DescribeHeadersOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeHeadersRequest&, const DescribeHeadersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHeadersAsyncHandler;
			typedef Outcome<Error, Model::DescribeHealthCheckListResult> DescribeHealthCheckListOutcome;
			typedef std::future<DescribeHealthCheckListOutcome> DescribeHealthCheckListOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeHealthCheckListRequest&, const DescribeHealthCheckListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHealthCheckListAsyncHandler;
			typedef Outcome<Error, Model::DescribeHealthCheckStatusResult> DescribeHealthCheckStatusOutcome;
			typedef std::future<DescribeHealthCheckStatusOutcome> DescribeHealthCheckStatusOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeHealthCheckStatusRequest&, const DescribeHealthCheckStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHealthCheckStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceDetailsResult> DescribeInstanceDetailsOutcome;
			typedef std::future<DescribeInstanceDetailsOutcome> DescribeInstanceDetailsOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeInstanceDetailsRequest&, const DescribeInstanceDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceDetailsAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceExtResult> DescribeInstanceExtOutcome;
			typedef std::future<DescribeInstanceExtOutcome> DescribeInstanceExtOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeInstanceExtRequest&, const DescribeInstanceExtOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceExtAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceIdsResult> DescribeInstanceIdsOutcome;
			typedef std::future<DescribeInstanceIdsOutcome> DescribeInstanceIdsOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeInstanceIdsRequest&, const DescribeInstanceIdsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceIdsAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceSpecsResult> DescribeInstanceSpecsOutcome;
			typedef std::future<DescribeInstanceSpecsOutcome> DescribeInstanceSpecsOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeInstanceSpecsRequest&, const DescribeInstanceSpecsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceSpecsAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceStatisticsResult> DescribeInstanceStatisticsOutcome;
			typedef std::future<DescribeInstanceStatisticsOutcome> DescribeInstanceStatisticsOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeInstanceStatisticsRequest&, const DescribeInstanceStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceStatusResult> DescribeInstanceStatusOutcome;
			typedef std::future<DescribeInstanceStatusOutcome> DescribeInstanceStatusOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeInstanceStatusRequest&, const DescribeInstanceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstancesResult> DescribeInstancesOutcome;
			typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeInstancesRequest&, const DescribeInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeL7RsPolicyResult> DescribeL7RsPolicyOutcome;
			typedef std::future<DescribeL7RsPolicyOutcome> DescribeL7RsPolicyOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeL7RsPolicyRequest&, const DescribeL7RsPolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeL7RsPolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeLayer4RulePolicyResult> DescribeLayer4RulePolicyOutcome;
			typedef std::future<DescribeLayer4RulePolicyOutcome> DescribeLayer4RulePolicyOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeLayer4RulePolicyRequest&, const DescribeLayer4RulePolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLayer4RulePolicyAsyncHandler;
			typedef Outcome<Error, Model::DescribeLogStoreExistStatusResult> DescribeLogStoreExistStatusOutcome;
			typedef std::future<DescribeLogStoreExistStatusOutcome> DescribeLogStoreExistStatusOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeLogStoreExistStatusRequest&, const DescribeLogStoreExistStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogStoreExistStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeNetworkRegionBlockResult> DescribeNetworkRegionBlockOutcome;
			typedef std::future<DescribeNetworkRegionBlockOutcome> DescribeNetworkRegionBlockOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeNetworkRegionBlockRequest&, const DescribeNetworkRegionBlockOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkRegionBlockAsyncHandler;
			typedef Outcome<Error, Model::DescribeNetworkRuleAttributesResult> DescribeNetworkRuleAttributesOutcome;
			typedef std::future<DescribeNetworkRuleAttributesOutcome> DescribeNetworkRuleAttributesOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeNetworkRuleAttributesRequest&, const DescribeNetworkRuleAttributesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkRuleAttributesAsyncHandler;
			typedef Outcome<Error, Model::DescribeNetworkRulesResult> DescribeNetworkRulesOutcome;
			typedef std::future<DescribeNetworkRulesOutcome> DescribeNetworkRulesOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeNetworkRulesRequest&, const DescribeNetworkRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeOpEntitiesResult> DescribeOpEntitiesOutcome;
			typedef std::future<DescribeOpEntitiesOutcome> DescribeOpEntitiesOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeOpEntitiesRequest&, const DescribeOpEntitiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOpEntitiesAsyncHandler;
			typedef Outcome<Error, Model::DescribePortResult> DescribePortOutcome;
			typedef std::future<DescribePortOutcome> DescribePortOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribePortRequest&, const DescribePortOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePortAsyncHandler;
			typedef Outcome<Error, Model::DescribePortAttackMaxFlowResult> DescribePortAttackMaxFlowOutcome;
			typedef std::future<DescribePortAttackMaxFlowOutcome> DescribePortAttackMaxFlowOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribePortAttackMaxFlowRequest&, const DescribePortAttackMaxFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePortAttackMaxFlowAsyncHandler;
			typedef Outcome<Error, Model::DescribePortAutoCcStatusResult> DescribePortAutoCcStatusOutcome;
			typedef std::future<DescribePortAutoCcStatusOutcome> DescribePortAutoCcStatusOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribePortAutoCcStatusRequest&, const DescribePortAutoCcStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePortAutoCcStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribePortCcAttackTopIPResult> DescribePortCcAttackTopIPOutcome;
			typedef std::future<DescribePortCcAttackTopIPOutcome> DescribePortCcAttackTopIPOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribePortCcAttackTopIPRequest&, const DescribePortCcAttackTopIPOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePortCcAttackTopIPAsyncHandler;
			typedef Outcome<Error, Model::DescribePortConnsCountResult> DescribePortConnsCountOutcome;
			typedef std::future<DescribePortConnsCountOutcome> DescribePortConnsCountOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribePortConnsCountRequest&, const DescribePortConnsCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePortConnsCountAsyncHandler;
			typedef Outcome<Error, Model::DescribePortConnsListResult> DescribePortConnsListOutcome;
			typedef std::future<DescribePortConnsListOutcome> DescribePortConnsListOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribePortConnsListRequest&, const DescribePortConnsListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePortConnsListAsyncHandler;
			typedef Outcome<Error, Model::DescribePortFlowListResult> DescribePortFlowListOutcome;
			typedef std::future<DescribePortFlowListOutcome> DescribePortFlowListOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribePortFlowListRequest&, const DescribePortFlowListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePortFlowListAsyncHandler;
			typedef Outcome<Error, Model::DescribePortMaxConnsResult> DescribePortMaxConnsOutcome;
			typedef std::future<DescribePortMaxConnsOutcome> DescribePortMaxConnsOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribePortMaxConnsRequest&, const DescribePortMaxConnsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePortMaxConnsAsyncHandler;
			typedef Outcome<Error, Model::DescribePortViewSourceCountriesResult> DescribePortViewSourceCountriesOutcome;
			typedef std::future<DescribePortViewSourceCountriesOutcome> DescribePortViewSourceCountriesOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribePortViewSourceCountriesRequest&, const DescribePortViewSourceCountriesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePortViewSourceCountriesAsyncHandler;
			typedef Outcome<Error, Model::DescribePortViewSourceIspsResult> DescribePortViewSourceIspsOutcome;
			typedef std::future<DescribePortViewSourceIspsOutcome> DescribePortViewSourceIspsOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribePortViewSourceIspsRequest&, const DescribePortViewSourceIspsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePortViewSourceIspsAsyncHandler;
			typedef Outcome<Error, Model::DescribePortViewSourceProvincesResult> DescribePortViewSourceProvincesOutcome;
			typedef std::future<DescribePortViewSourceProvincesOutcome> DescribePortViewSourceProvincesOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribePortViewSourceProvincesRequest&, const DescribePortViewSourceProvincesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribePortViewSourceProvincesAsyncHandler;
			typedef Outcome<Error, Model::DescribeSceneDefenseObjectsResult> DescribeSceneDefenseObjectsOutcome;
			typedef std::future<DescribeSceneDefenseObjectsOutcome> DescribeSceneDefenseObjectsOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeSceneDefenseObjectsRequest&, const DescribeSceneDefenseObjectsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSceneDefenseObjectsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSceneDefensePoliciesResult> DescribeSceneDefensePoliciesOutcome;
			typedef std::future<DescribeSceneDefensePoliciesOutcome> DescribeSceneDefensePoliciesOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeSceneDefensePoliciesRequest&, const DescribeSceneDefensePoliciesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSceneDefensePoliciesAsyncHandler;
			typedef Outcome<Error, Model::DescribeSchedulerRulesResult> DescribeSchedulerRulesOutcome;
			typedef std::future<DescribeSchedulerRulesOutcome> DescribeSchedulerRulesOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeSchedulerRulesRequest&, const DescribeSchedulerRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSchedulerRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeSlaEventListResult> DescribeSlaEventListOutcome;
			typedef std::future<DescribeSlaEventListOutcome> DescribeSlaEventListOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeSlaEventListRequest&, const DescribeSlaEventListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlaEventListAsyncHandler;
			typedef Outcome<Error, Model::DescribeSlsAuthStatusResult> DescribeSlsAuthStatusOutcome;
			typedef std::future<DescribeSlsAuthStatusOutcome> DescribeSlsAuthStatusOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeSlsAuthStatusRequest&, const DescribeSlsAuthStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlsAuthStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeSlsLogstoreInfoResult> DescribeSlsLogstoreInfoOutcome;
			typedef std::future<DescribeSlsLogstoreInfoOutcome> DescribeSlsLogstoreInfoOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeSlsLogstoreInfoRequest&, const DescribeSlsLogstoreInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlsLogstoreInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeSlsOpenStatusResult> DescribeSlsOpenStatusOutcome;
			typedef std::future<DescribeSlsOpenStatusOutcome> DescribeSlsOpenStatusOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeSlsOpenStatusRequest&, const DescribeSlsOpenStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlsOpenStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeStsGrantStatusResult> DescribeStsGrantStatusOutcome;
			typedef std::future<DescribeStsGrantStatusOutcome> DescribeStsGrantStatusOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeStsGrantStatusRequest&, const DescribeStsGrantStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStsGrantStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeSystemLogResult> DescribeSystemLogOutcome;
			typedef std::future<DescribeSystemLogOutcome> DescribeSystemLogOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeSystemLogRequest&, const DescribeSystemLogOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSystemLogAsyncHandler;
			typedef Outcome<Error, Model::DescribeTagKeysResult> DescribeTagKeysOutcome;
			typedef std::future<DescribeTagKeysOutcome> DescribeTagKeysOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeTagKeysRequest&, const DescribeTagKeysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagKeysAsyncHandler;
			typedef Outcome<Error, Model::DescribeTagResourcesResult> DescribeTagResourcesOutcome;
			typedef std::future<DescribeTagResourcesOutcome> DescribeTagResourcesOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeTagResourcesRequest&, const DescribeTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::DescribeTotalAttackMaxFlowResult> DescribeTotalAttackMaxFlowOutcome;
			typedef std::future<DescribeTotalAttackMaxFlowOutcome> DescribeTotalAttackMaxFlowOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeTotalAttackMaxFlowRequest&, const DescribeTotalAttackMaxFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTotalAttackMaxFlowAsyncHandler;
			typedef Outcome<Error, Model::DescribeUdpReflectResult> DescribeUdpReflectOutcome;
			typedef std::future<DescribeUdpReflectOutcome> DescribeUdpReflectOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeUdpReflectRequest&, const DescribeUdpReflectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUdpReflectAsyncHandler;
			typedef Outcome<Error, Model::DescribeUnBlackholeCountResult> DescribeUnBlackholeCountOutcome;
			typedef std::future<DescribeUnBlackholeCountOutcome> DescribeUnBlackholeCountOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeUnBlackholeCountRequest&, const DescribeUnBlackholeCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUnBlackholeCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeUnBlockCountResult> DescribeUnBlockCountOutcome;
			typedef std::future<DescribeUnBlockCountOutcome> DescribeUnBlockCountOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeUnBlockCountRequest&, const DescribeUnBlockCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUnBlockCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebAccessLogDispatchStatusResult> DescribeWebAccessLogDispatchStatusOutcome;
			typedef std::future<DescribeWebAccessLogDispatchStatusOutcome> DescribeWebAccessLogDispatchStatusOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeWebAccessLogDispatchStatusRequest&, const DescribeWebAccessLogDispatchStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebAccessLogDispatchStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebAccessLogEmptyCountResult> DescribeWebAccessLogEmptyCountOutcome;
			typedef std::future<DescribeWebAccessLogEmptyCountOutcome> DescribeWebAccessLogEmptyCountOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeWebAccessLogEmptyCountRequest&, const DescribeWebAccessLogEmptyCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebAccessLogEmptyCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebAccessLogStatusResult> DescribeWebAccessLogStatusOutcome;
			typedef std::future<DescribeWebAccessLogStatusOutcome> DescribeWebAccessLogStatusOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeWebAccessLogStatusRequest&, const DescribeWebAccessLogStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebAccessLogStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebAccessModeResult> DescribeWebAccessModeOutcome;
			typedef std::future<DescribeWebAccessModeOutcome> DescribeWebAccessModeOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeWebAccessModeRequest&, const DescribeWebAccessModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebAccessModeAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebAreaBlockConfigsResult> DescribeWebAreaBlockConfigsOutcome;
			typedef std::future<DescribeWebAreaBlockConfigsOutcome> DescribeWebAreaBlockConfigsOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeWebAreaBlockConfigsRequest&, const DescribeWebAreaBlockConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebAreaBlockConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebCCRulesResult> DescribeWebCCRulesOutcome;
			typedef std::future<DescribeWebCCRulesOutcome> DescribeWebCCRulesOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeWebCCRulesRequest&, const DescribeWebCCRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebCCRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebCacheConfigsResult> DescribeWebCacheConfigsOutcome;
			typedef std::future<DescribeWebCacheConfigsOutcome> DescribeWebCacheConfigsOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeWebCacheConfigsRequest&, const DescribeWebCacheConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebCacheConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebCcProtectSwitchResult> DescribeWebCcProtectSwitchOutcome;
			typedef std::future<DescribeWebCcProtectSwitchOutcome> DescribeWebCcProtectSwitchOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeWebCcProtectSwitchRequest&, const DescribeWebCcProtectSwitchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebCcProtectSwitchAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebCustomPortsResult> DescribeWebCustomPortsOutcome;
			typedef std::future<DescribeWebCustomPortsOutcome> DescribeWebCustomPortsOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeWebCustomPortsRequest&, const DescribeWebCustomPortsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebCustomPortsAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebInstanceRelationsResult> DescribeWebInstanceRelationsOutcome;
			typedef std::future<DescribeWebInstanceRelationsOutcome> DescribeWebInstanceRelationsOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeWebInstanceRelationsRequest&, const DescribeWebInstanceRelationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebInstanceRelationsAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebPreciseAccessRuleResult> DescribeWebPreciseAccessRuleOutcome;
			typedef std::future<DescribeWebPreciseAccessRuleOutcome> DescribeWebPreciseAccessRuleOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeWebPreciseAccessRuleRequest&, const DescribeWebPreciseAccessRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebPreciseAccessRuleAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebReportTopIpResult> DescribeWebReportTopIpOutcome;
			typedef std::future<DescribeWebReportTopIpOutcome> DescribeWebReportTopIpOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeWebReportTopIpRequest&, const DescribeWebReportTopIpOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebReportTopIpAsyncHandler;
			typedef Outcome<Error, Model::DescribeWebRulesResult> DescribeWebRulesOutcome;
			typedef std::future<DescribeWebRulesOutcome> DescribeWebRulesOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeWebRulesRequest&, const DescribeWebRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWebRulesAsyncHandler;
			typedef Outcome<Error, Model::DetachSceneDefenseObjectResult> DetachSceneDefenseObjectOutcome;
			typedef std::future<DetachSceneDefenseObjectOutcome> DetachSceneDefenseObjectOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DetachSceneDefenseObjectRequest&, const DetachSceneDefenseObjectOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetachSceneDefenseObjectAsyncHandler;
			typedef Outcome<Error, Model::DisableSceneDefensePolicyResult> DisableSceneDefensePolicyOutcome;
			typedef std::future<DisableSceneDefensePolicyOutcome> DisableSceneDefensePolicyOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DisableSceneDefensePolicyRequest&, const DisableSceneDefensePolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableSceneDefensePolicyAsyncHandler;
			typedef Outcome<Error, Model::DisableWebAccessLogConfigResult> DisableWebAccessLogConfigOutcome;
			typedef std::future<DisableWebAccessLogConfigOutcome> DisableWebAccessLogConfigOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DisableWebAccessLogConfigRequest&, const DisableWebAccessLogConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableWebAccessLogConfigAsyncHandler;
			typedef Outcome<Error, Model::DisableWebCCResult> DisableWebCCOutcome;
			typedef std::future<DisableWebCCOutcome> DisableWebCCOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DisableWebCCRequest&, const DisableWebCCOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableWebCCAsyncHandler;
			typedef Outcome<Error, Model::DisableWebCCRuleResult> DisableWebCCRuleOutcome;
			typedef std::future<DisableWebCCRuleOutcome> DisableWebCCRuleOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DisableWebCCRuleRequest&, const DisableWebCCRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableWebCCRuleAsyncHandler;
			typedef Outcome<Error, Model::EmptyAutoCcBlacklistResult> EmptyAutoCcBlacklistOutcome;
			typedef std::future<EmptyAutoCcBlacklistOutcome> EmptyAutoCcBlacklistOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::EmptyAutoCcBlacklistRequest&, const EmptyAutoCcBlacklistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EmptyAutoCcBlacklistAsyncHandler;
			typedef Outcome<Error, Model::EmptyAutoCcWhitelistResult> EmptyAutoCcWhitelistOutcome;
			typedef std::future<EmptyAutoCcWhitelistOutcome> EmptyAutoCcWhitelistOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::EmptyAutoCcWhitelistRequest&, const EmptyAutoCcWhitelistOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EmptyAutoCcWhitelistAsyncHandler;
			typedef Outcome<Error, Model::EmptySlsLogstoreResult> EmptySlsLogstoreOutcome;
			typedef std::future<EmptySlsLogstoreOutcome> EmptySlsLogstoreOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::EmptySlsLogstoreRequest&, const EmptySlsLogstoreOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EmptySlsLogstoreAsyncHandler;
			typedef Outcome<Error, Model::EnableSceneDefensePolicyResult> EnableSceneDefensePolicyOutcome;
			typedef std::future<EnableSceneDefensePolicyOutcome> EnableSceneDefensePolicyOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::EnableSceneDefensePolicyRequest&, const EnableSceneDefensePolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableSceneDefensePolicyAsyncHandler;
			typedef Outcome<Error, Model::EnableWebAccessLogConfigResult> EnableWebAccessLogConfigOutcome;
			typedef std::future<EnableWebAccessLogConfigOutcome> EnableWebAccessLogConfigOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::EnableWebAccessLogConfigRequest&, const EnableWebAccessLogConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableWebAccessLogConfigAsyncHandler;
			typedef Outcome<Error, Model::EnableWebCCResult> EnableWebCCOutcome;
			typedef std::future<EnableWebCCOutcome> EnableWebCCOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::EnableWebCCRequest&, const EnableWebCCOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableWebCCAsyncHandler;
			typedef Outcome<Error, Model::EnableWebCCRuleResult> EnableWebCCRuleOutcome;
			typedef std::future<EnableWebCCRuleOutcome> EnableWebCCRuleOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::EnableWebCCRuleRequest&, const EnableWebCCRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableWebCCRuleAsyncHandler;
			typedef Outcome<Error, Model::ModifyBizBandWidthModeResult> ModifyBizBandWidthModeOutcome;
			typedef std::future<ModifyBizBandWidthModeOutcome> ModifyBizBandWidthModeOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifyBizBandWidthModeRequest&, const ModifyBizBandWidthModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBizBandWidthModeAsyncHandler;
			typedef Outcome<Error, Model::ModifyBlackholeStatusResult> ModifyBlackholeStatusOutcome;
			typedef std::future<ModifyBlackholeStatusOutcome> ModifyBlackholeStatusOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifyBlackholeStatusRequest&, const ModifyBlackholeStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBlackholeStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyBlockStatusResult> ModifyBlockStatusOutcome;
			typedef std::future<ModifyBlockStatusOutcome> ModifyBlockStatusOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifyBlockStatusRequest&, const ModifyBlockStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBlockStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyCnameReuseResult> ModifyCnameReuseOutcome;
			typedef std::future<ModifyCnameReuseOutcome> ModifyCnameReuseOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifyCnameReuseRequest&, const ModifyCnameReuseOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCnameReuseAsyncHandler;
			typedef Outcome<Error, Model::ModifyDomainResourceResult> ModifyDomainResourceOutcome;
			typedef std::future<ModifyDomainResourceOutcome> ModifyDomainResourceOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifyDomainResourceRequest&, const ModifyDomainResourceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainResourceAsyncHandler;
			typedef Outcome<Error, Model::ModifyElasticBandWidthResult> ModifyElasticBandWidthOutcome;
			typedef std::future<ModifyElasticBandWidthOutcome> ModifyElasticBandWidthOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifyElasticBandWidthRequest&, const ModifyElasticBandWidthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyElasticBandWidthAsyncHandler;
			typedef Outcome<Error, Model::ModifyElasticBizBandWidthResult> ModifyElasticBizBandWidthOutcome;
			typedef std::future<ModifyElasticBizBandWidthOutcome> ModifyElasticBizBandWidthOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifyElasticBizBandWidthRequest&, const ModifyElasticBizBandWidthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyElasticBizBandWidthAsyncHandler;
			typedef Outcome<Error, Model::ModifyElasticBizQpsResult> ModifyElasticBizQpsOutcome;
			typedef std::future<ModifyElasticBizQpsOutcome> ModifyElasticBizQpsOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifyElasticBizQpsRequest&, const ModifyElasticBizQpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyElasticBizQpsAsyncHandler;
			typedef Outcome<Error, Model::ModifyFullLogTtlResult> ModifyFullLogTtlOutcome;
			typedef std::future<ModifyFullLogTtlOutcome> ModifyFullLogTtlOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifyFullLogTtlRequest&, const ModifyFullLogTtlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFullLogTtlAsyncHandler;
			typedef Outcome<Error, Model::ModifyHeadersResult> ModifyHeadersOutcome;
			typedef std::future<ModifyHeadersOutcome> ModifyHeadersOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifyHeadersRequest&, const ModifyHeadersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHeadersAsyncHandler;
			typedef Outcome<Error, Model::ModifyHealthCheckConfigResult> ModifyHealthCheckConfigOutcome;
			typedef std::future<ModifyHealthCheckConfigOutcome> ModifyHealthCheckConfigOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifyHealthCheckConfigRequest&, const ModifyHealthCheckConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHealthCheckConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyHttp2EnableResult> ModifyHttp2EnableOutcome;
			typedef std::future<ModifyHttp2EnableOutcome> ModifyHttp2EnableOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifyHttp2EnableRequest&, const ModifyHttp2EnableOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHttp2EnableAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceRemarkResult> ModifyInstanceRemarkOutcome;
			typedef std::future<ModifyInstanceRemarkOutcome> ModifyInstanceRemarkOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifyInstanceRemarkRequest&, const ModifyInstanceRemarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceRemarkAsyncHandler;
			typedef Outcome<Error, Model::ModifyNetworkRuleAttributeResult> ModifyNetworkRuleAttributeOutcome;
			typedef std::future<ModifyNetworkRuleAttributeOutcome> ModifyNetworkRuleAttributeOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifyNetworkRuleAttributeRequest&, const ModifyNetworkRuleAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyNetworkRuleAttributeAsyncHandler;
			typedef Outcome<Error, Model::ModifyOcspStatusResult> ModifyOcspStatusOutcome;
			typedef std::future<ModifyOcspStatusOutcome> ModifyOcspStatusOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifyOcspStatusRequest&, const ModifyOcspStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyOcspStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyPortResult> ModifyPortOutcome;
			typedef std::future<ModifyPortOutcome> ModifyPortOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifyPortRequest&, const ModifyPortOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPortAsyncHandler;
			typedef Outcome<Error, Model::ModifyPortAutoCcStatusResult> ModifyPortAutoCcStatusOutcome;
			typedef std::future<ModifyPortAutoCcStatusOutcome> ModifyPortAutoCcStatusOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifyPortAutoCcStatusRequest&, const ModifyPortAutoCcStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPortAutoCcStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyQpsModeResult> ModifyQpsModeOutcome;
			typedef std::future<ModifyQpsModeOutcome> ModifyQpsModeOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifyQpsModeRequest&, const ModifyQpsModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyQpsModeAsyncHandler;
			typedef Outcome<Error, Model::ModifySceneDefensePolicyResult> ModifySceneDefensePolicyOutcome;
			typedef std::future<ModifySceneDefensePolicyOutcome> ModifySceneDefensePolicyOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifySceneDefensePolicyRequest&, const ModifySceneDefensePolicyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySceneDefensePolicyAsyncHandler;
			typedef Outcome<Error, Model::ModifySchedulerRuleResult> ModifySchedulerRuleOutcome;
			typedef std::future<ModifySchedulerRuleOutcome> ModifySchedulerRuleOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifySchedulerRuleRequest&, const ModifySchedulerRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifySchedulerRuleAsyncHandler;
			typedef Outcome<Error, Model::ModifyTlsConfigResult> ModifyTlsConfigOutcome;
			typedef std::future<ModifyTlsConfigOutcome> ModifyTlsConfigOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifyTlsConfigRequest&, const ModifyTlsConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTlsConfigAsyncHandler;
			typedef Outcome<Error, Model::ModifyWebAIProtectModeResult> ModifyWebAIProtectModeOutcome;
			typedef std::future<ModifyWebAIProtectModeOutcome> ModifyWebAIProtectModeOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifyWebAIProtectModeRequest&, const ModifyWebAIProtectModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebAIProtectModeAsyncHandler;
			typedef Outcome<Error, Model::ModifyWebAIProtectSwitchResult> ModifyWebAIProtectSwitchOutcome;
			typedef std::future<ModifyWebAIProtectSwitchOutcome> ModifyWebAIProtectSwitchOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifyWebAIProtectSwitchRequest&, const ModifyWebAIProtectSwitchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebAIProtectSwitchAsyncHandler;
			typedef Outcome<Error, Model::ModifyWebAccessModeResult> ModifyWebAccessModeOutcome;
			typedef std::future<ModifyWebAccessModeOutcome> ModifyWebAccessModeOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifyWebAccessModeRequest&, const ModifyWebAccessModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebAccessModeAsyncHandler;
			typedef Outcome<Error, Model::ModifyWebAreaBlockResult> ModifyWebAreaBlockOutcome;
			typedef std::future<ModifyWebAreaBlockOutcome> ModifyWebAreaBlockOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifyWebAreaBlockRequest&, const ModifyWebAreaBlockOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebAreaBlockAsyncHandler;
			typedef Outcome<Error, Model::ModifyWebAreaBlockSwitchResult> ModifyWebAreaBlockSwitchOutcome;
			typedef std::future<ModifyWebAreaBlockSwitchOutcome> ModifyWebAreaBlockSwitchOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifyWebAreaBlockSwitchRequest&, const ModifyWebAreaBlockSwitchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebAreaBlockSwitchAsyncHandler;
			typedef Outcome<Error, Model::ModifyWebCCRuleResult> ModifyWebCCRuleOutcome;
			typedef std::future<ModifyWebCCRuleOutcome> ModifyWebCCRuleOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifyWebCCRuleRequest&, const ModifyWebCCRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebCCRuleAsyncHandler;
			typedef Outcome<Error, Model::ModifyWebCacheCustomRuleResult> ModifyWebCacheCustomRuleOutcome;
			typedef std::future<ModifyWebCacheCustomRuleOutcome> ModifyWebCacheCustomRuleOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifyWebCacheCustomRuleRequest&, const ModifyWebCacheCustomRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebCacheCustomRuleAsyncHandler;
			typedef Outcome<Error, Model::ModifyWebCacheModeResult> ModifyWebCacheModeOutcome;
			typedef std::future<ModifyWebCacheModeOutcome> ModifyWebCacheModeOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifyWebCacheModeRequest&, const ModifyWebCacheModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebCacheModeAsyncHandler;
			typedef Outcome<Error, Model::ModifyWebCacheSwitchResult> ModifyWebCacheSwitchOutcome;
			typedef std::future<ModifyWebCacheSwitchOutcome> ModifyWebCacheSwitchOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifyWebCacheSwitchRequest&, const ModifyWebCacheSwitchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebCacheSwitchAsyncHandler;
			typedef Outcome<Error, Model::ModifyWebIpSetSwitchResult> ModifyWebIpSetSwitchOutcome;
			typedef std::future<ModifyWebIpSetSwitchOutcome> ModifyWebIpSetSwitchOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifyWebIpSetSwitchRequest&, const ModifyWebIpSetSwitchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebIpSetSwitchAsyncHandler;
			typedef Outcome<Error, Model::ModifyWebPreciseAccessRuleResult> ModifyWebPreciseAccessRuleOutcome;
			typedef std::future<ModifyWebPreciseAccessRuleOutcome> ModifyWebPreciseAccessRuleOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifyWebPreciseAccessRuleRequest&, const ModifyWebPreciseAccessRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebPreciseAccessRuleAsyncHandler;
			typedef Outcome<Error, Model::ModifyWebPreciseAccessSwitchResult> ModifyWebPreciseAccessSwitchOutcome;
			typedef std::future<ModifyWebPreciseAccessSwitchOutcome> ModifyWebPreciseAccessSwitchOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifyWebPreciseAccessSwitchRequest&, const ModifyWebPreciseAccessSwitchOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebPreciseAccessSwitchAsyncHandler;
			typedef Outcome<Error, Model::ModifyWebRuleResult> ModifyWebRuleOutcome;
			typedef std::future<ModifyWebRuleOutcome> ModifyWebRuleOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifyWebRuleRequest&, const ModifyWebRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyWebRuleAsyncHandler;
			typedef Outcome<Error, Model::ReleaseInstanceResult> ReleaseInstanceOutcome;
			typedef std::future<ReleaseInstanceOutcome> ReleaseInstanceOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ReleaseInstanceRequest&, const ReleaseInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseInstanceAsyncHandler;
			typedef Outcome<Error, Model::SwitchSchedulerRuleResult> SwitchSchedulerRuleOutcome;
			typedef std::future<SwitchSchedulerRuleOutcome> SwitchSchedulerRuleOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::SwitchSchedulerRuleRequest&, const SwitchSchedulerRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SwitchSchedulerRuleAsyncHandler;

			DdoscooClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DdoscooClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DdoscooClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DdoscooClient();
			AddAutoCcBlacklistOutcome addAutoCcBlacklist(const Model::AddAutoCcBlacklistRequest &request)const;
			void addAutoCcBlacklistAsync(const Model::AddAutoCcBlacklistRequest& request, const AddAutoCcBlacklistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddAutoCcBlacklistOutcomeCallable addAutoCcBlacklistCallable(const Model::AddAutoCcBlacklistRequest& request) const;
			AddAutoCcWhitelistOutcome addAutoCcWhitelist(const Model::AddAutoCcWhitelistRequest &request)const;
			void addAutoCcWhitelistAsync(const Model::AddAutoCcWhitelistRequest& request, const AddAutoCcWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddAutoCcWhitelistOutcomeCallable addAutoCcWhitelistCallable(const Model::AddAutoCcWhitelistRequest& request) const;
			AssociateWebCertOutcome associateWebCert(const Model::AssociateWebCertRequest &request)const;
			void associateWebCertAsync(const Model::AssociateWebCertRequest& request, const AssociateWebCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AssociateWebCertOutcomeCallable associateWebCertCallable(const Model::AssociateWebCertRequest& request) const;
			AttachSceneDefenseObjectOutcome attachSceneDefenseObject(const Model::AttachSceneDefenseObjectRequest &request)const;
			void attachSceneDefenseObjectAsync(const Model::AttachSceneDefenseObjectRequest& request, const AttachSceneDefenseObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AttachSceneDefenseObjectOutcomeCallable attachSceneDefenseObjectCallable(const Model::AttachSceneDefenseObjectRequest& request) const;
			ConfigL7RsPolicyOutcome configL7RsPolicy(const Model::ConfigL7RsPolicyRequest &request)const;
			void configL7RsPolicyAsync(const Model::ConfigL7RsPolicyRequest& request, const ConfigL7RsPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigL7RsPolicyOutcomeCallable configL7RsPolicyCallable(const Model::ConfigL7RsPolicyRequest& request) const;
			ConfigLayer4RealLimitOutcome configLayer4RealLimit(const Model::ConfigLayer4RealLimitRequest &request)const;
			void configLayer4RealLimitAsync(const Model::ConfigLayer4RealLimitRequest& request, const ConfigLayer4RealLimitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigLayer4RealLimitOutcomeCallable configLayer4RealLimitCallable(const Model::ConfigLayer4RealLimitRequest& request) const;
			ConfigLayer4RemarkOutcome configLayer4Remark(const Model::ConfigLayer4RemarkRequest &request)const;
			void configLayer4RemarkAsync(const Model::ConfigLayer4RemarkRequest& request, const ConfigLayer4RemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigLayer4RemarkOutcomeCallable configLayer4RemarkCallable(const Model::ConfigLayer4RemarkRequest& request) const;
			ConfigLayer4RuleBakModeOutcome configLayer4RuleBakMode(const Model::ConfigLayer4RuleBakModeRequest &request)const;
			void configLayer4RuleBakModeAsync(const Model::ConfigLayer4RuleBakModeRequest& request, const ConfigLayer4RuleBakModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigLayer4RuleBakModeOutcomeCallable configLayer4RuleBakModeCallable(const Model::ConfigLayer4RuleBakModeRequest& request) const;
			ConfigLayer4RulePolicyOutcome configLayer4RulePolicy(const Model::ConfigLayer4RulePolicyRequest &request)const;
			void configLayer4RulePolicyAsync(const Model::ConfigLayer4RulePolicyRequest& request, const ConfigLayer4RulePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigLayer4RulePolicyOutcomeCallable configLayer4RulePolicyCallable(const Model::ConfigLayer4RulePolicyRequest& request) const;
			ConfigNetworkRegionBlockOutcome configNetworkRegionBlock(const Model::ConfigNetworkRegionBlockRequest &request)const;
			void configNetworkRegionBlockAsync(const Model::ConfigNetworkRegionBlockRequest& request, const ConfigNetworkRegionBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigNetworkRegionBlockOutcomeCallable configNetworkRegionBlockCallable(const Model::ConfigNetworkRegionBlockRequest& request) const;
			ConfigNetworkRulesOutcome configNetworkRules(const Model::ConfigNetworkRulesRequest &request)const;
			void configNetworkRulesAsync(const Model::ConfigNetworkRulesRequest& request, const ConfigNetworkRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigNetworkRulesOutcomeCallable configNetworkRulesCallable(const Model::ConfigNetworkRulesRequest& request) const;
			ConfigUdpReflectOutcome configUdpReflect(const Model::ConfigUdpReflectRequest &request)const;
			void configUdpReflectAsync(const Model::ConfigUdpReflectRequest& request, const ConfigUdpReflectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigUdpReflectOutcomeCallable configUdpReflectCallable(const Model::ConfigUdpReflectRequest& request) const;
			ConfigWebCCTemplateOutcome configWebCCTemplate(const Model::ConfigWebCCTemplateRequest &request)const;
			void configWebCCTemplateAsync(const Model::ConfigWebCCTemplateRequest& request, const ConfigWebCCTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigWebCCTemplateOutcomeCallable configWebCCTemplateCallable(const Model::ConfigWebCCTemplateRequest& request) const;
			ConfigWebIpSetOutcome configWebIpSet(const Model::ConfigWebIpSetRequest &request)const;
			void configWebIpSetAsync(const Model::ConfigWebIpSetRequest& request, const ConfigWebIpSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigWebIpSetOutcomeCallable configWebIpSetCallable(const Model::ConfigWebIpSetRequest& request) const;
			CreateAsyncTaskOutcome createAsyncTask(const Model::CreateAsyncTaskRequest &request)const;
			void createAsyncTaskAsync(const Model::CreateAsyncTaskRequest& request, const CreateAsyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAsyncTaskOutcomeCallable createAsyncTaskCallable(const Model::CreateAsyncTaskRequest& request) const;
			CreateDomainResourceOutcome createDomainResource(const Model::CreateDomainResourceRequest &request)const;
			void createDomainResourceAsync(const Model::CreateDomainResourceRequest& request, const CreateDomainResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDomainResourceOutcomeCallable createDomainResourceCallable(const Model::CreateDomainResourceRequest& request) const;
			CreateNetworkRulesOutcome createNetworkRules(const Model::CreateNetworkRulesRequest &request)const;
			void createNetworkRulesAsync(const Model::CreateNetworkRulesRequest& request, const CreateNetworkRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNetworkRulesOutcomeCallable createNetworkRulesCallable(const Model::CreateNetworkRulesRequest& request) const;
			CreatePortOutcome createPort(const Model::CreatePortRequest &request)const;
			void createPortAsync(const Model::CreatePortRequest& request, const CreatePortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreatePortOutcomeCallable createPortCallable(const Model::CreatePortRequest& request) const;
			CreateSceneDefensePolicyOutcome createSceneDefensePolicy(const Model::CreateSceneDefensePolicyRequest &request)const;
			void createSceneDefensePolicyAsync(const Model::CreateSceneDefensePolicyRequest& request, const CreateSceneDefensePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSceneDefensePolicyOutcomeCallable createSceneDefensePolicyCallable(const Model::CreateSceneDefensePolicyRequest& request) const;
			CreateSchedulerRuleOutcome createSchedulerRule(const Model::CreateSchedulerRuleRequest &request)const;
			void createSchedulerRuleAsync(const Model::CreateSchedulerRuleRequest& request, const CreateSchedulerRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateSchedulerRuleOutcomeCallable createSchedulerRuleCallable(const Model::CreateSchedulerRuleRequest& request) const;
			CreateTagResourcesOutcome createTagResources(const Model::CreateTagResourcesRequest &request)const;
			void createTagResourcesAsync(const Model::CreateTagResourcesRequest& request, const CreateTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTagResourcesOutcomeCallable createTagResourcesCallable(const Model::CreateTagResourcesRequest& request) const;
			CreateWebCCRuleOutcome createWebCCRule(const Model::CreateWebCCRuleRequest &request)const;
			void createWebCCRuleAsync(const Model::CreateWebCCRuleRequest& request, const CreateWebCCRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateWebCCRuleOutcomeCallable createWebCCRuleCallable(const Model::CreateWebCCRuleRequest& request) const;
			CreateWebRuleOutcome createWebRule(const Model::CreateWebRuleRequest &request)const;
			void createWebRuleAsync(const Model::CreateWebRuleRequest& request, const CreateWebRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateWebRuleOutcomeCallable createWebRuleCallable(const Model::CreateWebRuleRequest& request) const;
			DeleteAsyncTaskOutcome deleteAsyncTask(const Model::DeleteAsyncTaskRequest &request)const;
			void deleteAsyncTaskAsync(const Model::DeleteAsyncTaskRequest& request, const DeleteAsyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAsyncTaskOutcomeCallable deleteAsyncTaskCallable(const Model::DeleteAsyncTaskRequest& request) const;
			DeleteAutoCcBlacklistOutcome deleteAutoCcBlacklist(const Model::DeleteAutoCcBlacklistRequest &request)const;
			void deleteAutoCcBlacklistAsync(const Model::DeleteAutoCcBlacklistRequest& request, const DeleteAutoCcBlacklistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAutoCcBlacklistOutcomeCallable deleteAutoCcBlacklistCallable(const Model::DeleteAutoCcBlacklistRequest& request) const;
			DeleteAutoCcWhitelistOutcome deleteAutoCcWhitelist(const Model::DeleteAutoCcWhitelistRequest &request)const;
			void deleteAutoCcWhitelistAsync(const Model::DeleteAutoCcWhitelistRequest& request, const DeleteAutoCcWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAutoCcWhitelistOutcomeCallable deleteAutoCcWhitelistCallable(const Model::DeleteAutoCcWhitelistRequest& request) const;
			DeleteDomainResourceOutcome deleteDomainResource(const Model::DeleteDomainResourceRequest &request)const;
			void deleteDomainResourceAsync(const Model::DeleteDomainResourceRequest& request, const DeleteDomainResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDomainResourceOutcomeCallable deleteDomainResourceCallable(const Model::DeleteDomainResourceRequest& request) const;
			DeleteNetworkRuleOutcome deleteNetworkRule(const Model::DeleteNetworkRuleRequest &request)const;
			void deleteNetworkRuleAsync(const Model::DeleteNetworkRuleRequest& request, const DeleteNetworkRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteNetworkRuleOutcomeCallable deleteNetworkRuleCallable(const Model::DeleteNetworkRuleRequest& request) const;
			DeletePortOutcome deletePort(const Model::DeletePortRequest &request)const;
			void deletePortAsync(const Model::DeletePortRequest& request, const DeletePortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePortOutcomeCallable deletePortCallable(const Model::DeletePortRequest& request) const;
			DeleteSceneDefensePolicyOutcome deleteSceneDefensePolicy(const Model::DeleteSceneDefensePolicyRequest &request)const;
			void deleteSceneDefensePolicyAsync(const Model::DeleteSceneDefensePolicyRequest& request, const DeleteSceneDefensePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSceneDefensePolicyOutcomeCallable deleteSceneDefensePolicyCallable(const Model::DeleteSceneDefensePolicyRequest& request) const;
			DeleteSchedulerRuleOutcome deleteSchedulerRule(const Model::DeleteSchedulerRuleRequest &request)const;
			void deleteSchedulerRuleAsync(const Model::DeleteSchedulerRuleRequest& request, const DeleteSchedulerRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSchedulerRuleOutcomeCallable deleteSchedulerRuleCallable(const Model::DeleteSchedulerRuleRequest& request) const;
			DeleteTagResourcesOutcome deleteTagResources(const Model::DeleteTagResourcesRequest &request)const;
			void deleteTagResourcesAsync(const Model::DeleteTagResourcesRequest& request, const DeleteTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTagResourcesOutcomeCallable deleteTagResourcesCallable(const Model::DeleteTagResourcesRequest& request) const;
			DeleteWebCCRuleOutcome deleteWebCCRule(const Model::DeleteWebCCRuleRequest &request)const;
			void deleteWebCCRuleAsync(const Model::DeleteWebCCRuleRequest& request, const DeleteWebCCRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteWebCCRuleOutcomeCallable deleteWebCCRuleCallable(const Model::DeleteWebCCRuleRequest& request) const;
			DeleteWebCacheCustomRuleOutcome deleteWebCacheCustomRule(const Model::DeleteWebCacheCustomRuleRequest &request)const;
			void deleteWebCacheCustomRuleAsync(const Model::DeleteWebCacheCustomRuleRequest& request, const DeleteWebCacheCustomRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteWebCacheCustomRuleOutcomeCallable deleteWebCacheCustomRuleCallable(const Model::DeleteWebCacheCustomRuleRequest& request) const;
			DeleteWebPreciseAccessRuleOutcome deleteWebPreciseAccessRule(const Model::DeleteWebPreciseAccessRuleRequest &request)const;
			void deleteWebPreciseAccessRuleAsync(const Model::DeleteWebPreciseAccessRuleRequest& request, const DeleteWebPreciseAccessRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteWebPreciseAccessRuleOutcomeCallable deleteWebPreciseAccessRuleCallable(const Model::DeleteWebPreciseAccessRuleRequest& request) const;
			DeleteWebRuleOutcome deleteWebRule(const Model::DeleteWebRuleRequest &request)const;
			void deleteWebRuleAsync(const Model::DeleteWebRuleRequest& request, const DeleteWebRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteWebRuleOutcomeCallable deleteWebRuleCallable(const Model::DeleteWebRuleRequest& request) const;
			DescribeAsyncTasksOutcome describeAsyncTasks(const Model::DescribeAsyncTasksRequest &request)const;
			void describeAsyncTasksAsync(const Model::DescribeAsyncTasksRequest& request, const DescribeAsyncTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAsyncTasksOutcomeCallable describeAsyncTasksCallable(const Model::DescribeAsyncTasksRequest& request) const;
			DescribeAttackAnalysisMaxQpsOutcome describeAttackAnalysisMaxQps(const Model::DescribeAttackAnalysisMaxQpsRequest &request)const;
			void describeAttackAnalysisMaxQpsAsync(const Model::DescribeAttackAnalysisMaxQpsRequest& request, const DescribeAttackAnalysisMaxQpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAttackAnalysisMaxQpsOutcomeCallable describeAttackAnalysisMaxQpsCallable(const Model::DescribeAttackAnalysisMaxQpsRequest& request) const;
			DescribeAutoCcBlacklistOutcome describeAutoCcBlacklist(const Model::DescribeAutoCcBlacklistRequest &request)const;
			void describeAutoCcBlacklistAsync(const Model::DescribeAutoCcBlacklistRequest& request, const DescribeAutoCcBlacklistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAutoCcBlacklistOutcomeCallable describeAutoCcBlacklistCallable(const Model::DescribeAutoCcBlacklistRequest& request) const;
			DescribeAutoCcListCountOutcome describeAutoCcListCount(const Model::DescribeAutoCcListCountRequest &request)const;
			void describeAutoCcListCountAsync(const Model::DescribeAutoCcListCountRequest& request, const DescribeAutoCcListCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAutoCcListCountOutcomeCallable describeAutoCcListCountCallable(const Model::DescribeAutoCcListCountRequest& request) const;
			DescribeAutoCcWhitelistOutcome describeAutoCcWhitelist(const Model::DescribeAutoCcWhitelistRequest &request)const;
			void describeAutoCcWhitelistAsync(const Model::DescribeAutoCcWhitelistRequest& request, const DescribeAutoCcWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeAutoCcWhitelistOutcomeCallable describeAutoCcWhitelistCallable(const Model::DescribeAutoCcWhitelistRequest& request) const;
			DescribeBackSourceCidrOutcome describeBackSourceCidr(const Model::DescribeBackSourceCidrRequest &request)const;
			void describeBackSourceCidrAsync(const Model::DescribeBackSourceCidrRequest& request, const DescribeBackSourceCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackSourceCidrOutcomeCallable describeBackSourceCidrCallable(const Model::DescribeBackSourceCidrRequest& request) const;
			DescribeBlackholeStatusOutcome describeBlackholeStatus(const Model::DescribeBlackholeStatusRequest &request)const;
			void describeBlackholeStatusAsync(const Model::DescribeBlackholeStatusRequest& request, const DescribeBlackholeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBlackholeStatusOutcomeCallable describeBlackholeStatusCallable(const Model::DescribeBlackholeStatusRequest& request) const;
			DescribeBlockStatusOutcome describeBlockStatus(const Model::DescribeBlockStatusRequest &request)const;
			void describeBlockStatusAsync(const Model::DescribeBlockStatusRequest& request, const DescribeBlockStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBlockStatusOutcomeCallable describeBlockStatusCallable(const Model::DescribeBlockStatusRequest& request) const;
			DescribeCertsOutcome describeCerts(const Model::DescribeCertsRequest &request)const;
			void describeCertsAsync(const Model::DescribeCertsRequest& request, const DescribeCertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCertsOutcomeCallable describeCertsCallable(const Model::DescribeCertsRequest& request) const;
			DescribeCnameReusesOutcome describeCnameReuses(const Model::DescribeCnameReusesRequest &request)const;
			void describeCnameReusesAsync(const Model::DescribeCnameReusesRequest& request, const DescribeCnameReusesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCnameReusesOutcomeCallable describeCnameReusesCallable(const Model::DescribeCnameReusesRequest& request) const;
			DescribeDDoSEventsOutcome describeDDoSEvents(const Model::DescribeDDoSEventsRequest &request)const;
			void describeDDoSEventsAsync(const Model::DescribeDDoSEventsRequest& request, const DescribeDDoSEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDDoSEventsOutcomeCallable describeDDoSEventsCallable(const Model::DescribeDDoSEventsRequest& request) const;
			DescribeDDosAllEventListOutcome describeDDosAllEventList(const Model::DescribeDDosAllEventListRequest &request)const;
			void describeDDosAllEventListAsync(const Model::DescribeDDosAllEventListRequest& request, const DescribeDDosAllEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDDosAllEventListOutcomeCallable describeDDosAllEventListCallable(const Model::DescribeDDosAllEventListRequest& request) const;
			DescribeDDosEventAreaOutcome describeDDosEventArea(const Model::DescribeDDosEventAreaRequest &request)const;
			void describeDDosEventAreaAsync(const Model::DescribeDDosEventAreaRequest& request, const DescribeDDosEventAreaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDDosEventAreaOutcomeCallable describeDDosEventAreaCallable(const Model::DescribeDDosEventAreaRequest& request) const;
			DescribeDDosEventAttackTypeOutcome describeDDosEventAttackType(const Model::DescribeDDosEventAttackTypeRequest &request)const;
			void describeDDosEventAttackTypeAsync(const Model::DescribeDDosEventAttackTypeRequest& request, const DescribeDDosEventAttackTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDDosEventAttackTypeOutcomeCallable describeDDosEventAttackTypeCallable(const Model::DescribeDDosEventAttackTypeRequest& request) const;
			DescribeDDosEventIspOutcome describeDDosEventIsp(const Model::DescribeDDosEventIspRequest &request)const;
			void describeDDosEventIspAsync(const Model::DescribeDDosEventIspRequest& request, const DescribeDDosEventIspAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDDosEventIspOutcomeCallable describeDDosEventIspCallable(const Model::DescribeDDosEventIspRequest& request) const;
			DescribeDDosEventMaxOutcome describeDDosEventMax(const Model::DescribeDDosEventMaxRequest &request)const;
			void describeDDosEventMaxAsync(const Model::DescribeDDosEventMaxRequest& request, const DescribeDDosEventMaxAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDDosEventMaxOutcomeCallable describeDDosEventMaxCallable(const Model::DescribeDDosEventMaxRequest& request) const;
			DescribeDDosEventSrcIpOutcome describeDDosEventSrcIp(const Model::DescribeDDosEventSrcIpRequest &request)const;
			void describeDDosEventSrcIpAsync(const Model::DescribeDDosEventSrcIpRequest& request, const DescribeDDosEventSrcIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDDosEventSrcIpOutcomeCallable describeDDosEventSrcIpCallable(const Model::DescribeDDosEventSrcIpRequest& request) const;
			DescribeDefenseCountStatisticsOutcome describeDefenseCountStatistics(const Model::DescribeDefenseCountStatisticsRequest &request)const;
			void describeDefenseCountStatisticsAsync(const Model::DescribeDefenseCountStatisticsRequest& request, const DescribeDefenseCountStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDefenseCountStatisticsOutcomeCallable describeDefenseCountStatisticsCallable(const Model::DescribeDefenseCountStatisticsRequest& request) const;
			DescribeDefenseRecordsOutcome describeDefenseRecords(const Model::DescribeDefenseRecordsRequest &request)const;
			void describeDefenseRecordsAsync(const Model::DescribeDefenseRecordsRequest& request, const DescribeDefenseRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDefenseRecordsOutcomeCallable describeDefenseRecordsCallable(const Model::DescribeDefenseRecordsRequest& request) const;
			DescribeDomainAttackEventsOutcome describeDomainAttackEvents(const Model::DescribeDomainAttackEventsRequest &request)const;
			void describeDomainAttackEventsAsync(const Model::DescribeDomainAttackEventsRequest& request, const DescribeDomainAttackEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainAttackEventsOutcomeCallable describeDomainAttackEventsCallable(const Model::DescribeDomainAttackEventsRequest& request) const;
			DescribeDomainOverviewOutcome describeDomainOverview(const Model::DescribeDomainOverviewRequest &request)const;
			void describeDomainOverviewAsync(const Model::DescribeDomainOverviewRequest& request, const DescribeDomainOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainOverviewOutcomeCallable describeDomainOverviewCallable(const Model::DescribeDomainOverviewRequest& request) const;
			DescribeDomainQPSListOutcome describeDomainQPSList(const Model::DescribeDomainQPSListRequest &request)const;
			void describeDomainQPSListAsync(const Model::DescribeDomainQPSListRequest& request, const DescribeDomainQPSListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainQPSListOutcomeCallable describeDomainQPSListCallable(const Model::DescribeDomainQPSListRequest& request) const;
			DescribeDomainResourceOutcome describeDomainResource(const Model::DescribeDomainResourceRequest &request)const;
			void describeDomainResourceAsync(const Model::DescribeDomainResourceRequest& request, const DescribeDomainResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainResourceOutcomeCallable describeDomainResourceCallable(const Model::DescribeDomainResourceRequest& request) const;
			DescribeDomainSecurityProfileOutcome describeDomainSecurityProfile(const Model::DescribeDomainSecurityProfileRequest &request)const;
			void describeDomainSecurityProfileAsync(const Model::DescribeDomainSecurityProfileRequest& request, const DescribeDomainSecurityProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainSecurityProfileOutcomeCallable describeDomainSecurityProfileCallable(const Model::DescribeDomainSecurityProfileRequest& request) const;
			DescribeDomainStatusCodeCountOutcome describeDomainStatusCodeCount(const Model::DescribeDomainStatusCodeCountRequest &request)const;
			void describeDomainStatusCodeCountAsync(const Model::DescribeDomainStatusCodeCountRequest& request, const DescribeDomainStatusCodeCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainStatusCodeCountOutcomeCallable describeDomainStatusCodeCountCallable(const Model::DescribeDomainStatusCodeCountRequest& request) const;
			DescribeDomainStatusCodeListOutcome describeDomainStatusCodeList(const Model::DescribeDomainStatusCodeListRequest &request)const;
			void describeDomainStatusCodeListAsync(const Model::DescribeDomainStatusCodeListRequest& request, const DescribeDomainStatusCodeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainStatusCodeListOutcomeCallable describeDomainStatusCodeListCallable(const Model::DescribeDomainStatusCodeListRequest& request) const;
			DescribeDomainTopAttackListOutcome describeDomainTopAttackList(const Model::DescribeDomainTopAttackListRequest &request)const;
			void describeDomainTopAttackListAsync(const Model::DescribeDomainTopAttackListRequest& request, const DescribeDomainTopAttackListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainTopAttackListOutcomeCallable describeDomainTopAttackListCallable(const Model::DescribeDomainTopAttackListRequest& request) const;
			DescribeDomainViewSourceCountriesOutcome describeDomainViewSourceCountries(const Model::DescribeDomainViewSourceCountriesRequest &request)const;
			void describeDomainViewSourceCountriesAsync(const Model::DescribeDomainViewSourceCountriesRequest& request, const DescribeDomainViewSourceCountriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainViewSourceCountriesOutcomeCallable describeDomainViewSourceCountriesCallable(const Model::DescribeDomainViewSourceCountriesRequest& request) const;
			DescribeDomainViewSourceProvincesOutcome describeDomainViewSourceProvinces(const Model::DescribeDomainViewSourceProvincesRequest &request)const;
			void describeDomainViewSourceProvincesAsync(const Model::DescribeDomainViewSourceProvincesRequest& request, const DescribeDomainViewSourceProvincesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainViewSourceProvincesOutcomeCallable describeDomainViewSourceProvincesCallable(const Model::DescribeDomainViewSourceProvincesRequest& request) const;
			DescribeDomainViewTopCostTimeOutcome describeDomainViewTopCostTime(const Model::DescribeDomainViewTopCostTimeRequest &request)const;
			void describeDomainViewTopCostTimeAsync(const Model::DescribeDomainViewTopCostTimeRequest& request, const DescribeDomainViewTopCostTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainViewTopCostTimeOutcomeCallable describeDomainViewTopCostTimeCallable(const Model::DescribeDomainViewTopCostTimeRequest& request) const;
			DescribeDomainViewTopUrlOutcome describeDomainViewTopUrl(const Model::DescribeDomainViewTopUrlRequest &request)const;
			void describeDomainViewTopUrlAsync(const Model::DescribeDomainViewTopUrlRequest& request, const DescribeDomainViewTopUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainViewTopUrlOutcomeCallable describeDomainViewTopUrlCallable(const Model::DescribeDomainViewTopUrlRequest& request) const;
			DescribeDomainsOutcome describeDomains(const Model::DescribeDomainsRequest &request)const;
			void describeDomainsAsync(const Model::DescribeDomainsRequest& request, const DescribeDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainsOutcomeCallable describeDomainsCallable(const Model::DescribeDomainsRequest& request) const;
			DescribeElasticBandwidthSpecOutcome describeElasticBandwidthSpec(const Model::DescribeElasticBandwidthSpecRequest &request)const;
			void describeElasticBandwidthSpecAsync(const Model::DescribeElasticBandwidthSpecRequest& request, const DescribeElasticBandwidthSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeElasticBandwidthSpecOutcomeCallable describeElasticBandwidthSpecCallable(const Model::DescribeElasticBandwidthSpecRequest& request) const;
			DescribeElasticQpsOutcome describeElasticQps(const Model::DescribeElasticQpsRequest &request)const;
			void describeElasticQpsAsync(const Model::DescribeElasticQpsRequest& request, const DescribeElasticQpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeElasticQpsOutcomeCallable describeElasticQpsCallable(const Model::DescribeElasticQpsRequest& request) const;
			DescribeElasticQpsRecordOutcome describeElasticQpsRecord(const Model::DescribeElasticQpsRecordRequest &request)const;
			void describeElasticQpsRecordAsync(const Model::DescribeElasticQpsRecordRequest& request, const DescribeElasticQpsRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeElasticQpsRecordOutcomeCallable describeElasticQpsRecordCallable(const Model::DescribeElasticQpsRecordRequest& request) const;
			DescribeHeadersOutcome describeHeaders(const Model::DescribeHeadersRequest &request)const;
			void describeHeadersAsync(const Model::DescribeHeadersRequest& request, const DescribeHeadersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHeadersOutcomeCallable describeHeadersCallable(const Model::DescribeHeadersRequest& request) const;
			DescribeHealthCheckListOutcome describeHealthCheckList(const Model::DescribeHealthCheckListRequest &request)const;
			void describeHealthCheckListAsync(const Model::DescribeHealthCheckListRequest& request, const DescribeHealthCheckListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHealthCheckListOutcomeCallable describeHealthCheckListCallable(const Model::DescribeHealthCheckListRequest& request) const;
			DescribeHealthCheckStatusOutcome describeHealthCheckStatus(const Model::DescribeHealthCheckStatusRequest &request)const;
			void describeHealthCheckStatusAsync(const Model::DescribeHealthCheckStatusRequest& request, const DescribeHealthCheckStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHealthCheckStatusOutcomeCallable describeHealthCheckStatusCallable(const Model::DescribeHealthCheckStatusRequest& request) const;
			DescribeInstanceDetailsOutcome describeInstanceDetails(const Model::DescribeInstanceDetailsRequest &request)const;
			void describeInstanceDetailsAsync(const Model::DescribeInstanceDetailsRequest& request, const DescribeInstanceDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceDetailsOutcomeCallable describeInstanceDetailsCallable(const Model::DescribeInstanceDetailsRequest& request) const;
			DescribeInstanceExtOutcome describeInstanceExt(const Model::DescribeInstanceExtRequest &request)const;
			void describeInstanceExtAsync(const Model::DescribeInstanceExtRequest& request, const DescribeInstanceExtAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceExtOutcomeCallable describeInstanceExtCallable(const Model::DescribeInstanceExtRequest& request) const;
			DescribeInstanceIdsOutcome describeInstanceIds(const Model::DescribeInstanceIdsRequest &request)const;
			void describeInstanceIdsAsync(const Model::DescribeInstanceIdsRequest& request, const DescribeInstanceIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceIdsOutcomeCallable describeInstanceIdsCallable(const Model::DescribeInstanceIdsRequest& request) const;
			DescribeInstanceSpecsOutcome describeInstanceSpecs(const Model::DescribeInstanceSpecsRequest &request)const;
			void describeInstanceSpecsAsync(const Model::DescribeInstanceSpecsRequest& request, const DescribeInstanceSpecsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceSpecsOutcomeCallable describeInstanceSpecsCallable(const Model::DescribeInstanceSpecsRequest& request) const;
			DescribeInstanceStatisticsOutcome describeInstanceStatistics(const Model::DescribeInstanceStatisticsRequest &request)const;
			void describeInstanceStatisticsAsync(const Model::DescribeInstanceStatisticsRequest& request, const DescribeInstanceStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceStatisticsOutcomeCallable describeInstanceStatisticsCallable(const Model::DescribeInstanceStatisticsRequest& request) const;
			DescribeInstanceStatusOutcome describeInstanceStatus(const Model::DescribeInstanceStatusRequest &request)const;
			void describeInstanceStatusAsync(const Model::DescribeInstanceStatusRequest& request, const DescribeInstanceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceStatusOutcomeCallable describeInstanceStatusCallable(const Model::DescribeInstanceStatusRequest& request) const;
			DescribeInstancesOutcome describeInstances(const Model::DescribeInstancesRequest &request)const;
			void describeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstancesOutcomeCallable describeInstancesCallable(const Model::DescribeInstancesRequest& request) const;
			DescribeL7RsPolicyOutcome describeL7RsPolicy(const Model::DescribeL7RsPolicyRequest &request)const;
			void describeL7RsPolicyAsync(const Model::DescribeL7RsPolicyRequest& request, const DescribeL7RsPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeL7RsPolicyOutcomeCallable describeL7RsPolicyCallable(const Model::DescribeL7RsPolicyRequest& request) const;
			DescribeLayer4RulePolicyOutcome describeLayer4RulePolicy(const Model::DescribeLayer4RulePolicyRequest &request)const;
			void describeLayer4RulePolicyAsync(const Model::DescribeLayer4RulePolicyRequest& request, const DescribeLayer4RulePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLayer4RulePolicyOutcomeCallable describeLayer4RulePolicyCallable(const Model::DescribeLayer4RulePolicyRequest& request) const;
			DescribeLogStoreExistStatusOutcome describeLogStoreExistStatus(const Model::DescribeLogStoreExistStatusRequest &request)const;
			void describeLogStoreExistStatusAsync(const Model::DescribeLogStoreExistStatusRequest& request, const DescribeLogStoreExistStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLogStoreExistStatusOutcomeCallable describeLogStoreExistStatusCallable(const Model::DescribeLogStoreExistStatusRequest& request) const;
			DescribeNetworkRegionBlockOutcome describeNetworkRegionBlock(const Model::DescribeNetworkRegionBlockRequest &request)const;
			void describeNetworkRegionBlockAsync(const Model::DescribeNetworkRegionBlockRequest& request, const DescribeNetworkRegionBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNetworkRegionBlockOutcomeCallable describeNetworkRegionBlockCallable(const Model::DescribeNetworkRegionBlockRequest& request) const;
			DescribeNetworkRuleAttributesOutcome describeNetworkRuleAttributes(const Model::DescribeNetworkRuleAttributesRequest &request)const;
			void describeNetworkRuleAttributesAsync(const Model::DescribeNetworkRuleAttributesRequest& request, const DescribeNetworkRuleAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNetworkRuleAttributesOutcomeCallable describeNetworkRuleAttributesCallable(const Model::DescribeNetworkRuleAttributesRequest& request) const;
			DescribeNetworkRulesOutcome describeNetworkRules(const Model::DescribeNetworkRulesRequest &request)const;
			void describeNetworkRulesAsync(const Model::DescribeNetworkRulesRequest& request, const DescribeNetworkRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeNetworkRulesOutcomeCallable describeNetworkRulesCallable(const Model::DescribeNetworkRulesRequest& request) const;
			DescribeOpEntitiesOutcome describeOpEntities(const Model::DescribeOpEntitiesRequest &request)const;
			void describeOpEntitiesAsync(const Model::DescribeOpEntitiesRequest& request, const DescribeOpEntitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOpEntitiesOutcomeCallable describeOpEntitiesCallable(const Model::DescribeOpEntitiesRequest& request) const;
			DescribePortOutcome describePort(const Model::DescribePortRequest &request)const;
			void describePortAsync(const Model::DescribePortRequest& request, const DescribePortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePortOutcomeCallable describePortCallable(const Model::DescribePortRequest& request) const;
			DescribePortAttackMaxFlowOutcome describePortAttackMaxFlow(const Model::DescribePortAttackMaxFlowRequest &request)const;
			void describePortAttackMaxFlowAsync(const Model::DescribePortAttackMaxFlowRequest& request, const DescribePortAttackMaxFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePortAttackMaxFlowOutcomeCallable describePortAttackMaxFlowCallable(const Model::DescribePortAttackMaxFlowRequest& request) const;
			DescribePortAutoCcStatusOutcome describePortAutoCcStatus(const Model::DescribePortAutoCcStatusRequest &request)const;
			void describePortAutoCcStatusAsync(const Model::DescribePortAutoCcStatusRequest& request, const DescribePortAutoCcStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePortAutoCcStatusOutcomeCallable describePortAutoCcStatusCallable(const Model::DescribePortAutoCcStatusRequest& request) const;
			DescribePortCcAttackTopIPOutcome describePortCcAttackTopIP(const Model::DescribePortCcAttackTopIPRequest &request)const;
			void describePortCcAttackTopIPAsync(const Model::DescribePortCcAttackTopIPRequest& request, const DescribePortCcAttackTopIPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePortCcAttackTopIPOutcomeCallable describePortCcAttackTopIPCallable(const Model::DescribePortCcAttackTopIPRequest& request) const;
			DescribePortConnsCountOutcome describePortConnsCount(const Model::DescribePortConnsCountRequest &request)const;
			void describePortConnsCountAsync(const Model::DescribePortConnsCountRequest& request, const DescribePortConnsCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePortConnsCountOutcomeCallable describePortConnsCountCallable(const Model::DescribePortConnsCountRequest& request) const;
			DescribePortConnsListOutcome describePortConnsList(const Model::DescribePortConnsListRequest &request)const;
			void describePortConnsListAsync(const Model::DescribePortConnsListRequest& request, const DescribePortConnsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePortConnsListOutcomeCallable describePortConnsListCallable(const Model::DescribePortConnsListRequest& request) const;
			DescribePortFlowListOutcome describePortFlowList(const Model::DescribePortFlowListRequest &request)const;
			void describePortFlowListAsync(const Model::DescribePortFlowListRequest& request, const DescribePortFlowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePortFlowListOutcomeCallable describePortFlowListCallable(const Model::DescribePortFlowListRequest& request) const;
			DescribePortMaxConnsOutcome describePortMaxConns(const Model::DescribePortMaxConnsRequest &request)const;
			void describePortMaxConnsAsync(const Model::DescribePortMaxConnsRequest& request, const DescribePortMaxConnsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePortMaxConnsOutcomeCallable describePortMaxConnsCallable(const Model::DescribePortMaxConnsRequest& request) const;
			DescribePortViewSourceCountriesOutcome describePortViewSourceCountries(const Model::DescribePortViewSourceCountriesRequest &request)const;
			void describePortViewSourceCountriesAsync(const Model::DescribePortViewSourceCountriesRequest& request, const DescribePortViewSourceCountriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePortViewSourceCountriesOutcomeCallable describePortViewSourceCountriesCallable(const Model::DescribePortViewSourceCountriesRequest& request) const;
			DescribePortViewSourceIspsOutcome describePortViewSourceIsps(const Model::DescribePortViewSourceIspsRequest &request)const;
			void describePortViewSourceIspsAsync(const Model::DescribePortViewSourceIspsRequest& request, const DescribePortViewSourceIspsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePortViewSourceIspsOutcomeCallable describePortViewSourceIspsCallable(const Model::DescribePortViewSourceIspsRequest& request) const;
			DescribePortViewSourceProvincesOutcome describePortViewSourceProvinces(const Model::DescribePortViewSourceProvincesRequest &request)const;
			void describePortViewSourceProvincesAsync(const Model::DescribePortViewSourceProvincesRequest& request, const DescribePortViewSourceProvincesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribePortViewSourceProvincesOutcomeCallable describePortViewSourceProvincesCallable(const Model::DescribePortViewSourceProvincesRequest& request) const;
			DescribeSceneDefenseObjectsOutcome describeSceneDefenseObjects(const Model::DescribeSceneDefenseObjectsRequest &request)const;
			void describeSceneDefenseObjectsAsync(const Model::DescribeSceneDefenseObjectsRequest& request, const DescribeSceneDefenseObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSceneDefenseObjectsOutcomeCallable describeSceneDefenseObjectsCallable(const Model::DescribeSceneDefenseObjectsRequest& request) const;
			DescribeSceneDefensePoliciesOutcome describeSceneDefensePolicies(const Model::DescribeSceneDefensePoliciesRequest &request)const;
			void describeSceneDefensePoliciesAsync(const Model::DescribeSceneDefensePoliciesRequest& request, const DescribeSceneDefensePoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSceneDefensePoliciesOutcomeCallable describeSceneDefensePoliciesCallable(const Model::DescribeSceneDefensePoliciesRequest& request) const;
			DescribeSchedulerRulesOutcome describeSchedulerRules(const Model::DescribeSchedulerRulesRequest &request)const;
			void describeSchedulerRulesAsync(const Model::DescribeSchedulerRulesRequest& request, const DescribeSchedulerRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSchedulerRulesOutcomeCallable describeSchedulerRulesCallable(const Model::DescribeSchedulerRulesRequest& request) const;
			DescribeSlaEventListOutcome describeSlaEventList(const Model::DescribeSlaEventListRequest &request)const;
			void describeSlaEventListAsync(const Model::DescribeSlaEventListRequest& request, const DescribeSlaEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSlaEventListOutcomeCallable describeSlaEventListCallable(const Model::DescribeSlaEventListRequest& request) const;
			DescribeSlsAuthStatusOutcome describeSlsAuthStatus(const Model::DescribeSlsAuthStatusRequest &request)const;
			void describeSlsAuthStatusAsync(const Model::DescribeSlsAuthStatusRequest& request, const DescribeSlsAuthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSlsAuthStatusOutcomeCallable describeSlsAuthStatusCallable(const Model::DescribeSlsAuthStatusRequest& request) const;
			DescribeSlsLogstoreInfoOutcome describeSlsLogstoreInfo(const Model::DescribeSlsLogstoreInfoRequest &request)const;
			void describeSlsLogstoreInfoAsync(const Model::DescribeSlsLogstoreInfoRequest& request, const DescribeSlsLogstoreInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSlsLogstoreInfoOutcomeCallable describeSlsLogstoreInfoCallable(const Model::DescribeSlsLogstoreInfoRequest& request) const;
			DescribeSlsOpenStatusOutcome describeSlsOpenStatus(const Model::DescribeSlsOpenStatusRequest &request)const;
			void describeSlsOpenStatusAsync(const Model::DescribeSlsOpenStatusRequest& request, const DescribeSlsOpenStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSlsOpenStatusOutcomeCallable describeSlsOpenStatusCallable(const Model::DescribeSlsOpenStatusRequest& request) const;
			DescribeStsGrantStatusOutcome describeStsGrantStatus(const Model::DescribeStsGrantStatusRequest &request)const;
			void describeStsGrantStatusAsync(const Model::DescribeStsGrantStatusRequest& request, const DescribeStsGrantStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeStsGrantStatusOutcomeCallable describeStsGrantStatusCallable(const Model::DescribeStsGrantStatusRequest& request) const;
			DescribeSystemLogOutcome describeSystemLog(const Model::DescribeSystemLogRequest &request)const;
			void describeSystemLogAsync(const Model::DescribeSystemLogRequest& request, const DescribeSystemLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSystemLogOutcomeCallable describeSystemLogCallable(const Model::DescribeSystemLogRequest& request) const;
			DescribeTagKeysOutcome describeTagKeys(const Model::DescribeTagKeysRequest &request)const;
			void describeTagKeysAsync(const Model::DescribeTagKeysRequest& request, const DescribeTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTagKeysOutcomeCallable describeTagKeysCallable(const Model::DescribeTagKeysRequest& request) const;
			DescribeTagResourcesOutcome describeTagResources(const Model::DescribeTagResourcesRequest &request)const;
			void describeTagResourcesAsync(const Model::DescribeTagResourcesRequest& request, const DescribeTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTagResourcesOutcomeCallable describeTagResourcesCallable(const Model::DescribeTagResourcesRequest& request) const;
			DescribeTotalAttackMaxFlowOutcome describeTotalAttackMaxFlow(const Model::DescribeTotalAttackMaxFlowRequest &request)const;
			void describeTotalAttackMaxFlowAsync(const Model::DescribeTotalAttackMaxFlowRequest& request, const DescribeTotalAttackMaxFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTotalAttackMaxFlowOutcomeCallable describeTotalAttackMaxFlowCallable(const Model::DescribeTotalAttackMaxFlowRequest& request) const;
			DescribeUdpReflectOutcome describeUdpReflect(const Model::DescribeUdpReflectRequest &request)const;
			void describeUdpReflectAsync(const Model::DescribeUdpReflectRequest& request, const DescribeUdpReflectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUdpReflectOutcomeCallable describeUdpReflectCallable(const Model::DescribeUdpReflectRequest& request) const;
			DescribeUnBlackholeCountOutcome describeUnBlackholeCount(const Model::DescribeUnBlackholeCountRequest &request)const;
			void describeUnBlackholeCountAsync(const Model::DescribeUnBlackholeCountRequest& request, const DescribeUnBlackholeCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUnBlackholeCountOutcomeCallable describeUnBlackholeCountCallable(const Model::DescribeUnBlackholeCountRequest& request) const;
			DescribeUnBlockCountOutcome describeUnBlockCount(const Model::DescribeUnBlockCountRequest &request)const;
			void describeUnBlockCountAsync(const Model::DescribeUnBlockCountRequest& request, const DescribeUnBlockCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUnBlockCountOutcomeCallable describeUnBlockCountCallable(const Model::DescribeUnBlockCountRequest& request) const;
			DescribeWebAccessLogDispatchStatusOutcome describeWebAccessLogDispatchStatus(const Model::DescribeWebAccessLogDispatchStatusRequest &request)const;
			void describeWebAccessLogDispatchStatusAsync(const Model::DescribeWebAccessLogDispatchStatusRequest& request, const DescribeWebAccessLogDispatchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebAccessLogDispatchStatusOutcomeCallable describeWebAccessLogDispatchStatusCallable(const Model::DescribeWebAccessLogDispatchStatusRequest& request) const;
			DescribeWebAccessLogEmptyCountOutcome describeWebAccessLogEmptyCount(const Model::DescribeWebAccessLogEmptyCountRequest &request)const;
			void describeWebAccessLogEmptyCountAsync(const Model::DescribeWebAccessLogEmptyCountRequest& request, const DescribeWebAccessLogEmptyCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebAccessLogEmptyCountOutcomeCallable describeWebAccessLogEmptyCountCallable(const Model::DescribeWebAccessLogEmptyCountRequest& request) const;
			DescribeWebAccessLogStatusOutcome describeWebAccessLogStatus(const Model::DescribeWebAccessLogStatusRequest &request)const;
			void describeWebAccessLogStatusAsync(const Model::DescribeWebAccessLogStatusRequest& request, const DescribeWebAccessLogStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebAccessLogStatusOutcomeCallable describeWebAccessLogStatusCallable(const Model::DescribeWebAccessLogStatusRequest& request) const;
			DescribeWebAccessModeOutcome describeWebAccessMode(const Model::DescribeWebAccessModeRequest &request)const;
			void describeWebAccessModeAsync(const Model::DescribeWebAccessModeRequest& request, const DescribeWebAccessModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebAccessModeOutcomeCallable describeWebAccessModeCallable(const Model::DescribeWebAccessModeRequest& request) const;
			DescribeWebAreaBlockConfigsOutcome describeWebAreaBlockConfigs(const Model::DescribeWebAreaBlockConfigsRequest &request)const;
			void describeWebAreaBlockConfigsAsync(const Model::DescribeWebAreaBlockConfigsRequest& request, const DescribeWebAreaBlockConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebAreaBlockConfigsOutcomeCallable describeWebAreaBlockConfigsCallable(const Model::DescribeWebAreaBlockConfigsRequest& request) const;
			DescribeWebCCRulesOutcome describeWebCCRules(const Model::DescribeWebCCRulesRequest &request)const;
			void describeWebCCRulesAsync(const Model::DescribeWebCCRulesRequest& request, const DescribeWebCCRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebCCRulesOutcomeCallable describeWebCCRulesCallable(const Model::DescribeWebCCRulesRequest& request) const;
			DescribeWebCacheConfigsOutcome describeWebCacheConfigs(const Model::DescribeWebCacheConfigsRequest &request)const;
			void describeWebCacheConfigsAsync(const Model::DescribeWebCacheConfigsRequest& request, const DescribeWebCacheConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebCacheConfigsOutcomeCallable describeWebCacheConfigsCallable(const Model::DescribeWebCacheConfigsRequest& request) const;
			DescribeWebCcProtectSwitchOutcome describeWebCcProtectSwitch(const Model::DescribeWebCcProtectSwitchRequest &request)const;
			void describeWebCcProtectSwitchAsync(const Model::DescribeWebCcProtectSwitchRequest& request, const DescribeWebCcProtectSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebCcProtectSwitchOutcomeCallable describeWebCcProtectSwitchCallable(const Model::DescribeWebCcProtectSwitchRequest& request) const;
			DescribeWebCustomPortsOutcome describeWebCustomPorts(const Model::DescribeWebCustomPortsRequest &request)const;
			void describeWebCustomPortsAsync(const Model::DescribeWebCustomPortsRequest& request, const DescribeWebCustomPortsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebCustomPortsOutcomeCallable describeWebCustomPortsCallable(const Model::DescribeWebCustomPortsRequest& request) const;
			DescribeWebInstanceRelationsOutcome describeWebInstanceRelations(const Model::DescribeWebInstanceRelationsRequest &request)const;
			void describeWebInstanceRelationsAsync(const Model::DescribeWebInstanceRelationsRequest& request, const DescribeWebInstanceRelationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebInstanceRelationsOutcomeCallable describeWebInstanceRelationsCallable(const Model::DescribeWebInstanceRelationsRequest& request) const;
			DescribeWebPreciseAccessRuleOutcome describeWebPreciseAccessRule(const Model::DescribeWebPreciseAccessRuleRequest &request)const;
			void describeWebPreciseAccessRuleAsync(const Model::DescribeWebPreciseAccessRuleRequest& request, const DescribeWebPreciseAccessRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebPreciseAccessRuleOutcomeCallable describeWebPreciseAccessRuleCallable(const Model::DescribeWebPreciseAccessRuleRequest& request) const;
			DescribeWebReportTopIpOutcome describeWebReportTopIp(const Model::DescribeWebReportTopIpRequest &request)const;
			void describeWebReportTopIpAsync(const Model::DescribeWebReportTopIpRequest& request, const DescribeWebReportTopIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebReportTopIpOutcomeCallable describeWebReportTopIpCallable(const Model::DescribeWebReportTopIpRequest& request) const;
			DescribeWebRulesOutcome describeWebRules(const Model::DescribeWebRulesRequest &request)const;
			void describeWebRulesAsync(const Model::DescribeWebRulesRequest& request, const DescribeWebRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWebRulesOutcomeCallable describeWebRulesCallable(const Model::DescribeWebRulesRequest& request) const;
			DetachSceneDefenseObjectOutcome detachSceneDefenseObject(const Model::DetachSceneDefenseObjectRequest &request)const;
			void detachSceneDefenseObjectAsync(const Model::DetachSceneDefenseObjectRequest& request, const DetachSceneDefenseObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetachSceneDefenseObjectOutcomeCallable detachSceneDefenseObjectCallable(const Model::DetachSceneDefenseObjectRequest& request) const;
			DisableSceneDefensePolicyOutcome disableSceneDefensePolicy(const Model::DisableSceneDefensePolicyRequest &request)const;
			void disableSceneDefensePolicyAsync(const Model::DisableSceneDefensePolicyRequest& request, const DisableSceneDefensePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableSceneDefensePolicyOutcomeCallable disableSceneDefensePolicyCallable(const Model::DisableSceneDefensePolicyRequest& request) const;
			DisableWebAccessLogConfigOutcome disableWebAccessLogConfig(const Model::DisableWebAccessLogConfigRequest &request)const;
			void disableWebAccessLogConfigAsync(const Model::DisableWebAccessLogConfigRequest& request, const DisableWebAccessLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableWebAccessLogConfigOutcomeCallable disableWebAccessLogConfigCallable(const Model::DisableWebAccessLogConfigRequest& request) const;
			DisableWebCCOutcome disableWebCC(const Model::DisableWebCCRequest &request)const;
			void disableWebCCAsync(const Model::DisableWebCCRequest& request, const DisableWebCCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableWebCCOutcomeCallable disableWebCCCallable(const Model::DisableWebCCRequest& request) const;
			DisableWebCCRuleOutcome disableWebCCRule(const Model::DisableWebCCRuleRequest &request)const;
			void disableWebCCRuleAsync(const Model::DisableWebCCRuleRequest& request, const DisableWebCCRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableWebCCRuleOutcomeCallable disableWebCCRuleCallable(const Model::DisableWebCCRuleRequest& request) const;
			EmptyAutoCcBlacklistOutcome emptyAutoCcBlacklist(const Model::EmptyAutoCcBlacklistRequest &request)const;
			void emptyAutoCcBlacklistAsync(const Model::EmptyAutoCcBlacklistRequest& request, const EmptyAutoCcBlacklistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EmptyAutoCcBlacklistOutcomeCallable emptyAutoCcBlacklistCallable(const Model::EmptyAutoCcBlacklistRequest& request) const;
			EmptyAutoCcWhitelistOutcome emptyAutoCcWhitelist(const Model::EmptyAutoCcWhitelistRequest &request)const;
			void emptyAutoCcWhitelistAsync(const Model::EmptyAutoCcWhitelistRequest& request, const EmptyAutoCcWhitelistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EmptyAutoCcWhitelistOutcomeCallable emptyAutoCcWhitelistCallable(const Model::EmptyAutoCcWhitelistRequest& request) const;
			EmptySlsLogstoreOutcome emptySlsLogstore(const Model::EmptySlsLogstoreRequest &request)const;
			void emptySlsLogstoreAsync(const Model::EmptySlsLogstoreRequest& request, const EmptySlsLogstoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EmptySlsLogstoreOutcomeCallable emptySlsLogstoreCallable(const Model::EmptySlsLogstoreRequest& request) const;
			EnableSceneDefensePolicyOutcome enableSceneDefensePolicy(const Model::EnableSceneDefensePolicyRequest &request)const;
			void enableSceneDefensePolicyAsync(const Model::EnableSceneDefensePolicyRequest& request, const EnableSceneDefensePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableSceneDefensePolicyOutcomeCallable enableSceneDefensePolicyCallable(const Model::EnableSceneDefensePolicyRequest& request) const;
			EnableWebAccessLogConfigOutcome enableWebAccessLogConfig(const Model::EnableWebAccessLogConfigRequest &request)const;
			void enableWebAccessLogConfigAsync(const Model::EnableWebAccessLogConfigRequest& request, const EnableWebAccessLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableWebAccessLogConfigOutcomeCallable enableWebAccessLogConfigCallable(const Model::EnableWebAccessLogConfigRequest& request) const;
			EnableWebCCOutcome enableWebCC(const Model::EnableWebCCRequest &request)const;
			void enableWebCCAsync(const Model::EnableWebCCRequest& request, const EnableWebCCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableWebCCOutcomeCallable enableWebCCCallable(const Model::EnableWebCCRequest& request) const;
			EnableWebCCRuleOutcome enableWebCCRule(const Model::EnableWebCCRuleRequest &request)const;
			void enableWebCCRuleAsync(const Model::EnableWebCCRuleRequest& request, const EnableWebCCRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableWebCCRuleOutcomeCallable enableWebCCRuleCallable(const Model::EnableWebCCRuleRequest& request) const;
			ModifyBizBandWidthModeOutcome modifyBizBandWidthMode(const Model::ModifyBizBandWidthModeRequest &request)const;
			void modifyBizBandWidthModeAsync(const Model::ModifyBizBandWidthModeRequest& request, const ModifyBizBandWidthModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBizBandWidthModeOutcomeCallable modifyBizBandWidthModeCallable(const Model::ModifyBizBandWidthModeRequest& request) const;
			ModifyBlackholeStatusOutcome modifyBlackholeStatus(const Model::ModifyBlackholeStatusRequest &request)const;
			void modifyBlackholeStatusAsync(const Model::ModifyBlackholeStatusRequest& request, const ModifyBlackholeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBlackholeStatusOutcomeCallable modifyBlackholeStatusCallable(const Model::ModifyBlackholeStatusRequest& request) const;
			ModifyBlockStatusOutcome modifyBlockStatus(const Model::ModifyBlockStatusRequest &request)const;
			void modifyBlockStatusAsync(const Model::ModifyBlockStatusRequest& request, const ModifyBlockStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyBlockStatusOutcomeCallable modifyBlockStatusCallable(const Model::ModifyBlockStatusRequest& request) const;
			ModifyCnameReuseOutcome modifyCnameReuse(const Model::ModifyCnameReuseRequest &request)const;
			void modifyCnameReuseAsync(const Model::ModifyCnameReuseRequest& request, const ModifyCnameReuseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyCnameReuseOutcomeCallable modifyCnameReuseCallable(const Model::ModifyCnameReuseRequest& request) const;
			ModifyDomainResourceOutcome modifyDomainResource(const Model::ModifyDomainResourceRequest &request)const;
			void modifyDomainResourceAsync(const Model::ModifyDomainResourceRequest& request, const ModifyDomainResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDomainResourceOutcomeCallable modifyDomainResourceCallable(const Model::ModifyDomainResourceRequest& request) const;
			ModifyElasticBandWidthOutcome modifyElasticBandWidth(const Model::ModifyElasticBandWidthRequest &request)const;
			void modifyElasticBandWidthAsync(const Model::ModifyElasticBandWidthRequest& request, const ModifyElasticBandWidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyElasticBandWidthOutcomeCallable modifyElasticBandWidthCallable(const Model::ModifyElasticBandWidthRequest& request) const;
			ModifyElasticBizBandWidthOutcome modifyElasticBizBandWidth(const Model::ModifyElasticBizBandWidthRequest &request)const;
			void modifyElasticBizBandWidthAsync(const Model::ModifyElasticBizBandWidthRequest& request, const ModifyElasticBizBandWidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyElasticBizBandWidthOutcomeCallable modifyElasticBizBandWidthCallable(const Model::ModifyElasticBizBandWidthRequest& request) const;
			ModifyElasticBizQpsOutcome modifyElasticBizQps(const Model::ModifyElasticBizQpsRequest &request)const;
			void modifyElasticBizQpsAsync(const Model::ModifyElasticBizQpsRequest& request, const ModifyElasticBizQpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyElasticBizQpsOutcomeCallable modifyElasticBizQpsCallable(const Model::ModifyElasticBizQpsRequest& request) const;
			ModifyFullLogTtlOutcome modifyFullLogTtl(const Model::ModifyFullLogTtlRequest &request)const;
			void modifyFullLogTtlAsync(const Model::ModifyFullLogTtlRequest& request, const ModifyFullLogTtlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFullLogTtlOutcomeCallable modifyFullLogTtlCallable(const Model::ModifyFullLogTtlRequest& request) const;
			ModifyHeadersOutcome modifyHeaders(const Model::ModifyHeadersRequest &request)const;
			void modifyHeadersAsync(const Model::ModifyHeadersRequest& request, const ModifyHeadersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyHeadersOutcomeCallable modifyHeadersCallable(const Model::ModifyHeadersRequest& request) const;
			ModifyHealthCheckConfigOutcome modifyHealthCheckConfig(const Model::ModifyHealthCheckConfigRequest &request)const;
			void modifyHealthCheckConfigAsync(const Model::ModifyHealthCheckConfigRequest& request, const ModifyHealthCheckConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyHealthCheckConfigOutcomeCallable modifyHealthCheckConfigCallable(const Model::ModifyHealthCheckConfigRequest& request) const;
			ModifyHttp2EnableOutcome modifyHttp2Enable(const Model::ModifyHttp2EnableRequest &request)const;
			void modifyHttp2EnableAsync(const Model::ModifyHttp2EnableRequest& request, const ModifyHttp2EnableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyHttp2EnableOutcomeCallable modifyHttp2EnableCallable(const Model::ModifyHttp2EnableRequest& request) const;
			ModifyInstanceRemarkOutcome modifyInstanceRemark(const Model::ModifyInstanceRemarkRequest &request)const;
			void modifyInstanceRemarkAsync(const Model::ModifyInstanceRemarkRequest& request, const ModifyInstanceRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceRemarkOutcomeCallable modifyInstanceRemarkCallable(const Model::ModifyInstanceRemarkRequest& request) const;
			ModifyNetworkRuleAttributeOutcome modifyNetworkRuleAttribute(const Model::ModifyNetworkRuleAttributeRequest &request)const;
			void modifyNetworkRuleAttributeAsync(const Model::ModifyNetworkRuleAttributeRequest& request, const ModifyNetworkRuleAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyNetworkRuleAttributeOutcomeCallable modifyNetworkRuleAttributeCallable(const Model::ModifyNetworkRuleAttributeRequest& request) const;
			ModifyOcspStatusOutcome modifyOcspStatus(const Model::ModifyOcspStatusRequest &request)const;
			void modifyOcspStatusAsync(const Model::ModifyOcspStatusRequest& request, const ModifyOcspStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyOcspStatusOutcomeCallable modifyOcspStatusCallable(const Model::ModifyOcspStatusRequest& request) const;
			ModifyPortOutcome modifyPort(const Model::ModifyPortRequest &request)const;
			void modifyPortAsync(const Model::ModifyPortRequest& request, const ModifyPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyPortOutcomeCallable modifyPortCallable(const Model::ModifyPortRequest& request) const;
			ModifyPortAutoCcStatusOutcome modifyPortAutoCcStatus(const Model::ModifyPortAutoCcStatusRequest &request)const;
			void modifyPortAutoCcStatusAsync(const Model::ModifyPortAutoCcStatusRequest& request, const ModifyPortAutoCcStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyPortAutoCcStatusOutcomeCallable modifyPortAutoCcStatusCallable(const Model::ModifyPortAutoCcStatusRequest& request) const;
			ModifyQpsModeOutcome modifyQpsMode(const Model::ModifyQpsModeRequest &request)const;
			void modifyQpsModeAsync(const Model::ModifyQpsModeRequest& request, const ModifyQpsModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyQpsModeOutcomeCallable modifyQpsModeCallable(const Model::ModifyQpsModeRequest& request) const;
			ModifySceneDefensePolicyOutcome modifySceneDefensePolicy(const Model::ModifySceneDefensePolicyRequest &request)const;
			void modifySceneDefensePolicyAsync(const Model::ModifySceneDefensePolicyRequest& request, const ModifySceneDefensePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySceneDefensePolicyOutcomeCallable modifySceneDefensePolicyCallable(const Model::ModifySceneDefensePolicyRequest& request) const;
			ModifySchedulerRuleOutcome modifySchedulerRule(const Model::ModifySchedulerRuleRequest &request)const;
			void modifySchedulerRuleAsync(const Model::ModifySchedulerRuleRequest& request, const ModifySchedulerRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifySchedulerRuleOutcomeCallable modifySchedulerRuleCallable(const Model::ModifySchedulerRuleRequest& request) const;
			ModifyTlsConfigOutcome modifyTlsConfig(const Model::ModifyTlsConfigRequest &request)const;
			void modifyTlsConfigAsync(const Model::ModifyTlsConfigRequest& request, const ModifyTlsConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyTlsConfigOutcomeCallable modifyTlsConfigCallable(const Model::ModifyTlsConfigRequest& request) const;
			ModifyWebAIProtectModeOutcome modifyWebAIProtectMode(const Model::ModifyWebAIProtectModeRequest &request)const;
			void modifyWebAIProtectModeAsync(const Model::ModifyWebAIProtectModeRequest& request, const ModifyWebAIProtectModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWebAIProtectModeOutcomeCallable modifyWebAIProtectModeCallable(const Model::ModifyWebAIProtectModeRequest& request) const;
			ModifyWebAIProtectSwitchOutcome modifyWebAIProtectSwitch(const Model::ModifyWebAIProtectSwitchRequest &request)const;
			void modifyWebAIProtectSwitchAsync(const Model::ModifyWebAIProtectSwitchRequest& request, const ModifyWebAIProtectSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWebAIProtectSwitchOutcomeCallable modifyWebAIProtectSwitchCallable(const Model::ModifyWebAIProtectSwitchRequest& request) const;
			ModifyWebAccessModeOutcome modifyWebAccessMode(const Model::ModifyWebAccessModeRequest &request)const;
			void modifyWebAccessModeAsync(const Model::ModifyWebAccessModeRequest& request, const ModifyWebAccessModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWebAccessModeOutcomeCallable modifyWebAccessModeCallable(const Model::ModifyWebAccessModeRequest& request) const;
			ModifyWebAreaBlockOutcome modifyWebAreaBlock(const Model::ModifyWebAreaBlockRequest &request)const;
			void modifyWebAreaBlockAsync(const Model::ModifyWebAreaBlockRequest& request, const ModifyWebAreaBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWebAreaBlockOutcomeCallable modifyWebAreaBlockCallable(const Model::ModifyWebAreaBlockRequest& request) const;
			ModifyWebAreaBlockSwitchOutcome modifyWebAreaBlockSwitch(const Model::ModifyWebAreaBlockSwitchRequest &request)const;
			void modifyWebAreaBlockSwitchAsync(const Model::ModifyWebAreaBlockSwitchRequest& request, const ModifyWebAreaBlockSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWebAreaBlockSwitchOutcomeCallable modifyWebAreaBlockSwitchCallable(const Model::ModifyWebAreaBlockSwitchRequest& request) const;
			ModifyWebCCRuleOutcome modifyWebCCRule(const Model::ModifyWebCCRuleRequest &request)const;
			void modifyWebCCRuleAsync(const Model::ModifyWebCCRuleRequest& request, const ModifyWebCCRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWebCCRuleOutcomeCallable modifyWebCCRuleCallable(const Model::ModifyWebCCRuleRequest& request) const;
			ModifyWebCacheCustomRuleOutcome modifyWebCacheCustomRule(const Model::ModifyWebCacheCustomRuleRequest &request)const;
			void modifyWebCacheCustomRuleAsync(const Model::ModifyWebCacheCustomRuleRequest& request, const ModifyWebCacheCustomRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWebCacheCustomRuleOutcomeCallable modifyWebCacheCustomRuleCallable(const Model::ModifyWebCacheCustomRuleRequest& request) const;
			ModifyWebCacheModeOutcome modifyWebCacheMode(const Model::ModifyWebCacheModeRequest &request)const;
			void modifyWebCacheModeAsync(const Model::ModifyWebCacheModeRequest& request, const ModifyWebCacheModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWebCacheModeOutcomeCallable modifyWebCacheModeCallable(const Model::ModifyWebCacheModeRequest& request) const;
			ModifyWebCacheSwitchOutcome modifyWebCacheSwitch(const Model::ModifyWebCacheSwitchRequest &request)const;
			void modifyWebCacheSwitchAsync(const Model::ModifyWebCacheSwitchRequest& request, const ModifyWebCacheSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWebCacheSwitchOutcomeCallable modifyWebCacheSwitchCallable(const Model::ModifyWebCacheSwitchRequest& request) const;
			ModifyWebIpSetSwitchOutcome modifyWebIpSetSwitch(const Model::ModifyWebIpSetSwitchRequest &request)const;
			void modifyWebIpSetSwitchAsync(const Model::ModifyWebIpSetSwitchRequest& request, const ModifyWebIpSetSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWebIpSetSwitchOutcomeCallable modifyWebIpSetSwitchCallable(const Model::ModifyWebIpSetSwitchRequest& request) const;
			ModifyWebPreciseAccessRuleOutcome modifyWebPreciseAccessRule(const Model::ModifyWebPreciseAccessRuleRequest &request)const;
			void modifyWebPreciseAccessRuleAsync(const Model::ModifyWebPreciseAccessRuleRequest& request, const ModifyWebPreciseAccessRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWebPreciseAccessRuleOutcomeCallable modifyWebPreciseAccessRuleCallable(const Model::ModifyWebPreciseAccessRuleRequest& request) const;
			ModifyWebPreciseAccessSwitchOutcome modifyWebPreciseAccessSwitch(const Model::ModifyWebPreciseAccessSwitchRequest &request)const;
			void modifyWebPreciseAccessSwitchAsync(const Model::ModifyWebPreciseAccessSwitchRequest& request, const ModifyWebPreciseAccessSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWebPreciseAccessSwitchOutcomeCallable modifyWebPreciseAccessSwitchCallable(const Model::ModifyWebPreciseAccessSwitchRequest& request) const;
			ModifyWebRuleOutcome modifyWebRule(const Model::ModifyWebRuleRequest &request)const;
			void modifyWebRuleAsync(const Model::ModifyWebRuleRequest& request, const ModifyWebRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyWebRuleOutcomeCallable modifyWebRuleCallable(const Model::ModifyWebRuleRequest& request) const;
			ReleaseInstanceOutcome releaseInstance(const Model::ReleaseInstanceRequest &request)const;
			void releaseInstanceAsync(const Model::ReleaseInstanceRequest& request, const ReleaseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseInstanceOutcomeCallable releaseInstanceCallable(const Model::ReleaseInstanceRequest& request) const;
			SwitchSchedulerRuleOutcome switchSchedulerRule(const Model::SwitchSchedulerRuleRequest &request)const;
			void switchSchedulerRuleAsync(const Model::SwitchSchedulerRuleRequest& request, const SwitchSchedulerRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SwitchSchedulerRuleOutcomeCallable switchSchedulerRuleCallable(const Model::SwitchSchedulerRuleRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DDOSCOO_DDOSCOOCLIENT_H_
