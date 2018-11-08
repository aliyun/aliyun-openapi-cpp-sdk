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

#include <alibabacloud/live/model/RemoveMultipleStreamMixServiceRequest.h>

using AlibabaCloud::Live::Model::RemoveMultipleStreamMixServiceRequest;

RemoveMultipleStreamMixServiceRequest::RemoveMultipleStreamMixServiceRequest() :
	RpcServiceRequest("live", "2016-11-01", "RemoveMultipleStreamMixService")
{}

RemoveMultipleStreamMixServiceRequest::~RemoveMultipleStreamMixServiceRequest()
{}

std::string RemoveMultipleStreamMixServiceRequest::getAppName()const
{
	return appName_;
}

void RemoveMultipleStreamMixServiceRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string RemoveMultipleStreamMixServiceRequest::getSecurityToken()const
{
	return securityToken_;
}

void RemoveMultipleStreamMixServiceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string RemoveMultipleStreamMixServiceRequest::getDomainName()const
{
	return domainName_;
}

void RemoveMultipleStreamMixServiceRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string RemoveMultipleStreamMixServiceRequest::getMixStreamName()const
{
	return mixStreamName_;
}

void RemoveMultipleStreamMixServiceRequest::setMixStreamName(const std::string& mixStreamName)
{
	mixStreamName_ = mixStreamName;
	setParameter("MixStreamName", mixStreamName);
}

std::string RemoveMultipleStreamMixServiceRequest::getMixDomainName()const
{
	return mixDomainName_;
}

void RemoveMultipleStreamMixServiceRequest::setMixDomainName(const std::string& mixDomainName)
{
	mixDomainName_ = mixDomainName;
	setParameter("MixDomainName", mixDomainName);
}

long RemoveMultipleStreamMixServiceRequest::getOwnerId()const
{
	return ownerId_;
}

void RemoveMultipleStreamMixServiceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string RemoveMultipleStreamMixServiceRequest::getMixAppName()const
{
	return mixAppName_;
}

void RemoveMultipleStreamMixServiceRequest::setMixAppName(const std::string& mixAppName)
{
	mixAppName_ = mixAppName;
	setParameter("MixAppName", mixAppName);
}

std::string RemoveMultipleStreamMixServiceRequest::getStreamName()const
{
	return streamName_;
}

void RemoveMultipleStreamMixServiceRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setParameter("StreamName", streamName);
}

std::string RemoveMultipleStreamMixServiceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RemoveMultipleStreamMixServiceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

