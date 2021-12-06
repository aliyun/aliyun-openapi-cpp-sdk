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

#include <alibabacloud/ecs/model/DescribeImageSupportInstanceTypesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeImageSupportInstanceTypesResult::DescribeImageSupportInstanceTypesResult() :
	ServiceResult()
{}

DescribeImageSupportInstanceTypesResult::DescribeImageSupportInstanceTypesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImageSupportInstanceTypesResult::~DescribeImageSupportInstanceTypesResult()
{}

void DescribeImageSupportInstanceTypesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceTypesNode = value["InstanceTypes"]["InstanceType"];
	for (auto valueInstanceTypesInstanceType : allInstanceTypesNode)
	{
		InstanceType instanceTypesObject;
		if(!valueInstanceTypesInstanceType["InstanceTypeId"].isNull())
			instanceTypesObject.instanceTypeId = valueInstanceTypesInstanceType["InstanceTypeId"].asString();
		if(!valueInstanceTypesInstanceType["InstanceTypeFamily"].isNull())
			instanceTypesObject.instanceTypeFamily = valueInstanceTypesInstanceType["InstanceTypeFamily"].asString();
		if(!valueInstanceTypesInstanceType["CpuCoreCount"].isNull())
			instanceTypesObject.cpuCoreCount = std::stoi(valueInstanceTypesInstanceType["CpuCoreCount"].asString());
		if(!valueInstanceTypesInstanceType["MemorySize"].isNull())
			instanceTypesObject.memorySize = std::stof(valueInstanceTypesInstanceType["MemorySize"].asString());
		instanceTypes_.push_back(instanceTypesObject);
	}
	if(!value["ImageId"].isNull())
		imageId_ = value["ImageId"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();

}

std::string DescribeImageSupportInstanceTypesResult::getImageId()const
{
	return imageId_;
}

std::vector<DescribeImageSupportInstanceTypesResult::InstanceType> DescribeImageSupportInstanceTypesResult::getInstanceTypes()const
{
	return instanceTypes_;
}

std::string DescribeImageSupportInstanceTypesResult::getRegionId()const
{
	return regionId_;
}

