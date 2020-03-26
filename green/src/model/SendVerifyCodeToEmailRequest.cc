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

#include <alibabacloud/green/model/SendVerifyCodeToEmailRequest.h>

using AlibabaCloud::Green::Model::SendVerifyCodeToEmailRequest;

SendVerifyCodeToEmailRequest::SendVerifyCodeToEmailRequest() :
	RpcServiceRequest("green", "2017-08-23", "SendVerifyCodeToEmail")
{
	setMethod(HttpRequest::Method::Post);
}

SendVerifyCodeToEmailRequest::~SendVerifyCodeToEmailRequest()
{}

std::string SendVerifyCodeToEmailRequest::getSourceIp()const
{
	return sourceIp_;
}

void SendVerifyCodeToEmailRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string SendVerifyCodeToEmailRequest::getLang()const
{
	return lang_;
}

void SendVerifyCodeToEmailRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string SendVerifyCodeToEmailRequest::getEmail()const
{
	return email_;
}

void SendVerifyCodeToEmailRequest::setEmail(const std::string& email)
{
	email_ = email;
	setParameter("Email", email);
}

