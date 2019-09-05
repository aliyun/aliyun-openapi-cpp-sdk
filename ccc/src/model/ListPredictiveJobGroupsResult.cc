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

#include <alibabacloud/ccc/model/ListPredictiveJobGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListPredictiveJobGroupsResult::ListPredictiveJobGroupsResult() :
	ServiceResult()
{}

ListPredictiveJobGroupsResult::ListPredictiveJobGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPredictiveJobGroupsResult::~ListPredictiveJobGroupsResult()
{}

void ListPredictiveJobGroupsResult::parse(const std::string &payload)
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
	auto allList = value["List"]["JobGroup"];
	for (auto value : allList)
	{
		JobGroups::JobGroup jobGroupObject;
		if(!value["JobGroupId"].isNull())
			jobGroupObject.jobGroupId = value["JobGroupId"].asString();
		if(!value["InstanceId"].isNull())
			jobGroupObject.instanceId = value["InstanceId"].asString();
		if(!value["SkillGroupId"].isNull())
			jobGroupObject.skillGroupId = value["SkillGroupId"].asString();
		if(!value["SkillGroupName"].isNull())
			jobGroupObject.skillGroupName = value["SkillGroupName"].asString();
		if(!value["TaskType"].isNull())
			jobGroupObject.taskType = value["TaskType"].asString();
		if(!value["OccupancyRate"].isNull())
			jobGroupObject.occupancyRate = value["OccupancyRate"].asString();
		if(!value["StartTime"].isNull())
			jobGroupObject.startTime = value["StartTime"].asString();
		if(!value["EndTime"].isNull())
			jobGroupObject.endTime = value["EndTime"].asString();
		if(!value["Name"].isNull())
			jobGroupObject.name = value["Name"].asString();
		if(!value["Description"].isNull())
			jobGroupObject.description = value["Description"].asString();
		if(!value["CreationTime"].isNull())
			jobGroupObject.creationTime = std::stol(value["CreationTime"].asString());
		auto strategyNode = value["Strategy"];
		if(!strategyNode["StrategyId"].isNull())
			jobGroupObject.strategy.strategyId = strategyNode["StrategyId"].asString();
		if(!strategyNode["StartTime"].isNull())
			jobGroupObject.strategy.startTime = std::stol(strategyNode["StartTime"].asString());
		if(!strategyNode["EndTime"].isNull())
			jobGroupObject.strategy.endTime = std::stol(strategyNode["EndTime"].asString());
		if(!strategyNode["MaxAttemptsPerDay"].isNull())
			jobGroupObject.strategy.maxAttemptsPerDay = std::stoi(strategyNode["MaxAttemptsPerDay"].asString());
		if(!strategyNode["MinAttemptInterval"].isNull())
			jobGroupObject.strategy.minAttemptInterval = std::stoi(strategyNode["MinAttemptInterval"].asString());
		auto allWorkingTime = value["WorkingTime"]["TimeFrame"];
		for (auto value : allWorkingTime)
		{
			JobGroups::JobGroup::Strategy::TimeFrame timeFrameObject;
			if(!value["BeginTime"].isNull())
				timeFrameObject.beginTime = value["BeginTime"].asString();
			if(!value["EndTime"].isNull())
				timeFrameObject.endTime = value["EndTime"].asString();
			jobGroupObject.strategy.workingTime.push_back(timeFrameObject);
		}
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
		auto allCategories = value["Categories"]["KeyValuePair"];
		for (auto value : allCategories)
		{
			JobGroups::JobGroup::Progress::KeyValuePair keyValuePairObject;
			if(!value["Key"].isNull())
				keyValuePairObject.key = value["Key"].asString();
			if(!value["Value"].isNull())
				keyValuePairObject.value = value["Value"].asString();
			jobGroupObject.progress.categories.push_back(keyValuePairObject);
		}
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

std::string ListPredictiveJobGroupsResult::getMessage()const
{
	return message_;
}

int ListPredictiveJobGroupsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListPredictiveJobGroupsResult::getCode()const
{
	return code_;
}

ListPredictiveJobGroupsResult::JobGroups ListPredictiveJobGroupsResult::getJobGroups()const
{
	return jobGroups_;
}

bool ListPredictiveJobGroupsResult::getSuccess()const
{
	return success_;
}

