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

#include <alibabacloud/devops/model/GetWorkspaceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

GetWorkspaceResult::GetWorkspaceResult() :
	ServiceResult()
{}

GetWorkspaceResult::GetWorkspaceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetWorkspaceResult::~GetWorkspaceResult()
{}

void GetWorkspaceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto workspaceNode = value["workspace"];
	if(!workspaceNode["codeVersion"].isNull())
		workspace_.codeVersion = workspaceNode["codeVersion"].asString();
	if(!workspaceNode["codeUrl"].isNull())
		workspace_.codeUrl = workspaceNode["codeUrl"].asString();
	if(!workspaceNode["name"].isNull())
		workspace_.name = workspaceNode["name"].asString();
	if(!workspaceNode["spec"].isNull())
		workspace_.spec = workspaceNode["spec"].asString();
	if(!workspaceNode["status"].isNull())
		workspace_.status = workspaceNode["status"].asString();
	if(!workspaceNode["template"].isNull())
		workspace_._template = workspaceNode["template"].asString();
	if(!workspaceNode["id"].isNull())
		workspace_.id = workspaceNode["id"].asString();
	if(!workspaceNode["userId"].isNull())
		workspace_.userId = workspaceNode["userId"].asString();
	if(!workspaceNode["createTime"].isNull())
		workspace_.createTime = workspaceNode["createTime"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();

}

std::string GetWorkspaceResult::getRequestId()const
{
	return requestId_;
}

std::string GetWorkspaceResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetWorkspaceResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetWorkspaceResult::getSuccess()const
{
	return success_;
}

GetWorkspaceResult::Workspace GetWorkspaceResult::getWorkspace()const
{
	return workspace_;
}

