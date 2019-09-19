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
	auto allSuspEventsNode = value["SuspEvents"]["SuspEventsItem"];
	for (auto valueSuspEventsSuspEventsItem : allSuspEventsNode)
	{
		SuspEventsItem suspEventsObject;
		if(!valueSuspEventsSuspEventsItem["AlarmUniqueInfo"].isNull())
			suspEventsObject.alarmUniqueInfo = valueSuspEventsSuspEventsItem["AlarmUniqueInfo"].asString();
		if(!valueSuspEventsSuspEventsItem["Solution"].isNull())
			suspEventsObject.solution = valueSuspEventsSuspEventsItem["Solution"].asString();
		if(!valueSuspEventsSuspEventsItem["Level"].isNull())
			suspEventsObject.level = valueSuspEventsSuspEventsItem["Level"].asString();
		if(!valueSuspEventsSuspEventsItem["CanBeDealOnLine"].isNull())
			suspEventsObject.canBeDealOnLine = valueSuspEventsSuspEventsItem["CanBeDealOnLine"].asString() == "true";
		if(!valueSuspEventsSuspEventsItem["Description"].isNull())
			suspEventsObject.description = valueSuspEventsSuspEventsItem["Description"].asString();
		if(!valueSuspEventsSuspEventsItem["StartTime"].isNull())
			suspEventsObject.startTime = std::stol(valueSuspEventsSuspEventsItem["StartTime"].asString());
		if(!valueSuspEventsSuspEventsItem["EndTime"].isNull())
			suspEventsObject.endTime = std::stol(valueSuspEventsSuspEventsItem["EndTime"].asString());
		if(!valueSuspEventsSuspEventsItem["AlarmEventType"].isNull())
			suspEventsObject.alarmEventType = valueSuspEventsSuspEventsItem["AlarmEventType"].asString();
		if(!valueSuspEventsSuspEventsItem["SuspiciousEventCount"].isNull())
			suspEventsObject.suspiciousEventCount = std::stoi(valueSuspEventsSuspEventsItem["SuspiciousEventCount"].asString());
		if(!valueSuspEventsSuspEventsItem["Uuid"].isNull())
			suspEventsObject.uuid = valueSuspEventsSuspEventsItem["Uuid"].asString();
		if(!valueSuspEventsSuspEventsItem["InstanceName"].isNull())
			suspEventsObject.instanceName = valueSuspEventsSuspEventsItem["InstanceName"].asString();
		if(!valueSuspEventsSuspEventsItem["InternetIp"].isNull())
			suspEventsObject.internetIp = valueSuspEventsSuspEventsItem["InternetIp"].asString();
		if(!valueSuspEventsSuspEventsItem["IntranetIp"].isNull())
			suspEventsObject.intranetIp = valueSuspEventsSuspEventsItem["IntranetIp"].asString();
		if(!valueSuspEventsSuspEventsItem["AlarmEventName"].isNull())
			suspEventsObject.alarmEventName = valueSuspEventsSuspEventsItem["AlarmEventName"].asString();
		if(!valueSuspEventsSuspEventsItem["SaleVersion"].isNull())
			suspEventsObject.saleVersion = valueSuspEventsSuspEventsItem["SaleVersion"].asString();
		if(!valueSuspEventsSuspEventsItem["DataSource"].isNull())
			suspEventsObject.dataSource = valueSuspEventsSuspEventsItem["DataSource"].asString();
		if(!valueSuspEventsSuspEventsItem["CanCancelFault"].isNull())
			suspEventsObject.canCancelFault = valueSuspEventsSuspEventsItem["CanCancelFault"].asString() == "true";
		if(!valueSuspEventsSuspEventsItem["Dealed"].isNull())
			suspEventsObject.dealed = valueSuspEventsSuspEventsItem["Dealed"].asString() == "true";
		if(!valueSuspEventsSuspEventsItem["GmtModified"].isNull())
			suspEventsObject.gmtModified = std::stol(valueSuspEventsSuspEventsItem["GmtModified"].asString());
		if(!valueSuspEventsSuspEventsItem["HasTraceInfo"].isNull())
			suspEventsObject.hasTraceInfo = valueSuspEventsSuspEventsItem["HasTraceInfo"].asString() == "true";
		if(!valueSuspEventsSuspEventsItem["SecurityEventIds"].isNull())
			suspEventsObject.securityEventIds = valueSuspEventsSuspEventsItem["SecurityEventIds"].asString();
		if(!valueSuspEventsSuspEventsItem["OperateErrorCode"].isNull())
			suspEventsObject.operateErrorCode = valueSuspEventsSuspEventsItem["OperateErrorCode"].asString();
		if(!valueSuspEventsSuspEventsItem["AlarmEventNameOriginal"].isNull())
			suspEventsObject.alarmEventNameOriginal = valueSuspEventsSuspEventsItem["AlarmEventNameOriginal"].asString();
		if(!valueSuspEventsSuspEventsItem["InstanceId"].isNull())
			suspEventsObject.instanceId = valueSuspEventsSuspEventsItem["InstanceId"].asString();
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

