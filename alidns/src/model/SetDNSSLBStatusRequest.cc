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

#include <alibabacloud/alidns/model/SetDNSSLBStatusRequest.h>

using AlibabaCloud::Alidns::Model::SetDNSSLBStatusRequest;

SetDNSSLBStatusRequest::SetDNSSLBStatusRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "SetDNSSLBStatus")
{
	setMethod(HttpRequest::Method::Post);
}

SetDNSSLBStatusRequest::~SetDNSSLBStatusRequest()
{}

std::string SetDNSSLBStatusRequest::getLine()const
{
	return line_;
}

void SetDNSSLBStatusRequest::setLine(const std::string& line)
{
	line_ = line;
	setParameter("Line", line);
}

std::string SetDNSSLBStatusRequest::getDomainName()const
{
	return domainName_;
}

void SetDNSSLBStatusRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string SetDNSSLBStatusRequest::getType()const
{
	return type_;
}

void SetDNSSLBStatusRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string SetDNSSLBStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetDNSSLBStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SetDNSSLBStatusRequest::getUserClientIp()const
{
	return userClientIp_;
}

void SetDNSSLBStatusRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::string SetDNSSLBStatusRequest::getSubDomain()const
{
	return subDomain_;
}

void SetDNSSLBStatusRequest::setSubDomain(const std::string& subDomain)
{
	subDomain_ = subDomain;
	setParameter("SubDomain", subDomain);
}

std::string SetDNSSLBStatusRequest::getLang()const
{
	return lang_;
}

void SetDNSSLBStatusRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

bool SetDNSSLBStatusRequest::getOpen()const
{
	return open_;
}

void SetDNSSLBStatusRequest::setOpen(bool open)
{
	open_ = open;
	setParameter("Open", open ? "true" : "false");
}

