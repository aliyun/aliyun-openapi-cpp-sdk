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

#include <alibabacloud/cdn/model/DescribeLiveStreamSnapshotInfoRequest.h>

using AlibabaCloud::Cdn::Model::DescribeLiveStreamSnapshotInfoRequest;

DescribeLiveStreamSnapshotInfoRequest::DescribeLiveStreamSnapshotInfoRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeLiveStreamSnapshotInfo")
{}

DescribeLiveStreamSnapshotInfoRequest::~DescribeLiveStreamSnapshotInfoRequest()
{}

std::string DescribeLiveStreamSnapshotInfoRequest::getAppName()const
{
	return appName_;
}

void DescribeLiveStreamSnapshotInfoRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setCoreParameter("AppName", appName);
}

std::string DescribeLiveStreamSnapshotInfoRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveStreamSnapshotInfoRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeLiveStreamSnapshotInfoRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveStreamSnapshotInfoRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

int DescribeLiveStreamSnapshotInfoRequest::getLimit()const
{
	return limit_;
}

void DescribeLiveStreamSnapshotInfoRequest::setLimit(int limit)
{
	limit_ = limit;
	setCoreParameter("Limit", std::to_string(limit));
}

std::string DescribeLiveStreamSnapshotInfoRequest::getEndTime()const
{
	return endTime_;
}

void DescribeLiveStreamSnapshotInfoRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeLiveStreamSnapshotInfoRequest::getStartTime()const
{
	return startTime_;
}

void DescribeLiveStreamSnapshotInfoRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

long DescribeLiveStreamSnapshotInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveStreamSnapshotInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLiveStreamSnapshotInfoRequest::getStreamName()const
{
	return streamName_;
}

void DescribeLiveStreamSnapshotInfoRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setCoreParameter("StreamName", streamName);
}

