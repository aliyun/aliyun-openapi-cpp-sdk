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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTagNode = value["Tag"]["TagItem"];
	for (auto valueTagTagItem : allTagNode)
	{
		TagItem tagObject;
		if(!valueTagTagItem["Key"].isNull())
			tagObject.key = valueTagTagItem["Key"].asString();
		if(!valueTagTagItem["Value"].isNull())
			tagObject.value = valueTagTagItem["Value"].asString();
		tag_.push_back(tagObject);
	}
	auto allDnsList = value["DnsList"]["Dns"];
	for (const auto &item : allDnsList)
		dnsList_.push_back(item.asString());
	if(!value["Email"].isNull())
		email_ = value["Email"].asString();
	if(!value["RegistrationDate"].isNull())
		registrationDate_ = value["RegistrationDate"].asString();
	if(!value["RegistrationDateLong"].isNull())
		registrationDateLong_ = std::stol(value["RegistrationDateLong"].asString());
	if(!value["RealNameStatus"].isNull())
		realNameStatus_ = value["RealNameStatus"].asString();
	if(!value["Premium"].isNull())
		premium_ = value["Premium"].asString() == "true";
	if(!value["DomainNameVerificationStatus"].isNull())
		domainNameVerificationStatus_ = value["DomainNameVerificationStatus"].asString();
	if(!value["ExpirationDateLong"].isNull())
		expirationDateLong_ = std::stol(value["ExpirationDateLong"].asString());
	if(!value["TransferOutStatus"].isNull())
		transferOutStatus_ = value["TransferOutStatus"].asString();
	if(!value["ZhRegistrantOrganization"].isNull())
		zhRegistrantOrganization_ = value["ZhRegistrantOrganization"].asString();
	if(!value["EmailVerificationClientHold"].isNull())
		emailVerificationClientHold_ = value["EmailVerificationClientHold"].asString() == "true";
	if(!value["EmailVerificationStatus"].isNull())
		emailVerificationStatus_ = std::stoi(value["EmailVerificationStatus"].asString());
	if(!value["RegistrantOrganization"].isNull())
		registrantOrganization_ = value["RegistrantOrganization"].asString();
	if(!value["TransferProhibitionLock"].isNull())
		transferProhibitionLock_ = value["TransferProhibitionLock"].asString();
	if(!value["DomainNameProxyService"].isNull())
		domainNameProxyService_ = value["DomainNameProxyService"].asString() == "true";
	if(!value["RegistrantType"].isNull())
		registrantType_ = value["RegistrantType"].asString();
	if(!value["RegistrantUpdatingStatus"].isNull())
		registrantUpdatingStatus_ = value["RegistrantUpdatingStatus"].asString();
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["ZhRegistrantName"].isNull())
		zhRegistrantName_ = value["ZhRegistrantName"].asString();
	if(!value["ExpirationDate"].isNull())
		expirationDate_ = value["ExpirationDate"].asString();
	if(!value["RegistrantName"].isNull())
		registrantName_ = value["RegistrantName"].asString();
	if(!value["UserId"].isNull())
		userId_ = value["UserId"].asString();
	if(!value["UpdateProhibitionLock"].isNull())
		updateProhibitionLock_ = value["UpdateProhibitionLock"].asString();
	if(!value["DomainGroupId"].isNull())
		domainGroupId_ = std::stol(value["DomainGroupId"].asString());
	if(!value["Remark"].isNull())
		remark_ = value["Remark"].asString();
	if(!value["DomainGroupName"].isNull())
		domainGroupName_ = value["DomainGroupName"].asString();
	if(!value["ExpirationDateStatus"].isNull())
		expirationDateStatus_ = value["ExpirationDateStatus"].asString();
	if(!value["ExpirationCurrDateDiff"].isNull())
		expirationCurrDateDiff_ = std::stoi(value["ExpirationCurrDateDiff"].asString());
	if(!value["DomainType"].isNull())
		domainType_ = value["DomainType"].asString();
	if(!value["DomainStatus"].isNull())
		domainStatus_ = value["DomainStatus"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();

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

std::string QueryDomainByInstanceIdResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::string QueryDomainByInstanceIdResult::getRealNameStatus()const
{
	return realNameStatus_;
}

bool QueryDomainByInstanceIdResult::getPremium()const
{
	return premium_;
}

std::string QueryDomainByInstanceIdResult::getDomainNameVerificationStatus()const
{
	return domainNameVerificationStatus_;
}

std::string QueryDomainByInstanceIdResult::getRemark()const
{
	return remark_;
}

long QueryDomainByInstanceIdResult::getExpirationDateLong()const
{
	return expirationDateLong_;
}

std::vector<std::string> QueryDomainByInstanceIdResult::getDnsList()const
{
	return dnsList_;
}

std::string QueryDomainByInstanceIdResult::getDomainType()const
{
	return domainType_;
}

std::string QueryDomainByInstanceIdResult::getTransferOutStatus()const
{
	return transferOutStatus_;
}

std::string QueryDomainByInstanceIdResult::getDomainGroupName()const
{
	return domainGroupName_;
}

std::string QueryDomainByInstanceIdResult::getZhRegistrantOrganization()const
{
	return zhRegistrantOrganization_;
}

bool QueryDomainByInstanceIdResult::getEmailVerificationClientHold()const
{
	return emailVerificationClientHold_;
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

std::string QueryDomainByInstanceIdResult::getRegistrantType()const
{
	return registrantType_;
}

std::string QueryDomainByInstanceIdResult::getRegistrantUpdatingStatus()const
{
	return registrantUpdatingStatus_;
}

int QueryDomainByInstanceIdResult::getExpirationCurrDateDiff()const
{
	return expirationCurrDateDiff_;
}

std::string QueryDomainByInstanceIdResult::getDomainName()const
{
	return domainName_;
}

std::string QueryDomainByInstanceIdResult::getInstanceId()const
{
	return instanceId_;
}

long QueryDomainByInstanceIdResult::getDomainGroupId()const
{
	return domainGroupId_;
}

std::string QueryDomainByInstanceIdResult::getZhRegistrantName()const
{
	return zhRegistrantName_;
}

std::string QueryDomainByInstanceIdResult::getExpirationDateStatus()const
{
	return expirationDateStatus_;
}

std::string QueryDomainByInstanceIdResult::getExpirationDate()const
{
	return expirationDate_;
}

std::string QueryDomainByInstanceIdResult::getRegistrantName()const
{
	return registrantName_;
}

std::string QueryDomainByInstanceIdResult::getUserId()const
{
	return userId_;
}

std::vector<QueryDomainByInstanceIdResult::TagItem> QueryDomainByInstanceIdResult::getTag()const
{
	return tag_;
}

std::string QueryDomainByInstanceIdResult::getUpdateProhibitionLock()const
{
	return updateProhibitionLock_;
}

std::string QueryDomainByInstanceIdResult::getDomainStatus()const
{
	return domainStatus_;
}

