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

#include <alibabacloud/ehpc/model/ListAvailableEcsTypesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ListAvailableEcsTypesResult::ListAvailableEcsTypesResult() :
	ServiceResult()
{}

ListAvailableEcsTypesResult::ListAvailableEcsTypesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAvailableEcsTypesResult::~ListAvailableEcsTypesResult()
{}

void ListAvailableEcsTypesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceTypeFamiliesNode = value["InstanceTypeFamilies"]["InstanceTypeFamilyInfo"];
	for (auto valueInstanceTypeFamiliesInstanceTypeFamilyInfo : allInstanceTypeFamiliesNode)
	{
		InstanceTypeFamilyInfo instanceTypeFamiliesObject;
		if(!valueInstanceTypeFamiliesInstanceTypeFamilyInfo["Generation"].isNull())
			instanceTypeFamiliesObject.generation = valueInstanceTypeFamiliesInstanceTypeFamilyInfo["Generation"].asString();
		if(!valueInstanceTypeFamiliesInstanceTypeFamilyInfo["InstanceTypeFamilyId"].isNull())
			instanceTypeFamiliesObject.instanceTypeFamilyId = valueInstanceTypeFamiliesInstanceTypeFamilyInfo["InstanceTypeFamilyId"].asString();
		auto allTypesNode = valueInstanceTypeFamiliesInstanceTypeFamilyInfo["Types"]["TypesInfo"];
		for (auto valueInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfo : allTypesNode)
		{
			InstanceTypeFamilyInfo::TypesInfo typesObject;
			if(!valueInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfo["Status"].isNull())
				typesObject.status = valueInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfo["Status"].asString();
			if(!valueInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfo["InstanceTypeId"].isNull())
				typesObject.instanceTypeId = valueInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfo["InstanceTypeId"].asString();
			if(!valueInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfo["InstanceBandwidthRx"].isNull())
				typesObject.instanceBandwidthRx = std::stoi(valueInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfo["InstanceBandwidthRx"].asString());
			if(!valueInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfo["GPUSpec"].isNull())
				typesObject.gPUSpec = valueInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfo["GPUSpec"].asString();
			if(!valueInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfo["InstanceBandwidthTx"].isNull())
				typesObject.instanceBandwidthTx = std::stoi(valueInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfo["InstanceBandwidthTx"].asString());
			if(!valueInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfo["InstancePpsRx"].isNull())
				typesObject.instancePpsRx = std::stoi(valueInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfo["InstancePpsRx"].asString());
			if(!valueInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfo["InstancePpsTx"].isNull())
				typesObject.instancePpsTx = std::stoi(valueInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfo["InstancePpsTx"].asString());
			if(!valueInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfo["GPUAmount"].isNull())
				typesObject.gPUAmount = std::stoi(valueInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfo["GPUAmount"].asString());
			if(!valueInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfo["CpuCoreCount"].isNull())
				typesObject.cpuCoreCount = std::stoi(valueInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfo["CpuCoreCount"].asString());
			if(!valueInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfo["MemorySize"].isNull())
				typesObject.memorySize = std::stoi(valueInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfo["MemorySize"].asString());
			if(!valueInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfo["EniQuantity"].isNull())
				typesObject.eniQuantity = std::stoi(valueInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfo["EniQuantity"].asString());
			auto allZoneIds = value["ZoneIds"]["ZoneId"];
			for (auto value : allZoneIds)
				typesObject.zoneIds.push_back(value.asString());
			instanceTypeFamiliesObject.types.push_back(typesObject);
		}
		instanceTypeFamilies_.push_back(instanceTypeFamiliesObject);
	}
	if(!value["SupportSpotInstance"].isNull())
		supportSpotInstance_ = value["SupportSpotInstance"].asString() == "true";

}

bool ListAvailableEcsTypesResult::getSupportSpotInstance()const
{
	return supportSpotInstance_;
}

std::vector<ListAvailableEcsTypesResult::InstanceTypeFamilyInfo> ListAvailableEcsTypesResult::getInstanceTypeFamilies()const
{
	return instanceTypeFamilies_;
}

