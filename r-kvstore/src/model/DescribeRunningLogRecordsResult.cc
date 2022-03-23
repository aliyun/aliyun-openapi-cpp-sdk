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

#include <alibabacloud/r-kvstore/model/DescribeRunningLogRecordsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeRunningLogRecordsResult::DescribeRunningLogRecordsResult() :
	ServiceResult()
{}

DescribeRunningLogRecordsResult::DescribeRunningLogRecordsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRunningLogRecordsResult::~DescribeRunningLogRecordsResult()
{}

void DescribeRunningLogRecordsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["LogRecords"];
	for (auto valueItemsLogRecords : allItemsNode)
	{
		LogRecords itemsObject;
		if(!valueItemsLogRecords["ConnInfo"].isNull())
			itemsObject.connInfo = valueItemsLogRecords["ConnInfo"].asString();
		if(!valueItemsLogRecords["CreateTime"].isNull())
			itemsObject.createTime = valueItemsLogRecords["CreateTime"].asString();
		if(!valueItemsLogRecords["Category"].isNull())
			itemsObject.category = valueItemsLogRecords["Category"].asString();
		if(!valueItemsLogRecords["InstanceId"].isNull())
			itemsObject.instanceId = valueItemsLogRecords["InstanceId"].asString();
		if(!valueItemsLogRecords["Content"].isNull())
			itemsObject.content = valueItemsLogRecords["Content"].asString();
		if(!valueItemsLogRecords["NodeId"].isNull())
			itemsObject.nodeId = valueItemsLogRecords["NodeId"].asString();
		if(!valueItemsLogRecords["Level"].isNull())
			itemsObject.level = valueItemsLogRecords["Level"].asString();
		if(!valueItemsLogRecords["Id"].isNull())
			itemsObject.id = std::stoi(valueItemsLogRecords["Id"].asString());
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

int DescribeRunningLogRecordsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeRunningLogRecordsResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeRunningLogRecordsResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeRunningLogRecordsResult::getInstanceId()const
{
	return instanceId_;
}

int DescribeRunningLogRecordsResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeRunningLogRecordsResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeRunningLogRecordsResult::LogRecords> DescribeRunningLogRecordsResult::getItems()const
{
	return items_;
}

std::string DescribeRunningLogRecordsResult::getEngine()const
{
	return engine_;
}

