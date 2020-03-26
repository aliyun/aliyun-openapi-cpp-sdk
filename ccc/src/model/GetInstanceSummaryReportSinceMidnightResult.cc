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

#include <alibabacloud/ccc/model/GetInstanceSummaryReportSinceMidnightResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetInstanceSummaryReportSinceMidnightResult::GetInstanceSummaryReportSinceMidnightResult() :
	ServiceResult()
{}

GetInstanceSummaryReportSinceMidnightResult::GetInstanceSummaryReportSinceMidnightResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetInstanceSummaryReportSinceMidnightResult::~GetInstanceSummaryReportSinceMidnightResult()
{}

void GetInstanceSummaryReportSinceMidnightResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto instanceSummaryReportNode = value["InstanceSummaryReport"];
	if(!instanceSummaryReportNode["Timestamp"].isNull())
		instanceSummaryReport_.timestamp = instanceSummaryReportNode["Timestamp"].asString();
	if(!instanceSummaryReportNode["InstanceId"].isNull())
		instanceSummaryReport_.instanceId = instanceSummaryReportNode["InstanceId"].asString();
	auto overallNode = instanceSummaryReportNode["Overall"];
	if(!overallNode["TotalCalls"].isNull())
		instanceSummaryReport_.overall.totalCalls = std::stol(overallNode["TotalCalls"].asString());
	if(!overallNode["TotalLoggedInTime"].isNull())
		instanceSummaryReport_.overall.totalLoggedInTime = std::stol(overallNode["TotalLoggedInTime"].asString());
	if(!overallNode["TotalBreakTime"].isNull())
		instanceSummaryReport_.overall.totalBreakTime = std::stol(overallNode["TotalBreakTime"].asString());
	if(!overallNode["OccupancyRate"].isNull())
		instanceSummaryReport_.overall.occupancyRate = std::stof(overallNode["OccupancyRate"].asString());
	if(!overallNode["TotalReadyTime"].isNull())
		instanceSummaryReport_.overall.totalReadyTime = std::stol(overallNode["TotalReadyTime"].asString());
	if(!overallNode["MaxReadyTime"].isNull())
		instanceSummaryReport_.overall.maxReadyTime = std::stol(overallNode["MaxReadyTime"].asString());
	if(!overallNode["AverageReadyTime"].isNull())
		instanceSummaryReport_.overall.averageReadyTime = std::stol(overallNode["AverageReadyTime"].asString());
	if(!overallNode["TotalTalkTime"].isNull())
		instanceSummaryReport_.overall.totalTalkTime = std::stol(overallNode["TotalTalkTime"].asString());
	if(!overallNode["MaxTalkTime"].isNull())
		instanceSummaryReport_.overall.maxTalkTime = std::stol(overallNode["MaxTalkTime"].asString());
	if(!overallNode["AverageTalkTime"].isNull())
		instanceSummaryReport_.overall.averageTalkTime = std::stol(overallNode["AverageTalkTime"].asString());
	if(!overallNode["TotalWorkTime"].isNull())
		instanceSummaryReport_.overall.totalWorkTime = std::stol(overallNode["TotalWorkTime"].asString());
	if(!overallNode["MaxWorkTime"].isNull())
		instanceSummaryReport_.overall.maxWorkTime = std::stol(overallNode["MaxWorkTime"].asString());
	if(!overallNode["AverageWorkTime"].isNull())
		instanceSummaryReport_.overall.averageWorkTime = std::stol(overallNode["AverageWorkTime"].asString());
	if(!overallNode["SatisfactionIndex"].isNull())
		instanceSummaryReport_.overall.satisfactionIndex = std::stof(overallNode["SatisfactionIndex"].asString());
	if(!overallNode["SatisfactionSurveysOffered"].isNull())
		instanceSummaryReport_.overall.satisfactionSurveysOffered = std::stol(overallNode["SatisfactionSurveysOffered"].asString());
	if(!overallNode["SatisfactionSurveysResponded"].isNull())
		instanceSummaryReport_.overall.satisfactionSurveysResponded = std::stol(overallNode["SatisfactionSurveysResponded"].asString());
	auto inboundNode = instanceSummaryReportNode["Inbound"];
	if(!inboundNode["CallsIncomingLine"].isNull())
		instanceSummaryReport_.inbound.callsIncomingLine = std::stol(inboundNode["CallsIncomingLine"].asString());
	if(!inboundNode["CallsIncomingIVR"].isNull())
		instanceSummaryReport_.inbound.callsIncomingIVR = std::stol(inboundNode["CallsIncomingIVR"].asString());
	if(!inboundNode["CallsAbandonedInIVR"].isNull())
		instanceSummaryReport_.inbound.callsAbandonedInIVR = std::stol(inboundNode["CallsAbandonedInIVR"].asString());
	if(!inboundNode["CallsIncomingQueue"].isNull())
		instanceSummaryReport_.inbound.callsIncomingQueue = std::stol(inboundNode["CallsIncomingQueue"].asString());
	if(!inboundNode["CallsAbandonedInQueue"].isNull())
		instanceSummaryReport_.inbound.callsAbandonedInQueue = std::stol(inboundNode["CallsAbandonedInQueue"].asString());
	if(!inboundNode["CallsOffered"].isNull())
		instanceSummaryReport_.inbound.callsOffered = std::stol(inboundNode["CallsOffered"].asString());
	if(!inboundNode["CallsHandled"].isNull())
		instanceSummaryReport_.inbound.callsHandled = std::stol(inboundNode["CallsHandled"].asString());
	if(!inboundNode["HandleRate"].isNull())
		instanceSummaryReport_.inbound.handleRate = std::stof(inboundNode["HandleRate"].asString());
	if(!inboundNode["TotalRingTime"].isNull())
		instanceSummaryReport_.inbound.totalRingTime = std::stol(inboundNode["TotalRingTime"].asString());
	if(!inboundNode["MaxRingTime"].isNull())
		instanceSummaryReport_.inbound.maxRingTime = std::stol(inboundNode["MaxRingTime"].asString());
	if(!inboundNode["AverageRingTime"].isNull())
		instanceSummaryReport_.inbound.averageRingTime = std::stol(inboundNode["AverageRingTime"].asString());
	if(!inboundNode["ServiceLevel20"].isNull())
		instanceSummaryReport_.inbound.serviceLevel20 = std::stof(inboundNode["ServiceLevel20"].asString());
	if(!inboundNode["TotalTalkTime"].isNull())
		instanceSummaryReport_.inbound.totalTalkTime = std::stol(inboundNode["TotalTalkTime"].asString());
	if(!inboundNode["MaxTalkTime"].isNull())
		instanceSummaryReport_.inbound.maxTalkTime = inboundNode["MaxTalkTime"].asString();
	if(!inboundNode["AverageTalkTime"].isNull())
		instanceSummaryReport_.inbound.averageTalkTime = std::stol(inboundNode["AverageTalkTime"].asString());
	if(!inboundNode["TotalWorkTime"].isNull())
		instanceSummaryReport_.inbound.totalWorkTime = std::stol(inboundNode["TotalWorkTime"].asString());
	if(!inboundNode["MaxWorkTime"].isNull())
		instanceSummaryReport_.inbound.maxWorkTime = std::stol(inboundNode["MaxWorkTime"].asString());
	if(!inboundNode["AverageWorkTime"].isNull())
		instanceSummaryReport_.inbound.averageWorkTime = std::stol(inboundNode["AverageWorkTime"].asString());
	if(!inboundNode["SatisfactionIndex"].isNull())
		instanceSummaryReport_.inbound.satisfactionIndex = std::stof(inboundNode["SatisfactionIndex"].asString());
	if(!inboundNode["SatisfactionSurveysOffered"].isNull())
		instanceSummaryReport_.inbound.satisfactionSurveysOffered = std::stol(inboundNode["SatisfactionSurveysOffered"].asString());
	if(!inboundNode["SatisfactionSurveysResponded"].isNull())
		instanceSummaryReport_.inbound.satisfactionSurveysResponded = std::stol(inboundNode["SatisfactionSurveysResponded"].asString());
	if(!inboundNode["TotalWaitTime"].isNull())
		instanceSummaryReport_.inbound.totalWaitTime = std::stol(inboundNode["TotalWaitTime"].asString());
	if(!inboundNode["MaxWaitTime"].isNull())
		instanceSummaryReport_.inbound.maxWaitTime = std::stol(inboundNode["MaxWaitTime"].asString());
	if(!inboundNode["AverageWaitTime"].isNull())
		instanceSummaryReport_.inbound.averageWaitTime = std::stol(inboundNode["AverageWaitTime"].asString());
	auto outboundNode = instanceSummaryReportNode["Outbound"];
	if(!outboundNode["CallsDialed"].isNull())
		instanceSummaryReport_.outbound.callsDialed = std::stol(outboundNode["CallsDialed"].asString());
	if(!outboundNode["CallsAnswered"].isNull())
		instanceSummaryReport_.outbound.callsAnswered = std::stol(outboundNode["CallsAnswered"].asString());
	if(!outboundNode["AnswerRate"].isNull())
		instanceSummaryReport_.outbound.answerRate = std::stof(outboundNode["AnswerRate"].asString());
	if(!outboundNode["TotalDialingTime"].isNull())
		instanceSummaryReport_.outbound.totalDialingTime = std::stol(outboundNode["TotalDialingTime"].asString());
	if(!outboundNode["MaxDialingTime"].isNull())
		instanceSummaryReport_.outbound.maxDialingTime = std::stol(outboundNode["MaxDialingTime"].asString());
	if(!outboundNode["AverageDialingTime"].isNull())
		instanceSummaryReport_.outbound.averageDialingTime = std::stol(outboundNode["AverageDialingTime"].asString());
	if(!outboundNode["TotalTalkTime"].isNull())
		instanceSummaryReport_.outbound.totalTalkTime = std::stol(outboundNode["TotalTalkTime"].asString());
	if(!outboundNode["MaxTalkTime"].isNull())
		instanceSummaryReport_.outbound.maxTalkTime = std::stol(outboundNode["MaxTalkTime"].asString());
	if(!outboundNode["AverageTalkTime"].isNull())
		instanceSummaryReport_.outbound.averageTalkTime = std::stol(outboundNode["AverageTalkTime"].asString());
	if(!outboundNode["TotalWorkTime"].isNull())
		instanceSummaryReport_.outbound.totalWorkTime = std::stol(outboundNode["TotalWorkTime"].asString());
	if(!outboundNode["MaxWorkTime"].isNull())
		instanceSummaryReport_.outbound.maxWorkTime = std::stol(outboundNode["MaxWorkTime"].asString());
	if(!outboundNode["AverageWorkTime"].isNull())
		instanceSummaryReport_.outbound.averageWorkTime = std::stol(outboundNode["AverageWorkTime"].asString());
	if(!outboundNode["SatisfactionIndex"].isNull())
		instanceSummaryReport_.outbound.satisfactionIndex = std::stof(outboundNode["SatisfactionIndex"].asString());
	if(!outboundNode["SatisfactionSurveysOffered"].isNull())
		instanceSummaryReport_.outbound.satisfactionSurveysOffered = std::stol(outboundNode["SatisfactionSurveysOffered"].asString());
	if(!outboundNode["SatisfactionSurveysResponded"].isNull())
		instanceSummaryReport_.outbound.satisfactionSurveysResponded = std::stol(outboundNode["SatisfactionSurveysResponded"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string GetInstanceSummaryReportSinceMidnightResult::getMessage()const
{
	return message_;
}

int GetInstanceSummaryReportSinceMidnightResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetInstanceSummaryReportSinceMidnightResult::InstanceSummaryReport GetInstanceSummaryReportSinceMidnightResult::getInstanceSummaryReport()const
{
	return instanceSummaryReport_;
}

std::string GetInstanceSummaryReportSinceMidnightResult::getCode()const
{
	return code_;
}

bool GetInstanceSummaryReportSinceMidnightResult::getSuccess()const
{
	return success_;
}

