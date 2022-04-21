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

#include <alibabacloud/outboundbot/model/CreateBatchJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

CreateBatchJobsResult::CreateBatchJobsResult() :
	ServiceResult()
{}

CreateBatchJobsResult::CreateBatchJobsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateBatchJobsResult::~CreateBatchJobsResult()
{}

void CreateBatchJobsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto batchJobNode = value["BatchJob"];
	if(!batchJobNode["CreationTime"].isNull())
		batchJob_.creationTime = std::stol(batchJobNode["CreationTime"].asString());
	if(!batchJobNode["ScenarioId"].isNull())
		batchJob_.scenarioId = batchJobNode["ScenarioId"].asString();
	if(!batchJobNode["JobGroupName"].isNull())
		batchJob_.jobGroupName = batchJobNode["JobGroupName"].asString();
	if(!batchJobNode["BatchJobId"].isNull())
		batchJob_.batchJobId = batchJobNode["BatchJobId"].asString();
	if(!batchJobNode["JobFilePath"].isNull())
		batchJob_.jobFilePath = batchJobNode["JobFilePath"].asString();
	if(!batchJobNode["JobGroupDescription"].isNull())
		batchJob_.jobGroupDescription = batchJobNode["JobGroupDescription"].asString();
	auto strategyNode = batchJobNode["Strategy"];
	if(!strategyNode["Type"].isNull())
		batchJob_.strategy.type = strategyNode["Type"].asString();
	if(!strategyNode["StrategyName"].isNull())
		batchJob_.strategy.strategyName = strategyNode["StrategyName"].asString();
	if(!strategyNode["MaxAttemptsPerDay"].isNull())
		batchJob_.strategy.maxAttemptsPerDay = std::stoi(strategyNode["MaxAttemptsPerDay"].asString());
	if(!strategyNode["FollowUpStrategy"].isNull())
		batchJob_.strategy.followUpStrategy = strategyNode["FollowUpStrategy"].asString();
	if(!strategyNode["EndTime"].isNull())
		batchJob_.strategy.endTime = std::stol(strategyNode["EndTime"].asString());
	if(!strategyNode["Customized"].isNull())
		batchJob_.strategy.customized = strategyNode["Customized"].asString();
	if(!strategyNode["IsTemplate"].isNull())
		batchJob_.strategy.isTemplate = strategyNode["IsTemplate"].asString() == "true";
	if(!strategyNode["StartTime"].isNull())
		batchJob_.strategy.startTime = std::stol(strategyNode["StartTime"].asString());
	if(!strategyNode["StrategyId"].isNull())
		batchJob_.strategy.strategyId = strategyNode["StrategyId"].asString();
	if(!strategyNode["RoutingStrategy"].isNull())
		batchJob_.strategy.routingStrategy = strategyNode["RoutingStrategy"].asString();
	if(!strategyNode["MinAttemptInterval"].isNull())
		batchJob_.strategy.minAttemptInterval = std::stoi(strategyNode["MinAttemptInterval"].asString());
	if(!strategyNode["StrategyDescription"].isNull())
		batchJob_.strategy.strategyDescription = strategyNode["StrategyDescription"].asString();
	if(!strategyNode["RepeatBy"].isNull())
		batchJob_.strategy.repeatBy = strategyNode["RepeatBy"].asString();
	auto allWorkingTimeNode = strategyNode["WorkingTime"]["TimeFrame"];
	for (auto strategyNodeWorkingTimeTimeFrame : allWorkingTimeNode)
	{
		BatchJob::Strategy::TimeFrame timeFrameObject;
		if(!strategyNodeWorkingTimeTimeFrame["EndTime"].isNull())
			timeFrameObject.endTime = strategyNodeWorkingTimeTimeFrame["EndTime"].asString();
		if(!strategyNodeWorkingTimeTimeFrame["BeginTime"].isNull())
			timeFrameObject.beginTime = strategyNodeWorkingTimeTimeFrame["BeginTime"].asString();
		batchJob_.strategy.workingTime.push_back(timeFrameObject);
	}
		auto allRepeatDays = strategyNode["RepeatDays"]["Integer"];
		for (auto value : allRepeatDays)
			batchJob_.strategy.repeatDays.push_back(value.asString());
		auto allCallingNumbers = batchJobNode["CallingNumbers"]["String"];
		for (auto value : allCallingNumbers)
			batchJob_.callingNumbers.push_back(value.asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string CreateBatchJobsResult::getMessage()const
{
	return message_;
}

int CreateBatchJobsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

CreateBatchJobsResult::BatchJob CreateBatchJobsResult::getBatchJob()const
{
	return batchJob_;
}

std::string CreateBatchJobsResult::getCode()const
{
	return code_;
}

bool CreateBatchJobsResult::getSuccess()const
{
	return success_;
}

