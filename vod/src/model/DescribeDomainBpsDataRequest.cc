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

#include <alibabacloud/vod/model/DescribeDomainBpsDataRequest.h>

using AlibabaCloud::Vod::Model::DescribeDomainBpsDataRequest;

DescribeDomainBpsDataRequest::DescribeDomainBpsDataRequest() :
	RpcServiceRequest("vod", "2017-03-21", "DescribeDomainBpsData")
{}

DescribeDomainBpsDataRequest::~DescribeDomainBpsDataRequest()
{}

std::string DescribeDomainBpsDataRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDomainBpsDataRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeDomainBpsDataRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDomainBpsDataRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDomainBpsDataRequest::getTimeMerge()const
{
	return timeMerge_;
}

void DescribeDomainBpsDataRequest::setTimeMerge(const std::string& timeMerge)
{
	timeMerge_ = timeMerge;
	setParameter("TimeMerge", timeMerge);
}

std::string DescribeDomainBpsDataRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDomainBpsDataRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeDomainBpsDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainBpsDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDomainBpsDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainBpsDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeDomainBpsDataRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeDomainBpsDataRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setParameter("LocationNameEn", locationNameEn);
}

std::string DescribeDomainBpsDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainBpsDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeDomainBpsDataRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeDomainBpsDataRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setParameter("IspNameEn", ispNameEn);
}

std::string DescribeDomainBpsDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainBpsDataRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string DescribeDomainBpsDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainBpsDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDomainBpsDataRequest::getInterval()const
{
	return interval_;
}

void DescribeDomainBpsDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}

