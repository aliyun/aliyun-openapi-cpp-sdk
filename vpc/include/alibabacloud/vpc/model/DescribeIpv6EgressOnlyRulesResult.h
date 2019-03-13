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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEIPV6EGRESSONLYRULESRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEIPV6EGRESSONLYRULESRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribeIpv6EgressOnlyRulesResult : public ServiceResult
			{
			public:
				struct Ipv6EgressOnlyRule
				{
					std::string status;
					std::string ipv6EgressOnlyRuleId;
					std::string description;
					std::string instanceId;
					std::string instanceType;
					std::string name;
				};


				DescribeIpv6EgressOnlyRulesResult();
				explicit DescribeIpv6EgressOnlyRulesResult(const std::string &payload);
				~DescribeIpv6EgressOnlyRulesResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<Ipv6EgressOnlyRule> getIpv6EgressOnlyRules()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<Ipv6EgressOnlyRule> ipv6EgressOnlyRules_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEIPV6EGRESSONLYRULESRESULT_H_