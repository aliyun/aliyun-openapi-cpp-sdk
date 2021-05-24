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

#include <alibabacloud/ccc/model/GetHistoricalCallerReportResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

GetHistoricalCallerReportResult::GetHistoricalCallerReportResult() :
	ServiceResult()
{}

GetHistoricalCallerReportResult::GetHistoricalCallerReportResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetHistoricalCallerReportResult::~GetHistoricalCallerReportResult()
{}

void GetHistoricalCallerReportResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["LastCallingTime"].isNull())
		data_.lastCallingTime = std::stol(dataNode["LastCallingTime"].asString());
	if(!dataNode["TotalCalls"].isNull())
		data_.totalCalls = std::stol(dataNode["TotalCalls"].asString());
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetHistoricalCallerReportResult::getMessage()const
{
	return message_;
}

int GetHistoricalCallerReportResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetHistoricalCallerReportResult::Data GetHistoricalCallerReportResult::getData()const
{
	return data_;
}

std::string GetHistoricalCallerReportResult::getCode()const
{
	return code_;
}

