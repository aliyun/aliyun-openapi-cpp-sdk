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

#include <alibabacloud/cdn/model/SetReqAuthConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetReqAuthConfigRequest;

SetReqAuthConfigRequest::SetReqAuthConfigRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "SetReqAuthConfig")
{}

SetReqAuthConfigRequest::~SetReqAuthConfigRequest()
{}

std::string SetReqAuthConfigRequest::getKey1()const
{
	return key1_;
}

void SetReqAuthConfigRequest::setKey1(const std::string& key1)
{
	key1_ = key1;
	setCoreParameter("Key1", std::to_string(key1));
}

std::string SetReqAuthConfigRequest::getKey2()const
{
	return key2_;
}

void SetReqAuthConfigRequest::setKey2(const std::string& key2)
{
	key2_ = key2;
	setCoreParameter("Key2", std::to_string(key2));
}

std::string SetReqAuthConfigRequest::getAuthRemoteDesc()const
{
	return authRemoteDesc_;
}

void SetReqAuthConfigRequest::setAuthRemoteDesc(const std::string& authRemoteDesc)
{
	authRemoteDesc_ = authRemoteDesc;
	setCoreParameter("AuthRemoteDesc", std::to_string(authRemoteDesc));
}

std::string SetReqAuthConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetReqAuthConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string SetReqAuthConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetReqAuthConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

long SetReqAuthConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetReqAuthConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string SetReqAuthConfigRequest::getTimeOut()const
{
	return timeOut_;
}

void SetReqAuthConfigRequest::setTimeOut(const std::string& timeOut)
{
	timeOut_ = timeOut;
	setCoreParameter("TimeOut", std::to_string(timeOut));
}

std::string SetReqAuthConfigRequest::getAuthType()const
{
	return authType_;
}

void SetReqAuthConfigRequest::setAuthType(const std::string& authType)
{
	authType_ = authType;
	setCoreParameter("AuthType", std::to_string(authType));
}

