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

#include <alibabacloud/devops-rdc/model/GetTaskListFilterResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops_rdc;
using namespace AlibabaCloud::Devops_rdc::Model;

GetTaskListFilterResult::GetTaskListFilterResult() :
	ServiceResult()
{}

GetTaskListFilterResult::GetTaskListFilterResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTaskListFilterResult::~GetTaskListFilterResult()
{}

void GetTaskListFilterResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto objectNode = value["Object"];
	if(!objectNode["NextPageToken"].isNull())
		object_.nextPageToken = objectNode["NextPageToken"].asString();
	if(!objectNode["TotalSize"].isNull())
		object_.totalSize = std::stoi(objectNode["TotalSize"].asString());
	auto allResultNode = objectNode["Result"]["Task"];
	for (auto objectNodeResultTask : allResultNode)
	{
		Object::Task taskObject;
		if(!objectNodeResultTask["IsFavorite"].isNull())
			taskObject.isFavorite = objectNodeResultTask["IsFavorite"].asString() == "true";
		if(!objectNodeResultTask["ExecutorId"].isNull())
			taskObject.executorId = objectNodeResultTask["ExecutorId"].asString();
		if(!objectNodeResultTask["ProjectId"].isNull())
			taskObject.projectId = objectNodeResultTask["ProjectId"].asString();
		if(!objectNodeResultTask["Priority"].isNull())
			taskObject.priority = std::stoi(objectNodeResultTask["Priority"].asString());
		if(!objectNodeResultTask["IsTopInProject"].isNull())
			taskObject.isTopInProject = objectNodeResultTask["IsTopInProject"].asString() == "true";
		if(!objectNodeResultTask["ScenariofFeldConfigId"].isNull())
			taskObject.scenariofFeldConfigId = objectNodeResultTask["ScenariofFeldConfigId"].asString();
		if(!objectNodeResultTask["ShareStatus"].isNull())
			taskObject.shareStatus = std::stoi(objectNodeResultTask["ShareStatus"].asString());
		if(!objectNodeResultTask["Accomplished"].isNull())
			taskObject.accomplished = objectNodeResultTask["Accomplished"].asString();
		if(!objectNodeResultTask["TaskListId"].isNull())
			taskObject.taskListId = objectNodeResultTask["TaskListId"].asString();
		if(!objectNodeResultTask["Note"].isNull())
			taskObject.note = objectNodeResultTask["Note"].asString();
		if(!objectNodeResultTask["Updated"].isNull())
			taskObject.updated = objectNodeResultTask["Updated"].asString();
		if(!objectNodeResultTask["UniqueId"].isNull())
			taskObject.uniqueId = std::stoi(objectNodeResultTask["UniqueId"].asString());
		if(!objectNodeResultTask["IsArchived"].isNull())
			taskObject.isArchived = objectNodeResultTask["IsArchived"].asString() == "true";
		if(!objectNodeResultTask["Content"].isNull())
			taskObject.content = objectNodeResultTask["Content"].asString();
		if(!objectNodeResultTask["Rating"].isNull())
			taskObject.rating = std::stoi(objectNodeResultTask["Rating"].asString());
		if(!objectNodeResultTask["CommentsCount"].isNull())
			taskObject.commentsCount = std::stoi(objectNodeResultTask["CommentsCount"].asString());
		if(!objectNodeResultTask["TaskFlowStatusId"].isNull())
			taskObject.taskFlowStatusId = objectNodeResultTask["TaskFlowStatusId"].asString();
		if(!objectNodeResultTask["Recurrence"].isNull())
			taskObject.recurrence = objectNodeResultTask["Recurrence"].asString();
		if(!objectNodeResultTask["ObjectType"].isNull())
			taskObject.objectType = objectNodeResultTask["ObjectType"].asString();
		if(!objectNodeResultTask["Progress"].isNull())
			taskObject.progress = std::stoi(objectNodeResultTask["Progress"].asString());
		if(!objectNodeResultTask["UntilDate"].isNull())
			taskObject.untilDate = objectNodeResultTask["UntilDate"].asString();
		if(!objectNodeResultTask["StoryPoint"].isNull())
			taskObject.storyPoint = objectNodeResultTask["StoryPoint"].asString();
		if(!objectNodeResultTask["ObjectlinksCount"].isNull())
			taskObject.objectlinksCount = std::stoi(objectNodeResultTask["ObjectlinksCount"].asString());
		if(!objectNodeResultTask["StartDate"].isNull())
			taskObject.startDate = objectNodeResultTask["StartDate"].asString();
		if(!objectNodeResultTask["Sprint"].isNull())
			taskObject.sprint = objectNodeResultTask["Sprint"].asString();
		if(!objectNodeResultTask["CreatorId"].isNull())
			taskObject.creatorId = objectNodeResultTask["CreatorId"].asString();
		if(!objectNodeResultTask["Source"].isNull())
			taskObject.source = objectNodeResultTask["Source"].asString();
		if(!objectNodeResultTask["SourceId"].isNull())
			taskObject.sourceId = objectNodeResultTask["SourceId"].asString();
		if(!objectNodeResultTask["SourceDate"].isNull())
			taskObject.sourceDate = objectNodeResultTask["SourceDate"].asString();
		if(!objectNodeResultTask["OrganizationId"].isNull())
			taskObject.organizationId = objectNodeResultTask["OrganizationId"].asString();
		if(!objectNodeResultTask["LikesCount"].isNull())
			taskObject.likesCount = std::stoi(objectNodeResultTask["LikesCount"].asString());
		if(!objectNodeResultTask["StageId"].isNull())
			taskObject.stageId = objectNodeResultTask["StageId"].asString();
		if(!objectNodeResultTask["Visible"].isNull())
			taskObject.visible = objectNodeResultTask["Visible"].asString();
		if(!objectNodeResultTask["IsDone"].isNull())
			taskObject.isDone = objectNodeResultTask["IsDone"].asString() == "true";
		if(!objectNodeResultTask["Parent"].isNull())
			taskObject.parent = objectNodeResultTask["Parent"].asString();
		if(!objectNodeResultTask["SprintId"].isNull())
			taskObject.sprintId = objectNodeResultTask["SprintId"].asString();
		if(!objectNodeResultTask["AttachmentsCount"].isNull())
			taskObject.attachmentsCount = std::stoi(objectNodeResultTask["AttachmentsCount"].asString());
		if(!objectNodeResultTask["DueDate"].isNull())
			taskObject.dueDate = objectNodeResultTask["DueDate"].asString();
		if(!objectNodeResultTask["TaskUniqueId"].isNull())
			taskObject.taskUniqueId = objectNodeResultTask["TaskUniqueId"].asString();
		if(!objectNodeResultTask["Created"].isNull())
			taskObject.created = objectNodeResultTask["Created"].asString();
		if(!objectNodeResultTask["TaskId"].isNull())
			taskObject.taskId = objectNodeResultTask["TaskId"].asString();
		if(!objectNodeResultTask["Id"].isNull())
			taskObject.id = objectNodeResultTask["Id"].asString();
		auto allCustomfieldsNode = objectNodeResultTask["Customfields"]["Customfield"];
		for (auto objectNodeResultTaskCustomfieldsCustomfield : allCustomfieldsNode)
		{
			Object::Task::Customfield customfieldsObject;
			if(!objectNodeResultTaskCustomfieldsCustomfield["Type"].isNull())
				customfieldsObject.type = objectNodeResultTaskCustomfieldsCustomfield["Type"].asString();
			if(!objectNodeResultTaskCustomfieldsCustomfield["CustomfieldId"].isNull())
				customfieldsObject.customfieldId = objectNodeResultTaskCustomfieldsCustomfield["CustomfieldId"].asString();
			if(!objectNodeResultTaskCustomfieldsCustomfield["Values"].isNull())
				customfieldsObject.values = objectNodeResultTaskCustomfieldsCustomfield["Values"].asString();
			auto allValueNode = objectNodeResultTaskCustomfieldsCustomfield["Value"]["ValueItem"];
			for (auto objectNodeResultTaskCustomfieldsCustomfieldValueValueItem : allValueNode)
			{
				Object::Task::Customfield::ValueItem valueObject;
				if(!objectNodeResultTaskCustomfieldsCustomfieldValueValueItem["Id"].isNull())
					valueObject.id = objectNodeResultTaskCustomfieldsCustomfieldValueValueItem["Id"].asString();
				if(!objectNodeResultTaskCustomfieldsCustomfieldValueValueItem["Title"].isNull())
					valueObject.title = objectNodeResultTaskCustomfieldsCustomfieldValueValueItem["Title"].asString();
				customfieldsObject.value.push_back(valueObject);
			}
			taskObject.customfields.push_back(customfieldsObject);
		}
		auto workTimeNode = value["WorkTime"];
		if(!workTimeNode["UsedTime"].isNull())
			taskObject.workTime.usedTime = std::stoi(workTimeNode["UsedTime"].asString());
		if(!workTimeNode["TotalTime"].isNull())
			taskObject.workTime.totalTime = std::stoi(workTimeNode["TotalTime"].asString());
		if(!workTimeNode["Unit"].isNull())
			taskObject.workTime.unit = workTimeNode["Unit"].asString();
		auto badgesNode = value["Badges"];
		if(!badgesNode["LikesCount"].isNull())
			taskObject.badges.likesCount = std::stoi(badgesNode["LikesCount"].asString());
		if(!badgesNode["ObjectlinksCount"].isNull())
			taskObject.badges.objectlinksCount = std::stoi(badgesNode["ObjectlinksCount"].asString());
		if(!badgesNode["AttachmentsCount"].isNull())
			taskObject.badges.attachmentsCount = std::stoi(badgesNode["AttachmentsCount"].asString());
		if(!badgesNode["CommentsCount"].isNull())
			taskObject.badges.commentsCount = std::stoi(badgesNode["CommentsCount"].asString());
		auto subtaskCountNode = value["SubtaskCount"];
		if(!subtaskCountNode["Done"].isNull())
			taskObject.subtaskCount.done = std::stoi(subtaskCountNode["Done"].asString());
		if(!subtaskCountNode["Total"].isNull())
			taskObject.subtaskCount.total = std::stoi(subtaskCountNode["Total"].asString());
		auto reminderNode = value["Reminder"];
		if(!reminderNode["Type"].isNull())
			taskObject.reminder.type = reminderNode["Type"].asString();
		if(!reminderNode["Date"].isNull())
			taskObject.reminder.date = reminderNode["Date"].asString();
		if(!reminderNode["CreatorId"].isNull())
			taskObject.reminder.creatorId = reminderNode["CreatorId"].asString();
			auto allMembers = reminderNode["Members"]["Member"];
			for (auto value : allMembers)
				taskObject.reminder.members.push_back(value.asString());
			auto allRules = reminderNode["Rules"]["Rule"];
			for (auto value : allRules)
				taskObject.reminder.rules.push_back(value.asString());
		auto creatorNode = value["Creator"];
		if(!creatorNode["Name"].isNull())
			taskObject.creator.name = creatorNode["Name"].asString();
		if(!creatorNode["AvatarUrl"].isNull())
			taskObject.creator.avatarUrl = creatorNode["AvatarUrl"].asString();
		if(!creatorNode["Id"].isNull())
			taskObject.creator.id = creatorNode["Id"].asString();
		auto stageNode = value["Stage"];
		if(!stageNode["Name"].isNull())
			taskObject.stage.name = stageNode["Name"].asString();
		if(!stageNode["Id"].isNull())
			taskObject.stage.id = stageNode["Id"].asString();
		auto executorNode = value["Executor"];
		if(!executorNode["Name"].isNull())
			taskObject.executor.name = executorNode["Name"].asString();
		if(!executorNode["AvatarUrl"].isNull())
			taskObject.executor.avatarUrl = executorNode["AvatarUrl"].asString();
		if(!executorNode["Id"].isNull())
			taskObject.executor.id = executorNode["Id"].asString();
		auto taskFlowStatusNode = value["TaskFlowStatus"];
		if(!taskFlowStatusNode["TaskFlowId"].isNull())
			taskObject.taskFlowStatus.taskFlowId = taskFlowStatusNode["TaskFlowId"].asString();
		if(!taskFlowStatusNode["Name"].isNull())
			taskObject.taskFlowStatus.name = taskFlowStatusNode["Name"].asString();
		if(!taskFlowStatusNode["Pos"].isNull())
			taskObject.taskFlowStatus.pos = std::stoi(taskFlowStatusNode["Pos"].asString());
		if(!taskFlowStatusNode["Kind"].isNull())
			taskObject.taskFlowStatus.kind = taskFlowStatusNode["Kind"].asString();
		if(!taskFlowStatusNode["Id"].isNull())
			taskObject.taskFlowStatus.id = taskFlowStatusNode["Id"].asString();
		auto allInvolveMembers = value["InvolveMembers"]["InvolveMember"];
		for (auto value : allInvolveMembers)
			taskObject.involveMembers.push_back(value.asString());
		auto allTagIds = value["TagIds"]["TagId"];
		for (auto value : allTagIds)
			taskObject.tagIds.push_back(value.asString());
		auto allLabels = value["Labels"]["Label"];
		for (auto value : allLabels)
			taskObject.labels.push_back(value.asString());
		auto allDivisions = value["Divisions"]["Division"];
		for (auto value : allDivisions)
			taskObject.divisions.push_back(value.asString());
		auto allAncestorIds = value["AncestorIds"]["AncestorId"];
		for (auto value : allAncestorIds)
			taskObject.ancestorIds.push_back(value.asString());
		object_.result.push_back(taskObject);
	}
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();
	if(!value["Successful"].isNull())
		successful_ = value["Successful"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string GetTaskListFilterResult::getErrorMsg()const
{
	return errorMsg_;
}

GetTaskListFilterResult::Object GetTaskListFilterResult::getObject()const
{
	return object_;
}

std::string GetTaskListFilterResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetTaskListFilterResult::getSuccessful()const
{
	return successful_;
}

