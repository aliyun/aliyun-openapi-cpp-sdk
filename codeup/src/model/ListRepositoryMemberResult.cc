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

#include <alibabacloud/codeup/model/ListRepositoryMemberResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Codeup;
using namespace AlibabaCloud::Codeup::Model;

ListRepositoryMemberResult::ListRepositoryMemberResult() :
	ServiceResult()
{}

ListRepositoryMemberResult::ListRepositoryMemberResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRepositoryMemberResult::~ListRepositoryMemberResult()
{}

void ListRepositoryMemberResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResultNode = value["Result"]["ResultItem"];
	for (auto valueResultResultItem : allResultNode)
	{
		ResultItem resultObject;
		if(!valueResultResultItem["AccessLevel"].isNull())
			resultObject.accessLevel = std::stoi(valueResultResultItem["AccessLevel"].asString());
		if(!valueResultResultItem["ExternUserId"].isNull())
			resultObject.externUserId = valueResultResultItem["ExternUserId"].asString();
		if(!valueResultResultItem["Id"].isNull())
			resultObject.id = std::stol(valueResultResultItem["Id"].asString());
		if(!valueResultResultItem["State"].isNull())
			resultObject.state = valueResultResultItem["State"].asString();
		if(!valueResultResultItem["AvatarUrl"].isNull())
			resultObject.avatarUrl = valueResultResultItem["AvatarUrl"].asString();
		if(!valueResultResultItem["Email"].isNull())
			resultObject.email = valueResultResultItem["Email"].asString();
		if(!valueResultResultItem["Name"].isNull())
			resultObject.name = valueResultResultItem["Name"].asString();
		if(!valueResultResultItem["Username"].isNull())
			resultObject.username = valueResultResultItem["Username"].asString();
		result_.push_back(resultObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

long ListRepositoryMemberResult::getTotal()const
{
	return total_;
}

std::string ListRepositoryMemberResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListRepositoryMemberResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListRepositoryMemberResult::getSuccess()const
{
	return success_;
}

std::vector<ListRepositoryMemberResult::ResultItem> ListRepositoryMemberResult::getResult()const
{
	return result_;
}

