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

#include <alibabacloud/gpdb/model/DescribeDBInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

DescribeDBInstancesResult::DescribeDBInstancesResult() :
	ServiceResult()
{}

DescribeDBInstancesResult::DescribeDBInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstancesResult::~DescribeDBInstancesResult()
{}

void DescribeDBInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["DBInstance"];
	for (auto valueItemsDBInstance : allItemsNode)
	{
		DBInstance itemsObject;
		if(!valueItemsDBInstance["DBInstanceId"].isNull())
			itemsObject.dBInstanceId = valueItemsDBInstance["DBInstanceId"].asString();
		if(!valueItemsDBInstance["DBInstanceDescription"].isNull())
			itemsObject.dBInstanceDescription = valueItemsDBInstance["DBInstanceDescription"].asString();
		if(!valueItemsDBInstance["PayType"].isNull())
			itemsObject.payType = valueItemsDBInstance["PayType"].asString();
		if(!valueItemsDBInstance["InstanceNetworkType"].isNull())
			itemsObject.instanceNetworkType = valueItemsDBInstance["InstanceNetworkType"].asString();
		if(!valueItemsDBInstance["ConnectionMode"].isNull())
			itemsObject.connectionMode = valueItemsDBInstance["ConnectionMode"].asString();
		if(!valueItemsDBInstance["RegionId"].isNull())
			itemsObject.regionId = valueItemsDBInstance["RegionId"].asString();
		if(!valueItemsDBInstance["ZoneId"].isNull())
			itemsObject.zoneId = valueItemsDBInstance["ZoneId"].asString();
		if(!valueItemsDBInstance["ExpireTime"].isNull())
			itemsObject.expireTime = valueItemsDBInstance["ExpireTime"].asString();
		if(!valueItemsDBInstance["DBInstanceStatus"].isNull())
			itemsObject.dBInstanceStatus = valueItemsDBInstance["DBInstanceStatus"].asString();
		if(!valueItemsDBInstance["Engine"].isNull())
			itemsObject.engine = valueItemsDBInstance["Engine"].asString();
		if(!valueItemsDBInstance["EngineVersion"].isNull())
			itemsObject.engineVersion = valueItemsDBInstance["EngineVersion"].asString();
		if(!valueItemsDBInstance["DBInstanceNetType"].isNull())
			itemsObject.dBInstanceNetType = valueItemsDBInstance["DBInstanceNetType"].asString();
		if(!valueItemsDBInstance["LockMode"].isNull())
			itemsObject.lockMode = valueItemsDBInstance["LockMode"].asString();
		if(!valueItemsDBInstance["LockReason"].isNull())
			itemsObject.lockReason = valueItemsDBInstance["LockReason"].asString();
		if(!valueItemsDBInstance["CreateTime"].isNull())
			itemsObject.createTime = valueItemsDBInstance["CreateTime"].asString();
		if(!valueItemsDBInstance["VpcId"].isNull())
			itemsObject.vpcId = valueItemsDBInstance["VpcId"].asString();
		if(!valueItemsDBInstance["VSwitchId"].isNull())
			itemsObject.vSwitchId = valueItemsDBInstance["VSwitchId"].asString();
		auto allTagsNode = allItemsNode["Tags"]["Tag"];
		for (auto allItemsNodeTagsTag : allTagsNode)
		{
			DBInstance::Tag tagsObject;
			if(!allItemsNodeTagsTag["Key"].isNull())
				tagsObject.key = allItemsNodeTagsTag["Key"].asString();
			if(!allItemsNodeTagsTag["Value"].isNull())
				tagsObject.value = allItemsNodeTagsTag["Value"].asString();
			itemsObject.tags.push_back(tagsObject);
		}
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeDBInstancesResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeDBInstancesResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeDBInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDBInstancesResult::DBInstance> DescribeDBInstancesResult::getItems()const
{
	return items_;
}

