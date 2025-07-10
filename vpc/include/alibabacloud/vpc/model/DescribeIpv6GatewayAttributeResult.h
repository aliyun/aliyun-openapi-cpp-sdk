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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEIPV6GATEWAYATTRIBUTERESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEIPV6GATEWAYATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT DescribeIpv6GatewayAttributeResult : public ServiceResult
			{
			public:
				struct Tag
				{
					std::string value;
					std::string key;
				};


				DescribeIpv6GatewayAttributeResult();
				explicit DescribeIpv6GatewayAttributeResult(const std::string &payload);
				~DescribeIpv6GatewayAttributeResult();
				std::string getStatus()const;
				std::string getGatewayRouteTableId()const;
				std::string getDescription()const;
				std::string getResourceGroupId()const;
				std::string getInstanceChargeType()const;
				std::string getIpv6GatewayId()const;
				std::string getBusinessStatus()const;
				std::string getName()const;
				std::string getVpcId()const;
				long getOwnerId()const;
				std::string getExpiredTime()const;
				std::string getCreationTime()const;
				std::string getRegionId()const;
				std::string getSpec()const;
				std::vector<Tag> getTags()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string gatewayRouteTableId_;
				std::string description_;
				std::string resourceGroupId_;
				std::string instanceChargeType_;
				std::string ipv6GatewayId_;
				std::string businessStatus_;
				std::string name_;
				std::string vpcId_;
				long ownerId_;
				std::string expiredTime_;
				std::string creationTime_;
				std::string regionId_;
				std::string spec_;
				std::vector<Tag> tags_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEIPV6GATEWAYATTRIBUTERESULT_H_