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

#include <alibabacloud/codeup/model/GetUserInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Codeup;
using namespace AlibabaCloud::Codeup::Model;

GetUserInfoResult::GetUserInfoResult() :
	ServiceResult()
{}

GetUserInfoResult::GetUserInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetUserInfoResult::~GetUserInfoResult()
{}

void GetUserInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["Id"].isNull())
		result_.id = std::stol(resultNode["Id"].asString());
	if(!resultNode["ExternalUserId"].isNull())
		result_.externalUserId = resultNode["ExternalUserId"].asString();
	if(!resultNode["Username"].isNull())
		result_.username = resultNode["Username"].asString();
	if(!resultNode["Name"].isNull())
		result_.name = resultNode["Name"].asString();
	if(!resultNode["Email"].isNull())
		result_.email = resultNode["Email"].asString();
	if(!resultNode["AvatarUrl"].isNull())
		result_.avatarUrl = resultNode["AvatarUrl"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

std::string GetUserInfoResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetUserInfoResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetUserInfoResult::getSuccess()const
{
	return success_;
}

GetUserInfoResult::Result GetUserInfoResult::getResult()const
{
	return result_;
}

