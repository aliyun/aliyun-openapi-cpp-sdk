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

#include <alibabacloud/ccc/model/CreateBatchJobsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

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
	auto jobGroupNode = value["JobGroup"];
	if(!jobGroupNode["JobGroupId"].isNull())
		jobGroup_.jobGroupId = jobGroupNode["JobGroupId"].asString();
	if(!jobGroupNode["JobGroupName"].isNull())
		jobGroup_.jobGroupName = jobGroupNode["JobGroupName"].asString();
	if(!jobGroupNode["JobGroupDescription"].isNull())
		jobGroup_.jobGroupDescription = jobGroupNode["JobGroupDescription"].asString();
	if(!jobGroupNode["ScenarioId"].isNull())
		jobGroup_.scenarioId = jobGroupNode["ScenarioId"].asString();
	if(!jobGroupNode["JobFilePath"].isNull())
		jobGroup_.jobFilePath = jobGroupNode["JobFilePath"].asString();
	if(!jobGroupNode["CreationTime"].isNull())
		jobGroup_.creationTime = std::stol(jobGroupNode["CreationTime"].asString());
	auto strategyNode = jobGroupNode["Strategy"];
	if(!strategyNode["StrategyId"].isNull())
		jobGroup_.strategy.strategyId = strategyNode["StrategyId"].asString();
	if(!strategyNode["StrategyName"].isNull())
		jobGroup_.strategy.strategyName = strategyNode["StrategyName"].asString();
	if(!strategyNode["StrategyDescription"].isNull())
		jobGroup_.strategy.strategyDescription = strategyNode["StrategyDescription"].asString();
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
	auto allWorkingTime = value["WorkingTime"]["TimeFrame"];
	for (auto value : allWorkingTime)
	{
		JobGroup::Strategy::TimeFrame timeFrameObject;
		if(!value["BeginTime"].isNull())
			timeFrameObject.beginTime = value["BeginTime"].asString();
		if(!value["EndTime"].isNull())
			timeFrameObject.endTime = value["EndTime"].asString();
		jobGroup_.strategy.workingTime.push_back(timeFrameObject);
	}
		auto allRepeatDays = strategyNode["RepeatDays"]["Integer"];
		for (auto value : allRepeatDays)
			jobGroup_.strategy.repeatDays.push_back(value.asString());
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

CreateBatchJobsResult::JobGroup CreateBatchJobsResult::getJobGroup()const
{
	return jobGroup_;
}

std::string CreateBatchJobsResult::getMessage()const
{
	return message_;
}

int CreateBatchJobsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string CreateBatchJobsResult::getCode()const
{
	return code_;
}

bool CreateBatchJobsResult::getSuccess()const
{
	return success_;
}

