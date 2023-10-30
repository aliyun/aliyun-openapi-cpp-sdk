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

#include <alibabacloud/live/model/CheckLiveMessageUsersInGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

CheckLiveMessageUsersInGroupResult::CheckLiveMessageUsersInGroupResult() :
	ServiceResult()
{}

CheckLiveMessageUsersInGroupResult::CheckLiveMessageUsersInGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CheckLiveMessageUsersInGroupResult::~CheckLiveMessageUsersInGroupResult()
{}

void CheckLiveMessageUsersInGroupResult::parse(const std::string &payload)
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
		if(!valueUsersusersItem["Online"].isNull())
			usersObject.online = valueUsersusersItem["Online"].asString() == "true";
		users_.push_back(usersObject);
	}

}

std::vector<CheckLiveMessageUsersInGroupResult::UsersItem> CheckLiveMessageUsersInGroupResult::getUsers()const
{
	return users_;
}

