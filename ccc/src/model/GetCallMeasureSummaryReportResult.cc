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

#include <alibabacloud/ccc/model/GetCallMeasureSummaryReportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetCallMeasureSummaryReportResult::GetCallMeasureSummaryReportResult() :
	ServiceResult()
{}

GetCallMeasureSummaryReportResult::GetCallMeasureSummaryReportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCallMeasureSummaryReportResult::~GetCallMeasureSummaryReportResult()
{}

void GetCallMeasureSummaryReportResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto summaryReportNode = value["SummaryReport"];
	if(!summaryReportNode["Year"].isNull())
		summaryReport_.year = std::stoi(summaryReportNode["Year"].asString());
	if(!summaryReportNode["Month"].isNull())
		summaryReport_.month = std::stoi(summaryReportNode["Month"].asString());
	if(!summaryReportNode["Day"].isNull())
		summaryReport_.day = std::stoi(summaryReportNode["Day"].asString());
	if(!summaryReportNode["InboundCount"].isNull())
		summaryReport_.inboundCount = std::stol(summaryReportNode["InboundCount"].asString());
	if(!summaryReportNode["OutboundCount"].isNull())
		summaryReport_.outboundCount = std::stol(summaryReportNode["OutboundCount"].asString());
	if(!summaryReportNode["OutboundDurationByMinute"].isNull())
		summaryReport_.outboundDurationByMinute = std::stol(summaryReportNode["OutboundDurationByMinute"].asString());
	if(!summaryReportNode["InboundDurationByMinute"].isNull())
		summaryReport_.inboundDurationByMinute = std::stol(summaryReportNode["InboundDurationByMinute"].asString());
	auto numberReportsNode = value["NumberReports"];
	if(!numberReportsNode["TotalCount"].isNull())
		numberReports_.totalCount = std::stoi(numberReportsNode["TotalCount"].asString());
	if(!numberReportsNode["PageNumber"].isNull())
		numberReports_.pageNumber = std::stoi(numberReportsNode["PageNumber"].asString());
	if(!numberReportsNode["PageSize"].isNull())
		numberReports_.pageSize = std::stoi(numberReportsNode["PageSize"].asString());
	auto allListNode = numberReportsNode["List"]["NumberReport"];
	for (auto numberReportsNodeListNumberReport : allListNode)
	{
		NumberReports::NumberReport numberReportObject;
		if(!numberReportsNodeListNumberReport["Number"].isNull())
			numberReportObject.number = numberReportsNodeListNumberReport["Number"].asString();
		if(!numberReportsNodeListNumberReport["Year"].isNull())
			numberReportObject.year = std::stoi(numberReportsNodeListNumberReport["Year"].asString());
		if(!numberReportsNodeListNumberReport["Month"].isNull())
			numberReportObject.month = std::stoi(numberReportsNodeListNumberReport["Month"].asString());
		if(!numberReportsNodeListNumberReport["Day"].isNull())
			numberReportObject.day = std::stoi(numberReportsNodeListNumberReport["Day"].asString());
		if(!numberReportsNodeListNumberReport["InboundCount"].isNull())
			numberReportObject.inboundCount = std::stol(numberReportsNodeListNumberReport["InboundCount"].asString());
		if(!numberReportsNodeListNumberReport["OutboundCount"].isNull())
			numberReportObject.outboundCount = std::stol(numberReportsNodeListNumberReport["OutboundCount"].asString());
		if(!numberReportsNodeListNumberReport["OutboundDurationByMinute"].isNull())
			numberReportObject.outboundDurationByMinute = std::stol(numberReportsNodeListNumberReport["OutboundDurationByMinute"].asString());
		if(!numberReportsNodeListNumberReport["InboundDurationByMinute"].isNull())
			numberReportObject.inboundDurationByMinute = std::stol(numberReportsNodeListNumberReport["InboundDurationByMinute"].asString());
		numberReports_.list.push_back(numberReportObject);
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

GetCallMeasureSummaryReportResult::NumberReports GetCallMeasureSummaryReportResult::getNumberReports()const
{
	return numberReports_;
}

GetCallMeasureSummaryReportResult::SummaryReport GetCallMeasureSummaryReportResult::getSummaryReport()const
{
	return summaryReport_;
}

std::string GetCallMeasureSummaryReportResult::getMessage()const
{
	return message_;
}

int GetCallMeasureSummaryReportResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetCallMeasureSummaryReportResult::getCode()const
{
	return code_;
}

bool GetCallMeasureSummaryReportResult::getSuccess()const
{
	return success_;
}

