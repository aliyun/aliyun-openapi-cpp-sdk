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

#include <alibabacloud/vpc/model/DescribeServerRelatedGlobalAccelerationInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeServerRelatedGlobalAccelerationInstancesResult::DescribeServerRelatedGlobalAccelerationInstancesResult() :
	ServiceResult()
{}

DescribeServerRelatedGlobalAccelerationInstancesResult::DescribeServerRelatedGlobalAccelerationInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeServerRelatedGlobalAccelerationInstancesResult::~DescribeServerRelatedGlobalAccelerationInstancesResult()
{}

void DescribeServerRelatedGlobalAccelerationInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allGlobalAccelerationInstancesNode = value["GlobalAccelerationInstances"]["GlobalAccelerationInstance"];
	for (auto valueGlobalAccelerationInstancesGlobalAccelerationInstance : allGlobalAccelerationInstancesNode)
	{
		GlobalAccelerationInstance globalAccelerationInstancesObject;
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["ServerIpAddress"].isNull())
			globalAccelerationInstancesObject.serverIpAddress = valueGlobalAccelerationInstancesGlobalAccelerationInstance["ServerIpAddress"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["GlobalAccelerationInstanceId"].isNull())
			globalAccelerationInstancesObject.globalAccelerationInstanceId = valueGlobalAccelerationInstancesGlobalAccelerationInstance["GlobalAccelerationInstanceId"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["IpAddress"].isNull())
			globalAccelerationInstancesObject.ipAddress = valueGlobalAccelerationInstancesGlobalAccelerationInstance["IpAddress"].asString();
		if(!valueGlobalAccelerationInstancesGlobalAccelerationInstance["RegionId"].isNull())
			globalAccelerationInstancesObject.regionId = valueGlobalAccelerationInstancesGlobalAccelerationInstance["RegionId"].asString();
		globalAccelerationInstances_.push_back(globalAccelerationInstancesObject);
	}

}

std::vector<DescribeServerRelatedGlobalAccelerationInstancesResult::GlobalAccelerationInstance> DescribeServerRelatedGlobalAccelerationInstancesResult::getGlobalAccelerationInstances()const
{
	return globalAccelerationInstances_;
}

