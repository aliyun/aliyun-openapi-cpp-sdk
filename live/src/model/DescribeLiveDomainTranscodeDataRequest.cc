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

#include <alibabacloud/live/model/DescribeLiveDomainTranscodeDataRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveDomainTranscodeDataRequest;

DescribeLiveDomainTranscodeDataRequest::DescribeLiveDomainTranscodeDataRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeLiveDomainTranscodeData")
{}

DescribeLiveDomainTranscodeDataRequest::~DescribeLiveDomainTranscodeDataRequest()
{}

std::string DescribeLiveDomainTranscodeDataRequest::getRegionId()const
{
	return regionId_;
}

void DescribeLiveDomainTranscodeDataRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeLiveDomainTranscodeDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveDomainTranscodeDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

std::string DescribeLiveDomainTranscodeDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeLiveDomainTranscodeDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string DescribeLiveDomainTranscodeDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeLiveDomainTranscodeDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

long DescribeLiveDomainTranscodeDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveDomainTranscodeDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

