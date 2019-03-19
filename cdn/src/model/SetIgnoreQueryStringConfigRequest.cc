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

#include <alibabacloud/cdn/model/SetIgnoreQueryStringConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetIgnoreQueryStringConfigRequest;

SetIgnoreQueryStringConfigRequest::SetIgnoreQueryStringConfigRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "SetIgnoreQueryStringConfig")
{}

SetIgnoreQueryStringConfigRequest::~SetIgnoreQueryStringConfigRequest()
{}

std::string SetIgnoreQueryStringConfigRequest::getKeepOssArgs()const
{
	return keepOssArgs_;
}

void SetIgnoreQueryStringConfigRequest::setKeepOssArgs(const std::string& keepOssArgs)
{
	keepOssArgs_ = keepOssArgs;
	setParameter("KeepOssArgs", keepOssArgs);
}

std::string SetIgnoreQueryStringConfigRequest::getHashKeyArgs()const
{
	return hashKeyArgs_;
}

void SetIgnoreQueryStringConfigRequest::setHashKeyArgs(const std::string& hashKeyArgs)
{
	hashKeyArgs_ = hashKeyArgs;
	setParameter("HashKeyArgs", hashKeyArgs);
}

std::string SetIgnoreQueryStringConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetIgnoreQueryStringConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SetIgnoreQueryStringConfigRequest::getEnable()const
{
	return enable_;
}

void SetIgnoreQueryStringConfigRequest::setEnable(const std::string& enable)
{
	enable_ = enable;
	setParameter("Enable", enable);
}

std::string SetIgnoreQueryStringConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetIgnoreQueryStringConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long SetIgnoreQueryStringConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetIgnoreQueryStringConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

