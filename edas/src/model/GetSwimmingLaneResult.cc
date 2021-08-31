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

#include <alibabacloud/edas/model/GetSwimmingLaneResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

GetSwimmingLaneResult::GetSwimmingLaneResult() :
	ServiceResult()
{}

GetSwimmingLaneResult::GetSwimmingLaneResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSwimmingLaneResult::~GetSwimmingLaneResult()
{}

void GetSwimmingLaneResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Id"].isNull())
		data_.id = dataNode["Id"].asString();
	if(!dataNode["Name"].isNull())
		data_.name = dataNode["Name"].asString();
	if(!dataNode["Tag"].isNull())
		data_.tag = dataNode["Tag"].asString();
	if(!dataNode["NamespaceId"].isNull())
		data_.namespaceId = dataNode["NamespaceId"].asString();
	if(!dataNode["GroupId"].isNull())
		data_.groupId = std::stol(dataNode["GroupId"].asString());
	if(!dataNode["EntryRule"].isNull())
		data_.entryRule = dataNode["EntryRule"].asString();
	if(!dataNode["EnableRules"].isNull())
		data_.enableRules = dataNode["EnableRules"].asString() == "true";
	if(!dataNode["ScenarioSign"].isNull())
		data_.scenarioSign = dataNode["ScenarioSign"].asString();
	auto allSwimmingLaneAppRelationShipListNode = dataNode["SwimmingLaneAppRelationShipList"]["swimmingLaneAppRelationShip"];
	for (auto dataNodeSwimmingLaneAppRelationShipListswimmingLaneAppRelationShip : allSwimmingLaneAppRelationShipListNode)
	{
		Data::SwimmingLaneAppRelationShip swimmingLaneAppRelationShipObject;
		if(!dataNodeSwimmingLaneAppRelationShipListswimmingLaneAppRelationShip["LaneId"].isNull())
			swimmingLaneAppRelationShipObject.laneId = std::stol(dataNodeSwimmingLaneAppRelationShipListswimmingLaneAppRelationShip["LaneId"].asString());
		if(!dataNodeSwimmingLaneAppRelationShipListswimmingLaneAppRelationShip["AppId"].isNull())
			swimmingLaneAppRelationShipObject.appId = dataNodeSwimmingLaneAppRelationShipListswimmingLaneAppRelationShip["AppId"].asString();
		if(!dataNodeSwimmingLaneAppRelationShipListswimmingLaneAppRelationShip["AppName"].isNull())
			swimmingLaneAppRelationShipObject.appName = dataNodeSwimmingLaneAppRelationShipListswimmingLaneAppRelationShip["AppName"].asString();
		if(!dataNodeSwimmingLaneAppRelationShipListswimmingLaneAppRelationShip["Rules"].isNull())
			swimmingLaneAppRelationShipObject.rules = dataNodeSwimmingLaneAppRelationShipListswimmingLaneAppRelationShip["Rules"].asString();
		data_.swimmingLaneAppRelationShipList.push_back(swimmingLaneAppRelationShipObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string GetSwimmingLaneResult::getMessage()const
{
	return message_;
}

GetSwimmingLaneResult::Data GetSwimmingLaneResult::getData()const
{
	return data_;
}

int GetSwimmingLaneResult::getCode()const
{
	return code_;
}

