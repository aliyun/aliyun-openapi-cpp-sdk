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

#include <alibabacloud/pts/model/GetJMeterSamplingLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::PTS;
using namespace AlibabaCloud::PTS::Model;

GetJMeterSamplingLogsResult::GetJMeterSamplingLogsResult() :
	ServiceResult()
{}

GetJMeterSamplingLogsResult::GetJMeterSamplingLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetJMeterSamplingLogsResult::~GetJMeterSamplingLogsResult()
{}

void GetJMeterSamplingLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSampleResults = value["SampleResults"]["JMeterSampleResult"];
	for (const auto &item : allSampleResults)
		sampleResults_.push_back(item.asString());
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

long GetJMeterSamplingLogsResult::getTotalCount()const
{
	return totalCount_;
}

std::string GetJMeterSamplingLogsResult::getMessage()const
{
	return message_;
}

int GetJMeterSamplingLogsResult::getPageSize()const
{
	return pageSize_;
}

int GetJMeterSamplingLogsResult::getPageNumber()const
{
	return pageNumber_;
}

int GetJMeterSamplingLogsResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<std::string> GetJMeterSamplingLogsResult::getSampleResults()const
{
	return sampleResults_;
}

std::string GetJMeterSamplingLogsResult::getCode()const
{
	return code_;
}

bool GetJMeterSamplingLogsResult::getSuccess()const
{
	return success_;
}

