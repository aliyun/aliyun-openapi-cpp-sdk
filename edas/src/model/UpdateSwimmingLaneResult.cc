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

#include <alibabacloud/edas/model/UpdateSwimmingLaneResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Edas;
using namespace AlibabaCloud::Edas::Model;

UpdateSwimmingLaneResult::UpdateSwimmingLaneResult() :
	ServiceResult()
{}

UpdateSwimmingLaneResult::UpdateSwimmingLaneResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateSwimmingLaneResult::~UpdateSwimmingLaneResult()
{}

void UpdateSwimmingLaneResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["Id"].isNull())
		data_.id = std::stol(dataNode["Id"].asString());
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
	auto allSwimmingLaneAppRelationShipListNode = dataNode["SwimmingLaneAppRelationShipList"]["SwimmingLaneAppRelationShip"];
	for (auto dataNodeSwimmingLaneAppRelationShipListSwimmingLaneAppRelationShip : allSwimmingLaneAppRelationShipListNode)
	{
		Data::SwimmingLaneAppRelationShip swimmingLaneAppRelationShipObject;
		if(!dataNodeSwimmingLaneAppRelationShipListSwimmingLaneAppRelationShip["LaneId"].isNull())
			swimmingLaneAppRelationShipObject.laneId = std::stol(dataNodeSwimmingLaneAppRelationShipListSwimmingLaneAppRelationShip["LaneId"].asString());
		if(!dataNodeSwimmingLaneAppRelationShipListSwimmingLaneAppRelationShip["AppId"].isNull())
			swimmingLaneAppRelationShipObject.appId = dataNodeSwimmingLaneAppRelationShipListSwimmingLaneAppRelationShip["AppId"].asString();
		if(!dataNodeSwimmingLaneAppRelationShipListSwimmingLaneAppRelationShip["Rules"].isNull())
			swimmingLaneAppRelationShipObject.rules = dataNodeSwimmingLaneAppRelationShipListSwimmingLaneAppRelationShip["Rules"].asString();
		if(!dataNodeSwimmingLaneAppRelationShipListSwimmingLaneAppRelationShip["AppName"].isNull())
			swimmingLaneAppRelationShipObject.appName = dataNodeSwimmingLaneAppRelationShipListSwimmingLaneAppRelationShip["AppName"].asString();
		data_.swimmingLaneAppRelationShipList.push_back(swimmingLaneAppRelationShipObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string UpdateSwimmingLaneResult::getMessage()const
{
	return message_;
}

UpdateSwimmingLaneResult::Data UpdateSwimmingLaneResult::getData()const
{
	return data_;
}

int UpdateSwimmingLaneResult::getCode()const
{
	return code_;
}

