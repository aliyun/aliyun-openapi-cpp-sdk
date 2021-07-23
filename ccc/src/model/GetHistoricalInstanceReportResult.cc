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

#include <alibabacloud/ccc/model/GetHistoricalInstanceReportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetHistoricalInstanceReportResult::GetHistoricalInstanceReportResult() :
	ServiceResult()
{}

GetHistoricalInstanceReportResult::GetHistoricalInstanceReportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetHistoricalInstanceReportResult::~GetHistoricalInstanceReportResult()
{}

void GetHistoricalInstanceReportResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	auto inboundNode = dataNode["Inbound"];
	if(!inboundNode["AbandonRate"].isNull())
		data_.inbound.abandonRate = std::stof(inboundNode["AbandonRate"].asString());
	if(!inboundNode["AverageAbandonTime"].isNull())
		data_.inbound.averageAbandonTime = std::stof(inboundNode["AverageAbandonTime"].asString());
	if(!inboundNode["AverageAbandonedInIVRTime"].isNull())
		data_.inbound.averageAbandonedInIVRTime = std::stof(inboundNode["AverageAbandonedInIVRTime"].asString());
	if(!inboundNode["AverageAbandonedInQueueTime"].isNull())
		data_.inbound.averageAbandonedInQueueTime = std::stof(inboundNode["AverageAbandonedInQueueTime"].asString());
	if(!inboundNode["AverageAbandonedInRingTime"].isNull())
		data_.inbound.averageAbandonedInRingTime = std::stof(inboundNode["AverageAbandonedInRingTime"].asString());
	if(!inboundNode["AverageHoldTime"].isNull())
		data_.inbound.averageHoldTime = std::stof(inboundNode["AverageHoldTime"].asString());
	if(!inboundNode["AverageRingTime"].isNull())
		data_.inbound.averageRingTime = std::stof(inboundNode["AverageRingTime"].asString());
	if(!inboundNode["AverageTalkTime"].isNull())
		data_.inbound.averageTalkTime = std::stof(inboundNode["AverageTalkTime"].asString());
	if(!inboundNode["AverageWaitTime"].isNull())
		data_.inbound.averageWaitTime = std::stof(inboundNode["AverageWaitTime"].asString());
	if(!inboundNode["AverageWorkTime"].isNull())
		data_.inbound.averageWorkTime = std::stof(inboundNode["AverageWorkTime"].asString());
	if(!inboundNode["CallsAbandoned"].isNull())
		data_.inbound.callsAbandoned = std::stol(inboundNode["CallsAbandoned"].asString());
	if(!inboundNode["CallsAbandonedInIVR"].isNull())
		data_.inbound.callsAbandonedInIVR = std::stol(inboundNode["CallsAbandonedInIVR"].asString());
	if(!inboundNode["CallsAbandonedInQueue"].isNull())
		data_.inbound.callsAbandonedInQueue = std::stol(inboundNode["CallsAbandonedInQueue"].asString());
	if(!inboundNode["CallsAbandonedInRing"].isNull())
		data_.inbound.callsAbandonedInRing = std::stol(inboundNode["CallsAbandonedInRing"].asString());
	if(!inboundNode["CallsAttendedTransferred"].isNull())
		data_.inbound.callsAttendedTransferred = std::stol(inboundNode["CallsAttendedTransferred"].asString());
	if(!inboundNode["CallsBlindTransferred"].isNull())
		data_.inbound.callsBlindTransferred = std::stol(inboundNode["CallsBlindTransferred"].asString());
	if(!inboundNode["CallsHandled"].isNull())
		data_.inbound.callsHandled = std::stol(inboundNode["CallsHandled"].asString());
	if(!inboundNode["CallsHold"].isNull())
		data_.inbound.callsHold = std::stol(inboundNode["CallsHold"].asString());
	if(!inboundNode["CallsOffered"].isNull())
		data_.inbound.callsOffered = std::stol(inboundNode["CallsOffered"].asString());
	if(!inboundNode["CallsQueued"].isNull())
		data_.inbound.callsQueued = std::stol(inboundNode["CallsQueued"].asString());
	if(!inboundNode["CallsRinged"].isNull())
		data_.inbound.callsRinged = std::stol(inboundNode["CallsRinged"].asString());
	if(!inboundNode["HandleRate"].isNull())
		data_.inbound.handleRate = std::stof(inboundNode["HandleRate"].asString());
	if(!inboundNode["MaxAbandonTime"].isNull())
		data_.inbound.maxAbandonTime = std::stol(inboundNode["MaxAbandonTime"].asString());
	if(!inboundNode["MaxAbandonedInIVRTime"].isNull())
		data_.inbound.maxAbandonedInIVRTime = std::stol(inboundNode["MaxAbandonedInIVRTime"].asString());
	if(!inboundNode["MaxAbandonedInQueueTime"].isNull())
		data_.inbound.maxAbandonedInQueueTime = std::stol(inboundNode["MaxAbandonedInQueueTime"].asString());
	if(!inboundNode["MaxAbandonedInRingTime"].isNull())
		data_.inbound.maxAbandonedInRingTime = std::stol(inboundNode["MaxAbandonedInRingTime"].asString());
	if(!inboundNode["MaxHoldTime"].isNull())
		data_.inbound.maxHoldTime = std::stol(inboundNode["MaxHoldTime"].asString());
	if(!inboundNode["MaxRingTime"].isNull())
		data_.inbound.maxRingTime = std::stol(inboundNode["MaxRingTime"].asString());
	if(!inboundNode["MaxTalkTime"].isNull())
		data_.inbound.maxTalkTime = std::stol(inboundNode["MaxTalkTime"].asString());
	if(!inboundNode["MaxWaitTime"].isNull())
		data_.inbound.maxWaitTime = std::stol(inboundNode["MaxWaitTime"].asString());
	if(!inboundNode["MaxWorkTime"].isNull())
		data_.inbound.maxWorkTime = std::stol(inboundNode["MaxWorkTime"].asString());
	if(!inboundNode["SatisfactionIndex"].isNull())
		data_.inbound.satisfactionIndex = std::stof(inboundNode["SatisfactionIndex"].asString());
	if(!inboundNode["SatisfactionRate"].isNull())
		data_.inbound.satisfactionRate = std::stof(inboundNode["SatisfactionRate"].asString());
	if(!inboundNode["SatisfactionSurveysOffered"].isNull())
		data_.inbound.satisfactionSurveysOffered = std::stol(inboundNode["SatisfactionSurveysOffered"].asString());
	if(!inboundNode["SatisfactionSurveysResponded"].isNull())
		data_.inbound.satisfactionSurveysResponded = std::stol(inboundNode["SatisfactionSurveysResponded"].asString());
	if(!inboundNode["ServiceLevel20"].isNull())
		data_.inbound.serviceLevel20 = std::stof(inboundNode["ServiceLevel20"].asString());
	if(!inboundNode["TotalAbandonTime"].isNull())
		data_.inbound.totalAbandonTime = std::stol(inboundNode["TotalAbandonTime"].asString());
	if(!inboundNode["TotalAbandonedInIVRTime"].isNull())
		data_.inbound.totalAbandonedInIVRTime = std::stol(inboundNode["TotalAbandonedInIVRTime"].asString());
	if(!inboundNode["TotalAbandonedInQueueTime"].isNull())
		data_.inbound.totalAbandonedInQueueTime = std::stol(inboundNode["TotalAbandonedInQueueTime"].asString());
	if(!inboundNode["TotalAbandonedInRingTime"].isNull())
		data_.inbound.totalAbandonedInRingTime = std::stol(inboundNode["TotalAbandonedInRingTime"].asString());
	if(!inboundNode["TotalHoldTime"].isNull())
		data_.inbound.totalHoldTime = std::stol(inboundNode["TotalHoldTime"].asString());
	if(!inboundNode["TotalRingTime"].isNull())
		data_.inbound.totalRingTime = std::stol(inboundNode["TotalRingTime"].asString());
	if(!inboundNode["TotalTalkTime"].isNull())
		data_.inbound.totalTalkTime = std::stol(inboundNode["TotalTalkTime"].asString());
	if(!inboundNode["TotalWaitTime"].isNull())
		data_.inbound.totalWaitTime = std::stol(inboundNode["TotalWaitTime"].asString());
	if(!inboundNode["TotalWorkTime"].isNull())
		data_.inbound.totalWorkTime = std::stol(inboundNode["TotalWorkTime"].asString());
	auto outboundNode = dataNode["Outbound"];
	if(!outboundNode["AnswerRate"].isNull())
		data_.outbound.answerRate = std::stof(outboundNode["AnswerRate"].asString());
	if(!outboundNode["AverageDialingTime"].isNull())
		data_.outbound.averageDialingTime = std::stof(outboundNode["AverageDialingTime"].asString());
	if(!outboundNode["AverageHoldTime"].isNull())
		data_.outbound.averageHoldTime = std::stof(outboundNode["AverageHoldTime"].asString());
	if(!outboundNode["AverageRingTime"].isNull())
		data_.outbound.averageRingTime = std::stof(outboundNode["AverageRingTime"].asString());
	if(!outboundNode["AverageTalkTime"].isNull())
		data_.outbound.averageTalkTime = std::stof(outboundNode["AverageTalkTime"].asString());
	if(!outboundNode["AverageWorkTime"].isNull())
		data_.outbound.averageWorkTime = std::stof(outboundNode["AverageWorkTime"].asString());
	if(!outboundNode["CallsAnswered"].isNull())
		data_.outbound.callsAnswered = std::stol(outboundNode["CallsAnswered"].asString());
	if(!outboundNode["CallsAttendedTransferred"].isNull())
		data_.outbound.callsAttendedTransferred = std::stol(outboundNode["CallsAttendedTransferred"].asString());
	if(!outboundNode["CallsBlindTransferred"].isNull())
		data_.outbound.callsBlindTransferred = std::stol(outboundNode["CallsBlindTransferred"].asString());
	if(!outboundNode["CallsDialed"].isNull())
		data_.outbound.callsDialed = std::stol(outboundNode["CallsDialed"].asString());
	if(!outboundNode["CallsHold"].isNull())
		data_.outbound.callsHold = std::stoi(outboundNode["CallsHold"].asString());
	if(!outboundNode["CallsRinged"].isNull())
		data_.outbound.callsRinged = std::stol(outboundNode["CallsRinged"].asString());
	if(!outboundNode["MaxDialingTime"].isNull())
		data_.outbound.maxDialingTime = std::stol(outboundNode["MaxDialingTime"].asString());
	if(!outboundNode["MaxHoldTime"].isNull())
		data_.outbound.maxHoldTime = std::stol(outboundNode["MaxHoldTime"].asString());
	if(!outboundNode["MaxRingTime"].isNull())
		data_.outbound.maxRingTime = std::stol(outboundNode["MaxRingTime"].asString());
	if(!outboundNode["MaxTalkTime"].isNull())
		data_.outbound.maxTalkTime = std::stol(outboundNode["MaxTalkTime"].asString());
	if(!outboundNode["MaxWorkTime"].isNull())
		data_.outbound.maxWorkTime = std::stol(outboundNode["MaxWorkTime"].asString());
	if(!outboundNode["SatisfactionIndex"].isNull())
		data_.outbound.satisfactionIndex = std::stof(outboundNode["SatisfactionIndex"].asString());
	if(!outboundNode["SatisfactionRate"].isNull())
		data_.outbound.satisfactionRate = std::stof(outboundNode["SatisfactionRate"].asString());
	if(!outboundNode["SatisfactionSurveysOffered"].isNull())
		data_.outbound.satisfactionSurveysOffered = std::stol(outboundNode["SatisfactionSurveysOffered"].asString());
	if(!outboundNode["SatisfactionSurveysResponded"].isNull())
		data_.outbound.satisfactionSurveysResponded = std::stol(outboundNode["SatisfactionSurveysResponded"].asString());
	if(!outboundNode["TotalDialingTime"].isNull())
		data_.outbound.totalDialingTime = std::stol(outboundNode["TotalDialingTime"].asString());
	if(!outboundNode["TotalHoldTime"].isNull())
		data_.outbound.totalHoldTime = std::stol(outboundNode["TotalHoldTime"].asString());
	if(!outboundNode["TotalRingTime"].isNull())
		data_.outbound.totalRingTime = std::stol(outboundNode["TotalRingTime"].asString());
	if(!outboundNode["TotalTalkTime"].isNull())
		data_.outbound.totalTalkTime = std::stol(outboundNode["TotalTalkTime"].asString());
	if(!outboundNode["TotalWorkTime"].isNull())
		data_.outbound.totalWorkTime = std::stol(outboundNode["TotalWorkTime"].asString());
	auto overallNode = dataNode["Overall"];
	if(!overallNode["AverageBreakTime"].isNull())
		data_.overall.averageBreakTime = std::stof(overallNode["AverageBreakTime"].asString());
	if(!overallNode["AverageHoldTime"].isNull())
		data_.overall.averageHoldTime = std::stof(overallNode["AverageHoldTime"].asString());
	if(!overallNode["AverageReadyTime"].isNull())
		data_.overall.averageReadyTime = std::stof(overallNode["AverageReadyTime"].asString());
	if(!overallNode["AverageTalkTime"].isNull())
		data_.overall.averageTalkTime = std::stof(overallNode["AverageTalkTime"].asString());
	if(!overallNode["AverageWorkTime"].isNull())
		data_.overall.averageWorkTime = std::stof(overallNode["AverageWorkTime"].asString());
	if(!overallNode["MaxBreakTime"].isNull())
		data_.overall.maxBreakTime = std::stol(overallNode["MaxBreakTime"].asString());
	if(!overallNode["MaxHoldTime"].isNull())
		data_.overall.maxHoldTime = std::stol(overallNode["MaxHoldTime"].asString());
	if(!overallNode["MaxReadyTime"].isNull())
		data_.overall.maxReadyTime = std::stol(overallNode["MaxReadyTime"].asString());
	if(!overallNode["MaxTalkTime"].isNull())
		data_.overall.maxTalkTime = std::stol(overallNode["MaxTalkTime"].asString());
	if(!overallNode["MaxWorkTime"].isNull())
		data_.overall.maxWorkTime = std::stol(overallNode["MaxWorkTime"].asString());
	if(!overallNode["OccupancyRate"].isNull())
		data_.overall.occupancyRate = std::stof(overallNode["OccupancyRate"].asString());
	if(!overallNode["SatisfactionIndex"].isNull())
		data_.overall.satisfactionIndex = std::stof(overallNode["SatisfactionIndex"].asString());
	if(!overallNode["SatisfactionRate"].isNull())
		data_.overall.satisfactionRate = std::stof(overallNode["SatisfactionRate"].asString());
	if(!overallNode["SatisfactionSurveysOffered"].isNull())
		data_.overall.satisfactionSurveysOffered = std::stol(overallNode["SatisfactionSurveysOffered"].asString());
	if(!overallNode["SatisfactionSurveysResponded"].isNull())
		data_.overall.satisfactionSurveysResponded = std::stol(overallNode["SatisfactionSurveysResponded"].asString());
	if(!overallNode["TotalBreakTime"].isNull())
		data_.overall.totalBreakTime = std::stol(overallNode["TotalBreakTime"].asString());
	if(!overallNode["TotalCalls"].isNull())
		data_.overall.totalCalls = std::stol(overallNode["TotalCalls"].asString());
	if(!overallNode["TotalHoldTime"].isNull())
		data_.overall.totalHoldTime = std::stol(overallNode["TotalHoldTime"].asString());
	if(!overallNode["TotalLoggedInTime"].isNull())
		data_.overall.totalLoggedInTime = std::stol(overallNode["TotalLoggedInTime"].asString());
	if(!overallNode["TotalReadyTime"].isNull())
		data_.overall.totalReadyTime = std::stol(overallNode["TotalReadyTime"].asString());
	if(!overallNode["TotalTalkTime"].isNull())
		data_.overall.totalTalkTime = std::stol(overallNode["TotalTalkTime"].asString());
	if(!overallNode["TotalWorkTime"].isNull())
		data_.overall.totalWorkTime = std::stol(overallNode["TotalWorkTime"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetHistoricalInstanceReportResult::getMessage()const
{
	return message_;
}

int GetHistoricalInstanceReportResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetHistoricalInstanceReportResult::Data GetHistoricalInstanceReportResult::getData()const
{
	return data_;
}

std::string GetHistoricalInstanceReportResult::getCode()const
{
	return code_;
}

