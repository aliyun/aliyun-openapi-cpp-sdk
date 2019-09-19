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

#include <alibabacloud/ccc/model/ListJobGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

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
	if(!jobGroupsNode["TotalCount"].isNull())
		jobGroups_.totalCount = std::stoi(jobGroupsNode["TotalCount"].asString());
	if(!jobGroupsNode["PageNumber"].isNull())
		jobGroups_.pageNumber = std::stoi(jobGroupsNode["PageNumber"].asString());
	if(!jobGroupsNode["PageSize"].isNull())
		jobGroups_.pageSize = std::stoi(jobGroupsNode["PageSize"].asString());
	auto allListNode = jobGroupsNode["List"]["JobGroup"];
	for (auto jobGroupsNodeListJobGroup : allListNode)
	{
		JobGroups::JobGroup jobGroupObject;
		if(!jobGroupsNodeListJobGroup["Id"].isNull())
			jobGroupObject.id = jobGroupsNodeListJobGroup["Id"].asString();
		if(!jobGroupsNodeListJobGroup["Name"].isNull())
			jobGroupObject.name = jobGroupsNodeListJobGroup["Name"].asString();
		if(!jobGroupsNodeListJobGroup["Description"].isNull())
			jobGroupObject.description = jobGroupsNodeListJobGroup["Description"].asString();
		if(!jobGroupsNodeListJobGroup["ScenarioId"].isNull())
			jobGroupObject.scenarioId = jobGroupsNodeListJobGroup["ScenarioId"].asString();
		if(!jobGroupsNodeListJobGroup["JobFilePath"].isNull())
			jobGroupObject.jobFilePath = jobGroupsNodeListJobGroup["JobFilePath"].asString();
		if(!jobGroupsNodeListJobGroup["CreationTime"].isNull())
			jobGroupObject.creationTime = std::stol(jobGroupsNodeListJobGroup["CreationTime"].asString());
		auto strategyNode = value["Strategy"];
		if(!strategyNode["Id"].isNull())
			jobGroupObject.strategy.id = strategyNode["Id"].asString();
		if(!strategyNode["Name"].isNull())
			jobGroupObject.strategy.name = strategyNode["Name"].asString();
		if(!strategyNode["Description"].isNull())
			jobGroupObject.strategy.description = strategyNode["Description"].asString();
		if(!strategyNode["Type"].isNull())
			jobGroupObject.strategy.type = strategyNode["Type"].asString();
		if(!strategyNode["StartTime"].isNull())
			jobGroupObject.strategy.startTime = std::stol(strategyNode["StartTime"].asString());
		if(!strategyNode["EndTime"].isNull())
			jobGroupObject.strategy.endTime = std::stol(strategyNode["EndTime"].asString());
		if(!strategyNode["RepeatBy"].isNull())
			jobGroupObject.strategy.repeatBy = strategyNode["RepeatBy"].asString();
		if(!strategyNode["MaxAttemptsPerDay"].isNull())
			jobGroupObject.strategy.maxAttemptsPerDay = std::stoi(strategyNode["MaxAttemptsPerDay"].asString());
		if(!strategyNode["MinAttemptInterval"].isNull())
			jobGroupObject.strategy.minAttemptInterval = std::stoi(strategyNode["MinAttemptInterval"].asString());
		if(!strategyNode["Customized"].isNull())
			jobGroupObject.strategy.customized = strategyNode["Customized"].asString();
		if(!strategyNode["RoutingStrategy"].isNull())
			jobGroupObject.strategy.routingStrategy = strategyNode["RoutingStrategy"].asString();
		if(!strategyNode["FollowUpStrategy"].isNull())
			jobGroupObject.strategy.followUpStrategy = strategyNode["FollowUpStrategy"].asString();
		if(!strategyNode["IsTemplate"].isNull())
			jobGroupObject.strategy.isTemplate = strategyNode["IsTemplate"].asString() == "true";
		auto allWorkingTimeNode = strategyNode["WorkingTime"]["TimeFrame"];
		for (auto strategyNodeWorkingTimeTimeFrame : allWorkingTimeNode)
		{
			JobGroups::JobGroup::Strategy::TimeFrame timeFrameObject;
			if(!strategyNodeWorkingTimeTimeFrame["BeginTime"].isNull())
				timeFrameObject.beginTime = strategyNodeWorkingTimeTimeFrame["BeginTime"].asString();
			if(!strategyNodeWorkingTimeTimeFrame["EndTime"].isNull())
				timeFrameObject.endTime = strategyNodeWorkingTimeTimeFrame["EndTime"].asString();
			jobGroupObject.strategy.workingTime.push_back(timeFrameObject);
		}
			auto allRepeatDays = strategyNode["RepeatDays"]["Integer"];
			for (auto value : allRepeatDays)
				jobGroupObject.strategy.repeatDays.push_back(value.asString());
		auto progressNode = value["Progress"];
		if(!progressNode["TotalJobs"].isNull())
			jobGroupObject.progress.totalJobs = std::stoi(progressNode["TotalJobs"].asString());
		if(!progressNode["Status"].isNull())
			jobGroupObject.progress.status = progressNode["Status"].asString();
		if(!progressNode["TotalNotAnswered"].isNull())
			jobGroupObject.progress.totalNotAnswered = std::stoi(progressNode["TotalNotAnswered"].asString());
		if(!progressNode["TotalCompleted"].isNull())
			jobGroupObject.progress.totalCompleted = std::stoi(progressNode["TotalCompleted"].asString());
		if(!progressNode["StartTime"].isNull())
			jobGroupObject.progress.startTime = std::stol(progressNode["StartTime"].asString());
		if(!progressNode["Duration"].isNull())
			jobGroupObject.progress.duration = std::stoi(progressNode["Duration"].asString());
		auto allCategoriesNode = progressNode["Categories"]["KeyValuePair"];
		for (auto progressNodeCategoriesKeyValuePair : allCategoriesNode)
		{
			JobGroups::JobGroup::Progress::KeyValuePair keyValuePairObject;
			if(!progressNodeCategoriesKeyValuePair["Key"].isNull())
				keyValuePairObject.key = progressNodeCategoriesKeyValuePair["Key"].asString();
			if(!progressNodeCategoriesKeyValuePair["Value"].isNull())
				keyValuePairObject.value = progressNodeCategoriesKeyValuePair["Value"].asString();
			jobGroupObject.progress.categories.push_back(keyValuePairObject);
		}
		auto allCallingNumbers = value["CallingNumbers"]["String"];
		for (auto value : allCallingNumbers)
			jobGroupObject.callingNumbers.push_back(value.asString());
		jobGroups_.list.push_back(jobGroupObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

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

