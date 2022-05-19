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

#include <alibabacloud/idaas-doraemon/model/ListUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Idaas_doraemon;
using namespace AlibabaCloud::Idaas_doraemon::Model;

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
	auto allUsersNode = value["Users"]["usersItem"];
	for (auto valueUsersusersItem : allUsersNode)
	{
		UsersItem usersObject;
		if(!valueUsersusersItem["UserId"].isNull())
			usersObject.userId = valueUsersusersItem["UserId"].asString();
		if(!valueUsersusersItem["UserName"].isNull())
			usersObject.userName = valueUsersusersItem["UserName"].asString();
		if(!valueUsersusersItem["UserDisplayName"].isNull())
			usersObject.userDisplayName = valueUsersusersItem["UserDisplayName"].asString();
		users_.push_back(usersObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListUsersResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListUsersResult::UsersItem> ListUsersResult::getUsers()const
{
	return users_;
}

