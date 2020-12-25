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

#include <alibabacloud/emr/model/DescribeScalingCommonConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeScalingCommonConfigResult::DescribeScalingCommonConfigResult() :
	ServiceResult()
{}

DescribeScalingCommonConfigResult::DescribeScalingCommonConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScalingCommonConfigResult::~DescribeScalingCommonConfigResult()
{}

void DescribeScalingCommonConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["AutoScalingHookHeartbeatDefaultTime"].isNull())
		autoScalingHookHeartbeatDefaultTime_ = std::stoi(value["AutoScalingHookHeartbeatDefaultTime"].asString());
	if(!value["AutoScalingCoolDownTime"].isNull())
		autoScalingCoolDownTime_ = std::stoi(value["AutoScalingCoolDownTime"].asString());
	if(!value["AutoScalingMNSScalingThreadSleepTime"].isNull())
		autoScalingMNSScalingThreadSleepTime_ = std::stol(value["AutoScalingMNSScalingThreadSleepTime"].asString());
	if(!value["AutoScalingGroupMinSizeLimit"].isNull())
		autoScalingGroupMinSizeLimit_ = std::stoi(value["AutoScalingGroupMinSizeLimit"].asString());
	if(!value["AutoScalingGroupMaxSizeLimit"].isNull())
		autoScalingGroupMaxSizeLimit_ = std::stoi(value["AutoScalingGroupMaxSizeLimit"].asString());
	if(!value["AutoScalingRuleMinDelayLimit"].isNull())
		autoScalingRuleMinDelayLimit_ = std::stoi(value["AutoScalingRuleMinDelayLimit"].asString());
	if(!value["AutoScalingRuleAlarmDelayLimit"].isNull())
		autoScalingRuleAlarmDelayLimit_ = std::stoi(value["AutoScalingRuleAlarmDelayLimit"].asString());
	if(!value["AutoScalingRuleAlarmSilentTime"].isNull())
		autoScalingRuleAlarmSilentTime_ = std::stoi(value["AutoScalingRuleAlarmSilentTime"].asString());
	if(!value["AutoScalingConfigSystemDiskSize"].isNull())
		autoScalingConfigSystemDiskSize_ = std::stoi(value["AutoScalingConfigSystemDiskSize"].asString());
	if(!value["AutoScalingConfigDecommissionQueryInterval"].isNull())
		autoScalingConfigDecommissionQueryInterval_ = std::stol(value["AutoScalingConfigDecommissionQueryInterval"].asString());

}

int DescribeScalingCommonConfigResult::getAutoScalingHookHeartbeatDefaultTime()const
{
	return autoScalingHookHeartbeatDefaultTime_;
}

int DescribeScalingCommonConfigResult::getAutoScalingRuleAlarmDelayLimit()const
{
	return autoScalingRuleAlarmDelayLimit_;
}

int DescribeScalingCommonConfigResult::getAutoScalingGroupMaxSizeLimit()const
{
	return autoScalingGroupMaxSizeLimit_;
}

long DescribeScalingCommonConfigResult::getAutoScalingMNSScalingThreadSleepTime()const
{
	return autoScalingMNSScalingThreadSleepTime_;
}

int DescribeScalingCommonConfigResult::getAutoScalingCoolDownTime()const
{
	return autoScalingCoolDownTime_;
}

int DescribeScalingCommonConfigResult::getAutoScalingRuleMinDelayLimit()const
{
	return autoScalingRuleMinDelayLimit_;
}

long DescribeScalingCommonConfigResult::getAutoScalingConfigDecommissionQueryInterval()const
{
	return autoScalingConfigDecommissionQueryInterval_;
}

int DescribeScalingCommonConfigResult::getAutoScalingRuleAlarmSilentTime()const
{
	return autoScalingRuleAlarmSilentTime_;
}

int DescribeScalingCommonConfigResult::getAutoScalingGroupMinSizeLimit()const
{
	return autoScalingGroupMinSizeLimit_;
}

int DescribeScalingCommonConfigResult::getAutoScalingConfigSystemDiskSize()const
{
	return autoScalingConfigSystemDiskSize_;
}

