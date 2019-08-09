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

#include <alibabacloud/aegis/model/DescribeSuspEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allSuspEvents = value["SuspEvents"]["WarningSummary"];
	for (auto value : allSuspEvents)
	{
		WarningSummary suspEventsObject;
		if(!value["LastTime"].isNull())
			suspEventsObject.lastTime = value["LastTime"].asString();
		if(!value["OccurrenceTime"].isNull())
			suspEventsObject.occurrenceTime = value["OccurrenceTime"].asString();
		if(!value["Id"].isNull())
			suspEventsObject.id = std::stol(value["Id"].asString());
		if(!value["InstanceName"].isNull())
			suspEventsObject.instanceName = value["InstanceName"].asString();
		if(!value["InternetIp"].isNull())
			suspEventsObject.internetIp = value["InternetIp"].asString();
		if(!value["IntranetIp"].isNull())
			suspEventsObject.intranetIp = value["IntranetIp"].asString();
		if(!value["Uuid"].isNull())
			suspEventsObject.uuid = value["Uuid"].asString();
		if(!value["Name"].isNull())
			suspEventsObject.name = value["Name"].asString();
		if(!value["EventSubType"].isNull())
			suspEventsObject.eventSubType = value["EventSubType"].asString();
		if(!value["Level"].isNull())
			suspEventsObject.level = value["Level"].asString();
		if(!value["EventStatus"].isNull())
			suspEventsObject.eventStatus = std::stoi(value["EventStatus"].asString());
		if(!value["Desc"].isNull())
			suspEventsObject.desc = value["Desc"].asString();
		if(!value["OperateMsg"].isNull())
			suspEventsObject.operateMsg = value["OperateMsg"].asString();
		if(!value["DataSource"].isNull())
			suspEventsObject.dataSource = value["DataSource"].asString();
		if(!value["CanBeDealOnLine"].isNull())
			suspEventsObject.canBeDealOnLine = value["CanBeDealOnLine"].asString() == "true";
		if(!value["SaleVersion"].isNull())
			suspEventsObject.saleVersion = value["SaleVersion"].asString();
		if(!value["AlarmEventType"].isNull())
			suspEventsObject.alarmEventType = value["AlarmEventType"].asString();
		if(!value["AlarmEventName"].isNull())
			suspEventsObject.alarmEventName = value["AlarmEventName"].asString();
		if(!value["AlarmUniqueInfo"].isNull())
			suspEventsObject.alarmUniqueInfo = value["AlarmUniqueInfo"].asString();
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

