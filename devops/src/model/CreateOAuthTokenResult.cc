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

#include <alibabacloud/devops/model/CreateOAuthTokenResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

CreateOAuthTokenResult::CreateOAuthTokenResult() :
	ServiceResult()
{}

CreateOAuthTokenResult::CreateOAuthTokenResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateOAuthTokenResult::~CreateOAuthTokenResult()
{}

void CreateOAuthTokenResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["accessToken"].isNull())
		result_.accessToken = resultNode["accessToken"].asString();
	if(!resultNode["scope"].isNull())
		result_.scope = resultNode["scope"].asString();
	if(!resultNode["tokenType"].isNull())
		result_.tokenType = resultNode["tokenType"].asString();
	if(!resultNode["id"].isNull())
		result_.id = resultNode["id"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString();

}

std::string CreateOAuthTokenResult::getRequestId()const
{
	return requestId_;
}

std::string CreateOAuthTokenResult::getErrorCode()const
{
	return errorCode_;
}

std::string CreateOAuthTokenResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string CreateOAuthTokenResult::getSuccess()const
{
	return success_;
}

CreateOAuthTokenResult::Result CreateOAuthTokenResult::getResult()const
{
	return result_;
}

