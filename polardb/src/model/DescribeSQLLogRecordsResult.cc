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

#include <alibabacloud/polardb/model/DescribeSQLLogRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

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
	auto allItemsNode = value["Items"]["SQLLogRecord"];
	for (auto valueItemsSQLLogRecord : allItemsNode)
	{
		SQLLogRecord itemsObject;
		if(!valueItemsSQLLogRecord["ExecuteTime"].isNull())
			itemsObject.executeTime = valueItemsSQLLogRecord["ExecuteTime"].asString();
		if(!valueItemsSQLLogRecord["InsName"].isNull())
			itemsObject.insName = valueItemsSQLLogRecord["InsName"].asString();
		if(!valueItemsSQLLogRecord["HostAddress"].isNull())
			itemsObject.hostAddress = valueItemsSQLLogRecord["HostAddress"].asString();
		if(!valueItemsSQLLogRecord["UpdateRows"].isNull())
			itemsObject.updateRows = std::stol(valueItemsSQLLogRecord["UpdateRows"].asString());
		if(!valueItemsSQLLogRecord["SQLText"].isNull())
			itemsObject.sQLText = valueItemsSQLLogRecord["SQLText"].asString();
		if(!valueItemsSQLLogRecord["OriginTime"].isNull())
			itemsObject.originTime = valueItemsSQLLogRecord["OriginTime"].asString();
		if(!valueItemsSQLLogRecord["Consume"].isNull())
			itemsObject.consume = std::stol(valueItemsSQLLogRecord["Consume"].asString());
		if(!valueItemsSQLLogRecord["ScanRows"].isNull())
			itemsObject.scanRows = std::stol(valueItemsSQLLogRecord["ScanRows"].asString());
		if(!valueItemsSQLLogRecord["ThreadID"].isNull())
			itemsObject.threadID = std::stoi(valueItemsSQLLogRecord["ThreadID"].asString());
		if(!valueItemsSQLLogRecord["State"].isNull())
			itemsObject.state = valueItemsSQLLogRecord["State"].asString();
		if(!valueItemsSQLLogRecord["DBName"].isNull())
			itemsObject.dBName = valueItemsSQLLogRecord["DBName"].asString();
		if(!valueItemsSQLLogRecord["SqlType"].isNull())
			itemsObject.sqlType = valueItemsSQLLogRecord["SqlType"].asString();
		if(!valueItemsSQLLogRecord["Vip"].isNull())
			itemsObject.vip = valueItemsSQLLogRecord["Vip"].asString();
		if(!valueItemsSQLLogRecord["AccountName"].isNull())
			itemsObject.accountName = valueItemsSQLLogRecord["AccountName"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["MaxRecordsPerPage"].isNull())
		maxRecordsPerPage_ = std::stoi(value["MaxRecordsPerPage"].asString());
	if(!value["ItemsNumbers"].isNull())
		itemsNumbers_ = std::stoi(value["ItemsNumbers"].asString());
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["DBInstanceID"].isNull())
		dBInstanceID_ = value["DBInstanceID"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["TotalRecords"].isNull())
		totalRecords_ = std::stoi(value["TotalRecords"].asString());
	if(!value["Finish"].isNull())
		finish_ = value["Finish"].asString();
	if(!value["PageNumbers"].isNull())
		pageNumbers_ = std::stoi(value["PageNumbers"].asString());
	if(!value["JobId"].isNull())
		jobId_ = value["JobId"].asString();
	if(!value["PagingID"].isNull())
		pagingID_ = value["PagingID"].asString();
	if(!value["DBInstanceName"].isNull())
		dBInstanceName_ = value["DBInstanceName"].asString();

}

int DescribeSQLLogRecordsResult::getMaxRecordsPerPage()const
{
	return maxRecordsPerPage_;
}

int DescribeSQLLogRecordsResult::getItemsNumbers()const
{
	return itemsNumbers_;
}

std::string DescribeSQLLogRecordsResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeSQLLogRecordsResult::getDBInstanceID()const
{
	return dBInstanceID_;
}

std::string DescribeSQLLogRecordsResult::getStartTime()const
{
	return startTime_;
}

int DescribeSQLLogRecordsResult::getTotalRecords()const
{
	return totalRecords_;
}

std::vector<DescribeSQLLogRecordsResult::SQLLogRecord> DescribeSQLLogRecordsResult::getItems()const
{
	return items_;
}

std::string DescribeSQLLogRecordsResult::getFinish()const
{
	return finish_;
}

int DescribeSQLLogRecordsResult::getPageNumbers()const
{
	return pageNumbers_;
}

std::string DescribeSQLLogRecordsResult::getJobId()const
{
	return jobId_;
}

std::string DescribeSQLLogRecordsResult::getPagingID()const
{
	return pagingID_;
}

std::string DescribeSQLLogRecordsResult::getDBInstanceName()const
{
	return dBInstanceName_;
}

