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

#include <alibabacloud/ecs/model/DescribeInstanceTypesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeInstanceTypesResult::DescribeInstanceTypesResult() :
	ServiceResult()
{}

DescribeInstanceTypesResult::DescribeInstanceTypesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceTypesResult::~DescribeInstanceTypesResult()
{}

void DescribeInstanceTypesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allInstanceTypes = value["InstanceTypes"]["InstanceType"];
	for (auto value : allInstanceTypes)
	{
		InstanceType instanceTypesObject;
		if(!value["InstanceTypeId"].isNull())
			instanceTypesObject.instanceTypeId = value["InstanceTypeId"].asString();
		if(!value["CpuCoreCount"].isNull())
			instanceTypesObject.cpuCoreCount = std::stoi(value["CpuCoreCount"].asString());
		if(!value["MemorySize"].isNull())
			instanceTypesObject.memorySize = std::stof(value["MemorySize"].asString());
		if(!value["InstanceTypeFamily"].isNull())
			instanceTypesObject.instanceTypeFamily = value["InstanceTypeFamily"].asString();
		if(!value["LocalStorageCapacity"].isNull())
			instanceTypesObject.localStorageCapacity = std::stol(value["LocalStorageCapacity"].asString());
		if(!value["LocalStorageAmount"].isNull())
			instanceTypesObject.localStorageAmount = std::stoi(value["LocalStorageAmount"].asString());
		if(!value["LocalStorageCategory"].isNull())
			instanceTypesObject.localStorageCategory = value["LocalStorageCategory"].asString();
		if(!value["GPUAmount"].isNull())
			instanceTypesObject.gPUAmount = std::stoi(value["GPUAmount"].asString());
		if(!value["GPUSpec"].isNull())
			instanceTypesObject.gPUSpec = value["GPUSpec"].asString();
		if(!value["InitialCredit"].isNull())
			instanceTypesObject.initialCredit = std::stoi(value["InitialCredit"].asString());
		if(!value["BaselineCredit"].isNull())
			instanceTypesObject.baselineCredit = std::stoi(value["BaselineCredit"].asString());
		if(!value["EniQuantity"].isNull())
			instanceTypesObject.eniQuantity = std::stoi(value["EniQuantity"].asString());
		if(!value["EniPrivateIpAddressQuantity"].isNull())
			instanceTypesObject.eniPrivateIpAddressQuantity = std::stoi(value["EniPrivateIpAddressQuantity"].asString());
		if(!value["InstanceBandwidthRx"].isNull())
			instanceTypesObject.instanceBandwidthRx = std::stoi(value["InstanceBandwidthRx"].asString());
		if(!value["InstanceBandwidthTx"].isNull())
			instanceTypesObject.instanceBandwidthTx = std::stoi(value["InstanceBandwidthTx"].asString());
		if(!value["InstancePpsRx"].isNull())
			instanceTypesObject.instancePpsRx = std::stol(value["InstancePpsRx"].asString());
		if(!value["InstancePpsTx"].isNull())
			instanceTypesObject.instancePpsTx = std::stol(value["InstancePpsTx"].asString());
		if(!value["InstanceFamilyLevel"].isNull())
			instanceTypesObject.instanceFamilyLevel = value["InstanceFamilyLevel"].asString();
		instanceTypes_.push_back(instanceTypesObject);
	}

}

std::vector<DescribeInstanceTypesResult::InstanceType> DescribeInstanceTypesResult::getInstanceTypes()const
{
	return instanceTypes_;
}

