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

#include <alibabacloud/teambition-aliyun/model/CreateProjectTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Teambition_aliyun;
using namespace AlibabaCloud::Teambition_aliyun::Model;

CreateProjectTaskResult::CreateProjectTaskResult() :
	ServiceResult()
{}

CreateProjectTaskResult::CreateProjectTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateProjectTaskResult::~CreateProjectTaskResult()
{}

void CreateProjectTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto objectNode = value["Object"];
	if(!objectNode["Note"].isNull())
		object_.note = objectNode["Note"].asString();
	if(!objectNode["TasklistId"].isNull())
		object_.tasklistId = objectNode["TasklistId"].asString();
	if(!objectNode["DueDate"].isNull())
		object_.dueDate = objectNode["DueDate"].asString();
	if(!objectNode["Rating"].isNull())
		object_.rating = std::stoi(objectNode["Rating"].asString());
	if(!objectNode["Source"].isNull())
		object_.source = objectNode["Source"].asString();
	if(!objectNode["Content"].isNull())
		object_.content = objectNode["Content"].asString();
	if(!objectNode["TaskflowstatusId"].isNull())
		object_.taskflowstatusId = objectNode["TaskflowstatusId"].asString();
	if(!objectNode["TaskType"].isNull())
		object_.taskType = objectNode["TaskType"].asString();
	if(!objectNode["ScenarioFieldConfigId"].isNull())
		object_.scenarioFieldConfigId = objectNode["ScenarioFieldConfigId"].asString();
	if(!objectNode["Pos"].isNull())
		object_.pos = std::stoi(objectNode["Pos"].asString());
	if(!objectNode["AncestorIds"].isNull())
		object_.ancestorIds = objectNode["AncestorIds"].asString();
	if(!objectNode["CreatorId"].isNull())
		object_.creatorId = objectNode["CreatorId"].asString();
	if(!objectNode["Visible"].isNull())
		object_.visible = objectNode["Visible"].asString();
	if(!objectNode["ExecutorId"].isNull())
		object_.executorId = objectNode["ExecutorId"].asString();
	if(!objectNode["StoryPoint"].isNull())
		object_.storyPoint = objectNode["StoryPoint"].asString();
	if(!objectNode["Created"].isNull())
		object_.created = objectNode["Created"].asString();
	if(!objectNode["OrganizationId"].isNull())
		object_.organizationId = objectNode["OrganizationId"].asString();
	if(!objectNode["Priority"].isNull())
		object_.priority = std::stoi(objectNode["Priority"].asString());
	if(!objectNode["IsDone"].isNull())
		object_.isDone = objectNode["IsDone"].asString() == "true";
	if(!objectNode["Id"].isNull())
		object_.id = objectNode["Id"].asString();
	if(!objectNode["Updated"].isNull())
		object_.updated = objectNode["Updated"].asString();
	if(!objectNode["UniqueId"].isNull())
		object_.uniqueId = std::stoi(objectNode["UniqueId"].asString());
	if(!objectNode["StartDate"].isNull())
		object_.startDate = objectNode["StartDate"].asString();
	if(!objectNode["SprintId"].isNull())
		object_.sprintId = objectNode["SprintId"].asString();
	if(!objectNode["ProjectId"].isNull())
		object_.projectId = objectNode["ProjectId"].asString();
	if(!value["Successful"].isNull())
		successful_ = value["Successful"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();

}

std::string CreateProjectTaskResult::getErrorMsg()const
{
	return errorMsg_;
}

CreateProjectTaskResult::Object CreateProjectTaskResult::getObject()const
{
	return object_;
}

std::string CreateProjectTaskResult::getErrorCode()const
{
	return errorCode_;
}

bool CreateProjectTaskResult::getSuccessful()const
{
	return successful_;
}

