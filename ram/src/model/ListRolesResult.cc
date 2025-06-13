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

#include <alibabacloud/ram/model/ListRolesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ram;
using namespace AlibabaCloud::Ram::Model;

ListRolesResult::ListRolesResult() :
	ServiceResult()
{}

ListRolesResult::ListRolesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRolesResult::~ListRolesResult()
{}

void ListRolesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRolesNode = value["Roles"]["Role"];
	for (auto valueRolesRole : allRolesNode)
	{
		Role rolesObject;
		if(!valueRolesRole["Description"].isNull())
			rolesObject.description = valueRolesRole["Description"].asString();
		if(!valueRolesRole["UpdateDate"].isNull())
			rolesObject.updateDate = valueRolesRole["UpdateDate"].asString();
		if(!valueRolesRole["MaxSessionDuration"].isNull())
			rolesObject.maxSessionDuration = std::stol(valueRolesRole["MaxSessionDuration"].asString());
		if(!valueRolesRole["RoleName"].isNull())
			rolesObject.roleName = valueRolesRole["RoleName"].asString();
		if(!valueRolesRole["CreateDate"].isNull())
			rolesObject.createDate = valueRolesRole["CreateDate"].asString();
		if(!valueRolesRole["RoleId"].isNull())
			rolesObject.roleId = valueRolesRole["RoleId"].asString();
		if(!valueRolesRole["Arn"].isNull())
			rolesObject.arn = valueRolesRole["Arn"].asString();
		auto allTagsNode = valueRolesRole["Tags"]["Tag"];
		for (auto valueRolesRoleTagsTag : allTagsNode)
		{
			Role::Tag tagsObject;
			if(!valueRolesRoleTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valueRolesRoleTagsTag["TagKey"].asString();
			if(!valueRolesRoleTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valueRolesRoleTagsTag["TagValue"].asString();
			rolesObject.tags.push_back(tagsObject);
		}
		roles_.push_back(rolesObject);
	}
	if(!value["IsTruncated"].isNull())
		isTruncated_ = value["IsTruncated"].asString() == "true";
	if(!value["Marker"].isNull())
		marker_ = value["Marker"].asString();

}

std::vector<ListRolesResult::Role> ListRolesResult::getRoles()const
{
	return roles_;
}

bool ListRolesResult::getIsTruncated()const
{
	return isTruncated_;
}

std::string ListRolesResult::getMarker()const
{
	return marker_;
}

