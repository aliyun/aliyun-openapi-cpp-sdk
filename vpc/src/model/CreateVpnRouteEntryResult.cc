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

#include <alibabacloud/vpc/model/CreateVpnRouteEntryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

CreateVpnRouteEntryResult::CreateVpnRouteEntryResult() :
	ServiceResult()
{}

CreateVpnRouteEntryResult::CreateVpnRouteEntryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateVpnRouteEntryResult::~CreateVpnRouteEntryResult()
{}

void CreateVpnRouteEntryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["NextHop"].isNull())
		nextHop_ = value["NextHop"].asString();
	if(!value["Weight"].isNull())
		weight_ = std::stoi(value["Weight"].asString());
	if(!value["RouteDest"].isNull())
		routeDest_ = value["RouteDest"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["State"].isNull())
		state_ = value["State"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = std::stol(value["CreateTime"].asString());
	if(!value["OverlayMode"].isNull())
		overlayMode_ = value["OverlayMode"].asString();
	if(!value["VpnInstanceId"].isNull())
		vpnInstanceId_ = value["VpnInstanceId"].asString();

}

std::string CreateVpnRouteEntryResult::getRouteDest()const
{
	return routeDest_;
}

std::string CreateVpnRouteEntryResult::getDescription()const
{
	return description_;
}

std::string CreateVpnRouteEntryResult::getVpnInstanceId()const
{
	return vpnInstanceId_;
}

std::string CreateVpnRouteEntryResult::getOverlayMode()const
{
	return overlayMode_;
}

std::string CreateVpnRouteEntryResult::getNextHop()const
{
	return nextHop_;
}

std::string CreateVpnRouteEntryResult::getState()const
{
	return state_;
}

long CreateVpnRouteEntryResult::getCreateTime()const
{
	return createTime_;
}

int CreateVpnRouteEntryResult::getWeight()const
{
	return weight_;
}

