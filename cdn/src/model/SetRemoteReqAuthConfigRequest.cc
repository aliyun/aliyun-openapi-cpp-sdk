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

#include <alibabacloud/cdn/model/SetRemoteReqAuthConfigRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

SetRemoteReqAuthConfigRequest::SetRemoteReqAuthConfigRequest() :
	CdnRequest("SetRemoteReqAuthConfig")
{}

SetRemoteReqAuthConfigRequest::~SetRemoteReqAuthConfigRequest()
{}

std::string SetRemoteReqAuthConfigRequest::getAuthPath()const
{
	return authPath_;
}

void SetRemoteReqAuthConfigRequest::setAuthPath(const std::string& authPath)
{
	authPath_ = authPath;
	setParameter("AuthPath", authPath);
}

std::string SetRemoteReqAuthConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetRemoteReqAuthConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string SetRemoteReqAuthConfigRequest::getAuthEnable()const
{
	return authEnable_;
}

void SetRemoteReqAuthConfigRequest::setAuthEnable(const std::string& authEnable)
{
	authEnable_ = authEnable;
	setParameter("AuthEnable", authEnable);
}

long SetRemoteReqAuthConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetRemoteReqAuthConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetRemoteReqAuthConfigRequest::getTimeOut()const
{
	return timeOut_;
}

void SetRemoteReqAuthConfigRequest::setTimeOut(const std::string& timeOut)
{
	timeOut_ = timeOut;
	setParameter("TimeOut", timeOut);
}

std::string SetRemoteReqAuthConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetRemoteReqAuthConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SetRemoteReqAuthConfigRequest::getAuthType()const
{
	return authType_;
}

void SetRemoteReqAuthConfigRequest::setAuthType(const std::string& authType)
{
	authType_ = authType;
	setParameter("AuthType", authType);
}

std::string SetRemoteReqAuthConfigRequest::getAuthProvider()const
{
	return authProvider_;
}

void SetRemoteReqAuthConfigRequest::setAuthProvider(const std::string& authProvider)
{
	authProvider_ = authProvider;
	setParameter("AuthProvider", authProvider);
}

std::string SetRemoteReqAuthConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetRemoteReqAuthConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SetRemoteReqAuthConfigRequest::getAuthCrash()const
{
	return authCrash_;
}

void SetRemoteReqAuthConfigRequest::setAuthCrash(const std::string& authCrash)
{
	authCrash_ = authCrash;
	setParameter("AuthCrash", authCrash);
}

std::string SetRemoteReqAuthConfigRequest::getAuthAddr()const
{
	return authAddr_;
}

void SetRemoteReqAuthConfigRequest::setAuthAddr(const std::string& authAddr)
{
	authAddr_ = authAddr;
	setParameter("AuthAddr", authAddr);
}

std::string SetRemoteReqAuthConfigRequest::getAuthFileType()const
{
	return authFileType_;
}

void SetRemoteReqAuthConfigRequest::setAuthFileType(const std::string& authFileType)
{
	authFileType_ = authFileType;
	setParameter("AuthFileType", authFileType);
}

