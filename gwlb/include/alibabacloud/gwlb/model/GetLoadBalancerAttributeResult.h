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

#ifndef ALIBABACLOUD_GWLB_MODEL_GETLOADBALANCERATTRIBUTERESULT_H_
#define ALIBABACLOUD_GWLB_MODEL_GETLOADBALANCERATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/gwlb/GwlbExport.h>

namespace AlibabaCloud
{
	namespace Gwlb
	{
		namespace Model
		{
			class ALIBABACLOUD_GWLB_EXPORT GetLoadBalancerAttributeResult : public ServiceResult
			{
			public:
				struct TagModel
				{
					std::string value;
					std::string key;
				};
				struct ZoneEniModel
				{
					struct EniModels
					{
						std::string eniId;
						std::string privateIpv4Address;
					};
					std::string zoneId;
					std::string vSwitchId;
					std::vector<ZoneEniModel::EniModels> loadBalancerAddresses;
				};


				GetLoadBalancerAttributeResult();
				explicit GetLoadBalancerAttributeResult(const std::string &payload);
				~GetLoadBalancerAttributeResult();
				std::string getLoadBalancerName()const;
				std::string getAddressIpVersion()const;
				std::string getResourceGroupId()const;
				std::string getVpcId()const;
				std::string getCreateTime()const;
				std::string getLoadBalancerId()const;
				std::vector<ZoneEniModel> getZoneMappings()const;
				std::string getLoadBalancerBusinessStatus()const;
				std::string getLoadBalancerStatus()const;
				std::vector<TagModel> getTags()const;
				bool getCrossZoneEnabled()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string loadBalancerName_;
				std::string addressIpVersion_;
				std::string resourceGroupId_;
				std::string vpcId_;
				std::string createTime_;
				std::string loadBalancerId_;
				std::vector<ZoneEniModel> zoneMappings_;
				std::string loadBalancerBusinessStatus_;
				std::string loadBalancerStatus_;
				std::vector<TagModel> tags_;
				bool crossZoneEnabled_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GWLB_MODEL_GETLOADBALANCERATTRIBUTERESULT_H_