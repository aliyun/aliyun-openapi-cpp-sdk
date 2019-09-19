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

#include <alibabacloud/emr/model/DescribeUserResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

DescribeUserResult::DescribeUserResult() :
	ServiceResult()
{}

DescribeUserResult::DescribeUserResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUserResult::~DescribeUserResult()
{}

void DescribeUserResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRoleDTOListNode = value["RoleDTOList"]["RoleDTO"];
	for (auto valueRoleDTOListRoleDTO : allRoleDTOListNode)
	{
		RoleDTO roleDTOListObject;
		if(!valueRoleDTOListRoleDTO["Id"].isNull())
			roleDTOListObject.id = std::stol(valueRoleDTOListRoleDTO["Id"].asString());
		if(!valueRoleDTOListRoleDTO["Name"].isNull())
			roleDTOListObject.name = valueRoleDTOListRoleDTO["Name"].asString();
		if(!valueRoleDTOListRoleDTO["ResourceType"].isNull())
			roleDTOListObject.resourceType = valueRoleDTOListRoleDTO["ResourceType"].asString();
		if(!valueRoleDTOListRoleDTO["GmtCreate"].isNull())
			roleDTOListObject.gmtCreate = valueRoleDTOListRoleDTO["GmtCreate"].asString();
		if(!valueRoleDTOListRoleDTO["GmtModified"].isNull())
			roleDTOListObject.gmtModified = valueRoleDTOListRoleDTO["GmtModified"].asString();
		if(!valueRoleDTOListRoleDTO["Description"].isNull())
			roleDTOListObject.description = valueRoleDTOListRoleDTO["Description"].asString();
		roleDTOList_.push_back(roleDTOListObject);
	}
	auto allGroupDTOListNode = value["GroupDTOList"]["GroupDTO"];
	for (auto valueGroupDTOListGroupDTO : allGroupDTOListNode)
	{
		GroupDTO groupDTOListObject;
		if(!valueGroupDTOListGroupDTO["Id"].isNull())
			groupDTOListObject.id = std::stol(valueGroupDTOListGroupDTO["Id"].asString());
		if(!valueGroupDTOListGroupDTO["Type"].isNull())
			groupDTOListObject.type = valueGroupDTOListGroupDTO["Type"].asString();
		if(!valueGroupDTOListGroupDTO["Name"].isNull())
			groupDTOListObject.name = valueGroupDTOListGroupDTO["Name"].asString();
		if(!valueGroupDTOListGroupDTO["GmtCreate"].isNull())
			groupDTOListObject.gmtCreate = valueGroupDTOListGroupDTO["GmtCreate"].asString();
		auto allRoleDTOList1Node = allGroupDTOListNode["RoleDTOList"]["RoleDTO"];
		for (auto allGroupDTOListNodeRoleDTOListRoleDTO : allRoleDTOList1Node)
		{
			GroupDTO::RoleDTO2 roleDTOList1Object;
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
		groupDTOList_.push_back(groupDTOListObject);
	}
	auto allAccountDTOListNode = value["AccountDTOList"]["AccountDTO"];
	for (auto valueAccountDTOListAccountDTO : allAccountDTOListNode)
	{
		AccountDTO accountDTOListObject;
		if(!valueAccountDTOListAccountDTO["AliyunUserId"].isNull())
			accountDTOListObject.aliyunUserId = valueAccountDTOListAccountDTO["AliyunUserId"].asString();
		if(!valueAccountDTOListAccountDTO["AccountType"].isNull())
			accountDTOListObject.accountType = valueAccountDTOListAccountDTO["AccountType"].asString();
		if(!valueAccountDTOListAccountDTO["AuthType"].isNull())
			accountDTOListObject.authType = valueAccountDTOListAccountDTO["AuthType"].asString();
		accountDTOList_.push_back(accountDTOListObject);
	}
	if(!value["Paging"].isNull())
		paging_ = value["Paging"].asString() == "true";
	if(!value["AliyunUserId"].isNull())
		aliyunUserId_ = value["AliyunUserId"].asString();
	if(!value["UserName"].isNull())
		userName_ = value["UserName"].asString();
	if(!value["UserType"].isNull())
		userType_ = value["UserType"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["IsSuperAdmin"].isNull())
		isSuperAdmin_ = value["IsSuperAdmin"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["GmtCreate"].isNull())
		gmtCreate_ = value["GmtCreate"].asString();
	if(!value["GmtModified"].isNull())
		gmtModified_ = value["GmtModified"].asString();

}

std::string DescribeUserResult::getStatus()const
{
	return status_;
}

std::string DescribeUserResult::getIsSuperAdmin()const
{
	return isSuperAdmin_;
}

std::string DescribeUserResult::getGmtCreate()const
{
	return gmtCreate_;
}

std::string DescribeUserResult::getUserName()const
{
	return userName_;
}

std::string DescribeUserResult::getDescription()const
{
	return description_;
}

std::vector<DescribeUserResult::GroupDTO> DescribeUserResult::getGroupDTOList()const
{
	return groupDTOList_;
}

std::vector<DescribeUserResult::AccountDTO> DescribeUserResult::getAccountDTOList()const
{
	return accountDTOList_;
}

bool DescribeUserResult::getPaging()const
{
	return paging_;
}

std::string DescribeUserResult::getGmtModified()const
{
	return gmtModified_;
}

std::vector<DescribeUserResult::RoleDTO> DescribeUserResult::getRoleDTOList()const
{
	return roleDTOList_;
}

std::string DescribeUserResult::getUserType()const
{
	return userType_;
}

std::string DescribeUserResult::getAliyunUserId()const
{
	return aliyunUserId_;
}

