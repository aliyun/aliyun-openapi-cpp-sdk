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

#include <alibabacloud/devops/model/GetRepositoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

GetRepositoryResult::GetRepositoryResult() :
	ServiceResult()
{}

GetRepositoryResult::GetRepositoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetRepositoryResult::~GetRepositoryResult()
{}

void GetRepositoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto repositoryNode = value["repository"];
	if(!repositoryNode["archive"].isNull())
		repository_.archive = repositoryNode["archive"].asString() == "true";
	if(!repositoryNode["avatarUrl"].isNull())
		repository_.avatarUrl = repositoryNode["avatarUrl"].asString();
	if(!repositoryNode["createdAt"].isNull())
		repository_.createdAt = repositoryNode["createdAt"].asString();
	if(!repositoryNode["creatorId"].isNull())
		repository_.creatorId = std::stol(repositoryNode["creatorId"].asString());
	if(!repositoryNode["defaultBranch"].isNull())
		repository_.defaultBranch = repositoryNode["defaultBranch"].asString();
	if(!repositoryNode["demoProjectStatus"].isNull())
		repository_.demoProjectStatus = repositoryNode["demoProjectStatus"].asString() == "true";
	if(!repositoryNode["description"].isNull())
		repository_.description = repositoryNode["description"].asString();
	if(!repositoryNode["httpUrlToRepository"].isNull())
		repository_.httpUrlToRepository = repositoryNode["httpUrlToRepository"].asString();
	if(!repositoryNode["id"].isNull())
		repository_.id = std::stol(repositoryNode["id"].asString());
	if(!repositoryNode["lastActivityAt"].isNull())
		repository_.lastActivityAt = repositoryNode["lastActivityAt"].asString();
	if(!repositoryNode["name"].isNull())
		repository_.name = repositoryNode["name"].asString();
	if(!repositoryNode["nameWithNamespace"].isNull())
		repository_.nameWithNamespace = repositoryNode["nameWithNamespace"].asString();
	if(!repositoryNode["path"].isNull())
		repository_.path = repositoryNode["path"].asString();
	if(!repositoryNode["pathWithNamespace"].isNull())
		repository_.pathWithNamespace = repositoryNode["pathWithNamespace"].asString();
	if(!repositoryNode["sshUrlToRepository"].isNull())
		repository_.sshUrlToRepository = repositoryNode["sshUrlToRepository"].asString();
	if(!repositoryNode["visibilityLevel"].isNull())
		repository_.visibilityLevel = std::stoi(repositoryNode["visibilityLevel"].asString());
	if(!repositoryNode["webUrl"].isNull())
		repository_.webUrl = repositoryNode["webUrl"].asString();
	auto _namespaceNode = repositoryNode["namespace"];
	if(!_namespaceNode["id"].isNull())
		repository_._namespace.id = std::stol(_namespaceNode["id"].asString());
	if(!_namespaceNode["avatar"].isNull())
		repository_._namespace.avatar = _namespaceNode["avatar"].asString();
	if(!_namespaceNode["createdAt"].isNull())
		repository_._namespace.createdAt = _namespaceNode["createdAt"].asString();
	if(!_namespaceNode["description"].isNull())
		repository_._namespace.description = _namespaceNode["description"].asString();
	if(!_namespaceNode["name"].isNull())
		repository_._namespace.name = _namespaceNode["name"].asString();
	if(!_namespaceNode["ownerId"].isNull())
		repository_._namespace.ownerId = std::stol(_namespaceNode["ownerId"].asString());
	if(!_namespaceNode["path"].isNull())
		repository_._namespace.path = _namespaceNode["path"].asString();
	if(!_namespaceNode["updatedAt"].isNull())
		repository_._namespace.updatedAt = _namespaceNode["updatedAt"].asString();
	if(!_namespaceNode["visibilityLevel"].isNull())
		repository_._namespace.visibilityLevel = std::stoi(_namespaceNode["visibilityLevel"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

GetRepositoryResult::Repository GetRepositoryResult::getRepository()const
{
	return repository_;
}

std::string GetRepositoryResult::getRequestId()const
{
	return requestId_;
}

std::string GetRepositoryResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetRepositoryResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetRepositoryResult::getSuccess()const
{
	return success_;
}

