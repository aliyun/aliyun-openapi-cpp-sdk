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

#include <alibabacloud/teambition-aliyun/model/GetProjectSprintInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Teambition_aliyun;
using namespace AlibabaCloud::Teambition_aliyun::Model;

GetProjectSprintInfoResult::GetProjectSprintInfoResult() :
	ServiceResult()
{}

GetProjectSprintInfoResult::GetProjectSprintInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetProjectSprintInfoResult::~GetProjectSprintInfoResult()
{}

void GetProjectSprintInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto objectNode = value["Object"];
	if(!objectNode["Accomplished"].isNull())
		object_.accomplished = objectNode["Accomplished"].asString();
	if(!objectNode["IsDeleted"].isNull())
		object_.isDeleted = objectNode["IsDeleted"].asString() == "true";
	if(!objectNode["Created"].isNull())
		object_.created = objectNode["Created"].asString();
	if(!objectNode["DueDate"].isNull())
		object_.dueDate = objectNode["DueDate"].asString();
	if(!objectNode["Name"].isNull())
		object_.name = objectNode["Name"].asString();
	if(!objectNode["CreatorId"].isNull())
		object_.creatorId = objectNode["CreatorId"].asString();
	if(!objectNode["Id"].isNull())
		object_.id = objectNode["Id"].asString();
	if(!objectNode["Updated"].isNull())
		object_.updated = objectNode["Updated"].asString();
	if(!objectNode["StartDate"].isNull())
		object_.startDate = objectNode["StartDate"].asString();
	if(!objectNode["Status"].isNull())
		object_.status = objectNode["Status"].asString();
	if(!objectNode["ProjectId"].isNull())
		object_.projectId = objectNode["ProjectId"].asString();
	auto planToDoNode = objectNode["PlanToDo"];
	if(!planToDoNode["StoryPoints"].isNull())
		object_.planToDo.storyPoints = std::stoi(planToDoNode["StoryPoints"].asString());
	if(!planToDoNode["WorkTimes"].isNull())
		object_.planToDo.workTimes = std::stoi(planToDoNode["WorkTimes"].asString());
	if(!planToDoNode["Tasks"].isNull())
		object_.planToDo.tasks = std::stoi(planToDoNode["Tasks"].asString());
	if(!value["Successful"].isNull())
		successful_ = value["Successful"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();

}

std::string GetProjectSprintInfoResult::getErrorMsg()const
{
	return errorMsg_;
}

GetProjectSprintInfoResult::Object GetProjectSprintInfoResult::getObject()const
{
	return object_;
}

std::string GetProjectSprintInfoResult::getErrorCode()const
{
	return errorCode_;
}

bool GetProjectSprintInfoResult::getSuccessful()const
{
	return successful_;
}

