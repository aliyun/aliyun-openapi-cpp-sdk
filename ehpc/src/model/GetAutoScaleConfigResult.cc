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

#include <alibabacloud/ehpc/model/GetAutoScaleConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

GetAutoScaleConfigResult::GetAutoScaleConfigResult() :
	ServiceResult()
{}

GetAutoScaleConfigResult::GetAutoScaleConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAutoScaleConfigResult::~GetAutoScaleConfigResult()
{}

void GetAutoScaleConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allQueues = value["Queues"]["QueueInfo"];
	for (auto value : allQueues)
	{
		QueueInfo queuesObject;
		if(!value["QueueName"].isNull())
			queuesObject.queueName = value["QueueName"].asString();
		if(!value["InstanceType"].isNull())
			queuesObject.instanceType = value["InstanceType"].asString();
		if(!value["SpotStrategy"].isNull())
			queuesObject.spotStrategy = value["SpotStrategy"].asString();
		if(!value["SpotPriceLimit"].isNull())
			queuesObject.spotPriceLimit = std::stof(value["SpotPriceLimit"].asString());
		if(!value["EnableAutoGrow"].isNull())
			queuesObject.enableAutoGrow = value["EnableAutoGrow"].asString() == "true";
		if(!value["EnableAutoShrink"].isNull())
			queuesObject.enableAutoShrink = value["EnableAutoShrink"].asString() == "true";
		auto allInstanceTypes = value["InstanceTypes"]["InstanceTypeInfo"];
		for (auto value : allInstanceTypes)
		{
			QueueInfo::InstanceTypeInfo instanceTypesObject;
			if(!value["InstanceType"].isNull())
				instanceTypesObject.instanceType = value["InstanceType"].asString();
			if(!value["SpotStrategy"].isNull())
				instanceTypesObject.spotStrategy = value["SpotStrategy"].asString();
			if(!value["SpotPriceLimit"].isNull())
				instanceTypesObject.spotPriceLimit = std::stof(value["SpotPriceLimit"].asString());
			if(!value["ZoneId"].isNull())
				instanceTypesObject.zoneId = value["ZoneId"].asString();
			if(!value["VSwitchId"].isNull())
				instanceTypesObject.vSwitchId = value["VSwitchId"].asString();
			queuesObject.instanceTypes.push_back(instanceTypesObject);
		}
		queues_.push_back(queuesObject);
	}
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
		spotPriceLimit_ = std::stof(value["SpotPriceLimit"].asString());

}

int GetAutoScaleConfigResult::getExtraNodesGrowRatio()const
{
	return extraNodesGrowRatio_;
}

bool GetAutoScaleConfigResult::getEnableAutoGrow()const
{
	return enableAutoGrow_;
}

std::string GetAutoScaleConfigResult::getClusterId()const
{
	return clusterId_;
}

int GetAutoScaleConfigResult::getShrinkIdleTimes()const
{
	return shrinkIdleTimes_;
}

int GetAutoScaleConfigResult::getMaxNodesInCluster()const
{
	return maxNodesInCluster_;
}

std::string GetAutoScaleConfigResult::getClusterType()const
{
	return clusterType_;
}

bool GetAutoScaleConfigResult::getEnableAutoShrink()const
{
	return enableAutoShrink_;
}

int GetAutoScaleConfigResult::getGrowRatio()const
{
	return growRatio_;
}

int GetAutoScaleConfigResult::getGrowIntervalInMinutes()const
{
	return growIntervalInMinutes_;
}

std::string GetAutoScaleConfigResult::getUid()const
{
	return uid_;
}

int GetAutoScaleConfigResult::getGrowTimeoutInMinutes()const
{
	return growTimeoutInMinutes_;
}

int GetAutoScaleConfigResult::getShrinkIntervalInMinutes()const
{
	return shrinkIntervalInMinutes_;
}

float GetAutoScaleConfigResult::getSpotPriceLimit()const
{
	return spotPriceLimit_;
}

std::vector<GetAutoScaleConfigResult::QueueInfo> GetAutoScaleConfigResult::getQueues()const
{
	return queues_;
}

std::string GetAutoScaleConfigResult::getExcludeNodes()const
{
	return excludeNodes_;
}

std::string GetAutoScaleConfigResult::getSpotStrategy()const
{
	return spotStrategy_;
}

