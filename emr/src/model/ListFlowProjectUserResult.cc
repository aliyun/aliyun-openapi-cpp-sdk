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

#include <alibabacloud/emr/model/ListFlowProjectUserResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListFlowProjectUserResult::ListFlowProjectUserResult() :
	ServiceResult()
{}

ListFlowProjectUserResult::ListFlowProjectUserResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFlowProjectUserResult::~ListFlowProjectUserResult()
{}

void ListFlowProjectUserResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUsersNode = value["Users"]["User"];
	for (auto valueUsersUser : allUsersNode)
	{
		User usersObject;
		if(!valueUsersUser["GmtCreate"].isNull())
			usersObject.gmtCreate = std::stol(valueUsersUser["GmtCreate"].asString());
		if(!valueUsersUser["GmtModified"].isNull())
			usersObject.gmtModified = std::stol(valueUsersUser["GmtModified"].asString());
		if(!valueUsersUser["ProjectId"].isNull())
			usersObject.projectId = valueUsersUser["ProjectId"].asString();
		if(!valueUsersUser["OwnerId"].isNull())
			usersObject.ownerId = valueUsersUser["OwnerId"].asString();
		if(!valueUsersUser["UserName"].isNull())
			usersObject.userName = valueUsersUser["UserName"].asString();
		if(!valueUsersUser["AccountUserId"].isNull())
			usersObject.accountUserId = valueUsersUser["AccountUserId"].asString();
		users_.push_back(usersObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());

}

int ListFlowProjectUserResult::getPageSize()const
{
	return pageSize_;
}

int ListFlowProjectUserResult::getPageNumber()const
{
	return pageNumber_;
}

int ListFlowProjectUserResult::getTotal()const
{
	return total_;
}

std::vector<ListFlowProjectUserResult::User> ListFlowProjectUserResult::getUsers()const
{
	return users_;
}

