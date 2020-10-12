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

#include <alibabacloud/codeup/model/GetRepositoryInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Codeup;
using namespace AlibabaCloud::Codeup::Model;

GetRepositoryInfoResult::GetRepositoryInfoResult() :
	ServiceResult()
{}

GetRepositoryInfoResult::GetRepositoryInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetRepositoryInfoResult::~GetRepositoryInfoResult()
{}

void GetRepositoryInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["Id"].isNull())
		result_.id = std::stol(resultNode["Id"].asString());
	if(!resultNode["SshUrlToRepo"].isNull())
		result_.sshUrlToRepo = resultNode["SshUrlToRepo"].asString();
	if(!resultNode["Description"].isNull())
		result_.description = resultNode["Description"].asString();
	if(!resultNode["DefaultBranch"].isNull())
		result_.defaultBranch = resultNode["DefaultBranch"].asString();
	if(!resultNode["Public"].isNull())
		result_._public = resultNode["Public"].asString() == "true";
	if(!resultNode["VisibilityLevel"].isNull())
		result_.visibilityLevel = resultNode["VisibilityLevel"].asString();
	if(!resultNode["HttpUrlToRepo"].isNull())
		result_.httpUrlToRepo = resultNode["HttpUrlToRepo"].asString();
	if(!resultNode["WebUrl"].isNull())
		result_.webUrl = resultNode["WebUrl"].asString();
	if(!resultNode["Name"].isNull())
		result_.name = resultNode["Name"].asString();
	if(!resultNode["NameWithNamespace"].isNull())
		result_.nameWithNamespace = resultNode["NameWithNamespace"].asString();
	if(!resultNode["Path"].isNull())
		result_.path = resultNode["Path"].asString();
	if(!resultNode["PathWithNamespace"].isNull())
		result_.pathWithNamespace = resultNode["PathWithNamespace"].asString();
	if(!resultNode["CreatedAt"].isNull())
		result_.createdAt = resultNode["CreatedAt"].asString();
	if(!resultNode["LastActivityAt"].isNull())
		result_.lastActivityAt = resultNode["LastActivityAt"].asString();
	if(!resultNode["CreatorId"].isNull())
		result_.creatorId = std::stol(resultNode["CreatorId"].asString());
	if(!resultNode["Archive"].isNull())
		result_.archive = resultNode["Archive"].asString() == "true";
	if(!resultNode["AvatarUrl"].isNull())
		result_.avatarUrl = resultNode["AvatarUrl"].asString();
	if(!resultNode["DemoProjectStatus"].isNull())
		result_.demoProjectStatus = resultNode["DemoProjectStatus"].asString() == "true";
	if(!resultNode["AccessLevel"].isNull())
		result_.accessLevel = std::stoi(resultNode["AccessLevel"].asString());
	if(!resultNode["ImportStatus"].isNull())
		result_.importStatus = resultNode["ImportStatus"].asString();
	if(!resultNode["ImportUrl"].isNull())
		result_.importUrl = resultNode["ImportUrl"].asString();
	if(!resultNode["ImportFromSubversion"].isNull())
		result_.importFromSubversion = resultNode["ImportFromSubversion"].asString() == "true";
	auto _namespaceNode = resultNode["Namespace"];
	if(!_namespaceNode["Id"].isNull())
		result_._namespace.id = std::stol(_namespaceNode["Id"].asString());
	if(!_namespaceNode["Name"].isNull())
		result_._namespace.name = _namespaceNode["Name"].asString();
	if(!_namespaceNode["Path"].isNull())
		result_._namespace.path = _namespaceNode["Path"].asString();
	if(!_namespaceNode["OwnerId"].isNull())
		result_._namespace.ownerId = std::stol(_namespaceNode["OwnerId"].asString());
	if(!_namespaceNode["CreatedAt"].isNull())
		result_._namespace.createdAt = _namespaceNode["CreatedAt"].asString();
	if(!_namespaceNode["UpdatedAt"].isNull())
		result_._namespace.updatedAt = _namespaceNode["UpdatedAt"].asString();
	if(!_namespaceNode["Description"].isNull())
		result_._namespace.description = _namespaceNode["Description"].asString();
	if(!_namespaceNode["State"].isNull())
		result_._namespace.state = _namespaceNode["State"].asString();
	if(!_namespaceNode["Avatar"].isNull())
		result_._namespace.avatar = _namespaceNode["Avatar"].asString();
	if(!_namespaceNode["Public"].isNull())
		result_._namespace._public = _namespaceNode["Public"].asString() == "true";
	if(!_namespaceNode["VisibilityLevel"].isNull())
		result_._namespace.visibilityLevel = _namespaceNode["VisibilityLevel"].asString();
	auto permissionsNode = resultNode["Permissions"];
	auto projectAccessNode = permissionsNode["ProjectAccess"];
	if(!projectAccessNode["AccessLevel"].isNull())
		result_.permissions.projectAccess.accessLevel = std::stoi(projectAccessNode["AccessLevel"].asString());
	auto groupAccessNode = permissionsNode["GroupAccess"];
	if(!groupAccessNode["AccessLevel"].isNull())
		result_.permissions.groupAccess.accessLevel = std::stoi(groupAccessNode["AccessLevel"].asString());
		auto allTagList = resultNode["TagList"]["TagList"];
		for (auto value : allTagList)
			result_.tagList.push_back(value.asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

int GetRepositoryInfoResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetRepositoryInfoResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetRepositoryInfoResult::getSuccess()const
{
	return success_;
}

GetRepositoryInfoResult::Result GetRepositoryInfoResult::getResult()const
{
	return result_;
}

