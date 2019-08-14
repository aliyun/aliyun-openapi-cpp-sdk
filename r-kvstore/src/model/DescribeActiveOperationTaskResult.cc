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

#include <alibabacloud/r-kvstore/model/DescribeActiveOperationTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["ItemsItem"];
	for (auto value : allItems)
	{
		ItemsItem itemsObject;
		if(!value["Id"].isNull())
			itemsObject.id = std::stoi(value["Id"].asString());
		if(!value["InsName"].isNull())
			itemsObject.insName = value["InsName"].asString();
		if(!value["DbType"].isNull())
			itemsObject.dbType = value["DbType"].asString();
		if(!value["StartTime"].isNull())
			itemsObject.startTime = value["StartTime"].asString();
		if(!value["SwitchTime"].isNull())
			itemsObject.switchTime = value["SwitchTime"].asString();
		if(!value["Deadline"].isNull())
			itemsObject.deadline = value["Deadline"].asString();
		if(!value["Status"].isNull())
			itemsObject.status = std::stoi(value["Status"].asString());
		if(!value["CreatedTime"].isNull())
			itemsObject.createdTime = value["CreatedTime"].asString();
		if(!value["ModifiedTime"].isNull())
			itemsObject.modifiedTime = value["ModifiedTime"].asString();
		if(!value["ResultInfo"].isNull())
			itemsObject.resultInfo = value["ResultInfo"].asString();
		if(!value["PrepareInterval"].isNull())
			itemsObject.prepareInterval = value["PrepareInterval"].asString();
		if(!value["TaskParams"].isNull())
			itemsObject.taskParams = value["TaskParams"].asString();
		if(!value["TaskType"].isNull())
			itemsObject.taskType = value["TaskType"].asString();
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

