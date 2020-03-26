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

#include <alibabacloud/cloudapi/model/DeleteApiRequest.h>

using AlibabaCloud::CloudAPI::Model::DeleteApiRequest;

DeleteApiRequest::DeleteApiRequest() :
	RpcServiceRequest("cloudapi", "2016-07-14", "DeleteApi")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteApiRequest::~DeleteApiRequest()
{}

std::string DeleteApiRequest::getGroupId()const
{
	return groupId_;
}

void DeleteApiRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string DeleteApiRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteApiRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteApiRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteApiRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DeleteApiRequest::getApiId()const
{
	return apiId_;
}

void DeleteApiRequest::setApiId(const std::string& apiId)
{
	apiId_ = apiId;
	setParameter("ApiId", apiId);
}

