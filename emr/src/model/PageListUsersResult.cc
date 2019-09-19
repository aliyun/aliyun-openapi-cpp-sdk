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

#include <alibabacloud/emr/model/PageListUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

PageListUsersResult::PageListUsersResult() :
	ServiceResult()
{}

PageListUsersResult::PageListUsersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PageListUsersResult::~PageListUsersResult()
{}

void PageListUsersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Item"];
	for (auto valueItemsItem : allItemsNode)
	{
		Item itemsObject;
		if(!valueItemsItem["AliyunUserId"].isNull())
			itemsObject.aliyunUserId = valueItemsItem["AliyunUserId"].asString();
		if(!valueItemsItem["UserName"].isNull())
			itemsObject.userName = valueItemsItem["UserName"].asString();
		if(!valueItemsItem["UserType"].isNull())
			itemsObject.userType = valueItemsItem["UserType"].asString();
		if(!valueItemsItem["Status"].isNull())
			itemsObject.status = valueItemsItem["Status"].asString();
		if(!valueItemsItem["IsSuperAdmin"].isNull())
			itemsObject.isSuperAdmin = valueItemsItem["IsSuperAdmin"].asString();
		if(!valueItemsItem["Description"].isNull())
			itemsObject.description = valueItemsItem["Description"].asString();
		if(!valueItemsItem["GmtCreate"].isNull())
			itemsObject.gmtCreate = valueItemsItem["GmtCreate"].asString();
		if(!valueItemsItem["GmtModified"].isNull())
			itemsObject.gmtModified = valueItemsItem["GmtModified"].asString();
		auto allRoleDTOListNode = allItemsNode["RoleDTOList"]["RoleDTO"];
		for (auto allItemsNodeRoleDTOListRoleDTO : allRoleDTOListNode)
		{
			Item::RoleDTO roleDTOListObject;
			if(!allItemsNodeRoleDTOListRoleDTO["Id"].isNull())
				roleDTOListObject.id = std::stol(allItemsNodeRoleDTOListRoleDTO["Id"].asString());
			if(!allItemsNodeRoleDTOListRoleDTO["Name"].isNull())
				roleDTOListObject.name = allItemsNodeRoleDTOListRoleDTO["Name"].asString();
			if(!allItemsNodeRoleDTOListRoleDTO["ResourceType"].isNull())
				roleDTOListObject.resourceType = allItemsNodeRoleDTOListRoleDTO["ResourceType"].asString();
			if(!allItemsNodeRoleDTOListRoleDTO["GmtCreate"].isNull())
				roleDTOListObject.gmtCreate = allItemsNodeRoleDTOListRoleDTO["GmtCreate"].asString();
			if(!allItemsNodeRoleDTOListRoleDTO["GmtModified"].isNull())
				roleDTOListObject.gmtModified = allItemsNodeRoleDTOListRoleDTO["GmtModified"].asString();
			if(!allItemsNodeRoleDTOListRoleDTO["Description"].isNull())
				roleDTOListObject.description = allItemsNodeRoleDTOListRoleDTO["Description"].asString();
			itemsObject.roleDTOList.push_back(roleDTOListObject);
		}
		auto allGroupDTOListNode = allItemsNode["GroupDTOList"]["GroupDTO"];
		for (auto allItemsNodeGroupDTOListGroupDTO : allGroupDTOListNode)
		{
			Item::GroupDTO groupDTOListObject;
			if(!allItemsNodeGroupDTOListGroupDTO["Id"].isNull())
				groupDTOListObject.id = std::stol(allItemsNodeGroupDTOListGroupDTO["Id"].asString());
			if(!allItemsNodeGroupDTOListGroupDTO["Type"].isNull())
				groupDTOListObject.type = allItemsNodeGroupDTOListGroupDTO["Type"].asString();
			if(!allItemsNodeGroupDTOListGroupDTO["Name"].isNull())
				groupDTOListObject.name = allItemsNodeGroupDTOListGroupDTO["Name"].asString();
			if(!allItemsNodeGroupDTOListGroupDTO["GmtCreate"].isNull())
				groupDTOListObject.gmtCreate = allItemsNodeGroupDTOListGroupDTO["GmtCreate"].asString();
			auto allRoleDTOList1Node = allGroupDTOListNode["RoleDTOList"]["RoleDTO"];
			for (auto allGroupDTOListNodeRoleDTOListRoleDTO : allRoleDTOList1Node)
			{
				Item::GroupDTO::RoleDTO2 roleDTOList1Object;
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
			itemsObject.groupDTOList.push_back(groupDTOListObject);
		}
		auto allAccountDTOListNode = allItemsNode["AccountDTOList"]["AccountDTO"];
		for (auto allItemsNodeAccountDTOListAccountDTO : allAccountDTOListNode)
		{
			Item::AccountDTO accountDTOListObject;
			if(!allItemsNodeAccountDTOListAccountDTO["AliyunUserId"].isNull())
				accountDTOListObject.aliyunUserId = allItemsNodeAccountDTOListAccountDTO["AliyunUserId"].asString();
			if(!allItemsNodeAccountDTOListAccountDTO["AccountType"].isNull())
				accountDTOListObject.accountType = allItemsNodeAccountDTOListAccountDTO["AccountType"].asString();
			if(!allItemsNodeAccountDTOListAccountDTO["AuthType"].isNull())
				accountDTOListObject.authType = allItemsNodeAccountDTOListAccountDTO["AuthType"].asString();
			itemsObject.accountDTOList.push_back(accountDTOListObject);
		}
		items_.push_back(itemsObject);
	}
	if(!value["Paging"].isNull())
		paging_ = value["Paging"].asString() == "true";
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int PageListUsersResult::getTotalCount()const
{
	return totalCount_;
}

int PageListUsersResult::getPageSize()const
{
	return pageSize_;
}

int PageListUsersResult::getPageNumber()const
{
	return pageNumber_;
}

bool PageListUsersResult::getPaging()const
{
	return paging_;
}

std::vector<PageListUsersResult::Item> PageListUsersResult::getItems()const
{
	return items_;
}

