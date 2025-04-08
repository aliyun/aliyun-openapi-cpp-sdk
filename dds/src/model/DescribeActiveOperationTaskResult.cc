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

#include <alibabacloud/dds/model/DescribeActiveOperationTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

DescribeActiveOperationTaskResult::DescribeActiveOperationTaskResult() :
	ServiceResult()
{}

DescribeActiveOperationTaskResult::DescribeActiveOperationTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeActiveOperationTaskResult::~DescribeActiveOperationTaskResult()
{}

void DescribeActiveOperationTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["ItemsItem"];
	for (auto valueItemsItemsItem : allItemsNode)
	{
		ItemsItem itemsObject;
		if(!valueItemsItemsItem["Status"].isNull())
			itemsObject.status = std::stoi(valueItemsItemsItem["Status"].asString());
		if(!valueItemsItemsItem["TaskParams"].isNull())
			itemsObject.taskParams = valueItemsItemsItem["TaskParams"].asString();
		if(!valueItemsItemsItem["PrepareInterval"].isNull())
			itemsObject.prepareInterval = valueItemsItemsItem["PrepareInterval"].asString();
		if(!valueItemsItemsItem["Deadline"].isNull())
			itemsObject.deadline = valueItemsItemsItem["Deadline"].asString();
		if(!valueItemsItemsItem["StartTime"].isNull())
			itemsObject.startTime = valueItemsItemsItem["StartTime"].asString();
		if(!valueItemsItemsItem["TaskType"].isNull())
			itemsObject.taskType = valueItemsItemsItem["TaskType"].asString();
		if(!valueItemsItemsItem["ModifiedTime"].isNull())
			itemsObject.modifiedTime = valueItemsItemsItem["ModifiedTime"].asString();
		if(!valueItemsItemsItem["InsName"].isNull())
			itemsObject.insName = valueItemsItemsItem["InsName"].asString();
		if(!valueItemsItemsItem["DbType"].isNull())
			itemsObject.dbType = valueItemsItemsItem["DbType"].asString();
		if(!valueItemsItemsItem["Region"].isNull())
			itemsObject.region = valueItemsItemsItem["Region"].asString();
		if(!valueItemsItemsItem["ResultInfo"].isNull())
			itemsObject.resultInfo = valueItemsItemsItem["ResultInfo"].asString();
		if(!valueItemsItemsItem["CreatedTime"].isNull())
			itemsObject.createdTime = valueItemsItemsItem["CreatedTime"].asString();
		if(!valueItemsItemsItem["Id"].isNull())
			itemsObject.id = std::stoi(valueItemsItemsItem["Id"].asString());
		if(!valueItemsItemsItem["SwitchTime"].isNull())
			itemsObject.switchTime = valueItemsItemsItem["SwitchTime"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeActiveOperationTaskResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeActiveOperationTaskResult::getPageSize()const
{
	return pageSize_;
}

int DescribeActiveOperationTaskResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeActiveOperationTaskResult::ItemsItem> DescribeActiveOperationTaskResult::getItems()const
{
	return items_;
}

