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

#include <alibabacloud/ccc/model/GetInstanceSummaryReportByIntervalResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetInstanceSummaryReportByIntervalResult::GetInstanceSummaryReportByIntervalResult() :
	ServiceResult()
{}

GetInstanceSummaryReportByIntervalResult::GetInstanceSummaryReportByIntervalResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetInstanceSummaryReportByIntervalResult::~GetInstanceSummaryReportByIntervalResult()
{}

void GetInstanceSummaryReportByIntervalResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto instanceTimeIntervalReportNode = value["InstanceTimeIntervalReport"];
	if(!instanceTimeIntervalReportNode["InstanceId"].isNull())
		instanceTimeIntervalReport_.instanceId = instanceTimeIntervalReportNode["InstanceId"].asString();
	auto allIntervalList = value["IntervalList"]["InstanceSummaryReport"];
	for (auto value : allIntervalList)
	{
		InstanceTimeIntervalReport::InstanceSummaryReport instanceSummaryReportObject;
		if(!value["Timestamp"].isNull())
			instanceSummaryReportObject.timestamp = value["Timestamp"].asString();
		if(!value["InstanceId"].isNull())
			instanceSummaryReportObject.instanceId = value["InstanceId"].asString();
		auto overallNode = value["Overall"];
		if(!overallNode["TotalCalls"].isNull())
			instanceSummaryReportObject.overall.totalCalls = std::stol(overallNode["TotalCalls"].asString());
		if(!overallNode["TotalLoggedInTime"].isNull())
			instanceSummaryReportObject.overall.totalLoggedInTime = std::stol(overallNode["TotalLoggedInTime"].asString());
		if(!overallNode["TotalBreakTime"].isNull())
			instanceSummaryReportObject.overall.totalBreakTime = std::stol(overallNode["TotalBreakTime"].asString());
		if(!overallNode["OccupancyRate"].isNull())
			instanceSummaryReportObject.overall.occupancyRate = std::stof(overallNode["OccupancyRate"].asString());
		if(!overallNode["TotalReadyTime"].isNull())
			instanceSummaryReportObject.overall.totalReadyTime = std::stol(overallNode["TotalReadyTime"].asString());
		if(!overallNode["MaxReadyTime"].isNull())
			instanceSummaryReportObject.overall.maxReadyTime = std::stol(overallNode["MaxReadyTime"].asString());
		if(!overallNode["AverageReadyTime"].isNull())
			instanceSummaryReportObject.overall.averageReadyTime = std::stol(overallNode["AverageReadyTime"].asString());
		if(!overallNode["TotalTalkTime"].isNull())
			instanceSummaryReportObject.overall.totalTalkTime = std::stol(overallNode["TotalTalkTime"].asString());
		if(!overallNode["MaxTalkTime"].isNull())
			instanceSummaryReportObject.overall.maxTalkTime = std::stol(overallNode["MaxTalkTime"].asString());
		if(!overallNode["AverageTalkTime"].isNull())
			instanceSummaryReportObject.overall.averageTalkTime = std::stol(overallNode["AverageTalkTime"].asString());
		if(!overallNode["TotalWorkTime"].isNull())
			instanceSummaryReportObject.overall.totalWorkTime = std::stol(overallNode["TotalWorkTime"].asString());
		if(!overallNode["MaxWorkTime"].isNull())
			instanceSummaryReportObject.overall.maxWorkTime = std::stol(overallNode["MaxWorkTime"].asString());
		if(!overallNode["AverageWorkTime"].isNull())
			instanceSummaryReportObject.overall.averageWorkTime = std::stol(overallNode["AverageWorkTime"].asString());
		if(!overallNode["SatisfactionIndex"].isNull())
			instanceSummaryReportObject.overall.satisfactionIndex = std::stof(overallNode["SatisfactionIndex"].asString());
		if(!overallNode["SatisfactionSurveysOffered"].isNull())
			instanceSummaryReportObject.overall.satisfactionSurveysOffered = std::stol(overallNode["SatisfactionSurveysOffered"].asString());
		if(!overallNode["SatisfactionSurveysResponded"].isNull())
			instanceSummaryReportObject.overall.satisfactionSurveysResponded = std::stol(overallNode["SatisfactionSurveysResponded"].asString());
		auto inboundNode = value["Inbound"];
		if(!inboundNode["CallsIncomingLine"].isNull())
			instanceSummaryReportObject.inbound.callsIncomingLine = std::stol(inboundNode["CallsIncomingLine"].asString());
		if(!inboundNode["CallsIncomingIVR"].isNull())
			instanceSummaryReportObject.inbound.callsIncomingIVR = std::stol(inboundNode["CallsIncomingIVR"].asString());
		if(!inboundNode["CallsAbandonedInIVR"].isNull())
			instanceSummaryReportObject.inbound.callsAbandonedInIVR = std::stol(inboundNode["CallsAbandonedInIVR"].asString());
		if(!inboundNode["CallsIncomingQueue"].isNull())
			instanceSummaryReportObject.inbound.callsIncomingQueue = std::stol(inboundNode["CallsIncomingQueue"].asString());
		if(!inboundNode["CallsAbandonedInQueue"].isNull())
			instanceSummaryReportObject.inbound.callsAbandonedInQueue = std::stol(inboundNode["CallsAbandonedInQueue"].asString());
		if(!inboundNode["CallsOffered"].isNull())
			instanceSummaryReportObject.inbound.callsOffered = std::stol(inboundNode["CallsOffered"].asString());
		if(!inboundNode["CallsHandled"].isNull())
			instanceSummaryReportObject.inbound.callsHandled = std::stol(inboundNode["CallsHandled"].asString());
		if(!inboundNode["HandleRate"].isNull())
			instanceSummaryReportObject.inbound.handleRate = std::stof(inboundNode["HandleRate"].asString());
		if(!inboundNode["TotalRingTime"].isNull())
			instanceSummaryReportObject.inbound.totalRingTime = std::stol(inboundNode["TotalRingTime"].asString());
		if(!inboundNode["MaxRingTime"].isNull())
			instanceSummaryReportObject.inbound.maxRingTime = std::stol(inboundNode["MaxRingTime"].asString());
		if(!inboundNode["AverageRingTime"].isNull())
			instanceSummaryReportObject.inbound.averageRingTime = std::stol(inboundNode["AverageRingTime"].asString());
		if(!inboundNode["ServiceLevel20"].isNull())
			instanceSummaryReportObject.inbound.serviceLevel20 = std::stof(inboundNode["ServiceLevel20"].asString());
		if(!inboundNode["TotalTalkTime"].isNull())
			instanceSummaryReportObject.inbound.totalTalkTime = std::stol(inboundNode["TotalTalkTime"].asString());
		if(!inboundNode["MaxTalkTime"].isNull())
			instanceSummaryReportObject.inbound.maxTalkTime = inboundNode["MaxTalkTime"].asString();
		if(!inboundNode["AverageTalkTime"].isNull())
			instanceSummaryReportObject.inbound.averageTalkTime = std::stol(inboundNode["AverageTalkTime"].asString());
		if(!inboundNode["TotalWorkTime"].isNull())
			instanceSummaryReportObject.inbound.totalWorkTime = std::stol(inboundNode["TotalWorkTime"].asString());
		if(!inboundNode["MaxWorkTime"].isNull())
			instanceSummaryReportObject.inbound.maxWorkTime = std::stol(inboundNode["MaxWorkTime"].asString());
		if(!inboundNode["AverageWorkTime"].isNull())
			instanceSummaryReportObject.inbound.averageWorkTime = std::stol(inboundNode["AverageWorkTime"].asString());
		if(!inboundNode["SatisfactionIndex"].isNull())
			instanceSummaryReportObject.inbound.satisfactionIndex = std::stof(inboundNode["SatisfactionIndex"].asString());
		if(!inboundNode["SatisfactionSurveysOffered"].isNull())
			instanceSummaryReportObject.inbound.satisfactionSurveysOffered = std::stol(inboundNode["SatisfactionSurveysOffered"].asString());
		if(!inboundNode["SatisfactionSurveysResponded"].isNull())
			instanceSummaryReportObject.inbound.satisfactionSurveysResponded = std::stol(inboundNode["SatisfactionSurveysResponded"].asString());
		auto outboundNode = value["Outbound"];
		if(!outboundNode["CallsDialed"].isNull())
			instanceSummaryReportObject.outbound.callsDialed = std::stol(outboundNode["CallsDialed"].asString());
		if(!outboundNode["CallsAnswered"].isNull())
			instanceSummaryReportObject.outbound.callsAnswered = std::stol(outboundNode["CallsAnswered"].asString());
		if(!outboundNode["AnswerRate"].isNull())
			instanceSummaryReportObject.outbound.answerRate = std::stof(outboundNode["AnswerRate"].asString());
		if(!outboundNode["TotalDialingTime"].isNull())
			instanceSummaryReportObject.outbound.totalDialingTime = std::stol(outboundNode["TotalDialingTime"].asString());
		if(!outboundNode["MaxDialingTime"].isNull())
			instanceSummaryReportObject.outbound.maxDialingTime = std::stol(outboundNode["MaxDialingTime"].asString());
		if(!outboundNode["AverageDialingTime"].isNull())
			instanceSummaryReportObject.outbound.averageDialingTime = std::stol(outboundNode["AverageDialingTime"].asString());
		if(!outboundNode["TotalTalkTime"].isNull())
			instanceSummaryReportObject.outbound.totalTalkTime = std::stol(outboundNode["TotalTalkTime"].asString());
		if(!outboundNode["MaxTalkTime"].isNull())
			instanceSummaryReportObject.outbound.maxTalkTime = std::stol(outboundNode["MaxTalkTime"].asString());
		if(!outboundNode["AverageTalkTime"].isNull())
			instanceSummaryReportObject.outbound.averageTalkTime = std::stol(outboundNode["AverageTalkTime"].asString());
		if(!outboundNode["TotalWorkTime"].isNull())
			instanceSummaryReportObject.outbound.totalWorkTime = std::stol(outboundNode["TotalWorkTime"].asString());
		if(!outboundNode["MaxWorkTime"].isNull())
			instanceSummaryReportObject.outbound.maxWorkTime = std::stol(outboundNode["MaxWorkTime"].asString());
		if(!outboundNode["AverageWorkTime"].isNull())
			instanceSummaryReportObject.outbound.averageWorkTime = std::stol(outboundNode["AverageWorkTime"].asString());
		if(!outboundNode["SatisfactionIndex"].isNull())
			instanceSummaryReportObject.outbound.satisfactionIndex = std::stof(outboundNode["SatisfactionIndex"].asString());
		if(!outboundNode["SatisfactionSurveysOffered"].isNull())
			instanceSummaryReportObject.outbound.satisfactionSurveysOffered = std::stol(outboundNode["SatisfactionSurveysOffered"].asString());
		if(!outboundNode["SatisfactionSurveysResponded"].isNull())
			instanceSummaryReportObject.outbound.satisfactionSurveysResponded = std::stol(outboundNode["SatisfactionSurveysResponded"].asString());
		instanceTimeIntervalReport_.intervalList.push_back(instanceSummaryReportObject);
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

GetInstanceSummaryReportByIntervalResult::InstanceTimeIntervalReport GetInstanceSummaryReportByIntervalResult::getInstanceTimeIntervalReport()const
{
	return instanceTimeIntervalReport_;
}

std::string GetInstanceSummaryReportByIntervalResult::getMessage()const
{
	return message_;
}

int GetInstanceSummaryReportByIntervalResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetInstanceSummaryReportByIntervalResult::getCode()const
{
	return code_;
}

bool GetInstanceSummaryReportByIntervalResult::getSuccess()const
{
	return success_;
}

