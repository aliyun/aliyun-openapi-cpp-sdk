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

#include <alibabacloud/yundun-ds/model/DescribeEventTotalCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Yundun_ds;
using namespace AlibabaCloud::Yundun_ds::Model;

DescribeEventTotalCountResult::DescribeEventTotalCountResult() :
	ServiceResult()
{}

DescribeEventTotalCountResult::DescribeEventTotalCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEventTotalCountResult::~DescribeEventTotalCountResult()
{}

void DescribeEventTotalCountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto eventCountNode = value["EventCount"];
	if(!eventCountNode["TypeCode"].isNull())
		eventCount_.typeCode = eventCountNode["TypeCode"].asString();
	if(!eventCountNode["TypeName"].isNull())
		eventCount_.typeName = eventCountNode["TypeName"].asString();
	if(!eventCountNode["Date"].isNull())
		eventCount_.date = std::stol(eventCountNode["Date"].asString());
	auto totalNode = eventCountNode["Total"];
	if(!totalNode["TotalCount"].isNull())
		eventCount_.total.totalCount = std::stol(totalNode["TotalCount"].asString());
	if(!totalNode["UndealCount"].isNull())
		eventCount_.total.undealCount = std::stol(totalNode["UndealCount"].asString());
	if(!totalNode["ConfirmCount"].isNull())
		eventCount_.total.confirmCount = std::stol(totalNode["ConfirmCount"].asString());
	if(!totalNode["ExcludeCount"].isNull())
		eventCount_.total.excludeCount = std::stol(totalNode["ExcludeCount"].asString());
	auto lastDayNode = eventCountNode["LastDay"];
	if(!lastDayNode["TotalCount"].isNull())
		eventCount_.lastDay.totalCount = std::stol(lastDayNode["TotalCount"].asString());
	if(!lastDayNode["UndealCount"].isNull())
		eventCount_.lastDay.undealCount = std::stol(lastDayNode["UndealCount"].asString());
	if(!lastDayNode["ConfirmCount"].isNull())
		eventCount_.lastDay.confirmCount = std::stol(lastDayNode["ConfirmCount"].asString());
	if(!lastDayNode["ExcludeCount"].isNull())
		eventCount_.lastDay.excludeCount = std::stol(lastDayNode["ExcludeCount"].asString());
	auto lastWeekNode = eventCountNode["LastWeek"];
	if(!lastWeekNode["TotalCount"].isNull())
		eventCount_.lastWeek.totalCount = std::stol(lastWeekNode["TotalCount"].asString());
	if(!lastWeekNode["UndealCount"].isNull())
		eventCount_.lastWeek.undealCount = std::stol(lastWeekNode["UndealCount"].asString());
	if(!lastWeekNode["ConfirmCount"].isNull())
		eventCount_.lastWeek.confirmCount = std::stol(lastWeekNode["ConfirmCount"].asString());
	if(!lastWeekNode["ExcludeCount"].isNull())
		eventCount_.lastWeek.excludeCount = std::stol(lastWeekNode["ExcludeCount"].asString());
	auto lastMonthNode = eventCountNode["LastMonth"];
	if(!lastMonthNode["TotalCount"].isNull())
		eventCount_.lastMonth.totalCount = std::stol(lastMonthNode["TotalCount"].asString());
	if(!lastMonthNode["UndealCount"].isNull())
		eventCount_.lastMonth.undealCount = std::stol(lastMonthNode["UndealCount"].asString());
	if(!lastMonthNode["ConfirmCount"].isNull())
		eventCount_.lastMonth.confirmCount = std::stol(lastMonthNode["ConfirmCount"].asString());
	if(!lastMonthNode["ExcludeCount"].isNull())
		eventCount_.lastMonth.excludeCount = std::stol(lastMonthNode["ExcludeCount"].asString());

}

DescribeEventTotalCountResult::EventCount DescribeEventTotalCountResult::getEventCount()const
{
	return eventCount_;
}

