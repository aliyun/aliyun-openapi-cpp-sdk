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

#include <alibabacloud/rds/model/DescribeOptimizeAdviceOnMissIndexResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeOptimizeAdviceOnMissIndexResult::DescribeOptimizeAdviceOnMissIndexResult() :
	ServiceResult()
{}

DescribeOptimizeAdviceOnMissIndexResult::DescribeOptimizeAdviceOnMissIndexResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOptimizeAdviceOnMissIndexResult::~DescribeOptimizeAdviceOnMissIndexResult()
{}

void DescribeOptimizeAdviceOnMissIndexResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["AdviceOnMissIndex"];
	for (auto value : allItems)
	{
		AdviceOnMissIndex itemsObject;
		if(!value["DBName"].isNull())
			itemsObject.dBName = value["DBName"].asString();
		if(!value["TableName"].isNull())
			itemsObject.tableName = value["TableName"].asString();
		if(!value["QueryColumn"].isNull())
			itemsObject.queryColumn = value["QueryColumn"].asString();
		if(!value["SQLText"].isNull())
			itemsObject.sQLText = value["SQLText"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["TotalRecordsCount"].isNull())
		totalRecordsCount_ = std::stoi(value["TotalRecordsCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeOptimizeAdviceOnMissIndexResult::getTotalRecordsCount()const
{
	return totalRecordsCount_;
}

int DescribeOptimizeAdviceOnMissIndexResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

std::string DescribeOptimizeAdviceOnMissIndexResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

int DescribeOptimizeAdviceOnMissIndexResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeOptimizeAdviceOnMissIndexResult::AdviceOnMissIndex> DescribeOptimizeAdviceOnMissIndexResult::getItems()const
{
	return items_;
}

