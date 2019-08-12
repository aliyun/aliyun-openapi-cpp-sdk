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

#include <alibabacloud/cdn/model/StopMixStreamsServiceRequest.h>

using AlibabaCloud::Cdn::Model::StopMixStreamsServiceRequest;

StopMixStreamsServiceRequest::StopMixStreamsServiceRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "StopMixStreamsService")
{}

StopMixStreamsServiceRequest::~StopMixStreamsServiceRequest()
{}

std::string StopMixStreamsServiceRequest::getSecurityToken()const
{
	return securityToken_;
}

void StopMixStreamsServiceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string StopMixStreamsServiceRequest::getMainDomainName()const
{
	return mainDomainName_;
}

void StopMixStreamsServiceRequest::setMainDomainName(const std::string& mainDomainName)
{
	mainDomainName_ = mainDomainName;
	setCoreParameter("MainDomainName", mainDomainName);
}

std::string StopMixStreamsServiceRequest::getMixStreamName()const
{
	return mixStreamName_;
}

void StopMixStreamsServiceRequest::setMixStreamName(const std::string& mixStreamName)
{
	mixStreamName_ = mixStreamName;
	setCoreParameter("MixStreamName", mixStreamName);
}

std::string StopMixStreamsServiceRequest::getMixDomainName()const
{
	return mixDomainName_;
}

void StopMixStreamsServiceRequest::setMixDomainName(const std::string& mixDomainName)
{
	mixDomainName_ = mixDomainName;
	setCoreParameter("MixDomainName", mixDomainName);
}

long StopMixStreamsServiceRequest::getOwnerId()const
{
	return ownerId_;
}

void StopMixStreamsServiceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string StopMixStreamsServiceRequest::getMainAppName()const
{
	return mainAppName_;
}

void StopMixStreamsServiceRequest::setMainAppName(const std::string& mainAppName)
{
	mainAppName_ = mainAppName;
	setCoreParameter("MainAppName", mainAppName);
}

std::string StopMixStreamsServiceRequest::getMixAppName()const
{
	return mixAppName_;
}

void StopMixStreamsServiceRequest::setMixAppName(const std::string& mixAppName)
{
	mixAppName_ = mixAppName;
	setCoreParameter("MixAppName", mixAppName);
}

std::string StopMixStreamsServiceRequest::getMainStreamName()const
{
	return mainStreamName_;
}

void StopMixStreamsServiceRequest::setMainStreamName(const std::string& mainStreamName)
{
	mainStreamName_ = mainStreamName;
	setCoreParameter("MainStreamName", mainStreamName);
}

