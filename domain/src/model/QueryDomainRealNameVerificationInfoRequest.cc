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

#include <alibabacloud/domain/model/QueryDomainRealNameVerificationInfoRequest.h>

using AlibabaCloud::Domain::Model::QueryDomainRealNameVerificationInfoRequest;

QueryDomainRealNameVerificationInfoRequest::QueryDomainRealNameVerificationInfoRequest() :
	RpcServiceRequest("domain", "2018-01-29", "QueryDomainRealNameVerificationInfo")
{}

QueryDomainRealNameVerificationInfoRequest::~QueryDomainRealNameVerificationInfoRequest()
{}

bool QueryDomainRealNameVerificationInfoRequest::getFetchImage()const
{
	return fetchImage_;
}

void QueryDomainRealNameVerificationInfoRequest::setFetchImage(bool fetchImage)
{
	fetchImage_ = fetchImage;
	setCoreParameter("FetchImage", fetchImage ? "true" : "false");
}

std::string QueryDomainRealNameVerificationInfoRequest::getUserClientIp()const
{
	return userClientIp_;
}

void QueryDomainRealNameVerificationInfoRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", std::to_string(userClientIp));
}

std::string QueryDomainRealNameVerificationInfoRequest::getDomainName()const
{
	return domainName_;
}

void QueryDomainRealNameVerificationInfoRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

std::string QueryDomainRealNameVerificationInfoRequest::getLang()const
{
	return lang_;
}

void QueryDomainRealNameVerificationInfoRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

