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

#include <alibabacloud/rds/model/DescribeDBInstancesByExpireTimeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDBInstancesByExpireTimeResult::DescribeDBInstancesByExpireTimeResult() :
	ServiceResult()
{}

DescribeDBInstancesByExpireTimeResult::DescribeDBInstancesByExpireTimeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstancesByExpireTimeResult::~DescribeDBInstancesByExpireTimeResult()
{}

void DescribeDBInstancesByExpireTimeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["DBInstanceExpireTime"];
	for (auto valueItemsDBInstanceExpireTime : allItemsNode)
	{
		DBInstanceExpireTime itemsObject;
		if(!valueItemsDBInstanceExpireTime["DBInstanceDescription"].isNull())
			itemsObject.dBInstanceDescription = valueItemsDBInstanceExpireTime["DBInstanceDescription"].asString();
		if(!valueItemsDBInstanceExpireTime["DBInstanceId"].isNull())
			itemsObject.dBInstanceId = valueItemsDBInstanceExpireTime["DBInstanceId"].asString();
		if(!valueItemsDBInstanceExpireTime["DBInstanceStatus"].isNull())
			itemsObject.dBInstanceStatus = valueItemsDBInstanceExpireTime["DBInstanceStatus"].asString();
		if(!valueItemsDBInstanceExpireTime["ExpireTime"].isNull())
			itemsObject.expireTime = valueItemsDBInstanceExpireTime["ExpireTime"].asString();
		if(!valueItemsDBInstanceExpireTime["LockMode"].isNull())
			itemsObject.lockMode = valueItemsDBInstanceExpireTime["LockMode"].asString();
		if(!valueItemsDBInstanceExpireTime["PayType"].isNull())
			itemsObject.payType = valueItemsDBInstanceExpireTime["PayType"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());

}

int DescribeDBInstancesByExpireTimeResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeDBInstancesByExpireTimeResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeDBInstancesByExpireTimeResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDBInstancesByExpireTimeResult::DBInstanceExpireTime> DescribeDBInstancesByExpireTimeResult::getItems()const
{
	return items_;
}

