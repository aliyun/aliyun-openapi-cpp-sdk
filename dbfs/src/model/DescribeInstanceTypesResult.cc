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

#include <alibabacloud/dbfs/model/DescribeInstanceTypesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DBFS;
using namespace AlibabaCloud::DBFS::Model;

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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceTypesNode = value["InstanceTypes"]["InstanceTypesItem"];
	for (auto valueInstanceTypesInstanceTypesItem : allInstanceTypesNode)
	{
		InstanceTypesItem instanceTypesObject;
		if(!valueInstanceTypesInstanceTypesItem["InstanceTypeId"].isNull())
			instanceTypesObject.instanceTypeId = valueInstanceTypesInstanceTypesItem["InstanceTypeId"].asString();
		if(!valueInstanceTypesInstanceTypesItem["CpuCoreCount"].isNull())
			instanceTypesObject.cpuCoreCount = std::stof(valueInstanceTypesInstanceTypesItem["CpuCoreCount"].asString());
		if(!valueInstanceTypesInstanceTypesItem["MemorySize"].isNull())
			instanceTypesObject.memorySize = std::stof(valueInstanceTypesInstanceTypesItem["MemorySize"].asString());
		if(!valueInstanceTypesInstanceTypesItem["InstanceTypeDescription"].isNull())
			instanceTypesObject.instanceTypeDescription = valueInstanceTypesInstanceTypesItem["InstanceTypeDescription"].asString();
		instanceTypes_.push_back(instanceTypesObject);
	}

}

std::vector<DescribeInstanceTypesResult::InstanceTypesItem> DescribeInstanceTypesResult::getInstanceTypes()const
{
	return instanceTypes_;
}

