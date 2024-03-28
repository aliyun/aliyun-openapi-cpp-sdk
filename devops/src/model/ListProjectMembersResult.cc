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

#include <alibabacloud/devops/model/ListProjectMembersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListProjectMembersResult::ListProjectMembersResult() :
	ServiceResult()
{}

ListProjectMembersResult::ListProjectMembersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListProjectMembersResult::~ListProjectMembersResult()
{}

void ListProjectMembersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allmembersNode = value["members"]["member"];
	for (auto valuemembersmember : allmembersNode)
	{
		Member membersObject;
		if(!valuemembersmember["account"].isNull())
			membersObject.account = valuemembersmember["account"].asString();
		if(!valuemembersmember["avatar"].isNull())
			membersObject.avatar = valuemembersmember["avatar"].asString();
		if(!valuemembersmember["dingTalkId"].isNull())
			membersObject.dingTalkId = valuemembersmember["dingTalkId"].asString();
		if(!valuemembersmember["displayName"].isNull())
			membersObject.displayName = valuemembersmember["displayName"].asString();
		if(!valuemembersmember["displayNickName"].isNull())
			membersObject.displayNickName = valuemembersmember["displayNickName"].asString();
		if(!valuemembersmember["displayRealName"].isNull())
			membersObject.displayRealName = valuemembersmember["displayRealName"].asString();
		if(!valuemembersmember["email"].isNull())
			membersObject.email = valuemembersmember["email"].asString();
		if(!valuemembersmember["gender"].isNull())
			membersObject.gender = valuemembersmember["gender"].asString();
		if(!valuemembersmember["identifier"].isNull())
			membersObject.identifier = valuemembersmember["identifier"].asString();
		if(!valuemembersmember["mobile"].isNull())
			membersObject.mobile = valuemembersmember["mobile"].asString();
		if(!valuemembersmember["nameEn"].isNull())
			membersObject.nameEn = valuemembersmember["nameEn"].asString();
		if(!valuemembersmember["nickName"].isNull())
			membersObject.nickName = valuemembersmember["nickName"].asString();
		if(!valuemembersmember["nickNamePinyin"].isNull())
			membersObject.nickNamePinyin = valuemembersmember["nickNamePinyin"].asString();
		if(!valuemembersmember["realName"].isNull())
			membersObject.realName = valuemembersmember["realName"].asString();
		if(!valuemembersmember["realNamePinyin"].isNull())
			membersObject.realNamePinyin = valuemembersmember["realNamePinyin"].asString();
		if(!valuemembersmember["stamp"].isNull())
			membersObject.stamp = valuemembersmember["stamp"].asString();
		if(!valuemembersmember["tbRoleId"].isNull())
			membersObject.tbRoleId = valuemembersmember["tbRoleId"].asString();
		if(!valuemembersmember["roleName"].isNull())
			membersObject.roleName = valuemembersmember["roleName"].asString();
		auto divisionNode = value["division"];
		if(!divisionNode["identifier"].isNull())
			membersObject.division.identifier = divisionNode["identifier"].asString();
		auto organizationUserInfoNode = value["organizationUserInfo"];
		if(!organizationUserInfoNode["organizationIdentifier"].isNull())
			membersObject.organizationUserInfo.organizationIdentifier = organizationUserInfoNode["organizationIdentifier"].asString();
		members_.push_back(membersObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMsg"].isNull())
		errorMsg_ = value["errorMsg"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string ListProjectMembersResult::getRequestId()const
{
	return requestId_;
}

std::vector<ListProjectMembersResult::Member> ListProjectMembersResult::getmembers()const
{
	return members_;
}

std::string ListProjectMembersResult::getErrorMsg()const
{
	return errorMsg_;
}

std::string ListProjectMembersResult::getErrorCode()const
{
	return errorCode_;
}

bool ListProjectMembersResult::getSuccess()const
{
	return success_;
}

