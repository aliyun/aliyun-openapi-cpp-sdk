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

#include <alibabacloud/emr/model/ListUserGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListUserGroupsResult::ListUserGroupsResult() :
	ServiceResult()
{}

ListUserGroupsResult::ListUserGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUserGroupsResult::~ListUserGroupsResult()
{}

void ListUserGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["groupDTO"];
	for (auto valueDatagroupDTO : allDataNode)
	{
		GroupDTO dataObject;
		if(!valueDatagroupDTO["Id"].isNull())
			dataObject.id = std::stol(valueDatagroupDTO["Id"].asString());
		if(!valueDatagroupDTO["Type"].isNull())
			dataObject.type = valueDatagroupDTO["Type"].asString();
		if(!valueDatagroupDTO["Name"].isNull())
			dataObject.name = valueDatagroupDTO["Name"].asString();
		if(!valueDatagroupDTO["GmtCreate"].isNull())
			dataObject.gmtCreate = valueDatagroupDTO["GmtCreate"].asString();
		auto allRoleDTOListNode = allDataNode["RoleDTOList"]["RoleDTO"];
		for (auto allDataNodeRoleDTOListRoleDTO : allRoleDTOListNode)
		{
			GroupDTO::RoleDTO roleDTOListObject;
			if(!allDataNodeRoleDTOListRoleDTO["Id"].isNull())
				roleDTOListObject.id = std::stol(allDataNodeRoleDTOListRoleDTO["Id"].asString());
			if(!allDataNodeRoleDTOListRoleDTO["Name"].isNull())
				roleDTOListObject.name = allDataNodeRoleDTOListRoleDTO["Name"].asString();
			if(!allDataNodeRoleDTOListRoleDTO["ResourceType"].isNull())
				roleDTOListObject.resourceType = allDataNodeRoleDTOListRoleDTO["ResourceType"].asString();
			if(!allDataNodeRoleDTOListRoleDTO["GmtCreate"].isNull())
				roleDTOListObject.gmtCreate = allDataNodeRoleDTOListRoleDTO["GmtCreate"].asString();
			if(!allDataNodeRoleDTOListRoleDTO["GmtModified"].isNull())
				roleDTOListObject.gmtModified = allDataNodeRoleDTOListRoleDTO["GmtModified"].asString();
			if(!allDataNodeRoleDTOListRoleDTO["Description"].isNull())
				roleDTOListObject.description = allDataNodeRoleDTOListRoleDTO["Description"].asString();
			dataObject.roleDTOList.push_back(roleDTOListObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Paging"].isNull())
		paging_ = value["Paging"].asString() == "true";

}

bool ListUserGroupsResult::getPaging()const
{
	return paging_;
}

std::vector<ListUserGroupsResult::GroupDTO> ListUserGroupsResult::getData()const
{
	return data_;
}

