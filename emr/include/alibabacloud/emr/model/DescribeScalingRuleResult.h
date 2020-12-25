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

#ifndef ALIBABACLOUD_EMR_MODEL_DESCRIBESCALINGRULERESULT_H_
#define ALIBABACLOUD_EMR_MODEL_DESCRIBESCALINGRULERESULT_H_

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
			class ALIBABACLOUD_EMR_EXPORT DescribeScalingRuleResult : public ServiceResult
			{
			public:
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


				DescribeScalingRuleResult();
				explicit DescribeScalingRuleResult(const std::string &payload);
				~DescribeScalingRuleResult();
				std::string getStatus()const;
				long getTimeoutWithGrace()const;
				CloudWatchTrigger getCloudWatchTrigger()const;
				int getCooldown()const;
				std::string getGmtModified()const;
				std::string getAdjustmentType()const;
				std::string getGmtCreate()const;
				int getAdjustmentValue()const;
				SchedulerTrigger getSchedulerTrigger()const;
				bool getWithGrace()const;
				std::string getId()const;
				std::string getRuleName()const;
				std::string getRuleCategory()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				long timeoutWithGrace_;
				CloudWatchTrigger cloudWatchTrigger_;
				int cooldown_;
				std::string gmtModified_;
				std::string adjustmentType_;
				std::string gmtCreate_;
				int adjustmentValue_;
				SchedulerTrigger schedulerTrigger_;
				bool withGrace_;
				std::string id_;
				std::string ruleName_;
				std::string ruleCategory_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_DESCRIBESCALINGRULERESULT_H_