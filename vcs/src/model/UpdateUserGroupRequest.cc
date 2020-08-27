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

#include <alibabacloud/vcs/model/UpdateUserGroupRequest.h>

using AlibabaCloud::Vcs::Model::UpdateUserGroupRequest;

UpdateUserGroupRequest::UpdateUserGroupRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "UpdateUserGroup")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateUserGroupRequest::~UpdateUserGroupRequest()
{}

std::string UpdateUserGroupRequest::getIsvSubId()const
{
	return isvSubId_;
}

void UpdateUserGroupRequest::setIsvSubId(const std::string& isvSubId)
{
	isvSubId_ = isvSubId;
	setBodyParameter("IsvSubId", isvSubId);
}

std::string UpdateUserGroupRequest::getCorpId()const
{
	return corpId_;
}

void UpdateUserGroupRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

long UpdateUserGroupRequest::getUserGroupId()const
{
	return userGroupId_;
}

void UpdateUserGroupRequest::setUserGroupId(long userGroupId)
{
	userGroupId_ = userGroupId;
	setBodyParameter("UserGroupId", std::to_string(userGroupId));
}

std::string UpdateUserGroupRequest::getUserGroupName()const
{
	return userGroupName_;
}

void UpdateUserGroupRequest::setUserGroupName(const std::string& userGroupName)
{
	userGroupName_ = userGroupName;
	setBodyParameter("UserGroupName", userGroupName);
}

