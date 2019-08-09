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

#include <alibabacloud/ram/model/ListUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ram;
using namespace AlibabaCloud::Ram::Model;

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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allUsers = value["Users"]["User"];
	for (auto value : allUsers)
	{
		User usersObject;
		if(!value["UserId"].isNull())
			usersObject.userId = value["UserId"].asString();
		if(!value["UserName"].isNull())
			usersObject.userName = value["UserName"].asString();
		if(!value["DisplayName"].isNull())
			usersObject.displayName = value["DisplayName"].asString();
		if(!value["MobilePhone"].isNull())
			usersObject.mobilePhone = value["MobilePhone"].asString();
		if(!value["Email"].isNull())
			usersObject.email = value["Email"].asString();
		if(!value["Comments"].isNull())
			usersObject.comments = value["Comments"].asString();
		if(!value["CreateDate"].isNull())
			usersObject.createDate = value["CreateDate"].asString();
		if(!value["UpdateDate"].isNull())
			usersObject.updateDate = value["UpdateDate"].asString();
		users_.push_back(usersObject);
	}
	if(!value["IsTruncated"].isNull())
		isTruncated_ = value["IsTruncated"].asString() == "true";
	if(!value["Marker"].isNull())
		marker_ = value["Marker"].asString();

}

bool ListUsersResult::getIsTruncated()const
{
	return isTruncated_;
}

std::vector<ListUsersResult::User> ListUsersResult::getUsers()const
{
	return users_;
}

std::string ListUsersResult::getMarker()const
{
	return marker_;
}

