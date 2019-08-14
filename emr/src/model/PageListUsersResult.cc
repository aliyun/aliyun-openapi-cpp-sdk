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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["Item"];
	for (auto value : allItems)
	{
		Item itemsObject;
		if(!value["AliyunUserId"].isNull())
			itemsObject.aliyunUserId = value["AliyunUserId"].asString();
		if(!value["UserName"].isNull())
			itemsObject.userName = value["UserName"].asString();
		if(!value["UserType"].isNull())
			itemsObject.userType = value["UserType"].asString();
		if(!value["Status"].isNull())
			itemsObject.status = value["Status"].asString();
		if(!value["IsSuperAdmin"].isNull())
			itemsObject.isSuperAdmin = value["IsSuperAdmin"].asString();
		if(!value["Description"].isNull())
			itemsObject.description = value["Description"].asString();
		if(!value["GmtCreate"].isNull())
			itemsObject.gmtCreate = value["GmtCreate"].asString();
		if(!value["GmtModified"].isNull())
			itemsObject.gmtModified = value["GmtModified"].asString();
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
		auto allGroupDTOList = value["GroupDTOList"]["GroupDTO"];
		for (auto value : allGroupDTOList)
		{
			Item::GroupDTO groupDTOListObject;
			if(!value["Id"].isNull())
				groupDTOListObject.id = std::stol(value["Id"].asString());
			if(!value["Type"].isNull())
				groupDTOListObject.type = value["Type"].asString();
			if(!value["Name"].isNull())
				groupDTOListObject.name = value["Name"].asString();
			if(!value["GmtCreate"].isNull())
				groupDTOListObject.gmtCreate = value["GmtCreate"].asString();
			auto allRoleDTOList1 = value["RoleDTOList"]["RoleDTO"];
			for (auto value : allRoleDTOList1)
			{
				Item::GroupDTO::RoleDTO2 roleDTOList1Object;
				if(!value["Id"].isNull())
					roleDTOList1Object.id = std::stol(value["Id"].asString());
				if(!value["Name"].isNull())
					roleDTOList1Object.name = value["Name"].asString();
				if(!value["ResourceType"].isNull())
					roleDTOList1Object.resourceType = value["ResourceType"].asString();
				if(!value["GmtCreate"].isNull())
					roleDTOList1Object.gmtCreate = value["GmtCreate"].asString();
				if(!value["GmtModified"].isNull())
					roleDTOList1Object.gmtModified = value["GmtModified"].asString();
				if(!value["Description"].isNull())
					roleDTOList1Object.description = value["Description"].asString();
				groupDTOListObject.roleDTOList1.push_back(roleDTOList1Object);
			}
			itemsObject.groupDTOList.push_back(groupDTOListObject);
		}
		auto allAccountDTOList = value["AccountDTOList"]["AccountDTO"];
		for (auto value : allAccountDTOList)
		{
			Item::AccountDTO accountDTOListObject;
			if(!value["AliyunUserId"].isNull())
				accountDTOListObject.aliyunUserId = value["AliyunUserId"].asString();
			if(!value["AccountType"].isNull())
				accountDTOListObject.accountType = value["AccountType"].asString();
			if(!value["AuthType"].isNull())
				accountDTOListObject.authType = value["AuthType"].asString();
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

