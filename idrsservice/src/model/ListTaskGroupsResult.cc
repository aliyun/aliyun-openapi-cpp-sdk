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

#include <alibabacloud/idrsservice/model/ListTaskGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Idrsservice;
using namespace AlibabaCloud::Idrsservice::Model;

ListTaskGroupsResult::ListTaskGroupsResult() :
	ServiceResult()
{}

ListTaskGroupsResult::ListTaskGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTaskGroupsResult::~ListTaskGroupsResult()
{}

void ListTaskGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalElements"].isNull())
		data_.totalElements = std::stol(dataNode["TotalElements"].asString());
	if(!dataNode["TotalPages"].isNull())
		data_.totalPages = std::stoi(dataNode["TotalPages"].asString());
	auto allItemsNode = dataNode["Items"]["ItemsItem"];
	for (auto dataNodeItemsItemsItem : allItemsNode)
	{
		Data::ItemsItem itemsItemObject;
		if(!dataNodeItemsItemsItem["CompletedTasks"].isNull())
			itemsItemObject.completedTasks = std::stoi(dataNodeItemsItemsItem["CompletedTasks"].asString());
		if(!dataNodeItemsItemsItem["CreatedAt"].isNull())
			itemsItemObject.createdAt = dataNodeItemsItemsItem["CreatedAt"].asString();
		if(!dataNodeItemsItemsItem["Id"].isNull())
			itemsItemObject.id = dataNodeItemsItemsItem["Id"].asString();
		if(!dataNodeItemsItemsItem["Name"].isNull())
			itemsItemObject.name = dataNodeItemsItemsItem["Name"].asString();
		if(!dataNodeItemsItemsItem["RuleId"].isNull())
			itemsItemObject.ruleId = dataNodeItemsItemsItem["RuleId"].asString();
		if(!dataNodeItemsItemsItem["RuleName"].isNull())
			itemsItemObject.ruleName = dataNodeItemsItemsItem["RuleName"].asString();
		if(!dataNodeItemsItemsItem["Status"].isNull())
			itemsItemObject.status = dataNodeItemsItemsItem["Status"].asString();
		if(!dataNodeItemsItemsItem["TotalTasks"].isNull())
			itemsItemObject.totalTasks = std::stoi(dataNodeItemsItemsItem["TotalTasks"].asString());
		auto allTaskIds = value["TaskIds"]["TaskIds"];
		for (auto value : allTaskIds)
			itemsItemObject.taskIds.push_back(value.asString());
		data_.items.push_back(itemsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListTaskGroupsResult::getMessage()const
{
	return message_;
}

ListTaskGroupsResult::Data ListTaskGroupsResult::getData()const
{
	return data_;
}

std::string ListTaskGroupsResult::getCode()const
{
	return code_;
}

