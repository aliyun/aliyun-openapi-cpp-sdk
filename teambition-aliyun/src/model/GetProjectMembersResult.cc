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

#include <alibabacloud/teambition-aliyun/model/GetProjectMembersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Teambition_aliyun;
using namespace AlibabaCloud::Teambition_aliyun::Model;

GetProjectMembersResult::GetProjectMembersResult() :
	ServiceResult()
{}

GetProjectMembersResult::GetProjectMembersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetProjectMembersResult::~GetProjectMembersResult()
{}

void GetProjectMembersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allObjectNode = value["Object"]["Member"];
	for (auto valueObjectMember : allObjectNode)
	{
		Member objectObject;
		if(!valueObjectMember["MemberId"].isNull())
			objectObject.memberId = valueObjectMember["MemberId"].asString();
		if(!valueObjectMember["UserId"].isNull())
			objectObject.userId = valueObjectMember["UserId"].asString();
		if(!valueObjectMember["Role"].isNull())
			objectObject.role = std::stoi(valueObjectMember["Role"].asString());
		if(!valueObjectMember["Name"].isNull())
			objectObject.name = valueObjectMember["Name"].asString();
		if(!valueObjectMember["AvatarUrl"].isNull())
			objectObject.avatarUrl = valueObjectMember["AvatarUrl"].asString();
		if(!valueObjectMember["Email"].isNull())
			objectObject.email = valueObjectMember["Email"].asString();
		if(!valueObjectMember["Phone"].isNull())
			objectObject.phone = valueObjectMember["Phone"].asString();
		object_.push_back(objectObject);
	}
	if(!value["Successful"].isNull())
		successful_ = value["Successful"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMsg"].isNull())
		errorMsg_ = value["ErrorMsg"].asString();

}

std::string GetProjectMembersResult::getErrorMsg()const
{
	return errorMsg_;
}

std::vector<GetProjectMembersResult::Member> GetProjectMembersResult::getObject()const
{
	return object_;
}

std::string GetProjectMembersResult::getErrorCode()const
{
	return errorCode_;
}

bool GetProjectMembersResult::getSuccessful()const
{
	return successful_;
}

