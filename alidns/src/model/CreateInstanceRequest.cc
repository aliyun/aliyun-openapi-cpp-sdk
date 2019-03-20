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

#include <alibabacloud/alidns/model/CreateInstanceRequest.h>

using AlibabaCloud::Alidns::Model::CreateInstanceRequest;

CreateInstanceRequest::CreateInstanceRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "CreateInstance")
{}

CreateInstanceRequest::~CreateInstanceRequest()
{}

int CreateInstanceRequest::getMonth()const
{
	return month_;
}

void CreateInstanceRequest::setMonth(int month)
{
	month_ = month;
	setParameter("Month", std::to_string(month));
}

std::string CreateInstanceRequest::getUserClientIp()const
{
	return userClientIp_;
}

void CreateInstanceRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::string CreateInstanceRequest::getDomainName()const
{
	return domainName_;
}

void CreateInstanceRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string CreateInstanceRequest::getLang()const
{
	return lang_;
}

void CreateInstanceRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string CreateInstanceRequest::getInstanceVersion()const
{
	return instanceVersion_;
}

void CreateInstanceRequest::setInstanceVersion(const std::string& instanceVersion)
{
	instanceVersion_ = instanceVersion;
	setParameter("InstanceVersion", instanceVersion);
}

long CreateInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateInstanceRequest::getToken()const
{
	return token_;
}

void CreateInstanceRequest::setToken(const std::string& token)
{
	token_ = token;
	setParameter("Token", token);
}

