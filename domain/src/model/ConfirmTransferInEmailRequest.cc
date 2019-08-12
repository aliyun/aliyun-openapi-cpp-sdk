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

#include <alibabacloud/domain/model/ConfirmTransferInEmailRequest.h>

using AlibabaCloud::Domain::Model::ConfirmTransferInEmailRequest;

ConfirmTransferInEmailRequest::ConfirmTransferInEmailRequest() :
	RpcServiceRequest("domain", "2018-01-29", "ConfirmTransferInEmail")
{}

ConfirmTransferInEmailRequest::~ConfirmTransferInEmailRequest()
{}

std::string ConfirmTransferInEmailRequest::getUserClientIp()const
{
	return userClientIp_;
}

void ConfirmTransferInEmailRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::vector<std::string> ConfirmTransferInEmailRequest::getDomainName()const
{
	return domainName_;
}

void ConfirmTransferInEmailRequest::setDomainName(const std::vector<std::string>& domainName)
{
	domainName_ = domainName;
	for(int i = 0; i!= domainName.size(); i++)
		setCoreParameter("DomainName."+ std::to_string(i), domainName.at(i));
}

std::string ConfirmTransferInEmailRequest::getLang()const
{
	return lang_;
}

void ConfirmTransferInEmailRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string ConfirmTransferInEmailRequest::getEmail()const
{
	return email_;
}

void ConfirmTransferInEmailRequest::setEmail(const std::string& email)
{
	email_ = email;
	setCoreParameter("Email", email);
}

