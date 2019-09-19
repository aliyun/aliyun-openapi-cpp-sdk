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

#include <alibabacloud/emr/model/PageListResourceUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

PageListResourceUsersResult::PageListResourceUsersResult() :
	ServiceResult()
{}

PageListResourceUsersResult::PageListResourceUsersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PageListResourceUsersResult::~PageListResourceUsersResult()
{}

void PageListResourceUsersResult::parse(const std::string &payload)
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
		if(!valueItemsItem["Status"].isNull())
			itemsObject.status = valueItemsItem["Status"].asString();
		if(!valueItemsItem["GmtCreate"].isNull())
			itemsObject.gmtCreate = std::stol(valueItemsItem["GmtCreate"].asString());
		if(!valueItemsItem["KnoxSyncStatus"].isNull())
			itemsObject.knoxSyncStatus = valueItemsItem["KnoxSyncStatus"].asString();
		if(!valueItemsItem["LinuxSyncStatus"].isNull())
			itemsObject.linuxSyncStatus = valueItemsItem["LinuxSyncStatus"].asString();
		if(!valueItemsItem["KerberosStutus"].isNull())
			itemsObject.kerberosStutus = valueItemsItem["KerberosStutus"].asString();
		if(!valueItemsItem["SourceType"].isNull())
			itemsObject.sourceType = valueItemsItem["SourceType"].asString();
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

int PageListResourceUsersResult::getTotalCount()const
{
	return totalCount_;
}

int PageListResourceUsersResult::getPageSize()const
{
	return pageSize_;
}

int PageListResourceUsersResult::getPageNumber()const
{
	return pageNumber_;
}

bool PageListResourceUsersResult::getPaging()const
{
	return paging_;
}

std::vector<PageListResourceUsersResult::Item> PageListResourceUsersResult::getItems()const
{
	return items_;
}

