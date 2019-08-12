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

#include <alibabacloud/domain/model/RegistrantProfileRealNameVerificationRequest.h>

using AlibabaCloud::Domain::Model::RegistrantProfileRealNameVerificationRequest;

RegistrantProfileRealNameVerificationRequest::RegistrantProfileRealNameVerificationRequest() :
	RpcServiceRequest("domain", "2018-01-29", "RegistrantProfileRealNameVerification")
{}

RegistrantProfileRealNameVerificationRequest::~RegistrantProfileRealNameVerificationRequest()
{}

std::string RegistrantProfileRealNameVerificationRequest::getIdentityCredentialType()const
{
	return identityCredentialType_;
}

void RegistrantProfileRealNameVerificationRequest::setIdentityCredentialType(const std::string& identityCredentialType)
{
	identityCredentialType_ = identityCredentialType;
	setCoreParameter("IdentityCredentialType", std::to_string(identityCredentialType));
}

std::string RegistrantProfileRealNameVerificationRequest::getUserClientIp()const
{
	return userClientIp_;
}

void RegistrantProfileRealNameVerificationRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", std::to_string(userClientIp));
}

long RegistrantProfileRealNameVerificationRequest::getRegistrantProfileID()const
{
	return registrantProfileID_;
}

void RegistrantProfileRealNameVerificationRequest::setRegistrantProfileID(long registrantProfileID)
{
	registrantProfileID_ = registrantProfileID;
	setCoreParameter("RegistrantProfileID", registrantProfileID);
}

std::string RegistrantProfileRealNameVerificationRequest::getIdentityCredential()const
{
	return identityCredential_;
}

void RegistrantProfileRealNameVerificationRequest::setIdentityCredential(const std::string& identityCredential)
{
	identityCredential_ = identityCredential;
	setCoreParameter("IdentityCredential", std::to_string(identityCredential));
}

std::string RegistrantProfileRealNameVerificationRequest::getLang()const
{
	return lang_;
}

void RegistrantProfileRealNameVerificationRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

std::string RegistrantProfileRealNameVerificationRequest::getIdentityCredentialNo()const
{
	return identityCredentialNo_;
}

void RegistrantProfileRealNameVerificationRequest::setIdentityCredentialNo(const std::string& identityCredentialNo)
{
	identityCredentialNo_ = identityCredentialNo;
	setCoreParameter("IdentityCredentialNo", std::to_string(identityCredentialNo));
}

