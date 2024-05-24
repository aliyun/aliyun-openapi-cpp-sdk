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

#include <alibabacloud/live/model/ListMessageGroupUserByIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

ListMessageGroupUserByIdResult::ListMessageGroupUserByIdResult() :
	ServiceResult()
{}

ListMessageGroupUserByIdResult::ListMessageGroupUserByIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMessageGroupUserByIdResult::~ListMessageGroupUserByIdResult()
{}

void ListMessageGroupUserByIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["HasMore"].isNull())
		result_.hasMore = resultNode["HasMore"].asString() == "true";
	if(!resultNode["Total"].isNull())
		result_.total = std::stoi(resultNode["Total"].asString());
	auto allUserListNode = resultNode["UserList"]["userListItem"];
	for (auto resultNodeUserListuserListItem : allUserListNode)
	{
		Result::UserListItem userListItemObject;
		if(!resultNodeUserListuserListItem["IsMute"].isNull())
			userListItemObject.isMute = resultNodeUserListuserListItem["IsMute"].asString() == "true";
		if(!resultNodeUserListuserListItem["UserAvatar"].isNull())
			userListItemObject.userAvatar = resultNodeUserListuserListItem["UserAvatar"].asString();
		if(!resultNodeUserListuserListItem["UserExtension"].isNull())
			userListItemObject.userExtension = resultNodeUserListuserListItem["UserExtension"].asString();
		if(!resultNodeUserListuserListItem["UserId"].isNull())
			userListItemObject.userId = resultNodeUserListuserListItem["UserId"].asString();
		if(!resultNodeUserListuserListItem["UserNick"].isNull())
			userListItemObject.userNick = resultNodeUserListuserListItem["UserNick"].asString();
		auto allMuteBy = value["MuteBy"]["muteBy"];
		for (auto value : allMuteBy)
			userListItemObject.muteBy.push_back(value.asString());
		result_.userList.push_back(userListItemObject);
	}

}

ListMessageGroupUserByIdResult::Result ListMessageGroupUserByIdResult::getResult()const
{
	return result_;
}

