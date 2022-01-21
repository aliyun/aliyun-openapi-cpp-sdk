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

#include <alibabacloud/dms-enterprise/model/ListUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListUsersResult::ListUsersResult() :
	ServiceResult()
{}

ListUsersResult::ListUsersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUsersResult::~ListUsersResult()
{}

void ListUsersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUserListNode = value["UserList"]["User"];
	for (auto valueUserListUser : allUserListNode)
	{
		User userListObject;
		if(!valueUserListUser["State"].isNull())
			userListObject.state = valueUserListUser["State"].asString();
		if(!valueUserListUser["CurResultCount"].isNull())
			userListObject.curResultCount = std::stol(valueUserListUser["CurResultCount"].asString());
		if(!valueUserListUser["UserId"].isNull())
			userListObject.userId = valueUserListUser["UserId"].asString();
		if(!valueUserListUser["LastLoginTime"].isNull())
			userListObject.lastLoginTime = valueUserListUser["LastLoginTime"].asString();
		if(!valueUserListUser["MaxResultCount"].isNull())
			userListObject.maxResultCount = std::stol(valueUserListUser["MaxResultCount"].asString());
		if(!valueUserListUser["ParentUid"].isNull())
			userListObject.parentUid = valueUserListUser["ParentUid"].asString();
		if(!valueUserListUser["NickName"].isNull())
			userListObject.nickName = valueUserListUser["NickName"].asString();
		if(!valueUserListUser["MaxExecuteCount"].isNull())
			userListObject.maxExecuteCount = std::stol(valueUserListUser["MaxExecuteCount"].asString());
		if(!valueUserListUser["CurExecuteCount"].isNull())
			userListObject.curExecuteCount = std::stol(valueUserListUser["CurExecuteCount"].asString());
		if(!valueUserListUser["Mobile"].isNull())
			userListObject.mobile = valueUserListUser["Mobile"].asString();
		if(!valueUserListUser["Uid"].isNull())
			userListObject.uid = valueUserListUser["Uid"].asString();
		if(!valueUserListUser["Email"].isNull())
			userListObject.email = valueUserListUser["Email"].asString();
		if(!valueUserListUser["DingRobot"].isNull())
			userListObject.dingRobot = valueUserListUser["DingRobot"].asString();
		if(!valueUserListUser["Webhook"].isNull())
			userListObject.webhook = valueUserListUser["Webhook"].asString();
		if(!valueUserListUser["SignatureMethod"].isNull())
			userListObject.signatureMethod = valueUserListUser["SignatureMethod"].asString();
		if(!valueUserListUser["NotificationMode"].isNull())
			userListObject.notificationMode = valueUserListUser["NotificationMode"].asString();
		auto allRoleIdList = value["RoleIdList"]["RoleIds"];
		for (auto value : allRoleIdList)
			userListObject.roleIdList.push_back(value.asString());
		auto allRoleNameList = value["RoleNameList"]["RoleNames"];
		for (auto value : allRoleNameList)
			userListObject.roleNameList.push_back(value.asString());
		userList_.push_back(userListObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

long ListUsersResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListUsersResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListUsersResult::getErrorMessage()const
{
	return errorMessage_;
}

std::vector<ListUsersResult::User> ListUsersResult::getUserList()const
{
	return userList_;
}

bool ListUsersResult::getSuccess()const
{
	return success_;
}

