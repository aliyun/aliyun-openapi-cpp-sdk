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

#include <alibabacloud/scdn/model/DescribeScdnUserDomainsRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnUserDomainsRequest;

DescribeScdnUserDomainsRequest::DescribeScdnUserDomainsRequest() :
	RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnUserDomains")
{}

DescribeScdnUserDomainsRequest::~DescribeScdnUserDomainsRequest()
{}

std::string DescribeScdnUserDomainsRequest::getFuncFilter()const
{
	return funcFilter_;
}

void DescribeScdnUserDomainsRequest::setFuncFilter(const std::string& funcFilter)
{
	funcFilter_ = funcFilter;
	setCoreParameter("FuncFilter", funcFilter);
}

bool DescribeScdnUserDomainsRequest::getCheckDomainShow()const
{
	return checkDomainShow_;
}

void DescribeScdnUserDomainsRequest::setCheckDomainShow(bool checkDomainShow)
{
	checkDomainShow_ = checkDomainShow;
	setCoreParameter("CheckDomainShow", checkDomainShow ? "true" : "false");
}

std::string DescribeScdnUserDomainsRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeScdnUserDomainsRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeScdnUserDomainsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeScdnUserDomainsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

int DescribeScdnUserDomainsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeScdnUserDomainsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeScdnUserDomainsRequest::getDomainName()const
{
	return domainName_;
}

void DescribeScdnUserDomainsRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

long DescribeScdnUserDomainsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeScdnUserDomainsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeScdnUserDomainsRequest::getFuncId()const
{
	return funcId_;
}

void DescribeScdnUserDomainsRequest::setFuncId(const std::string& funcId)
{
	funcId_ = funcId;
	setCoreParameter("FuncId", funcId);
}

int DescribeScdnUserDomainsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeScdnUserDomainsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeScdnUserDomainsRequest::getDomainStatus()const
{
	return domainStatus_;
}

void DescribeScdnUserDomainsRequest::setDomainStatus(const std::string& domainStatus)
{
	domainStatus_ = domainStatus;
	setCoreParameter("DomainStatus", domainStatus);
}

std::string DescribeScdnUserDomainsRequest::getDomainSearchType()const
{
	return domainSearchType_;
}

void DescribeScdnUserDomainsRequest::setDomainSearchType(const std::string& domainSearchType)
{
	domainSearchType_ = domainSearchType;
	setCoreParameter("DomainSearchType", domainSearchType);
}

