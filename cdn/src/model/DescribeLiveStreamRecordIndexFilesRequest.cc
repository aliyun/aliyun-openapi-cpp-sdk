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

#include <alibabacloud/cdn/model/DescribeLiveStreamRecordIndexFilesRequest.h>

using AlibabaCloud::Cdn::Model::DescribeLiveStreamRecordIndexFilesRequest;

DescribeLiveStreamRecordIndexFilesRequest::DescribeLiveStreamRecordIndexFilesRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeLiveStreamRecordIndexFiles")
{}

DescribeLiveStreamRecordIndexFilesRequest::~DescribeLiveStreamRecordIndexFilesRequest()
{}

std::string DescribeLiveStreamRecordIndexFilesRequest::getAppName()const
{
	return appName_;
}

void DescribeLiveStreamRecordIndexFilesRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setCoreParameter("AppName", appName);
}

std::string DescribeLiveStreamRecordIndexFilesRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveStreamRecordIndexFilesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeLiveStreamRecordIndexFilesRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveStreamRecordIndexFilesRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeLiveStreamRecordIndexFilesRequest::getEndTime()const
{
	return endTime_;
}

void DescribeLiveStreamRecordIndexFilesRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeLiveStreamRecordIndexFilesRequest::getStartTime()const
{
	return startTime_;
}

void DescribeLiveStreamRecordIndexFilesRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

long DescribeLiveStreamRecordIndexFilesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveStreamRecordIndexFilesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLiveStreamRecordIndexFilesRequest::getStreamName()const
{
	return streamName_;
}

void DescribeLiveStreamRecordIndexFilesRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setCoreParameter("StreamName", streamName);
}

