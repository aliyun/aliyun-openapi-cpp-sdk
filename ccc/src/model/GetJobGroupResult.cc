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

#include <alibabacloud/ccc/model/GetJobGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetJobGroupResult::GetJobGroupResult() :
	ServiceResult()
{}

GetJobGroupResult::GetJobGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetJobGroupResult::~GetJobGroupResult()
{}

void GetJobGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto jobGroupNode = value["JobGroup"];
	if(!jobGroupNode["Id"].isNull())
		jobGroup_.id = jobGroupNode["Id"].asString();
	if(!jobGroupNode["Name"].isNull())
		jobGroup_.name = jobGroupNode["Name"].asString();
	if(!jobGroupNode["Description"].isNull())
		jobGroup_.description = jobGroupNode["Description"].asString();
	if(!jobGroupNode["ScenarioId"].isNull())
		jobGroup_.scenarioId = jobGroupNode["ScenarioId"].asString();
	if(!jobGroupNode["JobFilePath"].isNull())
		jobGroup_.jobFilePath = jobGroupNode["JobFilePath"].asString();
	if(!jobGroupNode["CreationTime"].isNull())
		jobGroup_.creationTime = std::stol(jobGroupNode["CreationTime"].asString());
	auto strategyNode = jobGroupNode["Strategy"];
	if(!strategyNode["Id"].isNull())
		jobGroup_.strategy.id = strategyNode["Id"].asString();
	if(!strategyNode["Name"].isNull())
		jobGroup_.strategy.name = strategyNode["Name"].asString();
	if(!strategyNode["Description"].isNull())
		jobGroup_.strategy.description = strategyNode["Description"].asString();
	if(!strategyNode["Type"].isNull())
		jobGroup_.strategy.type = strategyNode["Type"].asString();
	if(!strategyNode["StartTime"].isNull())
		jobGroup_.strategy.startTime = std::stol(strategyNode["StartTime"].asString());
	if(!strategyNode["EndTime"].isNull())
		jobGroup_.strategy.endTime = std::stol(strategyNode["EndTime"].asString());
	if(!strategyNode["RepeatBy"].isNull())
		jobGroup_.strategy.repeatBy = strategyNode["RepeatBy"].asString();
	if(!strategyNode["MaxAttemptsPerDay"].isNull())
		jobGroup_.strategy.maxAttemptsPerDay = std::stoi(strategyNode["MaxAttemptsPerDay"].asString());
	if(!strategyNode["MinAttemptInterval"].isNull())
		jobGroup_.strategy.minAttemptInterval = std::stoi(strategyNode["MinAttemptInterval"].asString());
	if(!strategyNode["Customized"].isNull())
		jobGroup_.strategy.customized = strategyNode["Customized"].asString();
	if(!strategyNode["RoutingStrategy"].isNull())
		jobGroup_.strategy.routingStrategy = strategyNode["RoutingStrategy"].asString();
	if(!strategyNode["FollowUpStrategy"].isNull())
		jobGroup_.strategy.followUpStrategy = strategyNode["FollowUpStrategy"].asString();
	if(!strategyNode["IsTemplate"].isNull())
		jobGroup_.strategy.isTemplate = strategyNode["IsTemplate"].asString() == "true";
	auto allWorkingTimeNode = strategyNode["WorkingTime"]["TimeFrame"];
	for (auto strategyNodeWorkingTimeTimeFrame : allWorkingTimeNode)
	{
		JobGroup::Strategy::TimeFrame timeFrameObject;
		if(!strategyNodeWorkingTimeTimeFrame["BeginTime"].isNull())
			timeFrameObject.beginTime = strategyNodeWorkingTimeTimeFrame["BeginTime"].asString();
		if(!strategyNodeWorkingTimeTimeFrame["EndTime"].isNull())
			timeFrameObject.endTime = strategyNodeWorkingTimeTimeFrame["EndTime"].asString();
		jobGroup_.strategy.workingTime.push_back(timeFrameObject);
	}
		auto allRepeatDays = strategyNode["RepeatDays"]["Integer"];
		for (auto value : allRepeatDays)
			jobGroup_.strategy.repeatDays.push_back(value.asString());
	auto progressNode = jobGroupNode["Progress"];
	if(!progressNode["TotalJobs"].isNull())
		jobGroup_.progress.totalJobs = std::stoi(progressNode["TotalJobs"].asString());
	if(!progressNode["Status"].isNull())
		jobGroup_.progress.status = progressNode["Status"].asString();
	if(!progressNode["TotalNotAnswered"].isNull())
		jobGroup_.progress.totalNotAnswered = std::stoi(progressNode["TotalNotAnswered"].asString());
	if(!progressNode["TotalCompleted"].isNull())
		jobGroup_.progress.totalCompleted = std::stoi(progressNode["TotalCompleted"].asString());
	if(!progressNode["StartTime"].isNull())
		jobGroup_.progress.startTime = std::stol(progressNode["StartTime"].asString());
	if(!progressNode["Duration"].isNull())
		jobGroup_.progress.duration = std::stoi(progressNode["Duration"].asString());
	auto allCategoriesNode = progressNode["Categories"]["KeyValuePair"];
	for (auto progressNodeCategoriesKeyValuePair : allCategoriesNode)
	{
		JobGroup::Progress::KeyValuePair keyValuePairObject;
		if(!progressNodeCategoriesKeyValuePair["Key"].isNull())
			keyValuePairObject.key = progressNodeCategoriesKeyValuePair["Key"].asString();
		if(!progressNodeCategoriesKeyValuePair["Value"].isNull())
			keyValuePairObject.value = progressNodeCategoriesKeyValuePair["Value"].asString();
		jobGroup_.progress.categories.push_back(keyValuePairObject);
	}
		auto allCallingNumbers = jobGroupNode["CallingNumbers"]["String"];
		for (auto value : allCallingNumbers)
			jobGroup_.callingNumbers.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

GetJobGroupResult::JobGroup GetJobGroupResult::getJobGroup()const
{
	return jobGroup_;
}

std::string GetJobGroupResult::getMessage()const
{
	return message_;
}

int GetJobGroupResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetJobGroupResult::getCode()const
{
	return code_;
}

bool GetJobGroupResult::getSuccess()const
{
	return success_;
}

