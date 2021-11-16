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
#include "model/AddLayer7CCRuleRequest.h"
#include "model/AddLayer7CCRuleResult.h"
#include "model/CloseDomainSlsConfigRequest.h"
#include "model/CloseDomainSlsConfigResult.h"
#include "model/ConfigHealthCheckRequest.h"
#include "model/ConfigHealthCheckResult.h"
#include "model/ConfigLayer4RuleRequest.h"
#include "model/ConfigLayer4RuleResult.h"
#include "model/ConfigLayer4RuleAttributeRequest.h"
#include "model/ConfigLayer4RuleAttributeResult.h"
#include "model/ConfigLayer7BlackWhiteListRequest.h"
#include "model/ConfigLayer7BlackWhiteListResult.h"
#include "model/ConfigLayer7CCRuleRequest.h"
#include "model/ConfigLayer7CCRuleResult.h"
#include "model/ConfigLayer7CCTemplateRequest.h"
#include "model/ConfigLayer7CCTemplateResult.h"
#include "model/ConfigLayer7CertRequest.h"
#include "model/ConfigLayer7CertResult.h"
#include "model/ConfigLayer7RuleRequest.h"
#include "model/ConfigLayer7RuleResult.h"
#include "model/CreateAsyncTaskRequest.h"
#include "model/CreateAsyncTaskResult.h"
#include "model/CreateLayer4RuleRequest.h"
#include "model/CreateLayer4RuleResult.h"
#include "model/CreateLayer7RuleRequest.h"
#include "model/CreateLayer7RuleResult.h"
#include "model/DeleteAsyncTaskRequest.h"
#include "model/DeleteAsyncTaskResult.h"
#include "model/DeleteLayer4RuleRequest.h"
#include "model/DeleteLayer4RuleResult.h"
#include "model/DeleteLayer7CCRuleRequest.h"
#include "model/DeleteLayer7CCRuleResult.h"
#include "model/DeleteLayer7RuleRequest.h"
#include "model/DeleteLayer7RuleResult.h"
#include "model/DescribeBackSourceCidrRequest.h"
#include "model/DescribeBackSourceCidrResult.h"
#include "model/DescribeBatchSlsDispatchStatusRequest.h"
#include "model/DescribeBatchSlsDispatchStatusResult.h"
#include "model/DescribeDDoSEventsRequest.h"
#include "model/DescribeDDoSEventsResult.h"
#include "model/DescribeDDoSTrafficRequest.h"
#include "model/DescribeDDoSTrafficResult.h"
#include "model/DescribeDefenseCountStatisticsRequest.h"
#include "model/DescribeDefenseCountStatisticsResult.h"
#include "model/DescribeDomainAccessModeRequest.h"
#include "model/DescribeDomainAccessModeResult.h"
#include "model/DescribeDomainAttackEventsRequest.h"
#include "model/DescribeDomainAttackEventsResult.h"
#include "model/DescribeDomainQpsRequest.h"
#include "model/DescribeDomainQpsResult.h"
#include "model/DescribeDomainQpsWithCacheRequest.h"
#include "model/DescribeDomainQpsWithCacheResult.h"
#include "model/DescribeDomainSlsStatusRequest.h"
#include "model/DescribeDomainSlsStatusResult.h"
#include "model/DescribeDomainsRequest.h"
#include "model/DescribeDomainsResult.h"
#include "model/DescribeElasticBandwidthSpecRequest.h"
#include "model/DescribeElasticBandwidthSpecResult.h"
#include "model/DescribeHealthCheckListRequest.h"
#include "model/DescribeHealthCheckListResult.h"
#include "model/DescribeHealthCheckStatusListRequest.h"
#include "model/DescribeHealthCheckStatusListResult.h"
#include "model/DescribeInstanceDetailsRequest.h"
#include "model/DescribeInstanceDetailsResult.h"
#include "model/DescribeInstanceSpecsRequest.h"
#include "model/DescribeInstanceSpecsResult.h"
#include "model/DescribeInstanceStatisticsRequest.h"
#include "model/DescribeInstanceStatisticsResult.h"
#include "model/DescribeInstancesRequest.h"
#include "model/DescribeInstancesResult.h"
#include "model/DescribeIpTrafficRequest.h"
#include "model/DescribeIpTrafficResult.h"
#include "model/DescribeLayer4RuleAttributesRequest.h"
#include "model/DescribeLayer4RuleAttributesResult.h"
#include "model/DescribeLayer4RulesRequest.h"
#include "model/DescribeLayer4RulesResult.h"
#include "model/DescribeLayer7CCRulesRequest.h"
#include "model/DescribeLayer7CCRulesResult.h"
#include "model/DescribeLogStoreExistStatusRequest.h"
#include "model/DescribeLogStoreExistStatusResult.h"
#include "model/DescribeOpEntitiesRequest.h"
#include "model/DescribeOpEntitiesResult.h"
#include "model/DescribeSimpleDomainsRequest.h"
#include "model/DescribeSimpleDomainsResult.h"
#include "model/DescribeSlsAuthStatusRequest.h"
#include "model/DescribeSlsAuthStatusResult.h"
#include "model/DescribeSlsEmptyCountRequest.h"
#include "model/DescribeSlsEmptyCountResult.h"
#include "model/DescribeSlsLogstoreInfoRequest.h"
#include "model/DescribeSlsLogstoreInfoResult.h"
#include "model/DescribeSlsOpenStatusRequest.h"
#include "model/DescribeSlsOpenStatusResult.h"
#include "model/DescribleCertListRequest.h"
#include "model/DescribleCertListResult.h"
#include "model/DescribleLayer7InstanceRelationsRequest.h"
#include "model/DescribleLayer7InstanceRelationsResult.h"
#include "model/DisableLayer7CCRequest.h"
#include "model/DisableLayer7CCResult.h"
#include "model/DisableLayer7CCRuleRequest.h"
#include "model/DisableLayer7CCRuleResult.h"
#include "model/EmptySlsLogstoreRequest.h"
#include "model/EmptySlsLogstoreResult.h"
#include "model/EnableLayer7CCRequest.h"
#include "model/EnableLayer7CCResult.h"
#include "model/EnableLayer7CCRuleRequest.h"
#include "model/EnableLayer7CCRuleResult.h"
#include "model/ListAsyncTaskRequest.h"
#include "model/ListAsyncTaskResult.h"
#include "model/ListLayer7CustomPortsRequest.h"
#include "model/ListLayer7CustomPortsResult.h"
#include "model/ListTagKeysRequest.h"
#include "model/ListTagKeysResult.h"
#include "model/ListTagResourcesRequest.h"
#include "model/ListTagResourcesResult.h"
#include "model/ListValueAddedRequest.h"
#include "model/ListValueAddedResult.h"
#include "model/ModifyElasticBandWidthRequest.h"
#include "model/ModifyElasticBandWidthResult.h"
#include "model/ModifyFullLogTtlRequest.h"
#include "model/ModifyFullLogTtlResult.h"
#include "model/ModifyInstanceRemarkRequest.h"
#include "model/ModifyInstanceRemarkResult.h"
#include "model/OpenDomainSlsConfigRequest.h"
#include "model/OpenDomainSlsConfigResult.h"
#include "model/ReleaseInstanceRequest.h"
#include "model/ReleaseInstanceResult.h"
#include "model/ReleaseValueAddedRequest.h"
#include "model/ReleaseValueAddedResult.h"
#include "model/TagResourcesRequest.h"
#include "model/TagResourcesResult.h"
#include "model/UntagResourcesRequest.h"
#include "model/UntagResourcesResult.h"


namespace AlibabaCloud
{
	namespace Ddoscoo
	{
		class ALIBABACLOUD_DDOSCOO_EXPORT DdoscooClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::AddLayer7CCRuleResult> AddLayer7CCRuleOutcome;
			typedef std::future<AddLayer7CCRuleOutcome> AddLayer7CCRuleOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::AddLayer7CCRuleRequest&, const AddLayer7CCRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddLayer7CCRuleAsyncHandler;
			typedef Outcome<Error, Model::CloseDomainSlsConfigResult> CloseDomainSlsConfigOutcome;
			typedef std::future<CloseDomainSlsConfigOutcome> CloseDomainSlsConfigOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::CloseDomainSlsConfigRequest&, const CloseDomainSlsConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CloseDomainSlsConfigAsyncHandler;
			typedef Outcome<Error, Model::ConfigHealthCheckResult> ConfigHealthCheckOutcome;
			typedef std::future<ConfigHealthCheckOutcome> ConfigHealthCheckOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ConfigHealthCheckRequest&, const ConfigHealthCheckOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigHealthCheckAsyncHandler;
			typedef Outcome<Error, Model::ConfigLayer4RuleResult> ConfigLayer4RuleOutcome;
			typedef std::future<ConfigLayer4RuleOutcome> ConfigLayer4RuleOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ConfigLayer4RuleRequest&, const ConfigLayer4RuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigLayer4RuleAsyncHandler;
			typedef Outcome<Error, Model::ConfigLayer4RuleAttributeResult> ConfigLayer4RuleAttributeOutcome;
			typedef std::future<ConfigLayer4RuleAttributeOutcome> ConfigLayer4RuleAttributeOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ConfigLayer4RuleAttributeRequest&, const ConfigLayer4RuleAttributeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigLayer4RuleAttributeAsyncHandler;
			typedef Outcome<Error, Model::ConfigLayer7BlackWhiteListResult> ConfigLayer7BlackWhiteListOutcome;
			typedef std::future<ConfigLayer7BlackWhiteListOutcome> ConfigLayer7BlackWhiteListOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ConfigLayer7BlackWhiteListRequest&, const ConfigLayer7BlackWhiteListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigLayer7BlackWhiteListAsyncHandler;
			typedef Outcome<Error, Model::ConfigLayer7CCRuleResult> ConfigLayer7CCRuleOutcome;
			typedef std::future<ConfigLayer7CCRuleOutcome> ConfigLayer7CCRuleOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ConfigLayer7CCRuleRequest&, const ConfigLayer7CCRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigLayer7CCRuleAsyncHandler;
			typedef Outcome<Error, Model::ConfigLayer7CCTemplateResult> ConfigLayer7CCTemplateOutcome;
			typedef std::future<ConfigLayer7CCTemplateOutcome> ConfigLayer7CCTemplateOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ConfigLayer7CCTemplateRequest&, const ConfigLayer7CCTemplateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigLayer7CCTemplateAsyncHandler;
			typedef Outcome<Error, Model::ConfigLayer7CertResult> ConfigLayer7CertOutcome;
			typedef std::future<ConfigLayer7CertOutcome> ConfigLayer7CertOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ConfigLayer7CertRequest&, const ConfigLayer7CertOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigLayer7CertAsyncHandler;
			typedef Outcome<Error, Model::ConfigLayer7RuleResult> ConfigLayer7RuleOutcome;
			typedef std::future<ConfigLayer7RuleOutcome> ConfigLayer7RuleOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ConfigLayer7RuleRequest&, const ConfigLayer7RuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ConfigLayer7RuleAsyncHandler;
			typedef Outcome<Error, Model::CreateAsyncTaskResult> CreateAsyncTaskOutcome;
			typedef std::future<CreateAsyncTaskOutcome> CreateAsyncTaskOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::CreateAsyncTaskRequest&, const CreateAsyncTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAsyncTaskAsyncHandler;
			typedef Outcome<Error, Model::CreateLayer4RuleResult> CreateLayer4RuleOutcome;
			typedef std::future<CreateLayer4RuleOutcome> CreateLayer4RuleOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::CreateLayer4RuleRequest&, const CreateLayer4RuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLayer4RuleAsyncHandler;
			typedef Outcome<Error, Model::CreateLayer7RuleResult> CreateLayer7RuleOutcome;
			typedef std::future<CreateLayer7RuleOutcome> CreateLayer7RuleOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::CreateLayer7RuleRequest&, const CreateLayer7RuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateLayer7RuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteAsyncTaskResult> DeleteAsyncTaskOutcome;
			typedef std::future<DeleteAsyncTaskOutcome> DeleteAsyncTaskOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DeleteAsyncTaskRequest&, const DeleteAsyncTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAsyncTaskAsyncHandler;
			typedef Outcome<Error, Model::DeleteLayer4RuleResult> DeleteLayer4RuleOutcome;
			typedef std::future<DeleteLayer4RuleOutcome> DeleteLayer4RuleOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DeleteLayer4RuleRequest&, const DeleteLayer4RuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLayer4RuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteLayer7CCRuleResult> DeleteLayer7CCRuleOutcome;
			typedef std::future<DeleteLayer7CCRuleOutcome> DeleteLayer7CCRuleOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DeleteLayer7CCRuleRequest&, const DeleteLayer7CCRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLayer7CCRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteLayer7RuleResult> DeleteLayer7RuleOutcome;
			typedef std::future<DeleteLayer7RuleOutcome> DeleteLayer7RuleOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DeleteLayer7RuleRequest&, const DeleteLayer7RuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLayer7RuleAsyncHandler;
			typedef Outcome<Error, Model::DescribeBackSourceCidrResult> DescribeBackSourceCidrOutcome;
			typedef std::future<DescribeBackSourceCidrOutcome> DescribeBackSourceCidrOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeBackSourceCidrRequest&, const DescribeBackSourceCidrOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackSourceCidrAsyncHandler;
			typedef Outcome<Error, Model::DescribeBatchSlsDispatchStatusResult> DescribeBatchSlsDispatchStatusOutcome;
			typedef std::future<DescribeBatchSlsDispatchStatusOutcome> DescribeBatchSlsDispatchStatusOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeBatchSlsDispatchStatusRequest&, const DescribeBatchSlsDispatchStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBatchSlsDispatchStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeDDoSEventsResult> DescribeDDoSEventsOutcome;
			typedef std::future<DescribeDDoSEventsOutcome> DescribeDDoSEventsOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeDDoSEventsRequest&, const DescribeDDoSEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSEventsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDDoSTrafficResult> DescribeDDoSTrafficOutcome;
			typedef std::future<DescribeDDoSTrafficOutcome> DescribeDDoSTrafficOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeDDoSTrafficRequest&, const DescribeDDoSTrafficOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSTrafficAsyncHandler;
			typedef Outcome<Error, Model::DescribeDefenseCountStatisticsResult> DescribeDefenseCountStatisticsOutcome;
			typedef std::future<DescribeDefenseCountStatisticsOutcome> DescribeDefenseCountStatisticsOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeDefenseCountStatisticsRequest&, const DescribeDefenseCountStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDefenseCountStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainAccessModeResult> DescribeDomainAccessModeOutcome;
			typedef std::future<DescribeDomainAccessModeOutcome> DescribeDomainAccessModeOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeDomainAccessModeRequest&, const DescribeDomainAccessModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainAccessModeAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainAttackEventsResult> DescribeDomainAttackEventsOutcome;
			typedef std::future<DescribeDomainAttackEventsOutcome> DescribeDomainAttackEventsOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeDomainAttackEventsRequest&, const DescribeDomainAttackEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainAttackEventsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainQpsResult> DescribeDomainQpsOutcome;
			typedef std::future<DescribeDomainQpsOutcome> DescribeDomainQpsOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeDomainQpsRequest&, const DescribeDomainQpsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainQpsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainQpsWithCacheResult> DescribeDomainQpsWithCacheOutcome;
			typedef std::future<DescribeDomainQpsWithCacheOutcome> DescribeDomainQpsWithCacheOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeDomainQpsWithCacheRequest&, const DescribeDomainQpsWithCacheOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainQpsWithCacheAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainSlsStatusResult> DescribeDomainSlsStatusOutcome;
			typedef std::future<DescribeDomainSlsStatusOutcome> DescribeDomainSlsStatusOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeDomainSlsStatusRequest&, const DescribeDomainSlsStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainSlsStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainsResult> DescribeDomainsOutcome;
			typedef std::future<DescribeDomainsOutcome> DescribeDomainsOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeDomainsRequest&, const DescribeDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainsAsyncHandler;
			typedef Outcome<Error, Model::DescribeElasticBandwidthSpecResult> DescribeElasticBandwidthSpecOutcome;
			typedef std::future<DescribeElasticBandwidthSpecOutcome> DescribeElasticBandwidthSpecOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeElasticBandwidthSpecRequest&, const DescribeElasticBandwidthSpecOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeElasticBandwidthSpecAsyncHandler;
			typedef Outcome<Error, Model::DescribeHealthCheckListResult> DescribeHealthCheckListOutcome;
			typedef std::future<DescribeHealthCheckListOutcome> DescribeHealthCheckListOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeHealthCheckListRequest&, const DescribeHealthCheckListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHealthCheckListAsyncHandler;
			typedef Outcome<Error, Model::DescribeHealthCheckStatusListResult> DescribeHealthCheckStatusListOutcome;
			typedef std::future<DescribeHealthCheckStatusListOutcome> DescribeHealthCheckStatusListOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeHealthCheckStatusListRequest&, const DescribeHealthCheckStatusListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHealthCheckStatusListAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceDetailsResult> DescribeInstanceDetailsOutcome;
			typedef std::future<DescribeInstanceDetailsOutcome> DescribeInstanceDetailsOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeInstanceDetailsRequest&, const DescribeInstanceDetailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceDetailsAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceSpecsResult> DescribeInstanceSpecsOutcome;
			typedef std::future<DescribeInstanceSpecsOutcome> DescribeInstanceSpecsOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeInstanceSpecsRequest&, const DescribeInstanceSpecsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceSpecsAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceStatisticsResult> DescribeInstanceStatisticsOutcome;
			typedef std::future<DescribeInstanceStatisticsOutcome> DescribeInstanceStatisticsOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeInstanceStatisticsRequest&, const DescribeInstanceStatisticsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceStatisticsAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstancesResult> DescribeInstancesOutcome;
			typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeInstancesRequest&, const DescribeInstancesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
			typedef Outcome<Error, Model::DescribeIpTrafficResult> DescribeIpTrafficOutcome;
			typedef std::future<DescribeIpTrafficOutcome> DescribeIpTrafficOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeIpTrafficRequest&, const DescribeIpTrafficOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIpTrafficAsyncHandler;
			typedef Outcome<Error, Model::DescribeLayer4RuleAttributesResult> DescribeLayer4RuleAttributesOutcome;
			typedef std::future<DescribeLayer4RuleAttributesOutcome> DescribeLayer4RuleAttributesOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeLayer4RuleAttributesRequest&, const DescribeLayer4RuleAttributesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLayer4RuleAttributesAsyncHandler;
			typedef Outcome<Error, Model::DescribeLayer4RulesResult> DescribeLayer4RulesOutcome;
			typedef std::future<DescribeLayer4RulesOutcome> DescribeLayer4RulesOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeLayer4RulesRequest&, const DescribeLayer4RulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLayer4RulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeLayer7CCRulesResult> DescribeLayer7CCRulesOutcome;
			typedef std::future<DescribeLayer7CCRulesOutcome> DescribeLayer7CCRulesOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeLayer7CCRulesRequest&, const DescribeLayer7CCRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLayer7CCRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeLogStoreExistStatusResult> DescribeLogStoreExistStatusOutcome;
			typedef std::future<DescribeLogStoreExistStatusOutcome> DescribeLogStoreExistStatusOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeLogStoreExistStatusRequest&, const DescribeLogStoreExistStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogStoreExistStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeOpEntitiesResult> DescribeOpEntitiesOutcome;
			typedef std::future<DescribeOpEntitiesOutcome> DescribeOpEntitiesOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeOpEntitiesRequest&, const DescribeOpEntitiesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOpEntitiesAsyncHandler;
			typedef Outcome<Error, Model::DescribeSimpleDomainsResult> DescribeSimpleDomainsOutcome;
			typedef std::future<DescribeSimpleDomainsOutcome> DescribeSimpleDomainsOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeSimpleDomainsRequest&, const DescribeSimpleDomainsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSimpleDomainsAsyncHandler;
			typedef Outcome<Error, Model::DescribeSlsAuthStatusResult> DescribeSlsAuthStatusOutcome;
			typedef std::future<DescribeSlsAuthStatusOutcome> DescribeSlsAuthStatusOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeSlsAuthStatusRequest&, const DescribeSlsAuthStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlsAuthStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeSlsEmptyCountResult> DescribeSlsEmptyCountOutcome;
			typedef std::future<DescribeSlsEmptyCountOutcome> DescribeSlsEmptyCountOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeSlsEmptyCountRequest&, const DescribeSlsEmptyCountOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlsEmptyCountAsyncHandler;
			typedef Outcome<Error, Model::DescribeSlsLogstoreInfoResult> DescribeSlsLogstoreInfoOutcome;
			typedef std::future<DescribeSlsLogstoreInfoOutcome> DescribeSlsLogstoreInfoOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeSlsLogstoreInfoRequest&, const DescribeSlsLogstoreInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlsLogstoreInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeSlsOpenStatusResult> DescribeSlsOpenStatusOutcome;
			typedef std::future<DescribeSlsOpenStatusOutcome> DescribeSlsOpenStatusOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribeSlsOpenStatusRequest&, const DescribeSlsOpenStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSlsOpenStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribleCertListResult> DescribleCertListOutcome;
			typedef std::future<DescribleCertListOutcome> DescribleCertListOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribleCertListRequest&, const DescribleCertListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribleCertListAsyncHandler;
			typedef Outcome<Error, Model::DescribleLayer7InstanceRelationsResult> DescribleLayer7InstanceRelationsOutcome;
			typedef std::future<DescribleLayer7InstanceRelationsOutcome> DescribleLayer7InstanceRelationsOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DescribleLayer7InstanceRelationsRequest&, const DescribleLayer7InstanceRelationsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribleLayer7InstanceRelationsAsyncHandler;
			typedef Outcome<Error, Model::DisableLayer7CCResult> DisableLayer7CCOutcome;
			typedef std::future<DisableLayer7CCOutcome> DisableLayer7CCOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DisableLayer7CCRequest&, const DisableLayer7CCOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableLayer7CCAsyncHandler;
			typedef Outcome<Error, Model::DisableLayer7CCRuleResult> DisableLayer7CCRuleOutcome;
			typedef std::future<DisableLayer7CCRuleOutcome> DisableLayer7CCRuleOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::DisableLayer7CCRuleRequest&, const DisableLayer7CCRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableLayer7CCRuleAsyncHandler;
			typedef Outcome<Error, Model::EmptySlsLogstoreResult> EmptySlsLogstoreOutcome;
			typedef std::future<EmptySlsLogstoreOutcome> EmptySlsLogstoreOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::EmptySlsLogstoreRequest&, const EmptySlsLogstoreOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EmptySlsLogstoreAsyncHandler;
			typedef Outcome<Error, Model::EnableLayer7CCResult> EnableLayer7CCOutcome;
			typedef std::future<EnableLayer7CCOutcome> EnableLayer7CCOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::EnableLayer7CCRequest&, const EnableLayer7CCOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableLayer7CCAsyncHandler;
			typedef Outcome<Error, Model::EnableLayer7CCRuleResult> EnableLayer7CCRuleOutcome;
			typedef std::future<EnableLayer7CCRuleOutcome> EnableLayer7CCRuleOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::EnableLayer7CCRuleRequest&, const EnableLayer7CCRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableLayer7CCRuleAsyncHandler;
			typedef Outcome<Error, Model::ListAsyncTaskResult> ListAsyncTaskOutcome;
			typedef std::future<ListAsyncTaskOutcome> ListAsyncTaskOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ListAsyncTaskRequest&, const ListAsyncTaskOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListAsyncTaskAsyncHandler;
			typedef Outcome<Error, Model::ListLayer7CustomPortsResult> ListLayer7CustomPortsOutcome;
			typedef std::future<ListLayer7CustomPortsOutcome> ListLayer7CustomPortsOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ListLayer7CustomPortsRequest&, const ListLayer7CustomPortsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListLayer7CustomPortsAsyncHandler;
			typedef Outcome<Error, Model::ListTagKeysResult> ListTagKeysOutcome;
			typedef std::future<ListTagKeysOutcome> ListTagKeysOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ListTagKeysRequest&, const ListTagKeysOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagKeysAsyncHandler;
			typedef Outcome<Error, Model::ListTagResourcesResult> ListTagResourcesOutcome;
			typedef std::future<ListTagResourcesOutcome> ListTagResourcesOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ListTagResourcesRequest&, const ListTagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListTagResourcesAsyncHandler;
			typedef Outcome<Error, Model::ListValueAddedResult> ListValueAddedOutcome;
			typedef std::future<ListValueAddedOutcome> ListValueAddedOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ListValueAddedRequest&, const ListValueAddedOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListValueAddedAsyncHandler;
			typedef Outcome<Error, Model::ModifyElasticBandWidthResult> ModifyElasticBandWidthOutcome;
			typedef std::future<ModifyElasticBandWidthOutcome> ModifyElasticBandWidthOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifyElasticBandWidthRequest&, const ModifyElasticBandWidthOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyElasticBandWidthAsyncHandler;
			typedef Outcome<Error, Model::ModifyFullLogTtlResult> ModifyFullLogTtlOutcome;
			typedef std::future<ModifyFullLogTtlOutcome> ModifyFullLogTtlOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifyFullLogTtlRequest&, const ModifyFullLogTtlOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFullLogTtlAsyncHandler;
			typedef Outcome<Error, Model::ModifyInstanceRemarkResult> ModifyInstanceRemarkOutcome;
			typedef std::future<ModifyInstanceRemarkOutcome> ModifyInstanceRemarkOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ModifyInstanceRemarkRequest&, const ModifyInstanceRemarkOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceRemarkAsyncHandler;
			typedef Outcome<Error, Model::OpenDomainSlsConfigResult> OpenDomainSlsConfigOutcome;
			typedef std::future<OpenDomainSlsConfigOutcome> OpenDomainSlsConfigOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::OpenDomainSlsConfigRequest&, const OpenDomainSlsConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> OpenDomainSlsConfigAsyncHandler;
			typedef Outcome<Error, Model::ReleaseInstanceResult> ReleaseInstanceOutcome;
			typedef std::future<ReleaseInstanceOutcome> ReleaseInstanceOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ReleaseInstanceRequest&, const ReleaseInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseInstanceAsyncHandler;
			typedef Outcome<Error, Model::ReleaseValueAddedResult> ReleaseValueAddedOutcome;
			typedef std::future<ReleaseValueAddedOutcome> ReleaseValueAddedOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::ReleaseValueAddedRequest&, const ReleaseValueAddedOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseValueAddedAsyncHandler;
			typedef Outcome<Error, Model::TagResourcesResult> TagResourcesOutcome;
			typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::TagResourcesRequest&, const TagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
			typedef Outcome<Error, Model::UntagResourcesResult> UntagResourcesOutcome;
			typedef std::future<UntagResourcesOutcome> UntagResourcesOutcomeCallable;
			typedef std::function<void(const DdoscooClient*, const Model::UntagResourcesRequest&, const UntagResourcesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UntagResourcesAsyncHandler;

			DdoscooClient(const Credentials &credentials, const ClientConfiguration &configuration);
			DdoscooClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			DdoscooClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~DdoscooClient();
			AddLayer7CCRuleOutcome addLayer7CCRule(const Model::AddLayer7CCRuleRequest &request)const;
			void addLayer7CCRuleAsync(const Model::AddLayer7CCRuleRequest& request, const AddLayer7CCRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddLayer7CCRuleOutcomeCallable addLayer7CCRuleCallable(const Model::AddLayer7CCRuleRequest& request) const;
			CloseDomainSlsConfigOutcome closeDomainSlsConfig(const Model::CloseDomainSlsConfigRequest &request)const;
			void closeDomainSlsConfigAsync(const Model::CloseDomainSlsConfigRequest& request, const CloseDomainSlsConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CloseDomainSlsConfigOutcomeCallable closeDomainSlsConfigCallable(const Model::CloseDomainSlsConfigRequest& request) const;
			ConfigHealthCheckOutcome configHealthCheck(const Model::ConfigHealthCheckRequest &request)const;
			void configHealthCheckAsync(const Model::ConfigHealthCheckRequest& request, const ConfigHealthCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigHealthCheckOutcomeCallable configHealthCheckCallable(const Model::ConfigHealthCheckRequest& request) const;
			ConfigLayer4RuleOutcome configLayer4Rule(const Model::ConfigLayer4RuleRequest &request)const;
			void configLayer4RuleAsync(const Model::ConfigLayer4RuleRequest& request, const ConfigLayer4RuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigLayer4RuleOutcomeCallable configLayer4RuleCallable(const Model::ConfigLayer4RuleRequest& request) const;
			ConfigLayer4RuleAttributeOutcome configLayer4RuleAttribute(const Model::ConfigLayer4RuleAttributeRequest &request)const;
			void configLayer4RuleAttributeAsync(const Model::ConfigLayer4RuleAttributeRequest& request, const ConfigLayer4RuleAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigLayer4RuleAttributeOutcomeCallable configLayer4RuleAttributeCallable(const Model::ConfigLayer4RuleAttributeRequest& request) const;
			ConfigLayer7BlackWhiteListOutcome configLayer7BlackWhiteList(const Model::ConfigLayer7BlackWhiteListRequest &request)const;
			void configLayer7BlackWhiteListAsync(const Model::ConfigLayer7BlackWhiteListRequest& request, const ConfigLayer7BlackWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigLayer7BlackWhiteListOutcomeCallable configLayer7BlackWhiteListCallable(const Model::ConfigLayer7BlackWhiteListRequest& request) const;
			ConfigLayer7CCRuleOutcome configLayer7CCRule(const Model::ConfigLayer7CCRuleRequest &request)const;
			void configLayer7CCRuleAsync(const Model::ConfigLayer7CCRuleRequest& request, const ConfigLayer7CCRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigLayer7CCRuleOutcomeCallable configLayer7CCRuleCallable(const Model::ConfigLayer7CCRuleRequest& request) const;
			ConfigLayer7CCTemplateOutcome configLayer7CCTemplate(const Model::ConfigLayer7CCTemplateRequest &request)const;
			void configLayer7CCTemplateAsync(const Model::ConfigLayer7CCTemplateRequest& request, const ConfigLayer7CCTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigLayer7CCTemplateOutcomeCallable configLayer7CCTemplateCallable(const Model::ConfigLayer7CCTemplateRequest& request) const;
			ConfigLayer7CertOutcome configLayer7Cert(const Model::ConfigLayer7CertRequest &request)const;
			void configLayer7CertAsync(const Model::ConfigLayer7CertRequest& request, const ConfigLayer7CertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigLayer7CertOutcomeCallable configLayer7CertCallable(const Model::ConfigLayer7CertRequest& request) const;
			ConfigLayer7RuleOutcome configLayer7Rule(const Model::ConfigLayer7RuleRequest &request)const;
			void configLayer7RuleAsync(const Model::ConfigLayer7RuleRequest& request, const ConfigLayer7RuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ConfigLayer7RuleOutcomeCallable configLayer7RuleCallable(const Model::ConfigLayer7RuleRequest& request) const;
			CreateAsyncTaskOutcome createAsyncTask(const Model::CreateAsyncTaskRequest &request)const;
			void createAsyncTaskAsync(const Model::CreateAsyncTaskRequest& request, const CreateAsyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAsyncTaskOutcomeCallable createAsyncTaskCallable(const Model::CreateAsyncTaskRequest& request) const;
			CreateLayer4RuleOutcome createLayer4Rule(const Model::CreateLayer4RuleRequest &request)const;
			void createLayer4RuleAsync(const Model::CreateLayer4RuleRequest& request, const CreateLayer4RuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLayer4RuleOutcomeCallable createLayer4RuleCallable(const Model::CreateLayer4RuleRequest& request) const;
			CreateLayer7RuleOutcome createLayer7Rule(const Model::CreateLayer7RuleRequest &request)const;
			void createLayer7RuleAsync(const Model::CreateLayer7RuleRequest& request, const CreateLayer7RuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateLayer7RuleOutcomeCallable createLayer7RuleCallable(const Model::CreateLayer7RuleRequest& request) const;
			DeleteAsyncTaskOutcome deleteAsyncTask(const Model::DeleteAsyncTaskRequest &request)const;
			void deleteAsyncTaskAsync(const Model::DeleteAsyncTaskRequest& request, const DeleteAsyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteAsyncTaskOutcomeCallable deleteAsyncTaskCallable(const Model::DeleteAsyncTaskRequest& request) const;
			DeleteLayer4RuleOutcome deleteLayer4Rule(const Model::DeleteLayer4RuleRequest &request)const;
			void deleteLayer4RuleAsync(const Model::DeleteLayer4RuleRequest& request, const DeleteLayer4RuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLayer4RuleOutcomeCallable deleteLayer4RuleCallable(const Model::DeleteLayer4RuleRequest& request) const;
			DeleteLayer7CCRuleOutcome deleteLayer7CCRule(const Model::DeleteLayer7CCRuleRequest &request)const;
			void deleteLayer7CCRuleAsync(const Model::DeleteLayer7CCRuleRequest& request, const DeleteLayer7CCRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLayer7CCRuleOutcomeCallable deleteLayer7CCRuleCallable(const Model::DeleteLayer7CCRuleRequest& request) const;
			DeleteLayer7RuleOutcome deleteLayer7Rule(const Model::DeleteLayer7RuleRequest &request)const;
			void deleteLayer7RuleAsync(const Model::DeleteLayer7RuleRequest& request, const DeleteLayer7RuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteLayer7RuleOutcomeCallable deleteLayer7RuleCallable(const Model::DeleteLayer7RuleRequest& request) const;
			DescribeBackSourceCidrOutcome describeBackSourceCidr(const Model::DescribeBackSourceCidrRequest &request)const;
			void describeBackSourceCidrAsync(const Model::DescribeBackSourceCidrRequest& request, const DescribeBackSourceCidrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBackSourceCidrOutcomeCallable describeBackSourceCidrCallable(const Model::DescribeBackSourceCidrRequest& request) const;
			DescribeBatchSlsDispatchStatusOutcome describeBatchSlsDispatchStatus(const Model::DescribeBatchSlsDispatchStatusRequest &request)const;
			void describeBatchSlsDispatchStatusAsync(const Model::DescribeBatchSlsDispatchStatusRequest& request, const DescribeBatchSlsDispatchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeBatchSlsDispatchStatusOutcomeCallable describeBatchSlsDispatchStatusCallable(const Model::DescribeBatchSlsDispatchStatusRequest& request) const;
			DescribeDDoSEventsOutcome describeDDoSEvents(const Model::DescribeDDoSEventsRequest &request)const;
			void describeDDoSEventsAsync(const Model::DescribeDDoSEventsRequest& request, const DescribeDDoSEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDDoSEventsOutcomeCallable describeDDoSEventsCallable(const Model::DescribeDDoSEventsRequest& request) const;
			DescribeDDoSTrafficOutcome describeDDoSTraffic(const Model::DescribeDDoSTrafficRequest &request)const;
			void describeDDoSTrafficAsync(const Model::DescribeDDoSTrafficRequest& request, const DescribeDDoSTrafficAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDDoSTrafficOutcomeCallable describeDDoSTrafficCallable(const Model::DescribeDDoSTrafficRequest& request) const;
			DescribeDefenseCountStatisticsOutcome describeDefenseCountStatistics(const Model::DescribeDefenseCountStatisticsRequest &request)const;
			void describeDefenseCountStatisticsAsync(const Model::DescribeDefenseCountStatisticsRequest& request, const DescribeDefenseCountStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDefenseCountStatisticsOutcomeCallable describeDefenseCountStatisticsCallable(const Model::DescribeDefenseCountStatisticsRequest& request) const;
			DescribeDomainAccessModeOutcome describeDomainAccessMode(const Model::DescribeDomainAccessModeRequest &request)const;
			void describeDomainAccessModeAsync(const Model::DescribeDomainAccessModeRequest& request, const DescribeDomainAccessModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainAccessModeOutcomeCallable describeDomainAccessModeCallable(const Model::DescribeDomainAccessModeRequest& request) const;
			DescribeDomainAttackEventsOutcome describeDomainAttackEvents(const Model::DescribeDomainAttackEventsRequest &request)const;
			void describeDomainAttackEventsAsync(const Model::DescribeDomainAttackEventsRequest& request, const DescribeDomainAttackEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainAttackEventsOutcomeCallable describeDomainAttackEventsCallable(const Model::DescribeDomainAttackEventsRequest& request) const;
			DescribeDomainQpsOutcome describeDomainQps(const Model::DescribeDomainQpsRequest &request)const;
			void describeDomainQpsAsync(const Model::DescribeDomainQpsRequest& request, const DescribeDomainQpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainQpsOutcomeCallable describeDomainQpsCallable(const Model::DescribeDomainQpsRequest& request) const;
			DescribeDomainQpsWithCacheOutcome describeDomainQpsWithCache(const Model::DescribeDomainQpsWithCacheRequest &request)const;
			void describeDomainQpsWithCacheAsync(const Model::DescribeDomainQpsWithCacheRequest& request, const DescribeDomainQpsWithCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainQpsWithCacheOutcomeCallable describeDomainQpsWithCacheCallable(const Model::DescribeDomainQpsWithCacheRequest& request) const;
			DescribeDomainSlsStatusOutcome describeDomainSlsStatus(const Model::DescribeDomainSlsStatusRequest &request)const;
			void describeDomainSlsStatusAsync(const Model::DescribeDomainSlsStatusRequest& request, const DescribeDomainSlsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainSlsStatusOutcomeCallable describeDomainSlsStatusCallable(const Model::DescribeDomainSlsStatusRequest& request) const;
			DescribeDomainsOutcome describeDomains(const Model::DescribeDomainsRequest &request)const;
			void describeDomainsAsync(const Model::DescribeDomainsRequest& request, const DescribeDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainsOutcomeCallable describeDomainsCallable(const Model::DescribeDomainsRequest& request) const;
			DescribeElasticBandwidthSpecOutcome describeElasticBandwidthSpec(const Model::DescribeElasticBandwidthSpecRequest &request)const;
			void describeElasticBandwidthSpecAsync(const Model::DescribeElasticBandwidthSpecRequest& request, const DescribeElasticBandwidthSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeElasticBandwidthSpecOutcomeCallable describeElasticBandwidthSpecCallable(const Model::DescribeElasticBandwidthSpecRequest& request) const;
			DescribeHealthCheckListOutcome describeHealthCheckList(const Model::DescribeHealthCheckListRequest &request)const;
			void describeHealthCheckListAsync(const Model::DescribeHealthCheckListRequest& request, const DescribeHealthCheckListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHealthCheckListOutcomeCallable describeHealthCheckListCallable(const Model::DescribeHealthCheckListRequest& request) const;
			DescribeHealthCheckStatusListOutcome describeHealthCheckStatusList(const Model::DescribeHealthCheckStatusListRequest &request)const;
			void describeHealthCheckStatusListAsync(const Model::DescribeHealthCheckStatusListRequest& request, const DescribeHealthCheckStatusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeHealthCheckStatusListOutcomeCallable describeHealthCheckStatusListCallable(const Model::DescribeHealthCheckStatusListRequest& request) const;
			DescribeInstanceDetailsOutcome describeInstanceDetails(const Model::DescribeInstanceDetailsRequest &request)const;
			void describeInstanceDetailsAsync(const Model::DescribeInstanceDetailsRequest& request, const DescribeInstanceDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceDetailsOutcomeCallable describeInstanceDetailsCallable(const Model::DescribeInstanceDetailsRequest& request) const;
			DescribeInstanceSpecsOutcome describeInstanceSpecs(const Model::DescribeInstanceSpecsRequest &request)const;
			void describeInstanceSpecsAsync(const Model::DescribeInstanceSpecsRequest& request, const DescribeInstanceSpecsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceSpecsOutcomeCallable describeInstanceSpecsCallable(const Model::DescribeInstanceSpecsRequest& request) const;
			DescribeInstanceStatisticsOutcome describeInstanceStatistics(const Model::DescribeInstanceStatisticsRequest &request)const;
			void describeInstanceStatisticsAsync(const Model::DescribeInstanceStatisticsRequest& request, const DescribeInstanceStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceStatisticsOutcomeCallable describeInstanceStatisticsCallable(const Model::DescribeInstanceStatisticsRequest& request) const;
			DescribeInstancesOutcome describeInstances(const Model::DescribeInstancesRequest &request)const;
			void describeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstancesOutcomeCallable describeInstancesCallable(const Model::DescribeInstancesRequest& request) const;
			DescribeIpTrafficOutcome describeIpTraffic(const Model::DescribeIpTrafficRequest &request)const;
			void describeIpTrafficAsync(const Model::DescribeIpTrafficRequest& request, const DescribeIpTrafficAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeIpTrafficOutcomeCallable describeIpTrafficCallable(const Model::DescribeIpTrafficRequest& request) const;
			DescribeLayer4RuleAttributesOutcome describeLayer4RuleAttributes(const Model::DescribeLayer4RuleAttributesRequest &request)const;
			void describeLayer4RuleAttributesAsync(const Model::DescribeLayer4RuleAttributesRequest& request, const DescribeLayer4RuleAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLayer4RuleAttributesOutcomeCallable describeLayer4RuleAttributesCallable(const Model::DescribeLayer4RuleAttributesRequest& request) const;
			DescribeLayer4RulesOutcome describeLayer4Rules(const Model::DescribeLayer4RulesRequest &request)const;
			void describeLayer4RulesAsync(const Model::DescribeLayer4RulesRequest& request, const DescribeLayer4RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLayer4RulesOutcomeCallable describeLayer4RulesCallable(const Model::DescribeLayer4RulesRequest& request) const;
			DescribeLayer7CCRulesOutcome describeLayer7CCRules(const Model::DescribeLayer7CCRulesRequest &request)const;
			void describeLayer7CCRulesAsync(const Model::DescribeLayer7CCRulesRequest& request, const DescribeLayer7CCRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLayer7CCRulesOutcomeCallable describeLayer7CCRulesCallable(const Model::DescribeLayer7CCRulesRequest& request) const;
			DescribeLogStoreExistStatusOutcome describeLogStoreExistStatus(const Model::DescribeLogStoreExistStatusRequest &request)const;
			void describeLogStoreExistStatusAsync(const Model::DescribeLogStoreExistStatusRequest& request, const DescribeLogStoreExistStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLogStoreExistStatusOutcomeCallable describeLogStoreExistStatusCallable(const Model::DescribeLogStoreExistStatusRequest& request) const;
			DescribeOpEntitiesOutcome describeOpEntities(const Model::DescribeOpEntitiesRequest &request)const;
			void describeOpEntitiesAsync(const Model::DescribeOpEntitiesRequest& request, const DescribeOpEntitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOpEntitiesOutcomeCallable describeOpEntitiesCallable(const Model::DescribeOpEntitiesRequest& request) const;
			DescribeSimpleDomainsOutcome describeSimpleDomains(const Model::DescribeSimpleDomainsRequest &request)const;
			void describeSimpleDomainsAsync(const Model::DescribeSimpleDomainsRequest& request, const DescribeSimpleDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSimpleDomainsOutcomeCallable describeSimpleDomainsCallable(const Model::DescribeSimpleDomainsRequest& request) const;
			DescribeSlsAuthStatusOutcome describeSlsAuthStatus(const Model::DescribeSlsAuthStatusRequest &request)const;
			void describeSlsAuthStatusAsync(const Model::DescribeSlsAuthStatusRequest& request, const DescribeSlsAuthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSlsAuthStatusOutcomeCallable describeSlsAuthStatusCallable(const Model::DescribeSlsAuthStatusRequest& request) const;
			DescribeSlsEmptyCountOutcome describeSlsEmptyCount(const Model::DescribeSlsEmptyCountRequest &request)const;
			void describeSlsEmptyCountAsync(const Model::DescribeSlsEmptyCountRequest& request, const DescribeSlsEmptyCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSlsEmptyCountOutcomeCallable describeSlsEmptyCountCallable(const Model::DescribeSlsEmptyCountRequest& request) const;
			DescribeSlsLogstoreInfoOutcome describeSlsLogstoreInfo(const Model::DescribeSlsLogstoreInfoRequest &request)const;
			void describeSlsLogstoreInfoAsync(const Model::DescribeSlsLogstoreInfoRequest& request, const DescribeSlsLogstoreInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSlsLogstoreInfoOutcomeCallable describeSlsLogstoreInfoCallable(const Model::DescribeSlsLogstoreInfoRequest& request) const;
			DescribeSlsOpenStatusOutcome describeSlsOpenStatus(const Model::DescribeSlsOpenStatusRequest &request)const;
			void describeSlsOpenStatusAsync(const Model::DescribeSlsOpenStatusRequest& request, const DescribeSlsOpenStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeSlsOpenStatusOutcomeCallable describeSlsOpenStatusCallable(const Model::DescribeSlsOpenStatusRequest& request) const;
			DescribleCertListOutcome describleCertList(const Model::DescribleCertListRequest &request)const;
			void describleCertListAsync(const Model::DescribleCertListRequest& request, const DescribleCertListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribleCertListOutcomeCallable describleCertListCallable(const Model::DescribleCertListRequest& request) const;
			DescribleLayer7InstanceRelationsOutcome describleLayer7InstanceRelations(const Model::DescribleLayer7InstanceRelationsRequest &request)const;
			void describleLayer7InstanceRelationsAsync(const Model::DescribleLayer7InstanceRelationsRequest& request, const DescribleLayer7InstanceRelationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribleLayer7InstanceRelationsOutcomeCallable describleLayer7InstanceRelationsCallable(const Model::DescribleLayer7InstanceRelationsRequest& request) const;
			DisableLayer7CCOutcome disableLayer7CC(const Model::DisableLayer7CCRequest &request)const;
			void disableLayer7CCAsync(const Model::DisableLayer7CCRequest& request, const DisableLayer7CCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableLayer7CCOutcomeCallable disableLayer7CCCallable(const Model::DisableLayer7CCRequest& request) const;
			DisableLayer7CCRuleOutcome disableLayer7CCRule(const Model::DisableLayer7CCRuleRequest &request)const;
			void disableLayer7CCRuleAsync(const Model::DisableLayer7CCRuleRequest& request, const DisableLayer7CCRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableLayer7CCRuleOutcomeCallable disableLayer7CCRuleCallable(const Model::DisableLayer7CCRuleRequest& request) const;
			EmptySlsLogstoreOutcome emptySlsLogstore(const Model::EmptySlsLogstoreRequest &request)const;
			void emptySlsLogstoreAsync(const Model::EmptySlsLogstoreRequest& request, const EmptySlsLogstoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EmptySlsLogstoreOutcomeCallable emptySlsLogstoreCallable(const Model::EmptySlsLogstoreRequest& request) const;
			EnableLayer7CCOutcome enableLayer7CC(const Model::EnableLayer7CCRequest &request)const;
			void enableLayer7CCAsync(const Model::EnableLayer7CCRequest& request, const EnableLayer7CCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableLayer7CCOutcomeCallable enableLayer7CCCallable(const Model::EnableLayer7CCRequest& request) const;
			EnableLayer7CCRuleOutcome enableLayer7CCRule(const Model::EnableLayer7CCRuleRequest &request)const;
			void enableLayer7CCRuleAsync(const Model::EnableLayer7CCRuleRequest& request, const EnableLayer7CCRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableLayer7CCRuleOutcomeCallable enableLayer7CCRuleCallable(const Model::EnableLayer7CCRuleRequest& request) const;
			ListAsyncTaskOutcome listAsyncTask(const Model::ListAsyncTaskRequest &request)const;
			void listAsyncTaskAsync(const Model::ListAsyncTaskRequest& request, const ListAsyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListAsyncTaskOutcomeCallable listAsyncTaskCallable(const Model::ListAsyncTaskRequest& request) const;
			ListLayer7CustomPortsOutcome listLayer7CustomPorts(const Model::ListLayer7CustomPortsRequest &request)const;
			void listLayer7CustomPortsAsync(const Model::ListLayer7CustomPortsRequest& request, const ListLayer7CustomPortsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListLayer7CustomPortsOutcomeCallable listLayer7CustomPortsCallable(const Model::ListLayer7CustomPortsRequest& request) const;
			ListTagKeysOutcome listTagKeys(const Model::ListTagKeysRequest &request)const;
			void listTagKeysAsync(const Model::ListTagKeysRequest& request, const ListTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagKeysOutcomeCallable listTagKeysCallable(const Model::ListTagKeysRequest& request) const;
			ListTagResourcesOutcome listTagResources(const Model::ListTagResourcesRequest &request)const;
			void listTagResourcesAsync(const Model::ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListTagResourcesOutcomeCallable listTagResourcesCallable(const Model::ListTagResourcesRequest& request) const;
			ListValueAddedOutcome listValueAdded(const Model::ListValueAddedRequest &request)const;
			void listValueAddedAsync(const Model::ListValueAddedRequest& request, const ListValueAddedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListValueAddedOutcomeCallable listValueAddedCallable(const Model::ListValueAddedRequest& request) const;
			ModifyElasticBandWidthOutcome modifyElasticBandWidth(const Model::ModifyElasticBandWidthRequest &request)const;
			void modifyElasticBandWidthAsync(const Model::ModifyElasticBandWidthRequest& request, const ModifyElasticBandWidthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyElasticBandWidthOutcomeCallable modifyElasticBandWidthCallable(const Model::ModifyElasticBandWidthRequest& request) const;
			ModifyFullLogTtlOutcome modifyFullLogTtl(const Model::ModifyFullLogTtlRequest &request)const;
			void modifyFullLogTtlAsync(const Model::ModifyFullLogTtlRequest& request, const ModifyFullLogTtlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyFullLogTtlOutcomeCallable modifyFullLogTtlCallable(const Model::ModifyFullLogTtlRequest& request) const;
			ModifyInstanceRemarkOutcome modifyInstanceRemark(const Model::ModifyInstanceRemarkRequest &request)const;
			void modifyInstanceRemarkAsync(const Model::ModifyInstanceRemarkRequest& request, const ModifyInstanceRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyInstanceRemarkOutcomeCallable modifyInstanceRemarkCallable(const Model::ModifyInstanceRemarkRequest& request) const;
			OpenDomainSlsConfigOutcome openDomainSlsConfig(const Model::OpenDomainSlsConfigRequest &request)const;
			void openDomainSlsConfigAsync(const Model::OpenDomainSlsConfigRequest& request, const OpenDomainSlsConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			OpenDomainSlsConfigOutcomeCallable openDomainSlsConfigCallable(const Model::OpenDomainSlsConfigRequest& request) const;
			ReleaseInstanceOutcome releaseInstance(const Model::ReleaseInstanceRequest &request)const;
			void releaseInstanceAsync(const Model::ReleaseInstanceRequest& request, const ReleaseInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseInstanceOutcomeCallable releaseInstanceCallable(const Model::ReleaseInstanceRequest& request) const;
			ReleaseValueAddedOutcome releaseValueAdded(const Model::ReleaseValueAddedRequest &request)const;
			void releaseValueAddedAsync(const Model::ReleaseValueAddedRequest& request, const ReleaseValueAddedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ReleaseValueAddedOutcomeCallable releaseValueAddedCallable(const Model::ReleaseValueAddedRequest& request) const;
			TagResourcesOutcome tagResources(const Model::TagResourcesRequest &request)const;
			void tagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TagResourcesOutcomeCallable tagResourcesCallable(const Model::TagResourcesRequest& request) const;
			UntagResourcesOutcome untagResources(const Model::UntagResourcesRequest &request)const;
			void untagResourcesAsync(const Model::UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UntagResourcesOutcomeCallable untagResourcesCallable(const Model::UntagResourcesRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_DDOSCOO_DDOSCOOCLIENT_H_
