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

#include <alibabacloud/sgw/model/CheckSlrRoleRequest.h>

using AlibabaCloud::Sgw::Model::CheckSlrRoleRequest;

CheckSlrRoleRequest::CheckSlrRoleRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "CheckSlrRole")
{
	setMethod(HttpRequest::Method::Post);
}

CheckSlrRoleRequest::~CheckSlrRoleRequest()
{}

std::string CheckSlrRoleRequest::getRoleName()const
{
	return roleName_;
}

void CheckSlrRoleRequest::setRoleName(const std::string& roleName)
{
	roleName_ = roleName;
	setParameter("RoleName", roleName);
}

std::string CheckSlrRoleRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CheckSlrRoleRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool CheckSlrRoleRequest::getCreateIfNotExist()const
{
	return createIfNotExist_;
}

void CheckSlrRoleRequest::setCreateIfNotExist(bool createIfNotExist)
{
	createIfNotExist_ = createIfNotExist;
	setParameter("CreateIfNotExist", createIfNotExist ? "true" : "false");
}

std::string CheckSlrRoleRequest::getSecurityToken()const
{
	return securityToken_;
}

void CheckSlrRoleRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

