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

#include <alibabacloud/domain/model/VerifyEmailRequest.h>

using AlibabaCloud::Domain::Model::VerifyEmailRequest;

VerifyEmailRequest::VerifyEmailRequest() :
	RpcServiceRequest("domain", "2018-01-29", "VerifyEmail")
{}

VerifyEmailRequest::~VerifyEmailRequest()
{}

std::string VerifyEmailRequest::getUserClientIp()const
{
	return userClientIp_;
}

void VerifyEmailRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string VerifyEmailRequest::getLang()const
{
	return lang_;
}

void VerifyEmailRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string VerifyEmailRequest::getToken()const
{
	return token_;
}

void VerifyEmailRequest::setToken(const std::string& token)
{
	token_ = token;
	setCoreParameter("Token", token);
}

