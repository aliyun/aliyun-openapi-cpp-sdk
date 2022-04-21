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

#include <alibabacloud/outboundbot/model/ModifyBatchJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

ModifyBatchJobsResult::ModifyBatchJobsResult() :
	ServiceResult()
{}

ModifyBatchJobsResult::ModifyBatchJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyBatchJobsResult::~ModifyBatchJobsResult()
{}

void ModifyBatchJobsResult::parse(const std::string &payload)
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
	if(!jobGroupNode["ScenarioId"].isNull())
		jobGroup_.scenarioId = jobGroupNode["ScenarioId"].asString();
	if(!jobGroupNode["JobGroupName"].isNull())
		jobGroup_.jobGroupName = jobGroupNode["JobGroupName"].asString();
	if(!jobGroupNode["JobFilePath"].isNull())
		jobGroup_.jobFilePath = jobGroupNode["JobFilePath"].asString();
	if(!jobGroupNode["JobGroupDescription"].isNull())
		jobGroup_.jobGroupDescription = jobGroupNode["JobGroupDescription"].asString();
	auto strategyNode = jobGroupNode["Strategy"];
	if(!strategyNode["Type"].isNull())
		jobGroup_.strategy.type = strategyNode["Type"].asString();
	if(!strategyNode["StrategyName"].isNull())
		jobGroup_.strategy.strategyName = strategyNode["StrategyName"].asString();
	if(!strategyNode["MaxAttemptsPerDay"].isNull())
		jobGroup_.strategy.maxAttemptsPerDay = std::stoi(strategyNode["MaxAttemptsPerDay"].asString());
	if(!strategyNode["FollowUpStrategy"].isNull())
		jobGroup_.strategy.followUpStrategy = strategyNode["FollowUpStrategy"].asString();
	if(!strategyNode["EndTime"].isNull())
		jobGroup_.strategy.endTime = std::stol(strategyNode["EndTime"].asString());
	if(!strategyNode["Customized"].isNull())
		jobGroup_.strategy.customized = strategyNode["Customized"].asString();
	if(!strategyNode["IsTemplate"].isNull())
		jobGroup_.strategy.isTemplate = strategyNode["IsTemplate"].asString() == "true";
	if(!strategyNode["StartTime"].isNull())
		jobGroup_.strategy.startTime = std::stol(strategyNode["StartTime"].asString());
	if(!strategyNode["StrategyId"].isNull())
		jobGroup_.strategy.strategyId = strategyNode["StrategyId"].asString();
	if(!strategyNode["RoutingStrategy"].isNull())
		jobGroup_.strategy.routingStrategy = strategyNode["RoutingStrategy"].asString();
	if(!strategyNode["MinAttemptInterval"].isNull())
		jobGroup_.strategy.minAttemptInterval = std::stoi(strategyNode["MinAttemptInterval"].asString());
	if(!strategyNode["StrategyDescription"].isNull())
		jobGroup_.strategy.strategyDescription = strategyNode["StrategyDescription"].asString();
	if(!strategyNode["RepeatBy"].isNull())
		jobGroup_.strategy.repeatBy = strategyNode["RepeatBy"].asString();
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
		auto allRepeatDays = strategyNode["RepeatDays"]["Integer"];
		for (auto value : allRepeatDays)
			jobGroup_.strategy.repeatDays.push_back(value.asString());
		auto allCallingNumbers = jobGroupNode["CallingNumbers"]["String"];
		for (auto value : allCallingNumbers)
			jobGroup_.callingNumbers.push_back(value.asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

ModifyBatchJobsResult::JobGroup ModifyBatchJobsResult::getJobGroup()const
{
	return jobGroup_;
}

std::string ModifyBatchJobsResult::getMessage()const
{
	return message_;
}

int ModifyBatchJobsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ModifyBatchJobsResult::getCode()const
{
	return code_;
}

bool ModifyBatchJobsResult::getSuccess()const
{
	return success_;
}

