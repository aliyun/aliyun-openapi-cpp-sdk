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

#include <alibabacloud/edas/model/ListSwimmingLaneResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

ListSwimmingLaneResult::ListSwimmingLaneResult() :
	ServiceResult()
{}

ListSwimmingLaneResult::ListSwimmingLaneResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSwimmingLaneResult::~ListSwimmingLaneResult()
{}

void ListSwimmingLaneResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["SwimmingLane"];
	for (auto valueDataSwimmingLane : allDataNode)
	{
		SwimmingLane dataObject;
		if(!valueDataSwimmingLane["Id"].isNull())
			dataObject.id = std::stol(valueDataSwimmingLane["Id"].asString());
		if(!valueDataSwimmingLane["Name"].isNull())
			dataObject.name = valueDataSwimmingLane["Name"].asString();
		if(!valueDataSwimmingLane["Tag"].isNull())
			dataObject.tag = valueDataSwimmingLane["Tag"].asString();
		if(!valueDataSwimmingLane["NamespaceId"].isNull())
			dataObject.namespaceId = valueDataSwimmingLane["NamespaceId"].asString();
		if(!valueDataSwimmingLane["GroupId"].isNull())
			dataObject.groupId = std::stol(valueDataSwimmingLane["GroupId"].asString());
		if(!valueDataSwimmingLane["EntryRule"].isNull())
			dataObject.entryRule = valueDataSwimmingLane["EntryRule"].asString();
		if(!valueDataSwimmingLane["EnableRules"].isNull())
			dataObject.enableRules = valueDataSwimmingLane["EnableRules"].asString() == "true";
		if(!valueDataSwimmingLane["ScenarioSign"].isNull())
			dataObject.scenarioSign = valueDataSwimmingLane["ScenarioSign"].asString();
		auto allSwimmingLaneAppRelationShipListNode = valueDataSwimmingLane["SwimmingLaneAppRelationShipList"]["swimmingLaneAppRelationShip"];
		for (auto valueDataSwimmingLaneSwimmingLaneAppRelationShipListswimmingLaneAppRelationShip : allSwimmingLaneAppRelationShipListNode)
		{
			SwimmingLane::SwimmingLaneAppRelationShip swimmingLaneAppRelationShipListObject;
			if(!valueDataSwimmingLaneSwimmingLaneAppRelationShipListswimmingLaneAppRelationShip["LaneId"].isNull())
				swimmingLaneAppRelationShipListObject.laneId = std::stol(valueDataSwimmingLaneSwimmingLaneAppRelationShipListswimmingLaneAppRelationShip["LaneId"].asString());
			if(!valueDataSwimmingLaneSwimmingLaneAppRelationShipListswimmingLaneAppRelationShip["AppId"].isNull())
				swimmingLaneAppRelationShipListObject.appId = valueDataSwimmingLaneSwimmingLaneAppRelationShipListswimmingLaneAppRelationShip["AppId"].asString();
			if(!valueDataSwimmingLaneSwimmingLaneAppRelationShipListswimmingLaneAppRelationShip["AppName"].isNull())
				swimmingLaneAppRelationShipListObject.appName = valueDataSwimmingLaneSwimmingLaneAppRelationShipListswimmingLaneAppRelationShip["AppName"].asString();
			if(!valueDataSwimmingLaneSwimmingLaneAppRelationShipListswimmingLaneAppRelationShip["Rules"].isNull())
				swimmingLaneAppRelationShipListObject.rules = valueDataSwimmingLaneSwimmingLaneAppRelationShipListswimmingLaneAppRelationShip["Rules"].asString();
			dataObject.swimmingLaneAppRelationShipList.push_back(swimmingLaneAppRelationShipListObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListSwimmingLaneResult::getMessage()const
{
	return message_;
}

std::vector<ListSwimmingLaneResult::SwimmingLane> ListSwimmingLaneResult::getData()const
{
	return data_;
}

int ListSwimmingLaneResult::getCode()const
{
	return code_;
}

