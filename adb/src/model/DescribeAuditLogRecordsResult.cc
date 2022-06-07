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

#include <alibabacloud/adb/model/DescribeAuditLogRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeAuditLogRecordsResult::DescribeAuditLogRecordsResult() :
	ServiceResult()
{}

DescribeAuditLogRecordsResult::DescribeAuditLogRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAuditLogRecordsResult::~DescribeAuditLogRecordsResult()
{}

void DescribeAuditLogRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["SlowLogRecord"];
	for (auto valueItemsSlowLogRecord : allItemsNode)
	{
		SlowLogRecord itemsObject;
		if(!valueItemsSlowLogRecord["HostAddress"].isNull())
			itemsObject.hostAddress = valueItemsSlowLogRecord["HostAddress"].asString();
		if(!valueItemsSlowLogRecord["Succeed"].isNull())
			itemsObject.succeed = valueItemsSlowLogRecord["Succeed"].asString();
		if(!valueItemsSlowLogRecord["SQLText"].isNull())
			itemsObject.sQLText = valueItemsSlowLogRecord["SQLText"].asString();
		if(!valueItemsSlowLogRecord["TotalTime"].isNull())
			itemsObject.totalTime = valueItemsSlowLogRecord["TotalTime"].asString();
		if(!valueItemsSlowLogRecord["ConnId"].isNull())
			itemsObject.connId = valueItemsSlowLogRecord["ConnId"].asString();
		if(!valueItemsSlowLogRecord["DBName"].isNull())
			itemsObject.dBName = valueItemsSlowLogRecord["DBName"].asString();
		if(!valueItemsSlowLogRecord["SQLType"].isNull())
			itemsObject.sQLType = valueItemsSlowLogRecord["SQLType"].asString();
		if(!valueItemsSlowLogRecord["ExecuteTime"].isNull())
			itemsObject.executeTime = valueItemsSlowLogRecord["ExecuteTime"].asString();
		if(!valueItemsSlowLogRecord["ProcessID"].isNull())
			itemsObject.processID = valueItemsSlowLogRecord["ProcessID"].asString();
		if(!valueItemsSlowLogRecord["User"].isNull())
			itemsObject.user = valueItemsSlowLogRecord["User"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();

}

std::string DescribeAuditLogRecordsResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeAuditLogRecordsResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeAuditLogRecordsResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeAuditLogRecordsResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::vector<DescribeAuditLogRecordsResult::SlowLogRecord> DescribeAuditLogRecordsResult::getItems()const
{
	return items_;
}

