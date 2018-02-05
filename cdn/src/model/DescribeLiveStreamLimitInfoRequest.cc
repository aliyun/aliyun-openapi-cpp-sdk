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

#include <alibabacloud/cdn/model/DescribeLiveStreamLimitInfoRequest.h>

using AlibabaCloud::Cdn::Model::DescribeLiveStreamLimitInfoRequest;

DescribeLiveStreamLimitInfoRequest::DescribeLiveStreamLimitInfoRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeLiveStreamLimitInfo")
{}

DescribeLiveStreamLimitInfoRequest::~DescribeLiveStreamLimitInfoRequest()
{}

std::string DescribeLiveStreamLimitInfoRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveStreamLimitInfoRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

long DescribeLiveStreamLimitInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveStreamLimitInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLiveStreamLimitInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLiveStreamLimitInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeLiveStreamLimitInfoRequest::getLimitDomain()const
{
	return limitDomain_;
}

void DescribeLiveStreamLimitInfoRequest::setLimitDomain(const std::string& limitDomain)
{
	limitDomain_ = limitDomain;
	setParameter("LimitDomain", limitDomain);
}

