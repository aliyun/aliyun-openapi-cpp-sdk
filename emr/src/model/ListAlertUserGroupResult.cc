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

#include <alibabacloud/emr/model/ListAlertUserGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListAlertUserGroupResult::ListAlertUserGroupResult() :
	ServiceResult()
{}

ListAlertUserGroupResult::ListAlertUserGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAlertUserGroupResult::~ListAlertUserGroupResult()
{}

void ListAlertUserGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAlertUserGroupListNode = value["AlertUserGroupList"]["Group"];
	for (auto valueAlertUserGroupListGroup : allAlertUserGroupListNode)
	{
		Group alertUserGroupListObject;
		if(!valueAlertUserGroupListGroup["Id"].isNull())
			alertUserGroupListObject.id = std::stol(valueAlertUserGroupListGroup["Id"].asString());
		if(!valueAlertUserGroupListGroup["GmtCreate"].isNull())
			alertUserGroupListObject.gmtCreate = valueAlertUserGroupListGroup["GmtCreate"].asString();
		if(!valueAlertUserGroupListGroup["GmtModified"].isNull())
			alertUserGroupListObject.gmtModified = valueAlertUserGroupListGroup["GmtModified"].asString();
		if(!valueAlertUserGroupListGroup["BizId"].isNull())
			alertUserGroupListObject.bizId = valueAlertUserGroupListGroup["BizId"].asString();
		if(!valueAlertUserGroupListGroup["Name"].isNull())
			alertUserGroupListObject.name = valueAlertUserGroupListGroup["Name"].asString();
		if(!valueAlertUserGroupListGroup["Description"].isNull())
			alertUserGroupListObject.description = valueAlertUserGroupListGroup["Description"].asString();
		auto allUserListNode = allAlertUserGroupListNode["UserList"]["UserInfo"];
		for (auto allAlertUserGroupListNodeUserListUserInfo : allUserListNode)
		{
			Group::UserInfo userListObject;
			if(!allAlertUserGroupListNodeUserListUserInfo["UserId"].isNull())
				userListObject.userId = allAlertUserGroupListNodeUserListUserInfo["UserId"].asString();
			if(!allAlertUserGroupListNodeUserListUserInfo["UserName"].isNull())
				userListObject.userName = allAlertUserGroupListNodeUserListUserInfo["UserName"].asString();
			if(!allAlertUserGroupListNodeUserListUserInfo["EnableSMS"].isNull())
				userListObject.enableSMS = allAlertUserGroupListNodeUserListUserInfo["EnableSMS"].asString() == "true";
			if(!allAlertUserGroupListNodeUserListUserInfo["EnableEmail"].isNull())
				userListObject.enableEmail = allAlertUserGroupListNodeUserListUserInfo["EnableEmail"].asString() == "true";
			alertUserGroupListObject.userList.push_back(userListObject);
		}
		alertUserGroupList_.push_back(alertUserGroupListObject);
	}

}

std::vector<ListAlertUserGroupResult::Group> ListAlertUserGroupResult::getAlertUserGroupList()const
{
	return alertUserGroupList_;
}

