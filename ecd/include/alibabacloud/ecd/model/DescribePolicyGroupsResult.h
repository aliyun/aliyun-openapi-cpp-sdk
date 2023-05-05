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

#ifndef ALIBABACLOUD_ECD_MODEL_DESCRIBEPOLICYGROUPSRESULT_H_
#define ALIBABACLOUD_ECD_MODEL_DESCRIBEPOLICYGROUPSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecd/EcdExport.h>

namespace AlibabaCloud
{
	namespace Ecd
	{
		namespace Model
		{
			class ALIBABACLOUD_ECD_EXPORT DescribePolicyGroupsResult : public ServiceResult
			{
			public:
				struct DescribePolicyGroup
				{
					struct AuthorizeSecurityPolicyRule
					{
						std::string policy;
						std::string cidrIp;
						std::string type;
						std::string portRange;
						std::string description;
						std::string priority;
						std::string ipProtocol;
					};
					struct AuthorizeAccessPolicyRule
					{
						std::string cidrIp;
						std::string description;
					};
					struct ClientType
					{
						std::string status;
						std::string clientType;
					};
					struct UsbSupplyRedirectRuleItem
					{
						long usbRuleType;
						std::string deviceSubclass;
						std::string description;
						std::string deviceClass;
						std::string vendorId;
						long usbRedirectType;
						std::string productId;
					};
					struct DomainResolveRuleItem
					{
						std::string policy;
						std::string description;
						std::string domain;
					};
					struct NetRedirectRuleItem
					{
						std::string policy;
						std::string ruleType;
						std::string domain;
					};
					std::string watermarkType;
					std::string watermarkTransparency;
					std::string cameraRedirect;
					std::string domainList;
					std::string domainResolveRuleType;
					long recordingFps;
					std::string gpuAcceleration;
					std::string recordingStartTime;
					std::string name;
					std::string remoteCoordinate;
					int watermarkTransparencyValue;
					int watermarkColor;
					std::string watermarkCustomText;
					int edsCount;
					std::string memoryProtectedMode;
					std::vector<DescribePolicyGroup::NetRedirectRuleItem> netRedirectRule;
					std::string videoRedirect;
					std::string cpuProtectedMode;
					std::string printerRedirection;
					int memorySingleRateLimit;
					std::vector<DescribePolicyGroup::DomainResolveRuleItem> domainResolveRule;
					int memoryRateLimit;
					std::string policyGroupType;
					std::vector<DescribePolicyGroup::AuthorizeAccessPolicyRule> authorizeAccessPolicyRules;
					std::string policyStatus;
					int memoryDownGradeDuration;
					std::vector<DescribePolicyGroup::ClientType> clientTypes;
					std::string netRedirect;
					std::string preemptLogin;
					std::string endUserGroupCoordinate;
					std::string html5Access;
					long recordingExpires;
					std::string watermarkFontStyle;
					int recordingDuration;
					int cpuDownGradeDuration;
					std::string appContentProtection;
					std::vector<std::string> cpuProcessors;
					int watermarkFontSize;
					double watermarkDegree;
					std::string usbRedirect;
					std::string endUserApplyAdminCoordinate;
					std::string recordingAudio;
					int watermarkRowAmount;
					std::string visualQuality;
					std::string internetCommunicationProtocol;
					std::vector<DescribePolicyGroup::UsbSupplyRedirectRuleItem> usbSupplyRedirectRule;
					int cpuSampleDuration;
					int cpuSingleRateLimit;
					std::string policyGroupId;
					std::string recordingEndTime;
					int memorySampleDuration;
					std::string scope;
					int cpuRateLimit;
					std::string localDrive;
					std::vector<std::string> preemptLoginUsers;
					std::vector<DescribePolicyGroup::AuthorizeSecurityPolicyRule> authorizeSecurityPolicyRules;
					long recordContentExpires;
					std::string html5FileTransfer;
					std::string clipboard;
					std::string recording;
					std::vector<std::string> scopeValue;
					std::string watermark;
					std::vector<std::string> memoryProcessors;
					std::string recordContent;
				};


				DescribePolicyGroupsResult();
				explicit DescribePolicyGroupsResult(const std::string &payload);
				~DescribePolicyGroupsResult();
				std::string getNextToken()const;
				std::vector<DescribePolicyGroup> getDescribePolicyGroups()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				std::vector<DescribePolicyGroup> describePolicyGroups_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECD_MODEL_DESCRIBEPOLICYGROUPSRESULT_H_