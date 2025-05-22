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

#include <alibabacloud/rds/model/DescribeDBInstanceIPArrayListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDBInstanceIPArrayListResult::DescribeDBInstanceIPArrayListResult() :
	ServiceResult()
{}

DescribeDBInstanceIPArrayListResult::DescribeDBInstanceIPArrayListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstanceIPArrayListResult::~DescribeDBInstanceIPArrayListResult()
{}

void DescribeDBInstanceIPArrayListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["DBInstanceIPArray"];
	for (auto valueItemsDBInstanceIPArray : allItemsNode)
	{
		DBInstanceIPArray itemsObject;
		if(!valueItemsDBInstanceIPArray["DBInstanceIPArrayAttribute"].isNull())
			itemsObject.dBInstanceIPArrayAttribute = valueItemsDBInstanceIPArray["DBInstanceIPArrayAttribute"].asString();
		if(!valueItemsDBInstanceIPArray["DBInstanceIPArrayName"].isNull())
			itemsObject.dBInstanceIPArrayName = valueItemsDBInstanceIPArray["DBInstanceIPArrayName"].asString();
		if(!valueItemsDBInstanceIPArray["SecurityIPList"].isNull())
			itemsObject.securityIPList = valueItemsDBInstanceIPArray["SecurityIPList"].asString();
		if(!valueItemsDBInstanceIPArray["SecurityIPType"].isNull())
			itemsObject.securityIPType = valueItemsDBInstanceIPArray["SecurityIPType"].asString();
		if(!valueItemsDBInstanceIPArray["WhitelistNetworkType"].isNull())
			itemsObject.whitelistNetworkType = valueItemsDBInstanceIPArray["WhitelistNetworkType"].asString();
		items_.push_back(itemsObject);
	}

}

std::vector<DescribeDBInstanceIPArrayListResult::DBInstanceIPArray> DescribeDBInstanceIPArrayListResult::getItems()const
{
	return items_;
}

