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

#include <alibabacloud/domain/model/SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest.h>

using AlibabaCloud::Domain::Model::SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest;

SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest::SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest() :
	RpcServiceRequest("domain", "2018-01-29", "SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredential")
{
	setMethod(HttpRequest::Method::Post);
}

SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest::~SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest()
{}

std::string SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest::getIdentityCredentialType()const
{
	return identityCredentialType_;
}

void SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest::setIdentityCredentialType(const std::string& identityCredentialType)
{
	identityCredentialType_ = identityCredentialType;
	setParameter("IdentityCredentialType", identityCredentialType);
}

std::string SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest::getIdentityCredential()const
{
	return identityCredential_;
}

void SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest::setIdentityCredential(const std::string& identityCredential)
{
	identityCredential_ = identityCredential;
	setBodyParameter("IdentityCredential", identityCredential);
}

std::vector<std::string> SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest::getDomainName()const
{
	return domainName_;
}

void SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest::setDomainName(const std::vector<std::string>& domainName)
{
	domainName_ = domainName;
	for(int dep1 = 0; dep1!= domainName.size(); dep1++) {
		setParameter("DomainName."+ std::to_string(dep1), domainName.at(dep1));
	}
}

std::string SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest::getUserClientIp()const
{
	return userClientIp_;
}

void SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::string SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest::getLang()const
{
	return lang_;
}

void SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest::getIdentityCredentialNo()const
{
	return identityCredentialNo_;
}

void SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest::setIdentityCredentialNo(const std::string& identityCredentialNo)
{
	identityCredentialNo_ = identityCredentialNo;
	setParameter("IdentityCredentialNo", identityCredentialNo);
}

