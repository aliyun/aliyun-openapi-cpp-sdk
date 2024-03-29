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

#include <alibabacloud/devops/model/ListGroupMemberResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListGroupMemberResult::ListGroupMemberResult() :
	ServiceResult()
{}

ListGroupMemberResult::ListGroupMemberResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListGroupMemberResult::~ListGroupMemberResult()
{}

void ListGroupMemberResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["resultItem"];
	for (auto valueresultresultItem : allresultNode)
	{
		ResultItem resultObject;
		if(!valueresultresultItem["id"].isNull())
			resultObject.id = std::stol(valueresultresultItem["id"].asString());
		if(!valueresultresultItem["name"].isNull())
			resultObject.name = valueresultresultItem["name"].asString();
		if(!valueresultresultItem["username"].isNull())
			resultObject.username = valueresultresultItem["username"].asString();
		if(!valueresultresultItem["state"].isNull())
			resultObject.state = valueresultresultItem["state"].asString();
		if(!valueresultresultItem["avatarUrl"].isNull())
			resultObject.avatarUrl = valueresultresultItem["avatarUrl"].asString();
		if(!valueresultresultItem["email"].isNull())
			resultObject.email = valueresultresultItem["email"].asString();
		if(!valueresultresultItem["externUid"].isNull())
			resultObject.externUid = valueresultresultItem["externUid"].asString();
		if(!valueresultresultItem["accessLevel"].isNull())
			resultObject.accessLevel = std::stoi(valueresultresultItem["accessLevel"].asString());
		if(!valueresultresultItem["memberType"].isNull())
			resultObject.memberType = valueresultresultItem["memberType"].asString();
		if(!valueresultresultItem["sourceId"].isNull())
			resultObject.sourceId = std::stol(valueresultresultItem["sourceId"].asString());
		result_.push_back(resultObject);
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

std::vector<ListGroupMemberResult::ResultItem> ListGroupMemberResult::getresult()const
{
	return result_;
}

std::string ListGroupMemberResult::getRequestId()const
{
	return requestId_;
}

std::string ListGroupMemberResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListGroupMemberResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListGroupMemberResult::getSuccess()const
{
	return success_;
}

