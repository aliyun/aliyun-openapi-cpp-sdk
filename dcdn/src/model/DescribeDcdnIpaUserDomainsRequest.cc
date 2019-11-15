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

#include <alibabacloud/dcdn/model/DescribeDcdnIpaUserDomainsRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnIpaUserDomainsRequest;

DescribeDcdnIpaUserDomainsRequest::DescribeDcdnIpaUserDomainsRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnIpaUserDomains")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDcdnIpaUserDomainsRequest::~DescribeDcdnIpaUserDomainsRequest()
{}

int DescribeDcdnIpaUserDomainsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDcdnIpaUserDomainsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

bool DescribeDcdnIpaUserDomainsRequest::getCheckDomainShow()const
{
	return checkDomainShow_;
}

void DescribeDcdnIpaUserDomainsRequest::setCheckDomainShow(bool checkDomainShow)
{
	checkDomainShow_ = checkDomainShow;
	setCoreParameter("CheckDomainShow", checkDomainShow ? "true" : "false");
}

std::string DescribeDcdnIpaUserDomainsRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeDcdnIpaUserDomainsRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeDcdnIpaUserDomainsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDcdnIpaUserDomainsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

int DescribeDcdnIpaUserDomainsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDcdnIpaUserDomainsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeDcdnIpaUserDomainsRequest::getFuncFilter()const
{
	return funcFilter_;
}

void DescribeDcdnIpaUserDomainsRequest::setFuncFilter(const std::string& funcFilter)
{
	funcFilter_ = funcFilter;
	setCoreParameter("FuncFilter", funcFilter);
}

std::string DescribeDcdnIpaUserDomainsRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDcdnIpaUserDomainsRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

long DescribeDcdnIpaUserDomainsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnIpaUserDomainsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDcdnIpaUserDomainsRequest::getFuncId()const
{
	return funcId_;
}

void DescribeDcdnIpaUserDomainsRequest::setFuncId(const std::string& funcId)
{
	funcId_ = funcId;
	setCoreParameter("FuncId", funcId);
}

std::string DescribeDcdnIpaUserDomainsRequest::getDomainStatus()const
{
	return domainStatus_;
}

void DescribeDcdnIpaUserDomainsRequest::setDomainStatus(const std::string& domainStatus)
{
	domainStatus_ = domainStatus;
	setCoreParameter("DomainStatus", domainStatus);
}

std::string DescribeDcdnIpaUserDomainsRequest::getDomainSearchType()const
{
	return domainSearchType_;
}

void DescribeDcdnIpaUserDomainsRequest::setDomainSearchType(const std::string& domainSearchType)
{
	domainSearchType_ = domainSearchType;
	setCoreParameter("DomainSearchType", domainSearchType);
}

