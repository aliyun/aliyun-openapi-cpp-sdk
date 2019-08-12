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

#include <alibabacloud/alidns/model/CheckDomainRecordRequest.h>

using AlibabaCloud::Alidns::Model::CheckDomainRecordRequest;

CheckDomainRecordRequest::CheckDomainRecordRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "CheckDomainRecord")
{}

CheckDomainRecordRequest::~CheckDomainRecordRequest()
{}

std::string CheckDomainRecordRequest::getRR()const
{
	return rR_;
}

void CheckDomainRecordRequest::setRR(const std::string& rR)
{
	rR_ = rR;
	setCoreParameter("RR", std::to_string(rR));
}

std::string CheckDomainRecordRequest::getUserClientIp()const
{
	return userClientIp_;
}

void CheckDomainRecordRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", std::to_string(userClientIp));
}

std::string CheckDomainRecordRequest::getDomainName()const
{
	return domainName_;
}

void CheckDomainRecordRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

std::string CheckDomainRecordRequest::getLang()const
{
	return lang_;
}

void CheckDomainRecordRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

std::string CheckDomainRecordRequest::getType()const
{
	return type_;
}

void CheckDomainRecordRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", std::to_string(type));
}

std::string CheckDomainRecordRequest::getValue()const
{
	return value_;
}

void CheckDomainRecordRequest::setValue(const std::string& value)
{
	value_ = value;
	setCoreParameter("Value", std::to_string(value));
}

std::string CheckDomainRecordRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CheckDomainRecordRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

