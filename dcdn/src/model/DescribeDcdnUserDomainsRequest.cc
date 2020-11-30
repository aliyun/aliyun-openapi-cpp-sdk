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
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDcdnUserDomainsRequest::~DescribeDcdnUserDomainsRequest()
{}

int DescribeDcdnUserDomainsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDcdnUserDomainsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

bool DescribeDcdnUserDomainsRequest::getCheckDomainShow()const
{
	return checkDomainShow_;
}

void DescribeDcdnUserDomainsRequest::setCheckDomainShow(bool checkDomainShow)
{
	checkDomainShow_ = checkDomainShow;
	setParameter("CheckDomainShow", checkDomainShow ? "true" : "false");
}

std::string DescribeDcdnUserDomainsRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeDcdnUserDomainsRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeDcdnUserDomainsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDcdnUserDomainsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDcdnUserDomainsRequest::getChangeEndTime()const
{
	return changeEndTime_;
}

void DescribeDcdnUserDomainsRequest::setChangeEndTime(const std::string& changeEndTime)
{
	changeEndTime_ = changeEndTime;
	setParameter("ChangeEndTime", changeEndTime);
}

int DescribeDcdnUserDomainsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDcdnUserDomainsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::vector<DescribeDcdnUserDomainsRequest::Tag> DescribeDcdnUserDomainsRequest::getTag()const
{
	return tag_;
}

void DescribeDcdnUserDomainsRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Value", tagObj.value);
		setParameter(tagObjStr + ".Key", tagObj.key);
	}
}

std::string DescribeDcdnUserDomainsRequest::getFuncFilter()const
{
	return funcFilter_;
}

void DescribeDcdnUserDomainsRequest::setFuncFilter(const std::string& funcFilter)
{
	funcFilter_ = funcFilter;
	setParameter("FuncFilter", funcFilter);
}

std::string DescribeDcdnUserDomainsRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDcdnUserDomainsRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long DescribeDcdnUserDomainsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnUserDomainsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDcdnUserDomainsRequest::getFuncId()const
{
	return funcId_;
}

void DescribeDcdnUserDomainsRequest::setFuncId(const std::string& funcId)
{
	funcId_ = funcId;
	setParameter("FuncId", funcId);
}

std::string DescribeDcdnUserDomainsRequest::getDomainStatus()const
{
	return domainStatus_;
}

void DescribeDcdnUserDomainsRequest::setDomainStatus(const std::string& domainStatus)
{
	domainStatus_ = domainStatus;
	setParameter("DomainStatus", domainStatus);
}

std::string DescribeDcdnUserDomainsRequest::getDomainSearchType()const
{
	return domainSearchType_;
}

void DescribeDcdnUserDomainsRequest::setDomainSearchType(const std::string& domainSearchType)
{
	domainSearchType_ = domainSearchType;
	setParameter("DomainSearchType", domainSearchType);
}

std::string DescribeDcdnUserDomainsRequest::getChangeStartTime()const
{
	return changeStartTime_;
}

void DescribeDcdnUserDomainsRequest::setChangeStartTime(const std::string& changeStartTime)
{
	changeStartTime_ = changeStartTime;
	setParameter("ChangeStartTime", changeStartTime);
}

