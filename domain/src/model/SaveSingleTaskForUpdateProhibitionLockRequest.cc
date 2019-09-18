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

#include <alibabacloud/domain/model/SaveSingleTaskForUpdateProhibitionLockRequest.h>

using AlibabaCloud::Domain::Model::SaveSingleTaskForUpdateProhibitionLockRequest;

SaveSingleTaskForUpdateProhibitionLockRequest::SaveSingleTaskForUpdateProhibitionLockRequest() :
	RpcServiceRequest("domain", "2018-01-29", "SaveSingleTaskForUpdateProhibitionLock")
{}

SaveSingleTaskForUpdateProhibitionLockRequest::~SaveSingleTaskForUpdateProhibitionLockRequest()
{}

std::string SaveSingleTaskForUpdateProhibitionLockRequest::getDomainName()const
{
	return domainName_;
}

void SaveSingleTaskForUpdateProhibitionLockRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string SaveSingleTaskForUpdateProhibitionLockRequest::getUserClientIp()const
{
	return userClientIp_;
}

void SaveSingleTaskForUpdateProhibitionLockRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string SaveSingleTaskForUpdateProhibitionLockRequest::getLang()const
{
	return lang_;
}

void SaveSingleTaskForUpdateProhibitionLockRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

bool SaveSingleTaskForUpdateProhibitionLockRequest::getStatus()const
{
	return status_;
}

void SaveSingleTaskForUpdateProhibitionLockRequest::setStatus(bool status)
{
	status_ = status;
	setCoreParameter("Status", status ? "true" : "false");
}

