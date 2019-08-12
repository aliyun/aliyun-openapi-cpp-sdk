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

#include <alibabacloud/ehpc/model/DescribeAutoScaleConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

DescribeAutoScaleConfigResult::DescribeAutoScaleConfigResult() :
	ServiceResult()
{}

DescribeAutoScaleConfigResult::DescribeAutoScaleConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAutoScaleConfigResult::~DescribeAutoScaleConfigResult()
{}

void DescribeAutoScaleConfigResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["Uid"].isNull())
		uid_ = value["Uid"].asString();
	if(!value["ClusterId"].isNull())
		clusterId_ = value["ClusterId"].asString();
	if(!value["ClusterType"].isNull())
		clusterType_ = value["ClusterType"].asString();
	if(!value["EnableAutoGrow"].isNull())
		enableAutoGrow_ = value["EnableAutoGrow"].asString() == "true";
	if(!value["EnableAutoShrink"].isNull())
		enableAutoShrink_ = value["EnableAutoShrink"].asString() == "true";
	if(!value["GrowIntervalInMinutes"].isNull())
		growIntervalInMinutes_ = std::stoi(value["GrowIntervalInMinutes"].asString());
	if(!value["ShrinkIntervalInMinutes"].isNull())
		shrinkIntervalInMinutes_ = std::stoi(value["ShrinkIntervalInMinutes"].asString());
	if(!value["ShrinkIdleTimes"].isNull())
		shrinkIdleTimes_ = std::stoi(value["ShrinkIdleTimes"].asString());
	if(!value["GrowTimeoutInMinutes"].isNull())
		growTimeoutInMinutes_ = std::stoi(value["GrowTimeoutInMinutes"].asString());
	if(!value["ExtraNodesGrowRatio"].isNull())
		extraNodesGrowRatio_ = std::stoi(value["ExtraNodesGrowRatio"].asString());
	if(!value["GrowRatio"].isNull())
		growRatio_ = std::stoi(value["GrowRatio"].asString());
	if(!value["MaxNodesInCluster"].isNull())
		maxNodesInCluster_ = std::stoi(value["MaxNodesInCluster"].asString());
	if(!value["ExcludeNodes"].isNull())
		excludeNodes_ = value["ExcludeNodes"].asString();
	if(!value["SpotStrategy"].isNull())
		spotStrategy_ = value["SpotStrategy"].asString();
	if(!value["SpotPriceLimit"].isNull())
		spotPriceLimit_ = value["SpotPriceLimit"].asString();

}

int DescribeAutoScaleConfigResult::getExtraNodesGrowRatio()const
{
	return extraNodesGrowRatio_;
}

bool DescribeAutoScaleConfigResult::getEnableAutoGrow()const
{
	return enableAutoGrow_;
}

std::string DescribeAutoScaleConfigResult::getClusterId()const
{
	return clusterId_;
}

int DescribeAutoScaleConfigResult::getShrinkIdleTimes()const
{
	return shrinkIdleTimes_;
}

int DescribeAutoScaleConfigResult::getMaxNodesInCluster()const
{
	return maxNodesInCluster_;
}

std::string DescribeAutoScaleConfigResult::getClusterType()const
{
	return clusterType_;
}

bool DescribeAutoScaleConfigResult::getEnableAutoShrink()const
{
	return enableAutoShrink_;
}

int DescribeAutoScaleConfigResult::getGrowRatio()const
{
	return growRatio_;
}

int DescribeAutoScaleConfigResult::getGrowIntervalInMinutes()const
{
	return growIntervalInMinutes_;
}

std::string DescribeAutoScaleConfigResult::getUid()const
{
	return uid_;
}

int DescribeAutoScaleConfigResult::getGrowTimeoutInMinutes()const
{
	return growTimeoutInMinutes_;
}

int DescribeAutoScaleConfigResult::getShrinkIntervalInMinutes()const
{
	return shrinkIntervalInMinutes_;
}

std::string DescribeAutoScaleConfigResult::getSpotPriceLimit()const
{
	return spotPriceLimit_;
}

std::string DescribeAutoScaleConfigResult::getExcludeNodes()const
{
	return excludeNodes_;
}

std::string DescribeAutoScaleConfigResult::getSpotStrategy()const
{
	return spotStrategy_;
}

