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

#include <alibabacloud/devops/model/ListResourceMembersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListResourceMembersResult::ListResourceMembersResult() :
	ServiceResult()
{}

ListResourceMembersResult::ListResourceMembersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListResourceMembersResult::~ListResourceMembersResult()
{}

void ListResourceMembersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresourceMembersNode = value["resourceMembers"]["ResourceMember"];
	for (auto valueresourceMembersResourceMember : allresourceMembersNode)
	{
		ResourceMember resourceMembersObject;
		if(!valueresourceMembersResourceMember["accountId"].isNull())
			resourceMembersObject.accountId = valueresourceMembersResourceMember["accountId"].asString();
		if(!valueresourceMembersResourceMember["roleName"].isNull())
			resourceMembersObject.roleName = valueresourceMembersResourceMember["roleName"].asString();
		if(!valueresourceMembersResourceMember["username"].isNull())
			resourceMembersObject.username = valueresourceMembersResourceMember["username"].asString();
		resourceMembers_.push_back(resourceMembersObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string ListResourceMembersResult::getRequestId()const
{
	return requestId_;
}

std::string ListResourceMembersResult::getErrorCode()const
{
	return errorCode_;
}

std::vector<ListResourceMembersResult::ResourceMember> ListResourceMembersResult::getresourceMembers()const
{
	return resourceMembers_;
}

std::string ListResourceMembersResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListResourceMembersResult::getSuccess()const
{
	return success_;
}

