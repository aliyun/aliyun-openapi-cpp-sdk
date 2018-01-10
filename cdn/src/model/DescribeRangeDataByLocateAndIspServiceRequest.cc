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

#include <alibabacloud/cdn/model/DescribeRangeDataByLocateAndIspServiceRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeRangeDataByLocateAndIspServiceRequest::DescribeRangeDataByLocateAndIspServiceRequest() :
	CdnRequest("DescribeRangeDataByLocateAndIspService")
{}

DescribeRangeDataByLocateAndIspServiceRequest::~DescribeRangeDataByLocateAndIspServiceRequest()
{}

std::string DescribeRangeDataByLocateAndIspServiceRequest::getIspNames()const
{
	return ispNames_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setIspNames(const std::string& ispNames)
{
	ispNames_ = ispNames;
	setParameter("IspNames", ispNames);
}

std::string DescribeRangeDataByLocateAndIspServiceRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeRangeDataByLocateAndIspServiceRequest::getDomainNames()const
{
	return domainNames_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setDomainNames(const std::string& domainNames)
{
	domainNames_ = domainNames;
	setParameter("DomainNames", domainNames);
}

std::string DescribeRangeDataByLocateAndIspServiceRequest::getLocationNames()const
{
	return locationNames_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setLocationNames(const std::string& locationNames)
{
	locationNames_ = locationNames;
	setParameter("LocationNames", locationNames);
}

std::string DescribeRangeDataByLocateAndIspServiceRequest::getEndTime()const
{
	return endTime_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeRangeDataByLocateAndIspServiceRequest::getStartTime()const
{
	return startTime_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeRangeDataByLocateAndIspServiceRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeRangeDataByLocateAndIspServiceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

