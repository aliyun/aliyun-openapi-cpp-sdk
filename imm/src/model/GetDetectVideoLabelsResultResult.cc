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

#include <alibabacloud/imm/model/GetDetectVideoLabelsResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

GetDetectVideoLabelsResultResult::GetDetectVideoLabelsResultResult() :
	ServiceResult()
{}

GetDetectVideoLabelsResultResult::GetDetectVideoLabelsResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDetectVideoLabelsResultResult::~GetDetectVideoLabelsResultResult()
{}

void GetDetectVideoLabelsResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLabelsNode = value["Labels"]["LabelsItem"];
	for (auto valueLabelsLabelsItem : allLabelsNode)
	{
		LabelsItem labelsObject;
		if(!valueLabelsLabelsItem["Language"].isNull())
			labelsObject.language = valueLabelsLabelsItem["Language"].asString();
		if(!valueLabelsLabelsItem["LabelName"].isNull())
			labelsObject.labelName = valueLabelsLabelsItem["LabelName"].asString();
		if(!valueLabelsLabelsItem["LabelLevel"].isNull())
			labelsObject.labelLevel = std::stol(valueLabelsLabelsItem["LabelLevel"].asString());
		if(!valueLabelsLabelsItem["LabelConfidence"].isNull())
			labelsObject.labelConfidence = std::stof(valueLabelsLabelsItem["LabelConfidence"].asString());
		if(!valueLabelsLabelsItem["ParentLabelName"].isNull())
			labelsObject.parentLabelName = valueLabelsLabelsItem["ParentLabelName"].asString();
		if(!valueLabelsLabelsItem["CentricScore"].isNull())
			labelsObject.centricScore = std::stof(valueLabelsLabelsItem["CentricScore"].asString());
		labels_.push_back(labelsObject);
	}
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

std::string GetDetectVideoLabelsResultResult::getStatus()const
{
	return status_;
}

std::string GetDetectVideoLabelsResultResult::getTaskId()const
{
	return taskId_;
}

std::string GetDetectVideoLabelsResultResult::getMessage()const
{
	return message_;
}

std::string GetDetectVideoLabelsResultResult::getEndTime()const
{
	return endTime_;
}

std::string GetDetectVideoLabelsResultResult::getProjectName()const
{
	return projectName_;
}

std::string GetDetectVideoLabelsResultResult::getUserData()const
{
	return userData_;
}

std::string GetDetectVideoLabelsResultResult::getTaskType()const
{
	return taskType_;
}

std::string GetDetectVideoLabelsResultResult::getStartTime()const
{
	return startTime_;
}

std::string GetDetectVideoLabelsResultResult::getEventId()const
{
	return eventId_;
}

std::vector<GetDetectVideoLabelsResultResult::LabelsItem> GetDetectVideoLabelsResultResult::getLabels()const
{
	return labels_;
}

std::string GetDetectVideoLabelsResultResult::getCode()const
{
	return code_;
}

