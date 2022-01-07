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

#include <alibabacloud/dypnsapi/model/QueryGateVerifyStatisticPublicResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dypnsapi;
using namespace AlibabaCloud::Dypnsapi::Model;

QueryGateVerifyStatisticPublicResult::QueryGateVerifyStatisticPublicResult() :
	ServiceResult()
{}

QueryGateVerifyStatisticPublicResult::QueryGateVerifyStatisticPublicResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryGateVerifyStatisticPublicResult::~QueryGateVerifyStatisticPublicResult()
{}

void QueryGateVerifyStatisticPublicResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TotalFail"].isNull())
		data_.totalFail = std::stol(dataNode["TotalFail"].asString());
	if(!dataNode["Total"].isNull())
		data_.total = std::stol(dataNode["Total"].asString());
	if(!dataNode["TotalSuccess"].isNull())
		data_.totalSuccess = std::stol(dataNode["TotalSuccess"].asString());
	if(!dataNode["TotalUnknown"].isNull())
		data_.totalUnknown = std::stol(dataNode["TotalUnknown"].asString());
	auto allDayStatisticNode = dataNode["DayStatistic"]["DayStatisticItem"];
	for (auto dataNodeDayStatisticDayStatisticItem : allDayStatisticNode)
	{
		Data::DayStatisticItem dayStatisticItemObject;
		if(!dataNodeDayStatisticDayStatisticItem["StatisticDateStr"].isNull())
			dayStatisticItemObject.statisticDateStr = dataNodeDayStatisticDayStatisticItem["StatisticDateStr"].asString();
		if(!dataNodeDayStatisticDayStatisticItem["TotalSuccess"].isNull())
			dayStatisticItemObject.totalSuccess = std::stol(dataNodeDayStatisticDayStatisticItem["TotalSuccess"].asString());
		if(!dataNodeDayStatisticDayStatisticItem["TotalFail"].isNull())
			dayStatisticItemObject.totalFail = std::stol(dataNodeDayStatisticDayStatisticItem["TotalFail"].asString());
		if(!dataNodeDayStatisticDayStatisticItem["TotalUnknown"].isNull())
			dayStatisticItemObject.totalUnknown = std::stol(dataNodeDayStatisticDayStatisticItem["TotalUnknown"].asString());
		data_.dayStatistic.push_back(dayStatisticItemObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string QueryGateVerifyStatisticPublicResult::getMessage()const
{
	return message_;
}

QueryGateVerifyStatisticPublicResult::Data QueryGateVerifyStatisticPublicResult::getData()const
{
	return data_;
}

std::string QueryGateVerifyStatisticPublicResult::getCode()const
{
	return code_;
}

