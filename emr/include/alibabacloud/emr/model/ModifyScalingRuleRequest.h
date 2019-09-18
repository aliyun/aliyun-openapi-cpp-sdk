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

#ifndef ALIBABACLOUD_EMR_MODEL_MODIFYSCALINGRULEREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_MODIFYSCALINGRULEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT ModifyScalingRuleRequest : public RpcServiceRequest
			{
				struct CloudWatchTrigger
				{
					int period;
					std::string evaluationCount;
					std::string threshold;
					std::string metricName;
					std::string comparisonOperator;
					std::string statistics;
				};
				struct SchedulerTrigger
				{
					std::string launchTime;
					int launchExpirationTime;
					std::string recurrenceValue;
					std::string recurrenceEndTime;
					std::string recurrenceType;
				};

			public:
				ModifyScalingRuleRequest();
				~ModifyScalingRuleRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getRuleName()const;
				void setRuleName(const std::string& ruleName);
				std::string getScalingRuleId()const;
				void setScalingRuleId(const std::string& scalingRuleId);
				std::string getRecurrenceEndTime()const;
				void setRecurrenceEndTime(const std::string& recurrenceEndTime);
				std::vector<CloudWatchTrigger> getCloudWatchTrigger()const;
				void setCloudWatchTrigger(const std::vector<CloudWatchTrigger>& cloudWatchTrigger);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getCooldown()const;
				void setCooldown(int cooldown);
				std::string getLaunchTime()const;
				void setLaunchTime(const std::string& launchTime);
				int getAdjustmentValue()const;
				void setAdjustmentValue(int adjustmentValue);
				std::string getAdjustmentType()const;
				void setAdjustmentType(const std::string& adjustmentType);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				int getLaunchExpirationTime()const;
				void setLaunchExpirationTime(int launchExpirationTime);
				std::string getRecurrenceValue()const;
				void setRecurrenceValue(const std::string& recurrenceValue);
				std::string getHostGroupId()const;
				void setHostGroupId(const std::string& hostGroupId);
				std::vector<SchedulerTrigger> getSchedulerTrigger()const;
				void setSchedulerTrigger(const std::vector<SchedulerTrigger>& schedulerTrigger);
				std::string getRecurrenceType()const;
				void setRecurrenceType(const std::string& recurrenceType);

            private:
				long resourceOwnerId_;
				std::string ruleName_;
				std::string scalingRuleId_;
				std::string recurrenceEndTime_;
				std::vector<CloudWatchTrigger> cloudWatchTrigger_;
				std::string accessKeyId_;
				std::string regionId_;
				int cooldown_;
				std::string launchTime_;
				int adjustmentValue_;
				std::string adjustmentType_;
				std::string clusterId_;
				int launchExpirationTime_;
				std::string recurrenceValue_;
				std::string hostGroupId_;
				std::vector<SchedulerTrigger> schedulerTrigger_;
				std::string recurrenceType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_MODIFYSCALINGRULEREQUEST_H_