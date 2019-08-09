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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allItems = value["Items"]["LogRecords"];
	for (auto value : allItems)
	{
		LogRecords itemsObject;
		if(!value["NodeId"].isNull())
			itemsObject.nodeId = value["NodeId"].asString();
		if(!value["IPAddress"].isNull())
			itemsObject.iPAddress = value["IPAddress"].asString();
		if(!value["DBName"].isNull())
			itemsObject.dBName = value["DBName"].asString();
		if(!value["DataBaseName"].isNull())
			itemsObject.dataBaseName = value["DataBaseName"].asString();
		if(!value["Command"].isNull())
			itemsObject.command = value["Command"].asString();
		if(!value["ElapsedTime"].isNull())
			itemsObject.elapsedTime = std::stol(value["ElapsedTime"].asString());
		if(!value["ExecuteTime"].isNull())
			itemsObject.executeTime = value["ExecuteTime"].asString();
		if(!value["Account"].isNull())
			itemsObject.account = value["Account"].asString();
		if(!value["AccountName"].isNull())
			itemsObject.accountName = value["AccountName"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
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

