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

#include <alibabacloud/domain/model/SaveSingleTaskForDeletingDSRecordRequest.h>

using AlibabaCloud::Domain::Model::SaveSingleTaskForDeletingDSRecordRequest;

SaveSingleTaskForDeletingDSRecordRequest::SaveSingleTaskForDeletingDSRecordRequest() :
	RpcServiceRequest("domain", "2018-01-29", "SaveSingleTaskForDeletingDSRecord")
{}

SaveSingleTaskForDeletingDSRecordRequest::~SaveSingleTaskForDeletingDSRecordRequest()
{}

int SaveSingleTaskForDeletingDSRecordRequest::getKeyTag()const
{
	return keyTag_;
}

void SaveSingleTaskForDeletingDSRecordRequest::setKeyTag(int keyTag)
{
	keyTag_ = keyTag;
	setCoreParameter("KeyTag", std::to_string(keyTag));
}

std::string SaveSingleTaskForDeletingDSRecordRequest::getDomainName()const
{
	return domainName_;
}

void SaveSingleTaskForDeletingDSRecordRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string SaveSingleTaskForDeletingDSRecordRequest::getUserClientIp()const
{
	return userClientIp_;
}

void SaveSingleTaskForDeletingDSRecordRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string SaveSingleTaskForDeletingDSRecordRequest::getLang()const
{
	return lang_;
}

void SaveSingleTaskForDeletingDSRecordRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

