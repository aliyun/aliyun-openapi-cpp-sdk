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

#include <alibabacloud/rds/model/DescribeSlotsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeSlotsResult::DescribeSlotsResult() :
	ServiceResult()
{}

DescribeSlotsResult::DescribeSlotsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSlotsResult::~DescribeSlotsResult()
{}

void DescribeSlotsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSlotsNode = value["Slots"]["Slot"];
	for (auto valueSlotsSlot : allSlotsNode)
	{
		Slot slotsObject;
		if(!valueSlotsSlot["Database"].isNull())
			slotsObject.database = valueSlotsSlot["Database"].asString();
		if(!valueSlotsSlot["Plugin"].isNull())
			slotsObject.plugin = valueSlotsSlot["Plugin"].asString();
		if(!valueSlotsSlot["SlotName"].isNull())
			slotsObject.slotName = valueSlotsSlot["SlotName"].asString();
		if(!valueSlotsSlot["SlotStatus"].isNull())
			slotsObject.slotStatus = valueSlotsSlot["SlotStatus"].asString();
		if(!valueSlotsSlot["SlotType"].isNull())
			slotsObject.slotType = valueSlotsSlot["SlotType"].asString();
		if(!valueSlotsSlot["SubReplayLag"].isNull())
			slotsObject.subReplayLag = valueSlotsSlot["SubReplayLag"].asString();
		if(!valueSlotsSlot["Temporary"].isNull())
			slotsObject.temporary = valueSlotsSlot["Temporary"].asString();
		if(!valueSlotsSlot["WalDelay"].isNull())
			slotsObject.walDelay = valueSlotsSlot["WalDelay"].asString();
		slots_.push_back(slotsObject);
	}

}

std::vector<DescribeSlotsResult::Slot> DescribeSlotsResult::getSlots()const
{
	return slots_;
}

