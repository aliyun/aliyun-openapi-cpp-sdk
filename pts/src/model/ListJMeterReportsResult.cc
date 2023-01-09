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

#include <alibabacloud/pts/model/ListJMeterReportsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PTS;
using namespace AlibabaCloud::PTS::Model;

ListJMeterReportsResult::ListJMeterReportsResult() :
	ServiceResult()
{}

ListJMeterReportsResult::ListJMeterReportsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListJMeterReportsResult::~ListJMeterReportsResult()
{}

void ListJMeterReportsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allReportsNode = value["Reports"]["JMeterReportView"];
	for (auto valueReportsJMeterReportView : allReportsNode)
	{
		JMeterReportView reportsObject;
		if(!valueReportsJMeterReportView["ReportName"].isNull())
			reportsObject.reportName = valueReportsJMeterReportView["ReportName"].asString();
		if(!valueReportsJMeterReportView["Duration"].isNull())
			reportsObject.duration = valueReportsJMeterReportView["Duration"].asString();
		if(!valueReportsJMeterReportView["ReportId"].isNull())
			reportsObject.reportId = valueReportsJMeterReportView["ReportId"].asString();
		if(!valueReportsJMeterReportView["Vum"].isNull())
			reportsObject.vum = std::stol(valueReportsJMeterReportView["Vum"].asString());
		if(!valueReportsJMeterReportView["ActualStartTime"].isNull())
			reportsObject.actualStartTime = std::stol(valueReportsJMeterReportView["ActualStartTime"].asString());
		reports_.push_back(reportsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

long ListJMeterReportsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListJMeterReportsResult::getMessage()const
{
	return message_;
}

int ListJMeterReportsResult::getPageSize()const
{
	return pageSize_;
}

int ListJMeterReportsResult::getPageNumber()const
{
	return pageNumber_;
}

int ListJMeterReportsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListJMeterReportsResult::JMeterReportView> ListJMeterReportsResult::getReports()const
{
	return reports_;
}

std::string ListJMeterReportsResult::getCode()const
{
	return code_;
}

bool ListJMeterReportsResult::getSuccess()const
{
	return success_;
}

