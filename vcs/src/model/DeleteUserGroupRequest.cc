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

#include <alibabacloud/vcs/model/DeleteUserGroupRequest.h>

using AlibabaCloud::Vcs::Model::DeleteUserGroupRequest;

DeleteUserGroupRequest::DeleteUserGroupRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "DeleteUserGroup")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteUserGroupRequest::~DeleteUserGroupRequest()
{}

std::string DeleteUserGroupRequest::getIsvSubId()const
{
	return isvSubId_;
}

void DeleteUserGroupRequest::setIsvSubId(const std::string& isvSubId)
{
	isvSubId_ = isvSubId;
	setBodyParameter("IsvSubId", isvSubId);
}

std::string DeleteUserGroupRequest::getCorpId()const
{
	return corpId_;
}

void DeleteUserGroupRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string DeleteUserGroupRequest::getUserGroupId()const
{
	return userGroupId_;
}

void DeleteUserGroupRequest::setUserGroupId(const std::string& userGroupId)
{
	userGroupId_ = userGroupId;
	setBodyParameter("UserGroupId", userGroupId);
}

