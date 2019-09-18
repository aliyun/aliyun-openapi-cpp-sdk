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

#include <alibabacloud/cdn/model/StartMixStreamsServiceRequest.h>

using AlibabaCloud::Cdn::Model::StartMixStreamsServiceRequest;

StartMixStreamsServiceRequest::StartMixStreamsServiceRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "StartMixStreamsService")
{}

StartMixStreamsServiceRequest::~StartMixStreamsServiceRequest()
{}

std::string StartMixStreamsServiceRequest::getMixStreamName()const
{
	return mixStreamName_;
}

void StartMixStreamsServiceRequest::setMixStreamName(const std::string& mixStreamName)
{
	mixStreamName_ = mixStreamName;
	setCoreParameter("MixStreamName", mixStreamName);
}

std::string StartMixStreamsServiceRequest::getMixAppName()const
{
	return mixAppName_;
}

void StartMixStreamsServiceRequest::setMixAppName(const std::string& mixAppName)
{
	mixAppName_ = mixAppName;
	setCoreParameter("MixAppName", mixAppName);
}

std::string StartMixStreamsServiceRequest::getMainStreamName()const
{
	return mainStreamName_;
}

void StartMixStreamsServiceRequest::setMainStreamName(const std::string& mainStreamName)
{
	mainStreamName_ = mainStreamName;
	setCoreParameter("MainStreamName", mainStreamName);
}

std::string StartMixStreamsServiceRequest::getMixType()const
{
	return mixType_;
}

void StartMixStreamsServiceRequest::setMixType(const std::string& mixType)
{
	mixType_ = mixType;
	setCoreParameter("MixType", mixType);
}

std::string StartMixStreamsServiceRequest::getSecurityToken()const
{
	return securityToken_;
}

void StartMixStreamsServiceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string StartMixStreamsServiceRequest::getMainDomainName()const
{
	return mainDomainName_;
}

void StartMixStreamsServiceRequest::setMainDomainName(const std::string& mainDomainName)
{
	mainDomainName_ = mainDomainName;
	setCoreParameter("MainDomainName", mainDomainName);
}

std::string StartMixStreamsServiceRequest::getMixTemplate()const
{
	return mixTemplate_;
}

void StartMixStreamsServiceRequest::setMixTemplate(const std::string& mixTemplate)
{
	mixTemplate_ = mixTemplate;
	setCoreParameter("MixTemplate", mixTemplate);
}

std::string StartMixStreamsServiceRequest::getMixDomainName()const
{
	return mixDomainName_;
}

void StartMixStreamsServiceRequest::setMixDomainName(const std::string& mixDomainName)
{
	mixDomainName_ = mixDomainName;
	setCoreParameter("MixDomainName", mixDomainName);
}

long StartMixStreamsServiceRequest::getOwnerId()const
{
	return ownerId_;
}

void StartMixStreamsServiceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string StartMixStreamsServiceRequest::getMainAppName()const
{
	return mainAppName_;
}

void StartMixStreamsServiceRequest::setMainAppName(const std::string& mainAppName)
{
	mainAppName_ = mainAppName;
	setCoreParameter("MainAppName", mainAppName);
}

