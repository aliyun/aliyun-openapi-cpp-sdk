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

#include <alibabacloud/domain/model/SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest.h>

using AlibabaCloud::Domain::Model::SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest;

SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest() :
	RpcServiceRequest("domain", "2018-01-29", "SaveBatchTaskForUpdatingContactInfoByRegistrantProfileId")
{
	setMethod(HttpRequest::Method::Post);
}

SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::~SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest()
{}

std::string SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::getContactType()const
{
	return contactType_;
}

void SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::setContactType(const std::string& contactType)
{
	contactType_ = contactType;
	setCoreParameter("ContactType", contactType);
}

long SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::getRegistrantProfileId()const
{
	return registrantProfileId_;
}

void SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::setRegistrantProfileId(long registrantProfileId)
{
	registrantProfileId_ = registrantProfileId;
	setCoreParameter("RegistrantProfileId", std::to_string(registrantProfileId));
}

std::vector<std::string> SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::getDomainName()const
{
	return domainName_;
}

void SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::setDomainName(const std::vector<std::string>& domainName)
{
	domainName_ = domainName;
	for(int dep1 = 0; dep1!= domainName.size(); dep1++)
		setCoreParameter("DomainName."+ std::to_string(dep1), domainName.at(dep1));
}

bool SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::getTransferOutProhibited()const
{
	return transferOutProhibited_;
}

void SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::setTransferOutProhibited(bool transferOutProhibited)
{
	transferOutProhibited_ = transferOutProhibited;
	setCoreParameter("TransferOutProhibited", transferOutProhibited ? "true" : "false");
}

std::string SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::getUserClientIp()const
{
	return userClientIp_;
}

void SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::getLang()const
{
	return lang_;
}

void SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

