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
	auto allRoleDTOList = value["RoleDTOList"]["RoleDTO"];
	for (auto value : allRoleDTOList)
	{
		RoleDTO roleDTOListObject;
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
		roleDTOList_.push_back(roleDTOListObject);
	}
	auto allGroupDTOList = value["GroupDTOList"]["GroupDTO"];
	for (auto value : allGroupDTOList)
	{
		GroupDTO groupDTOListObject;
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
			GroupDTO::RoleDTO2 roleDTOList1Object;
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
		groupDTOList_.push_back(groupDTOListObject);
	}
	auto allAccountDTOList = value["AccountDTOList"]["AccountDTO"];
	for (auto value : allAccountDTOList)
	{
		AccountDTO accountDTOListObject;
		if(!value["AliyunUserId"].isNull())
			accountDTOListObject.aliyunUserId = value["AliyunUserId"].asString();
		if(!value["AccountType"].isNull())
			accountDTOListObject.accountType = value["AccountType"].asString();
		if(!value["AuthType"].isNull())
			accountDTOListObject.authType = value["AuthType"].asString();
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

