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

#include <alibabacloud/imm/model/GetVideoModerationResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

GetVideoModerationResultResult::GetVideoModerationResultResult() :
	ServiceResult()
{}

GetVideoModerationResultResult::GetVideoModerationResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetVideoModerationResultResult::~GetVideoModerationResultResult()
{}

void GetVideoModerationResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto moderationResultNode = value["ModerationResult"];
	if(!moderationResultNode["URI"].isNull())
		moderationResult_.uRI = moderationResultNode["URI"].asString();
	if(!moderationResultNode["Suggestion"].isNull())
		moderationResult_.suggestion = moderationResultNode["Suggestion"].asString();
	auto framesNode = moderationResultNode["Frames"];
	if(!framesNode["TotalCount"].isNull())
		moderationResult_.frames.totalCount = std::stoi(framesNode["TotalCount"].asString());
	auto allBlockFramesNode = framesNode["BlockFrames"]["BlockFramesItem"];
	for (auto framesNodeBlockFramesBlockFramesItem : allBlockFramesNode)
	{
		ModerationResult::Frames::BlockFramesItem blockFramesItemObject;
		if(!framesNodeBlockFramesBlockFramesItem["Rate"].isNull())
			blockFramesItemObject.rate = framesNodeBlockFramesBlockFramesItem["Rate"].asString();
		if(!framesNodeBlockFramesBlockFramesItem["Offset"].isNull())
			blockFramesItemObject.offset = std::stoi(framesNodeBlockFramesBlockFramesItem["Offset"].asString());
		if(!framesNodeBlockFramesBlockFramesItem["Label"].isNull())
			blockFramesItemObject.label = framesNodeBlockFramesBlockFramesItem["Label"].asString();
		moderationResult_.frames.blockFrames.push_back(blockFramesItemObject);
	}
		auto allCategories = moderationResultNode["Categories"]["Categories"];
		for (auto value : allCategories)
			moderationResult_.categories.push_back(value.asString());
	if(!value["ProjectName"].isNull())
		projectName_ = value["ProjectName"].asString();
	if(!value["EventId"].isNull())
		eventId_ = value["EventId"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["UserData"].isNull())
		userData_ = value["UserData"].asString();
	if(!value["TaskType"].isNull())
		taskType_ = value["TaskType"].asString();
	if(!value["TaskId"].isNull())
		taskId_ = value["TaskId"].asString();

}

std::string GetVideoModerationResultResult::getStatus()const
{
	return status_;
}

std::string GetVideoModerationResultResult::getTaskId()const
{
	return taskId_;
}

std::string GetVideoModerationResultResult::getMessage()const
{
	return message_;
}

std::string GetVideoModerationResultResult::getEndTime()const
{
	return endTime_;
}

std::string GetVideoModerationResultResult::getProjectName()const
{
	return projectName_;
}

std::string GetVideoModerationResultResult::getUserData()const
{
	return userData_;
}

GetVideoModerationResultResult::ModerationResult GetVideoModerationResultResult::getModerationResult()const
{
	return moderationResult_;
}

std::string GetVideoModerationResultResult::getTaskType()const
{
	return taskType_;
}

std::string GetVideoModerationResultResult::getStartTime()const
{
	return startTime_;
}

std::string GetVideoModerationResultResult::getEventId()const
{
	return eventId_;
}

std::string GetVideoModerationResultResult::getCode()const
{
	return code_;
}

