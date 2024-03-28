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

#include <alibabacloud/devops/model/AddRepositoryMemberResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

AddRepositoryMemberResult::AddRepositoryMemberResult() :
	ServiceResult()
{}

AddRepositoryMemberResult::AddRepositoryMemberResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AddRepositoryMemberResult::~AddRepositoryMemberResult()
{}

void AddRepositoryMemberResult::parse(const std::string &payload)
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
		if(!valueresultResultItem["id"].isNull())
			resultObject.id = std::stol(valueresultResultItem["id"].asString());
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

std::vector<AddRepositoryMemberResult::ResultItem> AddRepositoryMemberResult::getresult()const
{
	return result_;
}

std::string AddRepositoryMemberResult::getRequestId()const
{
	return requestId_;
}

std::string AddRepositoryMemberResult::getErrorCode()const
{
	return errorCode_;
}

std::string AddRepositoryMemberResult::getErrorMessage()const
{
	return errorMessage_;
}

bool AddRepositoryMemberResult::getSuccess()const
{
	return success_;
}

