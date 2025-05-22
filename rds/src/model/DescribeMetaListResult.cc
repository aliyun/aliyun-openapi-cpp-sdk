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

#include <alibabacloud/rds/model/DescribeMetaListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeMetaListResult::DescribeMetaListResult() :
	ServiceResult()
{}

DescribeMetaListResult::DescribeMetaListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMetaListResult::~DescribeMetaListResult()
{}

void DescribeMetaListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Meta"];
	for (auto valueItemsMeta : allItemsNode)
	{
		Meta itemsObject;
		if(!valueItemsMeta["Database"].isNull())
			itemsObject.database = valueItemsMeta["Database"].asString();
		if(!valueItemsMeta["Size"].isNull())
			itemsObject.size = valueItemsMeta["Size"].asString();
		if(!valueItemsMeta["Tables"].isNull())
			itemsObject.tables = valueItemsMeta["Tables"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["DBInstanceName"].isNull())
		dBInstanceName_ = value["DBInstanceName"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["TotalPageCount"].isNull())
		totalPageCount_ = std::stoi(value["TotalPageCount"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());

}

int DescribeMetaListResult::getTotalPageCount()const
{
	return totalPageCount_;
}

int DescribeMetaListResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeMetaListResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeMetaListResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeMetaListResult::Meta> DescribeMetaListResult::getItems()const
{
	return items_;
}

std::string DescribeMetaListResult::getDBInstanceName()const
{
	return dBInstanceName_;
}

