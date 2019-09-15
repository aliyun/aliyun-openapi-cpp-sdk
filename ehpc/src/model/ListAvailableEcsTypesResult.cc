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
	auto allInstanceTypeFamilies = value["InstanceTypeFamilies"]["InstanceTypeFamilyInfo"];
	for (auto value : allInstanceTypeFamilies)
	{
		InstanceTypeFamilyInfo instanceTypeFamiliesObject;
		if(!value["InstanceTypeFamilyId"].isNull())
			instanceTypeFamiliesObject.instanceTypeFamilyId = value["InstanceTypeFamilyId"].asString();
		if(!value["Generation"].isNull())
			instanceTypeFamiliesObject.generation = value["Generation"].asString();
		auto allTypes = value["Types"]["TypesInfo"];
		for (auto value : allTypes)
		{
			InstanceTypeFamilyInfo::TypesInfo typesObject;
			if(!value["CpuCoreCount"].isNull())
				typesObject.cpuCoreCount = std::stoi(value["CpuCoreCount"].asString());
			if(!value["MemorySize"].isNull())
				typesObject.memorySize = std::stoi(value["MemorySize"].asString());
			if(!value["GPUAmount"].isNull())
				typesObject.gPUAmount = std::stoi(value["GPUAmount"].asString());
			if(!value["InstanceBandwidthRx"].isNull())
				typesObject.instanceBandwidthRx = std::stoi(value["InstanceBandwidthRx"].asString());
			if(!value["InstancePpsRx"].isNull())
				typesObject.instancePpsRx = std::stoi(value["InstancePpsRx"].asString());
			if(!value["InstancePpsTx"].isNull())
				typesObject.instancePpsTx = std::stoi(value["InstancePpsTx"].asString());
			if(!value["EniQuantity"].isNull())
				typesObject.eniQuantity = std::stoi(value["EniQuantity"].asString());
			if(!value["InstanceBandwidthTx"].isNull())
				typesObject.instanceBandwidthTx = std::stoi(value["InstanceBandwidthTx"].asString());
			if(!value["InstanceTypeId"].isNull())
				typesObject.instanceTypeId = value["InstanceTypeId"].asString();
			if(!value["GPUSpec"].isNull())
				typesObject.gPUSpec = value["GPUSpec"].asString();
			if(!value["Status"].isNull())
				typesObject.status = value["Status"].asString();
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

