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
		if(!valueInstanceTypeFamiliesInstanceTypeFamilyInfo["InstanceTypeFamilyId"].isNull())
			instanceTypeFamiliesObject.instanceTypeFamilyId = valueInstanceTypeFamiliesInstanceTypeFamilyInfo["InstanceTypeFamilyId"].asString();
		if(!valueInstanceTypeFamiliesInstanceTypeFamilyInfo["Generation"].isNull())
			instanceTypeFamiliesObject.generation = valueInstanceTypeFamiliesInstanceTypeFamilyInfo["Generation"].asString();
		auto allTypesNode = allInstanceTypeFamiliesNode["Types"]["TypesInfo"];
		for (auto allInstanceTypeFamiliesNodeTypesTypesInfo : allTypesNode)
		{
			InstanceTypeFamilyInfo::TypesInfo typesObject;
			if(!allInstanceTypeFamiliesNodeTypesTypesInfo["CpuCoreCount"].isNull())
				typesObject.cpuCoreCount = std::stoi(allInstanceTypeFamiliesNodeTypesTypesInfo["CpuCoreCount"].asString());
			if(!allInstanceTypeFamiliesNodeTypesTypesInfo["MemorySize"].isNull())
				typesObject.memorySize = std::stoi(allInstanceTypeFamiliesNodeTypesTypesInfo["MemorySize"].asString());
			if(!allInstanceTypeFamiliesNodeTypesTypesInfo["GPUAmount"].isNull())
				typesObject.gPUAmount = std::stoi(allInstanceTypeFamiliesNodeTypesTypesInfo["GPUAmount"].asString());
			if(!allInstanceTypeFamiliesNodeTypesTypesInfo["InstanceBandwidthRx"].isNull())
				typesObject.instanceBandwidthRx = std::stoi(allInstanceTypeFamiliesNodeTypesTypesInfo["InstanceBandwidthRx"].asString());
			if(!allInstanceTypeFamiliesNodeTypesTypesInfo["InstancePpsRx"].isNull())
				typesObject.instancePpsRx = std::stoi(allInstanceTypeFamiliesNodeTypesTypesInfo["InstancePpsRx"].asString());
			if(!allInstanceTypeFamiliesNodeTypesTypesInfo["InstancePpsTx"].isNull())
				typesObject.instancePpsTx = std::stoi(allInstanceTypeFamiliesNodeTypesTypesInfo["InstancePpsTx"].asString());
			if(!allInstanceTypeFamiliesNodeTypesTypesInfo["EniQuantity"].isNull())
				typesObject.eniQuantity = std::stoi(allInstanceTypeFamiliesNodeTypesTypesInfo["EniQuantity"].asString());
			if(!allInstanceTypeFamiliesNodeTypesTypesInfo["InstanceBandwidthTx"].isNull())
				typesObject.instanceBandwidthTx = std::stoi(allInstanceTypeFamiliesNodeTypesTypesInfo["InstanceBandwidthTx"].asString());
			if(!allInstanceTypeFamiliesNodeTypesTypesInfo["InstanceTypeId"].isNull())
				typesObject.instanceTypeId = allInstanceTypeFamiliesNodeTypesTypesInfo["InstanceTypeId"].asString();
			if(!allInstanceTypeFamiliesNodeTypesTypesInfo["GPUSpec"].isNull())
				typesObject.gPUSpec = allInstanceTypeFamiliesNodeTypesTypesInfo["GPUSpec"].asString();
			if(!allInstanceTypeFamiliesNodeTypesTypesInfo["Status"].isNull())
				typesObject.status = allInstanceTypeFamiliesNodeTypesTypesInfo["Status"].asString();
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

