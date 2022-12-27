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
	auto allAvailableEventsNode = value["AvailableEvents"]["可用性事件"];
	for (auto valueAvailableEvents可用性事件 : allAvailableEventsNode)
	{
		可用性事件 availableEventsObject;
		if(!valueAvailableEvents可用性事件["Name"].isNull())
			availableEventsObject.name = valueAvailableEvents可用性事件["Name"].asString();
		if(!valueAvailableEvents可用性事件["OccurrenceTime"].isNull())
			availableEventsObject.occurrenceTime = valueAvailableEvents可用性事件["OccurrenceTime"].asString();
		if(!valueAvailableEvents可用性事件["Reason"].isNull())
			availableEventsObject.reason = valueAvailableEvents可用性事件["Reason"].asString();
		if(!valueAvailableEvents可用性事件["Type"].isNull())
			availableEventsObject.type = valueAvailableEvents可用性事件["Type"].asString();
		availableEvents_.push_back(availableEventsObject);
	}
	auto allBizEventsNode = value["BizEvents"]["建设状态事件"];
	for (auto valueBizEvents建设状态事件 : allBizEventsNode)
	{
		建设状态事件 bizEventsObject;
		if(!valueBizEvents建设状态事件["Name"].isNull())
			bizEventsObject.name = valueBizEvents建设状态事件["Name"].asString();
		if(!valueBizEvents建设状态事件["OccurrenceTime"].isNull())
			bizEventsObject.occurrenceTime = valueBizEvents建设状态事件["OccurrenceTime"].asString();
		if(!valueBizEvents建设状态事件["Reason"].isNull())
			bizEventsObject.reason = valueBizEvents建设状态事件["Reason"].asString();
		if(!valueBizEvents建设状态事件["Type"].isNull())
			bizEventsObject.type = valueBizEvents建设状态事件["Type"].asString();
		bizEvents_.push_back(bizEventsObject);
	}
	auto allInventoryEventsNode = value["InventoryEvents"]["资源扣减事件"];
	for (auto valueInventoryEvents资源扣减事件 : allInventoryEventsNode)
	{
		资源扣减事件 inventoryEventsObject;
		if(!valueInventoryEvents资源扣减事件["Name"].isNull())
			inventoryEventsObject.name = valueInventoryEvents资源扣减事件["Name"].asString();
		if(!valueInventoryEvents资源扣减事件["OccurrenceTime"].isNull())
			inventoryEventsObject.occurrenceTime = valueInventoryEvents资源扣减事件["OccurrenceTime"].asString();
		if(!valueInventoryEvents资源扣减事件["Reason"].isNull())
			inventoryEventsObject.reason = valueInventoryEvents资源扣减事件["Reason"].asString();
		if(!valueInventoryEvents资源扣减事件["Type"].isNull())
			inventoryEventsObject.type = valueInventoryEvents资源扣减事件["Type"].asString();
		inventoryEvents_.push_back(inventoryEventsObject);
	}
	auto allReserveEventsNode = value["ReserveEvents"]["资源预留事件"];
	for (auto valueReserveEvents资源预留事件 : allReserveEventsNode)
	{
		资源预留事件 reserveEventsObject;
		if(!valueReserveEvents资源预留事件["Name"].isNull())
			reserveEventsObject.name = valueReserveEvents资源预留事件["Name"].asString();
		if(!valueReserveEvents资源预留事件["OccurrenceTime"].isNull())
			reserveEventsObject.occurrenceTime = valueReserveEvents资源预留事件["OccurrenceTime"].asString();
		if(!valueReserveEvents资源预留事件["Reason"].isNull())
			reserveEventsObject.reason = valueReserveEvents资源预留事件["Reason"].asString();
		if(!valueReserveEvents资源预留事件["Type"].isNull())
			reserveEventsObject.type = valueReserveEvents资源预留事件["Type"].asString();
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

std::vector<DescribeResourceTimelineResult::资源扣减事件> DescribeResourceTimelineResult::getInventoryEvents()const
{
	return inventoryEvents_;
}

std::vector<DescribeResourceTimelineResult::可用性事件> DescribeResourceTimelineResult::getAvailableEvents()const
{
	return availableEvents_;
}

std::vector<DescribeResourceTimelineResult::建设状态事件> DescribeResourceTimelineResult::getBizEvents()const
{
	return bizEvents_;
}

std::vector<DescribeResourceTimelineResult::资源预留事件> DescribeResourceTimelineResult::getReserveEvents()const
{
	return reserveEvents_;
}

