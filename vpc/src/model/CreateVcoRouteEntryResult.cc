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

#include <alibabacloud/vpc/model/CreateVcoRouteEntryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

CreateVcoRouteEntryResult::CreateVcoRouteEntryResult() :
	ServiceResult()
{}

CreateVcoRouteEntryResult::CreateVcoRouteEntryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateVcoRouteEntryResult::~CreateVcoRouteEntryResult()
{}

void CreateVcoRouteEntryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["VpnConnectionId"].isNull())
		vpnConnectionId_ = value["VpnConnectionId"].asString();
	if(!value["RouteDest"].isNull())
		routeDest_ = value["RouteDest"].asString();
	if(!value["NextHop"].isNull())
		nextHop_ = value["NextHop"].asString();
	if(!value["Weight"].isNull())
		weight_ = std::stoi(value["Weight"].asString());
	if(!value["OverlayMode"].isNull())
		overlayMode_ = value["OverlayMode"].asString();
	if(!value["State"].isNull())
		state_ = value["State"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = std::stol(value["CreateTime"].asString());
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();

}

std::string CreateVcoRouteEntryResult::getRouteDest()const
{
	return routeDest_;
}

std::string CreateVcoRouteEntryResult::getDescription()const
{
	return description_;
}

std::string CreateVcoRouteEntryResult::getOverlayMode()const
{
	return overlayMode_;
}

std::string CreateVcoRouteEntryResult::getNextHop()const
{
	return nextHop_;
}

std::string CreateVcoRouteEntryResult::getState()const
{
	return state_;
}

long CreateVcoRouteEntryResult::getCreateTime()const
{
	return createTime_;
}

std::string CreateVcoRouteEntryResult::getVpnConnectionId()const
{
	return vpnConnectionId_;
}

int CreateVcoRouteEntryResult::getWeight()const
{
	return weight_;
}

