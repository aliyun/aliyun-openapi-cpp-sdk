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

#include <alibabacloud/httpdns/model/DeleteDomainRequest.h>

using AlibabaCloud::Httpdns::Model::DeleteDomainRequest;

DeleteDomainRequest::DeleteDomainRequest() :
	RpcServiceRequest("httpdns", "2016-02-01", "DeleteDomain")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteDomainRequest::~DeleteDomainRequest()
{}

std::string DeleteDomainRequest::getDomainName()const
{
	return domainName_;
}

void DeleteDomainRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DeleteDomainRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteDomainRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteDomainRequest::getAccountId()const
{
	return accountId_;
}

void DeleteDomainRequest::setAccountId(const std::string& accountId)
{
	accountId_ = accountId;
	setParameter("AccountId", accountId);
}

