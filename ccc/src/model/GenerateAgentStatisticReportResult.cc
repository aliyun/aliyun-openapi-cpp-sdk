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

#include <alibabacloud/ccc/model/GenerateAgentStatisticReportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GenerateAgentStatisticReportResult::GenerateAgentStatisticReportResult() :
	ServiceResult()
{}

GenerateAgentStatisticReportResult::GenerateAgentStatisticReportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GenerateAgentStatisticReportResult::~GenerateAgentStatisticReportResult()
{}

void GenerateAgentStatisticReportResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataListNode = value["DataList"];
	if(!dataListNode["TotalCount"].isNull())
		dataList_.totalCount = std::stoi(dataListNode["TotalCount"].asString());
	if(!dataListNode["PageNumber"].isNull())
		dataList_.pageNumber = std::stoi(dataListNode["PageNumber"].asString());
	if(!dataListNode["PageSize"].isNull())
		dataList_.pageSize = std::stoi(dataListNode["PageSize"].asString());
	auto allListNode = dataListNode["List"]["GenerateAgentStatistic"];
	for (auto dataListNodeListGenerateAgentStatistic : allListNode)
	{
		DataList::GenerateAgentStatistic generateAgentStatisticObject;
		if(!dataListNodeListGenerateAgentStatistic["AgentId"].isNull())
			generateAgentStatisticObject.agentId = dataListNodeListGenerateAgentStatistic["AgentId"].asString();
		if(!dataListNodeListGenerateAgentStatistic["LoginName"].isNull())
			generateAgentStatisticObject.loginName = dataListNodeListGenerateAgentStatistic["LoginName"].asString();
		if(!dataListNodeListGenerateAgentStatistic["AgentName"].isNull())
			generateAgentStatisticObject.agentName = dataListNodeListGenerateAgentStatistic["AgentName"].asString();
		if(!dataListNodeListGenerateAgentStatistic["SkillGroupIds"].isNull())
			generateAgentStatisticObject.skillGroupIds = dataListNodeListGenerateAgentStatistic["SkillGroupIds"].asString();
		if(!dataListNodeListGenerateAgentStatistic["SkillGroupNames"].isNull())
			generateAgentStatisticObject.skillGroupNames = dataListNodeListGenerateAgentStatistic["SkillGroupNames"].asString();
		if(!dataListNodeListGenerateAgentStatistic["InstanceId"].isNull())
			generateAgentStatisticObject.instanceId = dataListNodeListGenerateAgentStatistic["InstanceId"].asString();
		if(!dataListNodeListGenerateAgentStatistic["RecordDate"].isNull())
			generateAgentStatisticObject.recordDate = dataListNodeListGenerateAgentStatistic["RecordDate"].asString();
		if(!dataListNodeListGenerateAgentStatistic["TotalLoggedInTime"].isNull())
			generateAgentStatisticObject.totalLoggedInTime = std::stol(dataListNodeListGenerateAgentStatistic["TotalLoggedInTime"].asString());
		if(!dataListNodeListGenerateAgentStatistic["TotalBreakTime"].isNull())
			generateAgentStatisticObject.totalBreakTime = std::stol(dataListNodeListGenerateAgentStatistic["TotalBreakTime"].asString());
		if(!dataListNodeListGenerateAgentStatistic["OccupancyRate"].isNull())
			generateAgentStatisticObject.occupancyRate = std::stof(dataListNodeListGenerateAgentStatistic["OccupancyRate"].asString());
		if(!dataListNodeListGenerateAgentStatistic["TotalReadyTime"].isNull())
			generateAgentStatisticObject.totalReadyTime = std::stol(dataListNodeListGenerateAgentStatistic["TotalReadyTime"].asString());
		if(!dataListNodeListGenerateAgentStatistic["MaxReadyTime"].isNull())
			generateAgentStatisticObject.maxReadyTime = std::stol(dataListNodeListGenerateAgentStatistic["MaxReadyTime"].asString());
		if(!dataListNodeListGenerateAgentStatistic["AverageReadyTime"].isNull())
			generateAgentStatisticObject.averageReadyTime = std::stol(dataListNodeListGenerateAgentStatistic["AverageReadyTime"].asString());
		auto inboundNode = value["Inbound"];
		if(!inboundNode["TotalTalkTime"].isNull())
			generateAgentStatisticObject.inbound.totalTalkTime = std::stol(inboundNode["TotalTalkTime"].asString());
		if(!inboundNode["MaxTalkTime"].isNull())
			generateAgentStatisticObject.inbound.maxTalkTime = std::stol(inboundNode["MaxTalkTime"].asString());
		if(!inboundNode["AverageTalkTime"].isNull())
			generateAgentStatisticObject.inbound.averageTalkTime = std::stol(inboundNode["AverageTalkTime"].asString());
		if(!inboundNode["TotalHoldTime"].isNull())
			generateAgentStatisticObject.inbound.totalHoldTime = std::stol(inboundNode["TotalHoldTime"].asString());
		if(!inboundNode["MaxHoldTime"].isNull())
			generateAgentStatisticObject.inbound.maxHoldTime = std::stol(inboundNode["MaxHoldTime"].asString());
		if(!inboundNode["AverageHoldTime"].isNull())
			generateAgentStatisticObject.inbound.averageHoldTime = std::stol(inboundNode["AverageHoldTime"].asString());
		if(!inboundNode["TotalWorkTime"].isNull())
			generateAgentStatisticObject.inbound.totalWorkTime = std::stol(inboundNode["TotalWorkTime"].asString());
		if(!inboundNode["MaxWorkTime"].isNull())
			generateAgentStatisticObject.inbound.maxWorkTime = std::stol(inboundNode["MaxWorkTime"].asString());
		if(!inboundNode["AverageWorkTime"].isNull())
			generateAgentStatisticObject.inbound.averageWorkTime = std::stol(inboundNode["AverageWorkTime"].asString());
		if(!inboundNode["SatisfactionSurveysOffered"].isNull())
			generateAgentStatisticObject.inbound.satisfactionSurveysOffered = std::stol(inboundNode["SatisfactionSurveysOffered"].asString());
		if(!inboundNode["SatisfactionSurveysResponded"].isNull())
			generateAgentStatisticObject.inbound.satisfactionSurveysResponded = std::stol(inboundNode["SatisfactionSurveysResponded"].asString());
		if(!inboundNode["SatisfactionIndex"].isNull())
			generateAgentStatisticObject.inbound.satisfactionIndex = std::stof(inboundNode["SatisfactionIndex"].asString());
		if(!inboundNode["CallsOffered"].isNull())
			generateAgentStatisticObject.inbound.callsOffered = std::stol(inboundNode["CallsOffered"].asString());
		if(!inboundNode["CallsHandled"].isNull())
			generateAgentStatisticObject.inbound.callsHandled = std::stol(inboundNode["CallsHandled"].asString());
		if(!inboundNode["HandleRate"].isNull())
			generateAgentStatisticObject.inbound.handleRate = std::stof(inboundNode["HandleRate"].asString());
		if(!inboundNode["TotalRingTime"].isNull())
			generateAgentStatisticObject.inbound.totalRingTime = std::stol(inboundNode["TotalRingTime"].asString());
		if(!inboundNode["MaxRingTime"].isNull())
			generateAgentStatisticObject.inbound.maxRingTime = std::stol(inboundNode["MaxRingTime"].asString());
		if(!inboundNode["AverageRingTime"].isNull())
			generateAgentStatisticObject.inbound.averageRingTime = std::stol(inboundNode["AverageRingTime"].asString());
		auto outboundNode = value["Outbound"];
		if(!outboundNode["TotalTalkTime"].isNull())
			generateAgentStatisticObject.outbound.totalTalkTime = std::stol(outboundNode["TotalTalkTime"].asString());
		if(!outboundNode["MaxTalkTime"].isNull())
			generateAgentStatisticObject.outbound.maxTalkTime = std::stol(outboundNode["MaxTalkTime"].asString());
		if(!outboundNode["AverageTalkTime"].isNull())
			generateAgentStatisticObject.outbound.averageTalkTime = std::stol(outboundNode["AverageTalkTime"].asString());
		if(!outboundNode["TotalHoldTime"].isNull())
			generateAgentStatisticObject.outbound.totalHoldTime = std::stol(outboundNode["TotalHoldTime"].asString());
		if(!outboundNode["MaxHoldTime"].isNull())
			generateAgentStatisticObject.outbound.maxHoldTime = std::stol(outboundNode["MaxHoldTime"].asString());
		if(!outboundNode["AverageHoldTime"].isNull())
			generateAgentStatisticObject.outbound.averageHoldTime = std::stol(outboundNode["AverageHoldTime"].asString());
		if(!outboundNode["TotalWorkTime"].isNull())
			generateAgentStatisticObject.outbound.totalWorkTime = std::stol(outboundNode["TotalWorkTime"].asString());
		if(!outboundNode["MaxWorkTime"].isNull())
			generateAgentStatisticObject.outbound.maxWorkTime = std::stol(outboundNode["MaxWorkTime"].asString());
		if(!outboundNode["AverageWorkTime"].isNull())
			generateAgentStatisticObject.outbound.averageWorkTime = std::stol(outboundNode["AverageWorkTime"].asString());
		if(!outboundNode["SatisfactionSurveysOffered"].isNull())
			generateAgentStatisticObject.outbound.satisfactionSurveysOffered = std::stol(outboundNode["SatisfactionSurveysOffered"].asString());
		if(!outboundNode["SatisfactionSurveysResponded"].isNull())
			generateAgentStatisticObject.outbound.satisfactionSurveysResponded = std::stol(outboundNode["SatisfactionSurveysResponded"].asString());
		if(!outboundNode["SatisfactionIndex"].isNull())
			generateAgentStatisticObject.outbound.satisfactionIndex = std::stof(outboundNode["SatisfactionIndex"].asString());
		if(!outboundNode["CallsDialed"].isNull())
			generateAgentStatisticObject.outbound.callsDialed = std::stol(outboundNode["CallsDialed"].asString());
		if(!outboundNode["CallsAnswered"].isNull())
			generateAgentStatisticObject.outbound.callsAnswered = std::stol(outboundNode["CallsAnswered"].asString());
		if(!outboundNode["AnswerRate"].isNull())
			generateAgentStatisticObject.outbound.answerRate = std::stof(outboundNode["AnswerRate"].asString());
		if(!outboundNode["TotalDialingTime"].isNull())
			generateAgentStatisticObject.outbound.totalDialingTime = std::stol(outboundNode["TotalDialingTime"].asString());
		if(!outboundNode["TotalDialingTime"].isNull())
			generateAgentStatisticObject.outbound.totalDialingTime1 = std::stol(outboundNode["TotalDialingTime"].asString());
		if(!outboundNode["MaxDialingTime"].isNull())
			generateAgentStatisticObject.outbound.maxDialingTime = std::stol(outboundNode["MaxDialingTime"].asString());
		if(!outboundNode["AverageDialingTime"].isNull())
			generateAgentStatisticObject.outbound.averageDialingTime = std::stol(outboundNode["AverageDialingTime"].asString());
		auto overallNode = value["Overall"];
		if(!overallNode["TotalTalkTime"].isNull())
			generateAgentStatisticObject.overall.totalTalkTime = std::stol(overallNode["TotalTalkTime"].asString());
		if(!overallNode["MaxTalkTime"].isNull())
			generateAgentStatisticObject.overall.maxTalkTime = std::stol(overallNode["MaxTalkTime"].asString());
		if(!overallNode["AverageTalkTime"].isNull())
			generateAgentStatisticObject.overall.averageTalkTime = std::stol(overallNode["AverageTalkTime"].asString());
		if(!overallNode["TotalHoldTime"].isNull())
			generateAgentStatisticObject.overall.totalHoldTime = std::stol(overallNode["TotalHoldTime"].asString());
		if(!overallNode["MaxHoldTime"].isNull())
			generateAgentStatisticObject.overall.maxHoldTime = std::stol(overallNode["MaxHoldTime"].asString());
		if(!overallNode["AverageHoldTime"].isNull())
			generateAgentStatisticObject.overall.averageHoldTime = std::stol(overallNode["AverageHoldTime"].asString());
		if(!overallNode["TotalWorkTime"].isNull())
			generateAgentStatisticObject.overall.totalWorkTime = std::stol(overallNode["TotalWorkTime"].asString());
		if(!overallNode["MaxWorkTime"].isNull())
			generateAgentStatisticObject.overall.maxWorkTime = std::stol(overallNode["MaxWorkTime"].asString());
		if(!overallNode["AverageWorkTime"].isNull())
			generateAgentStatisticObject.overall.averageWorkTime = std::stol(overallNode["AverageWorkTime"].asString());
		if(!overallNode["SatisfactionSurveysOffered"].isNull())
			generateAgentStatisticObject.overall.satisfactionSurveysOffered = std::stol(overallNode["SatisfactionSurveysOffered"].asString());
		if(!overallNode["SatisfactionSurveysResponded"].isNull())
			generateAgentStatisticObject.overall.satisfactionSurveysResponded = std::stol(overallNode["SatisfactionSurveysResponded"].asString());
		if(!overallNode["SatisfactionIndex"].isNull())
			generateAgentStatisticObject.overall.satisfactionIndex = std::stof(overallNode["SatisfactionIndex"].asString());
		if(!overallNode["TotalCalls"].isNull())
			generateAgentStatisticObject.overall.totalCalls = std::stol(overallNode["TotalCalls"].asString());
		dataList_.list.push_back(generateAgentStatisticObject);
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

GenerateAgentStatisticReportResult::DataList GenerateAgentStatisticReportResult::getDataList()const
{
	return dataList_;
}

std::string GenerateAgentStatisticReportResult::getMessage()const
{
	return message_;
}

int GenerateAgentStatisticReportResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GenerateAgentStatisticReportResult::getCode()const
{
	return code_;
}

bool GenerateAgentStatisticReportResult::getSuccess()const
{
	return success_;
}

