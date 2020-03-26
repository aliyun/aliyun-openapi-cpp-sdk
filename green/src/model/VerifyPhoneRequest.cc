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

#include <alibabacloud/green/model/VerifyPhoneRequest.h>

using AlibabaCloud::Green::Model::VerifyPhoneRequest;

VerifyPhoneRequest::VerifyPhoneRequest() :
	RpcServiceRequest("green", "2017-08-23", "VerifyPhone")
{
	setMethod(HttpRequest::Method::Post);
}

VerifyPhoneRequest::~VerifyPhoneRequest()
{}

std::string VerifyPhoneRequest::getVerifyCode()const
{
	return verifyCode_;
}

void VerifyPhoneRequest::setVerifyCode(const std::string& verifyCode)
{
	verifyCode_ = verifyCode;
	setParameter("VerifyCode", verifyCode);
}

std::string VerifyPhoneRequest::getSourceIp()const
{
	return sourceIp_;
}

void VerifyPhoneRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string VerifyPhoneRequest::getPhone()const
{
	return phone_;
}

void VerifyPhoneRequest::setPhone(const std::string& phone)
{
	phone_ = phone;
	setParameter("Phone", phone);
}

std::string VerifyPhoneRequest::getLang()const
{
	return lang_;
}

void VerifyPhoneRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

