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

#include <alibabacloud/live/model/DescribeLiveDomainSnapshotDataRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveDomainSnapshotDataRequest;

DescribeLiveDomainSnapshotDataRequest::DescribeLiveDomainSnapshotDataRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeLiveDomainSnapshotData")
{}

DescribeLiveDomainSnapshotDataRequest::~DescribeLiveDomainSnapshotDataRequest()
{}

std::string DescribeLiveDomainSnapshotDataRequest::getRegionId()const
{
	return regionId_;
}

void DescribeLiveDomainSnapshotDataRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeLiveDomainSnapshotDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveDomainSnapshotDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

std::string DescribeLiveDomainSnapshotDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeLiveDomainSnapshotDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string DescribeLiveDomainSnapshotDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeLiveDomainSnapshotDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

long DescribeLiveDomainSnapshotDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveDomainSnapshotDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

