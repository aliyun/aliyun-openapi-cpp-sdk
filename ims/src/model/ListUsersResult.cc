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

#include <alibabacloud/ims/model/ListUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ims;
using namespace AlibabaCloud::Ims::Model;

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
	auto allUsersNode = value["Users"]["User"];
	for (auto valueUsersUser : allUsersNode)
	{
		User usersObject;
		if(!valueUsersUser["DisplayName"].isNull())
			usersObject.displayName = valueUsersUser["DisplayName"].asString();
		if(!valueUsersUser["UserPrincipalName"].isNull())
			usersObject.userPrincipalName = valueUsersUser["UserPrincipalName"].asString();
		if(!valueUsersUser["Email"].isNull())
			usersObject.email = valueUsersUser["Email"].asString();
		if(!valueUsersUser["UpdateDate"].isNull())
			usersObject.updateDate = valueUsersUser["UpdateDate"].asString();
		if(!valueUsersUser["MobilePhone"].isNull())
			usersObject.mobilePhone = valueUsersUser["MobilePhone"].asString();
		if(!valueUsersUser["UserId"].isNull())
			usersObject.userId = valueUsersUser["UserId"].asString();
		if(!valueUsersUser["Comments"].isNull())
			usersObject.comments = valueUsersUser["Comments"].asString();
		if(!valueUsersUser["LastLoginDate"].isNull())
			usersObject.lastLoginDate = valueUsersUser["LastLoginDate"].asString();
		if(!valueUsersUser["CreateDate"].isNull())
			usersObject.createDate = valueUsersUser["CreateDate"].asString();
		if(!valueUsersUser["ProvisionType"].isNull())
			usersObject.provisionType = valueUsersUser["ProvisionType"].asString();
		if(!valueUsersUser["Status"].isNull())
			usersObject.status = valueUsersUser["Status"].asString();
		auto allTagsNode = valueUsersUser["Tags"]["Tag"];
		for (auto valueUsersUserTagsTag : allTagsNode)
		{
			User::Tag tagsObject;
			if(!valueUsersUserTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valueUsersUserTagsTag["TagKey"].asString();
			if(!valueUsersUserTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valueUsersUserTagsTag["TagValue"].asString();
			usersObject.tags.push_back(tagsObject);
		}
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

