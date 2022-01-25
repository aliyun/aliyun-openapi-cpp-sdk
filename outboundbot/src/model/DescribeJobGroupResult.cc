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

#include <alibabacloud/outboundbot/model/DescribeJobGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

DescribeJobGroupResult::DescribeJobGroupResult() :
	ServiceResult()
{}

DescribeJobGroupResult::DescribeJobGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeJobGroupResult::~DescribeJobGroupResult()
{}

void DescribeJobGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto jobGroupNode = value["JobGroup"];
	if(!jobGroupNode["CreationTime"].isNull())
		jobGroup_.creationTime = std::stol(jobGroupNode["CreationTime"].asString());
	if(!jobGroupNode["Status"].isNull())
		jobGroup_.status = jobGroupNode["Status"].asString();
	if(!jobGroupNode["JobGroupName"].isNull())
		jobGroup_.jobGroupName = jobGroupNode["JobGroupName"].asString();
	if(!jobGroupNode["ScriptId"].isNull())
		jobGroup_.scriptId = jobGroupNode["ScriptId"].asString();
	if(!jobGroupNode["JobGroupId"].isNull())
		jobGroup_.jobGroupId = jobGroupNode["JobGroupId"].asString();
	if(!jobGroupNode["ScenarioId"].isNull())
		jobGroup_.scenarioId = jobGroupNode["ScenarioId"].asString();
	if(!jobGroupNode["JobFilePath"].isNull())
		jobGroup_.jobFilePath = jobGroupNode["JobFilePath"].asString();
	if(!jobGroupNode["JobGroupDescription"].isNull())
		jobGroup_.jobGroupDescription = jobGroupNode["JobGroupDescription"].asString();
	if(!jobGroupNode["JobDataParsingTaskId"].isNull())
		jobGroup_.jobDataParsingTaskId = jobGroupNode["JobDataParsingTaskId"].asString();
	if(!jobGroupNode["ScriptName"].isNull())
		jobGroup_.scriptName = jobGroupNode["ScriptName"].asString();
	if(!jobGroupNode["ModifyTime"].isNull())
		jobGroup_.modifyTime = jobGroupNode["ModifyTime"].asString();
	if(!jobGroupNode["ScriptVersion"].isNull())
		jobGroup_.scriptVersion = jobGroupNode["ScriptVersion"].asString();
	if(!jobGroupNode["RingingDuration"].isNull())
		jobGroup_.ringingDuration = std::stol(jobGroupNode["RingingDuration"].asString());
	if(!jobGroupNode["Priority"].isNull())
		jobGroup_.priority = jobGroupNode["Priority"].asString();
	if(!jobGroupNode["MinConcurrency"].isNull())
		jobGroup_.minConcurrency = std::stol(jobGroupNode["MinConcurrency"].asString());
	auto exportProgressNode = jobGroupNode["ExportProgress"];
	if(!exportProgressNode["Status"].isNull())
		jobGroup_.exportProgress.status = exportProgressNode["Status"].asString();
	if(!exportProgressNode["FileHttpUrl"].isNull())
		jobGroup_.exportProgress.fileHttpUrl = exportProgressNode["FileHttpUrl"].asString();
	if(!exportProgressNode["Progress"].isNull())
		jobGroup_.exportProgress.progress = exportProgressNode["Progress"].asString();
	auto progressNode = jobGroupNode["Progress"];
	if(!progressNode["TotalNotAnswered"].isNull())
		jobGroup_.progress.totalNotAnswered = std::stoi(progressNode["TotalNotAnswered"].asString());
	if(!progressNode["Status"].isNull())
		jobGroup_.progress.status = progressNode["Status"].asString();
	if(!progressNode["StartTime"].isNull())
		jobGroup_.progress.startTime = std::stol(progressNode["StartTime"].asString());
	if(!progressNode["Failed"].isNull())
		jobGroup_.progress.failed = std::stoi(progressNode["Failed"].asString());
	if(!progressNode["Executing"].isNull())
		jobGroup_.progress.executing = std::stoi(progressNode["Executing"].asString());
	if(!progressNode["TotalJobs"].isNull())
		jobGroup_.progress.totalJobs = std::stoi(progressNode["TotalJobs"].asString());
	if(!progressNode["TotalCompleted"].isNull())
		jobGroup_.progress.totalCompleted = std::stoi(progressNode["TotalCompleted"].asString());
	if(!progressNode["Duration"].isNull())
		jobGroup_.progress.duration = std::stoi(progressNode["Duration"].asString());
	if(!progressNode["Scheduling"].isNull())
		jobGroup_.progress.scheduling = std::stoi(progressNode["Scheduling"].asString());
	if(!progressNode["Paused"].isNull())
		jobGroup_.progress.paused = std::stoi(progressNode["Paused"].asString());
	if(!progressNode["Cancelled"].isNull())
		jobGroup_.progress.cancelled = std::stoi(progressNode["Cancelled"].asString());
	auto allBriefsNode = progressNode["Briefs"]["KeyValuePair"];
	for (auto progressNodeBriefsKeyValuePair : allBriefsNode)
	{
		JobGroup::Progress::KeyValuePair keyValuePairObject;
		if(!progressNodeBriefsKeyValuePair["Key"].isNull())
			keyValuePairObject.key = progressNodeBriefsKeyValuePair["Key"].asString();
		if(!progressNodeBriefsKeyValuePair["Value"].isNull())
			keyValuePairObject.value = progressNodeBriefsKeyValuePair["Value"].asString();
		jobGroup_.progress.briefs.push_back(keyValuePairObject);
	}
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
	auto recallStrategyNode = jobGroupNode["RecallStrategy"];
	if(!recallStrategyNode["EmptyNumberIgnore"].isNull())
		jobGroup_.recallStrategy.emptyNumberIgnore = recallStrategyNode["EmptyNumberIgnore"].asString() == "true";
	if(!recallStrategyNode["InArrearsIgnore"].isNull())
		jobGroup_.recallStrategy.inArrearsIgnore = recallStrategyNode["InArrearsIgnore"].asString() == "true";
	if(!recallStrategyNode["OutOfServiceIgnore"].isNull())
		jobGroup_.recallStrategy.outOfServiceIgnore = recallStrategyNode["OutOfServiceIgnore"].asString() == "true";
	auto resultNode = jobGroupNode["Result"];
	if(!resultNode["TimeoutHangupNum"].isNull())
		jobGroup_.result.timeoutHangupNum = std::stoi(resultNode["TimeoutHangupNum"].asString());
	if(!resultNode["FinishedNum"].isNull())
		jobGroup_.result.finishedNum = std::stoi(resultNode["FinishedNum"].asString());
	if(!resultNode["NoInteractNum"].isNull())
		jobGroup_.result.noInteractNum = std::stoi(resultNode["NoInteractNum"].asString());
	if(!resultNode["ClientHangupNum"].isNull())
		jobGroup_.result.clientHangupNum = std::stoi(resultNode["ClientHangupNum"].asString());
	if(!resultNode["UnrecognizedNum"].isNull())
		jobGroup_.result.unrecognizedNum = std::stoi(resultNode["UnrecognizedNum"].asString());
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

DescribeJobGroupResult::JobGroup DescribeJobGroupResult::getJobGroup()const
{
	return jobGroup_;
}

std::string DescribeJobGroupResult::getMessage()const
{
	return message_;
}

int DescribeJobGroupResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DescribeJobGroupResult::getCode()const
{
	return code_;
}

bool DescribeJobGroupResult::getSuccess()const
{
	return success_;
}

