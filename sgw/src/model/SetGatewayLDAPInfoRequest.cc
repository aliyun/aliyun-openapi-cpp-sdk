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

#include <alibabacloud/sgw/model/SetGatewayLDAPInfoRequest.h>

using AlibabaCloud::Sgw::Model::SetGatewayLDAPInfoRequest;

SetGatewayLDAPInfoRequest::SetGatewayLDAPInfoRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "SetGatewayLDAPInfo")
{
	setMethod(HttpRequest::Method::Post);
}

SetGatewayLDAPInfoRequest::~SetGatewayLDAPInfoRequest()
{}

bool SetGatewayLDAPInfoRequest::getIsTls()const
{
	return isTls_;
}

void SetGatewayLDAPInfoRequest::setIsTls(bool isTls)
{
	isTls_ = isTls;
	setParameter("IsTls", isTls ? "true" : "false");
}

std::string SetGatewayLDAPInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetGatewayLDAPInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SetGatewayLDAPInfoRequest::getPassword()const
{
	return password_;
}

void SetGatewayLDAPInfoRequest::setPassword(const std::string& password)
{
	password_ = password;
	setParameter("Password", password);
}

std::string SetGatewayLDAPInfoRequest::getRootDN()const
{
	return rootDN_;
}

void SetGatewayLDAPInfoRequest::setRootDN(const std::string& rootDN)
{
	rootDN_ = rootDN;
	setParameter("RootDN", rootDN);
}

std::string SetGatewayLDAPInfoRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetGatewayLDAPInfoRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SetGatewayLDAPInfoRequest::getServerIp()const
{
	return serverIp_;
}

void SetGatewayLDAPInfoRequest::setServerIp(const std::string& serverIp)
{
	serverIp_ = serverIp;
	setParameter("ServerIp", serverIp);
}

std::string SetGatewayLDAPInfoRequest::getBaseDN()const
{
	return baseDN_;
}

void SetGatewayLDAPInfoRequest::setBaseDN(const std::string& baseDN)
{
	baseDN_ = baseDN;
	setParameter("BaseDN", baseDN);
}

std::string SetGatewayLDAPInfoRequest::getGatewayId()const
{
	return gatewayId_;
}

void SetGatewayLDAPInfoRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}

bool SetGatewayLDAPInfoRequest::getIsEnabled()const
{
	return isEnabled_;
}

void SetGatewayLDAPInfoRequest::setIsEnabled(bool isEnabled)
{
	isEnabled_ = isEnabled;
	setParameter("IsEnabled", isEnabled ? "true" : "false");
}

