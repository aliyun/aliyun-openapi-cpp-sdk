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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
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
		instanceTypes_.push_back(instanceTypesObject);
	}
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["ImageId"].isNull())
		imageId_ = value["ImageId"].asString();

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

