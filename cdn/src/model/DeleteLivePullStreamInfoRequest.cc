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

#include <alibabacloud/cdn/model/DeleteLivePullStreamInfoRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DeleteLivePullStreamInfoRequest::DeleteLivePullStreamInfoRequest() :
	CdnRequest("DeleteLivePullStreamInfo")
{}

DeleteLivePullStreamInfoRequest::~DeleteLivePullStreamInfoRequest()
{}

std::string DeleteLivePullStreamInfoRequest::getAppName()const
{
	return appName_;
}

void DeleteLivePullStreamInfoRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string DeleteLivePullStreamInfoRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteLivePullStreamInfoRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DeleteLivePullStreamInfoRequest::getDomainName()const
{
	return domainName_;
}

void DeleteLivePullStreamInfoRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long DeleteLivePullStreamInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteLivePullStreamInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteLivePullStreamInfoRequest::getStreamName()const
{
	return streamName_;
}

void DeleteLivePullStreamInfoRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setParameter("StreamName", streamName);
}

std::string DeleteLivePullStreamInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteLivePullStreamInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

