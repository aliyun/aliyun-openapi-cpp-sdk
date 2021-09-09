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

#include <alibabacloud/companyreg/model/GetIndustryCommerceInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

GetIndustryCommerceInfoResult::GetIndustryCommerceInfoResult() :
	ServiceResult()
{}

GetIndustryCommerceInfoResult::GetIndustryCommerceInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetIndustryCommerceInfoResult::~GetIndustryCommerceInfoResult()
{}

void GetIndustryCommerceInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["CompanyType"].isNull())
		companyType_ = value["CompanyType"].asString();
	if(!value["EstablishmentDate"].isNull())
		establishmentDate_ = value["EstablishmentDate"].asString();
	if(!value["BusinessStatus"].isNull())
		businessStatus_ = value["BusinessStatus"].asString();
	if(!value["TaxNo"].isNull())
		taxNo_ = value["TaxNo"].asString();
	if(!value["RegisteredCaptial"].isNull())
		registeredCaptial_ = value["RegisteredCaptial"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["LegalRepresentative"].isNull())
		legalRepresentative_ = value["LegalRepresentative"].asString();
	if(!value["OperatingPeriod"].isNull())
		operatingPeriod_ = value["OperatingPeriod"].asString();
	if(!value["BizScope"].isNull())
		bizScope_ = value["BizScope"].asString();
	if(!value["CorpAddress"].isNull())
		corpAddress_ = value["CorpAddress"].asString();

}

std::string GetIndustryCommerceInfoResult::getEstablishmentDate()const
{
	return establishmentDate_;
}

std::string GetIndustryCommerceInfoResult::getTaxNo()const
{
	return taxNo_;
}

std::string GetIndustryCommerceInfoResult::getOperatingPeriod()const
{
	return operatingPeriod_;
}

std::string GetIndustryCommerceInfoResult::getBizScope()const
{
	return bizScope_;
}

std::string GetIndustryCommerceInfoResult::getCorpAddress()const
{
	return corpAddress_;
}

std::string GetIndustryCommerceInfoResult::getCompanyType()const
{
	return companyType_;
}

std::string GetIndustryCommerceInfoResult::getRegisteredCaptial()const
{
	return registeredCaptial_;
}

std::string GetIndustryCommerceInfoResult::getBusinessStatus()const
{
	return businessStatus_;
}

std::string GetIndustryCommerceInfoResult::getLegalRepresentative()const
{
	return legalRepresentative_;
}

std::string GetIndustryCommerceInfoResult::getName()const
{
	return name_;
}

