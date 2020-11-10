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

#include <alibabacloud/rds/model/DescribeErrorLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeErrorLogsResult::DescribeErrorLogsResult() :
	ServiceResult()
{}

DescribeErrorLogsResult::DescribeErrorLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeErrorLogsResult::~DescribeErrorLogsResult()
{}

void DescribeErrorLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["ErrorLog"];
	for (auto valueItemsErrorLog : allItemsNode)
	{
		ErrorLog itemsObject;
		if(!valueItemsErrorLog["CreateTime"].isNull())
			itemsObject.createTime = valueItemsErrorLog["CreateTime"].asString();
		if(!valueItemsErrorLog["ErrorInfo"].isNull())
			itemsObject.errorInfo = valueItemsErrorLog["ErrorInfo"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());

}

int DescribeErrorLogsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeErrorLogsResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeErrorLogsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeErrorLogsResult::ErrorLog> DescribeErrorLogsResult::getItems()const
{
	return items_;
}

