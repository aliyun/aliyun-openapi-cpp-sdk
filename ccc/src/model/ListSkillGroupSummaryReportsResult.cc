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

#include <alibabacloud/ccc/model/ListSkillGroupSummaryReportsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListSkillGroupSummaryReportsResult::ListSkillGroupSummaryReportsResult() :
	ServiceResult()
{}

ListSkillGroupSummaryReportsResult::ListSkillGroupSummaryReportsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSkillGroupSummaryReportsResult::~ListSkillGroupSummaryReportsResult()
{}

void ListSkillGroupSummaryReportsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto pagedSkillGroupSummaryReportNode = value["PagedSkillGroupSummaryReport"];
	if(!pagedSkillGroupSummaryReportNode["TotalCount"].isNull())
		pagedSkillGroupSummaryReport_.totalCount = std::stoi(pagedSkillGroupSummaryReportNode["TotalCount"].asString());
	if(!pagedSkillGroupSummaryReportNode["PageNumber"].isNull())
		pagedSkillGroupSummaryReport_.pageNumber = std::stoi(pagedSkillGroupSummaryReportNode["PageNumber"].asString());
	if(!pagedSkillGroupSummaryReportNode["PageSize"].isNull())
		pagedSkillGroupSummaryReport_.pageSize = std::stoi(pagedSkillGroupSummaryReportNode["PageSize"].asString());
	auto allList = value["List"]["SkillGroupSummaryReport"];
	for (auto value : allList)
	{
		PagedSkillGroupSummaryReport::SkillGroupSummaryReport skillGroupSummaryReportObject;
		if(!value["InstanceId"].isNull())
			skillGroupSummaryReportObject.instanceId = value["InstanceId"].asString();
		if(!value["SkillGroupId"].isNull())
			skillGroupSummaryReportObject.skillGroupId = value["SkillGroupId"].asString();
		if(!value["SkillGroupName"].isNull())
			skillGroupSummaryReportObject.skillGroupName = value["SkillGroupName"].asString();
		auto overallNode = value["Overall"];
		if(!overallNode["TotalCalls"].isNull())
			skillGroupSummaryReportObject.overall.totalCalls = std::stol(overallNode["TotalCalls"].asString());
		if(!overallNode["TotalLoggedInTime"].isNull())
			skillGroupSummaryReportObject.overall.totalLoggedInTime = std::stol(overallNode["TotalLoggedInTime"].asString());
		if(!overallNode["TotalBreakTime"].isNull())
			skillGroupSummaryReportObject.overall.totalBreakTime = std::stol(overallNode["TotalBreakTime"].asString());
		if(!overallNode["OccupancyRate"].isNull())
			skillGroupSummaryReportObject.overall.occupancyRate = std::stof(overallNode["OccupancyRate"].asString());
		if(!overallNode["TotalReadyTime"].isNull())
			skillGroupSummaryReportObject.overall.totalReadyTime = std::stol(overallNode["TotalReadyTime"].asString());
		if(!overallNode["MaxReadyTime"].isNull())
			skillGroupSummaryReportObject.overall.maxReadyTime = std::stol(overallNode["MaxReadyTime"].asString());
		if(!overallNode["AverageReadyTime"].isNull())
			skillGroupSummaryReportObject.overall.averageReadyTime = std::stol(overallNode["AverageReadyTime"].asString());
		if(!overallNode["TotalTalkTime"].isNull())
			skillGroupSummaryReportObject.overall.totalTalkTime = std::stol(overallNode["TotalTalkTime"].asString());
		if(!overallNode["MaxTalkTime"].isNull())
			skillGroupSummaryReportObject.overall.maxTalkTime = std::stol(overallNode["MaxTalkTime"].asString());
		if(!overallNode["AverageTalkTime"].isNull())
			skillGroupSummaryReportObject.overall.averageTalkTime = std::stol(overallNode["AverageTalkTime"].asString());
		if(!overallNode["TotalWorkTime"].isNull())
			skillGroupSummaryReportObject.overall.totalWorkTime = std::stol(overallNode["TotalWorkTime"].asString());
		if(!overallNode["MaxWorkTime"].isNull())
			skillGroupSummaryReportObject.overall.maxWorkTime = std::stol(overallNode["MaxWorkTime"].asString());
		if(!overallNode["AverageWorkTime"].isNull())
			skillGroupSummaryReportObject.overall.averageWorkTime = std::stol(overallNode["AverageWorkTime"].asString());
		if(!overallNode["SatisfactionIndex"].isNull())
			skillGroupSummaryReportObject.overall.satisfactionIndex = std::stof(overallNode["SatisfactionIndex"].asString());
		if(!overallNode["SatisfactionSurveysOffered"].isNull())
			skillGroupSummaryReportObject.overall.satisfactionSurveysOffered = std::stol(overallNode["SatisfactionSurveysOffered"].asString());
		if(!overallNode["SatisfactionSurveysResponded"].isNull())
			skillGroupSummaryReportObject.overall.satisfactionSurveysResponded = std::stol(overallNode["SatisfactionSurveysResponded"].asString());
		auto inboundNode = value["Inbound"];
		if(!inboundNode["CallsOffered"].isNull())
			skillGroupSummaryReportObject.inbound.callsOffered = std::stol(inboundNode["CallsOffered"].asString());
		if(!inboundNode["CallsHandled"].isNull())
			skillGroupSummaryReportObject.inbound.callsHandled = std::stol(inboundNode["CallsHandled"].asString());
		if(!inboundNode["HandleRate"].isNull())
			skillGroupSummaryReportObject.inbound.handleRate = std::stof(inboundNode["HandleRate"].asString());
		if(!inboundNode["TotalRingTime"].isNull())
			skillGroupSummaryReportObject.inbound.totalRingTime = std::stol(inboundNode["TotalRingTime"].asString());
		if(!inboundNode["MaxRingTime"].isNull())
			skillGroupSummaryReportObject.inbound.maxRingTime = std::stol(inboundNode["MaxRingTime"].asString());
		if(!inboundNode["AverageRingTime"].isNull())
			skillGroupSummaryReportObject.inbound.averageRingTime = std::stol(inboundNode["AverageRingTime"].asString());
		if(!inboundNode["ServiceLevel20"].isNull())
			skillGroupSummaryReportObject.inbound.serviceLevel20 = std::stof(inboundNode["ServiceLevel20"].asString());
		if(!inboundNode["TotalTalkTime"].isNull())
			skillGroupSummaryReportObject.inbound.totalTalkTime = std::stol(inboundNode["TotalTalkTime"].asString());
		if(!inboundNode["MaxTalkTime"].isNull())
			skillGroupSummaryReportObject.inbound.maxTalkTime = inboundNode["MaxTalkTime"].asString();
		if(!inboundNode["AverageTalkTime"].isNull())
			skillGroupSummaryReportObject.inbound.averageTalkTime = std::stol(inboundNode["AverageTalkTime"].asString());
		if(!inboundNode["TotalWorkTime"].isNull())
			skillGroupSummaryReportObject.inbound.totalWorkTime = std::stol(inboundNode["TotalWorkTime"].asString());
		if(!inboundNode["MaxWorkTime"].isNull())
			skillGroupSummaryReportObject.inbound.maxWorkTime = std::stol(inboundNode["MaxWorkTime"].asString());
		if(!inboundNode["AverageWorkTime"].isNull())
			skillGroupSummaryReportObject.inbound.averageWorkTime = std::stol(inboundNode["AverageWorkTime"].asString());
		if(!inboundNode["SatisfactionIndex"].isNull())
			skillGroupSummaryReportObject.inbound.satisfactionIndex = std::stof(inboundNode["SatisfactionIndex"].asString());
		if(!inboundNode["SatisfactionSurveysOffered"].isNull())
			skillGroupSummaryReportObject.inbound.satisfactionSurveysOffered = std::stol(inboundNode["SatisfactionSurveysOffered"].asString());
		if(!inboundNode["SatisfactionSurveysResponded"].isNull())
			skillGroupSummaryReportObject.inbound.satisfactionSurveysResponded = std::stol(inboundNode["SatisfactionSurveysResponded"].asString());
		if(!inboundNode["InComingQueueOfQueueCount"].isNull())
			skillGroupSummaryReportObject.inbound.inComingQueueOfQueueCount = std::stol(inboundNode["InComingQueueOfQueueCount"].asString());
		if(!inboundNode["AnsweredByAgentOfQueueCount"].isNull())
			skillGroupSummaryReportObject.inbound.answeredByAgentOfQueueCount = std::stol(inboundNode["AnsweredByAgentOfQueueCount"].asString());
		if(!inboundNode["GiveUpByAgentOfQueueCount"].isNull())
			skillGroupSummaryReportObject.inbound.giveUpByAgentOfQueueCount = std::stol(inboundNode["GiveUpByAgentOfQueueCount"].asString());
		if(!inboundNode["AbandonedInQueueOfQueueCount"].isNull())
			skillGroupSummaryReportObject.inbound.abandonedInQueueOfQueueCount = std::stol(inboundNode["AbandonedInQueueOfQueueCount"].asString());
		if(!inboundNode["OverFlowInQueueOfQueueCount"].isNull())
			skillGroupSummaryReportObject.inbound.overFlowInQueueOfQueueCount = std::stol(inboundNode["OverFlowInQueueOfQueueCount"].asString());
		if(!inboundNode["QueueWaitTimeDuration"].isNull())
			skillGroupSummaryReportObject.inbound.queueWaitTimeDuration = std::stol(inboundNode["QueueWaitTimeDuration"].asString());
		if(!inboundNode["AnsweredByAgentOfQueueWaitTimeDuration"].isNull())
			skillGroupSummaryReportObject.inbound.answeredByAgentOfQueueWaitTimeDuration = std::stol(inboundNode["AnsweredByAgentOfQueueWaitTimeDuration"].asString());
		if(!inboundNode["QueueMaxWaitTimeDuration"].isNull())
			skillGroupSummaryReportObject.inbound.queueMaxWaitTimeDuration = std::stol(inboundNode["QueueMaxWaitTimeDuration"].asString());
		if(!inboundNode["AnsweredByAgentOfQueueMaxWaitTimeDuration"].isNull())
			skillGroupSummaryReportObject.inbound.answeredByAgentOfQueueMaxWaitTimeDuration = std::stol(inboundNode["AnsweredByAgentOfQueueMaxWaitTimeDuration"].asString());
		auto outboundNode = value["Outbound"];
		if(!outboundNode["CallsDialed"].isNull())
			skillGroupSummaryReportObject.outbound.callsDialed = std::stol(outboundNode["CallsDialed"].asString());
		if(!outboundNode["CallsAnswered"].isNull())
			skillGroupSummaryReportObject.outbound.callsAnswered = std::stol(outboundNode["CallsAnswered"].asString());
		if(!outboundNode["AnswerRate"].isNull())
			skillGroupSummaryReportObject.outbound.answerRate = std::stof(outboundNode["AnswerRate"].asString());
		if(!outboundNode["TotalDialingTime"].isNull())
			skillGroupSummaryReportObject.outbound.totalDialingTime = std::stol(outboundNode["TotalDialingTime"].asString());
		if(!outboundNode["MaxDialingTime"].isNull())
			skillGroupSummaryReportObject.outbound.maxDialingTime = std::stol(outboundNode["MaxDialingTime"].asString());
		if(!outboundNode["AverageDialingTime"].isNull())
			skillGroupSummaryReportObject.outbound.averageDialingTime = std::stol(outboundNode["AverageDialingTime"].asString());
		if(!outboundNode["TotalTalkTime"].isNull())
			skillGroupSummaryReportObject.outbound.totalTalkTime = std::stol(outboundNode["TotalTalkTime"].asString());
		if(!outboundNode["MaxTalkTime"].isNull())
			skillGroupSummaryReportObject.outbound.maxTalkTime = std::stol(outboundNode["MaxTalkTime"].asString());
		if(!outboundNode["AverageTalkTime"].isNull())
			skillGroupSummaryReportObject.outbound.averageTalkTime = std::stol(outboundNode["AverageTalkTime"].asString());
		if(!outboundNode["TotalWorkTime"].isNull())
			skillGroupSummaryReportObject.outbound.totalWorkTime = std::stol(outboundNode["TotalWorkTime"].asString());
		if(!outboundNode["MaxWorkTime"].isNull())
			skillGroupSummaryReportObject.outbound.maxWorkTime = std::stol(outboundNode["MaxWorkTime"].asString());
		if(!outboundNode["AverageWorkTime"].isNull())
			skillGroupSummaryReportObject.outbound.averageWorkTime = std::stol(outboundNode["AverageWorkTime"].asString());
		if(!outboundNode["SatisfactionIndex"].isNull())
			skillGroupSummaryReportObject.outbound.satisfactionIndex = std::stof(outboundNode["SatisfactionIndex"].asString());
		if(!outboundNode["SatisfactionSurveysOffered"].isNull())
			skillGroupSummaryReportObject.outbound.satisfactionSurveysOffered = std::stol(outboundNode["SatisfactionSurveysOffered"].asString());
		if(!outboundNode["SatisfactionSurveysResponded"].isNull())
			skillGroupSummaryReportObject.outbound.satisfactionSurveysResponded = std::stol(outboundNode["SatisfactionSurveysResponded"].asString());
		pagedSkillGroupSummaryReport_.list.push_back(skillGroupSummaryReportObject);
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

ListSkillGroupSummaryReportsResult::PagedSkillGroupSummaryReport ListSkillGroupSummaryReportsResult::getPagedSkillGroupSummaryReport()const
{
	return pagedSkillGroupSummaryReport_;
}

std::string ListSkillGroupSummaryReportsResult::getMessage()const
{
	return message_;
}

int ListSkillGroupSummaryReportsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListSkillGroupSummaryReportsResult::getCode()const
{
	return code_;
}

bool ListSkillGroupSummaryReportsResult::getSuccess()const
{
	return success_;
}

