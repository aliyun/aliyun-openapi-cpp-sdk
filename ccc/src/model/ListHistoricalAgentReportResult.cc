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
		if(!dataNodeListItems["AgentId"].isNull())
			itemsObject.agentId = dataNodeListItems["AgentId"].asString();
		if(!dataNodeListItems["AgentName"].isNull())
			itemsObject.agentName = dataNodeListItems["AgentName"].asString();
		auto inboundNode = value["Inbound"];
		if(!inboundNode["AverageRingTime"].isNull())
			itemsObject.inbound.averageRingTime = std::stof(inboundNode["AverageRingTime"].asString());
		if(!inboundNode["AverageTalkTime"].isNull())
			itemsObject.inbound.averageTalkTime = std::stof(inboundNode["AverageTalkTime"].asString());
		if(!inboundNode["AverageWorkTime"].isNull())
			itemsObject.inbound.averageWorkTime = std::stof(inboundNode["AverageWorkTime"].asString());
		if(!inboundNode["CallsConsulted"].isNull())
			itemsObject.inbound.callsConsulted = std::stol(inboundNode["CallsConsulted"].asString());
		if(!inboundNode["CallsHandled"].isNull())
			itemsObject.inbound.callsHandled = std::stol(inboundNode["CallsHandled"].asString());
		if(!inboundNode["CallsHold"].isNull())
			itemsObject.inbound.callsHold = std::stol(inboundNode["CallsHold"].asString());
		if(!inboundNode["CallsOffered"].isNull())
			itemsObject.inbound.callsOffered = std::stol(inboundNode["CallsOffered"].asString());
		if(!inboundNode["CallsTransfered"].isNull())
			itemsObject.inbound.callsTransfered = std::stol(inboundNode["CallsTransfered"].asString());
		if(!inboundNode["HandleRate"].isNull())
			itemsObject.inbound.handleRate = std::stof(inboundNode["HandleRate"].asString());
		if(!inboundNode["MaxRingTime"].isNull())
			itemsObject.inbound.maxRingTime = std::stol(inboundNode["MaxRingTime"].asString());
		if(!inboundNode["MaxTalkTime"].isNull())
			itemsObject.inbound.maxTalkTime = std::stol(inboundNode["MaxTalkTime"].asString());
		if(!inboundNode["MaxWorkTime"].isNull())
			itemsObject.inbound.maxWorkTime = std::stol(inboundNode["MaxWorkTime"].asString());
		if(!inboundNode["SatisfactionIndex"].isNull())
			itemsObject.inbound.satisfactionIndex = std::stof(inboundNode["SatisfactionIndex"].asString());
		if(!inboundNode["SatisfactionSurveysOffered"].isNull())
			itemsObject.inbound.satisfactionSurveysOffered = std::stol(inboundNode["SatisfactionSurveysOffered"].asString());
		if(!inboundNode["SatisfactionSurveysResponded"].isNull())
			itemsObject.inbound.satisfactionSurveysResponded = std::stol(inboundNode["SatisfactionSurveysResponded"].asString());
		if(!inboundNode["ServiceLevel20"].isNull())
			itemsObject.inbound.serviceLevel20 = std::stof(inboundNode["ServiceLevel20"].asString());
		if(!inboundNode["TotalHoldTime"].isNull())
			itemsObject.inbound.totalHoldTime = std::stol(inboundNode["TotalHoldTime"].asString());
		if(!inboundNode["TotalRingTime"].isNull())
			itemsObject.inbound.totalRingTime = std::stol(inboundNode["TotalRingTime"].asString());
		if(!inboundNode["TotalTalkTime"].isNull())
			itemsObject.inbound.totalTalkTime = std::stol(inboundNode["TotalTalkTime"].asString());
		if(!inboundNode["TotalWorkTime"].isNull())
			itemsObject.inbound.totalWorkTime = std::stol(inboundNode["TotalWorkTime"].asString());
		auto outboundNode = value["Outbound"];
		if(!outboundNode["AnswerRate"].isNull())
			itemsObject.outbound.answerRate = std::stof(outboundNode["AnswerRate"].asString());
		if(!outboundNode["AverageDialingTime"].isNull())
			itemsObject.outbound.averageDialingTime = std::stof(outboundNode["AverageDialingTime"].asString());
		if(!outboundNode["AverageTalkTime"].isNull())
			itemsObject.outbound.averageTalkTime = std::stof(outboundNode["AverageTalkTime"].asString());
		if(!outboundNode["AverageWorkTime"].isNull())
			itemsObject.outbound.averageWorkTime = std::stof(outboundNode["AverageWorkTime"].asString());
		if(!outboundNode["CallsAnswered"].isNull())
			itemsObject.outbound.callsAnswered = std::stol(outboundNode["CallsAnswered"].asString());
		if(!outboundNode["CallsDialed"].isNull())
			itemsObject.outbound.callsDialed = std::stol(outboundNode["CallsDialed"].asString());
		if(!outboundNode["MaxDialingTime"].isNull())
			itemsObject.outbound.maxDialingTime = std::stol(outboundNode["MaxDialingTime"].asString());
		if(!outboundNode["MaxTalkTime"].isNull())
			itemsObject.outbound.maxTalkTime = std::stol(outboundNode["MaxTalkTime"].asString());
		if(!outboundNode["MaxWorkTime"].isNull())
			itemsObject.outbound.maxWorkTime = std::stol(outboundNode["MaxWorkTime"].asString());
		if(!outboundNode["SatisfactionIndex"].isNull())
			itemsObject.outbound.satisfactionIndex = std::stof(outboundNode["SatisfactionIndex"].asString());
		if(!outboundNode["SatisfactionSurveysOffered"].isNull())
			itemsObject.outbound.satisfactionSurveysOffered = std::stol(outboundNode["SatisfactionSurveysOffered"].asString());
		if(!outboundNode["SatisfactionSurveysResponded"].isNull())
			itemsObject.outbound.satisfactionSurveysResponded = std::stol(outboundNode["SatisfactionSurveysResponded"].asString());
		if(!outboundNode["TotalDialingTime"].isNull())
			itemsObject.outbound.totalDialingTime = std::stol(outboundNode["TotalDialingTime"].asString());
		if(!outboundNode["TotalHoldTime"].isNull())
			itemsObject.outbound.totalHoldTime = std::stol(outboundNode["TotalHoldTime"].asString());
		if(!outboundNode["TotalTalkTime"].isNull())
			itemsObject.outbound.totalTalkTime = std::stol(outboundNode["TotalTalkTime"].asString());
		if(!outboundNode["TotalWorkTime"].isNull())
			itemsObject.outbound.totalWorkTime = std::stol(outboundNode["TotalWorkTime"].asString());
		auto overallNode = value["Overall"];
		if(!overallNode["AverageBreakTime"].isNull())
			itemsObject.overall.averageBreakTime = std::stof(overallNode["AverageBreakTime"].asString());
		if(!overallNode["AverageReadyTime"].isNull())
			itemsObject.overall.averageReadyTime = std::stof(overallNode["AverageReadyTime"].asString());
		if(!overallNode["AverageTalkTime"].isNull())
			itemsObject.overall.averageTalkTime = std::stof(overallNode["AverageTalkTime"].asString());
		if(!overallNode["AverageWorkTime"].isNull())
			itemsObject.overall.averageWorkTime = std::stof(overallNode["AverageWorkTime"].asString());
		if(!overallNode["MaxBreakTime"].isNull())
			itemsObject.overall.maxBreakTime = std::stol(overallNode["MaxBreakTime"].asString());
		if(!overallNode["MaxReadyTime"].isNull())
			itemsObject.overall.maxReadyTime = std::stol(overallNode["MaxReadyTime"].asString());
		if(!overallNode["MaxTalkTime"].isNull())
			itemsObject.overall.maxTalkTime = std::stol(overallNode["MaxTalkTime"].asString());
		if(!overallNode["MaxWorkTime"].isNull())
			itemsObject.overall.maxWorkTime = std::stol(overallNode["MaxWorkTime"].asString());
		if(!overallNode["OccupancyRate"].isNull())
			itemsObject.overall.occupancyRate = std::stof(overallNode["OccupancyRate"].asString());
		if(!overallNode["SatisfactionIndex"].isNull())
			itemsObject.overall.satisfactionIndex = std::stof(overallNode["SatisfactionIndex"].asString());
		if(!overallNode["SatisfactionSurveysOffered"].isNull())
			itemsObject.overall.satisfactionSurveysOffered = std::stol(overallNode["SatisfactionSurveysOffered"].asString());
		if(!overallNode["SatisfactionSurveysResponded"].isNull())
			itemsObject.overall.satisfactionSurveysResponded = std::stol(overallNode["SatisfactionSurveysResponded"].asString());
		if(!overallNode["TotalBreakTime"].isNull())
			itemsObject.overall.totalBreakTime = std::stol(overallNode["TotalBreakTime"].asString());
		if(!overallNode["TotalCalls"].isNull())
			itemsObject.overall.totalCalls = std::stol(overallNode["TotalCalls"].asString());
		if(!overallNode["TotalHoldTime"].isNull())
			itemsObject.overall.totalHoldTime = std::stol(overallNode["TotalHoldTime"].asString());
		if(!overallNode["TotalLoggedInTime"].isNull())
			itemsObject.overall.totalLoggedInTime = std::stol(overallNode["TotalLoggedInTime"].asString());
		if(!overallNode["TotalReadyTime"].isNull())
			itemsObject.overall.totalReadyTime = std::stol(overallNode["TotalReadyTime"].asString());
		if(!overallNode["TotalTalkTime"].isNull())
			itemsObject.overall.totalTalkTime = std::stol(overallNode["TotalTalkTime"].asString());
		if(!overallNode["TotalWorkTime"].isNull())
			itemsObject.overall.totalWorkTime = std::stol(overallNode["TotalWorkTime"].asString());
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

