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

#include <alibabacloud/resourcesharing/model/ListResourceSharePermissionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceSharing;
using namespace AlibabaCloud::ResourceSharing::Model;

ListResourceSharePermissionsResult::ListResourceSharePermissionsResult() :
	ServiceResult()
{}

ListResourceSharePermissionsResult::ListResourceSharePermissionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListResourceSharePermissionsResult::~ListResourceSharePermissionsResult()
{}

void ListResourceSharePermissionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPermissionsNode = value["Permissions"]["Permission"];
	for (auto valuePermissionsPermission : allPermissionsNode)
	{
		Permission permissionsObject;
		if(!valuePermissionsPermission["PermissionName"].isNull())
			permissionsObject.permissionName = valuePermissionsPermission["PermissionName"].asString();
		if(!valuePermissionsPermission["PermissionVersion"].isNull())
			permissionsObject.permissionVersion = valuePermissionsPermission["PermissionVersion"].asString();
		if(!valuePermissionsPermission["DefaultVersion"].isNull())
			permissionsObject.defaultVersion = valuePermissionsPermission["DefaultVersion"].asString() == "true";
		if(!valuePermissionsPermission["CreateTime"].isNull())
			permissionsObject.createTime = valuePermissionsPermission["CreateTime"].asString();
		if(!valuePermissionsPermission["UpdateTime"].isNull())
			permissionsObject.updateTime = valuePermissionsPermission["UpdateTime"].asString();
		if(!valuePermissionsPermission["ResourceType"].isNull())
			permissionsObject.resourceType = valuePermissionsPermission["ResourceType"].asString();
		if(!valuePermissionsPermission["DefaultPermission"].isNull())
			permissionsObject.defaultPermission = valuePermissionsPermission["DefaultPermission"].asString() == "true";
		permissions_.push_back(permissionsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string ListResourceSharePermissionsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListResourceSharePermissionsResult::Permission> ListResourceSharePermissionsResult::getPermissions()const
{
	return permissions_;
}

