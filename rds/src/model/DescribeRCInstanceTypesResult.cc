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

#include <alibabacloud/rds/model/DescribeRCInstanceTypesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeRCInstanceTypesResult::DescribeRCInstanceTypesResult() :
	ServiceResult()
{}

DescribeRCInstanceTypesResult::DescribeRCInstanceTypesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRCInstanceTypesResult::~DescribeRCInstanceTypesResult()
{}

void DescribeRCInstanceTypesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto instanceTypesNode = value["InstanceTypes"];
	auto allInstanceTypeNode = instanceTypesNode["InstanceType"]["InstanceTypeItem"];
	for (auto instanceTypesNodeInstanceTypeInstanceTypeItem : allInstanceTypeNode)
	{
		InstanceTypes::InstanceTypeItem instanceTypeItemObject;
		if(!instanceTypesNodeInstanceTypeInstanceTypeItem["CpuCoreCount"].isNull())
			instanceTypeItemObject.cpuCoreCount = std::stoi(instanceTypesNodeInstanceTypeInstanceTypeItem["CpuCoreCount"].asString());
		if(!instanceTypesNodeInstanceTypeInstanceTypeItem["InstanceTypeFamily"].isNull())
			instanceTypeItemObject.instanceTypeFamily = instanceTypesNodeInstanceTypeInstanceTypeItem["InstanceTypeFamily"].asString();
		if(!instanceTypesNodeInstanceTypeInstanceTypeItem["InstanceTypeId"].isNull())
			instanceTypeItemObject.instanceTypeId = instanceTypesNodeInstanceTypeInstanceTypeItem["InstanceTypeId"].asString();
		if(!instanceTypesNodeInstanceTypeInstanceTypeItem["MemorySize"].isNull())
			instanceTypeItemObject.memorySize = std::stoi(instanceTypesNodeInstanceTypeInstanceTypeItem["MemorySize"].asString());
		instanceTypes_.instanceType.push_back(instanceTypeItemObject);
	}

}

DescribeRCInstanceTypesResult::InstanceTypes DescribeRCInstanceTypesResult::getInstanceTypes()const
{
	return instanceTypes_;
}

