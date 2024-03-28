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

#include <alibabacloud/devops/model/CreateUserKeyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

CreateUserKeyResult::CreateUserKeyResult() :
	ServiceResult()
{}

CreateUserKeyResult::CreateUserKeyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateUserKeyResult::~CreateUserKeyResult()
{}

void CreateUserKeyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["id"].isNull())
		result_.id = std::stol(resultNode["id"].asString());
	if(!resultNode["title"].isNull())
		result_.title = resultNode["title"].asString();
	if(!resultNode["publicKey"].isNull())
		result_.publicKey = resultNode["publicKey"].asString();
	if(!resultNode["fingerPrint"].isNull())
		result_.fingerPrint = resultNode["fingerPrint"].asString();
	if(!resultNode["keyScope"].isNull())
		result_.keyScope = resultNode["keyScope"].asString();
	if(!resultNode["createdAt"].isNull())
		result_.createdAt = resultNode["createdAt"].asString();
	if(!resultNode["expireTime"].isNull())
		result_.expireTime = resultNode["expireTime"].asString();
	if(!resultNode["lastUsedTime"].isNull())
		result_.lastUsedTime = resultNode["lastUsedTime"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string CreateUserKeyResult::getRequestId()const
{
	return requestId_;
}

std::string CreateUserKeyResult::getErrorCode()const
{
	return errorCode_;
}

std::string CreateUserKeyResult::getErrorMessage()const
{
	return errorMessage_;
}

bool CreateUserKeyResult::getSuccess()const
{
	return success_;
}

CreateUserKeyResult::Result CreateUserKeyResult::getResult()const
{
	return result_;
}

