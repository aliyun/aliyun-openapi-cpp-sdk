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

#include <alibabacloud/live/model/StartMixStreamsServiceRequest.h>

using AlibabaCloud::Live::Model::StartMixStreamsServiceRequest;

StartMixStreamsServiceRequest::StartMixStreamsServiceRequest() :
	RpcServiceRequest("live", "2016-11-01", "StartMixStreamsService")
{}

StartMixStreamsServiceRequest::~StartMixStreamsServiceRequest()
{}

std::string StartMixStreamsServiceRequest::getMixType()const
{
	return mixType_;
}

void StartMixStreamsServiceRequest::setMixType(const std::string& mixType)
{
	mixType_ = mixType;
	setParameter("MixType", mixType);
}

std::string StartMixStreamsServiceRequest::getSecurityToken()const
{
	return securityToken_;
}

void StartMixStreamsServiceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string StartMixStreamsServiceRequest::getMainDomainName()const
{
	return mainDomainName_;
}

void StartMixStreamsServiceRequest::setMainDomainName(const std::string& mainDomainName)
{
	mainDomainName_ = mainDomainName;
	setParameter("MainDomainName", mainDomainName);
}

std::string StartMixStreamsServiceRequest::getMixStreamName()const
{
	return mixStreamName_;
}

void StartMixStreamsServiceRequest::setMixStreamName(const std::string& mixStreamName)
{
	mixStreamName_ = mixStreamName;
	setParameter("MixStreamName", mixStreamName);
}

std::string StartMixStreamsServiceRequest::getMixTemplate()const
{
	return mixTemplate_;
}

void StartMixStreamsServiceRequest::setMixTemplate(const std::string& mixTemplate)
{
	mixTemplate_ = mixTemplate;
	setParameter("MixTemplate", mixTemplate);
}

std::string StartMixStreamsServiceRequest::getMixDomainName()const
{
	return mixDomainName_;
}

void StartMixStreamsServiceRequest::setMixDomainName(const std::string& mixDomainName)
{
	mixDomainName_ = mixDomainName;
	setParameter("MixDomainName", mixDomainName);
}

long StartMixStreamsServiceRequest::getOwnerId()const
{
	return ownerId_;
}

void StartMixStreamsServiceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string StartMixStreamsServiceRequest::getMainAppName()const
{
	return mainAppName_;
}

void StartMixStreamsServiceRequest::setMainAppName(const std::string& mainAppName)
{
	mainAppName_ = mainAppName;
	setParameter("MainAppName", mainAppName);
}

std::string StartMixStreamsServiceRequest::getMixAppName()const
{
	return mixAppName_;
}

void StartMixStreamsServiceRequest::setMixAppName(const std::string& mixAppName)
{
	mixAppName_ = mixAppName;
	setParameter("MixAppName", mixAppName);
}

std::string StartMixStreamsServiceRequest::getMainStreamName()const
{
	return mainStreamName_;
}

void StartMixStreamsServiceRequest::setMainStreamName(const std::string& mainStreamName)
{
	mainStreamName_ = mainStreamName;
	setParameter("MainStreamName", mainStreamName);
}

std::string StartMixStreamsServiceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void StartMixStreamsServiceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

