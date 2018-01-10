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

#include <alibabacloud/cdn/model/DescribeExtensiveDomainDataRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeExtensiveDomainDataRequest::DescribeExtensiveDomainDataRequest() :
	CdnRequest("DescribeExtensiveDomainData")
{}

DescribeExtensiveDomainDataRequest::~DescribeExtensiveDomainDataRequest()
{}

std::string DescribeExtensiveDomainDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeExtensiveDomainDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeExtensiveDomainDataRequest::getExtensiveDomain()const
{
	return extensiveDomain_;
}

void DescribeExtensiveDomainDataRequest::setExtensiveDomain(const std::string& extensiveDomain)
{
	extensiveDomain_ = extensiveDomain;
	setParameter("ExtensiveDomain", extensiveDomain);
}

int DescribeExtensiveDomainDataRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeExtensiveDomainDataRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeExtensiveDomainDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeExtensiveDomainDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeExtensiveDomainDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeExtensiveDomainDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeExtensiveDomainDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeExtensiveDomainDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DescribeExtensiveDomainDataRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeExtensiveDomainDataRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeExtensiveDomainDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeExtensiveDomainDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

