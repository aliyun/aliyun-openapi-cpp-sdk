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

#include <alibabacloud/dataworks-public/model/GetSuccessInstanceTrendResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetSuccessInstanceTrendResult::GetSuccessInstanceTrendResult() :
	ServiceResult()
{}

GetSuccessInstanceTrendResult::GetSuccessInstanceTrendResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSuccessInstanceTrendResult::~GetSuccessInstanceTrendResult()
{}

void GetSuccessInstanceTrendResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto instanceStatusTrendNode = value["InstanceStatusTrend"];
	auto allTodayTrendNode = instanceStatusTrendNode["TodayTrend"]["TodayTrendItem"];
	for (auto instanceStatusTrendNodeTodayTrendTodayTrendItem : allTodayTrendNode)
	{
		InstanceStatusTrend::TodayTrendItem todayTrendItemObject;
		if(!instanceStatusTrendNodeTodayTrendTodayTrendItem["TimePoint"].isNull())
			todayTrendItemObject.timePoint = instanceStatusTrendNodeTodayTrendTodayTrendItem["TimePoint"].asString();
		if(!instanceStatusTrendNodeTodayTrendTodayTrendItem["Count"].isNull())
			todayTrendItemObject.count = std::stoi(instanceStatusTrendNodeTodayTrendTodayTrendItem["Count"].asString());
		instanceStatusTrend_.todayTrend.push_back(todayTrendItemObject);
	}
	auto allYesterdayTrendNode = instanceStatusTrendNode["YesterdayTrend"]["YesterdayTrendItem"];
	for (auto instanceStatusTrendNodeYesterdayTrendYesterdayTrendItem : allYesterdayTrendNode)
	{
		InstanceStatusTrend::YesterdayTrendItem yesterdayTrendItemObject;
		if(!instanceStatusTrendNodeYesterdayTrendYesterdayTrendItem["TimePoint"].isNull())
			yesterdayTrendItemObject.timePoint = instanceStatusTrendNodeYesterdayTrendYesterdayTrendItem["TimePoint"].asString();
		if(!instanceStatusTrendNodeYesterdayTrendYesterdayTrendItem["Count"].isNull())
			yesterdayTrendItemObject.count = std::stoi(instanceStatusTrendNodeYesterdayTrendYesterdayTrendItem["Count"].asString());
		instanceStatusTrend_.yesterdayTrend.push_back(yesterdayTrendItemObject);
	}
	auto allAvgTrendNode = instanceStatusTrendNode["AvgTrend"]["AvgTrendItem"];
	for (auto instanceStatusTrendNodeAvgTrendAvgTrendItem : allAvgTrendNode)
	{
		InstanceStatusTrend::AvgTrendItem avgTrendItemObject;
		if(!instanceStatusTrendNodeAvgTrendAvgTrendItem["TimePoint"].isNull())
			avgTrendItemObject.timePoint = instanceStatusTrendNodeAvgTrendAvgTrendItem["TimePoint"].asString();
		if(!instanceStatusTrendNodeAvgTrendAvgTrendItem["Count"].isNull())
			avgTrendItemObject.count = std::stoi(instanceStatusTrendNodeAvgTrendAvgTrendItem["Count"].asString());
		instanceStatusTrend_.avgTrend.push_back(avgTrendItemObject);
	}

}

GetSuccessInstanceTrendResult::InstanceStatusTrend GetSuccessInstanceTrendResult::getInstanceStatusTrend()const
{
	return instanceStatusTrend_;
}

