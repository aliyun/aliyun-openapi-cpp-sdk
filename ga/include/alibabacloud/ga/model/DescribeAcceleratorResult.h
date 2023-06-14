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

#ifndef ALIBABACLOUD_GA_MODEL_DESCRIBEACCELERATORRESULT_H_
#define ALIBABACLOUD_GA_MODEL_DESCRIBEACCELERATORRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ga/GaExport.h>

namespace AlibabaCloud
{
	namespace Ga
	{
		namespace Model
		{
			class ALIBABACLOUD_GA_EXPORT DescribeAcceleratorResult : public ServiceResult
			{
			public:
				struct CrossDomainBandwidthPackage
				{
					std::string instanceId;
					int bandwidth;
				};
				struct BasicBandwidthPackage
				{
					std::string bandwidthType;
					std::string instanceId;
					int bandwidth;
				};
				struct IpSetConfig
				{
					std::string accessMode;
				};
				struct TagsItem
				{
					std::string value;
					std::string key;
				};


				DescribeAcceleratorResult();
				explicit DescribeAcceleratorResult(const std::string &payload);
				~DescribeAcceleratorResult();
				std::string getUpgradableStatus()const;
				std::string getDdosId()const;
				std::string getDnsName()const;
				std::string getDescription()const;
				std::string getResourceGroupId()const;
				std::string getInstanceChargeType()const;
				long getCreateTime()const;
				CrossDomainBandwidthPackage getCrossDomainBandwidthPackage()const;
				IpSetConfig getIpSetConfig()const;
				std::string getSecondDnsName()const;
				std::string getName()const;
				std::string getCrossBorderMode()const;
				std::string getBandwidthBillingType()const;
				BasicBandwidthPackage getBasicBandwidthPackage()const;
				std::string getState()const;
				long getExpiredTime()const;
				std::string getCenId()const;
				std::string getCrossPrivateState()const;
				std::string getRegionId()const;
				std::string getSpec()const;
				std::string getAcceleratorId()const;
				std::vector<TagsItem> getTags()const;
				bool getCrossBorderStatus()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string upgradableStatus_;
				std::string ddosId_;
				std::string dnsName_;
				std::string description_;
				std::string resourceGroupId_;
				std::string instanceChargeType_;
				long createTime_;
				CrossDomainBandwidthPackage crossDomainBandwidthPackage_;
				IpSetConfig ipSetConfig_;
				std::string secondDnsName_;
				std::string name_;
				std::string crossBorderMode_;
				std::string bandwidthBillingType_;
				BasicBandwidthPackage basicBandwidthPackage_;
				std::string state_;
				long expiredTime_;
				std::string cenId_;
				std::string crossPrivateState_;
				std::string regionId_;
				std::string spec_;
				std::string acceleratorId_;
				std::vector<TagsItem> tags_;
				bool crossBorderStatus_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GA_MODEL_DESCRIBEACCELERATORRESULT_H_