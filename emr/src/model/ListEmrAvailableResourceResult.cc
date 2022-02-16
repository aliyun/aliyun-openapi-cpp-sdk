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

#include <alibabacloud/emr/model/ListEmrAvailableResourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListEmrAvailableResourceResult::ListEmrAvailableResourceResult() :
	ServiceResult()
{}

ListEmrAvailableResourceResult::ListEmrAvailableResourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEmrAvailableResourceResult::~ListEmrAvailableResourceResult()
{}

void ListEmrAvailableResourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEmrZoneInfoListNode = value["EmrZoneInfoList"]["EmrZoneInfo"];
	for (auto valueEmrZoneInfoListEmrZoneInfo : allEmrZoneInfoListNode)
	{
		EmrZoneInfo emrZoneInfoListObject;
		if(!valueEmrZoneInfoListEmrZoneInfo["ZoneId"].isNull())
			emrZoneInfoListObject.zoneId = valueEmrZoneInfoListEmrZoneInfo["ZoneId"].asString();
		auto allEmrResourceInfoListNode = valueEmrZoneInfoListEmrZoneInfo["EmrResourceInfoList"]["EmrResourceInfo"];
		for (auto valueEmrZoneInfoListEmrZoneInfoEmrResourceInfoListEmrResourceInfo : allEmrResourceInfoListNode)
		{
			EmrZoneInfo::EmrResourceInfo emrResourceInfoListObject;
			if(!valueEmrZoneInfoListEmrZoneInfoEmrResourceInfoListEmrResourceInfo["Type"].isNull())
				emrResourceInfoListObject.type = valueEmrZoneInfoListEmrZoneInfoEmrResourceInfoListEmrResourceInfo["Type"].asString();
			auto allSupportedResourceListNode = valueEmrZoneInfoListEmrZoneInfoEmrResourceInfoListEmrResourceInfo["SupportedResourceList"]["SupportedResource"];
			for (auto valueEmrZoneInfoListEmrZoneInfoEmrResourceInfoListEmrResourceInfoSupportedResourceListSupportedResource : allSupportedResourceListNode)
			{
				EmrZoneInfo::EmrResourceInfo::SupportedResource supportedResourceListObject;
				if(!valueEmrZoneInfoListEmrZoneInfoEmrResourceInfoListEmrResourceInfoSupportedResourceListSupportedResource["Value"].isNull())
					supportedResourceListObject.value = valueEmrZoneInfoListEmrZoneInfoEmrResourceInfoListEmrResourceInfoSupportedResourceListSupportedResource["Value"].asString();
				if(!valueEmrZoneInfoListEmrZoneInfoEmrResourceInfoListEmrResourceInfoSupportedResourceListSupportedResource["Min"].isNull())
					supportedResourceListObject.min = std::stoi(valueEmrZoneInfoListEmrZoneInfoEmrResourceInfoListEmrResourceInfoSupportedResourceListSupportedResource["Min"].asString());
				if(!valueEmrZoneInfoListEmrZoneInfoEmrResourceInfoListEmrResourceInfoSupportedResourceListSupportedResource["Max"].isNull())
					supportedResourceListObject.max = std::stoi(valueEmrZoneInfoListEmrZoneInfoEmrResourceInfoListEmrResourceInfoSupportedResourceListSupportedResource["Max"].asString());
				if(!valueEmrZoneInfoListEmrZoneInfoEmrResourceInfoListEmrResourceInfoSupportedResourceListSupportedResource["Unit"].isNull())
					supportedResourceListObject.unit = valueEmrZoneInfoListEmrZoneInfoEmrResourceInfoListEmrResourceInfoSupportedResourceListSupportedResource["Unit"].asString();
				auto emrInstanceTypeNode = value["EmrInstanceType"];
				if(!emrInstanceTypeNode["InstanceType"].isNull())
					supportedResourceListObject.emrInstanceType.instanceType = emrInstanceTypeNode["InstanceType"].asString();
				if(!emrInstanceTypeNode["CpuCoreCount"].isNull())
					supportedResourceListObject.emrInstanceType.cpuCoreCount = std::stoi(emrInstanceTypeNode["CpuCoreCount"].asString());
				if(!emrInstanceTypeNode["MemorySize"].isNull())
					supportedResourceListObject.emrInstanceType.memorySize = std::stoi(emrInstanceTypeNode["MemorySize"].asString());
				if(!emrInstanceTypeNode["InstanceTypeFamily"].isNull())
					supportedResourceListObject.emrInstanceType.instanceTypeFamily = emrInstanceTypeNode["InstanceTypeFamily"].asString();
				if(!emrInstanceTypeNode["LocalStorageCapacity"].isNull())
					supportedResourceListObject.emrInstanceType.localStorageCapacity = std::stol(emrInstanceTypeNode["LocalStorageCapacity"].asString());
				if(!emrInstanceTypeNode["LocalStorageAmount"].isNull())
					supportedResourceListObject.emrInstanceType.localStorageAmount = std::stoi(emrInstanceTypeNode["LocalStorageAmount"].asString());
				if(!emrInstanceTypeNode["LocalStorageCategory"].isNull())
					supportedResourceListObject.emrInstanceType.localStorageCategory = emrInstanceTypeNode["LocalStorageCategory"].asString();
				if(!emrInstanceTypeNode["GPUAmount"].isNull())
					supportedResourceListObject.emrInstanceType.gPUAmount = std::stoi(emrInstanceTypeNode["GPUAmount"].asString());
				if(!emrInstanceTypeNode["GPUSpec"].isNull())
					supportedResourceListObject.emrInstanceType.gPUSpec = emrInstanceTypeNode["GPUSpec"].asString();
				if(!emrInstanceTypeNode["InitialCredit"].isNull())
					supportedResourceListObject.emrInstanceType.initialCredit = std::stoi(emrInstanceTypeNode["InitialCredit"].asString());
				if(!emrInstanceTypeNode["BaselineCredit"].isNull())
					supportedResourceListObject.emrInstanceType.baselineCredit = std::stoi(emrInstanceTypeNode["BaselineCredit"].asString());
				if(!emrInstanceTypeNode["EniQuantity"].isNull())
					supportedResourceListObject.emrInstanceType.eniQuantity = std::stoi(emrInstanceTypeNode["EniQuantity"].asString());
				if(!emrInstanceTypeNode["InstanceBandwidthRx"].isNull())
					supportedResourceListObject.emrInstanceType.instanceBandwidthRx = std::stoi(emrInstanceTypeNode["InstanceBandwidthRx"].asString());
				if(!emrInstanceTypeNode["InstanceBandwidthTx"].isNull())
					supportedResourceListObject.emrInstanceType.instanceBandwidthTx = std::stoi(emrInstanceTypeNode["InstanceBandwidthTx"].asString());
				if(!emrInstanceTypeNode["InstancePpsRx"].isNull())
					supportedResourceListObject.emrInstanceType.instancePpsRx = std::stol(emrInstanceTypeNode["InstancePpsRx"].asString());
				if(!emrInstanceTypeNode["InstancePpsTx"].isNull())
					supportedResourceListObject.emrInstanceType.instancePpsTx = std::stol(emrInstanceTypeNode["InstancePpsTx"].asString());
				auto allSupportNodeTypeList = value["SupportNodeTypeList"]["SupportNodeType"];
				for (auto value : allSupportNodeTypeList)
					supportedResourceListObject.supportNodeTypeList.push_back(value.asString());
				emrResourceInfoListObject.supportedResourceList.push_back(supportedResourceListObject);
			}
			emrZoneInfoListObject.emrResourceInfoList.push_back(emrResourceInfoListObject);
		}
		emrZoneInfoList_.push_back(emrZoneInfoListObject);
	}
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();

}

std::vector<ListEmrAvailableResourceResult::EmrZoneInfo> ListEmrAvailableResourceResult::getEmrZoneInfoList()const
{
	return emrZoneInfoList_;
}

std::string ListEmrAvailableResourceResult::getRegionId()const
{
	return regionId_;
}

