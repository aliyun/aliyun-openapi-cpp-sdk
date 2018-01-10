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
	auto allItems = value["Items"]["SQLRecord"];
	for (auto value : allItems)
	{
		SQLRecord sQLRecordObject;
		sQLRecordObject.dBName = value["DBName"].asString();
		sQLRecordObject.accountName = value["AccountName"].asString();
		sQLRecordObject.hostAddress = value["HostAddress"].asString();
		sQLRecordObject.sQLText = value["SQLText"].asString();
		sQLRecordObject.totalExecutionTimes = std::stol(value["TotalExecutionTimes"].asString());
		sQLRecordObject.returnRowCounts = std::stol(value["ReturnRowCounts"].asString());
		sQLRecordObject.executeTime = value["ExecuteTime"].asString();
		sQLRecordObject.threadID = value["ThreadID"].asString();
		items_.push_back(sQLRecordObject);
	}
	totalRecordCount_ = std::stol(value["TotalRecordCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

long DescribeSQLLogRecordsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

void DescribeSQLLogRecordsResult::setTotalRecordCount(long totalRecordCount)
{
	totalRecordCount_ = totalRecordCount;
}

int DescribeSQLLogRecordsResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

void DescribeSQLLogRecordsResult::setPageRecordCount(int pageRecordCount)
{
	pageRecordCount_ = pageRecordCount;
}

int DescribeSQLLogRecordsResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeSQLLogRecordsResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

