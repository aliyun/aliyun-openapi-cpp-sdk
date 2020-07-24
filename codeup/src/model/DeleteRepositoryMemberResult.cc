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

#include <alibabacloud/codeup/model/DeleteRepositoryMemberResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Codeup;
using namespace AlibabaCloud::Codeup::Model;

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
	auto resultNode = value["Result"];
	if(!resultNode["AccessLevel"].isNull())
		result_.accessLevel = std::stoi(resultNode["AccessLevel"].asString());
	if(!resultNode["Id"].isNull())
		result_.id = std::stol(resultNode["Id"].asString());
	if(!resultNode["CreatedAt"].isNull())
		result_.createdAt = resultNode["CreatedAt"].asString();
	if(!resultNode["UpdatedAt"].isNull())
		result_.updatedAt = resultNode["UpdatedAt"].asString();
	if(!resultNode["SourceId"].isNull())
		result_.sourceId = std::stol(resultNode["SourceId"].asString());
	if(!resultNode["SourceType"].isNull())
		result_.sourceType = resultNode["SourceType"].asString();
	if(!resultNode["UserId"].isNull())
		result_.userId = std::stol(resultNode["UserId"].asString());
	if(!resultNode["NotificationLevel"].isNull())
		result_.notificationLevel = std::stoi(resultNode["NotificationLevel"].asString());
	if(!resultNode["Message"].isNull())
		result_.message = resultNode["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

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

