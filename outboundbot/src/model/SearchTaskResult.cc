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

#include <alibabacloud/outboundbot/model/SearchTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

SearchTaskResult::SearchTaskResult() :
	ServiceResult()
{}

SearchTaskResult::SearchTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchTaskResult::~SearchTaskResult()
{}

void SearchTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSearchTaskInfoListNode = value["SearchTaskInfoList"]["SearchTaskInfo"];
	for (auto valueSearchTaskInfoListSearchTaskInfo : allSearchTaskInfoListNode)
	{
		SearchTaskInfo searchTaskInfoListObject;
		if(!valueSearchTaskInfoListSearchTaskInfo["JobGroupName"].isNull())
			searchTaskInfoListObject.jobGroupName = valueSearchTaskInfoListSearchTaskInfo["JobGroupName"].asString();
		if(!valueSearchTaskInfoListSearchTaskInfo["UserId"].isNull())
			searchTaskInfoListObject.userId = valueSearchTaskInfoListSearchTaskInfo["UserId"].asString();
		if(!valueSearchTaskInfoListSearchTaskInfo["ActualTime"].isNull())
			searchTaskInfoListObject.actualTime = std::stol(valueSearchTaskInfoListSearchTaskInfo["ActualTime"].asString());
		if(!valueSearchTaskInfoListSearchTaskInfo["CalledNumber"].isNull())
			searchTaskInfoListObject.calledNumber = valueSearchTaskInfoListSearchTaskInfo["CalledNumber"].asString();
		if(!valueSearchTaskInfoListSearchTaskInfo["TaskStatusString"].isNull())
			searchTaskInfoListObject.taskStatusString = valueSearchTaskInfoListSearchTaskInfo["TaskStatusString"].asString();
		if(!valueSearchTaskInfoListSearchTaskInfo["TaskStatusName"].isNull())
			searchTaskInfoListObject.taskStatusName = valueSearchTaskInfoListSearchTaskInfo["TaskStatusName"].asString();
		if(!valueSearchTaskInfoListSearchTaskInfo["JobStatus"].isNull())
			searchTaskInfoListObject.jobStatus = std::stoi(valueSearchTaskInfoListSearchTaskInfo["JobStatus"].asString());
		if(!valueSearchTaskInfoListSearchTaskInfo["DialException"].isNull())
			searchTaskInfoListObject.dialException = valueSearchTaskInfoListSearchTaskInfo["DialException"].asString();
		if(!valueSearchTaskInfoListSearchTaskInfo["UserName"].isNull())
			searchTaskInfoListObject.userName = valueSearchTaskInfoListSearchTaskInfo["UserName"].asString();
		if(!valueSearchTaskInfoListSearchTaskInfo["CallDurationDisplay"].isNull())
			searchTaskInfoListObject.callDurationDisplay = valueSearchTaskInfoListSearchTaskInfo["CallDurationDisplay"].asString();
		if(!valueSearchTaskInfoListSearchTaskInfo["HasAnswered"].isNull())
			searchTaskInfoListObject.hasAnswered = valueSearchTaskInfoListSearchTaskInfo["HasAnswered"].asString() == "true";
		if(!valueSearchTaskInfoListSearchTaskInfo["JobStatusName"].isNull())
			searchTaskInfoListObject.jobStatusName = valueSearchTaskInfoListSearchTaskInfo["JobStatusName"].asString();
		if(!valueSearchTaskInfoListSearchTaskInfo["CallDuration"].isNull())
			searchTaskInfoListObject.callDuration = std::stoi(valueSearchTaskInfoListSearchTaskInfo["CallDuration"].asString());
		if(!valueSearchTaskInfoListSearchTaskInfo["TaskCreateTime"].isNull())
			searchTaskInfoListObject.taskCreateTime = std::stol(valueSearchTaskInfoListSearchTaskInfo["TaskCreateTime"].asString());
		if(!valueSearchTaskInfoListSearchTaskInfo["JobStatusString"].isNull())
			searchTaskInfoListObject.jobStatusString = valueSearchTaskInfoListSearchTaskInfo["JobStatusString"].asString();
		if(!valueSearchTaskInfoListSearchTaskInfo["HasReachedEndOfFlow"].isNull())
			searchTaskInfoListObject.hasReachedEndOfFlow = valueSearchTaskInfoListSearchTaskInfo["HasReachedEndOfFlow"].asString() == "true";
		if(!valueSearchTaskInfoListSearchTaskInfo["InstanceId"].isNull())
			searchTaskInfoListObject.instanceId = valueSearchTaskInfoListSearchTaskInfo["InstanceId"].asString();
		if(!valueSearchTaskInfoListSearchTaskInfo["HasHangUpByRejection"].isNull())
			searchTaskInfoListObject.hasHangUpByRejection = valueSearchTaskInfoListSearchTaskInfo["HasHangUpByRejection"].asString() == "true";
		if(!valueSearchTaskInfoListSearchTaskInfo["TaskEndReason"].isNull())
			searchTaskInfoListObject.taskEndReason = std::stoi(valueSearchTaskInfoListSearchTaskInfo["TaskEndReason"].asString());
		if(!valueSearchTaskInfoListSearchTaskInfo["JobGroupId"].isNull())
			searchTaskInfoListObject.jobGroupId = valueSearchTaskInfoListSearchTaskInfo["JobGroupId"].asString();
		if(!valueSearchTaskInfoListSearchTaskInfo["TaskStatus"].isNull())
			searchTaskInfoListObject.taskStatus = std::stoi(valueSearchTaskInfoListSearchTaskInfo["TaskStatus"].asString());
		if(!valueSearchTaskInfoListSearchTaskInfo["JobId"].isNull())
			searchTaskInfoListObject.jobId = valueSearchTaskInfoListSearchTaskInfo["JobId"].asString();
		if(!valueSearchTaskInfoListSearchTaskInfo["RecordingDuration"].isNull())
			searchTaskInfoListObject.recordingDuration = std::stoi(valueSearchTaskInfoListSearchTaskInfo["RecordingDuration"].asString());
		if(!valueSearchTaskInfoListSearchTaskInfo["TaskId"].isNull())
			searchTaskInfoListObject.taskId = valueSearchTaskInfoListSearchTaskInfo["TaskId"].asString();
		if(!valueSearchTaskInfoListSearchTaskInfo["DialExceptionOld"].isNull())
			searchTaskInfoListObject.dialExceptionOld = valueSearchTaskInfoListSearchTaskInfo["DialExceptionOld"].asString();
		if(!valueSearchTaskInfoListSearchTaskInfo["HasLastPlaybackCompleted"].isNull())
			searchTaskInfoListObject.hasLastPlaybackCompleted = valueSearchTaskInfoListSearchTaskInfo["HasLastPlaybackCompleted"].asString() == "true";
		if(!valueSearchTaskInfoListSearchTaskInfo["ScriptName"].isNull())
			searchTaskInfoListObject.scriptName = valueSearchTaskInfoListSearchTaskInfo["ScriptName"].asString();
		auto allDialExceptionCodes = value["DialExceptionCodes"]["String"];
		for (auto value : allDialExceptionCodes)
			searchTaskInfoListObject.dialExceptionCodes.push_back(value.asString());
		searchTaskInfoList_.push_back(searchTaskInfoListObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["PageIndex"].isNull())
		pageIndex_ = std::stoi(value["PageIndex"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

std::string SearchTaskResult::getMessage()const
{
	return message_;
}

int SearchTaskResult::getPageSize()const
{
	return pageSize_;
}

long SearchTaskResult::getTotal()const
{
	return total_;
}

int SearchTaskResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

int SearchTaskResult::getPageIndex()const
{
	return pageIndex_;
}

std::string SearchTaskResult::getCode()const
{
	return code_;
}

std::vector<SearchTaskResult::SearchTaskInfo> SearchTaskResult::getSearchTaskInfoList()const
{
	return searchTaskInfoList_;
}

bool SearchTaskResult::getSuccess()const
{
	return success_;
}

