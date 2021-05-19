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

#include <alibabacloud/scsp/model/EnableRoleRequest.h>

using AlibabaCloud::Scsp::Model::EnableRoleRequest;

EnableRoleRequest::EnableRoleRequest() :
	RpcServiceRequest("scsp", "2020-07-02", "EnableRole")
{
	setMethod(HttpRequest::Method::Post);
}

EnableRoleRequest::~EnableRoleRequest()
{}

std::string EnableRoleRequest::getClientToken()const
{
	return clientToken_;
}

void EnableRoleRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setBodyParameter("ClientToken", clientToken);
}

std::string EnableRoleRequest::getInstanceId()const
{
	return instanceId_;
}

void EnableRoleRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

long EnableRoleRequest::getRoleId()const
{
	return roleId_;
}

void EnableRoleRequest::setRoleId(long roleId)
{
	roleId_ = roleId;
	setBodyParameter("RoleId", std::to_string(roleId));
}

