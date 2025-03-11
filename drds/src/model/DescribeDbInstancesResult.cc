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

#include <alibabacloud/drds/model/DescribeDbInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeDbInstancesResult::DescribeDbInstancesResult() :
	ServiceResult()
{}

DescribeDbInstancesResult::DescribeDbInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDbInstancesResult::~DescribeDbInstancesResult()
{}

void DescribeDbInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["DBInstance"];
	for (auto valueItemsDBInstance : allItemsNode)
	{
		DBInstance itemsObject;
		if(!valueItemsDBInstance["InstanceNetworkType"].isNull())
			itemsObject.instanceNetworkType = valueItemsDBInstance["InstanceNetworkType"].asString();
		if(!valueItemsDBInstance["DBInstanceType"].isNull())
			itemsObject.dBInstanceType = valueItemsDBInstance["DBInstanceType"].asString();
		if(!valueItemsDBInstance["ZoneId"].isNull())
			itemsObject.zoneId = valueItemsDBInstance["ZoneId"].asString();
		if(!valueItemsDBInstance["DBInstanceStatus"].isNull())
			itemsObject.dBInstanceStatus = std::stoi(valueItemsDBInstance["DBInstanceStatus"].asString());
		if(!valueItemsDBInstance["DBInstanceId"].isNull())
			itemsObject.dBInstanceId = valueItemsDBInstance["DBInstanceId"].asString();
		if(!valueItemsDBInstance["Engine"].isNull())
			itemsObject.engine = valueItemsDBInstance["Engine"].asString();
		if(!valueItemsDBInstance["DBInstanceDescription"].isNull())
			itemsObject.dBInstanceDescription = valueItemsDBInstance["DBInstanceDescription"].asString();
		if(!valueItemsDBInstance["EngineVersion"].isNull())
			itemsObject.engineVersion = valueItemsDBInstance["EngineVersion"].asString();
		if(!valueItemsDBInstance["RegionId"].isNull())
			itemsObject.regionId = valueItemsDBInstance["RegionId"].asString();
		if(!valueItemsDBInstance["AllowAllCategory"].isNull())
			itemsObject.allowAllCategory = valueItemsDBInstance["AllowAllCategory"].asString() == "true";
		auto allReadOnlyDBInstanceId = value["ReadOnlyDBInstanceId"]["ReadOnlyDBInstanceId"];
		for (auto value : allReadOnlyDBInstanceId)
			itemsObject.readOnlyDBInstanceId.push_back(value.asString());
		items_.push_back(itemsObject);
	}

}

std::vector<DescribeDbInstancesResult::DBInstance> DescribeDbInstancesResult::getItems()const
{
	return items_;
}

