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

#include <alibabacloud/devops/model/GetOrganizationMemberResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

GetOrganizationMemberResult::GetOrganizationMemberResult() :
	ServiceResult()
{}

GetOrganizationMemberResult::GetOrganizationMemberResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOrganizationMemberResult::~GetOrganizationMemberResult()
{}

void GetOrganizationMemberResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto memberNode = value["member"];
	if(!memberNode["accountId"].isNull())
		member_.accountId = memberNode["accountId"].asString();
	if(!memberNode["birthday"].isNull())
		member_.birthday = std::stol(memberNode["birthday"].asString());
	if(!memberNode["email"].isNull())
		member_.email = memberNode["email"].asString();
	if(!memberNode["hiredDate"].isNull())
		member_.hiredDate = std::stol(memberNode["hiredDate"].asString());
	if(!memberNode["joinTime"].isNull())
		member_.joinTime = std::stol(memberNode["joinTime"].asString());
	if(!memberNode["lastVisitTime"].isNull())
		member_.lastVisitTime = std::stol(memberNode["lastVisitTime"].asString());
	if(!memberNode["mobile"].isNull())
		member_.mobile = memberNode["mobile"].asString();
	if(!memberNode["organizationMemberName"].isNull())
		member_.organizationMemberName = memberNode["organizationMemberName"].asString();
	if(!memberNode["organizationRoleName"].isNull())
		member_.organizationRoleName = memberNode["organizationRoleName"].asString();
	if(!memberNode["jobNumber"].isNull())
		member_.jobNumber = memberNode["jobNumber"].asString();
	if(!memberNode["organizationRoleId"].isNull())
		member_.organizationRoleId = memberNode["organizationRoleId"].asString();
	if(!memberNode["state"].isNull())
		member_.state = memberNode["state"].asString();
	auto identitiesNode = memberNode["identities"];
	if(!identitiesNode["externUid"].isNull())
		member_.identities.externUid = identitiesNode["externUid"].asString();
	if(!identitiesNode["provider"].isNull())
		member_.identities.provider = identitiesNode["provider"].asString();
		auto allDeptLists = memberNode["deptLists"]["部门名称"];
		for (auto value : allDeptLists)
			member_.deptLists.push_back(value.asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string GetOrganizationMemberResult::getRequestId()const
{
	return requestId_;
}

std::string GetOrganizationMemberResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetOrganizationMemberResult::getErrorMessage()const
{
	return errorMessage_;
}

GetOrganizationMemberResult::Member GetOrganizationMemberResult::getMember()const
{
	return member_;
}

bool GetOrganizationMemberResult::getSuccess()const
{
	return success_;
}

