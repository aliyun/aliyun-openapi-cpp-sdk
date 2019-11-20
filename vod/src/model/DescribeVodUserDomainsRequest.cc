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

#include <alibabacloud/vod/model/DescribeVodUserDomainsRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodUserDomainsRequest;

DescribeVodUserDomainsRequest::DescribeVodUserDomainsRequest() :
	RpcServiceRequest("vod", "2017-03-21", "DescribeVodUserDomains")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeVodUserDomainsRequest::~DescribeVodUserDomainsRequest()
{}

int DescribeVodUserDomainsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeVodUserDomainsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

bool DescribeVodUserDomainsRequest::getCheckDomainShow()const
{
	return checkDomainShow_;
}

void DescribeVodUserDomainsRequest::setCheckDomainShow(bool checkDomainShow)
{
	checkDomainShow_ = checkDomainShow;
	setCoreParameter("CheckDomainShow", checkDomainShow ? "true" : "false");
}

std::string DescribeVodUserDomainsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeVodUserDomainsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeVodUserDomainsRequest::getCdnType()const
{
	return cdnType_;
}

void DescribeVodUserDomainsRequest::setCdnType(const std::string& cdnType)
{
	cdnType_ = cdnType;
	setCoreParameter("CdnType", cdnType);
}

int DescribeVodUserDomainsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeVodUserDomainsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeVodUserDomainsRequest::getFuncFilter()const
{
	return funcFilter_;
}

void DescribeVodUserDomainsRequest::setFuncFilter(const std::string& funcFilter)
{
	funcFilter_ = funcFilter;
	setCoreParameter("FuncFilter", funcFilter);
}

std::string DescribeVodUserDomainsRequest::getDomainName()const
{
	return domainName_;
}

void DescribeVodUserDomainsRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

long DescribeVodUserDomainsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVodUserDomainsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeVodUserDomainsRequest::getFuncId()const
{
	return funcId_;
}

void DescribeVodUserDomainsRequest::setFuncId(const std::string& funcId)
{
	funcId_ = funcId;
	setCoreParameter("FuncId", funcId);
}

std::string DescribeVodUserDomainsRequest::getDomainStatus()const
{
	return domainStatus_;
}

void DescribeVodUserDomainsRequest::setDomainStatus(const std::string& domainStatus)
{
	domainStatus_ = domainStatus;
	setCoreParameter("DomainStatus", domainStatus);
}

std::string DescribeVodUserDomainsRequest::getDomainSearchType()const
{
	return domainSearchType_;
}

void DescribeVodUserDomainsRequest::setDomainSearchType(const std::string& domainSearchType)
{
	domainSearchType_ = domainSearchType;
	setCoreParameter("DomainSearchType", domainSearchType);
}

