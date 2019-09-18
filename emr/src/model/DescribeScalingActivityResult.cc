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

#include <alibabacloud/emr/model/DescribeScalingActivityResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeScalingActivityResult::DescribeScalingActivityResult() :
	ServiceResult()
{}

DescribeScalingActivityResult::DescribeScalingActivityResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScalingActivityResult::~DescribeScalingActivityResult()
{}

void DescribeScalingActivityResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["BizId"].isNull())
		bizId_ = value["BizId"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = std::stol(value["StartTime"].asString());
	if(!value["EndTime"].isNull())
		endTime_ = std::stol(value["EndTime"].asString());
	if(!value["InstanceIds"].isNull())
		instanceIds_ = value["InstanceIds"].asString();
	if(!value["TotalCapacity"].isNull())
		totalCapacity_ = std::stoi(value["TotalCapacity"].asString());
	if(!value["Cause"].isNull())
		cause_ = value["Cause"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Transition"].isNull())
		transition_ = value["Transition"].asString();
	if(!value["ScalingRuleId"].isNull())
		scalingRuleId_ = value["ScalingRuleId"].asString();
	if(!value["ExpectNum"].isNull())
		expectNum_ = std::stoi(value["ExpectNum"].asString());

}

std::string DescribeScalingActivityResult::getStatus()const
{
	return status_;
}

std::string DescribeScalingActivityResult::getDescription()const
{
	return description_;
}

long DescribeScalingActivityResult::getEndTime()const
{
	return endTime_;
}

int DescribeScalingActivityResult::getExpectNum()const
{
	return expectNum_;
}

std::string DescribeScalingActivityResult::getCause()const
{
	return cause_;
}

long DescribeScalingActivityResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeScalingActivityResult::getTransition()const
{
	return transition_;
}

std::string DescribeScalingActivityResult::getScalingRuleId()const
{
	return scalingRuleId_;
}

int DescribeScalingActivityResult::getTotalCapacity()const
{
	return totalCapacity_;
}

std::string DescribeScalingActivityResult::getInstanceIds()const
{
	return instanceIds_;
}

std::string DescribeScalingActivityResult::getBizId()const
{
	return bizId_;
}

