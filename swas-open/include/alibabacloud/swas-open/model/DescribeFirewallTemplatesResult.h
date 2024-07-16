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

#ifndef ALIBABACLOUD_SWAS_OPEN_MODEL_DESCRIBEFIREWALLTEMPLATESRESULT_H_
#define ALIBABACLOUD_SWAS_OPEN_MODEL_DESCRIBEFIREWALLTEMPLATESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/swas-open/SWAS_OPENExport.h>

namespace AlibabaCloud
{
	namespace SWAS_OPEN
	{
		namespace Model
		{
			class ALIBABACLOUD_SWAS_OPEN_EXPORT DescribeFirewallTemplatesResult : public ServiceResult
			{
			public:
				struct FirewallTemplate
				{
					struct FirewallTemplateRule
					{
						std::string firewallTemplateRuleId;
						std::string port;
						std::string sourceCidrIp;
						std::string ruleProtocol;
						std::string remark;
					};
					std::vector<FirewallTemplate::FirewallTemplateRule> firewallTemplateRules;
					std::string description;
					std::string createTime;
					std::string creationTime;
					std::string firewallTemplateId;
					std::string name;
				};


				DescribeFirewallTemplatesResult();
				explicit DescribeFirewallTemplatesResult(const std::string &payload);
				~DescribeFirewallTemplatesResult();
				int getTotalCount()const;
				int getPageSize()const;
				std::vector<FirewallTemplate> getFirewallTemplates()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				std::vector<FirewallTemplate> firewallTemplates_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SWAS_OPEN_MODEL_DESCRIBEFIREWALLTEMPLATESRESULT_H_