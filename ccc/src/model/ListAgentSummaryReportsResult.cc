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

#include <alibabacloud/ccc/model/ListAgentSummaryReportsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListAgentSummaryReportsResult::ListAgentSummaryReportsResult() :
	ServiceResult()
{}

ListAgentSummaryReportsResult::ListAgentSummaryReportsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAgentSummaryReportsResult::~ListAgentSummaryReportsResult()
{}

void ListAgentSummaryReportsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto pagedAgentSummaryReportNode = value["PagedAgentSummaryReport"];
	if(!pagedAgentSummaryReportNode["TotalCount"].isNull())
		pagedAgentSummaryReport_.totalCount = std::stoi(pagedAgentSummaryReportNode["TotalCount"].asString());
	if(!pagedAgentSummaryReportNode["PageNumber"].isNull())
		pagedAgentSummaryReport_.pageNumber = std::stoi(pagedAgentSummaryReportNode["PageNumber"].asString());
	if(!pagedAgentSummaryReportNode["PageSize"].isNull())
		pagedAgentSummaryReport_.pageSize = std::stoi(pagedAgentSummaryReportNode["PageSize"].asString());
	auto allList = value["List"]["AgentSummaryReport"];
	for (auto value : allList)
	{
		PagedAgentSummaryReport::AgentSummaryReport agentSummaryReportObject;
		if(!value["InstanceId"].isNull())
			agentSummaryReportObject.instanceId = value["InstanceId"].asString();
		if(!value["AgentId"].isNull())
			agentSummaryReportObject.agentId = value["AgentId"].asString();
		if(!value["LoginName"].isNull())
			agentSummaryReportObject.loginName = value["LoginName"].asString();
		if(!value["AgentName"].isNull())
			agentSummaryReportObject.agentName = value["AgentName"].asString();
		if(!value["SkillGroupIds"].isNull())
			agentSummaryReportObject.skillGroupIds = value["SkillGroupIds"].asString();
		if(!value["SkillGroupNames"].isNull())
			agentSummaryReportObject.skillGroupNames = value["SkillGroupNames"].asString();
		auto overallNode = value["Overall"];
		if(!overallNode["TotalCalls"].isNull())
			agentSummaryReportObject.overall.totalCalls = std::stol(overallNode["TotalCalls"].asString());
		if(!overallNode["TotalLoggedInTime"].isNull())
			agentSummaryReportObject.overall.totalLoggedInTime = std::stol(overallNode["TotalLoggedInTime"].asString());
		if(!overallNode["TotalBreakTime"].isNull())
			agentSummaryReportObject.overall.totalBreakTime = std::stol(overallNode["TotalBreakTime"].asString());
		if(!overallNode["OccupancyRate"].isNull())
			agentSummaryReportObject.overall.occupancyRate = std::stof(overallNode["OccupancyRate"].asString());
		if(!overallNode["TotalReadyTime"].isNull())
			agentSummaryReportObject.overall.totalReadyTime = std::stol(overallNode["TotalReadyTime"].asString());
		if(!overallNode["MaxReadyTime"].isNull())
			agentSummaryReportObject.overall.maxReadyTime = std::stol(overallNode["MaxReadyTime"].asString());
		if(!overallNode["AverageReadyTime"].isNull())
			agentSummaryReportObject.overall.averageReadyTime = std::stol(overallNode["AverageReadyTime"].asString());
		if(!overallNode["TotalTalkTime"].isNull())
			agentSummaryReportObject.overall.totalTalkTime = std::stol(overallNode["TotalTalkTime"].asString());
		if(!overallNode["MaxTalkTime"].isNull())
			agentSummaryReportObject.overall.maxTalkTime = std::stol(overallNode["MaxTalkTime"].asString());
		if(!overallNode["AverageTalkTime"].isNull())
			agentSummaryReportObject.overall.averageTalkTime = std::stol(overallNode["AverageTalkTime"].asString());
		if(!overallNode["TotalWorkTime"].isNull())
			agentSummaryReportObject.overall.totalWorkTime = std::stol(overallNode["TotalWorkTime"].asString());
		if(!overallNode["MaxWorkTime"].isNull())
			agentSummaryReportObject.overall.maxWorkTime = std::stol(overallNode["MaxWorkTime"].asString());
		if(!overallNode["AverageWorkTime"].isNull())
			agentSummaryReportObject.overall.averageWorkTime = std::stol(overallNode["AverageWorkTime"].asString());
		if(!overallNode["SatisfactionIndex"].isNull())
			agentSummaryReportObject.overall.satisfactionIndex = std::stof(overallNode["SatisfactionIndex"].asString());
		if(!overallNode["SatisfactionSurveysOffered"].isNull())
			agentSummaryReportObject.overall.satisfactionSurveysOffered = std::stol(overallNode["SatisfactionSurveysOffered"].asString());
		if(!overallNode["SatisfactionSurveysResponded"].isNull())
			agentSummaryReportObject.overall.satisfactionSurveysResponded = std::stol(overallNode["SatisfactionSurveysResponded"].asString());
		auto inboundNode = value["Inbound"];
		if(!inboundNode["CallsOffered"].isNull())
			agentSummaryReportObject.inbound.callsOffered = std::stol(inboundNode["CallsOffered"].asString());
		if(!inboundNode["CallsHandled"].isNull())
			agentSummaryReportObject.inbound.callsHandled = std::stol(inboundNode["CallsHandled"].asString());
		if(!inboundNode["HandleRate"].isNull())
			agentSummaryReportObject.inbound.handleRate = std::stof(inboundNode["HandleRate"].asString());
		if(!inboundNode["TotalRingTime"].isNull())
			agentSummaryReportObject.inbound.totalRingTime = std::stol(inboundNode["TotalRingTime"].asString());
		if(!inboundNode["MaxRingTime"].isNull())
			agentSummaryReportObject.inbound.maxRingTime = std::stol(inboundNode["MaxRingTime"].asString());
		if(!inboundNode["AverageRingTime"].isNull())
			agentSummaryReportObject.inbound.averageRingTime = std::stol(inboundNode["AverageRingTime"].asString());
		if(!inboundNode["ServiceLevel20"].isNull())
			agentSummaryReportObject.inbound.serviceLevel20 = std::stof(inboundNode["ServiceLevel20"].asString());
		if(!inboundNode["TotalTalkTime"].isNull())
			agentSummaryReportObject.inbound.totalTalkTime = std::stol(inboundNode["TotalTalkTime"].asString());
		if(!inboundNode["MaxTalkTime"].isNull())
			agentSummaryReportObject.inbound.maxTalkTime = std::stol(inboundNode["MaxTalkTime"].asString());
		if(!inboundNode["AverageTalkTime"].isNull())
			agentSummaryReportObject.inbound.averageTalkTime = std::stol(inboundNode["AverageTalkTime"].asString());
		if(!inboundNode["TotalWorkTime"].isNull())
			agentSummaryReportObject.inbound.totalWorkTime = std::stol(inboundNode["TotalWorkTime"].asString());
		if(!inboundNode["MaxWorkTime"].isNull())
			agentSummaryReportObject.inbound.maxWorkTime = std::stol(inboundNode["MaxWorkTime"].asString());
		if(!inboundNode["AverageWorkTime"].isNull())
			agentSummaryReportObject.inbound.averageWorkTime = std::stol(inboundNode["AverageWorkTime"].asString());
		if(!inboundNode["SatisfactionIndex"].isNull())
			agentSummaryReportObject.inbound.satisfactionIndex = std::stof(inboundNode["SatisfactionIndex"].asString());
		if(!inboundNode["SatisfactionSurveysOffered"].isNull())
			agentSummaryReportObject.inbound.satisfactionSurveysOffered = std::stol(inboundNode["SatisfactionSurveysOffered"].asString());
		if(!inboundNode["SatisfactionSurveysResponded"].isNull())
			agentSummaryReportObject.inbound.satisfactionSurveysResponded = std::stol(inboundNode["SatisfactionSurveysResponded"].asString());
		auto outboundNode = value["Outbound"];
		if(!outboundNode["CallsDialed"].isNull())
			agentSummaryReportObject.outbound.callsDialed = std::stol(outboundNode["CallsDialed"].asString());
		if(!outboundNode["CallsAnswered"].isNull())
			agentSummaryReportObject.outbound.callsAnswered = std::stol(outboundNode["CallsAnswered"].asString());
		if(!outboundNode["AnswerRate"].isNull())
			agentSummaryReportObject.outbound.answerRate = std::stof(outboundNode["AnswerRate"].asString());
		if(!outboundNode["TotalDialingTime"].isNull())
			agentSummaryReportObject.outbound.totalDialingTime = std::stol(outboundNode["TotalDialingTime"].asString());
		if(!outboundNode["MaxDialingTime"].isNull())
			agentSummaryReportObject.outbound.maxDialingTime = std::stol(outboundNode["MaxDialingTime"].asString());
		if(!outboundNode["AverageDialingTime"].isNull())
			agentSummaryReportObject.outbound.averageDialingTime = std::stol(outboundNode["AverageDialingTime"].asString());
		if(!outboundNode["TotalTalkTime"].isNull())
			agentSummaryReportObject.outbound.totalTalkTime = std::stol(outboundNode["TotalTalkTime"].asString());
		if(!outboundNode["MaxTalkTime"].isNull())
			agentSummaryReportObject.outbound.maxTalkTime = std::stol(outboundNode["MaxTalkTime"].asString());
		if(!outboundNode["AverageTalkTime"].isNull())
			agentSummaryReportObject.outbound.averageTalkTime = std::stol(outboundNode["AverageTalkTime"].asString());
		if(!outboundNode["TotalWorkTime"].isNull())
			agentSummaryReportObject.outbound.totalWorkTime = std::stol(outboundNode["TotalWorkTime"].asString());
		if(!outboundNode["MaxWorkTime"].isNull())
			agentSummaryReportObject.outbound.maxWorkTime = outboundNode["MaxWorkTime"].asString();
		if(!outboundNode["AverageWorkTime"].isNull())
			agentSummaryReportObject.outbound.averageWorkTime = std::stol(outboundNode["AverageWorkTime"].asString());
		if(!outboundNode["SatisfactionIndex"].isNull())
			agentSummaryReportObject.outbound.satisfactionIndex = std::stof(outboundNode["SatisfactionIndex"].asString());
		if(!outboundNode["SatisfactionSurveysOffered"].isNull())
			agentSummaryReportObject.outbound.satisfactionSurveysOffered = std::stol(outboundNode["SatisfactionSurveysOffered"].asString());
		if(!outboundNode["SatisfactionSurveysResponded"].isNull())
			agentSummaryReportObject.outbound.satisfactionSurveysResponded = std::stol(outboundNode["SatisfactionSurveysResponded"].asString());
		pagedAgentSummaryReport_.list.push_back(agentSummaryReportObject);
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

std::string ListAgentSummaryReportsResult::getMessage()const
{
	return message_;
}

ListAgentSummaryReportsResult::PagedAgentSummaryReport ListAgentSummaryReportsResult::getPagedAgentSummaryReport()const
{
	return pagedAgentSummaryReport_;
}

int ListAgentSummaryReportsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListAgentSummaryReportsResult::getCode()const
{
	return code_;
}

bool ListAgentSummaryReportsResult::getSuccess()const
{
	return success_;
}

