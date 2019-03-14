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

#ifndef ALIBABACLOUD_EMR_MODEL_CREATESCALINGTASKGROUPREQUEST_H_
#define ALIBABACLOUD_EMR_MODEL_CREATESCALINGTASKGROUPREQUEST_H_

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
			class ALIBABACLOUD_EMR_EXPORT CreateScalingTaskGroupRequest : public RpcServiceRequest
			{
				struct SpotPriceLimits
				{
					std::string instanceType;
					float priceLimit;
				};
				struct ScalingRule
				{
					std::string launchTime;
					std::string ruleCategory;
					int adjustmentValue;
					RepeatList schedulerTrigger;
					std::string adjustmentType;
					int cooldown;
					std::string ruleName;
					int launchExpirationTime;
					std::string recurrenceValue;
					std::string recurrenceEndTime;
					RepeatList cloudWatchTrigger;
					std::string recurrenceType;
				};

			public:
				CreateScalingTaskGroupRequest();
				~CreateScalingTaskGroupRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getDataDiskCategory()const;
				void setDataDiskCategory(const std::string& dataDiskCategory);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				int getMinSize()const;
				void setMinSize(int minSize);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getSpotStrategy()const;
				void setSpotStrategy(const std::string& spotStrategy);
				int getDataDiskSize()const;
				void setDataDiskSize(int dataDiskSize);
				std::vector<SpotPriceLimits> getSpotPriceLimits()const;
				void setSpotPriceLimits(const std::vector<SpotPriceLimits>& spotPriceLimits);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::vector<ScalingRule> getScalingRule()const;
				void setScalingRule(const std::vector<ScalingRule>& scalingRule);
				std::string getActiveRuleCategory()const;
				void setActiveRuleCategory(const std::string& activeRuleCategory);
				int getMaxSize()const;
				void setMaxSize(int maxSize);
				int getDataDiskCount()const;
				void setDataDiskCount(int dataDiskCount);
				int getDefaultCooldown()const;
				void setDefaultCooldown(int defaultCooldown);
				std::string getPayType()const;
				void setPayType(const std::string& payType);
				std::vector<std::string> getInstanceTypeList()const;
				void setInstanceTypeList(const std::vector<std::string>& instanceTypeList);

            private:
				long resourceOwnerId_;
				std::string dataDiskCategory_;
				std::string clusterId_;
				int minSize_;
				std::string accessKeyId_;
				std::string spotStrategy_;
				int dataDiskSize_;
				std::vector<SpotPriceLimits> spotPriceLimits_;
				std::string regionId_;
				std::vector<ScalingRule> scalingRule_;
				std::string activeRuleCategory_;
				int maxSize_;
				int dataDiskCount_;
				int defaultCooldown_;
				std::string payType_;
				std::vector<std::string> instanceTypeList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_CREATESCALINGTASKGROUPREQUEST_H_