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

#include <alibabacloud/yundun-ds/model/DescribeEventCountsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Yundun_ds;
using namespace AlibabaCloud::Yundun_ds::Model;

DescribeEventCountsResult::DescribeEventCountsResult() :
	ServiceResult()
{}

DescribeEventCountsResult::DescribeEventCountsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEventCountsResult::~DescribeEventCountsResult()
{}

void DescribeEventCountsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEventCountListNode = value["EventCountList"]["EventCount"];
	for (auto valueEventCountListEventCount : allEventCountListNode)
	{
		EventCount eventCountListObject;
		if(!valueEventCountListEventCount["TypeCode"].isNull())
			eventCountListObject.typeCode = valueEventCountListEventCount["TypeCode"].asString();
		if(!valueEventCountListEventCount["TypeName"].isNull())
			eventCountListObject.typeName = valueEventCountListEventCount["TypeName"].asString();
		if(!valueEventCountListEventCount["Date"].isNull())
			eventCountListObject.date = std::stol(valueEventCountListEventCount["Date"].asString());
		auto totalNode = value["Total"];
		if(!totalNode["TotalCount"].isNull())
			eventCountListObject.total.totalCount = std::stol(totalNode["TotalCount"].asString());
		if(!totalNode["UndealCount"].isNull())
			eventCountListObject.total.undealCount = std::stol(totalNode["UndealCount"].asString());
		if(!totalNode["ConfirmCount"].isNull())
			eventCountListObject.total.confirmCount = std::stol(totalNode["ConfirmCount"].asString());
		if(!totalNode["ExcludeCount"].isNull())
			eventCountListObject.total.excludeCount = std::stol(totalNode["ExcludeCount"].asString());
		auto lastDayNode = value["LastDay"];
		if(!lastDayNode["TotalCount"].isNull())
			eventCountListObject.lastDay.totalCount = std::stol(lastDayNode["TotalCount"].asString());
		if(!lastDayNode["UndealCount"].isNull())
			eventCountListObject.lastDay.undealCount = std::stol(lastDayNode["UndealCount"].asString());
		if(!lastDayNode["ConfirmCount"].isNull())
			eventCountListObject.lastDay.confirmCount = std::stol(lastDayNode["ConfirmCount"].asString());
		if(!lastDayNode["ExcludeCount"].isNull())
			eventCountListObject.lastDay.excludeCount = std::stol(lastDayNode["ExcludeCount"].asString());
		auto lastWeekNode = value["LastWeek"];
		if(!lastWeekNode["TotalCount"].isNull())
			eventCountListObject.lastWeek.totalCount = std::stol(lastWeekNode["TotalCount"].asString());
		if(!lastWeekNode["UndealCount"].isNull())
			eventCountListObject.lastWeek.undealCount = std::stol(lastWeekNode["UndealCount"].asString());
		if(!lastWeekNode["ConfirmCount"].isNull())
			eventCountListObject.lastWeek.confirmCount = std::stol(lastWeekNode["ConfirmCount"].asString());
		if(!lastWeekNode["ExcludeCount"].isNull())
			eventCountListObject.lastWeek.excludeCount = std::stol(lastWeekNode["ExcludeCount"].asString());
		auto lastMonthNode = value["LastMonth"];
		if(!lastMonthNode["TotalCount"].isNull())
			eventCountListObject.lastMonth.totalCount = std::stol(lastMonthNode["TotalCount"].asString());
		if(!lastMonthNode["UndealCount"].isNull())
			eventCountListObject.lastMonth.undealCount = std::stol(lastMonthNode["UndealCount"].asString());
		if(!lastMonthNode["ConfirmCount"].isNull())
			eventCountListObject.lastMonth.confirmCount = std::stol(lastMonthNode["ConfirmCount"].asString());
		if(!lastMonthNode["ExcludeCount"].isNull())
			eventCountListObject.lastMonth.excludeCount = std::stol(lastMonthNode["ExcludeCount"].asString());
		eventCountList_.push_back(eventCountListObject);
	}

}

std::vector<DescribeEventCountsResult::EventCount> DescribeEventCountsResult::getEventCountList()const
{
	return eventCountList_;
}

