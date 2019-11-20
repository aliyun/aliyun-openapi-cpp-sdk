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

#include <alibabacloud/domain/model/SaveBatchTaskForUpdateProhibitionLockRequest.h>

using AlibabaCloud::Domain::Model::SaveBatchTaskForUpdateProhibitionLockRequest;

SaveBatchTaskForUpdateProhibitionLockRequest::SaveBatchTaskForUpdateProhibitionLockRequest() :
	RpcServiceRequest("domain", "2018-01-29", "SaveBatchTaskForUpdateProhibitionLock")
{
	setMethod(HttpRequest::Method::Post);
}

SaveBatchTaskForUpdateProhibitionLockRequest::~SaveBatchTaskForUpdateProhibitionLockRequest()
{}

std::vector<std::string> SaveBatchTaskForUpdateProhibitionLockRequest::getDomainName()const
{
	return domainName_;
}

void SaveBatchTaskForUpdateProhibitionLockRequest::setDomainName(const std::vector<std::string>& domainName)
{
	domainName_ = domainName;
	for(int dep1 = 0; dep1!= domainName.size(); dep1++)
		setCoreParameter("DomainName."+ std::to_string(dep1), domainName.at(dep1));
}

std::string SaveBatchTaskForUpdateProhibitionLockRequest::getUserClientIp()const
{
	return userClientIp_;
}

void SaveBatchTaskForUpdateProhibitionLockRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string SaveBatchTaskForUpdateProhibitionLockRequest::getLang()const
{
	return lang_;
}

void SaveBatchTaskForUpdateProhibitionLockRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

bool SaveBatchTaskForUpdateProhibitionLockRequest::getStatus()const
{
	return status_;
}

void SaveBatchTaskForUpdateProhibitionLockRequest::setStatus(bool status)
{
	status_ = status;
	setCoreParameter("Status", status ? "true" : "false");
}

