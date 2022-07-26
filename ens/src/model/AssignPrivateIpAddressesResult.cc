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

#include <alibabacloud/ens/model/AssignPrivateIpAddressesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

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
		auto allPrivateIpSet = assignedPrivateIpAddressesSetNode["PrivateIpSet"]["PrivateIpSet"];
		for (auto value : allPrivateIpSet)
			assignedPrivateIpAddressesSet_.privateIpSet.push_back(value.asString());

}

AssignPrivateIpAddressesResult::AssignedPrivateIpAddressesSet AssignPrivateIpAddressesResult::getAssignedPrivateIpAddressesSet()const
{
	return assignedPrivateIpAddressesSet_;
}

