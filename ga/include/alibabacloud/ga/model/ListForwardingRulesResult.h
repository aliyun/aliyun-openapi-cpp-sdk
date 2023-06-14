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

#ifndef ALIBABACLOUD_GA_MODEL_LISTFORWARDINGRULESRESULT_H_
#define ALIBABACLOUD_GA_MODEL_LISTFORWARDINGRULESRESULT_H_

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
			class ALIBABACLOUD_GA_EXPORT ListForwardingRulesResult : public ServiceResult
			{
			public:
				struct ForwardingRulesItem
				{
					struct RuleConditionsItem
					{
						struct PathConfig
						{
							std::vector<std::string> values;
						};
						struct HostConfig
						{
							std::vector<std::string> values1;
						};
						PathConfig pathConfig;
						HostConfig hostConfig;
						std::string ruleConditionType;
						std::string ruleConditionValue;
					};
					struct RuleActionsItem
					{
						struct ForwardGroupConfig
						{
							struct ServerGroupTuplesItem
							{
								std::string endpointGroupId;
							};
							std::vector<ServerGroupTuplesItem> serverGroupTuples;
						};
						int order;
						std::string ruleActionType;
						std::string ruleActionValue;
						ForwardGroupConfig forwardGroupConfig;
					};
					std::vector<ForwardingRulesItem::RuleActionsItem> ruleActions;
					int priority;
					std::string forwardingRuleName;
					std::vector<ForwardingRulesItem::RuleConditionsItem> ruleConditions;
					std::string forwardingRuleId;
					std::string forwardingRuleDirection;
					std::string forwardingRuleStatus;
					std::string listenerId;
				};


				ListForwardingRulesResult();
				explicit ListForwardingRulesResult(const std::string &payload);
				~ListForwardingRulesResult();
				int getTotalCount()const;
				std::string getNextToken()const;
				int getMaxResults()const;
				std::vector<ForwardingRulesItem> getForwardingRules()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string nextToken_;
				int maxResults_;
				std::vector<ForwardingRulesItem> forwardingRules_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GA_MODEL_LISTFORWARDINGRULESRESULT_H_