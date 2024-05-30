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

#ifndef ALIBABACLOUD_SLB_MODEL_DESCRIBERULESRESULT_H_
#define ALIBABACLOUD_SLB_MODEL_DESCRIBERULESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/slb/SlbExport.h>

namespace AlibabaCloud
{
	namespace Slb
	{
		namespace Model
		{
			class ALIBABACLOUD_SLB_EXPORT DescribeRulesResult : public ServiceResult
			{
			public:
				struct Rule
				{
					std::string cookie;
					int cookieTimeout;
					std::string vServerGroupId;
					int healthCheckInterval;
					int unhealthyThreshold;
					std::string healthCheckURI;
					std::string scheduler;
					std::string ruleId;
					std::string healthCheck;
					int healthCheckTimeout;
					std::string url;
					std::string stickySession;
					int healthCheckConnectPort;
					std::string serviceManagedMode;
					int healthyThreshold;
					std::string listenerSync;
					std::string healthCheckDomain;
					std::string stickySessionType;
					std::string domain;
					std::string healthCheckHttpCode;
					std::string ruleName;
				};


				DescribeRulesResult();
				explicit DescribeRulesResult(const std::string &payload);
				~DescribeRulesResult();
				std::vector<Rule> getRules()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Rule> rules_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_DESCRIBERULESRESULT_H_