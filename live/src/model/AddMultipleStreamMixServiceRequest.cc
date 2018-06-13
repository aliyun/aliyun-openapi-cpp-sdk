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

#include <alibabacloud/live/model/AddMultipleStreamMixServiceRequest.h>

using AlibabaCloud::Live::Model::AddMultipleStreamMixServiceRequest;

AddMultipleStreamMixServiceRequest::AddMultipleStreamMixServiceRequest() :
	RpcServiceRequest("live", "2016-11-01", "AddMultipleStreamMixService")
{}

AddMultipleStreamMixServiceRequest::~AddMultipleStreamMixServiceRequest()
{}

std::string AddMultipleStreamMixServiceRequest::getAppName()const
{
	return appName_;
}

void AddMultipleStreamMixServiceRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string AddMultipleStreamMixServiceRequest::getSecurityToken()const
{
	return securityToken_;
}

void AddMultipleStreamMixServiceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string AddMultipleStreamMixServiceRequest::getDomainName()const
{
	return domainName_;
}

void AddMultipleStreamMixServiceRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string AddMultipleStreamMixServiceRequest::getMixStreamName()const
{
	return mixStreamName_;
}

void AddMultipleStreamMixServiceRequest::setMixStreamName(const std::string& mixStreamName)
{
	mixStreamName_ = mixStreamName;
	setParameter("MixStreamName", mixStreamName);
}

std::string AddMultipleStreamMixServiceRequest::getMixDomainName()const
{
	return mixDomainName_;
}

void AddMultipleStreamMixServiceRequest::setMixDomainName(const std::string& mixDomainName)
{
	mixDomainName_ = mixDomainName;
	setParameter("MixDomainName", mixDomainName);
}

long AddMultipleStreamMixServiceRequest::getOwnerId()const
{
	return ownerId_;
}

void AddMultipleStreamMixServiceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string AddMultipleStreamMixServiceRequest::getMixAppName()const
{
	return mixAppName_;
}

void AddMultipleStreamMixServiceRequest::setMixAppName(const std::string& mixAppName)
{
	mixAppName_ = mixAppName;
	setParameter("MixAppName", mixAppName);
}

std::string AddMultipleStreamMixServiceRequest::getStreamName()const
{
	return streamName_;
}

void AddMultipleStreamMixServiceRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setParameter("StreamName", streamName);
}

std::string AddMultipleStreamMixServiceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddMultipleStreamMixServiceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

