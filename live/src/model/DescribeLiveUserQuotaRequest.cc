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

#include <alibabacloud/live/model/DescribeLiveUserQuotaRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveUserQuotaRequest;

DescribeLiveUserQuotaRequest::DescribeLiveUserQuotaRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeLiveUserQuota")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeLiveUserQuotaRequest::~DescribeLiveUserQuotaRequest()
{}

long DescribeLiveUserQuotaRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveUserQuotaRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLiveUserQuotaRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveUserQuotaRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

