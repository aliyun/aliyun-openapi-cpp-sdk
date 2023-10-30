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

#include <alibabacloud/live/model/ListLiveMessageGroupUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

ListLiveMessageGroupUsersResult::ListLiveMessageGroupUsersResult() :
	ServiceResult()
{}

ListLiveMessageGroupUsersResult::ListLiveMessageGroupUsersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLiveMessageGroupUsersResult::~ListLiveMessageGroupUsersResult()
{}

void ListLiveMessageGroupUsersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUserListNode = value["UserList"]["Users"];
	for (auto valueUserListUsers : allUserListNode)
	{
		Users userListObject;
		if(!valueUserListUsers["UserId"].isNull())
			userListObject.userId = valueUserListUsers["UserId"].asString();
		if(!valueUserListUsers["UserInfo"].isNull())
			userListObject.userInfo = valueUserListUsers["UserInfo"].asString();
		userList_.push_back(userListObject);
	}
	if(!value["GroupId"].isNull())
		groupId_ = value["GroupId"].asString();
	if(!value["NextPageToken"].isNull())
		nextPageToken_ = std::stol(value["NextPageToken"].asString());
	if(!value["Hasmore"].isNull())
		hasmore_ = value["Hasmore"].asString() == "true";

}

bool ListLiveMessageGroupUsersResult::getHasmore()const
{
	return hasmore_;
}

long ListLiveMessageGroupUsersResult::getNextPageToken()const
{
	return nextPageToken_;
}

std::vector<ListLiveMessageGroupUsersResult::Users> ListLiveMessageGroupUsersResult::getUserList()const
{
	return userList_;
}

std::string ListLiveMessageGroupUsersResult::getGroupId()const
{
	return groupId_;
}

