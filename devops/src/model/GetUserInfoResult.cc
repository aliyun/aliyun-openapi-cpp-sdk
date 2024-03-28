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

#include <alibabacloud/devops/model/GetUserInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

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
	auto resultNode = value["result"];
	if(!resultNode["id"].isNull())
		result_.id = std::stol(resultNode["id"].asString());
	if(!resultNode["name"].isNull())
		result_.name = resultNode["name"].asString();
	if(!resultNode["username"].isNull())
		result_.username = resultNode["username"].asString();
	if(!resultNode["email"].isNull())
		result_.email = resultNode["email"].asString();
	if(!resultNode["avatarUrl"].isNull())
		result_.avatarUrl = resultNode["avatarUrl"].asString();
	if(!resultNode["externUid"].isNull())
		result_.externUid = resultNode["externUid"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string GetUserInfoResult::getRequestId()const
{
	return requestId_;
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

