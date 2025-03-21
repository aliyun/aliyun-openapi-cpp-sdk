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

#include <alibabacloud/eiam/model/ListUsersForGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

ListUsersForGroupResult::ListUsersForGroupResult() :
	ServiceResult()
{}

ListUsersForGroupResult::ListUsersForGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUsersForGroupResult::~ListUsersForGroupResult()
{}

void ListUsersForGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUsersNode = value["Users"]["User"];
	for (auto valueUsersUser : allUsersNode)
	{
		User usersObject;
		if(!valueUsersUser["UserId"].isNull())
			usersObject.userId = valueUsersUser["UserId"].asString();
		if(!valueUsersUser["GroupMemberRelationSourceId"].isNull())
			usersObject.groupMemberRelationSourceId = valueUsersUser["GroupMemberRelationSourceId"].asString();
		if(!valueUsersUser["GroupMemberRelationSourceType"].isNull())
			usersObject.groupMemberRelationSourceType = valueUsersUser["GroupMemberRelationSourceType"].asString();
		users_.push_back(usersObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListUsersForGroupResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListUsersForGroupResult::User> ListUsersForGroupResult::getUsers()const
{
	return users_;
}

