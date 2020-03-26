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

#include <alibabacloud/domain/model/SaveSingleTaskForQueryingTransferAuthorizationCodeRequest.h>

using AlibabaCloud::Domain::Model::SaveSingleTaskForQueryingTransferAuthorizationCodeRequest;

SaveSingleTaskForQueryingTransferAuthorizationCodeRequest::SaveSingleTaskForQueryingTransferAuthorizationCodeRequest() :
	RpcServiceRequest("domain", "2018-01-29", "SaveSingleTaskForQueryingTransferAuthorizationCode")
{
	setMethod(HttpRequest::Method::Post);
}

SaveSingleTaskForQueryingTransferAuthorizationCodeRequest::~SaveSingleTaskForQueryingTransferAuthorizationCodeRequest()
{}

std::string SaveSingleTaskForQueryingTransferAuthorizationCodeRequest::getDomainName()const
{
	return domainName_;
}

void SaveSingleTaskForQueryingTransferAuthorizationCodeRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string SaveSingleTaskForQueryingTransferAuthorizationCodeRequest::getUserClientIp()const
{
	return userClientIp_;
}

void SaveSingleTaskForQueryingTransferAuthorizationCodeRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::string SaveSingleTaskForQueryingTransferAuthorizationCodeRequest::getLang()const
{
	return lang_;
}

void SaveSingleTaskForQueryingTransferAuthorizationCodeRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

