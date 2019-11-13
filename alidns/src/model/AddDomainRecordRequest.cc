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

#include <alibabacloud/alidns/model/AddDomainRecordRequest.h>

using AlibabaCloud::Alidns::Model::AddDomainRecordRequest;

AddDomainRecordRequest::AddDomainRecordRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "AddDomainRecord")
{
	setMethod(HttpRequest::Method::Post);
}

AddDomainRecordRequest::~AddDomainRecordRequest()
{}

std::string AddDomainRecordRequest::getRR()const
{
	return rR_;
}

void AddDomainRecordRequest::setRR(const std::string& rR)
{
	rR_ = rR;
	setCoreParameter("RR", rR);
}

std::string AddDomainRecordRequest::getLine()const
{
	return line_;
}

void AddDomainRecordRequest::setLine(const std::string& line)
{
	line_ = line;
	setCoreParameter("Line", line);
}

std::string AddDomainRecordRequest::getType()const
{
	return type_;
}

void AddDomainRecordRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string AddDomainRecordRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddDomainRecordRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string AddDomainRecordRequest::getLang()const
{
	return lang_;
}

void AddDomainRecordRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string AddDomainRecordRequest::getValue()const
{
	return value_;
}

void AddDomainRecordRequest::setValue(const std::string& value)
{
	value_ = value;
	setCoreParameter("Value", value);
}

std::string AddDomainRecordRequest::getDomainName()const
{
	return domainName_;
}

void AddDomainRecordRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

long AddDomainRecordRequest::getPriority()const
{
	return priority_;
}

void AddDomainRecordRequest::setPriority(long priority)
{
	priority_ = priority;
	setCoreParameter("Priority", std::to_string(priority));
}

long AddDomainRecordRequest::getTTL()const
{
	return tTL_;
}

void AddDomainRecordRequest::setTTL(long tTL)
{
	tTL_ = tTL;
	setCoreParameter("TTL", std::to_string(tTL));
}

std::string AddDomainRecordRequest::getUserClientIp()const
{
	return userClientIp_;
}

void AddDomainRecordRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

