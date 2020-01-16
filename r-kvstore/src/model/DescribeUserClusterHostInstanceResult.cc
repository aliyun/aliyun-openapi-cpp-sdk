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

#include <alibabacloud/r-kvstore/model/DescribeUserClusterHostInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeUserClusterHostInstanceResult::DescribeUserClusterHostInstanceResult() :
	ServiceResult()
{}

DescribeUserClusterHostInstanceResult::DescribeUserClusterHostInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUserClusterHostInstanceResult::~DescribeUserClusterHostInstanceResult()
{}

void DescribeUserClusterHostInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesItemsNode = value["InstancesItems"]["InstanceInfo"];
	for (auto valueInstancesItemsInstanceInfo : allInstancesItemsNode)
	{
		InstanceInfo instancesItemsObject;
		if(!valueInstancesItemsInstanceInfo["InstanceId"].isNull())
			instancesItemsObject.instanceId = valueInstancesItemsInstanceInfo["InstanceId"].asString();
		if(!valueInstancesItemsInstanceInfo["ClusterId"].isNull())
			instancesItemsObject.clusterId = valueInstancesItemsInstanceInfo["ClusterId"].asString();
		if(!valueInstancesItemsInstanceInfo["RegionId"].isNull())
			instancesItemsObject.regionId = valueInstancesItemsInstanceInfo["RegionId"].asString();
		if(!valueInstancesItemsInstanceInfo["ZoneId"].isNull())
			instancesItemsObject.zoneId = valueInstancesItemsInstanceInfo["ZoneId"].asString();
		if(!valueInstancesItemsInstanceInfo["InstanceType"].isNull())
			instancesItemsObject.instanceType = valueInstancesItemsInstanceInfo["InstanceType"].asString();
		if(!valueInstancesItemsInstanceInfo["Engine"].isNull())
			instancesItemsObject.engine = valueInstancesItemsInstanceInfo["Engine"].asString();
		if(!valueInstancesItemsInstanceInfo["EngineVersion"].isNull())
			instancesItemsObject.engineVersion = valueInstancesItemsInstanceInfo["EngineVersion"].asString();
		if(!valueInstancesItemsInstanceInfo["InstanceStatus"].isNull())
			instancesItemsObject.instanceStatus = valueInstancesItemsInstanceInfo["InstanceStatus"].asString();
		if(!valueInstancesItemsInstanceInfo["InstanceClass"].isNull())
			instancesItemsObject.instanceClass = valueInstancesItemsInstanceInfo["InstanceClass"].asString();
		if(!valueInstancesItemsInstanceInfo["CreateTime"].isNull())
			instancesItemsObject.createTime = valueInstancesItemsInstanceInfo["CreateTime"].asString();
		instancesItems_.push_back(instancesItemsObject);
	}
	if(!value["MaxRecordsPerPage"].isNull())
		maxRecordsPerPage_ = std::stoi(value["MaxRecordsPerPage"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalRecords"].isNull())
		totalRecords_ = std::stoi(value["TotalRecords"].asString());
	if(!value["ItemNumbers"].isNull())
		itemNumbers_ = std::stoi(value["ItemNumbers"].asString());

}

int DescribeUserClusterHostInstanceResult::getMaxRecordsPerPage()const
{
	return maxRecordsPerPage_;
}

std::vector<DescribeUserClusterHostInstanceResult::InstanceInfo> DescribeUserClusterHostInstanceResult::getInstancesItems()const
{
	return instancesItems_;
}

int DescribeUserClusterHostInstanceResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeUserClusterHostInstanceResult::getTotalRecords()const
{
	return totalRecords_;
}

int DescribeUserClusterHostInstanceResult::getItemNumbers()const
{
	return itemNumbers_;
}

