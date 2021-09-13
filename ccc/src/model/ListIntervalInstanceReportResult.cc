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

#include <alibabacloud/ccc/model/ListIntervalInstanceReportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListIntervalInstanceReportResult::ListIntervalInstanceReportResult() :
	ServiceResult()
{}

ListIntervalInstanceReportResult::ListIntervalInstanceReportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListIntervalInstanceReportResult::~ListIntervalInstanceReportResult()
{}

void ListIntervalInstanceReportResult::parse(const std::string &payload)
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
		if(!inboundNode["CallsVoicemail"].isNull())
			dataObject.inbound.callsVoicemail = std::stol(inboundNode["CallsVoicemail"].asString());
		if(!inboundNode["MaxAbandonedInIVRTime"].isNull())
			dataObject.inbound.maxAbandonedInIVRTime = std::stol(inboundNode["MaxAbandonedInIVRTime"].asString());
		if(!inboundNode["CallsHandled"].isNull())
			dataObject.inbound.callsHandled = std::stol(inboundNode["CallsHandled"].asString());
		if(!inboundNode["CallsIVRException"].isNull())
			dataObject.inbound.callsIVRException = std::stol(inboundNode["CallsIVRException"].asString());
		if(!inboundNode["CallsAbandonedInIVR"].isNull())
			dataObject.inbound.callsAbandonedInIVR = std::stol(inboundNode["CallsAbandonedInIVR"].asString());
		if(!inboundNode["MaxWorkTime"].isNull())
			dataObject.inbound.maxWorkTime = std::stol(inboundNode["MaxWorkTime"].asString());
		if(!inboundNode["TotalHoldTime"].isNull())
			dataObject.inbound.totalHoldTime = std::stol(inboundNode["TotalHoldTime"].asString());
		if(!inboundNode["MaxAbandonTime"].isNull())
			dataObject.inbound.maxAbandonTime = std::stol(inboundNode["MaxAbandonTime"].asString());
		if(!inboundNode["AverageAbandonTime"].isNull())
			dataObject.inbound.averageAbandonTime = std::stof(inboundNode["AverageAbandonTime"].asString());
		if(!inboundNode["AbandonedRate"].isNull())
			dataObject.inbound.abandonedRate = std::stof(inboundNode["AbandonedRate"].asString());
		if(!inboundNode["CallsRinged"].isNull())
			dataObject.inbound.callsRinged = std::stol(inboundNode["CallsRinged"].asString());
		if(!inboundNode["CallsQueuingFailed"].isNull())
			dataObject.inbound.callsQueuingFailed = std::stol(inboundNode["CallsQueuingFailed"].asString());
		if(!inboundNode["TotalRingTime"].isNull())
			dataObject.inbound.totalRingTime = std::stol(inboundNode["TotalRingTime"].asString());
		if(!inboundNode["TotalTalkTime"].isNull())
			dataObject.inbound.totalTalkTime = std::stol(inboundNode["TotalTalkTime"].asString());
		if(!inboundNode["MaxAbandonedInRingTime"].isNull())
			dataObject.inbound.maxAbandonedInRingTime = std::stol(inboundNode["MaxAbandonedInRingTime"].asString());
		if(!inboundNode["CallsBlindTransferred"].isNull())
			dataObject.inbound.callsBlindTransferred = std::stol(inboundNode["CallsBlindTransferred"].asString());
		if(!inboundNode["AverageAbandonedInIVRTime"].isNull())
			dataObject.inbound.averageAbandonedInIVRTime = std::stof(inboundNode["AverageAbandonedInIVRTime"].asString());
		if(!inboundNode["AverageAbandonedInQueueTime"].isNull())
			dataObject.inbound.averageAbandonedInQueueTime = std::stof(inboundNode["AverageAbandonedInQueueTime"].asString());
		if(!inboundNode["MaxWaitTime"].isNull())
			dataObject.inbound.maxWaitTime = std::stol(inboundNode["MaxWaitTime"].asString());
		if(!inboundNode["AverageTalkTime"].isNull())
			dataObject.inbound.averageTalkTime = std::stof(inboundNode["AverageTalkTime"].asString());
		if(!inboundNode["CallsAttendedTransferred"].isNull())
			dataObject.inbound.callsAttendedTransferred = std::stol(inboundNode["CallsAttendedTransferred"].asString());
		if(!inboundNode["TotalAbandonedInIVRTime"].isNull())
			dataObject.inbound.totalAbandonedInIVRTime = std::stol(inboundNode["TotalAbandonedInIVRTime"].asString());
		if(!inboundNode["CallsQueuingOverflow"].isNull())
			dataObject.inbound.callsQueuingOverflow = std::stol(inboundNode["CallsQueuingOverflow"].asString());
		if(!inboundNode["CallsAbandonedInRing"].isNull())
			dataObject.inbound.callsAbandonedInRing = std::stol(inboundNode["CallsAbandonedInRing"].asString());
		if(!inboundNode["TotalAbandonedInRingTime"].isNull())
			dataObject.inbound.totalAbandonedInRingTime = std::stol(inboundNode["TotalAbandonedInRingTime"].asString());
		if(!inboundNode["TotalWorkTime"].isNull())
			dataObject.inbound.totalWorkTime = std::stol(inboundNode["TotalWorkTime"].asString());
		if(!inboundNode["AverageWaitTime"].isNull())
			dataObject.inbound.averageWaitTime = std::stof(inboundNode["AverageWaitTime"].asString());
		if(!inboundNode["AverageWorkTime"].isNull())
			dataObject.inbound.averageWorkTime = std::stof(inboundNode["AverageWorkTime"].asString());
		if(!inboundNode["CallsQueued"].isNull())
			dataObject.inbound.callsQueued = std::stol(inboundNode["CallsQueued"].asString());
		if(!inboundNode["AverageAbandonedInRingTime"].isNull())
			dataObject.inbound.averageAbandonedInRingTime = std::stof(inboundNode["AverageAbandonedInRingTime"].asString());
		if(!inboundNode["SatisfactionIndex"].isNull())
			dataObject.inbound.satisfactionIndex = std::stof(inboundNode["SatisfactionIndex"].asString());
		if(!inboundNode["CallsAbandoned"].isNull())
			dataObject.inbound.callsAbandoned = std::stol(inboundNode["CallsAbandoned"].asString());
		if(!inboundNode["MaxAbandonedInQueueTime"].isNull())
			dataObject.inbound.maxAbandonedInQueueTime = std::stol(inboundNode["MaxAbandonedInQueueTime"].asString());
		if(!inboundNode["CallsAbandonedInVoiceNavigator"].isNull())
			dataObject.inbound.callsAbandonedInVoiceNavigator = std::stol(inboundNode["CallsAbandonedInVoiceNavigator"].asString());
		if(!inboundNode["TotalWaitTime"].isNull())
			dataObject.inbound.totalWaitTime = std::stol(inboundNode["TotalWaitTime"].asString());
		if(!inboundNode["MaxTalkTime"].isNull())
			dataObject.inbound.maxTalkTime = std::stol(inboundNode["MaxTalkTime"].asString());
		if(!inboundNode["MaxRingTime"].isNull())
			dataObject.inbound.maxRingTime = std::stol(inboundNode["MaxRingTime"].asString());
		if(!inboundNode["TotalAbandonTime"].isNull())
			dataObject.inbound.totalAbandonTime = std::stol(inboundNode["TotalAbandonTime"].asString());
		if(!inboundNode["CallsOffered"].isNull())
			dataObject.inbound.callsOffered = std::stol(inboundNode["CallsOffered"].asString());
		if(!inboundNode["CallsQueuingTimeout"].isNull())
			dataObject.inbound.callsQueuingTimeout = std::stol(inboundNode["CallsQueuingTimeout"].asString());
		if(!inboundNode["ServiceLevel20"].isNull())
			dataObject.inbound.serviceLevel20 = std::stof(inboundNode["ServiceLevel20"].asString());
		if(!inboundNode["MaxHoldTime"].isNull())
			dataObject.inbound.maxHoldTime = std::stol(inboundNode["MaxHoldTime"].asString());
		if(!inboundNode["CallsForwardToOutsideNumber"].isNull())
			dataObject.inbound.callsForwardToOutsideNumber = std::stol(inboundNode["CallsForwardToOutsideNumber"].asString());
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
		if(!inboundNode["CallsAbandonedInQueue"].isNull())
			dataObject.inbound.callsAbandonedInQueue = std::stol(inboundNode["CallsAbandonedInQueue"].asString());
		if(!inboundNode["TotalAbandonedInQueueTime"].isNull())
			dataObject.inbound.totalAbandonedInQueueTime = std::stol(inboundNode["TotalAbandonedInQueueTime"].asString());
		auto outboundNode = value["Outbound"];
		if(!outboundNode["AverageRingTime"].isNull())
			dataObject.outbound.averageRingTime = std::stof(outboundNode["AverageRingTime"].asString());
		if(!outboundNode["CallsDialed"].isNull())
			dataObject.outbound.callsDialed = std::stol(outboundNode["CallsDialed"].asString());
		if(!outboundNode["CallsAnswered"].isNull())
			dataObject.outbound.callsAnswered = std::stol(outboundNode["CallsAnswered"].asString());
		if(!outboundNode["TotalWorkTime"].isNull())
			dataObject.outbound.totalWorkTime = std::stol(outboundNode["TotalWorkTime"].asString());
		if(!outboundNode["MaxWorkTime"].isNull())
			dataObject.outbound.maxWorkTime = std::stol(outboundNode["MaxWorkTime"].asString());
		if(!outboundNode["TotalDialingTime"].isNull())
			dataObject.outbound.totalDialingTime = std::stol(outboundNode["TotalDialingTime"].asString());
		if(!outboundNode["TotalHoldTime"].isNull())
			dataObject.outbound.totalHoldTime = std::stol(outboundNode["TotalHoldTime"].asString());
		if(!outboundNode["AverageWorkTime"].isNull())
			dataObject.outbound.averageWorkTime = std::stof(outboundNode["AverageWorkTime"].asString());
		if(!outboundNode["SatisfactionIndex"].isNull())
			dataObject.outbound.satisfactionIndex = std::stof(outboundNode["SatisfactionIndex"].asString());
		if(!outboundNode["CallsRinged"].isNull())
			dataObject.outbound.callsRinged = std::stol(outboundNode["CallsRinged"].asString());
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
		if(!outboundNode["CallsBlindTransferred"].isNull())
			dataObject.outbound.callsBlindTransferred = std::stol(outboundNode["CallsBlindTransferred"].asString());
		if(!outboundNode["AnswerRate"].isNull())
			dataObject.outbound.answerRate = std::stof(outboundNode["AnswerRate"].asString());
		if(!outboundNode["MaxHoldTime"].isNull())
			dataObject.outbound.maxHoldTime = std::stol(outboundNode["MaxHoldTime"].asString());
		if(!outboundNode["AverageTalkTime"].isNull())
			dataObject.outbound.averageTalkTime = std::stof(outboundNode["AverageTalkTime"].asString());
		if(!outboundNode["SatisfactionRate"].isNull())
			dataObject.outbound.satisfactionRate = std::stof(outboundNode["SatisfactionRate"].asString());
		if(!outboundNode["CallsAttendedTransferred"].isNull())
			dataObject.outbound.callsAttendedTransferred = std::stol(outboundNode["CallsAttendedTransferred"].asString());
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
		if(!overallNode["TotalTalkTime"].isNull())
			dataObject.overall.totalTalkTime = std::stol(overallNode["TotalTalkTime"].asString());
		if(!overallNode["TotalLoggedInTime"].isNull())
			dataObject.overall.totalLoggedInTime = std::stol(overallNode["TotalLoggedInTime"].asString());
		if(!overallNode["OccupancyRate"].isNull())
			dataObject.overall.occupancyRate = std::stof(overallNode["OccupancyRate"].asString());
		if(!overallNode["TotalWorkTime"].isNull())
			dataObject.overall.totalWorkTime = std::stol(overallNode["TotalWorkTime"].asString());
		if(!overallNode["MaxHoldTime"].isNull())
			dataObject.overall.maxHoldTime = std::stol(overallNode["MaxHoldTime"].asString());
		if(!overallNode["MaxWorkTime"].isNull())
			dataObject.overall.maxWorkTime = std::stol(overallNode["MaxWorkTime"].asString());
		if(!overallNode["AverageBreakTime"].isNull())
			dataObject.overall.averageBreakTime = std::stof(overallNode["AverageBreakTime"].asString());
		if(!overallNode["TotalHoldTime"].isNull())
			dataObject.overall.totalHoldTime = std::stol(overallNode["TotalHoldTime"].asString());
		if(!overallNode["SatisfactionRate"].isNull())
			dataObject.overall.satisfactionRate = std::stof(overallNode["SatisfactionRate"].asString());
		if(!overallNode["MaxBreakTime"].isNull())
			dataObject.overall.maxBreakTime = std::stol(overallNode["MaxBreakTime"].asString());
		if(!overallNode["AverageWorkTime"].isNull())
			dataObject.overall.averageWorkTime = std::stof(overallNode["AverageWorkTime"].asString());
		if(!overallNode["AverageTalkTime"].isNull())
			dataObject.overall.averageTalkTime = std::stof(overallNode["AverageTalkTime"].asString());
		if(!overallNode["SatisfactionIndex"].isNull())
			dataObject.overall.satisfactionIndex = std::stof(overallNode["SatisfactionIndex"].asString());
		if(!overallNode["SatisfactionSurveysOffered"].isNull())
			dataObject.overall.satisfactionSurveysOffered = std::stol(overallNode["SatisfactionSurveysOffered"].asString());
		if(!overallNode["SatisfactionSurveysResponded"].isNull())
			dataObject.overall.satisfactionSurveysResponded = std::stol(overallNode["SatisfactionSurveysResponded"].asString());
		if(!overallNode["MaxReadyTime"].isNull())
			dataObject.overall.maxReadyTime = std::stol(overallNode["MaxReadyTime"].asString());
		if(!overallNode["AverageReadyTime"].isNull())
			dataObject.overall.averageReadyTime = std::stof(overallNode["AverageReadyTime"].asString());
		if(!overallNode["AverageHoldTime"].isNull())
			dataObject.overall.averageHoldTime = std::stof(overallNode["AverageHoldTime"].asString());
		if(!overallNode["TotalReadyTime"].isNull())
			dataObject.overall.totalReadyTime = std::stol(overallNode["TotalReadyTime"].asString());
		if(!overallNode["TotalBreakTime"].isNull())
			dataObject.overall.totalBreakTime = std::stol(overallNode["TotalBreakTime"].asString());
		if(!overallNode["MaxTalkTime"].isNull())
			dataObject.overall.maxTalkTime = std::stol(overallNode["MaxTalkTime"].asString());
		if(!overallNode["TotalCalls"].isNull())
			dataObject.overall.totalCalls = std::stol(overallNode["TotalCalls"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListIntervalInstanceReportResult::getMessage()const
{
	return message_;
}

int ListIntervalInstanceReportResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListIntervalInstanceReportResult::DataItem> ListIntervalInstanceReportResult::getData()const
{
	return data_;
}

std::string ListIntervalInstanceReportResult::getCode()const
{
	return code_;
}

