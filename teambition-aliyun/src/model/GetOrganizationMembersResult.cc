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

#include <alibabacloud/teambition-aliyun/model/GetOrganizationMembersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Teambition_aliyun;
using namespace AlibabaCloud::Teambition_aliyun::Model;

GetOrganizationMembersResult::GetOrganizationMembersResult() :
	ServiceResult()
{}

GetOrganizationMembersResult::GetOrganizationMembersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetOrganizationMembersResult::~GetOrganizationMembersResult()
{}

void GetOrganizationMembersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allObjectNode = value["Object"]["member"];
	for (auto valueObjectmember : allObjectNode)
	{
		Member objectObject;
		if(!valueObjectmember["MemberId"].isNull())
			objectObject.memberId = valueObjectmember["MemberId"].asString();
		if(!valueObjectmember["UserId"].isNull())
			objectObject.userId = valueObjectmember["UserId"].asString();
		if(!valueObjectmember["Role"].isNull())
			objectObject.role = std::stoi(valueObjectmember["Role"].asString());
		if(!valueObjectmember["Name"].isNull())
			objectObject.name = valueObjectmember["Name"].asString();
		if(!valueObjectmember["AvatarUrl"].isNull())
			objectObject.avatarUrl = valueObjectmember["AvatarUrl"].asString();
		if(!valueObjectmember["Email"].isNull())
			objectObject.email = valueObjectmember["Email"].asString();
		if(!valueObjectmember["Phone"].isNull())
			objectObject.phone = valueObjectmember["Phone"].asString();
		object_.push_back(objectObject);
	}
	if(!value["Successful"].isNull())
		successful_ = value["Successful"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();

}

std::string GetOrganizationMembersResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<GetOrganizationMembersResult::Member> GetOrganizationMembersResult::getObject()const
{
	return object_;
}

std::string GetOrganizationMembersResult::getErrorCode()const
{
	return errorCode_;
}

bool GetOrganizationMembersResult::getSuccessful()const
{
	return successful_;
}

