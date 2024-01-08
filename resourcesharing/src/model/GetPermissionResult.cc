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

#include <alibabacloud/resourcesharing/model/GetPermissionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceSharing;
using namespace AlibabaCloud::ResourceSharing::Model;

GetPermissionResult::GetPermissionResult() :
	ServiceResult()
{}

GetPermissionResult::GetPermissionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPermissionResult::~GetPermissionResult()
{}

void GetPermissionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto permissionNode = value["Permission"];
	if(!permissionNode["PermissionName"].isNull())
		permission_.permissionName = permissionNode["PermissionName"].asString();
	if(!permissionNode["PermissionVersion"].isNull())
		permission_.permissionVersion = permissionNode["PermissionVersion"].asString();
	if(!permissionNode["Permission"].isNull())
		permission_.permission = permissionNode["Permission"].asString();
	if(!permissionNode["ResourceType"].isNull())
		permission_.resourceType = permissionNode["ResourceType"].asString();
	if(!permissionNode["DefaultVersion"].isNull())
		permission_.defaultVersion = permissionNode["DefaultVersion"].asString() == "true";
	if(!permissionNode["CreateTime"].isNull())
		permission_.createTime = permissionNode["CreateTime"].asString();
	if(!permissionNode["UpdateTime"].isNull())
		permission_.updateTime = permissionNode["UpdateTime"].asString();
	if(!permissionNode["DefaultPermission"].isNull())
		permission_.defaultPermission = permissionNode["DefaultPermission"].asString() == "true";

}

GetPermissionResult::Permission GetPermissionResult::getPermission()const
{
	return permission_;
}

