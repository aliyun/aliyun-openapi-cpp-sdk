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

#include <alibabacloud/rds/model/DescribeSlowLogRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

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
	auto allItems = value["Items"]["SQLSlowRecord"];
	for (auto value : allItems)
	{
		SQLSlowRecord itemsObject;
		if(!value["HostAddress"].isNull())
			itemsObject.hostAddress = value["HostAddress"].asString();
		if(!value["DBName"].isNull())
			itemsObject.dBName = value["DBName"].asString();
		if(!value["SQLText"].isNull())
			itemsObject.sQLText = value["SQLText"].asString();
		if(!value["QueryTimes"].isNull())
			itemsObject.queryTimes = std::stol(value["QueryTimes"].asString());
		if(!value["LockTimes"].isNull())
			itemsObject.lockTimes = std::stol(value["LockTimes"].asString());
		if(!value["ParseRowCounts"].isNull())
			itemsObject.parseRowCounts = std::stol(value["ParseRowCounts"].asString());
		if(!value["ReturnRowCounts"].isNull())
			itemsObject.returnRowCounts = std::stol(value["ReturnRowCounts"].asString());
		if(!value["ExecutionStartTime"].isNull())
			itemsObject.executionStartTime = value["ExecutionStartTime"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
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

std::string DescribeSlowLogRecordsResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

int DescribeSlowLogRecordsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeSlowLogRecordsResult::SQLSlowRecord> DescribeSlowLogRecordsResult::getItems()const
{
	return items_;
}

std::string DescribeSlowLogRecordsResult::getEngine()const
{
	return engine_;
}

