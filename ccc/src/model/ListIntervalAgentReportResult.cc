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

#include <alibabacloud/ccc/model/ListIntervalAgentReportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListIntervalAgentReportResult::ListIntervalAgentReportResult() :
	ServiceResult()
{}

ListIntervalAgentReportResult::ListIntervalAgentReportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListIntervalAgentReportResult::~ListIntervalAgentReportResult()
{}

void ListIntervalAgentReportResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["StatsTime"].isNull())
			dataObject.statsTime = std::stol(valueDataDataItem["StatsTime"].asString());
		auto inboundNode = value["Inbound"];
		if(!inboundNode["AverageRingTime"].isNull())
			dataObject.inbound.averageRingTime = std::stof(inboundNode["AverageRingTime"].asString());
		if(!inboundNode["CallsHandled"].isNull())
			dataObject.inbound.callsHandled = std::stol(inboundNode["CallsHandled"].asString());
		if(!inboundNode["TotalWorkTime"].isNull())
			dataObject.inbound.totalWorkTime = std::stol(inboundNode["TotalWorkTime"].asString());
		if(!inboundNode["CallsAttendedTransferOut"].isNull())
			dataObject.inbound.callsAttendedTransferOut = std::stol(inboundNode["CallsAttendedTransferOut"].asString());
		if(!inboundNode["MaxWorkTime"].isNull())
			dataObject.inbound.maxWorkTime = std::stol(inboundNode["MaxWorkTime"].asString());
		if(!inboundNode["TotalHoldTime"].isNull())
			dataObject.inbound.totalHoldTime = std::stol(inboundNode["TotalHoldTime"].asString());
		if(!inboundNode["AverageWorkTime"].isNull())
			dataObject.inbound.averageWorkTime = std::stof(inboundNode["AverageWorkTime"].asString());
		if(!inboundNode["CallsBlindTransferIn"].isNull())
			dataObject.inbound.callsBlindTransferIn = std::stol(inboundNode["CallsBlindTransferIn"].asString());
		if(!inboundNode["SatisfactionIndex"].isNull())
			dataObject.inbound.satisfactionIndex = std::stof(inboundNode["SatisfactionIndex"].asString());
		if(!inboundNode["CallsRinged"].isNull())
			dataObject.inbound.callsRinged = std::stol(inboundNode["CallsRinged"].asString());
		if(!inboundNode["CallsAttendedTransferIn"].isNull())
			dataObject.inbound.callsAttendedTransferIn = std::stol(inboundNode["CallsAttendedTransferIn"].asString());
		if(!inboundNode["CallsBlindTransferOut"].isNull())
			dataObject.inbound.callsBlindTransferOut = std::stol(inboundNode["CallsBlindTransferOut"].asString());
		if(!inboundNode["TotalRingTime"].isNull())
			dataObject.inbound.totalRingTime = std::stol(inboundNode["TotalRingTime"].asString());
		if(!inboundNode["MaxTalkTime"].isNull())
			dataObject.inbound.maxTalkTime = std::stol(inboundNode["MaxTalkTime"].asString());
		if(!inboundNode["MaxRingTime"].isNull())
			dataObject.inbound.maxRingTime = std::stol(inboundNode["MaxRingTime"].asString());
		if(!inboundNode["TotalTalkTime"].isNull())
			dataObject.inbound.totalTalkTime = std::stol(inboundNode["TotalTalkTime"].asString());
		if(!inboundNode["CallsOffered"].isNull())
			dataObject.inbound.callsOffered = std::stol(inboundNode["CallsOffered"].asString());
		if(!inboundNode["MaxHoldTime"].isNull())
			dataObject.inbound.maxHoldTime = std::stol(inboundNode["MaxHoldTime"].asString());
		if(!inboundNode["AverageTalkTime"].isNull())
			dataObject.inbound.averageTalkTime = std::stof(inboundNode["AverageTalkTime"].asString());
		if(!inboundNode["SatisfactionRate"].isNull())
			dataObject.inbound.satisfactionRate = std::stof(inboundNode["SatisfactionRate"].asString());
		if(!inboundNode["CallsHold"].isNull())
			dataObject.inbound.callsHold = std::stol(inboundNode["CallsHold"].asString());
		if(!inboundNode["SatisfactionSurveysOffered"].isNull())
			dataObject.inbound.satisfactionSurveysOffered = std::stol(inboundNode["SatisfactionSurveysOffered"].asString());
		if(!inboundNode["HandleRate"].isNull())
			dataObject.inbound.handleRate = std::stof(inboundNode["HandleRate"].asString());
		if(!inboundNode["SatisfactionSurveysResponded"].isNull())
			dataObject.inbound.satisfactionSurveysResponded = std::stol(inboundNode["SatisfactionSurveysResponded"].asString());
		if(!inboundNode["AverageHoldTime"].isNull())
			dataObject.inbound.averageHoldTime = std::stof(inboundNode["AverageHoldTime"].asString());
		auto outboundNode = value["Outbound"];
		if(!outboundNode["AverageRingTime"].isNull())
			dataObject.outbound.averageRingTime = std::stof(outboundNode["AverageRingTime"].asString());
		if(!outboundNode["CallsDialed"].isNull())
			dataObject.outbound.callsDialed = std::stol(outboundNode["CallsDialed"].asString());
		if(!outboundNode["CallsAnswered"].isNull())
			dataObject.outbound.callsAnswered = std::stol(outboundNode["CallsAnswered"].asString());
		if(!outboundNode["TotalWorkTime"].isNull())
			dataObject.outbound.totalWorkTime = std::stol(outboundNode["TotalWorkTime"].asString());
		if(!outboundNode["CallsAttendedTransferOut"].isNull())
			dataObject.outbound.callsAttendedTransferOut = std::stol(outboundNode["CallsAttendedTransferOut"].asString());
		if(!outboundNode["MaxWorkTime"].isNull())
			dataObject.outbound.maxWorkTime = std::stol(outboundNode["MaxWorkTime"].asString());
		if(!outboundNode["TotalDialingTime"].isNull())
			dataObject.outbound.totalDialingTime = std::stol(outboundNode["TotalDialingTime"].asString());
		if(!outboundNode["TotalHoldTime"].isNull())
			dataObject.outbound.totalHoldTime = std::stol(outboundNode["TotalHoldTime"].asString());
		if(!outboundNode["AverageWorkTime"].isNull())
			dataObject.outbound.averageWorkTime = std::stof(outboundNode["AverageWorkTime"].asString());
		if(!outboundNode["CallsBlindTransferIn"].isNull())
			dataObject.outbound.callsBlindTransferIn = std::stol(outboundNode["CallsBlindTransferIn"].asString());
		if(!outboundNode["SatisfactionIndex"].isNull())
			dataObject.outbound.satisfactionIndex = std::stof(outboundNode["SatisfactionIndex"].asString());
		if(!outboundNode["CallsRinged"].isNull())
			dataObject.outbound.callsRinged = std::stol(outboundNode["CallsRinged"].asString());
		if(!outboundNode["CallsAttendedTransferIn"].isNull())
			dataObject.outbound.callsAttendedTransferIn = std::stol(outboundNode["CallsAttendedTransferIn"].asString());
		if(!outboundNode["CallsBlindTransferOut"].isNull())
			dataObject.outbound.callsBlindTransferOut = std::stol(outboundNode["CallsBlindTransferOut"].asString());
		if(!outboundNode["TotalRingTime"].isNull())
			dataObject.outbound.totalRingTime = std::stol(outboundNode["TotalRingTime"].asString());
		if(!outboundNode["MaxTalkTime"].isNull())
			dataObject.outbound.maxTalkTime = std::stol(outboundNode["MaxTalkTime"].asString());
		if(!outboundNode["MaxRingTime"].isNull())
			dataObject.outbound.maxRingTime = std::stol(outboundNode["MaxRingTime"].asString());
		if(!outboundNode["TotalTalkTime"].isNull())
			dataObject.outbound.totalTalkTime = std::stol(outboundNode["TotalTalkTime"].asString());
		if(!outboundNode["MaxDialingTime"].isNull())
			dataObject.outbound.maxDialingTime = std::stol(outboundNode["MaxDialingTime"].asString());
		if(!outboundNode["AnswerRate"].isNull())
			dataObject.outbound.answerRate = std::stof(outboundNode["AnswerRate"].asString());
		if(!outboundNode["MaxHoldTime"].isNull())
			dataObject.outbound.maxHoldTime = std::stol(outboundNode["MaxHoldTime"].asString());
		if(!outboundNode["AverageTalkTime"].isNull())
			dataObject.outbound.averageTalkTime = std::stof(outboundNode["AverageTalkTime"].asString());
		if(!outboundNode["SatisfactionRate"].isNull())
			dataObject.outbound.satisfactionRate = std::stof(outboundNode["SatisfactionRate"].asString());
		if(!outboundNode["CallsHold"].isNull())
			dataObject.outbound.callsHold = std::stol(outboundNode["CallsHold"].asString());
		if(!outboundNode["SatisfactionSurveysOffered"].isNull())
			dataObject.outbound.satisfactionSurveysOffered = std::stol(outboundNode["SatisfactionSurveysOffered"].asString());
		if(!outboundNode["SatisfactionSurveysResponded"].isNull())
			dataObject.outbound.satisfactionSurveysResponded = std::stol(outboundNode["SatisfactionSurveysResponded"].asString());
		if(!outboundNode["AverageHoldTime"].isNull())
			dataObject.outbound.averageHoldTime = std::stof(outboundNode["AverageHoldTime"].asString());
		if(!outboundNode["AverageDialingTime"].isNull())
			dataObject.outbound.averageDialingTime = std::stof(outboundNode["AverageDialingTime"].asString());
		auto overallNode = value["Overall"];
		if(!overallNode["OccupancyRate"].isNull())
			dataObject.overall.occupancyRate = std::stof(overallNode["OccupancyRate"].asString());
		if(!overallNode["TotalWorkTime"].isNull())
			dataObject.overall.totalWorkTime = std::stol(overallNode["TotalWorkTime"].asString());
		if(!overallNode["MaxWorkTime"].isNull())
			dataObject.overall.maxWorkTime = std::stol(overallNode["MaxWorkTime"].asString());
		if(!overallNode["TotalHoldTime"].isNull())
			dataObject.overall.totalHoldTime = std::stol(overallNode["TotalHoldTime"].asString());
		if(!overallNode["AverageWorkTime"].isNull())
			dataObject.overall.averageWorkTime = std::stof(overallNode["AverageWorkTime"].asString());
		if(!overallNode["MaxBreakTime"].isNull())
			dataObject.overall.maxBreakTime = std::stol(overallNode["MaxBreakTime"].asString());
		if(!overallNode["SatisfactionIndex"].isNull())
			dataObject.overall.satisfactionIndex = std::stof(overallNode["SatisfactionIndex"].asString());
		if(!overallNode["MaxReadyTime"].isNull())
			dataObject.overall.maxReadyTime = std::stol(overallNode["MaxReadyTime"].asString());
		if(!overallNode["MaxTalkTime"].isNull())
			dataObject.overall.maxTalkTime = std::stol(overallNode["MaxTalkTime"].asString());
		if(!overallNode["TotalReadyTime"].isNull())
			dataObject.overall.totalReadyTime = std::stol(overallNode["TotalReadyTime"].asString());
		if(!overallNode["LastCheckoutTime"].isNull())
			dataObject.overall.lastCheckoutTime = std::stol(overallNode["LastCheckoutTime"].asString());
		if(!overallNode["TotalCalls"].isNull())
			dataObject.overall.totalCalls = std::stol(overallNode["TotalCalls"].asString());
		if(!overallNode["TotalLoggedInTime"].isNull())
			dataObject.overall.totalLoggedInTime = std::stol(overallNode["TotalLoggedInTime"].asString());
		if(!overallNode["TotalTalkTime"].isNull())
			dataObject.overall.totalTalkTime = std::stol(overallNode["TotalTalkTime"].asString());
		if(!overallNode["MaxHoldTime"].isNull())
			dataObject.overall.maxHoldTime = std::stol(overallNode["MaxHoldTime"].asString());
		if(!overallNode["AverageBreakTime"].isNull())
			dataObject.overall.averageBreakTime = std::stof(overallNode["AverageBreakTime"].asString());
		if(!overallNode["AverageTalkTime"].isNull())
			dataObject.overall.averageTalkTime = std::stof(overallNode["AverageTalkTime"].asString());
		if(!overallNode["SatisfactionRate"].isNull())
			dataObject.overall.satisfactionRate = std::stof(overallNode["SatisfactionRate"].asString());
		if(!overallNode["SatisfactionSurveysOffered"].isNull())
			dataObject.overall.satisfactionSurveysOffered = std::stol(overallNode["SatisfactionSurveysOffered"].asString());
		if(!overallNode["SatisfactionSurveysResponded"].isNull())
			dataObject.overall.satisfactionSurveysResponded = std::stol(overallNode["SatisfactionSurveysResponded"].asString());
		if(!overallNode["AverageHoldTime"].isNull())
			dataObject.overall.averageHoldTime = std::stof(overallNode["AverageHoldTime"].asString());
		if(!overallNode["AverageReadyTime"].isNull())
			dataObject.overall.averageReadyTime = std::stof(overallNode["AverageReadyTime"].asString());
		if(!overallNode["TotalBreakTime"].isNull())
			dataObject.overall.totalBreakTime = std::stol(overallNode["TotalBreakTime"].asString());
		if(!overallNode["TotalOnSiteOnlineTime"].isNull())
			dataObject.overall.totalOnSiteOnlineTime = std::stol(overallNode["TotalOnSiteOnlineTime"].asString());
		if(!overallNode["TotalOffSiteOnlineTime"].isNull())
			dataObject.overall.totalOffSiteOnlineTime = std::stol(overallNode["TotalOffSiteOnlineTime"].asString());
		if(!overallNode["TotalOfficePhoneOnlineTime"].isNull())
			dataObject.overall.totalOfficePhoneOnlineTime = std::stol(overallNode["TotalOfficePhoneOnlineTime"].asString());
		if(!overallNode["TotalOutboundScenarioTime"].isNull())
			dataObject.overall.totalOutboundScenarioTime = std::stol(overallNode["TotalOutboundScenarioTime"].asString());
		if(!overallNode["TotalOutboundScenarioReadyTime"].isNull())
			dataObject.overall.totalOutboundScenarioReadyTime = std::stol(overallNode["TotalOutboundScenarioReadyTime"].asString());
		if(!overallNode["FirstCheckInTime"].isNull())
			dataObject.overall.firstCheckInTime = std::stol(overallNode["FirstCheckInTime"].asString());
		auto allBreakCodeDetailListNode = overallNode["BreakCodeDetailList"]["BreakCodeDetail"];
		for (auto overallNodeBreakCodeDetailListBreakCodeDetail : allBreakCodeDetailListNode)
		{
			DataItem::Overall::BreakCodeDetail breakCodeDetailObject;
			if(!overallNodeBreakCodeDetailListBreakCodeDetail["BreakCode"].isNull())
				breakCodeDetailObject.breakCode = overallNodeBreakCodeDetailListBreakCodeDetail["BreakCode"].asString();
			if(!overallNodeBreakCodeDetailListBreakCodeDetail["Count"].isNull())
				breakCodeDetailObject.count = std::stol(overallNodeBreakCodeDetailListBreakCodeDetail["Count"].asString());
			if(!overallNodeBreakCodeDetailListBreakCodeDetail["Duration"].isNull())
				breakCodeDetailObject.duration = std::stol(overallNodeBreakCodeDetailListBreakCodeDetail["Duration"].asString());
			dataObject.overall.breakCodeDetailList.push_back(breakCodeDetailObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListIntervalAgentReportResult::getMessage()const
{
	return message_;
}

int ListIntervalAgentReportResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListIntervalAgentReportResult::DataItem> ListIntervalAgentReportResult::getData()const
{
	return data_;
}

std::string ListIntervalAgentReportResult::getCode()const
{
	return code_;
}

