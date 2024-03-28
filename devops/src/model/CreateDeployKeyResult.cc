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

#include <alibabacloud/devops/model/CreateDeployKeyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

CreateDeployKeyResult::CreateDeployKeyResult() :
	ServiceResult()
{}

CreateDeployKeyResult::CreateDeployKeyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateDeployKeyResult::~CreateDeployKeyResult()
{}

void CreateDeployKeyResult::parse(const std::string &payload)
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
	if(!resultNode["key"].isNull())
		result_.key = resultNode["key"].asString();
	if(!resultNode["fingerprint"].isNull())
		result_.fingerprint = resultNode["fingerprint"].asString();
	if(!resultNode["createdAt"].isNull())
		result_.createdAt = resultNode["createdAt"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string CreateDeployKeyResult::getRequestId()const
{
	return requestId_;
}

std::string CreateDeployKeyResult::getErrorCode()const
{
	return errorCode_;
}

std::string CreateDeployKeyResult::getErrorMessage()const
{
	return errorMessage_;
}

bool CreateDeployKeyResult::getSuccess()const
{
	return success_;
}

CreateDeployKeyResult::Result CreateDeployKeyResult::getResult()const
{
	return result_;
}

