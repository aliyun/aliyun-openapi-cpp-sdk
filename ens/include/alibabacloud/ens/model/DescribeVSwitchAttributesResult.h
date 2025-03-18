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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBEVSWITCHATTRIBUTESRESULT_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBEVSWITCHATTRIBUTESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ens/EnsExport.h>

namespace AlibabaCloud
{
	namespace Ens
	{
		namespace Model
		{
			class ALIBABACLOUD_ENS_EXPORT DescribeVSwitchAttributesResult : public ServiceResult
			{
			public:


				DescribeVSwitchAttributesResult();
				explicit DescribeVSwitchAttributesResult(const std::string &payload);
				~DescribeVSwitchAttributesResult();
				std::string getStatus()const;
				std::string getDescription()const;
				std::string getCreatedTime()const;
				std::string getVSwitchId()const;
				long getAvailableIpAddressCount()const;
				std::vector<std::string> getLoadBalancerIds()const;
				std::string getCidrBlock()const;
				std::vector<std::string> getNetworkInterfaceIds()const;
				std::string getNetworkId()const;
				std::vector<std::string> getNatGatewayIds()const;
				std::vector<std::string> getHaVipIds()const;
				std::string getVSwitchName()const;
				std::vector<std::string> getInstanceIds()const;
				std::string getEnsRegionId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string description_;
				std::string createdTime_;
				std::string vSwitchId_;
				long availableIpAddressCount_;
				std::vector<std::string> loadBalancerIds_;
				std::string cidrBlock_;
				std::vector<std::string> networkInterfaceIds_;
				std::string networkId_;
				std::vector<std::string> natGatewayIds_;
				std::vector<std::string> haVipIds_;
				std::string vSwitchName_;
				std::vector<std::string> instanceIds_;
				std::string ensRegionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBEVSWITCHATTRIBUTESRESULT_H_