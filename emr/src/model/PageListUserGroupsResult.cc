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
	auto allItems = value["Items"]["Item"];
	for (auto value : allItems)
	{
		Item itemsObject;
		if(!value["Id"].isNull())
			itemsObject.id = std::stol(value["Id"].asString());
		if(!value["Type"].isNull())
			itemsObject.type = value["Type"].asString();
		if(!value["Name"].isNull())
			itemsObject.name = value["Name"].asString();
		if(!value["GmtCreate"].isNull())
			itemsObject.gmtCreate = value["GmtCreate"].asString();
		auto allRoleDTOList = value["RoleDTOList"]["RoleDTO"];
		for (auto value : allRoleDTOList)
		{
			Item::RoleDTO roleDTOListObject;
			if(!value["Id"].isNull())
				roleDTOListObject.id = std::stol(value["Id"].asString());
			if(!value["Name"].isNull())
				roleDTOListObject.name = value["Name"].asString();
			if(!value["ResourceType"].isNull())
				roleDTOListObject.resourceType = value["ResourceType"].asString();
			if(!value["GmtCreate"].isNull())
				roleDTOListObject.gmtCreate = value["GmtCreate"].asString();
			if(!value["GmtModified"].isNull())
				roleDTOListObject.gmtModified = value["GmtModified"].asString();
			if(!value["Description"].isNull())
				roleDTOListObject.description = value["Description"].asString();
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

