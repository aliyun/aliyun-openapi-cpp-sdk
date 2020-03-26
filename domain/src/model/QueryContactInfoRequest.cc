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

#include <alibabacloud/domain/model/QueryContactInfoRequest.h>

using AlibabaCloud::Domain::Model::QueryContactInfoRequest;

QueryContactInfoRequest::QueryContactInfoRequest() :
	RpcServiceRequest("domain", "2018-01-29", "QueryContactInfo")
{
	setMethod(HttpRequest::Method::Post);
}

QueryContactInfoRequest::~QueryContactInfoRequest()
{}

std::string QueryContactInfoRequest::getContactType()const
{
	return contactType_;
}

void QueryContactInfoRequest::setContactType(const std::string& contactType)
{
	contactType_ = contactType;
	setParameter("ContactType", contactType);
}

std::string QueryContactInfoRequest::getDomainName()const
{
	return domainName_;
}

void QueryContactInfoRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string QueryContactInfoRequest::getUserClientIp()const
{
	return userClientIp_;
}

void QueryContactInfoRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::string QueryContactInfoRequest::getLang()const
{
	return lang_;
}

void QueryContactInfoRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

