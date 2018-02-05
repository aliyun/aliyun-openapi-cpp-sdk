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

#include <alibabacloud/cdn/model/AddLivePullStreamInfoRequest.h>

using AlibabaCloud::Cdn::Model::AddLivePullStreamInfoRequest;

AddLivePullStreamInfoRequest::AddLivePullStreamInfoRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "AddLivePullStreamInfo")
{}

AddLivePullStreamInfoRequest::~AddLivePullStreamInfoRequest()
{}

std::string AddLivePullStreamInfoRequest::getSourceUrl()const
{
	return sourceUrl_;
}

void AddLivePullStreamInfoRequest::setSourceUrl(const std::string& sourceUrl)
{
	sourceUrl_ = sourceUrl;
	setParameter("SourceUrl", sourceUrl);
}

std::string AddLivePullStreamInfoRequest::getAppName()const
{
	return appName_;
}

void AddLivePullStreamInfoRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string AddLivePullStreamInfoRequest::getSecurityToken()const
{
	return securityToken_;
}

void AddLivePullStreamInfoRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string AddLivePullStreamInfoRequest::getDomainName()const
{
	return domainName_;
}

void AddLivePullStreamInfoRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string AddLivePullStreamInfoRequest::getEndTime()const
{
	return endTime_;
}

void AddLivePullStreamInfoRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string AddLivePullStreamInfoRequest::getStartTime()const
{
	return startTime_;
}

void AddLivePullStreamInfoRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long AddLivePullStreamInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void AddLivePullStreamInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string AddLivePullStreamInfoRequest::getStreamName()const
{
	return streamName_;
}

void AddLivePullStreamInfoRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setParameter("StreamName", streamName);
}

std::string AddLivePullStreamInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddLivePullStreamInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

