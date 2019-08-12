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

#include <alibabacloud/dcdn/model/DescribeDcdnUserDomainsRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnUserDomainsRequest;

DescribeDcdnUserDomainsRequest::DescribeDcdnUserDomainsRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnUserDomains")
{}

DescribeDcdnUserDomainsRequest::~DescribeDcdnUserDomainsRequest()
{}

std::string DescribeDcdnUserDomainsRequest::getFuncFilter()const
{
	return funcFilter_;
}

void DescribeDcdnUserDomainsRequest::setFuncFilter(const std::string& funcFilter)
{
	funcFilter_ = funcFilter;
	setCoreParameter("FuncFilter", funcFilter);
}

bool DescribeDcdnUserDomainsRequest::getCheckDomainShow()const
{
	return checkDomainShow_;
}

void DescribeDcdnUserDomainsRequest::setCheckDomainShow(bool checkDomainShow)
{
	checkDomainShow_ = checkDomainShow;
	setCoreParameter("CheckDomainShow", checkDomainShow ? "true" : "false");
}

std::string DescribeDcdnUserDomainsRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeDcdnUserDomainsRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeDcdnUserDomainsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDcdnUserDomainsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

int DescribeDcdnUserDomainsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDcdnUserDomainsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeDcdnUserDomainsRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDcdnUserDomainsRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

long DescribeDcdnUserDomainsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnUserDomainsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDcdnUserDomainsRequest::getFuncId()const
{
	return funcId_;
}

void DescribeDcdnUserDomainsRequest::setFuncId(const std::string& funcId)
{
	funcId_ = funcId;
	setCoreParameter("FuncId", funcId);
}

int DescribeDcdnUserDomainsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDcdnUserDomainsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeDcdnUserDomainsRequest::getDomainStatus()const
{
	return domainStatus_;
}

void DescribeDcdnUserDomainsRequest::setDomainStatus(const std::string& domainStatus)
{
	domainStatus_ = domainStatus;
	setCoreParameter("DomainStatus", domainStatus);
}

std::string DescribeDcdnUserDomainsRequest::getDomainSearchType()const
{
	return domainSearchType_;
}

void DescribeDcdnUserDomainsRequest::setDomainSearchType(const std::string& domainSearchType)
{
	domainSearchType_ = domainSearchType;
	setCoreParameter("DomainSearchType", domainSearchType);
}

