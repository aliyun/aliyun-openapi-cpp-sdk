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

#include <alibabacloud/sgw/model/CreateGatewaySMBUserRequest.h>

using AlibabaCloud::Sgw::Model::CreateGatewaySMBUserRequest;

CreateGatewaySMBUserRequest::CreateGatewaySMBUserRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "CreateGatewaySMBUser")
{
	setMethod(HttpRequest::Method::Post);
}

CreateGatewaySMBUserRequest::~CreateGatewaySMBUserRequest()
{}

std::string CreateGatewaySMBUserRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateGatewaySMBUserRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateGatewaySMBUserRequest::getPassword()const
{
	return password_;
}

void CreateGatewaySMBUserRequest::setPassword(const std::string& password)
{
	password_ = password;
	setParameter("Password", password);
}

std::string CreateGatewaySMBUserRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateGatewaySMBUserRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string CreateGatewaySMBUserRequest::getGatewayId()const
{
	return gatewayId_;
}

void CreateGatewaySMBUserRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}

std::string CreateGatewaySMBUserRequest::getUsername()const
{
	return username_;
}

void CreateGatewaySMBUserRequest::setUsername(const std::string& username)
{
	username_ = username;
	setParameter("Username", username);
}

