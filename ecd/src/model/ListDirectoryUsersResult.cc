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

#include <alibabacloud/ecd/model/ListDirectoryUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

ListDirectoryUsersResult::ListDirectoryUsersResult() :
	ServiceResult()
{}

ListDirectoryUsersResult::ListDirectoryUsersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDirectoryUsersResult::~ListDirectoryUsersResult()
{}

void ListDirectoryUsersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUsersNode = value["Users"]["User"];
	for (auto valueUsersUser : allUsersNode)
	{
		User usersObject;
		if(!valueUsersUser["EndUser"].isNull())
			usersObject.endUser = valueUsersUser["EndUser"].asString();
		if(!valueUsersUser["DisplayName"].isNull())
			usersObject.displayName = valueUsersUser["DisplayName"].asString();
		users_.push_back(usersObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string ListDirectoryUsersResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListDirectoryUsersResult::User> ListDirectoryUsersResult::getUsers()const
{
	return users_;
}

