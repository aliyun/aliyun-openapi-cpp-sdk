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
		if(!inboundNode["AverageTalkTime"].isNull())
			dataObject.inbound.averageTalkTime = std::stof(inboundNode["AverageTalkTime"].asString());
		if(!inboundNode["AverageWorkTime"].isNull())
			dataObject.inbound.averageWorkTime = std::stof(inboundNode["AverageWorkTime"].asString());
		if(!inboundNode["CallsConsulted"].isNull())
			dataObject.inbound.callsConsulted = std::stol(inboundNode["CallsConsulted"].asString());
		if(!inboundNode["CallsHandled"].isNull())
			dataObject.inbound.callsHandled = std::stol(inboundNode["CallsHandled"].asString());
		if(!inboundNode["CallsHold"].isNull())
			dataObject.inbound.callsHold = std::stol(inboundNode["CallsHold"].asString());
		if(!inboundNode["CallsOffered"].isNull())
			dataObject.inbound.callsOffered = std::stol(inboundNode["CallsOffered"].asString());
		if(!inboundNode["CallsTransferred"].isNull())
			dataObject.inbound.callsTransferred = std::stol(inboundNode["CallsTransferred"].asString());
		if(!inboundNode["HandleRate"].isNull())
			dataObject.inbound.handleRate = std::stof(inboundNode["HandleRate"].asString());
		if(!inboundNode["MaxRingTime"].isNull())
			dataObject.inbound.maxRingTime = std::stol(inboundNode["MaxRingTime"].asString());
		if(!inboundNode["MaxTalkTime"].isNull())
			dataObject.inbound.maxTalkTime = std::stol(inboundNode["MaxTalkTime"].asString());
		if(!inboundNode["MaxWorkTime"].isNull())
			dataObject.inbound.maxWorkTime = std::stol(inboundNode["MaxWorkTime"].asString());
		if(!inboundNode["SatisfactionIndex"].isNull())
			dataObject.inbound.satisfactionIndex = std::stof(inboundNode["SatisfactionIndex"].asString());
		if(!inboundNode["SatisfactionSurveysOffered"].isNull())
			dataObject.inbound.satisfactionSurveysOffered = std::stol(inboundNode["SatisfactionSurveysOffered"].asString());
		if(!inboundNode["SatisfactionSurveysResponded"].isNull())
			dataObject.inbound.satisfactionSurveysResponded = std::stol(inboundNode["SatisfactionSurveysResponded"].asString());
		if(!inboundNode["TotalHoldTime"].isNull())
			dataObject.inbound.totalHoldTime = std::stol(inboundNode["TotalHoldTime"].asString());
		if(!inboundNode["TotalRingTime"].isNull())
			dataObject.inbound.totalRingTime = std::stol(inboundNode["TotalRingTime"].asString());
		if(!inboundNode["TotalTalkTime"].isNull())
			dataObject.inbound.totalTalkTime = std::stol(inboundNode["TotalTalkTime"].asString());
		if(!inboundNode["TotalWorkTime"].isNull())
			dataObject.inbound.totalWorkTime = std::stol(inboundNode["TotalWorkTime"].asString());
		auto outboundNode = value["Outbound"];
		if(!outboundNode["AnswerRate"].isNull())
			dataObject.outbound.answerRate = std::stof(outboundNode["AnswerRate"].asString());
		if(!outboundNode["AverageDialingTime"].isNull())
			dataObject.outbound.averageDialingTime = std::stof(outboundNode["AverageDialingTime"].asString());
		if(!outboundNode["AverageTalkTime"].isNull())
			dataObject.outbound.averageTalkTime = std::stof(outboundNode["AverageTalkTime"].asString());
		if(!outboundNode["AverageWorkTime"].isNull())
			dataObject.outbound.averageWorkTime = std::stof(outboundNode["AverageWorkTime"].asString());
		if(!outboundNode["CallsAnswered"].isNull())
			dataObject.outbound.callsAnswered = std::stol(outboundNode["CallsAnswered"].asString());
		if(!outboundNode["CallsDialed"].isNull())
			dataObject.outbound.callsDialed = std::stol(outboundNode["CallsDialed"].asString());
		if(!outboundNode["MaxDialingTime"].isNull())
			dataObject.outbound.maxDialingTime = std::stol(outboundNode["MaxDialingTime"].asString());
		if(!outboundNode["MaxTalkTime"].isNull())
			dataObject.outbound.maxTalkTime = std::stol(outboundNode["MaxTalkTime"].asString());
		if(!outboundNode["MaxWorkTime"].isNull())
			dataObject.outbound.maxWorkTime = std::stol(outboundNode["MaxWorkTime"].asString());
		if(!outboundNode["SatisfactionIndex"].isNull())
			dataObject.outbound.satisfactionIndex = std::stof(outboundNode["SatisfactionIndex"].asString());
		if(!outboundNode["SatisfactionSurveysOffered"].isNull())
			dataObject.outbound.satisfactionSurveysOffered = std::stol(outboundNode["SatisfactionSurveysOffered"].asString());
		if(!outboundNode["SatisfactionSurveysResponded"].isNull())
			dataObject.outbound.satisfactionSurveysResponded = std::stol(outboundNode["SatisfactionSurveysResponded"].asString());
		if(!outboundNode["TotalDialingTime"].isNull())
			dataObject.outbound.totalDialingTime = std::stol(outboundNode["TotalDialingTime"].asString());
		if(!outboundNode["TotalHoldTime"].isNull())
			dataObject.outbound.totalHoldTime = std::stol(outboundNode["TotalHoldTime"].asString());
		if(!outboundNode["TotalTalkTime"].isNull())
			dataObject.outbound.totalTalkTime = std::stol(outboundNode["TotalTalkTime"].asString());
		if(!outboundNode["TotalWorkTime"].isNull())
			dataObject.outbound.totalWorkTime = std::stol(outboundNode["TotalWorkTime"].asString());
		auto overallNode = value["Overall"];
		if(!overallNode["AverageBreakTime"].isNull())
			dataObject.overall.averageBreakTime = std::stof(overallNode["AverageBreakTime"].asString());
		if(!overallNode["AverageReadyTime"].isNull())
			dataObject.overall.averageReadyTime = std::stof(overallNode["AverageReadyTime"].asString());
		if(!overallNode["AverageTalkTime"].isNull())
			dataObject.overall.averageTalkTime = std::stof(overallNode["AverageTalkTime"].asString());
		if(!overallNode["AverageWorkTime"].isNull())
			dataObject.overall.averageWorkTime = std::stof(overallNode["AverageWorkTime"].asString());
		if(!overallNode["FirstCheckInTime"].isNull())
			dataObject.overall.firstCheckInTime = std::stol(overallNode["FirstCheckInTime"].asString());
		if(!overallNode["LastCheckoutTime"].isNull())
			dataObject.overall.lastCheckoutTime = std::stol(overallNode["LastCheckoutTime"].asString());
		if(!overallNode["MaxBreakTime"].isNull())
			dataObject.overall.maxBreakTime = std::stol(overallNode["MaxBreakTime"].asString());
		if(!overallNode["MaxReadyTime"].isNull())
			dataObject.overall.maxReadyTime = std::stol(overallNode["MaxReadyTime"].asString());
		if(!overallNode["MaxTalkTime"].isNull())
			dataObject.overall.maxTalkTime = std::stol(overallNode["MaxTalkTime"].asString());
		if(!overallNode["MaxWorkTime"].isNull())
			dataObject.overall.maxWorkTime = std::stol(overallNode["MaxWorkTime"].asString());
		if(!overallNode["OccupancyRate"].isNull())
			dataObject.overall.occupancyRate = std::stof(overallNode["OccupancyRate"].asString());
		if(!overallNode["SatisfactionIndex"].isNull())
			dataObject.overall.satisfactionIndex = std::stof(overallNode["SatisfactionIndex"].asString());
		if(!overallNode["SatisfactionSurveysOffered"].isNull())
			dataObject.overall.satisfactionSurveysOffered = std::stol(overallNode["SatisfactionSurveysOffered"].asString());
		if(!overallNode["SatisfactionSurveysResponded"].isNull())
			dataObject.overall.satisfactionSurveysResponded = std::stol(overallNode["SatisfactionSurveysResponded"].asString());
		if(!overallNode["TotalBreakTime"].isNull())
			dataObject.overall.totalBreakTime = std::stol(overallNode["TotalBreakTime"].asString());
		if(!overallNode["TotalCalls"].isNull())
			dataObject.overall.totalCalls = std::stol(overallNode["TotalCalls"].asString());
		if(!overallNode["TotalHoldTime"].isNull())
			dataObject.overall.totalHoldTime = std::stol(overallNode["TotalHoldTime"].asString());
		if(!overallNode["TotalLoggedInTime"].isNull())
			dataObject.overall.totalLoggedInTime = std::stol(overallNode["TotalLoggedInTime"].asString());
		if(!overallNode["TotalReadyTime"].isNull())
			dataObject.overall.totalReadyTime = std::stol(overallNode["TotalReadyTime"].asString());
		if(!overallNode["TotalTalkTime"].isNull())
			dataObject.overall.totalTalkTime = std::stol(overallNode["TotalTalkTime"].asString());
		if(!overallNode["TotalWorkTime"].isNull())
			dataObject.overall.totalWorkTime = std::stol(overallNode["TotalWorkTime"].asString());
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

