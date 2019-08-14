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
		if(!value["Status"].isNull())
			itemsObject.status = value["Status"].asString();
		if(!value["GmtCreate"].isNull())
			itemsObject.gmtCreate = std::stol(value["GmtCreate"].asString());
		if(!value["KnoxSyncStatus"].isNull())
			itemsObject.knoxSyncStatus = value["KnoxSyncStatus"].asString();
		if(!value["LinuxSyncStatus"].isNull())
			itemsObject.linuxSyncStatus = value["LinuxSyncStatus"].asString();
		if(!value["KerberosStutus"].isNull())
			itemsObject.kerberosStutus = value["KerberosStutus"].asString();
		if(!value["SourceType"].isNull())
			itemsObject.sourceType = value["SourceType"].asString();
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

