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

#include <alibabacloud/rds/model/DescribeSQLLogRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeSQLLogRecordsResult::DescribeSQLLogRecordsResult() :
	ServiceResult()
{}

DescribeSQLLogRecordsResult::DescribeSQLLogRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSQLLogRecordsResult::~DescribeSQLLogRecordsResult()
{}

void DescribeSQLLogRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["SQLRecord"];
	for (auto valueItemsSQLRecord : allItemsNode)
	{
		SQLRecord itemsObject;
		if(!valueItemsSQLRecord["AccountName"].isNull())
			itemsObject.accountName = valueItemsSQLRecord["AccountName"].asString();
		if(!valueItemsSQLRecord["DBName"].isNull())
			itemsObject.dBName = valueItemsSQLRecord["DBName"].asString();
		if(!valueItemsSQLRecord["ExecuteTime"].isNull())
			itemsObject.executeTime = valueItemsSQLRecord["ExecuteTime"].asString();
		if(!valueItemsSQLRecord["HostAddress"].isNull())
			itemsObject.hostAddress = valueItemsSQLRecord["HostAddress"].asString();
		if(!valueItemsSQLRecord["ReturnRowCounts"].isNull())
			itemsObject.returnRowCounts = std::stol(valueItemsSQLRecord["ReturnRowCounts"].asString());
		if(!valueItemsSQLRecord["SQLText"].isNull())
			itemsObject.sQLText = valueItemsSQLRecord["SQLText"].asString();
		if(!valueItemsSQLRecord["ThreadID"].isNull())
			itemsObject.threadID = valueItemsSQLRecord["ThreadID"].asString();
		if(!valueItemsSQLRecord["TotalExecutionTimes"].isNull())
			itemsObject.totalExecutionTimes = std::stol(valueItemsSQLRecord["TotalExecutionTimes"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stol(value["TotalRecordCount"].asString());

}

long DescribeSQLLogRecordsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeSQLLogRecordsResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeSQLLogRecordsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeSQLLogRecordsResult::SQLRecord> DescribeSQLLogRecordsResult::getItems()const
{
	return items_;
}

