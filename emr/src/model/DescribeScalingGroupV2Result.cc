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

#include <alibabacloud/emr/model/DescribeScalingGroupV2Result.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeScalingGroupV2Result::DescribeScalingGroupV2Result() :
	ServiceResult()
{}

DescribeScalingGroupV2Result::DescribeScalingGroupV2Result(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScalingGroupV2Result::~DescribeScalingGroupV2Result()
{}

void DescribeScalingGroupV2Result::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ScalingGroupId"].isNull())
		scalingGroupId_ = value["ScalingGroupId"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["ActiveStatus"].isNull())
		activeStatus_ = value["ActiveStatus"].asString();
	if(!value["HostGroupBizId"].isNull())
		hostGroupBizId_ = value["HostGroupBizId"].asString();
	if(!value["ScalingInMode"].isNull())
		scalingInMode_ = value["ScalingInMode"].asString();
	if(!value["ScalingMinSize"].isNull())
		scalingMinSize_ = std::stoi(value["ScalingMinSize"].asString());
	if(!value["ScalingMaxSize"].isNull())
		scalingMaxSize_ = std::stoi(value["ScalingMaxSize"].asString());
	if(!value["ConfigState"].isNull())
		configState_ = value["ConfigState"].asString();

}

std::string DescribeScalingGroupV2Result::getDescription()const
{
	return description_;
}

std::string DescribeScalingGroupV2Result::getHostGroupBizId()const
{
	return hostGroupBizId_;
}

std::string DescribeScalingGroupV2Result::getConfigState()const
{
	return configState_;
}

std::string DescribeScalingGroupV2Result::getScalingInMode()const
{
	return scalingInMode_;
}

std::string DescribeScalingGroupV2Result::getScalingGroupId()const
{
	return scalingGroupId_;
}

int DescribeScalingGroupV2Result::getScalingMaxSize()const
{
	return scalingMaxSize_;
}

int DescribeScalingGroupV2Result::getScalingMinSize()const
{
	return scalingMinSize_;
}

std::string DescribeScalingGroupV2Result::getName()const
{
	return name_;
}

std::string DescribeScalingGroupV2Result::getActiveStatus()const
{
	return activeStatus_;
}

