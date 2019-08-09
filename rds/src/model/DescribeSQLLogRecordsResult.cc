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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allItems = value["Items"]["SQLRecord"];
	for (auto value : allItems)
	{
		SQLRecord itemsObject;
		if(!value["DBName"].isNull())
			itemsObject.dBName = value["DBName"].asString();
		if(!value["AccountName"].isNull())
			itemsObject.accountName = value["AccountName"].asString();
		if(!value["HostAddress"].isNull())
			itemsObject.hostAddress = value["HostAddress"].asString();
		if(!value["SQLText"].isNull())
			itemsObject.sQLText = value["SQLText"].asString();
		if(!value["TotalExecutionTimes"].isNull())
			itemsObject.totalExecutionTimes = std::stol(value["TotalExecutionTimes"].asString());
		if(!value["ReturnRowCounts"].isNull())
			itemsObject.returnRowCounts = std::stol(value["ReturnRowCounts"].asString());
		if(!value["ExecuteTime"].isNull())
			itemsObject.executeTime = value["ExecuteTime"].asString();
		if(!value["ThreadID"].isNull())
			itemsObject.threadID = value["ThreadID"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stol(value["TotalRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

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

