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

#ifndef ALIBABACLOUD_EMR_MODEL_DESCRIBESCALINGGROUPINSTANCEV2RESULT_H_
#define ALIBABACLOUD_EMR_MODEL_DESCRIBESCALINGGROUPINSTANCEV2RESULT_H_

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
			class ALIBABACLOUD_EMR_EXPORT DescribeScalingGroupInstanceV2Result : public ServiceResult
			{
			public:
				struct ScalingConfig
				{
					struct SpotPriceLimit
					{
						float priceLimit;
						std::string instanceType;
					};
					std::vector<SpotPriceLimit> spotPriceLimits;
					int dataDiskCount;
					std::string payType;
					int dataDiskSize;
					int sysDiskSize;
					std::string dataDiskCategory;
					std::string spotStrategy;
					std::string sysDiskCategory;
					std::vector<std::string> instanceTypeList;
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
					std::string essScalingRuleId;
					std::string launchTime;
					long timeoutWithGrace;
					CloudWatchTrigger cloudWatchTrigger;
					long scalingGroupId;
					int cooldown;
					std::string recurrenceType;
					int launchExpirationTime;
					std::string adjustmentType;
					int adjustmentValue;
					SchedulerTrigger schedulerTrigger;
					bool withGrace;
					std::string recurrenceValue;
					std::string recurrenceEndTime;
					std::string ruleName;
					std::string ruleCategory;
				};


				DescribeScalingGroupInstanceV2Result();
				explicit DescribeScalingGroupInstanceV2Result(const std::string &payload);
				~DescribeScalingGroupInstanceV2Result();
				int getMinSize()const;
				int getDefaultCooldown()const;
				ScalingConfig getScalingConfig()const;
				std::string getHostGroupId()const;
				std::string getActiveRuleCategory()const;
				long getTimeoutWithGrace()const;
				std::string getScalingGroupId()const;
				bool getWithGrace()const;
				std::vector<ScalingRule> getScalingRuleList()const;
				int getMaxSize()const;
				std::string getMultiAvailablePolicy()const;
				std::string getMultiAvailablePolicyParam()const;

			protected:
				void parse(const std::string &payload);
			private:
				int minSize_;
				int defaultCooldown_;
				ScalingConfig scalingConfig_;
				std::string hostGroupId_;
				std::string activeRuleCategory_;
				long timeoutWithGrace_;
				std::string scalingGroupId_;
				bool withGrace_;
				std::vector<ScalingRule> scalingRuleList_;
				int maxSize_;
				std::string multiAvailablePolicy_;
				std::string multiAvailablePolicyParam_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_DESCRIBESCALINGGROUPINSTANCEV2RESULT_H_