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

#ifndef ALIBABACLOUD_RESOURCEMANAGER_MODEL_LISTAUTOGROUPINGRULESRESULT_H_
#define ALIBABACLOUD_RESOURCEMANAGER_MODEL_LISTAUTOGROUPINGRULESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/resourcemanager/ResourceManagerExport.h>

namespace AlibabaCloud
{
	namespace ResourceManager
	{
		namespace Model
		{
			class ALIBABACLOUD_RESOURCEMANAGER_EXPORT ListAutoGroupingRulesResult : public ServiceResult
			{
			public:
				struct Rule
				{
					struct RuleContent
					{
						std::string autoGroupingScopeCondition;
						std::string ruleContentId;
						std::string targetResourceGroupCondition;
					};
					std::string modifyTime;
					std::string excludeResourceGroupIdsScope;
					std::string excludeResourceIdsScope;
					std::string excludeResourceTypesScope;
					std::string resourceIdsScope;
					std::vector<Rule::RuleContent> ruleContents;
					std::string createTime;
					std::string ruleId;
					std::string ruleType;
					std::string excludeRegionIdsScope;
					std::string regionIdsScope;
					std::string resourceGroupIdsScope;
					std::string ruleDesc;
					std::string resourceTypesScope;
					std::string ruleName;
				};


				ListAutoGroupingRulesResult();
				explicit ListAutoGroupingRulesResult(const std::string &payload);
				~ListAutoGroupingRulesResult();
				std::string getNextToken()const;
				int getMaxResults()const;
				std::vector<Rule> getRules()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				int maxResults_;
				std::vector<Rule> rules_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RESOURCEMANAGER_MODEL_LISTAUTOGROUPINGRULESRESULT_H_