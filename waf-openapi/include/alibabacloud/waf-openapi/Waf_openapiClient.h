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

#ifndef ALIBABACLOUD_WAF_OPENAPI_WAF_OPENAPICLIENT_H_
#define ALIBABACLOUD_WAF_OPENAPI_WAF_OPENAPICLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Waf_openapiExport.h"
#include "model/CreateCertificateRequest.h"
#include "model/CreateCertificateResult.h"
#include "model/CreateCertificateByCertificateIdRequest.h"
#include "model/CreateCertificateByCertificateIdResult.h"
#include "model/CreateDomainRequest.h"
#include "model/CreateDomainResult.h"
#include "model/CreateProtectionModuleRuleRequest.h"
#include "model/CreateProtectionModuleRuleResult.h"
#include "model/DeleteDomainRequest.h"
#include "model/DeleteDomainResult.h"
#include "model/DeleteInstanceRequest.h"
#include "model/DeleteInstanceResult.h"
#include "model/DeleteProtectionModuleRuleRequest.h"
#include "model/DeleteProtectionModuleRuleResult.h"
#include "model/DescribeCertMatchStatusRequest.h"
#include "model/DescribeCertMatchStatusResult.h"
#include "model/DescribeCertificatesRequest.h"
#include "model/DescribeCertificatesResult.h"
#include "model/DescribeDomainRequest.h"
#include "model/DescribeDomainResult.h"
#include "model/DescribeDomainAdvanceConfigsRequest.h"
#include "model/DescribeDomainAdvanceConfigsResult.h"
#include "model/DescribeDomainBasicConfigsRequest.h"
#include "model/DescribeDomainBasicConfigsResult.h"
#include "model/DescribeDomainListRequest.h"
#include "model/DescribeDomainListResult.h"
#include "model/DescribeDomainNamesRequest.h"
#include "model/DescribeDomainNamesResult.h"
#include "model/DescribeDomainRuleGroupRequest.h"
#include "model/DescribeDomainRuleGroupResult.h"
#include "model/DescribeInstanceInfoRequest.h"
#include "model/DescribeInstanceInfoResult.h"
#include "model/DescribeInstanceSpecInfoRequest.h"
#include "model/DescribeInstanceSpecInfoResult.h"
#include "model/DescribeLogServiceStatusRequest.h"
#include "model/DescribeLogServiceStatusResult.h"
#include "model/DescribeProtectionModuleCodeConfigRequest.h"
#include "model/DescribeProtectionModuleCodeConfigResult.h"
#include "model/DescribeProtectionModuleModeRequest.h"
#include "model/DescribeProtectionModuleModeResult.h"
#include "model/DescribeProtectionModuleRulesRequest.h"
#include "model/DescribeProtectionModuleRulesResult.h"
#include "model/DescribeProtectionModuleStatusRequest.h"
#include "model/DescribeProtectionModuleStatusResult.h"
#include "model/DescribeRuleGroupsRequest.h"
#include "model/DescribeRuleGroupsResult.h"
#include "model/DescribeRulesRequest.h"
#include "model/DescribeRulesResult.h"
#include "model/DescribeWafSourceIpSegmentRequest.h"
#include "model/DescribeWafSourceIpSegmentResult.h"
#include "model/ModifyDomainRequest.h"
#include "model/ModifyDomainResult.h"
#include "model/ModifyDomainIpv6StatusRequest.h"
#include "model/ModifyDomainIpv6StatusResult.h"
#include "model/ModifyLogRetrievalStatusRequest.h"
#include "model/ModifyLogRetrievalStatusResult.h"
#include "model/ModifyLogServiceStatusRequest.h"
#include "model/ModifyLogServiceStatusResult.h"
#include "model/ModifyProtectionModuleModeRequest.h"
#include "model/ModifyProtectionModuleModeResult.h"
#include "model/ModifyProtectionModuleRuleRequest.h"
#include "model/ModifyProtectionModuleRuleResult.h"
#include "model/ModifyProtectionModuleStatusRequest.h"
#include "model/ModifyProtectionModuleStatusResult.h"
#include "model/ModifyProtectionRuleCacheStatusRequest.h"
#include "model/ModifyProtectionRuleCacheStatusResult.h"
#include "model/ModifyProtectionRuleStatusRequest.h"
#include "model/ModifyProtectionRuleStatusResult.h"
#include "model/MoveResourceGroupRequest.h"
#include "model/MoveResourceGroupResult.h"
#include "model/SetDomainRuleGroupRequest.h"
#include "model/SetDomainRuleGroupResult.h"


namespace AlibabaCloud
{
	namespace Waf_openapi
	{
		class ALIBABACLOUD_WAF_OPENAPI_EXPORT Waf_openapiClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateCertificateResult> CreateCertificateOutcome;
			typedef std::future<CreateCertificateOutcome> CreateCertificateOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::CreateCertificateRequest&, const CreateCertificateOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCertificateAsyncHandler;
			typedef Outcome<Error, Model::CreateCertificateByCertificateIdResult> CreateCertificateByCertificateIdOutcome;
			typedef std::future<CreateCertificateByCertificateIdOutcome> CreateCertificateByCertificateIdOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::CreateCertificateByCertificateIdRequest&, const CreateCertificateByCertificateIdOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateCertificateByCertificateIdAsyncHandler;
			typedef Outcome<Error, Model::CreateDomainResult> CreateDomainOutcome;
			typedef std::future<CreateDomainOutcome> CreateDomainOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::CreateDomainRequest&, const CreateDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateDomainAsyncHandler;
			typedef Outcome<Error, Model::CreateProtectionModuleRuleResult> CreateProtectionModuleRuleOutcome;
			typedef std::future<CreateProtectionModuleRuleOutcome> CreateProtectionModuleRuleOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::CreateProtectionModuleRuleRequest&, const CreateProtectionModuleRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateProtectionModuleRuleAsyncHandler;
			typedef Outcome<Error, Model::DeleteDomainResult> DeleteDomainOutcome;
			typedef std::future<DeleteDomainOutcome> DeleteDomainOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::DeleteDomainRequest&, const DeleteDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDomainAsyncHandler;
			typedef Outcome<Error, Model::DeleteInstanceResult> DeleteInstanceOutcome;
			typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::DeleteInstanceRequest&, const DeleteInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteInstanceAsyncHandler;
			typedef Outcome<Error, Model::DeleteProtectionModuleRuleResult> DeleteProtectionModuleRuleOutcome;
			typedef std::future<DeleteProtectionModuleRuleOutcome> DeleteProtectionModuleRuleOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::DeleteProtectionModuleRuleRequest&, const DeleteProtectionModuleRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProtectionModuleRuleAsyncHandler;
			typedef Outcome<Error, Model::DescribeCertMatchStatusResult> DescribeCertMatchStatusOutcome;
			typedef std::future<DescribeCertMatchStatusOutcome> DescribeCertMatchStatusOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::DescribeCertMatchStatusRequest&, const DescribeCertMatchStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertMatchStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeCertificatesResult> DescribeCertificatesOutcome;
			typedef std::future<DescribeCertificatesOutcome> DescribeCertificatesOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::DescribeCertificatesRequest&, const DescribeCertificatesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertificatesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainResult> DescribeDomainOutcome;
			typedef std::future<DescribeDomainOutcome> DescribeDomainOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::DescribeDomainRequest&, const DescribeDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainAdvanceConfigsResult> DescribeDomainAdvanceConfigsOutcome;
			typedef std::future<DescribeDomainAdvanceConfigsOutcome> DescribeDomainAdvanceConfigsOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::DescribeDomainAdvanceConfigsRequest&, const DescribeDomainAdvanceConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainAdvanceConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainBasicConfigsResult> DescribeDomainBasicConfigsOutcome;
			typedef std::future<DescribeDomainBasicConfigsOutcome> DescribeDomainBasicConfigsOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::DescribeDomainBasicConfigsRequest&, const DescribeDomainBasicConfigsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainBasicConfigsAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainListResult> DescribeDomainListOutcome;
			typedef std::future<DescribeDomainListOutcome> DescribeDomainListOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::DescribeDomainListRequest&, const DescribeDomainListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainListAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainNamesResult> DescribeDomainNamesOutcome;
			typedef std::future<DescribeDomainNamesOutcome> DescribeDomainNamesOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::DescribeDomainNamesRequest&, const DescribeDomainNamesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainNamesAsyncHandler;
			typedef Outcome<Error, Model::DescribeDomainRuleGroupResult> DescribeDomainRuleGroupOutcome;
			typedef std::future<DescribeDomainRuleGroupOutcome> DescribeDomainRuleGroupOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::DescribeDomainRuleGroupRequest&, const DescribeDomainRuleGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDomainRuleGroupAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceInfoResult> DescribeInstanceInfoOutcome;
			typedef std::future<DescribeInstanceInfoOutcome> DescribeInstanceInfoOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::DescribeInstanceInfoRequest&, const DescribeInstanceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeInstanceSpecInfoResult> DescribeInstanceSpecInfoOutcome;
			typedef std::future<DescribeInstanceSpecInfoOutcome> DescribeInstanceSpecInfoOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::DescribeInstanceSpecInfoRequest&, const DescribeInstanceSpecInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceSpecInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeLogServiceStatusResult> DescribeLogServiceStatusOutcome;
			typedef std::future<DescribeLogServiceStatusOutcome> DescribeLogServiceStatusOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::DescribeLogServiceStatusRequest&, const DescribeLogServiceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLogServiceStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeProtectionModuleCodeConfigResult> DescribeProtectionModuleCodeConfigOutcome;
			typedef std::future<DescribeProtectionModuleCodeConfigOutcome> DescribeProtectionModuleCodeConfigOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::DescribeProtectionModuleCodeConfigRequest&, const DescribeProtectionModuleCodeConfigOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProtectionModuleCodeConfigAsyncHandler;
			typedef Outcome<Error, Model::DescribeProtectionModuleModeResult> DescribeProtectionModuleModeOutcome;
			typedef std::future<DescribeProtectionModuleModeOutcome> DescribeProtectionModuleModeOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::DescribeProtectionModuleModeRequest&, const DescribeProtectionModuleModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProtectionModuleModeAsyncHandler;
			typedef Outcome<Error, Model::DescribeProtectionModuleRulesResult> DescribeProtectionModuleRulesOutcome;
			typedef std::future<DescribeProtectionModuleRulesOutcome> DescribeProtectionModuleRulesOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::DescribeProtectionModuleRulesRequest&, const DescribeProtectionModuleRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProtectionModuleRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeProtectionModuleStatusResult> DescribeProtectionModuleStatusOutcome;
			typedef std::future<DescribeProtectionModuleStatusOutcome> DescribeProtectionModuleStatusOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::DescribeProtectionModuleStatusRequest&, const DescribeProtectionModuleStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProtectionModuleStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeRuleGroupsResult> DescribeRuleGroupsOutcome;
			typedef std::future<DescribeRuleGroupsOutcome> DescribeRuleGroupsOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::DescribeRuleGroupsRequest&, const DescribeRuleGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRuleGroupsAsyncHandler;
			typedef Outcome<Error, Model::DescribeRulesResult> DescribeRulesOutcome;
			typedef std::future<DescribeRulesOutcome> DescribeRulesOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::DescribeRulesRequest&, const DescribeRulesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRulesAsyncHandler;
			typedef Outcome<Error, Model::DescribeWafSourceIpSegmentResult> DescribeWafSourceIpSegmentOutcome;
			typedef std::future<DescribeWafSourceIpSegmentOutcome> DescribeWafSourceIpSegmentOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::DescribeWafSourceIpSegmentRequest&, const DescribeWafSourceIpSegmentOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeWafSourceIpSegmentAsyncHandler;
			typedef Outcome<Error, Model::ModifyDomainResult> ModifyDomainOutcome;
			typedef std::future<ModifyDomainOutcome> ModifyDomainOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::ModifyDomainRequest&, const ModifyDomainOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainAsyncHandler;
			typedef Outcome<Error, Model::ModifyDomainIpv6StatusResult> ModifyDomainIpv6StatusOutcome;
			typedef std::future<ModifyDomainIpv6StatusOutcome> ModifyDomainIpv6StatusOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::ModifyDomainIpv6StatusRequest&, const ModifyDomainIpv6StatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDomainIpv6StatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyLogRetrievalStatusResult> ModifyLogRetrievalStatusOutcome;
			typedef std::future<ModifyLogRetrievalStatusOutcome> ModifyLogRetrievalStatusOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::ModifyLogRetrievalStatusRequest&, const ModifyLogRetrievalStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLogRetrievalStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyLogServiceStatusResult> ModifyLogServiceStatusOutcome;
			typedef std::future<ModifyLogServiceStatusOutcome> ModifyLogServiceStatusOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::ModifyLogServiceStatusRequest&, const ModifyLogServiceStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLogServiceStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyProtectionModuleModeResult> ModifyProtectionModuleModeOutcome;
			typedef std::future<ModifyProtectionModuleModeOutcome> ModifyProtectionModuleModeOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::ModifyProtectionModuleModeRequest&, const ModifyProtectionModuleModeOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProtectionModuleModeAsyncHandler;
			typedef Outcome<Error, Model::ModifyProtectionModuleRuleResult> ModifyProtectionModuleRuleOutcome;
			typedef std::future<ModifyProtectionModuleRuleOutcome> ModifyProtectionModuleRuleOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::ModifyProtectionModuleRuleRequest&, const ModifyProtectionModuleRuleOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProtectionModuleRuleAsyncHandler;
			typedef Outcome<Error, Model::ModifyProtectionModuleStatusResult> ModifyProtectionModuleStatusOutcome;
			typedef std::future<ModifyProtectionModuleStatusOutcome> ModifyProtectionModuleStatusOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::ModifyProtectionModuleStatusRequest&, const ModifyProtectionModuleStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProtectionModuleStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyProtectionRuleCacheStatusResult> ModifyProtectionRuleCacheStatusOutcome;
			typedef std::future<ModifyProtectionRuleCacheStatusOutcome> ModifyProtectionRuleCacheStatusOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::ModifyProtectionRuleCacheStatusRequest&, const ModifyProtectionRuleCacheStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProtectionRuleCacheStatusAsyncHandler;
			typedef Outcome<Error, Model::ModifyProtectionRuleStatusResult> ModifyProtectionRuleStatusOutcome;
			typedef std::future<ModifyProtectionRuleStatusOutcome> ModifyProtectionRuleStatusOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::ModifyProtectionRuleStatusRequest&, const ModifyProtectionRuleStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProtectionRuleStatusAsyncHandler;
			typedef Outcome<Error, Model::MoveResourceGroupResult> MoveResourceGroupOutcome;
			typedef std::future<MoveResourceGroupOutcome> MoveResourceGroupOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::MoveResourceGroupRequest&, const MoveResourceGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> MoveResourceGroupAsyncHandler;
			typedef Outcome<Error, Model::SetDomainRuleGroupResult> SetDomainRuleGroupOutcome;
			typedef std::future<SetDomainRuleGroupOutcome> SetDomainRuleGroupOutcomeCallable;
			typedef std::function<void(const Waf_openapiClient*, const Model::SetDomainRuleGroupRequest&, const SetDomainRuleGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetDomainRuleGroupAsyncHandler;

			Waf_openapiClient(const Credentials &credentials, const ClientConfiguration &configuration);
			Waf_openapiClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Waf_openapiClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Waf_openapiClient();
			CreateCertificateOutcome createCertificate(const Model::CreateCertificateRequest &request)const;
			void createCertificateAsync(const Model::CreateCertificateRequest& request, const CreateCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCertificateOutcomeCallable createCertificateCallable(const Model::CreateCertificateRequest& request) const;
			CreateCertificateByCertificateIdOutcome createCertificateByCertificateId(const Model::CreateCertificateByCertificateIdRequest &request)const;
			void createCertificateByCertificateIdAsync(const Model::CreateCertificateByCertificateIdRequest& request, const CreateCertificateByCertificateIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateCertificateByCertificateIdOutcomeCallable createCertificateByCertificateIdCallable(const Model::CreateCertificateByCertificateIdRequest& request) const;
			CreateDomainOutcome createDomain(const Model::CreateDomainRequest &request)const;
			void createDomainAsync(const Model::CreateDomainRequest& request, const CreateDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateDomainOutcomeCallable createDomainCallable(const Model::CreateDomainRequest& request) const;
			CreateProtectionModuleRuleOutcome createProtectionModuleRule(const Model::CreateProtectionModuleRuleRequest &request)const;
			void createProtectionModuleRuleAsync(const Model::CreateProtectionModuleRuleRequest& request, const CreateProtectionModuleRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateProtectionModuleRuleOutcomeCallable createProtectionModuleRuleCallable(const Model::CreateProtectionModuleRuleRequest& request) const;
			DeleteDomainOutcome deleteDomain(const Model::DeleteDomainRequest &request)const;
			void deleteDomainAsync(const Model::DeleteDomainRequest& request, const DeleteDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteDomainOutcomeCallable deleteDomainCallable(const Model::DeleteDomainRequest& request) const;
			DeleteInstanceOutcome deleteInstance(const Model::DeleteInstanceRequest &request)const;
			void deleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteInstanceOutcomeCallable deleteInstanceCallable(const Model::DeleteInstanceRequest& request) const;
			DeleteProtectionModuleRuleOutcome deleteProtectionModuleRule(const Model::DeleteProtectionModuleRuleRequest &request)const;
			void deleteProtectionModuleRuleAsync(const Model::DeleteProtectionModuleRuleRequest& request, const DeleteProtectionModuleRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteProtectionModuleRuleOutcomeCallable deleteProtectionModuleRuleCallable(const Model::DeleteProtectionModuleRuleRequest& request) const;
			DescribeCertMatchStatusOutcome describeCertMatchStatus(const Model::DescribeCertMatchStatusRequest &request)const;
			void describeCertMatchStatusAsync(const Model::DescribeCertMatchStatusRequest& request, const DescribeCertMatchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCertMatchStatusOutcomeCallable describeCertMatchStatusCallable(const Model::DescribeCertMatchStatusRequest& request) const;
			DescribeCertificatesOutcome describeCertificates(const Model::DescribeCertificatesRequest &request)const;
			void describeCertificatesAsync(const Model::DescribeCertificatesRequest& request, const DescribeCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeCertificatesOutcomeCallable describeCertificatesCallable(const Model::DescribeCertificatesRequest& request) const;
			DescribeDomainOutcome describeDomain(const Model::DescribeDomainRequest &request)const;
			void describeDomainAsync(const Model::DescribeDomainRequest& request, const DescribeDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainOutcomeCallable describeDomainCallable(const Model::DescribeDomainRequest& request) const;
			DescribeDomainAdvanceConfigsOutcome describeDomainAdvanceConfigs(const Model::DescribeDomainAdvanceConfigsRequest &request)const;
			void describeDomainAdvanceConfigsAsync(const Model::DescribeDomainAdvanceConfigsRequest& request, const DescribeDomainAdvanceConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainAdvanceConfigsOutcomeCallable describeDomainAdvanceConfigsCallable(const Model::DescribeDomainAdvanceConfigsRequest& request) const;
			DescribeDomainBasicConfigsOutcome describeDomainBasicConfigs(const Model::DescribeDomainBasicConfigsRequest &request)const;
			void describeDomainBasicConfigsAsync(const Model::DescribeDomainBasicConfigsRequest& request, const DescribeDomainBasicConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainBasicConfigsOutcomeCallable describeDomainBasicConfigsCallable(const Model::DescribeDomainBasicConfigsRequest& request) const;
			DescribeDomainListOutcome describeDomainList(const Model::DescribeDomainListRequest &request)const;
			void describeDomainListAsync(const Model::DescribeDomainListRequest& request, const DescribeDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainListOutcomeCallable describeDomainListCallable(const Model::DescribeDomainListRequest& request) const;
			DescribeDomainNamesOutcome describeDomainNames(const Model::DescribeDomainNamesRequest &request)const;
			void describeDomainNamesAsync(const Model::DescribeDomainNamesRequest& request, const DescribeDomainNamesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainNamesOutcomeCallable describeDomainNamesCallable(const Model::DescribeDomainNamesRequest& request) const;
			DescribeDomainRuleGroupOutcome describeDomainRuleGroup(const Model::DescribeDomainRuleGroupRequest &request)const;
			void describeDomainRuleGroupAsync(const Model::DescribeDomainRuleGroupRequest& request, const DescribeDomainRuleGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDomainRuleGroupOutcomeCallable describeDomainRuleGroupCallable(const Model::DescribeDomainRuleGroupRequest& request) const;
			DescribeInstanceInfoOutcome describeInstanceInfo(const Model::DescribeInstanceInfoRequest &request)const;
			void describeInstanceInfoAsync(const Model::DescribeInstanceInfoRequest& request, const DescribeInstanceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceInfoOutcomeCallable describeInstanceInfoCallable(const Model::DescribeInstanceInfoRequest& request) const;
			DescribeInstanceSpecInfoOutcome describeInstanceSpecInfo(const Model::DescribeInstanceSpecInfoRequest &request)const;
			void describeInstanceSpecInfoAsync(const Model::DescribeInstanceSpecInfoRequest& request, const DescribeInstanceSpecInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeInstanceSpecInfoOutcomeCallable describeInstanceSpecInfoCallable(const Model::DescribeInstanceSpecInfoRequest& request) const;
			DescribeLogServiceStatusOutcome describeLogServiceStatus(const Model::DescribeLogServiceStatusRequest &request)const;
			void describeLogServiceStatusAsync(const Model::DescribeLogServiceStatusRequest& request, const DescribeLogServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeLogServiceStatusOutcomeCallable describeLogServiceStatusCallable(const Model::DescribeLogServiceStatusRequest& request) const;
			DescribeProtectionModuleCodeConfigOutcome describeProtectionModuleCodeConfig(const Model::DescribeProtectionModuleCodeConfigRequest &request)const;
			void describeProtectionModuleCodeConfigAsync(const Model::DescribeProtectionModuleCodeConfigRequest& request, const DescribeProtectionModuleCodeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeProtectionModuleCodeConfigOutcomeCallable describeProtectionModuleCodeConfigCallable(const Model::DescribeProtectionModuleCodeConfigRequest& request) const;
			DescribeProtectionModuleModeOutcome describeProtectionModuleMode(const Model::DescribeProtectionModuleModeRequest &request)const;
			void describeProtectionModuleModeAsync(const Model::DescribeProtectionModuleModeRequest& request, const DescribeProtectionModuleModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeProtectionModuleModeOutcomeCallable describeProtectionModuleModeCallable(const Model::DescribeProtectionModuleModeRequest& request) const;
			DescribeProtectionModuleRulesOutcome describeProtectionModuleRules(const Model::DescribeProtectionModuleRulesRequest &request)const;
			void describeProtectionModuleRulesAsync(const Model::DescribeProtectionModuleRulesRequest& request, const DescribeProtectionModuleRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeProtectionModuleRulesOutcomeCallable describeProtectionModuleRulesCallable(const Model::DescribeProtectionModuleRulesRequest& request) const;
			DescribeProtectionModuleStatusOutcome describeProtectionModuleStatus(const Model::DescribeProtectionModuleStatusRequest &request)const;
			void describeProtectionModuleStatusAsync(const Model::DescribeProtectionModuleStatusRequest& request, const DescribeProtectionModuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeProtectionModuleStatusOutcomeCallable describeProtectionModuleStatusCallable(const Model::DescribeProtectionModuleStatusRequest& request) const;
			DescribeRuleGroupsOutcome describeRuleGroups(const Model::DescribeRuleGroupsRequest &request)const;
			void describeRuleGroupsAsync(const Model::DescribeRuleGroupsRequest& request, const DescribeRuleGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRuleGroupsOutcomeCallable describeRuleGroupsCallable(const Model::DescribeRuleGroupsRequest& request) const;
			DescribeRulesOutcome describeRules(const Model::DescribeRulesRequest &request)const;
			void describeRulesAsync(const Model::DescribeRulesRequest& request, const DescribeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRulesOutcomeCallable describeRulesCallable(const Model::DescribeRulesRequest& request) const;
			DescribeWafSourceIpSegmentOutcome describeWafSourceIpSegment(const Model::DescribeWafSourceIpSegmentRequest &request)const;
			void describeWafSourceIpSegmentAsync(const Model::DescribeWafSourceIpSegmentRequest& request, const DescribeWafSourceIpSegmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeWafSourceIpSegmentOutcomeCallable describeWafSourceIpSegmentCallable(const Model::DescribeWafSourceIpSegmentRequest& request) const;
			ModifyDomainOutcome modifyDomain(const Model::ModifyDomainRequest &request)const;
			void modifyDomainAsync(const Model::ModifyDomainRequest& request, const ModifyDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDomainOutcomeCallable modifyDomainCallable(const Model::ModifyDomainRequest& request) const;
			ModifyDomainIpv6StatusOutcome modifyDomainIpv6Status(const Model::ModifyDomainIpv6StatusRequest &request)const;
			void modifyDomainIpv6StatusAsync(const Model::ModifyDomainIpv6StatusRequest& request, const ModifyDomainIpv6StatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDomainIpv6StatusOutcomeCallable modifyDomainIpv6StatusCallable(const Model::ModifyDomainIpv6StatusRequest& request) const;
			ModifyLogRetrievalStatusOutcome modifyLogRetrievalStatus(const Model::ModifyLogRetrievalStatusRequest &request)const;
			void modifyLogRetrievalStatusAsync(const Model::ModifyLogRetrievalStatusRequest& request, const ModifyLogRetrievalStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLogRetrievalStatusOutcomeCallable modifyLogRetrievalStatusCallable(const Model::ModifyLogRetrievalStatusRequest& request) const;
			ModifyLogServiceStatusOutcome modifyLogServiceStatus(const Model::ModifyLogServiceStatusRequest &request)const;
			void modifyLogServiceStatusAsync(const Model::ModifyLogServiceStatusRequest& request, const ModifyLogServiceStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyLogServiceStatusOutcomeCallable modifyLogServiceStatusCallable(const Model::ModifyLogServiceStatusRequest& request) const;
			ModifyProtectionModuleModeOutcome modifyProtectionModuleMode(const Model::ModifyProtectionModuleModeRequest &request)const;
			void modifyProtectionModuleModeAsync(const Model::ModifyProtectionModuleModeRequest& request, const ModifyProtectionModuleModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyProtectionModuleModeOutcomeCallable modifyProtectionModuleModeCallable(const Model::ModifyProtectionModuleModeRequest& request) const;
			ModifyProtectionModuleRuleOutcome modifyProtectionModuleRule(const Model::ModifyProtectionModuleRuleRequest &request)const;
			void modifyProtectionModuleRuleAsync(const Model::ModifyProtectionModuleRuleRequest& request, const ModifyProtectionModuleRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyProtectionModuleRuleOutcomeCallable modifyProtectionModuleRuleCallable(const Model::ModifyProtectionModuleRuleRequest& request) const;
			ModifyProtectionModuleStatusOutcome modifyProtectionModuleStatus(const Model::ModifyProtectionModuleStatusRequest &request)const;
			void modifyProtectionModuleStatusAsync(const Model::ModifyProtectionModuleStatusRequest& request, const ModifyProtectionModuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyProtectionModuleStatusOutcomeCallable modifyProtectionModuleStatusCallable(const Model::ModifyProtectionModuleStatusRequest& request) const;
			ModifyProtectionRuleCacheStatusOutcome modifyProtectionRuleCacheStatus(const Model::ModifyProtectionRuleCacheStatusRequest &request)const;
			void modifyProtectionRuleCacheStatusAsync(const Model::ModifyProtectionRuleCacheStatusRequest& request, const ModifyProtectionRuleCacheStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyProtectionRuleCacheStatusOutcomeCallable modifyProtectionRuleCacheStatusCallable(const Model::ModifyProtectionRuleCacheStatusRequest& request) const;
			ModifyProtectionRuleStatusOutcome modifyProtectionRuleStatus(const Model::ModifyProtectionRuleStatusRequest &request)const;
			void modifyProtectionRuleStatusAsync(const Model::ModifyProtectionRuleStatusRequest& request, const ModifyProtectionRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyProtectionRuleStatusOutcomeCallable modifyProtectionRuleStatusCallable(const Model::ModifyProtectionRuleStatusRequest& request) const;
			MoveResourceGroupOutcome moveResourceGroup(const Model::MoveResourceGroupRequest &request)const;
			void moveResourceGroupAsync(const Model::MoveResourceGroupRequest& request, const MoveResourceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			MoveResourceGroupOutcomeCallable moveResourceGroupCallable(const Model::MoveResourceGroupRequest& request) const;
			SetDomainRuleGroupOutcome setDomainRuleGroup(const Model::SetDomainRuleGroupRequest &request)const;
			void setDomainRuleGroupAsync(const Model::SetDomainRuleGroupRequest& request, const SetDomainRuleGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetDomainRuleGroupOutcomeCallable setDomainRuleGroupCallable(const Model::SetDomainRuleGroupRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_WAF_OPENAPI_WAF_OPENAPICLIENT_H_
