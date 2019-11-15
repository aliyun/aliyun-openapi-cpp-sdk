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

#include <alibabacloud/cdn/model/DescribeL2VipsByDynamicDomainRequest.h>

using AlibabaCloud::Cdn::Model::DescribeL2VipsByDynamicDomainRequest;

DescribeL2VipsByDynamicDomainRequest::DescribeL2VipsByDynamicDomainRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeL2VipsByDynamicDomain")
{
	setMethod(HttpRequest::Method::Get);
}

DescribeL2VipsByDynamicDomainRequest::~DescribeL2VipsByDynamicDomainRequest()
{}

std::string DescribeL2VipsByDynamicDomainRequest::getDomainName()const
{
	return domainName_;
}

void DescribeL2VipsByDynamicDomainRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

long DescribeL2VipsByDynamicDomainRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeL2VipsByDynamicDomainRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

