<<<<<<< HEAD
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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
=======
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
>>>>>>> master
	auto allDedicatedHostTypes = value["DedicatedHostTypes"]["DedicatedHostType"];
	for (auto value : allDedicatedHostTypes)
	{
		DedicatedHostType dedicatedHostTypesObject;
		if(!value["DedicatedHostType"].isNull())
			dedicatedHostTypesObject.dedicatedHostType = value["DedicatedHostType"].asString();
		if(!value["Sockets"].isNull())
			dedicatedHostTypesObject.sockets = std::stoi(value["Sockets"].asString());
		if(!value["TotalVcpus"].isNull())
			dedicatedHostTypesObject.totalVcpus = std::stoi(value["TotalVcpus"].asString());
		if(!value["TotalVgpus"].isNull())
			dedicatedHostTypesObject.totalVgpus = std::stoi(value["TotalVgpus"].asString());
		if(!value["Cores"].isNull())
			dedicatedHostTypesObject.cores = std::stoi(value["Cores"].asString());
		if(!value["PhysicalGpus"].isNull())
			dedicatedHostTypesObject.physicalGpus = std::stoi(value["PhysicalGpus"].asString());
		if(!value["MemorySize"].isNull())
			dedicatedHostTypesObject.memorySize = std::stof(value["MemorySize"].asString());
		if(!value["LocalStorageCapacity"].isNull())
			dedicatedHostTypesObject.localStorageCapacity = std::stol(value["LocalStorageCapacity"].asString());
		if(!value["LocalStorageAmount"].isNull())
			dedicatedHostTypesObject.localStorageAmount = std::stoi(value["LocalStorageAmount"].asString());
		if(!value["LocalStorageCategory"].isNull())
			dedicatedHostTypesObject.localStorageCategory = value["LocalStorageCategory"].asString();
		if(!value["GPUSpec"].isNull())
			dedicatedHostTypesObject.gPUSpec = value["GPUSpec"].asString();
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

