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

#include <alibabacloud/outboundbot/model/ListJobGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

ListJobGroupsResult::ListJobGroupsResult() :
	ServiceResult()
{}

ListJobGroupsResult::ListJobGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListJobGroupsResult::~ListJobGroupsResult()
{}

void ListJobGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto jobGroupsNode = value["JobGroups"];
	if(!jobGroupsNode["PageNumber"].isNull())
		jobGroups_.pageNumber = std::stoi(jobGroupsNode["PageNumber"].asString());
	if(!jobGroupsNode["PageSize"].isNull())
		jobGroups_.pageSize = std::stoi(jobGroupsNode["PageSize"].asString());
	if(!jobGroupsNode["TotalCount"].isNull())
		jobGroups_.totalCount = std::stoi(jobGroupsNode["TotalCount"].asString());
	auto allListNode = jobGroupsNode["List"]["JobGroup"];
	for (auto jobGroupsNodeListJobGroup : allListNode)
	{
		JobGroups::JobGroup jobGroupObject;
		if(!jobGroupsNodeListJobGroup["CreationTime"].isNull())
			jobGroupObject.creationTime = std::stol(jobGroupsNodeListJobGroup["CreationTime"].asString());
		if(!jobGroupsNodeListJobGroup["JobGroupDescription"].isNull())
			jobGroupObject.jobGroupDescription = jobGroupsNodeListJobGroup["JobGroupDescription"].asString();
		if(!jobGroupsNodeListJobGroup["JobGroupId"].isNull())
			jobGroupObject.jobGroupId = jobGroupsNodeListJobGroup["JobGroupId"].asString();
		if(!jobGroupsNodeListJobGroup["JobGroupName"].isNull())
			jobGroupObject.jobGroupName = jobGroupsNodeListJobGroup["JobGroupName"].asString();
		if(!jobGroupsNodeListJobGroup["ScriptId"].isNull())
			jobGroupObject.scriptId = jobGroupsNodeListJobGroup["ScriptId"].asString();
		if(!jobGroupsNodeListJobGroup["ScriptName"].isNull())
			jobGroupObject.scriptName = jobGroupsNodeListJobGroup["ScriptName"].asString();
		auto progressNode = value["Progress"];
		if(!progressNode["Duration"].isNull())
			jobGroupObject.progress.duration = std::stoi(progressNode["Duration"].asString());
		if(!progressNode["StartTime"].isNull())
			jobGroupObject.progress.startTime = std::stol(progressNode["StartTime"].asString());
		if(!progressNode["Status"].isNull())
			jobGroupObject.progress.status = progressNode["Status"].asString();
		if(!progressNode["TotalCompleted"].isNull())
			jobGroupObject.progress.totalCompleted = std::stoi(progressNode["TotalCompleted"].asString());
		if(!progressNode["TotalJobs"].isNull())
			jobGroupObject.progress.totalJobs = std::stoi(progressNode["TotalJobs"].asString());
		if(!progressNode["TotalNotAnswered"].isNull())
			jobGroupObject.progress.totalNotAnswered = std::stoi(progressNode["TotalNotAnswered"].asString());
		auto strategyNode = value["Strategy"];
		if(!strategyNode["EndTime"].isNull())
			jobGroupObject.strategy.endTime = std::stol(strategyNode["EndTime"].asString());
		if(!strategyNode["StartTime"].isNull())
			jobGroupObject.strategy.startTime = std::stol(strategyNode["StartTime"].asString());
		jobGroups_.list.push_back(jobGroupObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListJobGroupsResult::getMessage()const
{
	return message_;
}

int ListJobGroupsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListJobGroupsResult::getCode()const
{
	return code_;
}

ListJobGroupsResult::JobGroups ListJobGroupsResult::getJobGroups()const
{
	return jobGroups_;
}

bool ListJobGroupsResult::getSuccess()const
{
	return success_;
}

