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
	auto allQueuesNode = value["Queues"]["QueueInfo"];
	for (auto valueQueuesQueueInfo : allQueuesNode)
	{
		QueueInfo queuesObject;
		if(!valueQueuesQueueInfo["QueueImageId"].isNull())
			queuesObject.queueImageId = valueQueuesQueueInfo["QueueImageId"].asString();
		if(!valueQueuesQueueInfo["SystemDiskCategory"].isNull())
			queuesObject.systemDiskCategory = valueQueuesQueueInfo["SystemDiskCategory"].asString();
		if(!valueQueuesQueueInfo["InstanceType"].isNull())
			queuesObject.instanceType = valueQueuesQueueInfo["InstanceType"].asString();
		if(!valueQueuesQueueInfo["HostNameSuffix"].isNull())
			queuesObject.hostNameSuffix = valueQueuesQueueInfo["HostNameSuffix"].asString();
		if(!valueQueuesQueueInfo["SpotStrategy"].isNull())
			queuesObject.spotStrategy = valueQueuesQueueInfo["SpotStrategy"].asString();
		if(!valueQueuesQueueInfo["MinNodesInQueue"].isNull())
			queuesObject.minNodesInQueue = std::stoi(valueQueuesQueueInfo["MinNodesInQueue"].asString());
		if(!valueQueuesQueueInfo["HostNamePrefix"].isNull())
			queuesObject.hostNamePrefix = valueQueuesQueueInfo["HostNamePrefix"].asString();
		if(!valueQueuesQueueInfo["SystemDiskSize"].isNull())
			queuesObject.systemDiskSize = std::stoi(valueQueuesQueueInfo["SystemDiskSize"].asString());
		if(!valueQueuesQueueInfo["MaxNodesInQueue"].isNull())
			queuesObject.maxNodesInQueue = std::stoi(valueQueuesQueueInfo["MaxNodesInQueue"].asString());
		if(!valueQueuesQueueInfo["EnableAutoShrink"].isNull())
			queuesObject.enableAutoShrink = valueQueuesQueueInfo["EnableAutoShrink"].asString() == "true";
		if(!valueQueuesQueueInfo["QueueName"].isNull())
			queuesObject.queueName = valueQueuesQueueInfo["QueueName"].asString();
		if(!valueQueuesQueueInfo["EnableAutoGrow"].isNull())
			queuesObject.enableAutoGrow = valueQueuesQueueInfo["EnableAutoGrow"].asString() == "true";
		if(!valueQueuesQueueInfo["SystemDiskLevel"].isNull())
			queuesObject.systemDiskLevel = valueQueuesQueueInfo["SystemDiskLevel"].asString();
		if(!valueQueuesQueueInfo["ResourceGroupId"].isNull())
			queuesObject.resourceGroupId = valueQueuesQueueInfo["ResourceGroupId"].asString();
		if(!valueQueuesQueueInfo["SpotPriceLimit"].isNull())
			queuesObject.spotPriceLimit = std::stof(valueQueuesQueueInfo["SpotPriceLimit"].asString());
		if(!valueQueuesQueueInfo["MaxNodesPerCycle"].isNull())
			queuesObject.maxNodesPerCycle = std::stol(valueQueuesQueueInfo["MaxNodesPerCycle"].asString());
		if(!valueQueuesQueueInfo["MinNodesPerCycle"].isNull())
			queuesObject.minNodesPerCycle = std::stol(valueQueuesQueueInfo["MinNodesPerCycle"].asString());
		if(!valueQueuesQueueInfo["AutoMinNodesPerCycle"].isNull())
			queuesObject.autoMinNodesPerCycle = valueQueuesQueueInfo["AutoMinNodesPerCycle"].asString() == "true";
		if(!valueQueuesQueueInfo["SortedByInventory"].isNull())
			queuesObject.sortedByInventory = valueQueuesQueueInfo["SortedByInventory"].asString() == "true";
		auto allInstanceTypesNode = valueQueuesQueueInfo["InstanceTypes"]["InstanceTypeInfo"];
		for (auto valueQueuesQueueInfoInstanceTypesInstanceTypeInfo : allInstanceTypesNode)
		{
			QueueInfo::InstanceTypeInfo instanceTypesObject;
			if(!valueQueuesQueueInfoInstanceTypesInstanceTypeInfo["HostNamePrefix"].isNull())
				instanceTypesObject.hostNamePrefix = valueQueuesQueueInfoInstanceTypesInstanceTypeInfo["HostNamePrefix"].asString();
			if(!valueQueuesQueueInfoInstanceTypesInstanceTypeInfo["VSwitchId"].isNull())
				instanceTypesObject.vSwitchId = valueQueuesQueueInfoInstanceTypesInstanceTypeInfo["VSwitchId"].asString();
			if(!valueQueuesQueueInfoInstanceTypesInstanceTypeInfo["ZoneId"].isNull())
				instanceTypesObject.zoneId = valueQueuesQueueInfoInstanceTypesInstanceTypeInfo["ZoneId"].asString();
			if(!valueQueuesQueueInfoInstanceTypesInstanceTypeInfo["SpotPriceLimit"].isNull())
				instanceTypesObject.spotPriceLimit = std::stof(valueQueuesQueueInfoInstanceTypesInstanceTypeInfo["SpotPriceLimit"].asString());
			if(!valueQueuesQueueInfoInstanceTypesInstanceTypeInfo["InstanceType"].isNull())
				instanceTypesObject.instanceType = valueQueuesQueueInfoInstanceTypesInstanceTypeInfo["InstanceType"].asString();
			if(!valueQueuesQueueInfoInstanceTypesInstanceTypeInfo["SpotStrategy"].isNull())
				instanceTypesObject.spotStrategy = valueQueuesQueueInfoInstanceTypesInstanceTypeInfo["SpotStrategy"].asString();
			if(!valueQueuesQueueInfoInstanceTypesInstanceTypeInfo["SpotDuration"].isNull())
				instanceTypesObject.spotDuration = std::stoi(valueQueuesQueueInfoInstanceTypesInstanceTypeInfo["SpotDuration"].asString());
			if(!valueQueuesQueueInfoInstanceTypesInstanceTypeInfo["SpotInterruptionBehavior"].isNull())
				instanceTypesObject.spotInterruptionBehavior = valueQueuesQueueInfoInstanceTypesInstanceTypeInfo["SpotInterruptionBehavior"].asString();
			queuesObject.instanceTypes.push_back(instanceTypesObject);
		}
		auto allDataDisksNode = valueQueuesQueueInfo["DataDisks"]["DataDisksInfo"];
		for (auto valueQueuesQueueInfoDataDisksDataDisksInfo : allDataDisksNode)
		{
			QueueInfo::DataDisksInfo dataDisksObject;
			if(!valueQueuesQueueInfoDataDisksDataDisksInfo["DataDiskCategory"].isNull())
				dataDisksObject.dataDiskCategory = valueQueuesQueueInfoDataDisksDataDisksInfo["DataDiskCategory"].asString();
			if(!valueQueuesQueueInfoDataDisksDataDisksInfo["DataDiskSize"].isNull())
				dataDisksObject.dataDiskSize = std::stoi(valueQueuesQueueInfoDataDisksDataDisksInfo["DataDiskSize"].asString());
			if(!valueQueuesQueueInfoDataDisksDataDisksInfo["DataDiskDeleteWithInstance"].isNull())
				dataDisksObject.dataDiskDeleteWithInstance = valueQueuesQueueInfoDataDisksDataDisksInfo["DataDiskDeleteWithInstance"].asString() == "true";
			if(!valueQueuesQueueInfoDataDisksDataDisksInfo["DataDiskPerformanceLevel"].isNull())
				dataDisksObject.dataDiskPerformanceLevel = valueQueuesQueueInfoDataDisksDataDisksInfo["DataDiskPerformanceLevel"].asString();
			if(!valueQueuesQueueInfoDataDisksDataDisksInfo["DataDiskEncrypted"].isNull())
				dataDisksObject.dataDiskEncrypted = valueQueuesQueueInfoDataDisksDataDisksInfo["DataDiskEncrypted"].asString() == "true";
			if(!valueQueuesQueueInfoDataDisksDataDisksInfo["DataDiskKMSKeyId"].isNull())
				dataDisksObject.dataDiskKMSKeyId = valueQueuesQueueInfoDataDisksDataDisksInfo["DataDiskKMSKeyId"].asString();
			queuesObject.dataDisks.push_back(dataDisksObject);
		}
		queues_.push_back(queuesObject);
	}
	if(!value["MaxNodesInCluster"].isNull())
		maxNodesInCluster_ = std::stoi(value["MaxNodesInCluster"].asString());
	if(!value["GrowTimeoutInMinutes"].isNull())
		growTimeoutInMinutes_ = std::stoi(value["GrowTimeoutInMinutes"].asString());
	if(!value["SpotStrategy"].isNull())
		spotStrategy_ = value["SpotStrategy"].asString();
	if(!value["EnableAutoShrink"].isNull())
		enableAutoShrink_ = value["EnableAutoShrink"].asString() == "true";
	if(!value["EnableAutoGrow"].isNull())
		enableAutoGrow_ = value["EnableAutoGrow"].asString() == "true";
	if(!value["ClusterType"].isNull())
		clusterType_ = value["ClusterType"].asString();
	if(!value["ExcludeNodes"].isNull())
		excludeNodes_ = value["ExcludeNodes"].asString();
	if(!value["ShrinkIntervalInMinutes"].isNull())
		shrinkIntervalInMinutes_ = std::stoi(value["ShrinkIntervalInMinutes"].asString());
	if(!value["GrowIntervalInMinutes"].isNull())
		growIntervalInMinutes_ = std::stoi(value["GrowIntervalInMinutes"].asString());
	if(!value["SpotPriceLimit"].isNull())
		spotPriceLimit_ = std::stof(value["SpotPriceLimit"].asString());
	if(!value["ExtraNodesGrowRatio"].isNull())
		extraNodesGrowRatio_ = std::stoi(value["ExtraNodesGrowRatio"].asString());
	if(!value["ShrinkIdleTimes"].isNull())
		shrinkIdleTimes_ = std::stoi(value["ShrinkIdleTimes"].asString());
	if(!value["ImageId"].isNull())
		imageId_ = value["ImageId"].asString();
	if(!value["GrowRatio"].isNull())
		growRatio_ = std::stoi(value["GrowRatio"].asString());
	if(!value["ClusterId"].isNull())
		clusterId_ = value["ClusterId"].asString();
	if(!value["Uid"].isNull())
		uid_ = value["Uid"].asString();
	if(!value["ComputeEnableHt"].isNull())
		computeEnableHt_ = value["ComputeEnableHt"].asString() == "true";
	if(!value["DnsConfig"].isNull())
		dnsConfig_ = value["DnsConfig"].asString();

}

int GetAutoScaleConfigResult::getExtraNodesGrowRatio()const
{
	return extraNodesGrowRatio_;
}

bool GetAutoScaleConfigResult::getEnableAutoGrow()const
{
	return enableAutoGrow_;
}

bool GetAutoScaleConfigResult::getComputeEnableHt()const
{
	return computeEnableHt_;
}

std::string GetAutoScaleConfigResult::getClusterId()const
{
	return clusterId_;
}

int GetAutoScaleConfigResult::getMaxNodesInCluster()const
{
	return maxNodesInCluster_;
}

int GetAutoScaleConfigResult::getShrinkIdleTimes()const
{
	return shrinkIdleTimes_;
}

bool GetAutoScaleConfigResult::getEnableAutoShrink()const
{
	return enableAutoShrink_;
}

std::string GetAutoScaleConfigResult::getClusterType()const
{
	return clusterType_;
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

std::string GetAutoScaleConfigResult::getDnsConfig()const
{
	return dnsConfig_;
}

std::string GetAutoScaleConfigResult::getImageId()const
{
	return imageId_;
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

