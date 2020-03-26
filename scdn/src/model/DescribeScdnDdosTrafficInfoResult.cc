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

#include <alibabacloud/scdn/model/DescribeScdnDdosTrafficInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Scdn;
using namespace AlibabaCloud::Scdn::Model;

DescribeScdnDdosTrafficInfoResult::DescribeScdnDdosTrafficInfoResult() :
	ServiceResult()
{}

DescribeScdnDdosTrafficInfoResult::DescribeScdnDdosTrafficInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScdnDdosTrafficInfoResult::~DescribeScdnDdosTrafficInfoResult()
{}

void DescribeScdnDdosTrafficInfoResult::parse(const std::string &payload)
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
	auto allBpsDrops = value["BpsDrops"]["BpsDrop"];
	for (const auto &item : allBpsDrops)
		bpsDrops_.push_back(item.asString());
	auto allBpsTotals = value["BpsTotals"]["BpsTotal"];
	for (const auto &item : allBpsTotals)
		bpsTotals_.push_back(item.asString());
	auto allPpsTotals = value["PpsTotals"]["PpsTotal"];
	for (const auto &item : allPpsTotals)
		ppsTotals_.push_back(item.asString());
	auto allPpsDrops = value["PpsDrops"]["PpsDrop"];
	for (const auto &item : allPpsDrops)
		ppsDrops_.push_back(item.asString());

}

std::vector<DescribeScdnDdosTrafficInfoResult::TimeScope> DescribeScdnDdosTrafficInfoResult::getTimeScopes()const
{
	return timeScopes_;
}

std::vector<std::string> DescribeScdnDdosTrafficInfoResult::getBpsDrops()const
{
	return bpsDrops_;
}

std::vector<std::string> DescribeScdnDdosTrafficInfoResult::getPpsDrops()const
{
	return ppsDrops_;
}

std::vector<std::string> DescribeScdnDdosTrafficInfoResult::getBpsTotals()const
{
	return bpsTotals_;
}

std::vector<std::string> DescribeScdnDdosTrafficInfoResult::getPpsTotals()const
{
	return ppsTotals_;
}

