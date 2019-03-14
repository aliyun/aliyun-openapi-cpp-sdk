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

#include <alibabacloud/emr/model/DescribeScalingTaskGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeScalingTaskGroupResult::DescribeScalingTaskGroupResult() :
	ServiceResult()
{}

DescribeScalingTaskGroupResult::DescribeScalingTaskGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScalingTaskGroupResult::~DescribeScalingTaskGroupResult()
{}

void DescribeScalingTaskGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto scalingConfigNode = value["ScalingConfig"];
	if(!scalingConfigNode["PayType"].isNull())
		scalingConfig_.payType = scalingConfigNode["PayType"].asString();
	if(!scalingConfigNode["DataDiskCategory"].isNull())
		scalingConfig_.dataDiskCategory = scalingConfigNode["DataDiskCategory"].asString();
	if(!scalingConfigNode["DataDiskSize"].isNull())
		scalingConfig_.dataDiskSize = std::stoi(scalingConfigNode["DataDiskSize"].asString());
	if(!scalingConfigNode["DataDiskCount"].isNull())
		scalingConfig_.dataDiskCount = std::stoi(scalingConfigNode["DataDiskCount"].asString());
	if(!scalingConfigNode["SysDiskCategory"].isNull())
		scalingConfig_.sysDiskCategory = scalingConfigNode["SysDiskCategory"].asString();
	if(!scalingConfigNode["SysDiskSize"].isNull())
		scalingConfig_.sysDiskSize = std::stoi(scalingConfigNode["SysDiskSize"].asString());
	if(!scalingConfigNode["CpuCount"].isNull())
		scalingConfig_.cpuCount = std::stoi(scalingConfigNode["CpuCount"].asString());
	if(!scalingConfigNode["MemSize"].isNull())
		scalingConfig_.memSize = std::stoi(scalingConfigNode["MemSize"].asString());
	if(!scalingConfigNode["SpotStrategy"].isNull())
		scalingConfig_.spotStrategy = scalingConfigNode["SpotStrategy"].asString();
	auto allSpotPriceLimits = value["SpotPriceLimits"]["SpotPriceLimit"];
	for (auto value : allSpotPriceLimits)
	{
		ScalingConfig::SpotPriceLimit spotPriceLimitObject;
		if(!value["InstanceType"].isNull())
			spotPriceLimitObject.instanceType = value["InstanceType"].asString();
		if(!value["PriceLimit"].isNull())
			spotPriceLimitObject.priceLimit = std::stof(value["PriceLimit"].asString());
		scalingConfig_.spotPriceLimits.push_back(spotPriceLimitObject);
	}
		auto allInstanceTypeList = scalingConfigNode["InstanceTypeList"]["InstanceType"];
		for (auto value : allInstanceTypeList)
			scalingConfig_.instanceTypeList.push_back(value.asString());
	if(!value["ScalingGroupId"].isNull())
		scalingGroupId_ = value["ScalingGroupId"].asString();
	if(!value["HostGroupId"].isNull())
		hostGroupId_ = value["HostGroupId"].asString();
	if(!value["MinSize"].isNull())
		minSize_ = std::stoi(value["MinSize"].asString());
	if(!value["MaxSize"].isNull())
		maxSize_ = std::stoi(value["MaxSize"].asString());
	if(!value["DefaultCooldown"].isNull())
		defaultCooldown_ = std::stoi(value["DefaultCooldown"].asString());
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["ActiveRuleCategory"].isNull())
		activeRuleCategory_ = value["ActiveRuleCategory"].asString();

}

std::string DescribeScalingTaskGroupResult::getStatus()const
{
	return status_;
}

int DescribeScalingTaskGroupResult::getMinSize()const
{
	return minSize_;
}

int DescribeScalingTaskGroupResult::getDefaultCooldown()const
{
	return defaultCooldown_;
}

DescribeScalingTaskGroupResult::ScalingConfig DescribeScalingTaskGroupResult::getScalingConfig()const
{
	return scalingConfig_;
}

std::string DescribeScalingTaskGroupResult::getHostGroupId()const
{
	return hostGroupId_;
}

std::string DescribeScalingTaskGroupResult::getActiveRuleCategory()const
{
	return activeRuleCategory_;
}

std::string DescribeScalingTaskGroupResult::getScalingGroupId()const
{
	return scalingGroupId_;
}

int DescribeScalingTaskGroupResult::getMaxSize()const
{
	return maxSize_;
}

