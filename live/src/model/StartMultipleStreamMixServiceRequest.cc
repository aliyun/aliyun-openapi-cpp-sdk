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

#include <alibabacloud/live/model/StartMultipleStreamMixServiceRequest.h>

using AlibabaCloud::Live::Model::StartMultipleStreamMixServiceRequest;

StartMultipleStreamMixServiceRequest::StartMultipleStreamMixServiceRequest() :
	RpcServiceRequest("live", "2016-11-01", "StartMultipleStreamMixService")
{}

StartMultipleStreamMixServiceRequest::~StartMultipleStreamMixServiceRequest()
{}

std::string StartMultipleStreamMixServiceRequest::getAppName()const
{
	return appName_;
}

void StartMultipleStreamMixServiceRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string StartMultipleStreamMixServiceRequest::getSecurityToken()const
{
	return securityToken_;
}

void StartMultipleStreamMixServiceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string StartMultipleStreamMixServiceRequest::getDomainName()const
{
	return domainName_;
}

void StartMultipleStreamMixServiceRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string StartMultipleStreamMixServiceRequest::getMixTemplate()const
{
	return mixTemplate_;
}

void StartMultipleStreamMixServiceRequest::setMixTemplate(const std::string& mixTemplate)
{
	mixTemplate_ = mixTemplate;
	setParameter("MixTemplate", mixTemplate);
}

long StartMultipleStreamMixServiceRequest::getOwnerId()const
{
	return ownerId_;
}

void StartMultipleStreamMixServiceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string StartMultipleStreamMixServiceRequest::getStreamName()const
{
	return streamName_;
}

void StartMultipleStreamMixServiceRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setParameter("StreamName", streamName);
}

std::string StartMultipleStreamMixServiceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void StartMultipleStreamMixServiceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

