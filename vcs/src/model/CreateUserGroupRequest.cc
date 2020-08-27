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

#include <alibabacloud/vcs/model/CreateUserGroupRequest.h>

using AlibabaCloud::Vcs::Model::CreateUserGroupRequest;

CreateUserGroupRequest::CreateUserGroupRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "CreateUserGroup")
{
	setMethod(HttpRequest::Method::Post);
}

CreateUserGroupRequest::~CreateUserGroupRequest()
{}

std::string CreateUserGroupRequest::getIsvSubId()const
{
	return isvSubId_;
}

void CreateUserGroupRequest::setIsvSubId(const std::string& isvSubId)
{
	isvSubId_ = isvSubId;
	setBodyParameter("IsvSubId", isvSubId);
}

std::string CreateUserGroupRequest::getCorpId()const
{
	return corpId_;
}

void CreateUserGroupRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string CreateUserGroupRequest::getUserGroupName()const
{
	return userGroupName_;
}

void CreateUserGroupRequest::setUserGroupName(const std::string& userGroupName)
{
	userGroupName_ = userGroupName;
	setBodyParameter("UserGroupName", userGroupName);
}

long CreateUserGroupRequest::getParentUserGroupId()const
{
	return parentUserGroupId_;
}

void CreateUserGroupRequest::setParentUserGroupId(long parentUserGroupId)
{
	parentUserGroupId_ = parentUserGroupId;
	setBodyParameter("ParentUserGroupId", std::to_string(parentUserGroupId));
}

