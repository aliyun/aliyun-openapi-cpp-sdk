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

#include <alibabacloud/ecs/model/DescribeFleetInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeFleetInstancesResult::DescribeFleetInstancesResult() :
	ServiceResult()
{}

DescribeFleetInstancesResult::DescribeFleetInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFleetInstancesResult::~DescribeFleetInstancesResult()
{}

void DescribeFleetInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["Instance"];
	for (auto valueInstancesInstance : allInstancesNode)
	{
		Instance instancesObject;
		if(!valueInstancesInstance["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesInstance["InstanceId"].asString();
		if(!valueInstancesInstance["Status"].isNull())
			instancesObject.status = valueInstancesInstance["Status"].asString();
		if(!valueInstancesInstance["RegionId"].isNull())
			instancesObject.regionId = valueInstancesInstance["RegionId"].asString();
		if(!valueInstancesInstance["IzNo"].isNull())
			instancesObject.izNo = valueInstancesInstance["IzNo"].asString();
		if(!valueInstancesInstance["ZoneNo"].isNull())
			instancesObject.zoneNo = valueInstancesInstance["ZoneNo"].asString();
		if(!valueInstancesInstance["Cores"].isNull())
			instancesObject.cores = std::stoi(valueInstancesInstance["Cores"].asString());
		if(!valueInstancesInstance["Memory"].isNull())
			instancesObject.memory = std::stoi(valueInstancesInstance["Memory"].asString());
		if(!valueInstancesInstance["InstanceType"].isNull())
			instancesObject.instanceType = valueInstancesInstance["InstanceType"].asString();
		if(!valueInstancesInstance["IsSpot"].isNull())
			instancesObject.isSpot = valueInstancesInstance["IsSpot"].asString() == "true";
		if(!valueInstancesInstance["IoOptimized"].isNull())
			instancesObject.ioOptimized = valueInstancesInstance["IoOptimized"].asString() == "true";
		if(!valueInstancesInstance["NetworkType"].isNull())
			instancesObject.networkType = valueInstancesInstance["NetworkType"].asString() == "true";
		if(!valueInstancesInstance["OsType"].isNull())
			instancesObject.osType = valueInstancesInstance["OsType"].asString() == "true";
		if(!valueInstancesInstance["CreationTime"].isNull())
			instancesObject.creationTime = valueInstancesInstance["CreationTime"].asString();
		instances_.push_back(instancesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

std::vector<DescribeFleetInstancesResult::Instance> DescribeFleetInstancesResult::getInstances()const
{
	return instances_;
}

int DescribeFleetInstancesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeFleetInstancesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeFleetInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

