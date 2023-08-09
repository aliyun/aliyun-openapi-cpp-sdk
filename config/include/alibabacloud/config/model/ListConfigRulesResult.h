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

#ifndef ALIBABACLOUD_CONFIG_MODEL_LISTCONFIGRULESRESULT_H_
#define ALIBABACLOUD_CONFIG_MODEL_LISTCONFIGRULESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/config/ConfigExport.h>

namespace AlibabaCloud
{
	namespace Config
	{
		namespace Model
		{
			class ALIBABACLOUD_CONFIG_EXPORT ListConfigRulesResult : public ServiceResult
			{
			public:
				struct ConfigRules
				{
					struct ConfigRule
					{
						struct Compliance
						{
							std::string complianceType;
							int count;
						};
						struct CreateBy
						{
							std::string compliancePackId;
							std::string compliancePackName;
						};
						struct Tag
						{
							std::string value;
							std::string key;
						};
						long accountId;
						std::string description;
						Compliance compliance;
						std::string sourceOwner;
						CreateBy createBy;
						std::string sourceIdentifier;
						std::string configRuleState;
						std::string configRuleId;
						std::string configRuleArn;
						std::string automationType;
						std::string configRuleName;
						int riskLevel;
						std::string resourceTypesScope;
						std::vector<ConfigRule::Tag> tags;
						std::string serviceChannel;
					};
					long totalCount;
					int pageSize;
					int pageNumber;
					std::vector<ConfigRule> configRuleList;
				};


				ListConfigRulesResult();
				explicit ListConfigRulesResult(const std::string &payload);
				~ListConfigRulesResult();
				ConfigRules getConfigRules()const;

			protected:
				void parse(const std::string &payload);
			private:
				ConfigRules configRules_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CONFIG_MODEL_LISTCONFIGRULESRESULT_H_