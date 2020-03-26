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

#include <alibabacloud/green/model/SendVerifyCodeToPhoneRequest.h>

using AlibabaCloud::Green::Model::SendVerifyCodeToPhoneRequest;

SendVerifyCodeToPhoneRequest::SendVerifyCodeToPhoneRequest() :
	RpcServiceRequest("green", "2017-08-23", "SendVerifyCodeToPhone")
{
	setMethod(HttpRequest::Method::Post);
}

SendVerifyCodeToPhoneRequest::~SendVerifyCodeToPhoneRequest()
{}

std::string SendVerifyCodeToPhoneRequest::getSourceIp()const
{
	return sourceIp_;
}

void SendVerifyCodeToPhoneRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string SendVerifyCodeToPhoneRequest::getPhone()const
{
	return phone_;
}

void SendVerifyCodeToPhoneRequest::setPhone(const std::string& phone)
{
	phone_ = phone;
	setParameter("Phone", phone);
}

std::string SendVerifyCodeToPhoneRequest::getLang()const
{
	return lang_;
}

void SendVerifyCodeToPhoneRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

