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

#include <alibabacloud/dcdn/model/DescribeDcdnDomainCnameRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnDomainCnameRequest;

DescribeDcdnDomainCnameRequest::DescribeDcdnDomainCnameRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnDomainCname")
{
	setMethod(HttpRequest::Method::Get);
}

DescribeDcdnDomainCnameRequest::~DescribeDcdnDomainCnameRequest()
{}

std::string DescribeDcdnDomainCnameRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDcdnDomainCnameRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

long DescribeDcdnDomainCnameRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnDomainCnameRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

