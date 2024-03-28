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

#include <alibabacloud/devops/model/CreateRepositoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

CreateRepositoryResult::CreateRepositoryResult() :
	ServiceResult()
{}

CreateRepositoryResult::CreateRepositoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateRepositoryResult::~CreateRepositoryResult()
{}

void CreateRepositoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["result"];
	if(!resultNode["id"].isNull())
		result_.id = std::stol(resultNode["id"].asString());
	if(!resultNode["description"].isNull())
		result_.description = resultNode["description"].asString();
	if(!resultNode["defaultBranch"].isNull())
		result_.defaultBranch = resultNode["defaultBranch"].asString();
	if(!resultNode["visibilityLevel"].isNull())
		result_.visibilityLevel = resultNode["visibilityLevel"].asString();
	if(!resultNode["sshUrlToRepo"].isNull())
		result_.sshUrlToRepo = resultNode["sshUrlToRepo"].asString();
	if(!resultNode["httpUrlToRepo"].isNull())
		result_.httpUrlToRepo = resultNode["httpUrlToRepo"].asString();
	if(!resultNode["webUrl"].isNull())
		result_.webUrl = resultNode["webUrl"].asString();
	if(!resultNode["name"].isNull())
		result_.name = resultNode["name"].asString();
	if(!resultNode["nameWithNamespace"].isNull())
		result_.nameWithNamespace = resultNode["nameWithNamespace"].asString();
	if(!resultNode["path"].isNull())
		result_.path = resultNode["path"].asString();
	if(!resultNode["pathWithNamespace"].isNull())
		result_.pathWithNamespace = resultNode["pathWithNamespace"].asString();
	if(!resultNode["createdAt"].isNull())
		result_.createdAt = resultNode["createdAt"].asString();
	if(!resultNode["lastActivityAt"].isNull())
		result_.lastActivityAt = resultNode["lastActivityAt"].asString();
	if(!resultNode["creatorId"].isNull())
		result_.creatorId = std::stol(resultNode["creatorId"].asString());
	if(!resultNode["archived"].isNull())
		result_.archived = resultNode["archived"].asString() == "true";
	if(!resultNode["avatar_url"].isNull())
		result_.avatar_url = resultNode["avatar_url"].asString();
	if(!resultNode["demoProject"].isNull())
		result_.demoProject = resultNode["demoProject"].asString() == "true";
	if(!resultNode["Import_from_svn"].isNull())
		result_.import_from_svn = resultNode["Import_from_svn"].asString() == "true";
	auto _namespaceNode = resultNode["namespace"];
	if(!_namespaceNode["id"].isNull())
		result_._namespace.id = std::stol(_namespaceNode["id"].asString());
	if(!_namespaceNode["name"].isNull())
		result_._namespace.name = _namespaceNode["name"].asString();
	if(!_namespaceNode["path"].isNull())
		result_._namespace.path = _namespaceNode["path"].asString();
	if(!_namespaceNode["ownerId"].isNull())
		result_._namespace.ownerId = std::stol(_namespaceNode["ownerId"].asString());
	if(!_namespaceNode["createdAt"].isNull())
		result_._namespace.createdAt = _namespaceNode["createdAt"].asString();
	if(!_namespaceNode["updatedAt"].isNull())
		result_._namespace.updatedAt = _namespaceNode["updatedAt"].asString();
	if(!_namespaceNode["description"].isNull())
		result_._namespace.description = _namespaceNode["description"].asString();
	if(!_namespaceNode["avatar"].isNull())
		result_._namespace.avatar = _namespaceNode["avatar"].asString();
	if(!_namespaceNode["public"].isNull())
		result_._namespace._public = _namespaceNode["public"].asString() == "true";
	if(!_namespaceNode["visibilityLevel"].isNull())
		result_._namespace.visibilityLevel = _namespaceNode["visibilityLevel"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string CreateRepositoryResult::getRequestId()const
{
	return requestId_;
}

std::string CreateRepositoryResult::getErrorCode()const
{
	return errorCode_;
}

std::string CreateRepositoryResult::getErrorMessage()const
{
	return errorMessage_;
}

bool CreateRepositoryResult::getSuccess()const
{
	return success_;
}

CreateRepositoryResult::Result CreateRepositoryResult::getResult()const
{
	return result_;
}

