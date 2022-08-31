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

#include <alibabacloud/scdn/model/DescribeScdnCcQpsInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scdn;
using namespace AlibabaCloud::Scdn::Model;

DescribeScdnCcQpsInfoResult::DescribeScdnCcQpsInfoResult() :
	ServiceResult()
{}

DescribeScdnCcQpsInfoResult::DescribeScdnCcQpsInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScdnCcQpsInfoResult::~DescribeScdnCcQpsInfoResult()
{}

void DescribeScdnCcQpsInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTimeScopesNode = value["TimeScopes"]["TimeScope"];
	for (auto valueTimeScopesTimeScope : allTimeScopesNode)
	{
		TimeScope timeScopesObject;
		if(!valueTimeScopesTimeScope["Interval"].isNull())
			timeScopesObject.interval = valueTimeScopesTimeScope["Interval"].asString();
		if(!valueTimeScopesTimeScope["Start"].isNull())
			timeScopesObject.start = valueTimeScopesTimeScope["Start"].asString();
		timeScopes_.push_back(timeScopesObject);
	}
	auto allAttacks = value["Attacks"]["Attack"];
	for (const auto &item : allAttacks)
		attacks_.push_back(item.asString());
	auto allTotals = value["Totals"]["Total"];
	for (const auto &item : allTotals)
		totals_.push_back(item.asString());

}

std::vector<DescribeScdnCcQpsInfoResult::TimeScope> DescribeScdnCcQpsInfoResult::getTimeScopes()const
{
	return timeScopes_;
}

std::vector<std::string> DescribeScdnCcQpsInfoResult::getTotals()const
{
	return totals_;
}

std::vector<std::string> DescribeScdnCcQpsInfoResult::getAttacks()const
{
	return attacks_;
}

