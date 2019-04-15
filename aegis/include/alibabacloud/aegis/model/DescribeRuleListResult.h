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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBERULELISTRESULT_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBERULELISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT DescribeRuleListResult : public ServiceResult
			{
			public:
				struct PageInfo
				{
					int totalCount;
					int pageSize;
					int currentPage;
				};
				struct RulesItem
				{
					struct RuleGroup
					{
						std::string groupName;
						long modified;
						std::string description;
						long create;
						int id;
						int ruleNum;
						int aliUid;
					};
					bool needGroup;
					long modified;
					std::string description;
					std::string statisticsRules;
					std::string actions;
					std::string statusCode;
					std::string warnLevel;
					std::vector<RulesItem::RuleGroup> ruleGroups;
					long create;
					int id;
					std::string expressions;
					std::string ruleName;
					int dataSourceId;
				};


				DescribeRuleListResult();
				explicit DescribeRuleListResult(const std::string &payload);
				~DescribeRuleListResult();
				PageInfo getPageInfo()const;
				std::vector<RulesItem> getRules()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				PageInfo pageInfo_;
				std::vector<RulesItem> rules_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBERULELISTRESULT_H_