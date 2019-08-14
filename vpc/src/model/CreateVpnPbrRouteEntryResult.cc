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

#include <alibabacloud/vpc/model/CreateVpnPbrRouteEntryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

CreateVpnPbrRouteEntryResult::CreateVpnPbrRouteEntryResult() :
	ServiceResult()
{}

CreateVpnPbrRouteEntryResult::CreateVpnPbrRouteEntryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateVpnPbrRouteEntryResult::~CreateVpnPbrRouteEntryResult()
{}

void CreateVpnPbrRouteEntryResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["VpnInstanceId"].isNull())
		vpnInstanceId_ = value["VpnInstanceId"].asString();
	if(!value["RouteSource"].isNull())
		routeSource_ = value["RouteSource"].asString();
	if(!value["RouteDest"].isNull())
		routeDest_ = value["RouteDest"].asString();
	if(!value["NextHop"].isNull())
		nextHop_ = value["NextHop"].asString();
	if(!value["Weight"].isNull())
		weight_ = std::stoi(value["Weight"].asString());
	if(!value["OverlayMode"].isNull())
		overlayMode_ = value["OverlayMode"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["State"].isNull())
		state_ = value["State"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = std::stol(value["CreateTime"].asString());

}

std::string CreateVpnPbrRouteEntryResult::getVpnInstanceId()const
{
	return vpnInstanceId_;
}

std::string CreateVpnPbrRouteEntryResult::getRouteDest()const
{
	return routeDest_;
}

std::string CreateVpnPbrRouteEntryResult::getDescription()const
{
	return description_;
}

std::string CreateVpnPbrRouteEntryResult::getOverlayMode()const
{
	return overlayMode_;
}

std::string CreateVpnPbrRouteEntryResult::getNextHop()const
{
	return nextHop_;
}

std::string CreateVpnPbrRouteEntryResult::getState()const
{
	return state_;
}

std::string CreateVpnPbrRouteEntryResult::getRouteSource()const
{
	return routeSource_;
}

long CreateVpnPbrRouteEntryResult::getCreateTime()const
{
	return createTime_;
}

int CreateVpnPbrRouteEntryResult::getWeight()const
{
	return weight_;
}

