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

#include <alibabacloud/vod/model/DescribeCdnDomainLogsRequest.h>

using AlibabaCloud::Vod::Model::DescribeCdnDomainLogsRequest;

DescribeCdnDomainLogsRequest::DescribeCdnDomainLogsRequest() :
	RpcServiceRequest("vod", "2017-03-21", "DescribeCdnDomainLogs")
{}

DescribeCdnDomainLogsRequest::~DescribeCdnDomainLogsRequest()
{}

std::string DescribeCdnDomainLogsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeCdnDomainLogsRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeCdnDomainLogsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeCdnDomainLogsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DescribeCdnDomainLogsRequest::getPageNo()const
{
	return pageNo_;
}

void DescribeCdnDomainLogsRequest::setPageNo(long pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", std::to_string(pageNo));
}

std::string DescribeCdnDomainLogsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeCdnDomainLogsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeCdnDomainLogsRequest::getDomainName()const
{
	return domainName_;
}

void DescribeCdnDomainLogsRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long DescribeCdnDomainLogsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeCdnDomainLogsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeCdnDomainLogsRequest::getEndTime()const
{
	return endTime_;
}

void DescribeCdnDomainLogsRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeCdnDomainLogsRequest::getStartTime()const
{
	return startTime_;
}

void DescribeCdnDomainLogsRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeCdnDomainLogsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeCdnDomainLogsRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string DescribeCdnDomainLogsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeCdnDomainLogsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeCdnDomainLogsRequest::getLogDay()const
{
	return logDay_;
}

void DescribeCdnDomainLogsRequest::setLogDay(const std::string& logDay)
{
	logDay_ = logDay;
	setParameter("LogDay", logDay);
}

