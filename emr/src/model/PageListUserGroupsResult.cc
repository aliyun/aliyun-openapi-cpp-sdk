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

#include <alibabacloud/emr/model/PageListUserGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

PageListUserGroupsResult::PageListUserGroupsResult() :
	ServiceResult()
{}

PageListUserGroupsResult::PageListUserGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PageListUserGroupsResult::~PageListUserGroupsResult()
{}

void PageListUserGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Item"];
	for (auto valueItemsItem : allItemsNode)
	{
		Item itemsObject;
		if(!valueItemsItem["Id"].isNull())
			itemsObject.id = std::stol(valueItemsItem["Id"].asString());
		if(!valueItemsItem["Type"].isNull())
			itemsObject.type = valueItemsItem["Type"].asString();
		if(!valueItemsItem["Name"].isNull())
			itemsObject.name = valueItemsItem["Name"].asString();
		if(!valueItemsItem["GmtCreate"].isNull())
			itemsObject.gmtCreate = valueItemsItem["GmtCreate"].asString();
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

int PageListUserGroupsResult::getTotalCount()const
{
	return totalCount_;
}

int PageListUserGroupsResult::getPageSize()const
{
	return pageSize_;
}

int PageListUserGroupsResult::getPageNumber()const
{
	return pageNumber_;
}

bool PageListUserGroupsResult::getPaging()const
{
	return paging_;
}

std::vector<PageListUserGroupsResult::Item> PageListUserGroupsResult::getItems()const
{
	return items_;
}

