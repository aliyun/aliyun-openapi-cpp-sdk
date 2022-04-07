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

#include <alibabacloud/dds/model/DescribeSlowLogRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

DescribeSlowLogRecordsResult::DescribeSlowLogRecordsResult() :
	ServiceResult()
{}

DescribeSlowLogRecordsResult::DescribeSlowLogRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSlowLogRecordsResult::~DescribeSlowLogRecordsResult()
{}

void DescribeSlowLogRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["LogRecords"];
	for (auto valueItemsLogRecords : allItemsNode)
	{
		LogRecords itemsObject;
		if(!valueItemsLogRecords["ExecutionStartTime"].isNull())
			itemsObject.executionStartTime = valueItemsLogRecords["ExecutionStartTime"].asString();
		if(!valueItemsLogRecords["HostAddress"].isNull())
			itemsObject.hostAddress = valueItemsLogRecords["HostAddress"].asString();
		if(!valueItemsLogRecords["QueryTimes"].isNull())
			itemsObject.queryTimes = valueItemsLogRecords["QueryTimes"].asString();
		if(!valueItemsLogRecords["TableName"].isNull())
			itemsObject.tableName = valueItemsLogRecords["TableName"].asString();
		if(!valueItemsLogRecords["SQLText"].isNull())
			itemsObject.sQLText = valueItemsLogRecords["SQLText"].asString();
		if(!valueItemsLogRecords["ReturnRowCounts"].isNull())
			itemsObject.returnRowCounts = std::stol(valueItemsLogRecords["ReturnRowCounts"].asString());
		if(!valueItemsLogRecords["KeysExamined"].isNull())
			itemsObject.keysExamined = std::stol(valueItemsLogRecords["KeysExamined"].asString());
		if(!valueItemsLogRecords["DBName"].isNull())
			itemsObject.dBName = valueItemsLogRecords["DBName"].asString();
		if(!valueItemsLogRecords["DocsExamined"].isNull())
			itemsObject.docsExamined = std::stol(valueItemsLogRecords["DocsExamined"].asString());
		if(!valueItemsLogRecords["AccountName"].isNull())
			itemsObject.accountName = valueItemsLogRecords["AccountName"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();

}

int DescribeSlowLogRecordsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeSlowLogRecordsResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeSlowLogRecordsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeSlowLogRecordsResult::LogRecords> DescribeSlowLogRecordsResult::getItems()const
{
	return items_;
}

std::string DescribeSlowLogRecordsResult::getEngine()const
{
	return engine_;
}

