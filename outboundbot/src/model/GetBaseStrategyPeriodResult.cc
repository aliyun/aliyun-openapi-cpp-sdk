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

#include <alibabacloud/outboundbot/model/GetBaseStrategyPeriodResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

GetBaseStrategyPeriodResult::GetBaseStrategyPeriodResult() :
	ServiceResult()
{}

GetBaseStrategyPeriodResult::GetBaseStrategyPeriodResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetBaseStrategyPeriodResult::~GetBaseStrategyPeriodResult()
{}

void GetBaseStrategyPeriodResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allWorkingTimeNode = value["WorkingTime"]["TimeFrame"];
	for (auto valueWorkingTimeTimeFrame : allWorkingTimeNode)
	{
		TimeFrame workingTimeObject;
		if(!valueWorkingTimeTimeFrame["EndTime"].isNull())
			workingTimeObject.endTime = valueWorkingTimeTimeFrame["EndTime"].asString();
		if(!valueWorkingTimeTimeFrame["BeginTimeMillis"].isNull())
			workingTimeObject.beginTimeMillis = std::stol(valueWorkingTimeTimeFrame["BeginTimeMillis"].asString());
		if(!valueWorkingTimeTimeFrame["EndTimeMillis"].isNull())
			workingTimeObject.endTimeMillis = std::stol(valueWorkingTimeTimeFrame["EndTimeMillis"].asString());
		if(!valueWorkingTimeTimeFrame["BeginTime"].isNull())
			workingTimeObject.beginTime = valueWorkingTimeTimeFrame["BeginTime"].asString();
		workingTime_.push_back(workingTimeObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["OnlyWeekdays"].isNull())
		onlyWeekdays_ = value["OnlyWeekdays"].asString() == "true";
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::vector<GetBaseStrategyPeriodResult::TimeFrame> GetBaseStrategyPeriodResult::getWorkingTime()const
{
	return workingTime_;
}

std::string GetBaseStrategyPeriodResult::getMessage()const
{
	return message_;
}

bool GetBaseStrategyPeriodResult::getOnlyWeekdays()const
{
	return onlyWeekdays_;
}

int GetBaseStrategyPeriodResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string GetBaseStrategyPeriodResult::getCode()const
{
	return code_;
}

bool GetBaseStrategyPeriodResult::getSuccess()const
{
	return success_;
}

