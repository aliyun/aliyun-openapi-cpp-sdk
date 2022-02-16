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

#ifndef ALIBABACLOUD_EMR_MODEL_GETSCALINGGROUPRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_GETSCALINGGROUPRESULT_H_

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
			class ALIBABACLOUD_EMR_EXPORT GetScalingGroupResult : public ServiceResult
			{
			public:
				struct ScalingGroup
				{
					struct ScalingGroupConfig
					{
						struct NodeOfflinePolicy
						{
							long timeoutMs;
							std::string mode;
						};
						struct MultiAvailablePolicy
						{
							struct PolicyParam
							{
								bool spotInstanceRemedy;
								int onDemandBaseCapacity;
								int onDemandPercentageAboveBaseCapacity;
								int spotInstancePools;
							};
							std::string policyType;
							PolicyParam policyParam;
						};
						struct PrivatePoolOptions
						{
							std::string matchCriteria;
							std::string id;
						};
						struct InstanceTypeWithSpotPrice
						{
							float spotPriceLimit;
							std::string instanceType;
						};
						int dataDiskCount;
						long sysDiskSize;
						std::string triggerMode;
						int scalingMinSize;
						std::string sysDiskCategory;
						std::vector<InstanceTypeWithSpotPrice> instanceTypeList;
						NodeOfflinePolicy nodeOfflinePolicy;
						PrivatePoolOptions privatePoolOptions;
						int scalingMaxSize;
						long dataDiskSize;
						std::string dataDiskCategory;
						MultiAvailablePolicy multiAvailablePolicy;
						long defaultCoolDownTime;
						std::string spotStrategy;
					};
					struct ScalingRule
					{
						struct RuleParam
						{
							std::string metricName;
							std::string comparisonOperator;
							std::string launchTime;
							std::string recurrenceType;
							int period;
							int evaluationCount;
							std::string recurrenceValue;
							std::string recurrenceEndTime;
							std::string statistics;
							int launchExpirationTime;
							int threshold;
						};
						int coolDownTime;
						int adjustmentValue;
						RuleParam ruleParam;
						std::string ruleType;
						std::string scalingConfigBizId;
						std::string ruleName;
						std::string adjustmentType;
					};
					std::vector<ScalingRule> scalingRules;
					std::string description;
					std::string configState;
					std::string clusterId;
					std::string scalingGroupId;
					ScalingGroupConfig scalingGroupConfig;
					std::string activeState;
					std::string name;
				};


				GetScalingGroupResult();
				explicit GetScalingGroupResult(const std::string &payload);
				~GetScalingGroupResult();
				ScalingGroup getScalingGroup()const;

			protected:
				void parse(const std::string &payload);
			private:
				ScalingGroup scalingGroup_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_GETSCALINGGROUPRESULT_H_