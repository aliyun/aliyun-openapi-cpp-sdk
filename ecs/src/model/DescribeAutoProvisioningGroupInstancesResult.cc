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

#include <alibabacloud/ecs/model/DescribeAutoProvisioningGroupInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeAutoProvisioningGroupInstancesResult::DescribeAutoProvisioningGroupInstancesResult() :
	ServiceResult()
{}

DescribeAutoProvisioningGroupInstancesResult::DescribeAutoProvisioningGroupInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAutoProvisioningGroupInstancesResult::~DescribeAutoProvisioningGroupInstancesResult()
{}

void DescribeAutoProvisioningGroupInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["Instance"];
	for (auto valueInstancesInstance : allInstancesNode)
	{
		Instance instancesObject;
		if(!valueInstancesInstance["Status"].isNull())
			instancesObject.status = valueInstancesInstance["Status"].asString();
		if(!valueInstancesInstance["CreationTime"].isNull())
			instancesObject.creationTime = valueInstancesInstance["CreationTime"].asString();
		if(!valueInstancesInstance["IsSpot"].isNull())
			instancesObject.isSpot = valueInstancesInstance["IsSpot"].asString() == "true";
		if(!valueInstancesInstance["CPU"].isNull())
			instancesObject.cPU = std::stoi(valueInstancesInstance["CPU"].asString());
		if(!valueInstancesInstance["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesInstance["InstanceId"].asString();
		if(!valueInstancesInstance["NetworkType"].isNull())
			instancesObject.networkType = valueInstancesInstance["NetworkType"].asString();
		if(!valueInstancesInstance["InstanceType"].isNull())
			instancesObject.instanceType = valueInstancesInstance["InstanceType"].asString();
		if(!valueInstancesInstance["RegionId"].isNull())
			instancesObject.regionId = valueInstancesInstance["RegionId"].asString();
		if(!valueInstancesInstance["IoOptimized"].isNull())
			instancesObject.ioOptimized = valueInstancesInstance["IoOptimized"].asString() == "true";
		if(!valueInstancesInstance["OsType"].isNull())
			instancesObject.osType = valueInstancesInstance["OsType"].asString();
		if(!valueInstancesInstance["ZoneId"].isNull())
			instancesObject.zoneId = valueInstancesInstance["ZoneId"].asString();
		if(!valueInstancesInstance["Memory"].isNull())
			instancesObject.memory = std::stoi(valueInstancesInstance["Memory"].asString());
		instances_.push_back(instancesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeAutoProvisioningGroupInstancesResult::Instance> DescribeAutoProvisioningGroupInstancesResult::getInstances()const
{
	return instances_;
}

int DescribeAutoProvisioningGroupInstancesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeAutoProvisioningGroupInstancesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeAutoProvisioningGroupInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

