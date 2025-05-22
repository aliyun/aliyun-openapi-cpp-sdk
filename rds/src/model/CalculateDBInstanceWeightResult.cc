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

#include <alibabacloud/rds/model/CalculateDBInstanceWeightResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

CalculateDBInstanceWeightResult::CalculateDBInstanceWeightResult() :
	ServiceResult()
{}

CalculateDBInstanceWeightResult::CalculateDBInstanceWeightResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CalculateDBInstanceWeightResult::~CalculateDBInstanceWeightResult()
{}

void CalculateDBInstanceWeightResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["DBInstanceWeight"];
	for (auto valueItemsDBInstanceWeight : allItemsNode)
	{
		DBInstanceWeight itemsObject;
		if(!valueItemsDBInstanceWeight["Availability"].isNull())
			itemsObject.availability = valueItemsDBInstanceWeight["Availability"].asString();
		if(!valueItemsDBInstanceWeight["DBInstanceId"].isNull())
			itemsObject.dBInstanceId = valueItemsDBInstanceWeight["DBInstanceId"].asString();
		if(!valueItemsDBInstanceWeight["DBInstanceType"].isNull())
			itemsObject.dBInstanceType = valueItemsDBInstanceWeight["DBInstanceType"].asString();
		if(!valueItemsDBInstanceWeight["ReadonlyInstanceSQLDelayedTime"].isNull())
			itemsObject.readonlyInstanceSQLDelayedTime = valueItemsDBInstanceWeight["ReadonlyInstanceSQLDelayedTime"].asString();
		if(!valueItemsDBInstanceWeight["Role"].isNull())
			itemsObject.role = valueItemsDBInstanceWeight["Role"].asString();
		if(!valueItemsDBInstanceWeight["Weight"].isNull())
			itemsObject.weight = valueItemsDBInstanceWeight["Weight"].asString();
		items_.push_back(itemsObject);
	}

}

std::vector<CalculateDBInstanceWeightResult::DBInstanceWeight> CalculateDBInstanceWeightResult::getItems()const
{
	return items_;
}

