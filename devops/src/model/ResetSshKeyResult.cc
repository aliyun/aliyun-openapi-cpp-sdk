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

#include <alibabacloud/devops/model/ResetSshKeyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ResetSshKeyResult::ResetSshKeyResult() :
	ServiceResult()
{}

ResetSshKeyResult::ResetSshKeyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ResetSshKeyResult::~ResetSshKeyResult()
{}

void ResetSshKeyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto sshKeyNode = value["sshKey"];
	if(!sshKeyNode["publicKey"].isNull())
		sshKey_.publicKey = sshKeyNode["publicKey"].asString();
	if(!sshKeyNode["id"].isNull())
		sshKey_.id = std::stol(sshKeyNode["id"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

ResetSshKeyResult::SshKey ResetSshKeyResult::getSshKey()const
{
	return sshKey_;
}

std::string ResetSshKeyResult::getRequestId()const
{
	return requestId_;
}

std::string ResetSshKeyResult::getErrorCode()const
{
	return errorCode_;
}

std::string ResetSshKeyResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ResetSshKeyResult::getSuccess()const
{
	return success_;
}

