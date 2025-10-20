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

#include <alibabacloud/eiam/model/GetNetworkZoneResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

GetNetworkZoneResult::GetNetworkZoneResult() :
	ServiceResult()
{}

GetNetworkZoneResult::GetNetworkZoneResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetNetworkZoneResult::~GetNetworkZoneResult()
{}

void GetNetworkZoneResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto networkZoneNode = value["NetworkZone"];
	if(!networkZoneNode["InstanceId"].isNull())
		networkZone_.instanceId = networkZoneNode["InstanceId"].asString();
	if(!networkZoneNode["NetworkZoneId"].isNull())
		networkZone_.networkZoneId = networkZoneNode["NetworkZoneId"].asString();
	if(!networkZoneNode["NetworkZoneName"].isNull())
		networkZone_.networkZoneName = networkZoneNode["NetworkZoneName"].asString();
	if(!networkZoneNode["Description"].isNull())
		networkZone_.description = networkZoneNode["Description"].asString();
	if(!networkZoneNode["NetworkZoneType"].isNull())
		networkZone_.networkZoneType = networkZoneNode["NetworkZoneType"].asString();
	if(!networkZoneNode["VpcId"].isNull())
		networkZone_.vpcId = networkZoneNode["VpcId"].asString();
		auto allIpv4Cidrs = networkZoneNode["Ipv4Cidrs"]["ipv4Cidrs"];
		for (auto value : allIpv4Cidrs)
			networkZone_.ipv4Cidrs.push_back(value.asString());
		auto allIpv6Cidrs = networkZoneNode["Ipv6Cidrs"]["ipv6Cidrs"];
		for (auto value : allIpv6Cidrs)
			networkZone_.ipv6Cidrs.push_back(value.asString());

}

GetNetworkZoneResult::NetworkZone GetNetworkZoneResult::getNetworkZone()const
{
	return networkZone_;
}

