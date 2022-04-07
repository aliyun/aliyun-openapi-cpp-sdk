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

#include <alibabacloud/dds/model/DescribeAuditRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

DescribeAuditRecordsResult::DescribeAuditRecordsResult() :
	ServiceResult()
{}

DescribeAuditRecordsResult::DescribeAuditRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAuditRecordsResult::~DescribeAuditRecordsResult()
{}

void DescribeAuditRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["SQLRecord"];
	for (auto valueItemsSQLRecord : allItemsNode)
	{
		SQLRecord itemsObject;
		if(!valueItemsSQLRecord["HostAddress"].isNull())
			itemsObject.hostAddress = valueItemsSQLRecord["HostAddress"].asString();
		if(!valueItemsSQLRecord["TableName"].isNull())
			itemsObject.tableName = valueItemsSQLRecord["TableName"].asString();
		if(!valueItemsSQLRecord["ReturnRowCounts"].isNull())
			itemsObject.returnRowCounts = std::stol(valueItemsSQLRecord["ReturnRowCounts"].asString());
		if(!valueItemsSQLRecord["DBName"].isNull())
			itemsObject.dBName = valueItemsSQLRecord["DBName"].asString();
		if(!valueItemsSQLRecord["ExecuteTime"].isNull())
			itemsObject.executeTime = valueItemsSQLRecord["ExecuteTime"].asString();
		if(!valueItemsSQLRecord["ThreadID"].isNull())
			itemsObject.threadID = valueItemsSQLRecord["ThreadID"].asString();
		if(!valueItemsSQLRecord["TotalExecutionTimes"].isNull())
			itemsObject.totalExecutionTimes = std::stol(valueItemsSQLRecord["TotalExecutionTimes"].asString());
		if(!valueItemsSQLRecord["Syntax"].isNull())
			itemsObject.syntax = valueItemsSQLRecord["Syntax"].asString();
		if(!valueItemsSQLRecord["AccountName"].isNull())
			itemsObject.accountName = valueItemsSQLRecord["AccountName"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeAuditRecordsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeAuditRecordsResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeAuditRecordsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeAuditRecordsResult::SQLRecord> DescribeAuditRecordsResult::getItems()const
{
	return items_;
}

