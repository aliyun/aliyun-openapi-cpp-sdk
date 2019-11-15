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

#include <alibabacloud/cdn/model/DescribeDomainCnameRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainCnameRequest;

DescribeDomainCnameRequest::DescribeDomainCnameRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "DescribeDomainCname")
{
	setMethod(HttpRequest::Method::Get);
}

DescribeDomainCnameRequest::~DescribeDomainCnameRequest()
{}

std::string DescribeDomainCnameRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainCnameRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

long DescribeDomainCnameRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainCnameRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

