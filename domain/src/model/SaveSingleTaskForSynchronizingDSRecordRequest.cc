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

#include <alibabacloud/domain/model/SaveSingleTaskForSynchronizingDSRecordRequest.h>

using AlibabaCloud::Domain::Model::SaveSingleTaskForSynchronizingDSRecordRequest;

SaveSingleTaskForSynchronizingDSRecordRequest::SaveSingleTaskForSynchronizingDSRecordRequest() :
	RpcServiceRequest("domain", "2018-01-29", "SaveSingleTaskForSynchronizingDSRecord")
{}

SaveSingleTaskForSynchronizingDSRecordRequest::~SaveSingleTaskForSynchronizingDSRecordRequest()
{}

std::string SaveSingleTaskForSynchronizingDSRecordRequest::getDomainName()const
{
	return domainName_;
}

void SaveSingleTaskForSynchronizingDSRecordRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

std::string SaveSingleTaskForSynchronizingDSRecordRequest::getUserClientIp()const
{
	return userClientIp_;
}

void SaveSingleTaskForSynchronizingDSRecordRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", std::to_string(userClientIp));
}

std::string SaveSingleTaskForSynchronizingDSRecordRequest::getLang()const
{
	return lang_;
}

void SaveSingleTaskForSynchronizingDSRecordRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

