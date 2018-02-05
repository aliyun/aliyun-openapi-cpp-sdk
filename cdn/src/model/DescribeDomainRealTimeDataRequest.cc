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

#include <alibabacloud/cdn/model/DescribeDomainRealTimeDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainRealTimeDataRequest;

DescribeDomainRealTimeDataRequest::DescribeDomainRealTimeDataRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainRealTimeData")
{}

DescribeDomainRealTimeDataRequest::~DescribeDomainRealTimeDataRequest()
{}

std::string DescribeDomainRealTimeDataRequest::getField()const
{
	return field_;
}

void DescribeDomainRealTimeDataRequest::setField(const std::string& field)
{
	field_ = field;
	setParameter("Field", field);
}

std::string DescribeDomainRealTimeDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainRealTimeDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDomainRealTimeDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainRealTimeDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDomainRealTimeDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainRealTimeDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeDomainRealTimeDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainRealTimeDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeDomainRealTimeDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainRealTimeDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainRealTimeDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainRealTimeDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

