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

#include <alibabacloud/ccc/model/ListCallMeasureSummaryReportsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListCallMeasureSummaryReportsResult::ListCallMeasureSummaryReportsResult() :
	ServiceResult()
{}

ListCallMeasureSummaryReportsResult::ListCallMeasureSummaryReportsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListCallMeasureSummaryReportsResult::~ListCallMeasureSummaryReportsResult()
{}

void ListCallMeasureSummaryReportsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allCallMeasureSummaryReportList = value["CallMeasureSummaryReportList"]["CallMeasureSummaryReport"];
	for (auto value : allCallMeasureSummaryReportList)
	{
		CallMeasureSummaryReport callMeasureSummaryReportListObject;
		if(!value["Year"].isNull())
			callMeasureSummaryReportListObject.year = value["Year"].asString();
		if(!value["Month"].isNull())
			callMeasureSummaryReportListObject.month = value["Month"].asString();
		if(!value["Day"].isNull())
			callMeasureSummaryReportListObject.day = value["Day"].asString();
		if(!value["InboundCount"].isNull())
			callMeasureSummaryReportListObject.inboundCount = std::stol(value["InboundCount"].asString());
		if(!value["OutboundCount"].isNull())
			callMeasureSummaryReportListObject.outboundCount = std::stol(value["OutboundCount"].asString());
		if(!value["OutboundDurationByMinute"].isNull())
			callMeasureSummaryReportListObject.outboundDurationByMinute = std::stol(value["OutboundDurationByMinute"].asString());
		if(!value["InboundDurationByMinute"].isNull())
			callMeasureSummaryReportListObject.inboundDurationByMinute = std::stol(value["InboundDurationByMinute"].asString());
		callMeasureSummaryReportList_.push_back(callMeasureSummaryReportListObject);
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

std::vector<ListCallMeasureSummaryReportsResult::CallMeasureSummaryReport> ListCallMeasureSummaryReportsResult::getCallMeasureSummaryReportList()const
{
	return callMeasureSummaryReportList_;
}

std::string ListCallMeasureSummaryReportsResult::getMessage()const
{
	return message_;
}

int ListCallMeasureSummaryReportsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListCallMeasureSummaryReportsResult::getCode()const
{
	return code_;
}

bool ListCallMeasureSummaryReportsResult::getSuccess()const
{
	return success_;
}

