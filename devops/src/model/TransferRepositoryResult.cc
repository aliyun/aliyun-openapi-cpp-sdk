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

#include <alibabacloud/devops/model/TransferRepositoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

TransferRepositoryResult::TransferRepositoryResult() :
	ServiceResult()
{}

TransferRepositoryResult::TransferRepositoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

TransferRepositoryResult::~TransferRepositoryResult()
{}

void TransferRepositoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["id"].isNull())
		result_.id = std::stol(resultNode["id"].asString());
	if(!resultNode["path"].isNull())
		result_.path = resultNode["path"].asString();
	if(!resultNode["name"].isNull())
		result_.name = resultNode["name"].asString();
	if(!resultNode["description"].isNull())
		result_.description = resultNode["description"].asString();
	if(!resultNode["pathWithNamespace"].isNull())
		result_.pathWithNamespace = resultNode["pathWithNamespace"].asString();
	if(!resultNode["nameWithNamespace"].isNull())
		result_.nameWithNamespace = resultNode["nameWithNamespace"].asString();
	if(!resultNode["visibilityLevel"].isNull())
		result_.visibilityLevel = std::stoi(resultNode["visibilityLevel"].asString());
	if(!resultNode["lastActivityAt"].isNull())
		result_.lastActivityAt = resultNode["lastActivityAt"].asString();
	if(!resultNode["starCount"].isNull())
		result_.starCount = std::stol(resultNode["starCount"].asString());
	if(!resultNode["webUrl"].isNull())
		result_.webUrl = resultNode["webUrl"].asString();
	if(!resultNode["starred"].isNull())
		result_.starred = resultNode["starred"].asString() == "true";
	if(!resultNode["namespaceId"].isNull())
		result_.namespaceId = std::stol(resultNode["namespaceId"].asString());
	if(!resultNode["accessLevel"].isNull())
		result_.accessLevel = std::stoi(resultNode["accessLevel"].asString());
	if(!resultNode["demoProject"].isNull())
		result_.demoProject = resultNode["demoProject"].asString() == "true";
	if(!resultNode["createdAt"].isNull())
		result_.createdAt = resultNode["createdAt"].asString();
	if(!resultNode["updatedAt"].isNull())
		result_.updatedAt = resultNode["updatedAt"].asString();
	if(!resultNode["archived"].isNull())
		result_.archived = resultNode["archived"].asString() == "true";
	if(!resultNode["creatorId"].isNull())
		result_.creatorId = std::stol(resultNode["creatorId"].asString());
	if(!resultNode["encrypted"].isNull())
		result_.encrypted = resultNode["encrypted"].asString() == "true";
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string TransferRepositoryResult::getRequestId()const
{
	return requestId_;
}

std::string TransferRepositoryResult::getErrorCode()const
{
	return errorCode_;
}

std::string TransferRepositoryResult::getErrorMessage()const
{
	return errorMessage_;
}

bool TransferRepositoryResult::getSuccess()const
{
	return success_;
}

TransferRepositoryResult::Result TransferRepositoryResult::getResult()const
{
	return result_;
}

