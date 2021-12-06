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

#include <alibabacloud/ecs/model/DescribeDedicatedHostTypesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeDedicatedHostTypesResult::DescribeDedicatedHostTypesResult() :
	ServiceResult()
{}

DescribeDedicatedHostTypesResult::DescribeDedicatedHostTypesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDedicatedHostTypesResult::~DescribeDedicatedHostTypesResult()
{}

void DescribeDedicatedHostTypesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDedicatedHostTypesNode = value["DedicatedHostTypes"]["DedicatedHostType"];
	for (auto valueDedicatedHostTypesDedicatedHostType : allDedicatedHostTypesNode)
	{
		DedicatedHostType dedicatedHostTypesObject;
		if(!valueDedicatedHostTypesDedicatedHostType["Cores"].isNull())
			dedicatedHostTypesObject.cores = std::stoi(valueDedicatedHostTypesDedicatedHostType["Cores"].asString());
		if(!valueDedicatedHostTypesDedicatedHostType["LocalStorageCategory"].isNull())
			dedicatedHostTypesObject.localStorageCategory = valueDedicatedHostTypesDedicatedHostType["LocalStorageCategory"].asString();
		if(!valueDedicatedHostTypesDedicatedHostType["GPUSpec"].isNull())
			dedicatedHostTypesObject.gPUSpec = valueDedicatedHostTypesDedicatedHostType["GPUSpec"].asString();
		if(!valueDedicatedHostTypesDedicatedHostType["TotalVcpus"].isNull())
			dedicatedHostTypesObject.totalVcpus = std::stoi(valueDedicatedHostTypesDedicatedHostType["TotalVcpus"].asString());
		if(!valueDedicatedHostTypesDedicatedHostType["CpuOverCommitRatioRange"].isNull())
			dedicatedHostTypesObject.cpuOverCommitRatioRange = valueDedicatedHostTypesDedicatedHostType["CpuOverCommitRatioRange"].asString();
		if(!valueDedicatedHostTypesDedicatedHostType["PhysicalGpus"].isNull())
			dedicatedHostTypesObject.physicalGpus = std::stoi(valueDedicatedHostTypesDedicatedHostType["PhysicalGpus"].asString());
		if(!valueDedicatedHostTypesDedicatedHostType["MemorySize"].isNull())
			dedicatedHostTypesObject.memorySize = std::stof(valueDedicatedHostTypesDedicatedHostType["MemorySize"].asString());
		if(!valueDedicatedHostTypesDedicatedHostType["SupportCpuOverCommitRatio"].isNull())
			dedicatedHostTypesObject.supportCpuOverCommitRatio = valueDedicatedHostTypesDedicatedHostType["SupportCpuOverCommitRatio"].asString() == "true";
		if(!valueDedicatedHostTypesDedicatedHostType["LocalStorageCapacity"].isNull())
			dedicatedHostTypesObject.localStorageCapacity = std::stol(valueDedicatedHostTypesDedicatedHostType["LocalStorageCapacity"].asString());
		if(!valueDedicatedHostTypesDedicatedHostType["DedicatedHostType"].isNull())
			dedicatedHostTypesObject.dedicatedHostType = valueDedicatedHostTypesDedicatedHostType["DedicatedHostType"].asString();
		if(!valueDedicatedHostTypesDedicatedHostType["LocalStorageAmount"].isNull())
			dedicatedHostTypesObject.localStorageAmount = std::stoi(valueDedicatedHostTypesDedicatedHostType["LocalStorageAmount"].asString());
		if(!valueDedicatedHostTypesDedicatedHostType["TotalVgpus"].isNull())
			dedicatedHostTypesObject.totalVgpus = std::stoi(valueDedicatedHostTypesDedicatedHostType["TotalVgpus"].asString());
		if(!valueDedicatedHostTypesDedicatedHostType["Sockets"].isNull())
			dedicatedHostTypesObject.sockets = std::stoi(valueDedicatedHostTypesDedicatedHostType["Sockets"].asString());
		auto allSupportedInstanceTypeFamilies = value["SupportedInstanceTypeFamilies"]["SupportedInstanceTypeFamily"];
		for (auto value : allSupportedInstanceTypeFamilies)
			dedicatedHostTypesObject.supportedInstanceTypeFamilies.push_back(value.asString());
		auto allSupportedInstanceTypesList = value["SupportedInstanceTypesList"]["SupportedInstanceTypesList"];
		for (auto value : allSupportedInstanceTypesList)
			dedicatedHostTypesObject.supportedInstanceTypesList.push_back(value.asString());
		dedicatedHostTypes_.push_back(dedicatedHostTypesObject);
	}

}

std::vector<DescribeDedicatedHostTypesResult::DedicatedHostType> DescribeDedicatedHostTypesResult::getDedicatedHostTypes()const
{
	return dedicatedHostTypes_;
}

