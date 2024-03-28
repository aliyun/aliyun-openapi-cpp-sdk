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

#include <alibabacloud/devops/model/ListWorkspacesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

ListWorkspacesResult::ListWorkspacesResult() :
	ServiceResult()
{}

ListWorkspacesResult::ListWorkspacesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListWorkspacesResult::~ListWorkspacesResult()
{}

void ListWorkspacesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allworkspacesNode = value["workspaces"]["WorkspaceDTO"];
	for (auto valueworkspacesWorkspaceDTO : allworkspacesNode)
	{
		WorkspaceDTO workspacesObject;
		if(!valueworkspacesWorkspaceDTO["codeVersion"].isNull())
			workspacesObject.codeVersion = valueworkspacesWorkspaceDTO["codeVersion"].asString();
		if(!valueworkspacesWorkspaceDTO["codeUrl"].isNull())
			workspacesObject.codeUrl = valueworkspacesWorkspaceDTO["codeUrl"].asString();
		if(!valueworkspacesWorkspaceDTO["name"].isNull())
			workspacesObject.name = valueworkspacesWorkspaceDTO["name"].asString();
		if(!valueworkspacesWorkspaceDTO["spec"].isNull())
			workspacesObject.spec = valueworkspacesWorkspaceDTO["spec"].asString();
		if(!valueworkspacesWorkspaceDTO["status"].isNull())
			workspacesObject.status = valueworkspacesWorkspaceDTO["status"].asString();
		if(!valueworkspacesWorkspaceDTO["template"].isNull())
			workspacesObject._template = valueworkspacesWorkspaceDTO["template"].asString();
		if(!valueworkspacesWorkspaceDTO["id"].isNull())
			workspacesObject.id = valueworkspacesWorkspaceDTO["id"].asString();
		if(!valueworkspacesWorkspaceDTO["userId"].isNull())
			workspacesObject.userId = valueworkspacesWorkspaceDTO["userId"].asString();
		if(!valueworkspacesWorkspaceDTO["createTime"].isNull())
			workspacesObject.createTime = valueworkspacesWorkspaceDTO["createTime"].asString();
		workspaces_.push_back(workspacesObject);
	}
	if(!value["totalCount"].isNull())
		totalCount_ = std::stoi(value["totalCount"].asString());
	if(!value["nextToken"].isNull())
		nextToken_ = value["nextToken"].asString();
	if(!value["maxResults"].isNull())
		maxResults_ = std::stoi(value["maxResults"].asString());
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();

}

int ListWorkspacesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListWorkspacesResult::getNextToken()const
{
	return nextToken_;
}

std::string ListWorkspacesResult::getRequestId()const
{
	return requestId_;
}

int ListWorkspacesResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListWorkspacesResult::WorkspaceDTO> ListWorkspacesResult::getworkspaces()const
{
	return workspaces_;
}

std::string ListWorkspacesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListWorkspacesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListWorkspacesResult::getSuccess()const
{
	return success_;
}

