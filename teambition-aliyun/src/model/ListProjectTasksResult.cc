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

#include <alibabacloud/teambition-aliyun/model/ListProjectTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Teambition_aliyun;
using namespace AlibabaCloud::Teambition_aliyun::Model;

ListProjectTasksResult::ListProjectTasksResult() :
	ServiceResult()
{}

ListProjectTasksResult::ListProjectTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListProjectTasksResult::~ListProjectTasksResult()
{}

void ListProjectTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allObjectNode = value["Object"]["Task"];
	for (auto valueObjectTask : allObjectNode)
	{
		Task objectObject;
		if(!valueObjectTask["TasklistId"].isNull())
			objectObject.tasklistId = valueObjectTask["TasklistId"].asString();
		if(!valueObjectTask["ProjectId"].isNull())
			objectObject.projectId = valueObjectTask["ProjectId"].asString();
		if(!valueObjectTask["TaskgroupId"].isNull())
			objectObject.taskgroupId = valueObjectTask["TaskgroupId"].asString();
		if(!valueObjectTask["Name"].isNull())
			objectObject.name = valueObjectTask["Name"].asString();
		if(!valueObjectTask["CreatorId"].isNull())
			objectObject.creatorId = valueObjectTask["CreatorId"].asString();
		if(!valueObjectTask["Created"].isNull())
			objectObject.created = valueObjectTask["Created"].asString();
		if(!valueObjectTask["ModifierId"].isNull())
			objectObject.modifierId = valueObjectTask["ModifierId"].asString();
		if(!valueObjectTask["Updated"].isNull())
			objectObject.updated = valueObjectTask["Updated"].asString();
		if(!valueObjectTask["Id"].isNull())
			objectObject.id = valueObjectTask["Id"].asString();
		object_.push_back(objectObject);
	}
	if(!value["Successful"].isNull())
		successful_ = value["Successful"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();

}

std::string ListProjectTasksResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<ListProjectTasksResult::Task> ListProjectTasksResult::getObject()const
{
	return object_;
}

std::string ListProjectTasksResult::getErrorCode()const
{
	return errorCode_;
}

bool ListProjectTasksResult::getSuccessful()const
{
	return successful_;
}

