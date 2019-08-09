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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allRoles = value["Roles"]["Role"];
	for (auto value : allRoles)
	{
		Role rolesObject;
		if(!value["RoleId"].isNull())
			rolesObject.roleId = value["RoleId"].asString();
		if(!value["RoleName"].isNull())
			rolesObject.roleName = value["RoleName"].asString();
		if(!value["Arn"].isNull())
			rolesObject.arn = value["Arn"].asString();
		if(!value["Description"].isNull())
			rolesObject.description = value["Description"].asString();
		if(!value["CreateDate"].isNull())
			rolesObject.createDate = value["CreateDate"].asString();
		if(!value["UpdateDate"].isNull())
			rolesObject.updateDate = value["UpdateDate"].asString();
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

