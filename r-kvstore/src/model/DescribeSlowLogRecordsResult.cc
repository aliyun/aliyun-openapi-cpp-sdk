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

#include <alibabacloud/r-kvstore/model/DescribeSlowLogRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

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
		if(!valueItemsLogRecords["Account"].isNull())
			itemsObject.account = valueItemsLogRecords["Account"].asString();
		if(!valueItemsLogRecords["ElapsedTime"].isNull())
			itemsObject.elapsedTime = std::stol(valueItemsLogRecords["ElapsedTime"].asString());
		if(!valueItemsLogRecords["Command"].isNull())
			itemsObject.command = valueItemsLogRecords["Command"].asString();
		if(!valueItemsLogRecords["DBName"].isNull())
			itemsObject.dBName = valueItemsLogRecords["DBName"].asString();
		if(!valueItemsLogRecords["ExecuteTime"].isNull())
			itemsObject.executeTime = valueItemsLogRecords["ExecuteTime"].asString();
		if(!valueItemsLogRecords["DataBaseName"].isNull())
			itemsObject.dataBaseName = valueItemsLogRecords["DataBaseName"].asString();
		if(!valueItemsLogRecords["NodeId"].isNull())
			itemsObject.nodeId = valueItemsLogRecords["NodeId"].asString();
		if(!valueItemsLogRecords["AccountName"].isNull())
			itemsObject.accountName = valueItemsLogRecords["AccountName"].asString();
		if(!valueItemsLogRecords["IPAddress"].isNull())
			itemsObject.iPAddress = valueItemsLogRecords["IPAddress"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeSlowLogRecordsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeSlowLogRecordsResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeSlowLogRecordsResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeSlowLogRecordsResult::getInstanceId()const
{
	return instanceId_;
}

int DescribeSlowLogRecordsResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeSlowLogRecordsResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeSlowLogRecordsResult::LogRecords> DescribeSlowLogRecordsResult::getItems()const
{
	return items_;
}

std::string DescribeSlowLogRecordsResult::getEngine()const
{
	return engine_;
}

