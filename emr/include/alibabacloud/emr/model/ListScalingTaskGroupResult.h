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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTSCALINGTASKGROUPRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTSCALINGTASKGROUPRESULT_H_

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
			class ALIBABACLOUD_EMR_EXPORT ListScalingTaskGroupResult : public ServiceResult
			{
			public:
				struct Group
				{
					struct ScalingConfig
					{
						struct SpotPriceLimit3
						{
							float priceLimit;
							std::string instanceType;
						};
						std::vector<SpotPriceLimit3> spotPriceLimits2;
						int cpuCount;
						int memSize;
						int dataDiskCount;
						std::string payType;
						int dataDiskSize;
						int sysDiskSize;
						std::string dataDiskCategory;
						std::vector<std::string> instanceTypeList1;
						std::string sysDiskCategory;
						std::string spotStrategy;
					};
					struct SpotPriceLimit
					{
						float priceLimit;
						std::string instanceType;
					};
					struct ScalingRule
					{
						struct SchedulerTrigger
						{
							long launchTime;
							std::string recurrenceType;
							std::string recurrenceValue;
							long recurrenceEndTime;
							int launchExpirationTime;
						};
						struct CloudWatchTrigger
						{
							std::string metricName;
							std::string comparisonOperator;
							std::string metricDisplayName;
							int period;
							std::string evaluationCount;
							std::string unit;
							std::string statistics;
							std::string threshold;
						};
						std::string status;
						std::string launchTime;
						CloudWatchTrigger cloudWatchTrigger;
						int cooldown;
						std::string recurrenceType;
						int launchExpirationTime;
						std::string adjustmentType;
						int adjustmentValue;
						SchedulerTrigger schedulerTrigger;
						std::string id;
						std::string recurrenceValue;
						std::string recurrenceEndTime;
						std::string ruleName;
						std::string ruleCategory;
					};
					std::string status;
					ScalingConfig scalingConfig;
					std::string activeRuleCategory;
					std::string scalingGroupId;
					int dataDiskCount;
					std::string payType;
					int sysDiskSize;
					int maxSize;
					std::string sysDiskCategory;
					std::vector<std::string> instanceTypeList;
					int minSize;
					std::vector<Group::SpotPriceLimit> spotPriceLimits;
					int defaultCooldown;
					int cpuCount;
					std::string hostGroupId;
					int memSize;
					int dataDiskSize;
					std::string dataDiskCategory;
					std::vector<Group::ScalingRule> scalingRuleList;
					std::string spotStrategy;
				};


				ListScalingTaskGroupResult();
				explicit ListScalingTaskGroupResult(const std::string &payload);
				~ListScalingTaskGroupResult();
				std::vector<Group> getGroupList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Group> groupList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTSCALINGTASKGROUPRESULT_H_