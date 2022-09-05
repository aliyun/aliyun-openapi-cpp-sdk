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

#ifndef ALIBABACLOUD_ARMS_MODEL_DESCRIBEDISPATCHRULERESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_DESCRIBEDISPATCHRULERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/arms/ARMSExport.h>

namespace AlibabaCloud
{
	namespace ARMS
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS_EXPORT DescribeDispatchRuleResult : public ServiceResult
			{
			public:
				struct DispatchRule
				{
					struct LabelMatchExpressionGrid
					{
						struct LabelMatchExpressionGroup
						{
							struct LabelMatchExpression
							{
								std::string value;
								std::string _operator;
								std::string key;
							};
							std::vector<LabelMatchExpressionGroup::LabelMatchExpression> labelMatchExpressions;
						};
						std::vector<LabelMatchExpressionGroup> labelMatchExpressionGroups;
					};
					struct GroupRule
					{
						long groupInterval;
						std::vector<std::string> groupingFields;
						long groupWaitTime;
						long repeatInterval;
						long groupId;
					};
					struct NotifyRule
					{
						struct NotifyObject
						{
							std::string notifyType;
							std::string notifyObjectId;
							std::string name;
						};
						std::vector<std::string> notifyChannels;
						std::vector<NotifyRule::NotifyObject> notifyObjects;
					};
					bool isRecover;
					std::vector<GroupRule> groupRules;
					std::string dispatchType;
					std::string state;
					long ruleId;
					LabelMatchExpressionGrid labelMatchExpressionGrid;
					std::vector<NotifyRule> notifyRules;
					std::string name;
				};


				DescribeDispatchRuleResult();
				explicit DescribeDispatchRuleResult(const std::string &payload);
				~DescribeDispatchRuleResult();
				DispatchRule getDispatchRule()const;

			protected:
				void parse(const std::string &payload);
			private:
				DispatchRule dispatchRule_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_DESCRIBEDISPATCHRULERESULT_H_