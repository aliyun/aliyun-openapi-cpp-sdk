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

#include <alibabacloud/cdn/model/DescribeLivePullStreamConfigRequest.h>

using AlibabaCloud::Cdn::Model::DescribeLivePullStreamConfigRequest;

DescribeLivePullStreamConfigRequest::DescribeLivePullStreamConfigRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeLivePullStreamConfig")
{}

DescribeLivePullStreamConfigRequest::~DescribeLivePullStreamConfigRequest()
{}

std::string DescribeLivePullStreamConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLivePullStreamConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeLivePullStreamConfigRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLivePullStreamConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long DescribeLivePullStreamConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLivePullStreamConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLivePullStreamConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLivePullStreamConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

