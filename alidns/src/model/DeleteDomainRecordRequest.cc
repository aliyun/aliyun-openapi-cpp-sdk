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

#include <alibabacloud/alidns/model/DeleteDomainRecordRequest.h>

using AlibabaCloud::Alidns::Model::DeleteDomainRecordRequest;

DeleteDomainRecordRequest::DeleteDomainRecordRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "DeleteDomainRecord")
{}

DeleteDomainRecordRequest::~DeleteDomainRecordRequest()
{}

std::string DeleteDomainRecordRequest::getRecordId()const
{
	return recordId_;
}

void DeleteDomainRecordRequest::setRecordId(const std::string& recordId)
{
	recordId_ = recordId;
	setCoreParameter("RecordId", recordId);
}

std::string DeleteDomainRecordRequest::getUserClientIp()const
{
	return userClientIp_;
}

void DeleteDomainRecordRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string DeleteDomainRecordRequest::getLang()const
{
	return lang_;
}

void DeleteDomainRecordRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string DeleteDomainRecordRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteDomainRecordRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

