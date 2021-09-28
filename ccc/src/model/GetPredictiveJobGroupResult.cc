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

#include <alibabacloud/ccc/model/GetPredictiveJobGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetPredictiveJobGroupResult::GetPredictiveJobGroupResult() :
	ServiceResult()
{}

GetPredictiveJobGroupResult::GetPredictiveJobGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPredictiveJobGroupResult::~GetPredictiveJobGroupResult()
{}

void GetPredictiveJobGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto jobGroupNode = value["JobGroup"];
	if(!jobGroupNode["CreationTime"].isNull())
		jobGroup_.creationTime = std::stol(jobGroupNode["CreationTime"].asString());
	if(!jobGroupNode["JobGroupId"].isNull())
		jobGroup_.jobGroupId = jobGroupNode["JobGroupId"].asString();
	if(!jobGroupNode["Description"].isNull())
		jobGroup_.description = jobGroupNode["Description"].asString();
	if(!jobGroupNode["SkillGroupId"].isNull())
		jobGroup_.skillGroupId = jobGroupNode["SkillGroupId"].asString();
	if(!jobGroupNode["SkillGroupName"].isNull())
		jobGroup_.skillGroupName = jobGroupNode["SkillGroupName"].asString();
	if(!jobGroupNode["InstanceId"].isNull())
		jobGroup_.instanceId = jobGroupNode["InstanceId"].asString();
	if(!jobGroupNode["Name"].isNull())
		jobGroup_.name = jobGroupNode["Name"].asString();
	if(!jobGroupNode["Ratio"].isNull())
		jobGroup_.ratio = std::stol(jobGroupNode["Ratio"].asString());
	auto progressNode = jobGroupNode["Progress"];
	if(!progressNode["Status"].isNull())
		jobGroup_.progress.status = progressNode["Status"].asString();
	if(!progressNode["TotalNotAnswered"].isNull())
		jobGroup_.progress.totalNotAnswered = std::stoi(progressNode["TotalNotAnswered"].asString());
	if(!progressNode["StartTime"].isNull())
		jobGroup_.progress.startTime = std::stol(progressNode["StartTime"].asString());
	if(!progressNode["TotalJobs"].isNull())
		jobGroup_.progress.totalJobs = std::stoi(progressNode["TotalJobs"].asString());
	if(!progressNode["TotalCompleted"].isNull())
		jobGroup_.progress.totalCompleted = std::stoi(progressNode["TotalCompleted"].asString());
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
	auto strategyNode = jobGroupNode["Strategy"];
	if(!strategyNode["MinAttemptInterval"].isNull())
		jobGroup_.strategy.minAttemptInterval = std::stoi(strategyNode["MinAttemptInterval"].asString());
	if(!strategyNode["EndTime"].isNull())
		jobGroup_.strategy.endTime = std::stol(strategyNode["EndTime"].asString());
	if(!strategyNode["StartTime"].isNull())
		jobGroup_.strategy.startTime = std::stol(strategyNode["StartTime"].asString());
	if(!strategyNode["StrategyId"].isNull())
		jobGroup_.strategy.strategyId = strategyNode["StrategyId"].asString();
	if(!strategyNode["MaxAttemptsPerDay"].isNull())
		jobGroup_.strategy.maxAttemptsPerDay = std::stoi(strategyNode["MaxAttemptsPerDay"].asString());
	auto allWorkingTimeNode = strategyNode["WorkingTime"]["TimeFrame"];
	for (auto strategyNodeWorkingTimeTimeFrame : allWorkingTimeNode)
	{
		JobGroup::Strategy::TimeFrame timeFrameObject;
		if(!strategyNodeWorkingTimeTimeFrame["EndTime"].isNull())
			timeFrameObject.endTime = strategyNodeWorkingTimeTimeFrame["EndTime"].asString();
		if(!strategyNodeWorkingTimeTimeFrame["BeginTime"].isNull())
			timeFrameObject.beginTime = strategyNodeWorkingTimeTimeFrame["BeginTime"].asString();
		jobGroup_.strategy.workingTime.push_back(timeFrameObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetPredictiveJobGroupResult::JobGroup GetPredictiveJobGroupResult::getJobGroup()const
{
	return jobGroup_;
}

std::string GetPredictiveJobGroupResult::getMessage()const
{
	return message_;
}

int GetPredictiveJobGroupResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetPredictiveJobGroupResult::getCode()const
{
	return code_;
}

bool GetPredictiveJobGroupResult::getSuccess()const
{
	return success_;
}

