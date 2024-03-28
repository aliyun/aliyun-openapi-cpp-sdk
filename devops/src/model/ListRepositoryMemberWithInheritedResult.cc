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

#include <alibabacloud/devops/model/ListRepositoryMemberWithInheritedResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListRepositoryMemberWithInheritedResult::ListRepositoryMemberWithInheritedResult() :
	ServiceResult()
{}

ListRepositoryMemberWithInheritedResult::ListRepositoryMemberWithInheritedResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRepositoryMemberWithInheritedResult::~ListRepositoryMemberWithInheritedResult()
{}

void ListRepositoryMemberWithInheritedResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["ResultItem"];
	for (auto valueresultResultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultResultItem["externUserId"].isNull())
			resultObject.externUserId = valueresultResultItem["externUserId"].asString();
		if(!valueresultResultItem["email"].isNull())
			resultObject.email = valueresultResultItem["email"].asString();
		if(!valueresultResultItem["avatarUrl"].isNull())
			resultObject.avatarUrl = valueresultResultItem["avatarUrl"].asString();
		if(!valueresultResultItem["state"].isNull())
			resultObject.state = valueresultResultItem["state"].asString();
		if(!valueresultResultItem["accessLevel"].isNull())
			resultObject.accessLevel = std::stoi(valueresultResultItem["accessLevel"].asString());
		if(!valueresultResultItem["name"].isNull())
			resultObject.name = valueresultResultItem["name"].asString();
		if(!valueresultResultItem["id"].isNull())
			resultObject.id = std::stol(valueresultResultItem["id"].asString());
		if(!valueresultResultItem["username"].isNull())
			resultObject.username = valueresultResultItem["username"].asString();
		auto inheritedNode = value["inherited"];
		if(!inheritedNode["type"].isNull())
			resultObject.inherited.type = inheritedNode["type"].asString();
		if(!inheritedNode["nameWithNamespace"].isNull())
			resultObject.inherited.nameWithNamespace = inheritedNode["nameWithNamespace"].asString();
		if(!inheritedNode["pathWithNamespace"].isNull())
			resultObject.inherited.pathWithNamespace = inheritedNode["pathWithNamespace"].asString();
		if(!inheritedNode["visibilityLevel"].isNull())
			resultObject.inherited.visibilityLevel = inheritedNode["visibilityLevel"].asString();
		if(!inheritedNode["path"].isNull())
			resultObject.inherited.path = inheritedNode["path"].asString();
		if(!inheritedNode["name"].isNull())
			resultObject.inherited.name = inheritedNode["name"].asString();
		if(!inheritedNode["id"].isNull())
			resultObject.inherited.id = std::stol(inheritedNode["id"].asString());
		result_.push_back(resultObject);
	}
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::vector<ListRepositoryMemberWithInheritedResult::ResultItem> ListRepositoryMemberWithInheritedResult::getresult()const
{
	return result_;
}

std::string ListRepositoryMemberWithInheritedResult::getRequestId()const
{
	return requestId_;
}

std::string ListRepositoryMemberWithInheritedResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListRepositoryMemberWithInheritedResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListRepositoryMemberWithInheritedResult::getSuccess()const
{
	return success_;
}

