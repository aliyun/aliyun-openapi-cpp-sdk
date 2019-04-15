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

#include <alibabacloud/aegis/model/DescribeAlarmEventListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeAlarmEventListResult::DescribeAlarmEventListResult() :
	ServiceResult()
{}

DescribeAlarmEventListResult::DescribeAlarmEventListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAlarmEventListResult::~DescribeAlarmEventListResult()
{}

void DescribeAlarmEventListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allSuspEvents = value["SuspEvents"]["SuspEventsItem"];
	for (auto value : allSuspEvents)
	{
		SuspEventsItem suspEventsObject;
		if(!value["AlarmUniqueInfo"].isNull())
			suspEventsObject.alarmUniqueInfo = value["AlarmUniqueInfo"].asString();
		if(!value["Solution"].isNull())
			suspEventsObject.solution = value["Solution"].asString();
		if(!value["Level"].isNull())
			suspEventsObject.level = value["Level"].asString();
		if(!value["CanBeDealOnLine"].isNull())
			suspEventsObject.canBeDealOnLine = value["CanBeDealOnLine"].asString() == "true";
		if(!value["Description"].isNull())
			suspEventsObject.description = value["Description"].asString();
		if(!value["StartTime"].isNull())
			suspEventsObject.startTime = std::stol(value["StartTime"].asString());
		if(!value["EndTime"].isNull())
			suspEventsObject.endTime = std::stol(value["EndTime"].asString());
		if(!value["AlarmEventType"].isNull())
			suspEventsObject.alarmEventType = value["AlarmEventType"].asString();
		if(!value["SuspiciousEventCount"].isNull())
			suspEventsObject.suspiciousEventCount = std::stoi(value["SuspiciousEventCount"].asString());
		if(!value["Uuid"].isNull())
			suspEventsObject.uuid = value["Uuid"].asString();
		if(!value["InstanceName"].isNull())
			suspEventsObject.instanceName = value["InstanceName"].asString();
		if(!value["InternetIp"].isNull())
			suspEventsObject.internetIp = value["InternetIp"].asString();
		if(!value["IntranetIp"].isNull())
			suspEventsObject.intranetIp = value["IntranetIp"].asString();
		if(!value["AlarmEventName"].isNull())
			suspEventsObject.alarmEventName = value["AlarmEventName"].asString();
		if(!value["SaleVersion"].isNull())
			suspEventsObject.saleVersion = value["SaleVersion"].asString();
		if(!value["DataSource"].isNull())
			suspEventsObject.dataSource = value["DataSource"].asString();
		if(!value["CanCancelFault"].isNull())
			suspEventsObject.canCancelFault = value["CanCancelFault"].asString() == "true";
		if(!value["Dealed"].isNull())
			suspEventsObject.dealed = value["Dealed"].asString() == "true";
		if(!value["GmtModified"].isNull())
			suspEventsObject.gmtModified = std::stol(value["GmtModified"].asString());
		if(!value["HasTraceInfo"].isNull())
			suspEventsObject.hasTraceInfo = value["HasTraceInfo"].asString() == "true";
		suspEvents_.push_back(suspEventsObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());

}

DescribeAlarmEventListResult::PageInfo DescribeAlarmEventListResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<DescribeAlarmEventListResult::SuspEventsItem> DescribeAlarmEventListResult::getSuspEvents()const
{
	return suspEvents_;
}

