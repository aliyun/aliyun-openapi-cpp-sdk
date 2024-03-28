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

#include <alibabacloud/devops/model/CreateCommitStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

CreateCommitStatusResult::CreateCommitStatusResult() :
	ServiceResult()
{}

CreateCommitStatusResult::CreateCommitStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateCommitStatusResult::~CreateCommitStatusResult()
{}

void CreateCommitStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["id"].isNull())
		result_.id = std::stol(resultNode["id"].asString());
	if(!resultNode["sha"].isNull())
		result_.sha = resultNode["sha"].asString();
	if(!resultNode["context"].isNull())
		result_.context = resultNode["context"].asString();
	if(!resultNode["state"].isNull())
		result_.state = resultNode["state"].asString();
	if(!resultNode["targetUrl"].isNull())
		result_.targetUrl = resultNode["targetUrl"].asString();
	if(!resultNode["description"].isNull())
		result_.description = resultNode["description"].asString();
	auto creatorNode = resultNode["creator"];
	if(!creatorNode["aliyunPk"].isNull())
		result_.creator.aliyunPk = std::stol(creatorNode["aliyunPk"].asString());
	if(!creatorNode["login"].isNull())
		result_.creator.login = creatorNode["login"].asString();
	if(!creatorNode["avatarUrl"].isNull())
		result_.creator.avatarUrl = creatorNode["avatarUrl"].asString();
	if(!creatorNode["type"].isNull())
		result_.creator.type = creatorNode["type"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();

}

std::string CreateCommitStatusResult::getRequestId()const
{
	return requestId_;
}

std::string CreateCommitStatusResult::getErrorCode()const
{
	return errorCode_;
}

std::string CreateCommitStatusResult::getErrorMessage()const
{
	return errorMessage_;
}

bool CreateCommitStatusResult::getSuccess()const
{
	return success_;
}

CreateCommitStatusResult::Result CreateCommitStatusResult::getResult()const
{
	return result_;
}

