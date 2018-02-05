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

#include <alibabacloud/rds/model/DescribeOptimizeAdviceOnBigTableResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeOptimizeAdviceOnBigTableResult::DescribeOptimizeAdviceOnBigTableResult() :
	ServiceResult()
{}

DescribeOptimizeAdviceOnBigTableResult::DescribeOptimizeAdviceOnBigTableResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOptimizeAdviceOnBigTableResult::~DescribeOptimizeAdviceOnBigTableResult()
{}

void DescribeOptimizeAdviceOnBigTableResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["AdviceOnBigTable"];
	for (auto value : allItems)
	{
		AdviceOnBigTable itemsObject;
		if(!value["DBName"].isNull())
			itemsObject.dBName = value["DBName"].asString();
		if(!value["TableName"].isNull())
			itemsObject.tableName = value["TableName"].asString();
		if(!value["TableSize"].isNull())
			itemsObject.tableSize = std::stol(value["TableSize"].asString());
		if(!value["DataSize"].isNull())
			itemsObject.dataSize = std::stol(value["DataSize"].asString());
		if(!value["IndexSize"].isNull())
			itemsObject.indexSize = std::stol(value["IndexSize"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["TotalRecordsCount"].isNull())
		totalRecordsCount_ = std::stoi(value["TotalRecordsCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeOptimizeAdviceOnBigTableResult::getTotalRecordsCount()const
{
	return totalRecordsCount_;
}

int DescribeOptimizeAdviceOnBigTableResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeOptimizeAdviceOnBigTableResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeOptimizeAdviceOnBigTableResult::AdviceOnBigTable> DescribeOptimizeAdviceOnBigTableResult::getItems()const
{
	return items_;
}

