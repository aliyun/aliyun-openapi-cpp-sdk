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

#include <alibabacloud/ecs/model/AssignPrivateIpAddressesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

AssignPrivateIpAddressesResult::AssignPrivateIpAddressesResult() :
	ServiceResult()
{}

AssignPrivateIpAddressesResult::AssignPrivateIpAddressesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AssignPrivateIpAddressesResult::~AssignPrivateIpAddressesResult()
{}

void AssignPrivateIpAddressesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto assignedPrivateIpAddressesSetNode = value["AssignedPrivateIpAddressesSet"];
	if(!assignedPrivateIpAddressesSetNode["NetworkInterfaceId"].isNull())
		assignedPrivateIpAddressesSet_.networkInterfaceId = assignedPrivateIpAddressesSetNode["NetworkInterfaceId"].asString();
		auto allPrivateIpSet = assignedPrivateIpAddressesSetNode["PrivateIpSet"]["PrivateIpAddress"];
		for (auto value : allPrivateIpSet)
			assignedPrivateIpAddressesSet_.privateIpSet.push_back(value.asString());
		auto allIpv4PrefixSet = assignedPrivateIpAddressesSetNode["Ipv4PrefixSet"]["Ipv4Prefixes"];
		for (auto value : allIpv4PrefixSet)
			assignedPrivateIpAddressesSet_.ipv4PrefixSet.push_back(value.asString());

}

AssignPrivateIpAddressesResult::AssignedPrivateIpAddressesSet AssignPrivateIpAddressesResult::getAssignedPrivateIpAddressesSet()const
{
	return assignedPrivateIpAddressesSet_;
}

