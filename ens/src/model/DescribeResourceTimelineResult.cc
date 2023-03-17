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

#include <alibabacloud/ens/model/DescribeResourceTimelineResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeResourceTimelineResult::DescribeResourceTimelineResult() :
	ServiceResult()
{}

DescribeResourceTimelineResult::DescribeResourceTimelineResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeResourceTimelineResult::~DescribeResourceTimelineResult()
{}

void DescribeResourceTimelineResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAvailableEventsNode = value["AvailableEvents"]["AvailableEventsItem"];
	for (auto valueAvailableEventsAvailableEventsItem : allAvailableEventsNode)
	{
		AvailableEventsItem availableEventsObject;
		if(!valueAvailableEventsAvailableEventsItem["Name"].isNull())
			availableEventsObject.name = valueAvailableEventsAvailableEventsItem["Name"].asString();
		if(!valueAvailableEventsAvailableEventsItem["OccurrenceTime"].isNull())
			availableEventsObject.occurrenceTime = valueAvailableEventsAvailableEventsItem["OccurrenceTime"].asString();
		if(!valueAvailableEventsAvailableEventsItem["Reason"].isNull())
			availableEventsObject.reason = valueAvailableEventsAvailableEventsItem["Reason"].asString();
		if(!valueAvailableEventsAvailableEventsItem["Type"].isNull())
			availableEventsObject.type = valueAvailableEventsAvailableEventsItem["Type"].asString();
		availableEvents_.push_back(availableEventsObject);
	}
	auto allBizEventsNode = value["BizEvents"]["BizEventsItem"];
	for (auto valueBizEventsBizEventsItem : allBizEventsNode)
	{
		BizEventsItem bizEventsObject;
		if(!valueBizEventsBizEventsItem["Name"].isNull())
			bizEventsObject.name = valueBizEventsBizEventsItem["Name"].asString();
		if(!valueBizEventsBizEventsItem["OccurrenceTime"].isNull())
			bizEventsObject.occurrenceTime = valueBizEventsBizEventsItem["OccurrenceTime"].asString();
		if(!valueBizEventsBizEventsItem["Reason"].isNull())
			bizEventsObject.reason = valueBizEventsBizEventsItem["Reason"].asString();
		if(!valueBizEventsBizEventsItem["Type"].isNull())
			bizEventsObject.type = valueBizEventsBizEventsItem["Type"].asString();
		bizEvents_.push_back(bizEventsObject);
	}
	auto allInventoryEventsNode = value["InventoryEvents"]["InventoryEventsItem"];
	for (auto valueInventoryEventsInventoryEventsItem : allInventoryEventsNode)
	{
		InventoryEventsItem inventoryEventsObject;
		if(!valueInventoryEventsInventoryEventsItem["Name"].isNull())
			inventoryEventsObject.name = valueInventoryEventsInventoryEventsItem["Name"].asString();
		if(!valueInventoryEventsInventoryEventsItem["OccurrenceTime"].isNull())
			inventoryEventsObject.occurrenceTime = valueInventoryEventsInventoryEventsItem["OccurrenceTime"].asString();
		if(!valueInventoryEventsInventoryEventsItem["Reason"].isNull())
			inventoryEventsObject.reason = valueInventoryEventsInventoryEventsItem["Reason"].asString();
		if(!valueInventoryEventsInventoryEventsItem["Type"].isNull())
			inventoryEventsObject.type = valueInventoryEventsInventoryEventsItem["Type"].asString();
		inventoryEvents_.push_back(inventoryEventsObject);
	}
	auto allReserveEventsNode = value["ReserveEvents"]["ReserveEventsItem"];
	for (auto valueReserveEventsReserveEventsItem : allReserveEventsNode)
	{
		ReserveEventsItem reserveEventsObject;
		if(!valueReserveEventsReserveEventsItem["Name"].isNull())
			reserveEventsObject.name = valueReserveEventsReserveEventsItem["Name"].asString();
		if(!valueReserveEventsReserveEventsItem["OccurrenceTime"].isNull())
			reserveEventsObject.occurrenceTime = valueReserveEventsReserveEventsItem["OccurrenceTime"].asString();
		if(!valueReserveEventsReserveEventsItem["Reason"].isNull())
			reserveEventsObject.reason = valueReserveEventsReserveEventsItem["Reason"].asString();
		if(!valueReserveEventsReserveEventsItem["Type"].isNull())
			reserveEventsObject.type = valueReserveEventsReserveEventsItem["Type"].asString();
		reserveEvents_.push_back(reserveEventsObject);
	}
	if(!value["Msg"].isNull())
		msg_ = value["Msg"].asString();
	if(!value["Desc"].isNull())
		desc_ = value["Desc"].asString();

}

std::string DescribeResourceTimelineResult::getMsg()const
{
	return msg_;
}

std::string DescribeResourceTimelineResult::getDesc()const
{
	return desc_;
}

std::vector<DescribeResourceTimelineResult::InventoryEventsItem> DescribeResourceTimelineResult::getInventoryEvents()const
{
	return inventoryEvents_;
}

std::vector<DescribeResourceTimelineResult::AvailableEventsItem> DescribeResourceTimelineResult::getAvailableEvents()const
{
	return availableEvents_;
}

std::vector<DescribeResourceTimelineResult::BizEventsItem> DescribeResourceTimelineResult::getBizEvents()const
{
	return bizEvents_;
}

std::vector<DescribeResourceTimelineResult::ReserveEventsItem> DescribeResourceTimelineResult::getReserveEvents()const
{
	return reserveEvents_;
}

