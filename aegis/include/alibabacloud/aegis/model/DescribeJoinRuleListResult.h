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

#ifndef ALIBABACLOUD_AEGIS_MODEL_DESCRIBEJOINRULELISTRESULT_H_
#define ALIBABACLOUD_AEGIS_MODEL_DESCRIBEJOINRULELISTRESULT_H_

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
			class ALIBABACLOUD_AEGIS_EXPORT DescribeJoinRuleListResult : public ServiceResult
			{
			public:
				struct PageInfo
				{
					int totalCount;
					int pageSize;
					int currentPage;
					int count;
				};
				struct JoinRuleListArr
				{
					bool needGroup;
					std::string description;
					std::string statisticsRules;
					std::string actions;
					int ruleId;
					int timeWindow;
					std::string statusCode;
					std::string warnLevel;
					int dataSourceId1;
					std::string expression1;
					int dataSourceId2;
					std::string expression2;
					std::string ruleName;
					std::string joinRelation;
				};


				DescribeJoinRuleListResult();
				explicit DescribeJoinRuleListResult(const std::string &payload);
				~DescribeJoinRuleListResult();
				PageInfo getPageInfo()const;
				std::vector<JoinRuleListArr> getJoinRuleList()const;

			protected:
				void parse(const std::string &payload);
			private:
				PageInfo pageInfo_;
				std::vector<JoinRuleListArr> joinRuleList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_DESCRIBEJOINRULELISTRESULT_H_