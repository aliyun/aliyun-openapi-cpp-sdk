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

#include <alibabacloud/cdn/model/SetL2OssKeyConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetL2OssKeyConfigRequest;

SetL2OssKeyConfigRequest::SetL2OssKeyConfigRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "SetL2OssKeyConfig")
{}

SetL2OssKeyConfigRequest::~SetL2OssKeyConfigRequest()
{}

std::string SetL2OssKeyConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetL2OssKeyConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SetL2OssKeyConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetL2OssKeyConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long SetL2OssKeyConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetL2OssKeyConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetL2OssKeyConfigRequest::getPrivateOssAuth()const
{
	return privateOssAuth_;
}

void SetL2OssKeyConfigRequest::setPrivateOssAuth(const std::string& privateOssAuth)
{
	privateOssAuth_ = privateOssAuth;
	setParameter("PrivateOssAuth", privateOssAuth);
}

std::string SetL2OssKeyConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetL2OssKeyConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

