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

#include <alibabacloud/domain/model/QueryDomainByDomainNameResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Domain;
using namespace AlibabaCloud::Domain::Model;

QueryDomainByDomainNameResult::QueryDomainByDomainNameResult() :
	ServiceResult()
{}

QueryDomainByDomainNameResult::QueryDomainByDomainNameResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryDomainByDomainNameResult::~QueryDomainByDomainNameResult()
{}

void QueryDomainByDomainNameResult::parse(const std::string &payload)
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
		if(!valueTagTagItem["Vaue"].isNull())
			tagObject.vaue = valueTagTagItem["Vaue"].asString();
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

std::string QueryDomainByDomainNameResult::getEmail()const
{
	return email_;
}

std::string QueryDomainByDomainNameResult::getRegistrationDate()const
{
	return registrationDate_;
}

long QueryDomainByDomainNameResult::getRegistrationDateLong()const
{
	return registrationDateLong_;
}

std::string QueryDomainByDomainNameResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::string QueryDomainByDomainNameResult::getRealNameStatus()const
{
	return realNameStatus_;
}

bool QueryDomainByDomainNameResult::getPremium()const
{
	return premium_;
}

std::string QueryDomainByDomainNameResult::getDomainNameVerificationStatus()const
{
	return domainNameVerificationStatus_;
}

std::string QueryDomainByDomainNameResult::getRemark()const
{
	return remark_;
}

long QueryDomainByDomainNameResult::getExpirationDateLong()const
{
	return expirationDateLong_;
}

std::vector<std::string> QueryDomainByDomainNameResult::getDnsList()const
{
	return dnsList_;
}

std::string QueryDomainByDomainNameResult::getDomainType()const
{
	return domainType_;
}

std::string QueryDomainByDomainNameResult::getTransferOutStatus()const
{
	return transferOutStatus_;
}

std::string QueryDomainByDomainNameResult::getDomainGroupName()const
{
	return domainGroupName_;
}

std::string QueryDomainByDomainNameResult::getZhRegistrantOrganization()const
{
	return zhRegistrantOrganization_;
}

bool QueryDomainByDomainNameResult::getEmailVerificationClientHold()const
{
	return emailVerificationClientHold_;
}

int QueryDomainByDomainNameResult::getEmailVerificationStatus()const
{
	return emailVerificationStatus_;
}

std::string QueryDomainByDomainNameResult::getRegistrantOrganization()const
{
	return registrantOrganization_;
}

std::string QueryDomainByDomainNameResult::getTransferProhibitionLock()const
{
	return transferProhibitionLock_;
}

bool QueryDomainByDomainNameResult::getDomainNameProxyService()const
{
	return domainNameProxyService_;
}

std::string QueryDomainByDomainNameResult::getRegistrantType()const
{
	return registrantType_;
}

std::string QueryDomainByDomainNameResult::getRegistrantUpdatingStatus()const
{
	return registrantUpdatingStatus_;
}

int QueryDomainByDomainNameResult::getExpirationCurrDateDiff()const
{
	return expirationCurrDateDiff_;
}

std::string QueryDomainByDomainNameResult::getDomainName()const
{
	return domainName_;
}

std::string QueryDomainByDomainNameResult::getInstanceId()const
{
	return instanceId_;
}

long QueryDomainByDomainNameResult::getDomainGroupId()const
{
	return domainGroupId_;
}

std::string QueryDomainByDomainNameResult::getZhRegistrantName()const
{
	return zhRegistrantName_;
}

std::string QueryDomainByDomainNameResult::getExpirationDateStatus()const
{
	return expirationDateStatus_;
}

std::string QueryDomainByDomainNameResult::getExpirationDate()const
{
	return expirationDate_;
}

std::string QueryDomainByDomainNameResult::getRegistrantName()const
{
	return registrantName_;
}

std::string QueryDomainByDomainNameResult::getUserId()const
{
	return userId_;
}

std::vector<QueryDomainByDomainNameResult::TagItem> QueryDomainByDomainNameResult::getTag()const
{
	return tag_;
}

std::string QueryDomainByDomainNameResult::getUpdateProhibitionLock()const
{
	return updateProhibitionLock_;
}

std::string QueryDomainByDomainNameResult::getDomainStatus()const
{
	return domainStatus_;
}

