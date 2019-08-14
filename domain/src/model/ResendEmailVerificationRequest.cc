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

#include <alibabacloud/domain/model/ResendEmailVerificationRequest.h>

using AlibabaCloud::Domain::Model::ResendEmailVerificationRequest;

ResendEmailVerificationRequest::ResendEmailVerificationRequest() :
	RpcServiceRequest("domain", "2018-01-29", "ResendEmailVerification")
{}

ResendEmailVerificationRequest::~ResendEmailVerificationRequest()
{}

std::string ResendEmailVerificationRequest::getUserClientIp()const
{
	return userClientIp_;
}

void ResendEmailVerificationRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string ResendEmailVerificationRequest::getLang()const
{
	return lang_;
}

void ResendEmailVerificationRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string ResendEmailVerificationRequest::getEmail()const
{
	return email_;
}

void ResendEmailVerificationRequest::setEmail(const std::string& email)
{
	email_ = email;
	setCoreParameter("Email", email);
}

