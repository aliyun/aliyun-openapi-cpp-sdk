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

#include <alibabacloud/alidns/model/DescribeSupportLinesRequest.h>

using AlibabaCloud::Alidns::Model::DescribeSupportLinesRequest;

DescribeSupportLinesRequest::DescribeSupportLinesRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "DescribeSupportLines")
{}

DescribeSupportLinesRequest::~DescribeSupportLinesRequest()
{}

std::string DescribeSupportLinesRequest::getUserClientIp()const
{
	return userClientIp_;
}

void DescribeSupportLinesRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string DescribeSupportLinesRequest::getDomainName()const
{
	return domainName_;
}

void DescribeSupportLinesRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeSupportLinesRequest::getLang()const
{
	return lang_;
}

void DescribeSupportLinesRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string DescribeSupportLinesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeSupportLinesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

