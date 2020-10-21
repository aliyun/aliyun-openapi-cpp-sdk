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

#include <alibabacloud/sgw/model/SetGatewayADInfoRequest.h>

using AlibabaCloud::Sgw::Model::SetGatewayADInfoRequest;

SetGatewayADInfoRequest::SetGatewayADInfoRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "SetGatewayADInfo")
{
	setMethod(HttpRequest::Method::Post);
}

SetGatewayADInfoRequest::~SetGatewayADInfoRequest()
{}

std::string SetGatewayADInfoRequest::getDomainName()const
{
	return domainName_;
}

void SetGatewayADInfoRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string SetGatewayADInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetGatewayADInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SetGatewayADInfoRequest::getPassword()const
{
	return password_;
}

void SetGatewayADInfoRequest::setPassword(const std::string& password)
{
	password_ = password;
	setParameter("Password", password);
}

std::string SetGatewayADInfoRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetGatewayADInfoRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SetGatewayADInfoRequest::getServerIp()const
{
	return serverIp_;
}

void SetGatewayADInfoRequest::setServerIp(const std::string& serverIp)
{
	serverIp_ = serverIp;
	setParameter("ServerIp", serverIp);
}

std::string SetGatewayADInfoRequest::getGatewayId()const
{
	return gatewayId_;
}

void SetGatewayADInfoRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}

std::string SetGatewayADInfoRequest::getUsername()const
{
	return username_;
}

void SetGatewayADInfoRequest::setUsername(const std::string& username)
{
	username_ = username;
	setParameter("Username", username);
}

bool SetGatewayADInfoRequest::getIsEnabled()const
{
	return isEnabled_;
}

void SetGatewayADInfoRequest::setIsEnabled(bool isEnabled)
{
	isEnabled_ = isEnabled;
	setParameter("IsEnabled", isEnabled ? "true" : "false");
}

