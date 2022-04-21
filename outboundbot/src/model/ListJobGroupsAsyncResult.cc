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

#include <alibabacloud/outboundbot/model/ListJobGroupsAsyncResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

ListJobGroupsAsyncResult::ListJobGroupsAsyncResult() :
	ServiceResult()
{}

ListJobGroupsAsyncResult::ListJobGroupsAsyncResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListJobGroupsAsyncResult::~ListJobGroupsAsyncResult()
{}

void ListJobGroupsAsyncResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allJobGroupsNode = value["JobGroups"]["JobGroup"];
	for (auto valueJobGroupsJobGroup : allJobGroupsNode)
	{
		JobGroup jobGroupsObject;
		if(!valueJobGroupsJobGroup["Status"].isNull())
			jobGroupsObject.status = valueJobGroupsJobGroup["Status"].asString();
		if(!valueJobGroupsJobGroup["CreationTime"].isNull())
			jobGroupsObject.creationTime = std::stol(valueJobGroupsJobGroup["CreationTime"].asString());
		if(!valueJobGroupsJobGroup["JobGroupId"].isNull())
			jobGroupsObject.jobGroupId = valueJobGroupsJobGroup["JobGroupId"].asString();
		if(!valueJobGroupsJobGroup["JobGroupName"].isNull())
			jobGroupsObject.jobGroupName = valueJobGroupsJobGroup["JobGroupName"].asString();
		if(!valueJobGroupsJobGroup["TotalCallNum"].isNull())
			jobGroupsObject.totalCallNum = std::stoi(valueJobGroupsJobGroup["TotalCallNum"].asString());
		if(!valueJobGroupsJobGroup["ScriptId"].isNull())
			jobGroupsObject.scriptId = valueJobGroupsJobGroup["ScriptId"].asString();
		if(!valueJobGroupsJobGroup["JobGroupDescription"].isNull())
			jobGroupsObject.jobGroupDescription = valueJobGroupsJobGroup["JobGroupDescription"].asString();
		if(!valueJobGroupsJobGroup["JobDataParsingTaskId"].isNull())
			jobGroupsObject.jobDataParsingTaskId = valueJobGroupsJobGroup["JobDataParsingTaskId"].asString();
		if(!valueJobGroupsJobGroup["ScriptName"].isNull())
			jobGroupsObject.scriptName = valueJobGroupsJobGroup["ScriptName"].asString();
		if(!valueJobGroupsJobGroup["ScriptVersion"].isNull())
			jobGroupsObject.scriptVersion = valueJobGroupsJobGroup["ScriptVersion"].asString();
		if(!valueJobGroupsJobGroup["ModifyTime"].isNull())
			jobGroupsObject.modifyTime = valueJobGroupsJobGroup["ModifyTime"].asString();
		auto strategyNode = value["Strategy"];
		if(!strategyNode["EndTime"].isNull())
			jobGroupsObject.strategy.endTime = std::stol(strategyNode["EndTime"].asString());
		if(!strategyNode["StartTime"].isNull())
			jobGroupsObject.strategy.startTime = std::stol(strategyNode["StartTime"].asString());
		auto progressNode = value["Progress"];
		if(!progressNode["TotalNotAnswered"].isNull())
			jobGroupsObject.progress.totalNotAnswered = std::stoi(progressNode["TotalNotAnswered"].asString());
		if(!progressNode["Status"].isNull())
			jobGroupsObject.progress.status = progressNode["Status"].asString();
		if(!progressNode["StartTime"].isNull())
			jobGroupsObject.progress.startTime = std::stol(progressNode["StartTime"].asString());
		if(!progressNode["FailedNum"].isNull())
			jobGroupsObject.progress.failedNum = std::stoi(progressNode["FailedNum"].asString());
		if(!progressNode["PausedNum"].isNull())
			jobGroupsObject.progress.pausedNum = std::stoi(progressNode["PausedNum"].asString());
		if(!progressNode["CancelledNum"].isNull())
			jobGroupsObject.progress.cancelledNum = std::stoi(progressNode["CancelledNum"].asString());
		if(!progressNode["TotalCompleted"].isNull())
			jobGroupsObject.progress.totalCompleted = std::stoi(progressNode["TotalCompleted"].asString());
		if(!progressNode["TotalJobs"].isNull())
			jobGroupsObject.progress.totalJobs = std::stoi(progressNode["TotalJobs"].asString());
		if(!progressNode["Duration"].isNull())
			jobGroupsObject.progress.duration = std::stoi(progressNode["Duration"].asString());
		if(!progressNode["Scheduling"].isNull())
			jobGroupsObject.progress.scheduling = std::stoi(progressNode["Scheduling"].asString());
		if(!progressNode["ExecutingNum"].isNull())
			jobGroupsObject.progress.executingNum = std::stoi(progressNode["ExecutingNum"].asString());
		auto exportProgressNode = value["ExportProgress"];
		if(!exportProgressNode["Status"].isNull())
			jobGroupsObject.exportProgress.status = exportProgressNode["Status"].asString();
		if(!exportProgressNode["FileHttpUrl"].isNull())
			jobGroupsObject.exportProgress.fileHttpUrl = exportProgressNode["FileHttpUrl"].asString();
		if(!exportProgressNode["Progress"].isNull())
			jobGroupsObject.exportProgress.progress = exportProgressNode["Progress"].asString();
		jobGroups_.push_back(jobGroupsObject);
	}
	if(!value["Timeout"].isNull())
		timeout_ = value["Timeout"].asString() == "true";
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Vaild"].isNull())
		vaild_ = value["Vaild"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListJobGroupsAsyncResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListJobGroupsAsyncResult::getMessage()const
{
	return message_;
}

int ListJobGroupsAsyncResult::getPageSize()const
{
	return pageSize_;
}

int ListJobGroupsAsyncResult::getPageNumber()const
{
	return pageNumber_;
}

bool ListJobGroupsAsyncResult::getTimeout()const
{
	return timeout_;
}

int ListJobGroupsAsyncResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListJobGroupsAsyncResult::getCode()const
{
	return code_;
}

std::vector<ListJobGroupsAsyncResult::JobGroup> ListJobGroupsAsyncResult::getJobGroups()const
{
	return jobGroups_;
}

bool ListJobGroupsAsyncResult::getSuccess()const
{
	return success_;
}

bool ListJobGroupsAsyncResult::getVaild()const
{
	return vaild_;
}

