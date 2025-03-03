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

#include <alibabacloud/resourcemanager/model/ListRolesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceManager;
using namespace AlibabaCloud::ResourceManager::Model;

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
		if(!valueRolesRole["Arn"].isNull())
			rolesObject.arn = valueRolesRole["Arn"].asString();
		if(!valueRolesRole["CreateDate"].isNull())
			rolesObject.createDate = valueRolesRole["CreateDate"].asString();
		if(!valueRolesRole["Description"].isNull())
			rolesObject.description = valueRolesRole["Description"].asString();
		if(!valueRolesRole["IsServiceLinkedRole"].isNull())
			rolesObject.isServiceLinkedRole = valueRolesRole["IsServiceLinkedRole"].asString() == "true";
		if(!valueRolesRole["MaxSessionDuration"].isNull())
			rolesObject.maxSessionDuration = std::stol(valueRolesRole["MaxSessionDuration"].asString());
		if(!valueRolesRole["RoleId"].isNull())
			rolesObject.roleId = valueRolesRole["RoleId"].asString();
		if(!valueRolesRole["RoleName"].isNull())
			rolesObject.roleName = valueRolesRole["RoleName"].asString();
		if(!valueRolesRole["RolePrincipalName"].isNull())
			rolesObject.rolePrincipalName = valueRolesRole["RolePrincipalName"].asString();
		if(!valueRolesRole["UpdateDate"].isNull())
			rolesObject.updateDate = valueRolesRole["UpdateDate"].asString();
		auto latestDeletionTaskNode = value["LatestDeletionTask"];
		if(!latestDeletionTaskNode["CreateDate"].isNull())
			rolesObject.latestDeletionTask.createDate = latestDeletionTaskNode["CreateDate"].asString();
		if(!latestDeletionTaskNode["DeletionTaskId"].isNull())
			rolesObject.latestDeletionTask.deletionTaskId = latestDeletionTaskNode["DeletionTaskId"].asString();
		roles_.push_back(rolesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListRolesResult::getTotalCount()const
{
	return totalCount_;
}

int ListRolesResult::getPageSize()const
{
	return pageSize_;
}

int ListRolesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListRolesResult::Role> ListRolesResult::getRoles()const
{
	return roles_;
}

