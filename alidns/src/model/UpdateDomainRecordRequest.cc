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

#include <alibabacloud/alidns/model/UpdateDomainRecordRequest.h>

using AlibabaCloud::Alidns::Model::UpdateDomainRecordRequest;

UpdateDomainRecordRequest::UpdateDomainRecordRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "UpdateDomainRecord")
{}

UpdateDomainRecordRequest::~UpdateDomainRecordRequest()
{}

std::string UpdateDomainRecordRequest::getRecordId()const
{
	return recordId_;
}

void UpdateDomainRecordRequest::setRecordId(const std::string& recordId)
{
	recordId_ = recordId;
	setCoreParameter("RecordId", recordId);
}

std::string UpdateDomainRecordRequest::getRR()const
{
	return rR_;
}

void UpdateDomainRecordRequest::setRR(const std::string& rR)
{
	rR_ = rR;
	setCoreParameter("RR", rR);
}

std::string UpdateDomainRecordRequest::getLine()const
{
	return line_;
}

void UpdateDomainRecordRequest::setLine(const std::string& line)
{
	line_ = line;
	setCoreParameter("Line", line);
}

std::string UpdateDomainRecordRequest::getUserClientIp()const
{
	return userClientIp_;
}

void UpdateDomainRecordRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string UpdateDomainRecordRequest::getLang()const
{
	return lang_;
}

void UpdateDomainRecordRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string UpdateDomainRecordRequest::getType()const
{
	return type_;
}

void UpdateDomainRecordRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

long UpdateDomainRecordRequest::getPriority()const
{
	return priority_;
}

void UpdateDomainRecordRequest::setPriority(long priority)
{
	priority_ = priority;
	setCoreParameter("Priority", priority);
}

std::string UpdateDomainRecordRequest::getValue()const
{
	return value_;
}

void UpdateDomainRecordRequest::setValue(const std::string& value)
{
	value_ = value;
	setCoreParameter("Value", value);
}

long UpdateDomainRecordRequest::getTTL()const
{
	return tTL_;
}

void UpdateDomainRecordRequest::setTTL(long tTL)
{
	tTL_ = tTL;
	setCoreParameter("TTL", tTL);
}

std::string UpdateDomainRecordRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateDomainRecordRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

