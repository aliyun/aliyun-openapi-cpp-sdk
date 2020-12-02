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

#include <alibabacloud/idrsservice/model/ListDetectionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Idrsservice;
using namespace AlibabaCloud::Idrsservice::Model;

ListDetectionsResult::ListDetectionsResult() :
	ServiceResult()
{}

ListDetectionsResult::ListDetectionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDetectionsResult::~ListDetectionsResult()
{}

void ListDetectionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allErrorsNode = value["Errors"]["ErrorsItem"];
	for (auto valueErrorsErrorsItem : allErrorsNode)
	{
		ErrorsItem errorsObject;
		if(!valueErrorsErrorsItem["Field"].isNull())
			errorsObject.field = valueErrorsErrorsItem["Field"].asString();
		if(!valueErrorsErrorsItem["Message"].isNull())
			errorsObject.message = valueErrorsErrorsItem["Message"].asString();
		errors_.push_back(errorsObject);
	}
	auto dataNode = value["Data"];
	if(!dataNode["TotalElements"].isNull())
		data_.totalElements = std::stol(dataNode["TotalElements"].asString());
	if(!dataNode["TotalPages"].isNull())
		data_.totalPages = std::stoi(dataNode["TotalPages"].asString());
	auto allItemsNode = dataNode["Items"]["ItemsItem"];
	for (auto dataNodeItemsItemsItem : allItemsNode)
	{
		Data::ItemsItem itemsItemObject;
		if(!dataNodeItemsItemsItem["CreatedAt"].isNull())
			itemsItemObject.createdAt = dataNodeItemsItemsItem["CreatedAt"].asString();
		if(!dataNodeItemsItemsItem["DepartmentId"].isNull())
			itemsItemObject.departmentId = dataNodeItemsItemsItem["DepartmentId"].asString();
		if(!dataNodeItemsItemsItem["DepartmentName"].isNull())
			itemsItemObject.departmentName = dataNodeItemsItemsItem["DepartmentName"].asString();
		if(!dataNodeItemsItemsItem["Id"].isNull())
			itemsItemObject.id = dataNodeItemsItemsItem["Id"].asString();
		if(!dataNodeItemsItemsItem["RecordingType"].isNull())
			itemsItemObject.recordingType = dataNodeItemsItemsItem["RecordingType"].asString();
		if(!dataNodeItemsItemsItem["RuleId"].isNull())
			itemsItemObject.ruleId = dataNodeItemsItemsItem["RuleId"].asString();
		if(!dataNodeItemsItemsItem["RuleName"].isNull())
			itemsItemObject.ruleName = dataNodeItemsItemsItem["RuleName"].asString();
		if(!dataNodeItemsItemsItem["Status"].isNull())
			itemsItemObject.status = dataNodeItemsItemsItem["Status"].asString();
		auto allTasksNode = dataNodeItemsItemsItem["Tasks"]["TasksItem"];
		for (auto dataNodeItemsItemsItemTasksTasksItem : allTasksNode)
		{
			Data::ItemsItem::TasksItem tasksObject;
			if(!dataNodeItemsItemsItemTasksTasksItem["CreatedAt"].isNull())
				tasksObject.createdAt = dataNodeItemsItemsItemTasksTasksItem["CreatedAt"].asString();
			if(!dataNodeItemsItemsItemTasksTasksItem["Id"].isNull())
				tasksObject.id = dataNodeItemsItemsItemTasksTasksItem["Id"].asString();
			if(!dataNodeItemsItemsItemTasksTasksItem["Status"].isNull())
				tasksObject.status = dataNodeItemsItemsItemTasksTasksItem["Status"].asString();
			if(!dataNodeItemsItemsItemTasksTasksItem["VideoMetaUrl"].isNull())
				tasksObject.videoMetaUrl = dataNodeItemsItemsItemTasksTasksItem["VideoMetaUrl"].asString();
			if(!dataNodeItemsItemsItemTasksTasksItem["VideoUrl"].isNull())
				tasksObject.videoUrl = dataNodeItemsItemsItemTasksTasksItem["VideoUrl"].asString();
			itemsItemObject.tasks.push_back(tasksObject);
		}
		data_.items.push_back(itemsItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::vector<ListDetectionsResult::ErrorsItem> ListDetectionsResult::getErrors()const
{
	return errors_;
}

std::string ListDetectionsResult::getMessage()const
{
	return message_;
}

ListDetectionsResult::Data ListDetectionsResult::getData()const
{
	return data_;
}

std::string ListDetectionsResult::getCode()const
{
	return code_;
}

