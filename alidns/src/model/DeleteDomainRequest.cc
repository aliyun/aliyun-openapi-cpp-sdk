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

#include <alibabacloud/alidns/model/DeleteDomainRequest.h>

using AlibabaCloud::Alidns::Model::DeleteDomainRequest;

DeleteDomainRequest::DeleteDomainRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "DeleteDomain")
{}

DeleteDomainRequest::~DeleteDomainRequest()
{}

std::string DeleteDomainRequest::getUserClientIp()const
{
	return userClientIp_;
}

void DeleteDomainRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string DeleteDomainRequest::getDomainName()const
{
	return domainName_;
}

void DeleteDomainRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DeleteDomainRequest::getLang()const
{
	return lang_;
}

void DeleteDomainRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string DeleteDomainRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteDomainRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

