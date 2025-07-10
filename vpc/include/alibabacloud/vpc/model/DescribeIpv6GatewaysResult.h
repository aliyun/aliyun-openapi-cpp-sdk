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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEIPV6GATEWAYSRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEIPV6GATEWAYSRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribeIpv6GatewaysResult : public ServiceResult
			{
			public:
				struct Ipv6Gateway
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string status;
					std::string description;
					std::string resourceGroupId;
					std::string instanceChargeType;
					std::string ipv6GatewayId;
					std::string businessStatus;
					std::string name;
					std::string vpcId;
					long ownerId;
					std::string expiredTime;
					std::string creationTime;
					std::string regionId;
					std::string spec;
					std::vector<Ipv6Gateway::Tag> tags;
				};


				DescribeIpv6GatewaysResult();
				explicit DescribeIpv6GatewaysResult(const std::string &payload);
				~DescribeIpv6GatewaysResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<Ipv6Gateway> getIpv6Gateways()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<Ipv6Gateway> ipv6Gateways_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEIPV6GATEWAYSRESULT_H_