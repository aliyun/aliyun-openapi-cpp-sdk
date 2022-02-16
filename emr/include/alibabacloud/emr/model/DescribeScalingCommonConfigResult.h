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

#ifndef ALIBABACLOUD_EMR_MODEL_DESCRIBESCALINGCOMMONCONFIGRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_DESCRIBESCALINGCOMMONCONFIGRESULT_H_

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
			class ALIBABACLOUD_EMR_EXPORT DescribeScalingCommonConfigResult : public ServiceResult
			{
			public:


				DescribeScalingCommonConfigResult();
				explicit DescribeScalingCommonConfigResult(const std::string &payload);
				~DescribeScalingCommonConfigResult();
				int getAutoScalingHookHeartbeatDefaultTime()const;
				int getAutoScalingRuleAlarmDelayLimit()const;
				int getAutoScalingGroupMaxSizeLimit()const;
				long getAutoScalingMNSScalingThreadSleepTime()const;
				int getAutoScalingCoolDownTime()const;
				int getAutoScalingRuleMinDelayLimit()const;
				long getAutoScalingConfigDecommissionQueryInterval()const;
				int getAutoScalingRuleAlarmSilentTime()const;
				int getAutoScalingGroupMinSizeLimit()const;
				int getAutoScalingConfigSystemDiskSize()const;

			protected:
				void parse(const std::string &payload);
			private:
				int autoScalingHookHeartbeatDefaultTime_;
				int autoScalingRuleAlarmDelayLimit_;
				int autoScalingGroupMaxSizeLimit_;
				long autoScalingMNSScalingThreadSleepTime_;
				int autoScalingCoolDownTime_;
				int autoScalingRuleMinDelayLimit_;
				long autoScalingConfigDecommissionQueryInterval_;
				int autoScalingRuleAlarmSilentTime_;
				int autoScalingGroupMinSizeLimit_;
				int autoScalingConfigSystemDiskSize_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_DESCRIBESCALINGCOMMONCONFIGRESULT_H_