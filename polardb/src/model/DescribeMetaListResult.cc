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

#include <alibabacloud/polardb/model/DescribeMetaListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

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
	auto allItemsNode = value["Items"]["MetaItem"];
	for (auto valueItemsMetaItem : allItemsNode)
	{
		MetaItem itemsObject;
		if(!valueItemsMetaItem["Database"].isNull())
			itemsObject.database = valueItemsMetaItem["Database"].asString();
		auto allTables = value["Tables"]["Table"];
		for (auto value : allTables)
			itemsObject.tables.push_back(value.asString());
		items_.push_back(itemsObject);
	}
	if(!value["TotalPageCount"].isNull())
		totalPageCount_ = value["TotalPageCount"].asString();
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = value["TotalRecordCount"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();

}

std::string DescribeMetaListResult::getTotalPageCount()const
{
	return totalPageCount_;
}

std::string DescribeMetaListResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

std::string DescribeMetaListResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeMetaListResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeMetaListResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::vector<DescribeMetaListResult::MetaItem> DescribeMetaListResult::getItems()const
{
	return items_;
}

