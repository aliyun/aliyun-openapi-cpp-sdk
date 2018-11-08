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

#include <alibabacloud/live/model/AddLiveMixConfigRequest.h>

using AlibabaCloud::Live::Model::AddLiveMixConfigRequest;

AddLiveMixConfigRequest::AddLiveMixConfigRequest() :
	RpcServiceRequest("live", "2016-11-01", "AddLiveMixConfig")
{}

AddLiveMixConfigRequest::~AddLiveMixConfigRequest()
{}

std::string AddLiveMixConfigRequest::get_Template()const
{
	return _template_;
}

void AddLiveMixConfigRequest::set_Template(const std::string& _template)
{
	_template_ = _template;
	setParameter("_Template", _template);
}

std::string AddLiveMixConfigRequest::getAppName()const
{
	return appName_;
}

void AddLiveMixConfigRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string AddLiveMixConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void AddLiveMixConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string AddLiveMixConfigRequest::getDomainName()const
{
	return domainName_;
}

void AddLiveMixConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long AddLiveMixConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void AddLiveMixConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string AddLiveMixConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddLiveMixConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

