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

#include <alibabacloud/devops/model/ListUserResourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListUserResourcesResult::ListUserResourcesResult() :
	ServiceResult()
{}

ListUserResourcesResult::ListUserResourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUserResourcesResult::~ListUserResourcesResult()
{}

void ListUserResourcesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allresultNode = value["result"]["resultItem"];
	for (auto valueresultresultItem : allresultNode)
	{
		ResultItem resultObject;
		auto allgroupInfosNode = valueresultresultItem["groupInfos"]["group_infos"];
		for (auto valueresultresultItemgroupInfosgroup_infos : allgroupInfosNode)
		{
			ResultItem::Group_infos groupInfosObject;
			auto groupInfoNode = value["groupInfo"];
			if(!groupInfoNode["id"].isNull())
				groupInfosObject.groupInfo.id = std::stol(groupInfoNode["id"].asString());
			if(!groupInfoNode["name"].isNull())
				groupInfosObject.groupInfo.name = groupInfoNode["name"].asString();
			if(!groupInfoNode["path"].isNull())
				groupInfosObject.groupInfo.path = groupInfoNode["path"].asString();
			if(!groupInfoNode["nameWithNamespace"].isNull())
				groupInfosObject.groupInfo.nameWithNamespace = groupInfoNode["nameWithNamespace"].asString();
			if(!groupInfoNode["pathWithNamespace"].isNull())
				groupInfosObject.groupInfo.pathWithNamespace = groupInfoNode["pathWithNamespace"].asString();
			if(!groupInfoNode["parentId"].isNull())
				groupInfosObject.groupInfo.parentId = std::stol(groupInfoNode["parentId"].asString());
			if(!groupInfoNode["ownerId"].isNull())
				groupInfosObject.groupInfo.ownerId = std::stol(groupInfoNode["ownerId"].asString());
			if(!groupInfoNode["createdAt"].isNull())
				groupInfosObject.groupInfo.createdAt = groupInfoNode["createdAt"].asString();
			if(!groupInfoNode["updatedAt"].isNull())
				groupInfosObject.groupInfo.updatedAt = groupInfoNode["updatedAt"].asString();
			if(!groupInfoNode["visibilityLevel"].isNull())
				groupInfosObject.groupInfo.visibilityLevel = std::stoi(groupInfoNode["visibilityLevel"].asString());
			if(!groupInfoNode["description"].isNull())
				groupInfosObject.groupInfo.description = groupInfoNode["description"].asString();
			auto groupRoleNode = value["groupRole"];
			if(!groupRoleNode["sourceId"].isNull())
				groupInfosObject.groupRole.sourceId = std::stol(groupRoleNode["sourceId"].asString());
			if(!groupRoleNode["sourceType"].isNull())
				groupInfosObject.groupRole.sourceType = groupRoleNode["sourceType"].asString();
			if(!groupRoleNode["accessLevel"].isNull())
				groupInfosObject.groupRole.accessLevel = std::stoi(groupRoleNode["accessLevel"].asString());
			if(!groupRoleNode["cnRoleName"].isNull())
				groupInfosObject.groupRole.cnRoleName = groupRoleNode["cnRoleName"].asString();
			if(!groupRoleNode["enRoleName"].isNull())
				groupInfosObject.groupRole.enRoleName = groupRoleNode["enRoleName"].asString();
			resultObject.groupInfos.push_back(groupInfosObject);
		}
		auto allrepositoryInfosNode = valueresultresultItem["repositoryInfos"]["repository_infos"];
		for (auto valueresultresultItemrepositoryInfosrepository_infos : allrepositoryInfosNode)
		{
			ResultItem::Repository_infos repositoryInfosObject;
			auto repositoryInfoNode = value["repositoryInfo"];
			if(!repositoryInfoNode["id"].isNull())
				repositoryInfosObject.repositoryInfo.id = std::stol(repositoryInfoNode["id"].asString());
			if(!repositoryInfoNode["name"].isNull())
				repositoryInfosObject.repositoryInfo.name = repositoryInfoNode["name"].asString();
			if(!repositoryInfoNode["path"].isNull())
				repositoryInfosObject.repositoryInfo.path = repositoryInfoNode["path"].asString();
			if(!repositoryInfoNode["description"].isNull())
				repositoryInfosObject.repositoryInfo.description = repositoryInfoNode["description"].asString();
			if(!repositoryInfoNode["nameWithNamespace"].isNull())
				repositoryInfosObject.repositoryInfo.nameWithNamespace = repositoryInfoNode["nameWithNamespace"].asString();
			if(!repositoryInfoNode["pathWithNamespace"].isNull())
				repositoryInfosObject.repositoryInfo.pathWithNamespace = repositoryInfoNode["pathWithNamespace"].asString();
			if(!repositoryInfoNode["visibilityLevel"].isNull())
				repositoryInfosObject.repositoryInfo.visibilityLevel = std::stoi(repositoryInfoNode["visibilityLevel"].asString());
			if(!repositoryInfoNode["lastActivityAt"].isNull())
				repositoryInfosObject.repositoryInfo.lastActivityAt = repositoryInfoNode["lastActivityAt"].asString();
			if(!repositoryInfoNode["namespaceId"].isNull())
				repositoryInfosObject.repositoryInfo.namespaceId = std::stol(repositoryInfoNode["namespaceId"].asString());
			if(!repositoryInfoNode["accessLevel"].isNull())
				repositoryInfosObject.repositoryInfo.accessLevel = std::stoi(repositoryInfoNode["accessLevel"].asString());
			if(!repositoryInfoNode["createdAt"].isNull())
				repositoryInfosObject.repositoryInfo.createdAt = repositoryInfoNode["createdAt"].asString();
			if(!repositoryInfoNode["updatedAt"].isNull())
				repositoryInfosObject.repositoryInfo.updatedAt = repositoryInfoNode["updatedAt"].asString();
			if(!repositoryInfoNode["archived"].isNull())
				repositoryInfosObject.repositoryInfo.archived = repositoryInfoNode["archived"].asString() == "true";
			if(!repositoryInfoNode["creatorId"].isNull())
				repositoryInfosObject.repositoryInfo.creatorId = std::stol(repositoryInfoNode["creatorId"].asString());
			if(!repositoryInfoNode["encrypted"].isNull())
				repositoryInfosObject.repositoryInfo.encrypted = repositoryInfoNode["encrypted"].asString() == "true";
			auto repositoryRoleNode = value["repositoryRole"];
			if(!repositoryRoleNode["sourceId"].isNull())
				repositoryInfosObject.repositoryRole.sourceId = std::stol(repositoryRoleNode["sourceId"].asString());
			if(!repositoryRoleNode["sourceType"].isNull())
				repositoryInfosObject.repositoryRole.sourceType = repositoryRoleNode["sourceType"].asString();
			if(!repositoryRoleNode["accessLevel"].isNull())
				repositoryInfosObject.repositoryRole.accessLevel = std::stoi(repositoryRoleNode["accessLevel"].asString());
			if(!repositoryRoleNode["cnRoleName"].isNull())
				repositoryInfosObject.repositoryRole.cnRoleName = repositoryRoleNode["cnRoleName"].asString();
			if(!repositoryRoleNode["enRoleName"].isNull())
				repositoryInfosObject.repositoryRole.enRoleName = repositoryRoleNode["enRoleName"].asString();
			resultObject.repositoryInfos.push_back(repositoryInfosObject);
		}
		auto userInfoNode = value["userInfo"];
		if(!userInfoNode["id"].isNull())
			resultObject.userInfo.id = std::stol(userInfoNode["id"].asString());
		if(!userInfoNode["name"].isNull())
			resultObject.userInfo.name = userInfoNode["name"].asString();
		if(!userInfoNode["username"].isNull())
			resultObject.userInfo.username = userInfoNode["username"].asString();
		if(!userInfoNode["state"].isNull())
			resultObject.userInfo.state = userInfoNode["state"].asString();
		if(!userInfoNode["avatarUrl"].isNull())
			resultObject.userInfo.avatarUrl = userInfoNode["avatarUrl"].asString();
		if(!userInfoNode["email"].isNull())
			resultObject.userInfo.email = userInfoNode["email"].asString();
		result_.push_back(resultObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["total"].isNull())
		total_ = std::stol(value["total"].asString());

}

std::vector<ListUserResourcesResult::ResultItem> ListUserResourcesResult::getresult()const
{
	return result_;
}

std::string ListUserResourcesResult::getRequestId()const
{
	return requestId_;
}

long ListUserResourcesResult::getTotal()const
{
	return total_;
}

std::string ListUserResourcesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListUserResourcesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListUserResourcesResult::getSuccess()const
{
	return success_;
}

