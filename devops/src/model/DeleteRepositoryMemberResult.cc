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

#include <alibabacloud/devops/model/DeleteRepositoryMemberResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

DeleteRepositoryMemberResult::DeleteRepositoryMemberResult() :
	ServiceResult()
{}

DeleteRepositoryMemberResult::DeleteRepositoryMemberResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteRepositoryMemberResult::~DeleteRepositoryMemberResult()
{}

void DeleteRepositoryMemberResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["id"].isNull())
		result_.id = std::stol(resultNode["id"].asString());
	if(!resultNode["createAt"].isNull())
		result_.createAt = resultNode["createAt"].asString();
	if(!resultNode["updateAt"].isNull())
		result_.updateAt = resultNode["updateAt"].asString();
	if(!resultNode["sourceId"].isNull())
		result_.sourceId = std::stol(resultNode["sourceId"].asString());
	if(!resultNode["sourceType"].isNull())
		result_.sourceType = resultNode["sourceType"].asString();
	if(!resultNode["userId"].isNull())
		result_.userId = std::stol(resultNode["userId"].asString());
	if(!resultNode["accessLevel"].isNull())
		result_.accessLevel = std::stoi(resultNode["accessLevel"].asString());
	if(!resultNode["externUid"].isNull())
		result_.externUid = resultNode["externUid"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string DeleteRepositoryMemberResult::getRequestId()const
{
	return requestId_;
}

std::string DeleteRepositoryMemberResult::getErrorCode()const
{
	return errorCode_;
}

std::string DeleteRepositoryMemberResult::getErrorMessage()const
{
	return errorMessage_;
}

bool DeleteRepositoryMemberResult::getSuccess()const
{
	return success_;
}

DeleteRepositoryMemberResult::Result DeleteRepositoryMemberResult::getResult()const
{
	return result_;
}

