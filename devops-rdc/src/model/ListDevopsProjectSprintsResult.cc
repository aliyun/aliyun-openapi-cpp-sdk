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

#include <alibabacloud/devops-rdc/model/ListDevopsProjectSprintsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops_rdc;
using namespace AlibabaCloud::Devops_rdc::Model;

ListDevopsProjectSprintsResult::ListDevopsProjectSprintsResult() :
	ServiceResult()
{}

ListDevopsProjectSprintsResult::ListDevopsProjectSprintsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDevopsProjectSprintsResult::~ListDevopsProjectSprintsResult()
{}

void ListDevopsProjectSprintsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allObjectNode = value["Object"]["Sprint"];
	for (auto valueObjectSprint : allObjectNode)
	{
		Sprint objectObject;
		if(!valueObjectSprint["Status"].isNull())
			objectObject.status = valueObjectSprint["Status"].asString();
		if(!valueObjectSprint["Accomplished"].isNull())
			objectObject.accomplished = valueObjectSprint["Accomplished"].asString();
		if(!valueObjectSprint["ProjectId"].isNull())
			objectObject.projectId = valueObjectSprint["ProjectId"].asString();
		if(!valueObjectSprint["IsDeleted"].isNull())
			objectObject.isDeleted = valueObjectSprint["IsDeleted"].asString() == "true";
		if(!valueObjectSprint["StartDate"].isNull())
			objectObject.startDate = valueObjectSprint["StartDate"].asString();
		if(!valueObjectSprint["Updated"].isNull())
			objectObject.updated = valueObjectSprint["Updated"].asString();
		if(!valueObjectSprint["CreatorId"].isNull())
			objectObject.creatorId = valueObjectSprint["CreatorId"].asString();
		if(!valueObjectSprint["DueDate"].isNull())
			objectObject.dueDate = valueObjectSprint["DueDate"].asString();
		if(!valueObjectSprint["Name"].isNull())
			objectObject.name = valueObjectSprint["Name"].asString();
		if(!valueObjectSprint["Created"].isNull())
			objectObject.created = valueObjectSprint["Created"].asString();
		if(!valueObjectSprint["Id"].isNull())
			objectObject.id = valueObjectSprint["Id"].asString();
		auto planToDoNode = value["PlanToDo"];
		if(!planToDoNode["Tasks"].isNull())
			objectObject.planToDo.tasks = std::stoi(planToDoNode["Tasks"].asString());
		if(!planToDoNode["WorkTimes"].isNull())
			objectObject.planToDo.workTimes = std::stoi(planToDoNode["WorkTimes"].asString());
		if(!planToDoNode["StoryPoints"].isNull())
			objectObject.planToDo.storyPoints = std::stoi(planToDoNode["StoryPoints"].asString());
		object_.push_back(objectObject);
	}
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["Successful"].isNull())
		successful_ = value["Successful"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["NextPageToken"].isNull())
		nextPageToken_ = value["NextPageToken"].asString();

}

std::string ListDevopsProjectSprintsResult::getNextPageToken()const
{
	return nextPageToken_;
}

std::string ListDevopsProjectSprintsResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<ListDevopsProjectSprintsResult::Sprint> ListDevopsProjectSprintsResult::getObject()const
{
	return object_;
}

std::string ListDevopsProjectSprintsResult::getErrorCode()const
{
	return errorCode_;
}

bool ListDevopsProjectSprintsResult::getSuccessful()const
{
	return successful_;
}

