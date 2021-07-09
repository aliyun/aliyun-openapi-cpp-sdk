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

#include <alibabacloud/devops-rdc/model/GetTaskDetailBaseResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops_rdc;
using namespace AlibabaCloud::Devops_rdc::Model;

GetTaskDetailBaseResult::GetTaskDetailBaseResult() :
	ServiceResult()
{}

GetTaskDetailBaseResult::GetTaskDetailBaseResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTaskDetailBaseResult::~GetTaskDetailBaseResult()
{}

void GetTaskDetailBaseResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto objectNode = value["Object"];
	if(!objectNode["IsFavorite"].isNull())
		object_.isFavorite = objectNode["IsFavorite"].asString() == "true";
	if(!objectNode["Organization"].isNull())
		object_.organization = objectNode["Organization"].asString();
	if(!objectNode["ExecutorId"].isNull())
		object_.executorId = objectNode["ExecutorId"].asString();
	if(!objectNode["ScenariofieldconfigId"].isNull())
		object_.scenariofieldconfigId = objectNode["ScenariofieldconfigId"].asString();
	if(!objectNode["ProjectId"].isNull())
		object_.projectId = objectNode["ProjectId"].asString();
	if(!objectNode["IsTopInProject"].isNull())
		object_.isTopInProject = objectNode["IsTopInProject"].asString() == "true";
	if(!objectNode["Priority"].isNull())
		object_.priority = std::stoi(objectNode["Priority"].asString());
	if(!objectNode["ShareStatus"].isNull())
		object_.shareStatus = std::stoi(objectNode["ShareStatus"].asString());
	if(!objectNode["Accomplished"].isNull())
		object_.accomplished = objectNode["Accomplished"].asString();
	if(!objectNode["TaskflowstatusId"].isNull())
		object_.taskflowstatusId = objectNode["TaskflowstatusId"].asString();
	if(!objectNode["Note"].isNull())
		object_.note = objectNode["Note"].asString();
	if(!objectNode["Updated"].isNull())
		object_.updated = objectNode["Updated"].asString();
	if(!objectNode["UniqueId"].isNull())
		object_.uniqueId = std::stoi(objectNode["UniqueId"].asString());
	if(!objectNode["IsArchived"].isNull())
		object_.isArchived = objectNode["IsArchived"].asString() == "true";
	if(!objectNode["Content"].isNull())
		object_.content = objectNode["Content"].asString();
	if(!objectNode["CommentsCount"].isNull())
		object_.commentsCount = std::stoi(objectNode["CommentsCount"].asString());
	if(!objectNode["Rating"].isNull())
		object_.rating = std::stoi(objectNode["Rating"].asString());
	if(!objectNode["Recurrence"].isNull())
		object_.recurrence = objectNode["Recurrence"].asString();
	if(!objectNode["ObjectType"].isNull())
		object_.objectType = objectNode["ObjectType"].asString();
	if(!objectNode["Progress"].isNull())
		object_.progress = std::stoi(objectNode["Progress"].asString());
	if(!objectNode["UntilDate"].isNull())
		object_.untilDate = objectNode["UntilDate"].asString();
	if(!objectNode["StartDate"].isNull())
		object_.startDate = objectNode["StartDate"].asString();
	if(!objectNode["StoryPoint"].isNull())
		object_.storyPoint = objectNode["StoryPoint"].asString();
	if(!objectNode["ObjectlinksCount"].isNull())
		object_.objectlinksCount = std::stoi(objectNode["ObjectlinksCount"].asString());
	if(!objectNode["Sprint"].isNull())
		object_.sprint = objectNode["Sprint"].asString();
	if(!objectNode["CreatorId"].isNull())
		object_.creatorId = objectNode["CreatorId"].asString();
	if(!objectNode["Source"].isNull())
		object_.source = objectNode["Source"].asString();
	if(!objectNode["SourceId"].isNull())
		object_.sourceId = objectNode["SourceId"].asString();
	if(!objectNode["OrganizationId"].isNull())
		object_.organizationId = objectNode["OrganizationId"].asString();
	if(!objectNode["SourceDate"].isNull())
		object_.sourceDate = objectNode["SourceDate"].asString();
	if(!objectNode["LikesCount"].isNull())
		object_.likesCount = std::stoi(objectNode["LikesCount"].asString());
	if(!objectNode["StageId"].isNull())
		object_.stageId = objectNode["StageId"].asString();
	if(!objectNode["Visible"].isNull())
		object_.visible = objectNode["Visible"].asString();
	if(!objectNode["IsDone"].isNull())
		object_.isDone = objectNode["IsDone"].asString() == "true";
	if(!objectNode["Parent"].isNull())
		object_.parent = objectNode["Parent"].asString();
	if(!objectNode["SprintId"].isNull())
		object_.sprintId = objectNode["SprintId"].asString();
	if(!objectNode["AttachmentsCount"].isNull())
		object_.attachmentsCount = std::stoi(objectNode["AttachmentsCount"].asString());
	if(!objectNode["DueDate"].isNull())
		object_.dueDate = objectNode["DueDate"].asString();
	if(!objectNode["Created"].isNull())
		object_.created = objectNode["Created"].asString();
	if(!objectNode["TaskId"].isNull())
		object_.taskId = objectNode["TaskId"].asString();
	if(!objectNode["Id"].isNull())
		object_.id = objectNode["Id"].asString();
	auto allCustomfieldsNode = objectNode["Customfields"]["Customfield"];
	for (auto objectNodeCustomfieldsCustomfield : allCustomfieldsNode)
	{
		Object::Customfield customfieldObject;
		if(!objectNodeCustomfieldsCustomfield["Type"].isNull())
			customfieldObject.type = objectNodeCustomfieldsCustomfield["Type"].asString();
		if(!objectNodeCustomfieldsCustomfield["CustomfieldId"].isNull())
			customfieldObject.customfieldId = objectNodeCustomfieldsCustomfield["CustomfieldId"].asString();
		auto allValueNode = objectNodeCustomfieldsCustomfield["Value"]["ValueInfo"];
		for (auto objectNodeCustomfieldsCustomfieldValueValueInfo : allValueNode)
		{
			Object::Customfield::ValueInfo valueObject;
			if(!objectNodeCustomfieldsCustomfieldValueValueInfo["Id"].isNull())
				valueObject.id = objectNodeCustomfieldsCustomfieldValueValueInfo["Id"].asString();
			if(!objectNodeCustomfieldsCustomfieldValueValueInfo["Title"].isNull())
				valueObject.title = objectNodeCustomfieldsCustomfieldValueValueInfo["Title"].asString();
			customfieldObject.value.push_back(valueObject);
		}
		auto allValues = value["Values"]["Value"];
		for (auto value : allValues)
			customfieldObject.values.push_back(value.asString());
		object_.customfields.push_back(customfieldObject);
	}
	auto allSubtasksNode = objectNode["Subtasks"]["Subtask"];
	for (auto objectNodeSubtasksSubtask : allSubtasksNode)
	{
		Object::Subtask subtaskObject;
		if(!objectNodeSubtasksSubtask["Content"].isNull())
			subtaskObject.content = objectNodeSubtasksSubtask["Content"].asString();
		if(!objectNodeSubtasksSubtask["Id"].isNull())
			subtaskObject.id = objectNodeSubtasksSubtask["Id"].asString();
		object_.subtasks.push_back(subtaskObject);
	}
	auto allInvolversNode = objectNode["Involvers"]["Involver"];
	for (auto objectNodeInvolversInvolver : allInvolversNode)
	{
		Object::Involver involverObject;
		if(!objectNodeInvolversInvolver["Name"].isNull())
			involverObject.name = objectNodeInvolversInvolver["Name"].asString();
		if(!objectNodeInvolversInvolver["Id"].isNull())
			involverObject.id = objectNodeInvolversInvolver["Id"].asString();
		object_.involvers.push_back(involverObject);
	}
	auto scenariofieldconfigNode = objectNode["Scenariofieldconfig"];
	if(!scenariofieldconfigNode["Icon"].isNull())
		object_.scenariofieldconfig.icon = scenariofieldconfigNode["Icon"].asString();
	if(!scenariofieldconfigNode["ProTemplateConfigType"].isNull())
		object_.scenariofieldconfig.proTemplateConfigType = scenariofieldconfigNode["ProTemplateConfigType"].asString();
	if(!scenariofieldconfigNode["Name"].isNull())
		object_.scenariofieldconfig.name = scenariofieldconfigNode["Name"].asString();
	if(!scenariofieldconfigNode["Id"].isNull())
		object_.scenariofieldconfig.id = scenariofieldconfigNode["Id"].asString();
	auto executorNode = objectNode["Executor"];
	if(!executorNode["AvatarUrl"].isNull())
		object_.executor.avatarUrl = executorNode["AvatarUrl"].asString();
	if(!executorNode["Name"].isNull())
		object_.executor.name = executorNode["Name"].asString();
	if(!executorNode["Id"].isNull())
		object_.executor.id = executorNode["Id"].asString();
	auto tasklistNode = objectNode["Tasklist"];
	if(!tasklistNode["Id"].isNull())
		object_.tasklist.id = tasklistNode["Id"].asString();
	if(!tasklistNode["Title"].isNull())
		object_.tasklist.title = tasklistNode["Title"].asString();
	auto taskflowstatusNode = objectNode["Taskflowstatus"];
	if(!taskflowstatusNode["TaskflowId"].isNull())
		object_.taskflowstatus.taskflowId = taskflowstatusNode["TaskflowId"].asString();
	if(!taskflowstatusNode["Name"].isNull())
		object_.taskflowstatus.name = taskflowstatusNode["Name"].asString();
	if(!taskflowstatusNode["Id"].isNull())
		object_.taskflowstatus.id = taskflowstatusNode["Id"].asString();
	if(!taskflowstatusNode["Kind"].isNull())
		object_.taskflowstatus.kind = taskflowstatusNode["Kind"].asString();
	auto creatorNode = objectNode["Creator"];
	if(!creatorNode["Name"].isNull())
		object_.creator.name = creatorNode["Name"].asString();
	if(!creatorNode["Id"].isNull())
		object_.creator.id = creatorNode["Id"].asString();
	auto reminderNode = objectNode["Reminder"];
	if(!reminderNode["Type"].isNull())
		object_.reminder.type = reminderNode["Type"].asString();
	if(!reminderNode["Date"].isNull())
		object_.reminder.date = reminderNode["Date"].asString();
	if(!reminderNode["Method"].isNull())
		object_.reminder.method = reminderNode["Method"].asString();
	if(!reminderNode["CreatorId"].isNull())
		object_.reminder.creatorId = reminderNode["CreatorId"].asString();
		auto allMemberRoles = reminderNode["MemberRoles"]["MemberRole"];
		for (auto value : allMemberRoles)
			object_.reminder.memberRoles.push_back(value.asString());
		auto allMembers = reminderNode["Members"]["Member"];
		for (auto value : allMembers)
			object_.reminder.members.push_back(value.asString());
		auto allRules = reminderNode["Rules"]["Rule"];
		for (auto value : allRules)
			object_.reminder.rules.push_back(value.asString());
	auto subtaskCountNode = objectNode["SubtaskCount"];
	if(!subtaskCountNode["Done"].isNull())
		object_.subtaskCount.done = std::stoi(subtaskCountNode["Done"].asString());
	if(!subtaskCountNode["Total"].isNull())
		object_.subtaskCount.total = std::stoi(subtaskCountNode["Total"].asString());
	auto workTimeNode = objectNode["WorkTime"];
	if(!workTimeNode["UsedTime"].isNull())
		object_.workTime.usedTime = std::stoi(workTimeNode["UsedTime"].asString());
	if(!workTimeNode["TotalTime"].isNull())
		object_.workTime.totalTime = std::stoi(workTimeNode["TotalTime"].asString());
	if(!workTimeNode["Unit"].isNull())
		object_.workTime.unit = workTimeNode["Unit"].asString();
	auto badgesNode = objectNode["Badges"];
	if(!badgesNode["LikesCount"].isNull())
		object_.badges.likesCount = std::stoi(badgesNode["LikesCount"].asString());
	if(!badgesNode["ObjectlinksCount"].isNull())
		object_.badges.objectlinksCount = std::stoi(badgesNode["ObjectlinksCount"].asString());
	if(!badgesNode["AttachmentsCount"].isNull())
		object_.badges.attachmentsCount = std::stoi(badgesNode["AttachmentsCount"].asString());
	if(!badgesNode["CommentsCount"].isNull())
		object_.badges.commentsCount = std::stoi(badgesNode["CommentsCount"].asString());
	auto stageNode = objectNode["Stage"];
	if(!stageNode["Name"].isNull())
		object_.stage.name = stageNode["Name"].asString();
	if(!stageNode["Id"].isNull())
		object_.stage.id = stageNode["Id"].asString();
		auto allLabels = objectNode["Labels"]["Label"];
		for (auto value : allLabels)
			object_.labels.push_back(value.asString());
		auto allDivisions = objectNode["Divisions"]["Division"];
		for (auto value : allDivisions)
			object_.divisions.push_back(value.asString());
		auto allAncestors = objectNode["Ancestors"]["Ancestor"];
		for (auto value : allAncestors)
			object_.ancestors.push_back(value.asString());
		auto allInvolveMembers = objectNode["InvolveMembers"]["InvolveMember"];
		for (auto value : allInvolveMembers)
			object_.involveMembers.push_back(value.asString());
		auto allTagIds = objectNode["TagIds"]["TagId"];
		for (auto value : allTagIds)
			object_.tagIds.push_back(value.asString());
		auto allAncestorIds = objectNode["AncestorIds"]["AncestorId"];
		for (auto value : allAncestorIds)
			object_.ancestorIds.push_back(value.asString());
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["Successful"].isNull())
		successful_ = value["Successful"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string GetTaskDetailBaseResult::getErrorMsg()const
{
	return errorMsg_;
}

GetTaskDetailBaseResult::Object GetTaskDetailBaseResult::getObject()const
{
	return object_;
}

std::string GetTaskDetailBaseResult::getErrorCode()const
{
	return errorCode_;
}

bool GetTaskDetailBaseResult::getSuccessful()const
{
	return successful_;
}

