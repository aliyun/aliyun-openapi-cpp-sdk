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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTAUTOSCALINGRULESRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTAUTOSCALINGRULESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT ListAutoScalingRulesResult : public ServiceResult
			{
			public:
				struct ScalingRule
				{
					struct ByTimeScalingRuleSpec
					{
						long launchTime;
						long endTime;
						std::string recurrenceType;
						std::string recurrenceValue;
					};
					struct ByLoadScalingRuleSpec
					{
						std::string metricName;
						std::string comparisonOperator;
						int evaluationCount;
						std::string statistics;
						int timeWindow;
						double threshold;
					};
					int coolDownInterval;
					ByTimeScalingRuleSpec byTimeScalingRuleSpec;
					std::string scalingActivityType;
					std::string scalingRuleName;
					std::string scalingPolicyId;
					int adjustmentValue;
					std::string scalingRuleState;
					std::string clusterId;
					std::string nodeGroupId;
					std::string scalingRuleId;
					ByLoadScalingRuleSpec byLoadScalingRuleSpec;
					std::string scalingRuleType;
				};


				ListAutoScalingRulesResult();
				explicit ListAutoScalingRulesResult(const std::string &payload);
				~ListAutoScalingRulesResult();
				std::vector<ScalingRule> getScalingRules()const;
				int getTotalCount()const;
				std::string getNextToken()const;
				int getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ScalingRule> scalingRules_;
				int totalCount_;
				std::string nextToken_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTAUTOSCALINGRULESRESULT_H_