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

#include <alibabacloud/ccc/model/ListHistoricalAgentReportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListHistoricalAgentReportResult::ListHistoricalAgentReportResult() :
	ServiceResult()
{}

ListHistoricalAgentReportResult::ListHistoricalAgentReportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListHistoricalAgentReportResult::~ListHistoricalAgentReportResult()
{}

void ListHistoricalAgentReportResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	auto allListNode = dataNode["List"]["Items"];
	for (auto dataNodeListItems : allListNode)
	{
		Data::Items itemsObject;
		if(!dataNodeListItems["AgentName"].isNull())
			itemsObject.agentName = dataNodeListItems["AgentName"].asString();
		if(!dataNodeListItems["AgentId"].isNull())
			itemsObject.agentId = dataNodeListItems["AgentId"].asString();
		if(!dataNodeListItems["DisplayId"].isNull())
			itemsObject.displayId = dataNodeListItems["DisplayId"].asString();
		if(!dataNodeListItems["SkillGroupIds"].isNull())
			itemsObject.skillGroupIds = dataNodeListItems["SkillGroupIds"].asString();
		if(!dataNodeListItems["SkillGroupNames"].isNull())
			itemsObject.skillGroupNames = dataNodeListItems["SkillGroupNames"].asString();
		auto inboundNode = value["Inbound"];
		if(!inboundNode["AverageRingTime"].isNull())
			itemsObject.inbound.averageRingTime = std::stof(inboundNode["AverageRingTime"].asString());
		if(!inboundNode["CallsHandled"].isNull())
			itemsObject.inbound.callsHandled = std::stol(inboundNode["CallsHandled"].asString());
		if(!inboundNode["TotalWorkTime"].isNull())
			itemsObject.inbound.totalWorkTime = std::stol(inboundNode["TotalWorkTime"].asString());
		if(!inboundNode["CallsAttendedTransferOut"].isNull())
			itemsObject.inbound.callsAttendedTransferOut = std::stol(inboundNode["CallsAttendedTransferOut"].asString());
		if(!inboundNode["MaxWorkTime"].isNull())
			itemsObject.inbound.maxWorkTime = std::stol(inboundNode["MaxWorkTime"].asString());
		if(!inboundNode["TotalHoldTime"].isNull())
			itemsObject.inbound.totalHoldTime = std::stol(inboundNode["TotalHoldTime"].asString());
		if(!inboundNode["AverageWorkTime"].isNull())
			itemsObject.inbound.averageWorkTime = std::stof(inboundNode["AverageWorkTime"].asString());
		if(!inboundNode["CallsBlindTransferIn"].isNull())
			itemsObject.inbound.callsBlindTransferIn = std::stol(inboundNode["CallsBlindTransferIn"].asString());
		if(!inboundNode["SatisfactionIndex"].isNull())
			itemsObject.inbound.satisfactionIndex = std::stof(inboundNode["SatisfactionIndex"].asString());
		if(!inboundNode["CallsRinged"].isNull())
			itemsObject.inbound.callsRinged = std::stol(inboundNode["CallsRinged"].asString());
		if(!inboundNode["CallsAttendedTransferIn"].isNull())
			itemsObject.inbound.callsAttendedTransferIn = std::stol(inboundNode["CallsAttendedTransferIn"].asString());
		if(!inboundNode["CallsBlindTransferOut"].isNull())
			itemsObject.inbound.callsBlindTransferOut = std::stol(inboundNode["CallsBlindTransferOut"].asString());
		if(!inboundNode["TotalRingTime"].isNull())
			itemsObject.inbound.totalRingTime = std::stol(inboundNode["TotalRingTime"].asString());
		if(!inboundNode["MaxTalkTime"].isNull())
			itemsObject.inbound.maxTalkTime = std::stol(inboundNode["MaxTalkTime"].asString());
		if(!inboundNode["MaxRingTime"].isNull())
			itemsObject.inbound.maxRingTime = std::stol(inboundNode["MaxRingTime"].asString());
		if(!inboundNode["TotalTalkTime"].isNull())
			itemsObject.inbound.totalTalkTime = std::stol(inboundNode["TotalTalkTime"].asString());
		if(!inboundNode["CallsOffered"].isNull())
			itemsObject.inbound.callsOffered = std::stol(inboundNode["CallsOffered"].asString());
		if(!inboundNode["MaxHoldTime"].isNull())
			itemsObject.inbound.maxHoldTime = std::stol(inboundNode["MaxHoldTime"].asString());
		if(!inboundNode["AverageTalkTime"].isNull())
			itemsObject.inbound.averageTalkTime = std::stof(inboundNode["AverageTalkTime"].asString());
		if(!inboundNode["SatisfactionRate"].isNull())
			itemsObject.inbound.satisfactionRate = std::stof(inboundNode["SatisfactionRate"].asString());
		if(!inboundNode["CallsHold"].isNull())
			itemsObject.inbound.callsHold = std::stol(inboundNode["CallsHold"].asString());
		if(!inboundNode["SatisfactionSurveysOffered"].isNull())
			itemsObject.inbound.satisfactionSurveysOffered = std::stol(inboundNode["SatisfactionSurveysOffered"].asString());
		if(!inboundNode["HandleRate"].isNull())
			itemsObject.inbound.handleRate = std::stof(inboundNode["HandleRate"].asString());
		if(!inboundNode["SatisfactionSurveysResponded"].isNull())
			itemsObject.inbound.satisfactionSurveysResponded = std::stol(inboundNode["SatisfactionSurveysResponded"].asString());
		if(!inboundNode["AverageHoldTime"].isNull())
			itemsObject.inbound.averageHoldTime = std::stof(inboundNode["AverageHoldTime"].asString());
		auto outboundNode = value["Outbound"];
		if(!outboundNode["AverageRingTime"].isNull())
			itemsObject.outbound.averageRingTime = std::stof(outboundNode["AverageRingTime"].asString());
		if(!outboundNode["CallsDialed"].isNull())
			itemsObject.outbound.callsDialed = std::stol(outboundNode["CallsDialed"].asString());
		if(!outboundNode["CallsAnswered"].isNull())
			itemsObject.outbound.callsAnswered = std::stol(outboundNode["CallsAnswered"].asString());
		if(!outboundNode["TotalWorkTime"].isNull())
			itemsObject.outbound.totalWorkTime = std::stol(outboundNode["TotalWorkTime"].asString());
		if(!outboundNode["CallsAttendedTransferOut"].isNull())
			itemsObject.outbound.callsAttendedTransferOut = std::stol(outboundNode["CallsAttendedTransferOut"].asString());
		if(!outboundNode["MaxWorkTime"].isNull())
			itemsObject.outbound.maxWorkTime = std::stol(outboundNode["MaxWorkTime"].asString());
		if(!outboundNode["TotalDialingTime"].isNull())
			itemsObject.outbound.totalDialingTime = std::stol(outboundNode["TotalDialingTime"].asString());
		if(!outboundNode["TotalHoldTime"].isNull())
			itemsObject.outbound.totalHoldTime = std::stol(outboundNode["TotalHoldTime"].asString());
		if(!outboundNode["AverageWorkTime"].isNull())
			itemsObject.outbound.averageWorkTime = std::stof(outboundNode["AverageWorkTime"].asString());
		if(!outboundNode["CallsBlindTransferIn"].isNull())
			itemsObject.outbound.callsBlindTransferIn = std::stol(outboundNode["CallsBlindTransferIn"].asString());
		if(!outboundNode["SatisfactionIndex"].isNull())
			itemsObject.outbound.satisfactionIndex = std::stof(outboundNode["SatisfactionIndex"].asString());
		if(!outboundNode["CallsRinged"].isNull())
			itemsObject.outbound.callsRinged = std::stol(outboundNode["CallsRinged"].asString());
		if(!outboundNode["CallsAttendedTransferIn"].isNull())
			itemsObject.outbound.callsAttendedTransferIn = std::stol(outboundNode["CallsAttendedTransferIn"].asString());
		if(!outboundNode["CallsBlindTransferOut"].isNull())
			itemsObject.outbound.callsBlindTransferOut = std::stol(outboundNode["CallsBlindTransferOut"].asString());
		if(!outboundNode["TotalRingTime"].isNull())
			itemsObject.outbound.totalRingTime = std::stol(outboundNode["TotalRingTime"].asString());
		if(!outboundNode["MaxTalkTime"].isNull())
			itemsObject.outbound.maxTalkTime = std::stol(outboundNode["MaxTalkTime"].asString());
		if(!outboundNode["MaxRingTime"].isNull())
			itemsObject.outbound.maxRingTime = std::stol(outboundNode["MaxRingTime"].asString());
		if(!outboundNode["TotalTalkTime"].isNull())
			itemsObject.outbound.totalTalkTime = std::stol(outboundNode["TotalTalkTime"].asString());
		if(!outboundNode["MaxDialingTime"].isNull())
			itemsObject.outbound.maxDialingTime = std::stol(outboundNode["MaxDialingTime"].asString());
		if(!outboundNode["AnswerRate"].isNull())
			itemsObject.outbound.answerRate = std::stof(outboundNode["AnswerRate"].asString());
		if(!outboundNode["MaxHoldTime"].isNull())
			itemsObject.outbound.maxHoldTime = std::stol(outboundNode["MaxHoldTime"].asString());
		if(!outboundNode["AverageTalkTime"].isNull())
			itemsObject.outbound.averageTalkTime = std::stof(outboundNode["AverageTalkTime"].asString());
		if(!outboundNode["SatisfactionRate"].isNull())
			itemsObject.outbound.satisfactionRate = std::stof(outboundNode["SatisfactionRate"].asString());
		if(!outboundNode["CallsHold"].isNull())
			itemsObject.outbound.callsHold = std::stol(outboundNode["CallsHold"].asString());
		if(!outboundNode["SatisfactionSurveysOffered"].isNull())
			itemsObject.outbound.satisfactionSurveysOffered = std::stol(outboundNode["SatisfactionSurveysOffered"].asString());
		if(!outboundNode["SatisfactionSurveysResponded"].isNull())
			itemsObject.outbound.satisfactionSurveysResponded = std::stol(outboundNode["SatisfactionSurveysResponded"].asString());
		if(!outboundNode["AverageHoldTime"].isNull())
			itemsObject.outbound.averageHoldTime = std::stof(outboundNode["AverageHoldTime"].asString());
		if(!outboundNode["AverageDialingTime"].isNull())
			itemsObject.outbound.averageDialingTime = std::stof(outboundNode["AverageDialingTime"].asString());
		auto overallNode = value["Overall"];
		if(!overallNode["TotalTalkTime"].isNull())
			itemsObject.overall.totalTalkTime = std::stol(overallNode["TotalTalkTime"].asString());
		if(!overallNode["TotalLoggedInTime"].isNull())
			itemsObject.overall.totalLoggedInTime = std::stol(overallNode["TotalLoggedInTime"].asString());
		if(!overallNode["OccupancyRate"].isNull())
			itemsObject.overall.occupancyRate = std::stof(overallNode["OccupancyRate"].asString());
		if(!overallNode["TotalWorkTime"].isNull())
			itemsObject.overall.totalWorkTime = std::stol(overallNode["TotalWorkTime"].asString());
		if(!overallNode["MaxHoldTime"].isNull())
			itemsObject.overall.maxHoldTime = std::stol(overallNode["MaxHoldTime"].asString());
		if(!overallNode["MaxWorkTime"].isNull())
			itemsObject.overall.maxWorkTime = std::stol(overallNode["MaxWorkTime"].asString());
		if(!overallNode["AverageBreakTime"].isNull())
			itemsObject.overall.averageBreakTime = std::stof(overallNode["AverageBreakTime"].asString());
		if(!overallNode["TotalHoldTime"].isNull())
			itemsObject.overall.totalHoldTime = std::stol(overallNode["TotalHoldTime"].asString());
		if(!overallNode["SatisfactionRate"].isNull())
			itemsObject.overall.satisfactionRate = std::stof(overallNode["SatisfactionRate"].asString());
		if(!overallNode["MaxBreakTime"].isNull())
			itemsObject.overall.maxBreakTime = std::stol(overallNode["MaxBreakTime"].asString());
		if(!overallNode["AverageWorkTime"].isNull())
			itemsObject.overall.averageWorkTime = std::stof(overallNode["AverageWorkTime"].asString());
		if(!overallNode["AverageTalkTime"].isNull())
			itemsObject.overall.averageTalkTime = std::stof(overallNode["AverageTalkTime"].asString());
		if(!overallNode["SatisfactionIndex"].isNull())
			itemsObject.overall.satisfactionIndex = std::stof(overallNode["SatisfactionIndex"].asString());
		if(!overallNode["SatisfactionSurveysOffered"].isNull())
			itemsObject.overall.satisfactionSurveysOffered = std::stol(overallNode["SatisfactionSurveysOffered"].asString());
		if(!overallNode["SatisfactionSurveysResponded"].isNull())
			itemsObject.overall.satisfactionSurveysResponded = std::stol(overallNode["SatisfactionSurveysResponded"].asString());
		if(!overallNode["MaxReadyTime"].isNull())
			itemsObject.overall.maxReadyTime = std::stol(overallNode["MaxReadyTime"].asString());
		if(!overallNode["AverageReadyTime"].isNull())
			itemsObject.overall.averageReadyTime = std::stof(overallNode["AverageReadyTime"].asString());
		if(!overallNode["AverageHoldTime"].isNull())
			itemsObject.overall.averageHoldTime = std::stof(overallNode["AverageHoldTime"].asString());
		if(!overallNode["TotalReadyTime"].isNull())
			itemsObject.overall.totalReadyTime = std::stol(overallNode["TotalReadyTime"].asString());
		if(!overallNode["TotalBreakTime"].isNull())
			itemsObject.overall.totalBreakTime = std::stol(overallNode["TotalBreakTime"].asString());
		if(!overallNode["MaxTalkTime"].isNull())
			itemsObject.overall.maxTalkTime = std::stol(overallNode["MaxTalkTime"].asString());
		if(!overallNode["TotalCalls"].isNull())
			itemsObject.overall.totalCalls = std::stol(overallNode["TotalCalls"].asString());
		if(!overallNode["TotalOnSiteOnlineTime"].isNull())
			itemsObject.overall.totalOnSiteOnlineTime = std::stol(overallNode["TotalOnSiteOnlineTime"].asString());
		if(!overallNode["TotalOffSiteOnlineTime"].isNull())
			itemsObject.overall.totalOffSiteOnlineTime = std::stol(overallNode["TotalOffSiteOnlineTime"].asString());
		if(!overallNode["TotalOfficePhoneOnlineTime"].isNull())
			itemsObject.overall.totalOfficePhoneOnlineTime = std::stol(overallNode["TotalOfficePhoneOnlineTime"].asString());
		if(!overallNode["FirstCheckInTime"].isNull())
			itemsObject.overall.firstCheckInTime = std::stol(overallNode["FirstCheckInTime"].asString());
		if(!overallNode["LastCheckOutTime"].isNull())
			itemsObject.overall.lastCheckOutTime = std::stol(overallNode["LastCheckOutTime"].asString());
		if(!overallNode["TotalOutboundScenarioTime"].isNull())
			itemsObject.overall.totalOutboundScenarioTime = std::stol(overallNode["TotalOutboundScenarioTime"].asString());
		if(!overallNode["TotalOutboundScenarioReadyTime"].isNull())
			itemsObject.overall.totalOutboundScenarioReadyTime = std::stol(overallNode["TotalOutboundScenarioReadyTime"].asString());
		auto allBreakCodeDetailListNode = overallNode["BreakCodeDetailList"]["BreakCodeDetail"];
		for (auto overallNodeBreakCodeDetailListBreakCodeDetail : allBreakCodeDetailListNode)
		{
			Data::Items::Overall::BreakCodeDetail breakCodeDetailObject;
			if(!overallNodeBreakCodeDetailListBreakCodeDetail["BreakCode"].isNull())
				breakCodeDetailObject.breakCode = overallNodeBreakCodeDetailListBreakCodeDetail["BreakCode"].asString();
			if(!overallNodeBreakCodeDetailListBreakCodeDetail["Count"].isNull())
				breakCodeDetailObject.count = std::stol(overallNodeBreakCodeDetailListBreakCodeDetail["Count"].asString());
			if(!overallNodeBreakCodeDetailListBreakCodeDetail["Duration"].isNull())
				breakCodeDetailObject.duration = std::stol(overallNodeBreakCodeDetailListBreakCodeDetail["Duration"].asString());
			itemsObject.overall.breakCodeDetailList.push_back(breakCodeDetailObject);
		}
		data_.list.push_back(itemsObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListHistoricalAgentReportResult::getMessage()const
{
	return message_;
}

int ListHistoricalAgentReportResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

ListHistoricalAgentReportResult::Data ListHistoricalAgentReportResult::getData()const
{
	return data_;
}

std::string ListHistoricalAgentReportResult::getCode()const
{
	return code_;
}

