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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["LogRecords"];
	for (auto value : allItems)
	{
		LogRecords itemsObject;
		if(!value["HostAddress"].isNull())
			itemsObject.hostAddress = value["HostAddress"].asString();
		if(!value["DBName"].isNull())
			itemsObject.dBName = value["DBName"].asString();
		if(!value["SQLText"].isNull())
			itemsObject.sQLText = value["SQLText"].asString();
		if(!value["QueryTimes"].isNull())
			itemsObject.queryTimes = value["QueryTimes"].asString();
		if(!value["DocsExamined"].isNull())
			itemsObject.docsExamined = std::stol(value["DocsExamined"].asString());
		if(!value["KeysExamined"].isNull())
			itemsObject.keysExamined = std::stol(value["KeysExamined"].asString());
		if(!value["ReturnRowCounts"].isNull())
			itemsObject.returnRowCounts = std::stol(value["ReturnRowCounts"].asString());
		if(!value["ExecutionStartTime"].isNull())
			itemsObject.executionStartTime = value["ExecutionStartTime"].asString();
		if(!value["AccountName"].isNull())
			itemsObject.accountName = value["AccountName"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

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

