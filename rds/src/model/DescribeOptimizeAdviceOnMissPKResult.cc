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

#include <alibabacloud/rds/model/DescribeOptimizeAdviceOnMissPKResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeOptimizeAdviceOnMissPKResult::DescribeOptimizeAdviceOnMissPKResult() :
	ServiceResult()
{}

DescribeOptimizeAdviceOnMissPKResult::DescribeOptimizeAdviceOnMissPKResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeOptimizeAdviceOnMissPKResult::~DescribeOptimizeAdviceOnMissPKResult()
{}

void DescribeOptimizeAdviceOnMissPKResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["AdviceOnMissPK"];
	for (auto value : allItems)
	{
		AdviceOnMissPK itemsObject;
		if(!value["DBName"].isNull())
			itemsObject.dBName = value["DBName"].asString();
		if(!value["TableName"].isNull())
			itemsObject.tableName = value["TableName"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["TotalRecordsCount"].isNull())
		totalRecordsCount_ = std::stoi(value["TotalRecordsCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeOptimizeAdviceOnMissPKResult::getTotalRecordsCount()const
{
	return totalRecordsCount_;
}

int DescribeOptimizeAdviceOnMissPKResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeOptimizeAdviceOnMissPKResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeOptimizeAdviceOnMissPKResult::AdviceOnMissPK> DescribeOptimizeAdviceOnMissPKResult::getItems()const
{
	return items_;
}

