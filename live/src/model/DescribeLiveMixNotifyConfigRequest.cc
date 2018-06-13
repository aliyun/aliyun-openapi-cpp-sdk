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

#include <alibabacloud/live/model/DescribeLiveMixNotifyConfigRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveMixNotifyConfigRequest;

DescribeLiveMixNotifyConfigRequest::DescribeLiveMixNotifyConfigRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeLiveMixNotifyConfig")
{}

DescribeLiveMixNotifyConfigRequest::~DescribeLiveMixNotifyConfigRequest()
{}

std::string DescribeLiveMixNotifyConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveMixNotifyConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeLiveMixNotifyConfigRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveMixNotifyConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long DescribeLiveMixNotifyConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveMixNotifyConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLiveMixNotifyConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLiveMixNotifyConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

