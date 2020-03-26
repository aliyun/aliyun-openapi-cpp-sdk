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

#include <alibabacloud/sas/model/DescribeSuspEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeSuspEventsResult::DescribeSuspEventsResult() :
	ServiceResult()
{}

DescribeSuspEventsResult::DescribeSuspEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSuspEventsResult::~DescribeSuspEventsResult()
{}

void DescribeSuspEventsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSuspEventsNode = value["SuspEvents"]["WarningSummary"];
	for (auto valueSuspEventsWarningSummary : allSuspEventsNode)
	{
		WarningSummary suspEventsObject;
		if(!valueSuspEventsWarningSummary["LastTime"].isNull())
			suspEventsObject.lastTime = valueSuspEventsWarningSummary["LastTime"].asString();
		if(!valueSuspEventsWarningSummary["OccurrenceTime"].isNull())
			suspEventsObject.occurrenceTime = valueSuspEventsWarningSummary["OccurrenceTime"].asString();
		if(!valueSuspEventsWarningSummary["Id"].isNull())
			suspEventsObject.id = std::stol(valueSuspEventsWarningSummary["Id"].asString());
		if(!valueSuspEventsWarningSummary["UniqueInfo"].isNull())
			suspEventsObject.uniqueInfo = valueSuspEventsWarningSummary["UniqueInfo"].asString();
		if(!valueSuspEventsWarningSummary["InstanceName"].isNull())
			suspEventsObject.instanceName = valueSuspEventsWarningSummary["InstanceName"].asString();
		if(!valueSuspEventsWarningSummary["InternetIp"].isNull())
			suspEventsObject.internetIp = valueSuspEventsWarningSummary["InternetIp"].asString();
		if(!valueSuspEventsWarningSummary["IntranetIp"].isNull())
			suspEventsObject.intranetIp = valueSuspEventsWarningSummary["IntranetIp"].asString();
		if(!valueSuspEventsWarningSummary["Uuid"].isNull())
			suspEventsObject.uuid = valueSuspEventsWarningSummary["Uuid"].asString();
		if(!valueSuspEventsWarningSummary["Name"].isNull())
			suspEventsObject.name = valueSuspEventsWarningSummary["Name"].asString();
		if(!valueSuspEventsWarningSummary["EventSubType"].isNull())
			suspEventsObject.eventSubType = valueSuspEventsWarningSummary["EventSubType"].asString();
		if(!valueSuspEventsWarningSummary["Level"].isNull())
			suspEventsObject.level = valueSuspEventsWarningSummary["Level"].asString();
		if(!valueSuspEventsWarningSummary["EventStatus"].isNull())
			suspEventsObject.eventStatus = std::stoi(valueSuspEventsWarningSummary["EventStatus"].asString());
		if(!valueSuspEventsWarningSummary["Desc"].isNull())
			suspEventsObject.desc = valueSuspEventsWarningSummary["Desc"].asString();
		if(!valueSuspEventsWarningSummary["OperateMsg"].isNull())
			suspEventsObject.operateMsg = valueSuspEventsWarningSummary["OperateMsg"].asString();
		if(!valueSuspEventsWarningSummary["DataSource"].isNull())
			suspEventsObject.dataSource = valueSuspEventsWarningSummary["DataSource"].asString();
		if(!valueSuspEventsWarningSummary["CanBeDealOnLine"].isNull())
			suspEventsObject.canBeDealOnLine = valueSuspEventsWarningSummary["CanBeDealOnLine"].asString() == "true";
		if(!valueSuspEventsWarningSummary["SaleVersion"].isNull())
			suspEventsObject.saleVersion = valueSuspEventsWarningSummary["SaleVersion"].asString();
		if(!valueSuspEventsWarningSummary["AlarmEventType"].isNull())
			suspEventsObject.alarmEventType = valueSuspEventsWarningSummary["AlarmEventType"].asString();
		if(!valueSuspEventsWarningSummary["AlarmEventName"].isNull())
			suspEventsObject.alarmEventName = valueSuspEventsWarningSummary["AlarmEventName"].asString();
		if(!valueSuspEventsWarningSummary["AlarmUniqueInfo"].isNull())
			suspEventsObject.alarmUniqueInfo = valueSuspEventsWarningSummary["AlarmUniqueInfo"].asString();
		if(!valueSuspEventsWarningSummary["Advanced"].isNull())
			suspEventsObject.advanced = valueSuspEventsWarningSummary["Advanced"].asString() == "true";
		suspEvents_.push_back(suspEventsObject);
	}
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());

}

int DescribeSuspEventsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeSuspEventsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeSuspEventsResult::getCurrentPage()const
{
	return currentPage_;
}

int DescribeSuspEventsResult::getCount()const
{
	return count_;
}

std::vector<DescribeSuspEventsResult::WarningSummary> DescribeSuspEventsResult::getSuspEvents()const
{
	return suspEvents_;
}

