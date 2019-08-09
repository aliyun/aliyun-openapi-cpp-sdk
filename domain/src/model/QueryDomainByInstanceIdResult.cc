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

#include <alibabacloud/domain/model/QueryDomainByInstanceIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

QueryDomainByInstanceIdResult::QueryDomainByInstanceIdResult() :
	ServiceResult()
{}

QueryDomainByInstanceIdResult::QueryDomainByInstanceIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDomainByInstanceIdResult::~QueryDomainByInstanceIdResult()
{}

void QueryDomainByInstanceIdResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allDnsList = value["DnsList"]["Dns"];
	for (const auto &item : allDnsList)
		dnsList_.push_back(item.asString());
	if(!value["UserId"].isNull())
		userId_ = value["UserId"].asString();
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["RegistrationDate"].isNull())
		registrationDate_ = value["RegistrationDate"].asString();
	if(!value["ExpirationDate"].isNull())
		expirationDate_ = value["ExpirationDate"].asString();
	if(!value["RegistrantOrganization"].isNull())
		registrantOrganization_ = value["RegistrantOrganization"].asString();
	if(!value["RegistrantName"].isNull())
		registrantName_ = value["RegistrantName"].asString();
	if(!value["Email"].isNull())
		email_ = value["Email"].asString();
	if(!value["UpdateProhibitionLock"].isNull())
		updateProhibitionLock_ = value["UpdateProhibitionLock"].asString();
	if(!value["TransferProhibitionLock"].isNull())
		transferProhibitionLock_ = value["TransferProhibitionLock"].asString();
	if(!value["DomainNameProxyService"].isNull())
		domainNameProxyService_ = value["DomainNameProxyService"].asString() == "true";
	if(!value["Premium"].isNull())
		premium_ = value["Premium"].asString() == "true";
	if(!value["EmailVerificationStatus"].isNull())
		emailVerificationStatus_ = std::stoi(value["EmailVerificationStatus"].asString());
	if(!value["EmailVerificationClientHold"].isNull())
		emailVerificationClientHold_ = value["EmailVerificationClientHold"].asString() == "true";
	if(!value["RealNameStatus"].isNull())
		realNameStatus_ = value["RealNameStatus"].asString();
	if(!value["RegistrantUpdatingStatus"].isNull())
		registrantUpdatingStatus_ = value["RegistrantUpdatingStatus"].asString();
	if(!value["TransferOutStatus"].isNull())
		transferOutStatus_ = value["TransferOutStatus"].asString();
	if(!value["RegistrantType"].isNull())
		registrantType_ = value["RegistrantType"].asString();
	if(!value["DomainNameVerificationStatus"].isNull())
		domainNameVerificationStatus_ = value["DomainNameVerificationStatus"].asString();
	if(!value["ZhRegistrantOrganization"].isNull())
		zhRegistrantOrganization_ = value["ZhRegistrantOrganization"].asString();
	if(!value["ZhRegistrantName"].isNull())
		zhRegistrantName_ = value["ZhRegistrantName"].asString();
	if(!value["RegistrationDateLong"].isNull())
		registrationDateLong_ = std::stol(value["RegistrationDateLong"].asString());
	if(!value["ExpirationDateLong"].isNull())
		expirationDateLong_ = std::stol(value["ExpirationDateLong"].asString());

}

std::string QueryDomainByInstanceIdResult::getRegistrantType()const
{
	return registrantType_;
}

std::string QueryDomainByInstanceIdResult::getRegistrantUpdatingStatus()const
{
	return registrantUpdatingStatus_;
}

std::string QueryDomainByInstanceIdResult::getEmail()const
{
	return email_;
}

std::string QueryDomainByInstanceIdResult::getRegistrationDate()const
{
	return registrationDate_;
}

long QueryDomainByInstanceIdResult::getRegistrationDateLong()const
{
	return registrationDateLong_;
}

std::string QueryDomainByInstanceIdResult::getDomainName()const
{
	return domainName_;
}

std::string QueryDomainByInstanceIdResult::getInstanceId()const
{
	return instanceId_;
}

std::string QueryDomainByInstanceIdResult::getRealNameStatus()const
{
	return realNameStatus_;
}

std::string QueryDomainByInstanceIdResult::getZhRegistrantName()const
{
	return zhRegistrantName_;
}

bool QueryDomainByInstanceIdResult::getPremium()const
{
	return premium_;
}

std::string QueryDomainByInstanceIdResult::getDomainNameVerificationStatus()const
{
	return domainNameVerificationStatus_;
}

long QueryDomainByInstanceIdResult::getExpirationDateLong()const
{
	return expirationDateLong_;
}

std::vector<std::string> QueryDomainByInstanceIdResult::getDnsList()const
{
	return dnsList_;
}

std::string QueryDomainByInstanceIdResult::getExpirationDate()const
{
	return expirationDate_;
}

std::string QueryDomainByInstanceIdResult::getRegistrantName()const
{
	return registrantName_;
}

std::string QueryDomainByInstanceIdResult::getTransferOutStatus()const
{
	return transferOutStatus_;
}

std::string QueryDomainByInstanceIdResult::getUserId()const
{
	return userId_;
}

std::string QueryDomainByInstanceIdResult::getZhRegistrantOrganization()const
{
	return zhRegistrantOrganization_;
}

bool QueryDomainByInstanceIdResult::getEmailVerificationClientHold()const
{
	return emailVerificationClientHold_;
}

std::string QueryDomainByInstanceIdResult::getUpdateProhibitionLock()const
{
	return updateProhibitionLock_;
}

int QueryDomainByInstanceIdResult::getEmailVerificationStatus()const
{
	return emailVerificationStatus_;
}

std::string QueryDomainByInstanceIdResult::getRegistrantOrganization()const
{
	return registrantOrganization_;
}

std::string QueryDomainByInstanceIdResult::getTransferProhibitionLock()const
{
	return transferProhibitionLock_;
}

bool QueryDomainByInstanceIdResult::getDomainNameProxyService()const
{
	return domainNameProxyService_;
}

