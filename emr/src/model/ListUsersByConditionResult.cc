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

#include <alibabacloud/emr/model/ListUsersByConditionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListUsersByConditionResult::ListUsersByConditionResult() :
	ServiceResult()
{}

ListUsersByConditionResult::ListUsersByConditionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUsersByConditionResult::~ListUsersByConditionResult()
{}

void ListUsersByConditionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["userDTO"];
	for (auto valueDatauserDTO : allDataNode)
	{
		UserDTO dataObject;
		if(!valueDatauserDTO["AliyunUserId"].isNull())
			dataObject.aliyunUserId = valueDatauserDTO["AliyunUserId"].asString();
		if(!valueDatauserDTO["UserName"].isNull())
			dataObject.userName = valueDatauserDTO["UserName"].asString();
		if(!valueDatauserDTO["UserType"].isNull())
			dataObject.userType = valueDatauserDTO["UserType"].asString();
		if(!valueDatauserDTO["Status"].isNull())
			dataObject.status = valueDatauserDTO["Status"].asString();
		if(!valueDatauserDTO["IsSuperAdmin"].isNull())
			dataObject.isSuperAdmin = valueDatauserDTO["IsSuperAdmin"].asString();
		if(!valueDatauserDTO["Description"].isNull())
			dataObject.description = valueDatauserDTO["Description"].asString();
		if(!valueDatauserDTO["GmtCreate"].isNull())
			dataObject.gmtCreate = valueDatauserDTO["GmtCreate"].asString();
		if(!valueDatauserDTO["GmtModified"].isNull())
			dataObject.gmtModified = valueDatauserDTO["GmtModified"].asString();
		auto allRoleDTOListNode = allDataNode["RoleDTOList"]["RoleDTO"];
		for (auto allDataNodeRoleDTOListRoleDTO : allRoleDTOListNode)
		{
			UserDTO::RoleDTO roleDTOListObject;
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
		auto allGroupDTOListNode = allDataNode["GroupDTOList"]["GroupDTO"];
		for (auto allDataNodeGroupDTOListGroupDTO : allGroupDTOListNode)
		{
			UserDTO::GroupDTO groupDTOListObject;
			if(!allDataNodeGroupDTOListGroupDTO["Id"].isNull())
				groupDTOListObject.id = std::stol(allDataNodeGroupDTOListGroupDTO["Id"].asString());
			if(!allDataNodeGroupDTOListGroupDTO["Type"].isNull())
				groupDTOListObject.type = allDataNodeGroupDTOListGroupDTO["Type"].asString();
			if(!allDataNodeGroupDTOListGroupDTO["Name"].isNull())
				groupDTOListObject.name = allDataNodeGroupDTOListGroupDTO["Name"].asString();
			if(!allDataNodeGroupDTOListGroupDTO["GmtCreate"].isNull())
				groupDTOListObject.gmtCreate = allDataNodeGroupDTOListGroupDTO["GmtCreate"].asString();
			auto allRoleDTOList1Node = allGroupDTOListNode["RoleDTOList"]["RoleDTO"];
			for (auto allGroupDTOListNodeRoleDTOListRoleDTO : allRoleDTOList1Node)
			{
				UserDTO::GroupDTO::RoleDTO2 roleDTOList1Object;
				if(!allGroupDTOListNodeRoleDTOListRoleDTO["Id"].isNull())
					roleDTOList1Object.id = std::stol(allGroupDTOListNodeRoleDTOListRoleDTO["Id"].asString());
				if(!allGroupDTOListNodeRoleDTOListRoleDTO["Name"].isNull())
					roleDTOList1Object.name = allGroupDTOListNodeRoleDTOListRoleDTO["Name"].asString();
				if(!allGroupDTOListNodeRoleDTOListRoleDTO["ResourceType"].isNull())
					roleDTOList1Object.resourceType = allGroupDTOListNodeRoleDTOListRoleDTO["ResourceType"].asString();
				if(!allGroupDTOListNodeRoleDTOListRoleDTO["GmtCreate"].isNull())
					roleDTOList1Object.gmtCreate = allGroupDTOListNodeRoleDTOListRoleDTO["GmtCreate"].asString();
				if(!allGroupDTOListNodeRoleDTOListRoleDTO["GmtModified"].isNull())
					roleDTOList1Object.gmtModified = allGroupDTOListNodeRoleDTOListRoleDTO["GmtModified"].asString();
				if(!allGroupDTOListNodeRoleDTOListRoleDTO["Description"].isNull())
					roleDTOList1Object.description = allGroupDTOListNodeRoleDTOListRoleDTO["Description"].asString();
				groupDTOListObject.roleDTOList1.push_back(roleDTOList1Object);
			}
			dataObject.groupDTOList.push_back(groupDTOListObject);
		}
		auto allAccountDTOListNode = allDataNode["AccountDTOList"]["AccountDTO"];
		for (auto allDataNodeAccountDTOListAccountDTO : allAccountDTOListNode)
		{
			UserDTO::AccountDTO accountDTOListObject;
			if(!allDataNodeAccountDTOListAccountDTO["AliyunUserId"].isNull())
				accountDTOListObject.aliyunUserId = allDataNodeAccountDTOListAccountDTO["AliyunUserId"].asString();
			if(!allDataNodeAccountDTOListAccountDTO["AccountType"].isNull())
				accountDTOListObject.accountType = allDataNodeAccountDTOListAccountDTO["AccountType"].asString();
			if(!allDataNodeAccountDTOListAccountDTO["AuthType"].isNull())
				accountDTOListObject.authType = allDataNodeAccountDTOListAccountDTO["AuthType"].asString();
			dataObject.accountDTOList.push_back(accountDTOListObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Paging"].isNull())
		paging_ = value["Paging"].asString() == "true";

}

bool ListUsersByConditionResult::getPaging()const
{
	return paging_;
}

std::vector<ListUsersByConditionResult::UserDTO> ListUsersByConditionResult::getData()const
{
	return data_;
}

