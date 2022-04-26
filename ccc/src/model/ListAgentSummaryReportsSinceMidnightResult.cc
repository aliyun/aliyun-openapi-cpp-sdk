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

#include <alibabacloud/ccc/model/ListAgentSummaryReportsSinceMidnightResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListAgentSummaryReportsSinceMidnightResult::ListAgentSummaryReportsSinceMidnightResult() :
	ServiceResult()
{}

ListAgentSummaryReportsSinceMidnightResult::ListAgentSummaryReportsSinceMidnightResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAgentSummaryReportsSinceMidnightResult::~ListAgentSummaryReportsSinceMidnightResult()
{}

void ListAgentSummaryReportsSinceMidnightResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto pagedAgentSummaryReportNode = value["PagedAgentSummaryReport"];
	if(!pagedAgentSummaryReportNode["PageNumber"].isNull())
		pagedAgentSummaryReport_.pageNumber = std::stoi(pagedAgentSummaryReportNode["PageNumber"].asString());
	if(!pagedAgentSummaryReportNode["PageSize"].isNull())
		pagedAgentSummaryReport_.pageSize = std::stoi(pagedAgentSummaryReportNode["PageSize"].asString());
	if(!pagedAgentSummaryReportNode["TotalCount"].isNull())
		pagedAgentSummaryReport_.totalCount = std::stoi(pagedAgentSummaryReportNode["TotalCount"].asString());
	auto allListNode = pagedAgentSummaryReportNode["List"]["AgentSummaryReport"];
	for (auto pagedAgentSummaryReportNodeListAgentSummaryReport : allListNode)
	{
		PagedAgentSummaryReport::AgentSummaryReport agentSummaryReportObject;
		if(!pagedAgentSummaryReportNodeListAgentSummaryReport["LoginName"].isNull())
			agentSummaryReportObject.loginName = pagedAgentSummaryReportNodeListAgentSummaryReport["LoginName"].asString();
		if(!pagedAgentSummaryReportNodeListAgentSummaryReport["AgentId"].isNull())
			agentSummaryReportObject.agentId = pagedAgentSummaryReportNodeListAgentSummaryReport["AgentId"].asString();
		if(!pagedAgentSummaryReportNodeListAgentSummaryReport["AgentName"].isNull())
			agentSummaryReportObject.agentName = pagedAgentSummaryReportNodeListAgentSummaryReport["AgentName"].asString();
		if(!pagedAgentSummaryReportNodeListAgentSummaryReport["SkillGroupNames"].isNull())
			agentSummaryReportObject.skillGroupNames = pagedAgentSummaryReportNodeListAgentSummaryReport["SkillGroupNames"].asString();
		if(!pagedAgentSummaryReportNodeListAgentSummaryReport["Timestamp"].isNull())
			agentSummaryReportObject.timestamp = pagedAgentSummaryReportNodeListAgentSummaryReport["Timestamp"].asString();
		if(!pagedAgentSummaryReportNodeListAgentSummaryReport["InstanceId"].isNull())
			agentSummaryReportObject.instanceId = pagedAgentSummaryReportNodeListAgentSummaryReport["InstanceId"].asString();
		if(!pagedAgentSummaryReportNodeListAgentSummaryReport["SkillGroupIds"].isNull())
			agentSummaryReportObject.skillGroupIds = pagedAgentSummaryReportNodeListAgentSummaryReport["SkillGroupIds"].asString();
		auto overallNode = value["Overall"];
		if(!overallNode["TotalTalkTime"].isNull())
			agentSummaryReportObject.overall.totalTalkTime = std::stol(overallNode["TotalTalkTime"].asString());
		if(!overallNode["TotalLoggedInTime"].isNull())
			agentSummaryReportObject.overall.totalLoggedInTime = std::stol(overallNode["TotalLoggedInTime"].asString());
		if(!overallNode["OccupancyRate"].isNull())
			agentSummaryReportObject.overall.occupancyRate = std::stof(overallNode["OccupancyRate"].asString());
		if(!overallNode["TotalWorkTime"].isNull())
			agentSummaryReportObject.overall.totalWorkTime = std::stol(overallNode["TotalWorkTime"].asString());
		if(!overallNode["MaxWorkTime"].isNull())
			agentSummaryReportObject.overall.maxWorkTime = std::stol(overallNode["MaxWorkTime"].asString());
		if(!overallNode["AverageWorkTime"].isNull())
			agentSummaryReportObject.overall.averageWorkTime = std::stol(overallNode["AverageWorkTime"].asString());
		if(!overallNode["AverageTalkTime"].isNull())
			agentSummaryReportObject.overall.averageTalkTime = std::stol(overallNode["AverageTalkTime"].asString());
		if(!overallNode["SatisfactionIndex"].isNull())
			agentSummaryReportObject.overall.satisfactionIndex = std::stof(overallNode["SatisfactionIndex"].asString());
		if(!overallNode["SatisfactionSurveysOffered"].isNull())
			agentSummaryReportObject.overall.satisfactionSurveysOffered = std::stol(overallNode["SatisfactionSurveysOffered"].asString());
		if(!overallNode["SatisfactionSurveysResponded"].isNull())
			agentSummaryReportObject.overall.satisfactionSurveysResponded = std::stol(overallNode["SatisfactionSurveysResponded"].asString());
		if(!overallNode["AverageReadyTime"].isNull())
			agentSummaryReportObject.overall.averageReadyTime = std::stol(overallNode["AverageReadyTime"].asString());
		if(!overallNode["MaxReadyTime"].isNull())
			agentSummaryReportObject.overall.maxReadyTime = std::stol(overallNode["MaxReadyTime"].asString());
		if(!overallNode["OneTransferCalls"].isNull())
			agentSummaryReportObject.overall.oneTransferCalls = std::stol(overallNode["OneTransferCalls"].asString());
		if(!overallNode["MaxTalkTime"].isNull())
			agentSummaryReportObject.overall.maxTalkTime = std::stol(overallNode["MaxTalkTime"].asString());
		if(!overallNode["TotalReadyTime"].isNull())
			agentSummaryReportObject.overall.totalReadyTime = std::stol(overallNode["TotalReadyTime"].asString());
		if(!overallNode["TotalBreakTime"].isNull())
			agentSummaryReportObject.overall.totalBreakTime = std::stol(overallNode["TotalBreakTime"].asString());
		if(!overallNode["TotalCalls"].isNull())
			agentSummaryReportObject.overall.totalCalls = std::stol(overallNode["TotalCalls"].asString());
		auto inboundNode = value["Inbound"];
		if(!inboundNode["TotalTalkTime"].isNull())
			agentSummaryReportObject.inbound.totalTalkTime = std::stol(inboundNode["TotalTalkTime"].asString());
		if(!inboundNode["CallsOffered"].isNull())
			agentSummaryReportObject.inbound.callsOffered = std::stol(inboundNode["CallsOffered"].asString());
		if(!inboundNode["AverageRingTime"].isNull())
			agentSummaryReportObject.inbound.averageRingTime = std::stol(inboundNode["AverageRingTime"].asString());
		if(!inboundNode["CallsHandled"].isNull())
			agentSummaryReportObject.inbound.callsHandled = std::stol(inboundNode["CallsHandled"].asString());
		if(!inboundNode["ServiceLevel20"].isNull())
			agentSummaryReportObject.inbound.serviceLevel20 = std::stof(inboundNode["ServiceLevel20"].asString());
		if(!inboundNode["TotalWorkTime"].isNull())
			agentSummaryReportObject.inbound.totalWorkTime = std::stol(inboundNode["TotalWorkTime"].asString());
		if(!inboundNode["MaxWorkTime"].isNull())
			agentSummaryReportObject.inbound.maxWorkTime = std::stol(inboundNode["MaxWorkTime"].asString());
		if(!inboundNode["AverageWorkTime"].isNull())
			agentSummaryReportObject.inbound.averageWorkTime = std::stol(inboundNode["AverageWorkTime"].asString());
		if(!inboundNode["AverageTalkTime"].isNull())
			agentSummaryReportObject.inbound.averageTalkTime = std::stol(inboundNode["AverageTalkTime"].asString());
		if(!inboundNode["SatisfactionIndex"].isNull())
			agentSummaryReportObject.inbound.satisfactionIndex = std::stof(inboundNode["SatisfactionIndex"].asString());
		if(!inboundNode["SatisfactionSurveysOffered"].isNull())
			agentSummaryReportObject.inbound.satisfactionSurveysOffered = std::stol(inboundNode["SatisfactionSurveysOffered"].asString());
		if(!inboundNode["HandleRate"].isNull())
			agentSummaryReportObject.inbound.handleRate = std::stof(inboundNode["HandleRate"].asString());
		if(!inboundNode["SatisfactionSurveysResponded"].isNull())
			agentSummaryReportObject.inbound.satisfactionSurveysResponded = std::stol(inboundNode["SatisfactionSurveysResponded"].asString());
		if(!inboundNode["TotalRingTime"].isNull())
			agentSummaryReportObject.inbound.totalRingTime = std::stol(inboundNode["TotalRingTime"].asString());
		if(!inboundNode["MaxTalkTime"].isNull())
			agentSummaryReportObject.inbound.maxTalkTime = std::stol(inboundNode["MaxTalkTime"].asString());
		if(!inboundNode["MaxRingTime"].isNull())
			agentSummaryReportObject.inbound.maxRingTime = std::stol(inboundNode["MaxRingTime"].asString());
		auto outboundNode = value["Outbound"];
		if(!outboundNode["TotalTalkTime"].isNull())
			agentSummaryReportObject.outbound.totalTalkTime = std::stol(outboundNode["TotalTalkTime"].asString());
		if(!outboundNode["MaxDialingTime"].isNull())
			agentSummaryReportObject.outbound.maxDialingTime = std::stol(outboundNode["MaxDialingTime"].asString());
		if(!outboundNode["CallsDialed"].isNull())
			agentSummaryReportObject.outbound.callsDialed = std::stol(outboundNode["CallsDialed"].asString());
		if(!outboundNode["CallsAnswered"].isNull())
			agentSummaryReportObject.outbound.callsAnswered = std::stol(outboundNode["CallsAnswered"].asString());
		if(!outboundNode["AnswerRate"].isNull())
			agentSummaryReportObject.outbound.answerRate = std::stof(outboundNode["AnswerRate"].asString());
		if(!outboundNode["TotalWorkTime"].isNull())
			agentSummaryReportObject.outbound.totalWorkTime = std::stol(outboundNode["TotalWorkTime"].asString());
		if(!outboundNode["MaxWorkTime"].isNull())
			agentSummaryReportObject.outbound.maxWorkTime = outboundNode["MaxWorkTime"].asString();
		if(!outboundNode["TotalDialingTime"].isNull())
			agentSummaryReportObject.outbound.totalDialingTime = std::stol(outboundNode["TotalDialingTime"].asString());
		if(!outboundNode["AverageTalkTime"].isNull())
			agentSummaryReportObject.outbound.averageTalkTime = std::stol(outboundNode["AverageTalkTime"].asString());
		if(!outboundNode["AverageWorkTime"].isNull())
			agentSummaryReportObject.outbound.averageWorkTime = std::stol(outboundNode["AverageWorkTime"].asString());
		if(!outboundNode["SatisfactionIndex"].isNull())
			agentSummaryReportObject.outbound.satisfactionIndex = std::stof(outboundNode["SatisfactionIndex"].asString());
		if(!outboundNode["SatisfactionSurveysOffered"].isNull())
			agentSummaryReportObject.outbound.satisfactionSurveysOffered = std::stol(outboundNode["SatisfactionSurveysOffered"].asString());
		if(!outboundNode["SatisfactionSurveysResponded"].isNull())
			agentSummaryReportObject.outbound.satisfactionSurveysResponded = std::stol(outboundNode["SatisfactionSurveysResponded"].asString());
		if(!outboundNode["MaxTalkTime"].isNull())
			agentSummaryReportObject.outbound.maxTalkTime = std::stol(outboundNode["MaxTalkTime"].asString());
		if(!outboundNode["AverageDialingTime"].isNull())
			agentSummaryReportObject.outbound.averageDialingTime = std::stol(outboundNode["AverageDialingTime"].asString());
		pagedAgentSummaryReport_.list.push_back(agentSummaryReportObject);
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

std::string ListAgentSummaryReportsSinceMidnightResult::getMessage()const
{
	return message_;
}

ListAgentSummaryReportsSinceMidnightResult::PagedAgentSummaryReport ListAgentSummaryReportsSinceMidnightResult::getPagedAgentSummaryReport()const
{
	return pagedAgentSummaryReport_;
}

int ListAgentSummaryReportsSinceMidnightResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListAgentSummaryReportsSinceMidnightResult::getCode()const
{
	return code_;
}

bool ListAgentSummaryReportsSinceMidnightResult::getSuccess()const
{
	return success_;
}

