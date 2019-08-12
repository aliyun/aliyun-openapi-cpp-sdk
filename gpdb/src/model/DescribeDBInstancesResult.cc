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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["DBInstance"];
	for (auto value : allItems)
	{
		DBInstance itemsObject;
		if(!value["DBInstanceId"].isNull())
			itemsObject.dBInstanceId = value["DBInstanceId"].asString();
		if(!value["DBInstanceDescription"].isNull())
			itemsObject.dBInstanceDescription = value["DBInstanceDescription"].asString();
		if(!value["PayType"].isNull())
			itemsObject.payType = value["PayType"].asString();
		if(!value["InstanceNetworkType"].isNull())
			itemsObject.instanceNetworkType = value["InstanceNetworkType"].asString();
		if(!value["ConnectionMode"].isNull())
			itemsObject.connectionMode = value["ConnectionMode"].asString();
		if(!value["RegionId"].isNull())
			itemsObject.regionId = value["RegionId"].asString();
		if(!value["ZoneId"].isNull())
			itemsObject.zoneId = value["ZoneId"].asString();
		if(!value["ExpireTime"].isNull())
			itemsObject.expireTime = value["ExpireTime"].asString();
		if(!value["DBInstanceStatus"].isNull())
			itemsObject.dBInstanceStatus = value["DBInstanceStatus"].asString();
		if(!value["Engine"].isNull())
			itemsObject.engine = value["Engine"].asString();
		if(!value["EngineVersion"].isNull())
			itemsObject.engineVersion = value["EngineVersion"].asString();
		if(!value["DBInstanceNetType"].isNull())
			itemsObject.dBInstanceNetType = value["DBInstanceNetType"].asString();
		if(!value["LockMode"].isNull())
			itemsObject.lockMode = value["LockMode"].asString();
		if(!value["LockReason"].isNull())
			itemsObject.lockReason = value["LockReason"].asString();
		if(!value["CreateTime"].isNull())
			itemsObject.createTime = value["CreateTime"].asString();
		if(!value["VpcId"].isNull())
			itemsObject.vpcId = value["VpcId"].asString();
		if(!value["VSwitchId"].isNull())
			itemsObject.vSwitchId = value["VSwitchId"].asString();
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
		{
			DBInstance::Tag tagsObject;
			if(!value["Key"].isNull())
				tagsObject.key = value["Key"].asString();
			if(!value["Value"].isNull())
				tagsObject.value = value["Value"].asString();
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

