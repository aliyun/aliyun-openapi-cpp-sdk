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

#include <alibabacloud/ecs/model/CreateNetworkInterfacePermissionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

CreateNetworkInterfacePermissionResult::CreateNetworkInterfacePermissionResult() :
	ServiceResult()
{}

CreateNetworkInterfacePermissionResult::CreateNetworkInterfacePermissionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateNetworkInterfacePermissionResult::~CreateNetworkInterfacePermissionResult()
{}

void CreateNetworkInterfacePermissionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto networkInterfacePermissionNode = value["NetworkInterfacePermission"];
	if(!networkInterfacePermissionNode["Permission"].isNull())
		networkInterfacePermission_.permission = networkInterfacePermissionNode["Permission"].asString();
	if(!networkInterfacePermissionNode["NetworkInterfaceId"].isNull())
		networkInterfacePermission_.networkInterfaceId = networkInterfacePermissionNode["NetworkInterfaceId"].asString();
	if(!networkInterfacePermissionNode["AccountId"].isNull())
		networkInterfacePermission_.accountId = std::stol(networkInterfacePermissionNode["AccountId"].asString());
	if(!networkInterfacePermissionNode["NetworkInterfacePermissionId"].isNull())
		networkInterfacePermission_.networkInterfacePermissionId = networkInterfacePermissionNode["NetworkInterfacePermissionId"].asString();
	if(!networkInterfacePermissionNode["ServiceName"].isNull())
		networkInterfacePermission_.serviceName = networkInterfacePermissionNode["ServiceName"].asString();
	if(!networkInterfacePermissionNode["PermissionState"].isNull())
		networkInterfacePermission_.permissionState = networkInterfacePermissionNode["PermissionState"].asString();

}

CreateNetworkInterfacePermissionResult::NetworkInterfacePermission CreateNetworkInterfacePermissionResult::getNetworkInterfacePermission()const
{
	return networkInterfacePermission_;
}

