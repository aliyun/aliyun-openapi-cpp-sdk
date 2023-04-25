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

#include <alibabacloud/ccc/model/ListSkillGroupSummaryReportsSinceMidnightResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListSkillGroupSummaryReportsSinceMidnightResult::ListSkillGroupSummaryReportsSinceMidnightResult() :
	ServiceResult()
{}

ListSkillGroupSummaryReportsSinceMidnightResult::ListSkillGroupSummaryReportsSinceMidnightResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSkillGroupSummaryReportsSinceMidnightResult::~ListSkillGroupSummaryReportsSinceMidnightResult()
{}

void ListSkillGroupSummaryReportsSinceMidnightResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto pagedSkillGroupSummaryReportNode = value["PagedSkillGroupSummaryReport"];
	if(!pagedSkillGroupSummaryReportNode["PageNumber"].isNull())
		pagedSkillGroupSummaryReport_.pageNumber = std::stoi(pagedSkillGroupSummaryReportNode["PageNumber"].asString());
	if(!pagedSkillGroupSummaryReportNode["PageSize"].isNull())
		pagedSkillGroupSummaryReport_.pageSize = std::stoi(pagedSkillGroupSummaryReportNode["PageSize"].asString());
	if(!pagedSkillGroupSummaryReportNode["TotalCount"].isNull())
		pagedSkillGroupSummaryReport_.totalCount = std::stoi(pagedSkillGroupSummaryReportNode["TotalCount"].asString());
	auto allListNode = pagedSkillGroupSummaryReportNode["List"]["SkillGroupSummaryReport"];
	for (auto pagedSkillGroupSummaryReportNodeListSkillGroupSummaryReport : allListNode)
	{
		PagedSkillGroupSummaryReport::SkillGroupSummaryReport skillGroupSummaryReportObject;
		if(!pagedSkillGroupSummaryReportNodeListSkillGroupSummaryReport["Timestamp"].isNull())
			skillGroupSummaryReportObject.timestamp = pagedSkillGroupSummaryReportNodeListSkillGroupSummaryReport["Timestamp"].asString();
		if(!pagedSkillGroupSummaryReportNodeListSkillGroupSummaryReport["InstanceId"].isNull())
			skillGroupSummaryReportObject.instanceId = pagedSkillGroupSummaryReportNodeListSkillGroupSummaryReport["InstanceId"].asString();
		if(!pagedSkillGroupSummaryReportNodeListSkillGroupSummaryReport["SkillGroupName"].isNull())
			skillGroupSummaryReportObject.skillGroupName = pagedSkillGroupSummaryReportNodeListSkillGroupSummaryReport["SkillGroupName"].asString();
		if(!pagedSkillGroupSummaryReportNodeListSkillGroupSummaryReport["SkillGroupId"].isNull())
			skillGroupSummaryReportObject.skillGroupId = pagedSkillGroupSummaryReportNodeListSkillGroupSummaryReport["SkillGroupId"].asString();
		auto overallNode = value["Overall"];
		if(!overallNode["TotalLoggedInTime"].isNull())
			skillGroupSummaryReportObject.overall.totalLoggedInTime = std::stol(overallNode["TotalLoggedInTime"].asString());
		if(!overallNode["TotalTalkTime"].isNull())
			skillGroupSummaryReportObject.overall.totalTalkTime = std::stol(overallNode["TotalTalkTime"].asString());
		if(!overallNode["OccupancyRate"].isNull())
			skillGroupSummaryReportObject.overall.occupancyRate = std::stof(overallNode["OccupancyRate"].asString());
		if(!overallNode["TotalWorkTime"].isNull())
			skillGroupSummaryReportObject.overall.totalWorkTime = std::stol(overallNode["TotalWorkTime"].asString());
		if(!overallNode["MaxWorkTime"].isNull())
			skillGroupSummaryReportObject.overall.maxWorkTime = std::stol(overallNode["MaxWorkTime"].asString());
		if(!overallNode["AverageWorkTime"].isNull())
			skillGroupSummaryReportObject.overall.averageWorkTime = std::stol(overallNode["AverageWorkTime"].asString());
		if(!overallNode["AverageTalkTime"].isNull())
			skillGroupSummaryReportObject.overall.averageTalkTime = std::stol(overallNode["AverageTalkTime"].asString());
		if(!overallNode["SatisfactionIndex"].isNull())
			skillGroupSummaryReportObject.overall.satisfactionIndex = std::stof(overallNode["SatisfactionIndex"].asString());
		if(!overallNode["SatisfactionSurveysOffered"].isNull())
			skillGroupSummaryReportObject.overall.satisfactionSurveysOffered = std::stol(overallNode["SatisfactionSurveysOffered"].asString());
		if(!overallNode["SatisfactionSurveysResponded"].isNull())
			skillGroupSummaryReportObject.overall.satisfactionSurveysResponded = std::stol(overallNode["SatisfactionSurveysResponded"].asString());
		if(!overallNode["MaxReadyTime"].isNull())
			skillGroupSummaryReportObject.overall.maxReadyTime = std::stol(overallNode["MaxReadyTime"].asString());
		if(!overallNode["AverageReadyTime"].isNull())
			skillGroupSummaryReportObject.overall.averageReadyTime = std::stol(overallNode["AverageReadyTime"].asString());
		if(!overallNode["TotalBreakTime"].isNull())
			skillGroupSummaryReportObject.overall.totalBreakTime = std::stol(overallNode["TotalBreakTime"].asString());
		if(!overallNode["TotalReadyTime"].isNull())
			skillGroupSummaryReportObject.overall.totalReadyTime = std::stol(overallNode["TotalReadyTime"].asString());
		if(!overallNode["MaxTalkTime"].isNull())
			skillGroupSummaryReportObject.overall.maxTalkTime = std::stol(overallNode["MaxTalkTime"].asString());
		if(!overallNode["TotalCalls"].isNull())
			skillGroupSummaryReportObject.overall.totalCalls = std::stol(overallNode["TotalCalls"].asString());
		auto inboundNode = value["Inbound"];
		if(!inboundNode["AverageRingTime"].isNull())
			skillGroupSummaryReportObject.inbound.averageRingTime = std::stol(inboundNode["AverageRingTime"].asString());
		if(!inboundNode["CallsHandled"].isNull())
			skillGroupSummaryReportObject.inbound.callsHandled = std::stol(inboundNode["CallsHandled"].asString());
		if(!inboundNode["TotalWorkTime"].isNull())
			skillGroupSummaryReportObject.inbound.totalWorkTime = std::stol(inboundNode["TotalWorkTime"].asString());
		if(!inboundNode["MaxWorkTime"].isNull())
			skillGroupSummaryReportObject.inbound.maxWorkTime = std::stol(inboundNode["MaxWorkTime"].asString());
		if(!inboundNode["QueueMaxWaitTimeDuration"].isNull())
			skillGroupSummaryReportObject.inbound.queueMaxWaitTimeDuration = std::stol(inboundNode["QueueMaxWaitTimeDuration"].asString());
		if(!inboundNode["AverageWorkTime"].isNull())
			skillGroupSummaryReportObject.inbound.averageWorkTime = std::stol(inboundNode["AverageWorkTime"].asString());
		if(!inboundNode["SatisfactionIndex"].isNull())
			skillGroupSummaryReportObject.inbound.satisfactionIndex = std::stof(inboundNode["SatisfactionIndex"].asString());
		if(!inboundNode["AnsweredByAgentOfQueueWaitTimeDuration"].isNull())
			skillGroupSummaryReportObject.inbound.answeredByAgentOfQueueWaitTimeDuration = std::stol(inboundNode["AnsweredByAgentOfQueueWaitTimeDuration"].asString());
		if(!inboundNode["TotalRingTime"].isNull())
			skillGroupSummaryReportObject.inbound.totalRingTime = std::stol(inboundNode["TotalRingTime"].asString());
		if(!inboundNode["InComingQueueOfQueueCount"].isNull())
			skillGroupSummaryReportObject.inbound.inComingQueueOfQueueCount = std::stol(inboundNode["InComingQueueOfQueueCount"].asString());
		if(!inboundNode["MaxTalkTime"].isNull())
			skillGroupSummaryReportObject.inbound.maxTalkTime = inboundNode["MaxTalkTime"].asString();
		if(!inboundNode["MaxRingTime"].isNull())
			skillGroupSummaryReportObject.inbound.maxRingTime = std::stol(inboundNode["MaxRingTime"].asString());
		if(!inboundNode["TotalTalkTime"].isNull())
			skillGroupSummaryReportObject.inbound.totalTalkTime = std::stol(inboundNode["TotalTalkTime"].asString());
		if(!inboundNode["CallsOffered"].isNull())
			skillGroupSummaryReportObject.inbound.callsOffered = std::stol(inboundNode["CallsOffered"].asString());
		if(!inboundNode["AbandonedInQueueOfQueueCount"].isNull())
			skillGroupSummaryReportObject.inbound.abandonedInQueueOfQueueCount = std::stol(inboundNode["AbandonedInQueueOfQueueCount"].asString());
		if(!inboundNode["OverFlowInQueueOfQueueCount"].isNull())
			skillGroupSummaryReportObject.inbound.overFlowInQueueOfQueueCount = std::stol(inboundNode["OverFlowInQueueOfQueueCount"].asString());
		if(!inboundNode["AnsweredByAgentOfQueueMaxWaitTimeDuration"].isNull())
			skillGroupSummaryReportObject.inbound.answeredByAgentOfQueueMaxWaitTimeDuration = std::stol(inboundNode["AnsweredByAgentOfQueueMaxWaitTimeDuration"].asString());
		if(!inboundNode["ServiceLevel20"].isNull())
			skillGroupSummaryReportObject.inbound.serviceLevel20 = std::stof(inboundNode["ServiceLevel20"].asString());
		if(!inboundNode["AverageTalkTime"].isNull())
			skillGroupSummaryReportObject.inbound.averageTalkTime = std::stol(inboundNode["AverageTalkTime"].asString());
		if(!inboundNode["AnsweredByAgentOfQueueCount"].isNull())
			skillGroupSummaryReportObject.inbound.answeredByAgentOfQueueCount = std::stol(inboundNode["AnsweredByAgentOfQueueCount"].asString());
		if(!inboundNode["SatisfactionSurveysOffered"].isNull())
			skillGroupSummaryReportObject.inbound.satisfactionSurveysOffered = std::stol(inboundNode["SatisfactionSurveysOffered"].asString());
		if(!inboundNode["HandleRate"].isNull())
			skillGroupSummaryReportObject.inbound.handleRate = std::stof(inboundNode["HandleRate"].asString());
		if(!inboundNode["SatisfactionSurveysResponded"].isNull())
			skillGroupSummaryReportObject.inbound.satisfactionSurveysResponded = std::stol(inboundNode["SatisfactionSurveysResponded"].asString());
		if(!inboundNode["GiveUpByAgentOfQueueCount"].isNull())
			skillGroupSummaryReportObject.inbound.giveUpByAgentOfQueueCount = std::stol(inboundNode["GiveUpByAgentOfQueueCount"].asString());
		if(!inboundNode["QueueWaitTimeDuration"].isNull())
			skillGroupSummaryReportObject.inbound.queueWaitTimeDuration = std::stol(inboundNode["QueueWaitTimeDuration"].asString());
		if(!inboundNode["CallsServiceLevel20"].isNull())
			skillGroupSummaryReportObject.inbound.callsServiceLevel20 = std::stol(inboundNode["CallsServiceLevel20"].asString());
		if(!inboundNode["CallsServiceLevel30"].isNull())
			skillGroupSummaryReportObject.inbound.callsServiceLevel30 = std::stol(inboundNode["CallsServiceLevel30"].asString());
		if(!inboundNode["CallsServiceLevel10"].isNull())
			skillGroupSummaryReportObject.inbound.callsServiceLevel10 = std::stol(inboundNode["CallsServiceLevel10"].asString());
		if(!inboundNode["CallsAttendedTransferOut"].isNull())
			skillGroupSummaryReportObject.inbound.callsAttendedTransferOut = std::stol(inboundNode["CallsAttendedTransferOut"].asString());
		if(!inboundNode["CallsBlindTransferOut"].isNull())
			skillGroupSummaryReportObject.inbound.callsBlindTransferOut = std::stol(inboundNode["CallsBlindTransferOut"].asString());
		auto outboundNode = value["Outbound"];
		if(!outboundNode["TotalTalkTime"].isNull())
			skillGroupSummaryReportObject.outbound.totalTalkTime = std::stol(outboundNode["TotalTalkTime"].asString());
		if(!outboundNode["MaxDialingTime"].isNull())
			skillGroupSummaryReportObject.outbound.maxDialingTime = std::stol(outboundNode["MaxDialingTime"].asString());
		if(!outboundNode["CallsDialed"].isNull())
			skillGroupSummaryReportObject.outbound.callsDialed = std::stol(outboundNode["CallsDialed"].asString());
		if(!outboundNode["CallsAnswered"].isNull())
			skillGroupSummaryReportObject.outbound.callsAnswered = std::stol(outboundNode["CallsAnswered"].asString());
		if(!outboundNode["AnswerRate"].isNull())
			skillGroupSummaryReportObject.outbound.answerRate = std::stof(outboundNode["AnswerRate"].asString());
		if(!outboundNode["TotalWorkTime"].isNull())
			skillGroupSummaryReportObject.outbound.totalWorkTime = std::stol(outboundNode["TotalWorkTime"].asString());
		if(!outboundNode["MaxWorkTime"].isNull())
			skillGroupSummaryReportObject.outbound.maxWorkTime = std::stol(outboundNode["MaxWorkTime"].asString());
		if(!outboundNode["TotalDialingTime"].isNull())
			skillGroupSummaryReportObject.outbound.totalDialingTime = std::stol(outboundNode["TotalDialingTime"].asString());
		if(!outboundNode["AverageTalkTime"].isNull())
			skillGroupSummaryReportObject.outbound.averageTalkTime = std::stol(outboundNode["AverageTalkTime"].asString());
		if(!outboundNode["AverageWorkTime"].isNull())
			skillGroupSummaryReportObject.outbound.averageWorkTime = std::stol(outboundNode["AverageWorkTime"].asString());
		if(!outboundNode["SatisfactionIndex"].isNull())
			skillGroupSummaryReportObject.outbound.satisfactionIndex = std::stof(outboundNode["SatisfactionIndex"].asString());
		if(!outboundNode["SatisfactionSurveysOffered"].isNull())
			skillGroupSummaryReportObject.outbound.satisfactionSurveysOffered = std::stol(outboundNode["SatisfactionSurveysOffered"].asString());
		if(!outboundNode["SatisfactionSurveysResponded"].isNull())
			skillGroupSummaryReportObject.outbound.satisfactionSurveysResponded = std::stol(outboundNode["SatisfactionSurveysResponded"].asString());
		if(!outboundNode["MaxTalkTime"].isNull())
			skillGroupSummaryReportObject.outbound.maxTalkTime = std::stol(outboundNode["MaxTalkTime"].asString());
		if(!outboundNode["AverageDialingTime"].isNull())
			skillGroupSummaryReportObject.outbound.averageDialingTime = std::stol(outboundNode["AverageDialingTime"].asString());
		if(!outboundNode["CallsServiceLevel30"].isNull())
			skillGroupSummaryReportObject.outbound.callsServiceLevel30 = outboundNode["CallsServiceLevel30"].asString();
		pagedSkillGroupSummaryReport_.list.push_back(skillGroupSummaryReportObject);
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

ListSkillGroupSummaryReportsSinceMidnightResult::PagedSkillGroupSummaryReport ListSkillGroupSummaryReportsSinceMidnightResult::getPagedSkillGroupSummaryReport()const
{
	return pagedSkillGroupSummaryReport_;
}

std::string ListSkillGroupSummaryReportsSinceMidnightResult::getMessage()const
{
	return message_;
}

int ListSkillGroupSummaryReportsSinceMidnightResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListSkillGroupSummaryReportsSinceMidnightResult::getCode()const
{
	return code_;
}

bool ListSkillGroupSummaryReportsSinceMidnightResult::getSuccess()const
{
	return success_;
}

