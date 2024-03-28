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

#include <alibabacloud/devops/model/ListOrganizationMembersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListOrganizationMembersResult::ListOrganizationMembersResult() :
	ServiceResult()
{}

ListOrganizationMembersResult::ListOrganizationMembersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListOrganizationMembersResult::~ListOrganizationMembersResult()
{}

void ListOrganizationMembersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allmembersNode = value["members"]["Member"];
	for (auto valuemembersMember : allmembersNode)
	{
		Member membersObject;
		if(!valuemembersMember["accountId"].isNull())
			membersObject.accountId = valuemembersMember["accountId"].asString();
		if(!valuemembersMember["birthday"].isNull())
			membersObject.birthday = std::stol(valuemembersMember["birthday"].asString());
		if(!valuemembersMember["email"].isNull())
			membersObject.email = valuemembersMember["email"].asString();
		if(!valuemembersMember["hiredDate"].isNull())
			membersObject.hiredDate = std::stol(valuemembersMember["hiredDate"].asString());
		if(!valuemembersMember["joinTime"].isNull())
			membersObject.joinTime = std::stol(valuemembersMember["joinTime"].asString());
		if(!valuemembersMember["lastVisitTime"].isNull())
			membersObject.lastVisitTime = std::stol(valuemembersMember["lastVisitTime"].asString());
		if(!valuemembersMember["mobile"].isNull())
			membersObject.mobile = valuemembersMember["mobile"].asString();
		if(!valuemembersMember["organizationMemberName"].isNull())
			membersObject.organizationMemberName = valuemembersMember["organizationMemberName"].asString();
		if(!valuemembersMember["organizationRoleName"].isNull())
			membersObject.organizationRoleName = valuemembersMember["organizationRoleName"].asString();
		if(!valuemembersMember["organizationRoleId"].isNull())
			membersObject.organizationRoleId = valuemembersMember["organizationRoleId"].asString();
		if(!valuemembersMember["state"].isNull())
			membersObject.state = valuemembersMember["state"].asString();
		if(!valuemembersMember["jobNumber"].isNull())
			membersObject.jobNumber = valuemembersMember["jobNumber"].asString();
		auto identitiesNode = value["identities"];
		if(!identitiesNode["externUid"].isNull())
			membersObject.identities.externUid = identitiesNode["externUid"].asString();
		if(!identitiesNode["provider"].isNull())
			membersObject.identities.provider = identitiesNode["provider"].asString();
		auto allDeptLists = value["deptLists"]["部门名称"];
		for (auto value : allDeptLists)
			membersObject.deptLists.push_back(value.asString());
		members_.push_back(membersObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["nextToken"].isNull())
		nextToken_ = value["nextToken"].asString();
	if(!value["totalCount"].isNull())
		totalCount_ = std::stol(value["totalCount"].asString());

}

long ListOrganizationMembersResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListOrganizationMembersResult::getRequestId()const
{
	return requestId_;
}

std::string ListOrganizationMembersResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListOrganizationMembersResult::Member> ListOrganizationMembersResult::getmembers()const
{
	return members_;
}

std::string ListOrganizationMembersResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListOrganizationMembersResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListOrganizationMembersResult::getSuccess()const
{
	return success_;
}

