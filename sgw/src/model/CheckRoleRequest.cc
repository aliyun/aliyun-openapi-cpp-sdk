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

#include <alibabacloud/sgw/model/CheckRoleRequest.h>

using AlibabaCloud::Sgw::Model::CheckRoleRequest;

CheckRoleRequest::CheckRoleRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "CheckRole")
{
	setMethod(HttpRequest::Method::Post);
}

CheckRoleRequest::~CheckRoleRequest()
{}

std::string CheckRoleRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CheckRoleRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CheckRoleRequest::getSecurityToken()const
{
	return securityToken_;
}

void CheckRoleRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string CheckRoleRequest::getRoleType()const
{
	return roleType_;
}

void CheckRoleRequest::setRoleType(const std::string& roleType)
{
	roleType_ = roleType;
	setParameter("RoleType", roleType);
}

