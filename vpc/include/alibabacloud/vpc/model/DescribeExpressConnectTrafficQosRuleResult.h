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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEEXPRESSCONNECTTRAFFICQOSRULERESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEEXPRESSCONNECTTRAFFICQOSRULERESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribeExpressConnectTrafficQosRuleResult : public ServiceResult
			{
			public:
				struct RuleListItem
				{
					std::string status;
					std::string ruleDescription;
					int matchDscp;
					int priority;
					std::string ruleId;
					std::string queueId;
					std::string srcIPv6Cidr;
					std::string dstPortRange;
					int remarkingDscp;
					std::string srcCidr;
					std::string qosId;
					std::string protocol;
					std::string dstIPv6Cidr;
					std::string srcPortRange;
					std::string dstCidr;
					std::string ruleName;
				};


				DescribeExpressConnectTrafficQosRuleResult();
				explicit DescribeExpressConnectTrafficQosRuleResult(const std::string &payload);
				~DescribeExpressConnectTrafficQosRuleResult();
				std::vector<RuleListItem> getRuleList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<RuleListItem> ruleList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEEXPRESSCONNECTTRAFFICQOSRULERESULT_H_