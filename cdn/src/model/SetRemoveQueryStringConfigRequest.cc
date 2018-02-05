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

#include <alibabacloud/cdn/model/SetRemoveQueryStringConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetRemoveQueryStringConfigRequest;

SetRemoveQueryStringConfigRequest::SetRemoveQueryStringConfigRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "SetRemoveQueryStringConfig")
{}

SetRemoveQueryStringConfigRequest::~SetRemoveQueryStringConfigRequest()
{}

std::string SetRemoveQueryStringConfigRequest::getKeepOssArgs()const
{
	return keepOssArgs_;
}

void SetRemoveQueryStringConfigRequest::setKeepOssArgs(const std::string& keepOssArgs)
{
	keepOssArgs_ = keepOssArgs;
	setParameter("KeepOssArgs", keepOssArgs);
}

std::string SetRemoveQueryStringConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetRemoveQueryStringConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SetRemoveQueryStringConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetRemoveQueryStringConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string SetRemoveQueryStringConfigRequest::getAliRemoveArgs()const
{
	return aliRemoveArgs_;
}

void SetRemoveQueryStringConfigRequest::setAliRemoveArgs(const std::string& aliRemoveArgs)
{
	aliRemoveArgs_ = aliRemoveArgs;
	setParameter("AliRemoveArgs", aliRemoveArgs);
}

long SetRemoveQueryStringConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetRemoveQueryStringConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetRemoveQueryStringConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetRemoveQueryStringConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

