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
	auto allItems = value["Items"]["DBInstanceExpireTime"];
	for (auto value : allItems)
	{
		DBInstanceExpireTime itemsObject;
		if(!value["DBInstanceId"].isNull())
			itemsObject.dBInstanceId = value["DBInstanceId"].asString();
		if(!value["DBInstanceDescription"].isNull())
			itemsObject.dBInstanceDescription = value["DBInstanceDescription"].asString();
		if(!value["ExpireTime"].isNull())
			itemsObject.expireTime = value["ExpireTime"].asString();
		if(!value["DBInstanceStatus"].isNull())
			itemsObject.dBInstanceStatus = value["DBInstanceStatus"].asString();
		if(!value["LockMode"].isNull())
			itemsObject.lockMode = value["LockMode"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

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

