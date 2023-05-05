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

#include <alibabacloud/ecd/model/ListFilePermissionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

ListFilePermissionResult::ListFilePermissionResult() :
	ServiceResult()
{}

ListFilePermissionResult::ListFilePermissionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFilePermissionResult::~ListFilePermissionResult()
{}

void ListFilePermissionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFilePermissionsNode = value["FilePermissions"]["filePermission"];
	for (auto valueFilePermissionsfilePermission : allFilePermissionsNode)
	{
		FilePermission filePermissionsObject;
		if(!valueFilePermissionsfilePermission["RoleId"].isNull())
			filePermissionsObject.roleId = valueFilePermissionsfilePermission["RoleId"].asString();
		if(!valueFilePermissionsfilePermission["ExpireTime"].isNull())
			filePermissionsObject.expireTime = std::stol(valueFilePermissionsfilePermission["ExpireTime"].asString());
		if(!valueFilePermissionsfilePermission["DisinheritSubGroup"].isNull())
			filePermissionsObject.disinheritSubGroup = valueFilePermissionsfilePermission["DisinheritSubGroup"].asString() == "true";
		auto cdsIdentityNode = value["CdsIdentity"];
		if(!cdsIdentityNode["Id"].isNull())
			filePermissionsObject.cdsIdentity.id = cdsIdentityNode["Id"].asString();
		if(!cdsIdentityNode["Type"].isNull())
			filePermissionsObject.cdsIdentity.type = cdsIdentityNode["Type"].asString();
		filePermissions_.push_back(filePermissionsObject);
	}

}

std::vector<ListFilePermissionResult::FilePermission> ListFilePermissionResult::getFilePermissions()const
{
	return filePermissions_;
}

