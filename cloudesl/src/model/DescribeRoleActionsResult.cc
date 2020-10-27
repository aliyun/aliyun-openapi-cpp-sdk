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

#include <alibabacloud/cloudesl/model/DescribeRoleActionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

DescribeRoleActionsResult::DescribeRoleActionsResult() :
	ServiceResult()
{}

DescribeRoleActionsResult::DescribeRoleActionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRoleActionsResult::~DescribeRoleActionsResult()
{}

void DescribeRoleActionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRoleAclInfosNode = value["RoleAclInfos"]["RoleAclInfo"];
	for (auto valueRoleAclInfosRoleAclInfo : allRoleAclInfosNode)
	{
		RoleAclInfo roleAclInfosObject;
		if(!valueRoleAclInfosRoleAclInfo["RoleCode"].isNull())
			roleAclInfosObject.roleCode = valueRoleAclInfosRoleAclInfo["RoleCode"].asString();
		if(!valueRoleAclInfosRoleAclInfo["Name"].isNull())
			roleAclInfosObject.name = valueRoleAclInfosRoleAclInfo["Name"].asString();
		auto allAccessControlListsNode = allRoleAclInfosNode["AccessControlLists"]["RoleActionInfo"];
		for (auto allRoleAclInfosNodeAccessControlListsRoleActionInfo : allAccessControlListsNode)
		{
			RoleAclInfo::RoleActionInfo accessControlListsObject;
			if(!allRoleAclInfosNodeAccessControlListsRoleActionInfo["Code"].isNull())
				accessControlListsObject.code = allRoleAclInfosNodeAccessControlListsRoleActionInfo["Code"].asString();
			roleAclInfosObject.accessControlLists.push_back(accessControlListsObject);
		}
		roleAclInfos_.push_back(roleAclInfosObject);
	}
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeRoleActionsResult::getMessage()const
{
	return message_;
}

std::vector<DescribeRoleActionsResult::RoleAclInfo> DescribeRoleActionsResult::getRoleAclInfos()const
{
	return roleAclInfos_;
}

std::string DescribeRoleActionsResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string DescribeRoleActionsResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeRoleActionsResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::string DescribeRoleActionsResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string DescribeRoleActionsResult::getCode()const
{
	return code_;
}

bool DescribeRoleActionsResult::getSuccess()const
{
	return success_;
}

