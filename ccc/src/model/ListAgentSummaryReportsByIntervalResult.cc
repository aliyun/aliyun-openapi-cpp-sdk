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

#include <alibabacloud/ccc/model/ListAgentSummaryReportsByIntervalResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListAgentSummaryReportsByIntervalResult::ListAgentSummaryReportsByIntervalResult() :
	ServiceResult()
{}

ListAgentSummaryReportsByIntervalResult::ListAgentSummaryReportsByIntervalResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAgentSummaryReportsByIntervalResult::~ListAgentSummaryReportsByIntervalResult()
{}

void ListAgentSummaryReportsByIntervalResult::parse(const std::string &payload)
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
	auto allListNode = pagedAgentSummaryReportNode["List"]["AgentTimeIntervalReport"];
	for (auto pagedAgentSummaryReportNodeListAgentTimeIntervalReport : allListNode)
	{
		PagedAgentSummaryReport::AgentTimeIntervalReport agentTimeIntervalReportObject;
		if(!pagedAgentSummaryReportNodeListAgentTimeIntervalReport["AgentId"].isNull())
			agentTimeIntervalReportObject.agentId = pagedAgentSummaryReportNodeListAgentTimeIntervalReport["AgentId"].asString();
		auto allIntervalListNode = pagedAgentSummaryReportNodeListAgentTimeIntervalReport["IntervalList"]["AgentSummaryReport"];
		for (auto pagedAgentSummaryReportNodeListAgentTimeIntervalReportIntervalListAgentSummaryReport : allIntervalListNode)
		{
			PagedAgentSummaryReport::AgentTimeIntervalReport::AgentSummaryReport intervalListObject;
			if(!pagedAgentSummaryReportNodeListAgentTimeIntervalReportIntervalListAgentSummaryReport["Timestamp"].isNull())
				intervalListObject.timestamp = pagedAgentSummaryReportNodeListAgentTimeIntervalReportIntervalListAgentSummaryReport["Timestamp"].asString();
			if(!pagedAgentSummaryReportNodeListAgentTimeIntervalReportIntervalListAgentSummaryReport["InstanceId"].isNull())
				intervalListObject.instanceId = pagedAgentSummaryReportNodeListAgentTimeIntervalReportIntervalListAgentSummaryReport["InstanceId"].asString();
			if(!pagedAgentSummaryReportNodeListAgentTimeIntervalReportIntervalListAgentSummaryReport["AgentId"].isNull())
				intervalListObject.agentId = pagedAgentSummaryReportNodeListAgentTimeIntervalReportIntervalListAgentSummaryReport["AgentId"].asString();
			if(!pagedAgentSummaryReportNodeListAgentTimeIntervalReportIntervalListAgentSummaryReport["LoginName"].isNull())
				intervalListObject.loginName = pagedAgentSummaryReportNodeListAgentTimeIntervalReportIntervalListAgentSummaryReport["LoginName"].asString();
			if(!pagedAgentSummaryReportNodeListAgentTimeIntervalReportIntervalListAgentSummaryReport["AgentName"].isNull())
				intervalListObject.agentName = pagedAgentSummaryReportNodeListAgentTimeIntervalReportIntervalListAgentSummaryReport["AgentName"].asString();
			if(!pagedAgentSummaryReportNodeListAgentTimeIntervalReportIntervalListAgentSummaryReport["SkillGroupIds"].isNull())
				intervalListObject.skillGroupIds = pagedAgentSummaryReportNodeListAgentTimeIntervalReportIntervalListAgentSummaryReport["SkillGroupIds"].asString();
			if(!pagedAgentSummaryReportNodeListAgentTimeIntervalReportIntervalListAgentSummaryReport["SkillGroupNames"].isNull())
				intervalListObject.skillGroupNames = pagedAgentSummaryReportNodeListAgentTimeIntervalReportIntervalListAgentSummaryReport["SkillGroupNames"].asString();
			auto overallNode = value["Overall"];
			if(!overallNode["TotalCalls"].isNull())
				intervalListObject.overall.totalCalls = std::stol(overallNode["TotalCalls"].asString());
			if(!overallNode["TotalLoggedInTime"].isNull())
				intervalListObject.overall.totalLoggedInTime = std::stol(overallNode["TotalLoggedInTime"].asString());
			if(!overallNode["TotalBreakTime"].isNull())
				intervalListObject.overall.totalBreakTime = std::stol(overallNode["TotalBreakTime"].asString());
			if(!overallNode["OccupancyRate"].isNull())
				intervalListObject.overall.occupancyRate = std::stof(overallNode["OccupancyRate"].asString());
			if(!overallNode["TotalReadyTime"].isNull())
				intervalListObject.overall.totalReadyTime = std::stol(overallNode["TotalReadyTime"].asString());
			if(!overallNode["MaxReadyTime"].isNull())
				intervalListObject.overall.maxReadyTime = std::stol(overallNode["MaxReadyTime"].asString());
			if(!overallNode["AverageReadyTime"].isNull())
				intervalListObject.overall.averageReadyTime = std::stol(overallNode["AverageReadyTime"].asString());
			if(!overallNode["TotalTalkTime"].isNull())
				intervalListObject.overall.totalTalkTime = std::stol(overallNode["TotalTalkTime"].asString());
			if(!overallNode["MaxTalkTime"].isNull())
				intervalListObject.overall.maxTalkTime = std::stol(overallNode["MaxTalkTime"].asString());
			if(!overallNode["AverageTalkTime"].isNull())
				intervalListObject.overall.averageTalkTime = std::stol(overallNode["AverageTalkTime"].asString());
			if(!overallNode["TotalWorkTime"].isNull())
				intervalListObject.overall.totalWorkTime = std::stol(overallNode["TotalWorkTime"].asString());
			if(!overallNode["MaxWorkTime"].isNull())
				intervalListObject.overall.maxWorkTime = std::stol(overallNode["MaxWorkTime"].asString());
			if(!overallNode["AverageWorkTime"].isNull())
				intervalListObject.overall.averageWorkTime = std::stol(overallNode["AverageWorkTime"].asString());
			if(!overallNode["SatisfactionIndex"].isNull())
				intervalListObject.overall.satisfactionIndex = std::stof(overallNode["SatisfactionIndex"].asString());
			if(!overallNode["SatisfactionSurveysOffered"].isNull())
				intervalListObject.overall.satisfactionSurveysOffered = std::stol(overallNode["SatisfactionSurveysOffered"].asString());
			if(!overallNode["SatisfactionSurveysResponded"].isNull())
				intervalListObject.overall.satisfactionSurveysResponded = std::stol(overallNode["SatisfactionSurveysResponded"].asString());
			if(!overallNode["OneTransferCalls"].isNull())
				intervalListObject.overall.oneTransferCalls = std::stol(overallNode["OneTransferCalls"].asString());
			if(!overallNode["FirstLogInTime"].isNull())
				intervalListObject.overall.firstLogInTime = overallNode["FirstLogInTime"].asString();
			if(!overallNode["LastLogOutTime"].isNull())
				intervalListObject.overall.lastLogOutTime = overallNode["LastLogOutTime"].asString();
			auto inboundNode = value["Inbound"];
			if(!inboundNode["CallsOffered"].isNull())
				intervalListObject.inbound.callsOffered = std::stol(inboundNode["CallsOffered"].asString());
			if(!inboundNode["CallsHandled"].isNull())
				intervalListObject.inbound.callsHandled = std::stol(inboundNode["CallsHandled"].asString());
			if(!inboundNode["HandleRate"].isNull())
				intervalListObject.inbound.handleRate = std::stof(inboundNode["HandleRate"].asString());
			if(!inboundNode["TotalRingTime"].isNull())
				intervalListObject.inbound.totalRingTime = std::stol(inboundNode["TotalRingTime"].asString());
			if(!inboundNode["MaxRingTime"].isNull())
				intervalListObject.inbound.maxRingTime = std::stol(inboundNode["MaxRingTime"].asString());
			if(!inboundNode["AverageRingTime"].isNull())
				intervalListObject.inbound.averageRingTime = std::stol(inboundNode["AverageRingTime"].asString());
			if(!inboundNode["ServiceLevel20"].isNull())
				intervalListObject.inbound.serviceLevel20 = std::stof(inboundNode["ServiceLevel20"].asString());
			if(!inboundNode["TotalTalkTime"].isNull())
				intervalListObject.inbound.totalTalkTime = std::stol(inboundNode["TotalTalkTime"].asString());
			if(!inboundNode["MaxTalkTime"].isNull())
				intervalListObject.inbound.maxTalkTime = std::stol(inboundNode["MaxTalkTime"].asString());
			if(!inboundNode["AverageTalkTime"].isNull())
				intervalListObject.inbound.averageTalkTime = std::stol(inboundNode["AverageTalkTime"].asString());
			if(!inboundNode["TotalWorkTime"].isNull())
				intervalListObject.inbound.totalWorkTime = std::stol(inboundNode["TotalWorkTime"].asString());
			if(!inboundNode["MaxWorkTime"].isNull())
				intervalListObject.inbound.maxWorkTime = std::stol(inboundNode["MaxWorkTime"].asString());
			if(!inboundNode["AverageWorkTime"].isNull())
				intervalListObject.inbound.averageWorkTime = std::stol(inboundNode["AverageWorkTime"].asString());
			if(!inboundNode["SatisfactionIndex"].isNull())
				intervalListObject.inbound.satisfactionIndex = std::stof(inboundNode["SatisfactionIndex"].asString());
			if(!inboundNode["SatisfactionSurveysOffered"].isNull())
				intervalListObject.inbound.satisfactionSurveysOffered = std::stol(inboundNode["SatisfactionSurveysOffered"].asString());
			if(!inboundNode["SatisfactionSurveysResponded"].isNull())
				intervalListObject.inbound.satisfactionSurveysResponded = std::stol(inboundNode["SatisfactionSurveysResponded"].asString());
			auto outboundNode = value["Outbound"];
			if(!outboundNode["CallsDialed"].isNull())
				intervalListObject.outbound.callsDialed = std::stol(outboundNode["CallsDialed"].asString());
			if(!outboundNode["CallsAnswered"].isNull())
				intervalListObject.outbound.callsAnswered = std::stol(outboundNode["CallsAnswered"].asString());
			if(!outboundNode["AnswerRate"].isNull())
				intervalListObject.outbound.answerRate = std::stof(outboundNode["AnswerRate"].asString());
			if(!outboundNode["TotalDialingTime"].isNull())
				intervalListObject.outbound.totalDialingTime = std::stol(outboundNode["TotalDialingTime"].asString());
			if(!outboundNode["MaxDialingTime"].isNull())
				intervalListObject.outbound.maxDialingTime = std::stol(outboundNode["MaxDialingTime"].asString());
			if(!outboundNode["AverageDialingTime"].isNull())
				intervalListObject.outbound.averageDialingTime = std::stol(outboundNode["AverageDialingTime"].asString());
			if(!outboundNode["TotalTalkTime"].isNull())
				intervalListObject.outbound.totalTalkTime = std::stol(outboundNode["TotalTalkTime"].asString());
			if(!outboundNode["MaxTalkTime"].isNull())
				intervalListObject.outbound.maxTalkTime = std::stol(outboundNode["MaxTalkTime"].asString());
			if(!outboundNode["AverageTalkTime"].isNull())
				intervalListObject.outbound.averageTalkTime = std::stol(outboundNode["AverageTalkTime"].asString());
			if(!outboundNode["TotalWorkTime"].isNull())
				intervalListObject.outbound.totalWorkTime = std::stol(outboundNode["TotalWorkTime"].asString());
			if(!outboundNode["MaxWorkTime"].isNull())
				intervalListObject.outbound.maxWorkTime = std::stol(outboundNode["MaxWorkTime"].asString());
			if(!outboundNode["AverageWorkTime"].isNull())
				intervalListObject.outbound.averageWorkTime = std::stol(outboundNode["AverageWorkTime"].asString());
			if(!outboundNode["SatisfactionIndex"].isNull())
				intervalListObject.outbound.satisfactionIndex = std::stof(outboundNode["SatisfactionIndex"].asString());
			if(!outboundNode["SatisfactionSurveysOffered"].isNull())
				intervalListObject.outbound.satisfactionSurveysOffered = std::stol(outboundNode["SatisfactionSurveysOffered"].asString());
			if(!outboundNode["SatisfactionSurveysResponded"].isNull())
				intervalListObject.outbound.satisfactionSurveysResponded = std::stol(outboundNode["SatisfactionSurveysResponded"].asString());
			agentTimeIntervalReportObject.intervalList.push_back(intervalListObject);
		}
		pagedAgentSummaryReport_.list.push_back(agentTimeIntervalReportObject);
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

std::string ListAgentSummaryReportsByIntervalResult::getMessage()const
{
	return message_;
}

ListAgentSummaryReportsByIntervalResult::PagedAgentSummaryReport ListAgentSummaryReportsByIntervalResult::getPagedAgentSummaryReport()const
{
	return pagedAgentSummaryReport_;
}

int ListAgentSummaryReportsByIntervalResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListAgentSummaryReportsByIntervalResult::getCode()const
{
	return code_;
}

bool ListAgentSummaryReportsByIntervalResult::getSuccess()const
{
	return success_;
}

