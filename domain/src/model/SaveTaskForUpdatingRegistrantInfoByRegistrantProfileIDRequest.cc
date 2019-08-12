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

#include <alibabacloud/domain/model/SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest.h>

using AlibabaCloud::Domain::Model::SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest;

SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest::SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest() :
	RpcServiceRequest("domain", "2018-01-29", "SaveTaskForUpdatingRegistrantInfoByRegistrantProfileID")
{}

SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest::~SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest()
{}

std::string SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest::getUserClientIp()const
{
	return userClientIp_;
}

void SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", std::to_string(userClientIp));
}

long SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest::getRegistrantProfileId()const
{
	return registrantProfileId_;
}

void SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest::setRegistrantProfileId(long registrantProfileId)
{
	registrantProfileId_ = registrantProfileId;
	setCoreParameter("RegistrantProfileId", registrantProfileId);
}

std::vector<std::string> SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest::getDomainName()const
{
	return domainName_;
}

void SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest::setDomainName(const std::vector<std::string>& domainName)
{
	domainName_ = domainName;
	for(int i = 0; i!= domainName.size(); i++)
		setCoreParameter("DomainName."+ std::to_string(i), std::to_string(domainName.at(i)));
}

bool SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest::getTransferOutProhibited()const
{
	return transferOutProhibited_;
}

void SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest::setTransferOutProhibited(bool transferOutProhibited)
{
	transferOutProhibited_ = transferOutProhibited;
	setCoreParameter("TransferOutProhibited", transferOutProhibited ? "true" : "false");
}

std::string SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest::getLang()const
{
	return lang_;
}

void SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

