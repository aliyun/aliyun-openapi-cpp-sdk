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

#include <alibabacloud/ehpc/model/ListUsersAsyncResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ListUsersAsyncResult::ListUsersAsyncResult() :
	ServiceResult()
{}

ListUsersAsyncResult::ListUsersAsyncResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUsersAsyncResult::~ListUsersAsyncResult()
{}

void ListUsersAsyncResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUsersNode = value["Users"]["UserInfo"];
	for (auto valueUsersUserInfo : allUsersNode)
	{
		UserInfo usersObject;
		if(!valueUsersUserInfo["Name"].isNull())
			usersObject.name = valueUsersUserInfo["Name"].asString();
		if(!valueUsersUserInfo["AddTime"].isNull())
			usersObject.addTime = valueUsersUserInfo["AddTime"].asString();
		if(!valueUsersUserInfo["Group"].isNull())
			usersObject.group = valueUsersUserInfo["Group"].asString();
		if(!valueUsersUserInfo["UserId"].isNull())
			usersObject.userId = valueUsersUserInfo["UserId"].asString();
		if(!valueUsersUserInfo["GroupId"].isNull())
			usersObject.groupId = valueUsersUserInfo["GroupId"].asString();
		users_.push_back(usersObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["AsyncId"].isNull())
		asyncId_ = value["AsyncId"].asString();
	if(!value["AsyncStatus"].isNull())
		asyncStatus_ = value["AsyncStatus"].asString();

}

int ListUsersAsyncResult::getTotalCount()const
{
	return totalCount_;
}

int ListUsersAsyncResult::getPageSize()const
{
	return pageSize_;
}

int ListUsersAsyncResult::getPageNumber()const
{
	return pageNumber_;
}

std::string ListUsersAsyncResult::getAsyncId()const
{
	return asyncId_;
}

std::string ListUsersAsyncResult::getAsyncStatus()const
{
	return asyncStatus_;
}

std::vector<ListUsersAsyncResult::UserInfo> ListUsersAsyncResult::getUsers()const
{
	return users_;
}

