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

#include <alibabacloud/alidns/model/DescribeDomainRecordInfoRequest.h>

using AlibabaCloud::Alidns::Model::DescribeDomainRecordInfoRequest;

DescribeDomainRecordInfoRequest::DescribeDomainRecordInfoRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "DescribeDomainRecordInfo")
{}

DescribeDomainRecordInfoRequest::~DescribeDomainRecordInfoRequest()
{}

std::string DescribeDomainRecordInfoRequest::getRecordId()const
{
	return recordId_;
}

void DescribeDomainRecordInfoRequest::setRecordId(const std::string& recordId)
{
	recordId_ = recordId;
	setCoreParameter("RecordId", recordId);
}

std::string DescribeDomainRecordInfoRequest::getUserClientIp()const
{
	return userClientIp_;
}

void DescribeDomainRecordInfoRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string DescribeDomainRecordInfoRequest::getLang()const
{
	return lang_;
}

void DescribeDomainRecordInfoRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string DescribeDomainRecordInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainRecordInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

