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

#include <alibabacloud/cdn/model/DescribeLiveStreamRecordIndexFileRequest.h>

using AlibabaCloud::Cdn::Model::DescribeLiveStreamRecordIndexFileRequest;

DescribeLiveStreamRecordIndexFileRequest::DescribeLiveStreamRecordIndexFileRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeLiveStreamRecordIndexFile")
{}

DescribeLiveStreamRecordIndexFileRequest::~DescribeLiveStreamRecordIndexFileRequest()
{}

std::string DescribeLiveStreamRecordIndexFileRequest::getRecordId()const
{
	return recordId_;
}

void DescribeLiveStreamRecordIndexFileRequest::setRecordId(const std::string& recordId)
{
	recordId_ = recordId;
	setCoreParameter("RecordId", recordId);
}

std::string DescribeLiveStreamRecordIndexFileRequest::getAppName()const
{
	return appName_;
}

void DescribeLiveStreamRecordIndexFileRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setCoreParameter("AppName", appName);
}

std::string DescribeLiveStreamRecordIndexFileRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveStreamRecordIndexFileRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeLiveStreamRecordIndexFileRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveStreamRecordIndexFileRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

long DescribeLiveStreamRecordIndexFileRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveStreamRecordIndexFileRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLiveStreamRecordIndexFileRequest::getStreamName()const
{
	return streamName_;
}

void DescribeLiveStreamRecordIndexFileRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setCoreParameter("StreamName", streamName);
}

