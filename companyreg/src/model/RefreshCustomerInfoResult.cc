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

#include <alibabacloud/companyreg/model/RefreshCustomerInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

RefreshCustomerInfoResult::RefreshCustomerInfoResult() :
	ServiceResult()
{}

RefreshCustomerInfoResult::RefreshCustomerInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

RefreshCustomerInfoResult::~RefreshCustomerInfoResult()
{}

void RefreshCustomerInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["AcctgSystem"].isNull())
		acctgSystem_ = value["AcctgSystem"].asString();
	if(!value["BizScope"].isNull())
		bizScope_ = value["BizScope"].asString();
	if(!value["CompanyType"].isNull())
		companyType_ = value["CompanyType"].asString();
	if(!value["CorpAddress"].isNull())
		corpAddress_ = value["CorpAddress"].asString();
	if(!value["EstablishmentDate"].isNull())
		establishmentDate_ = value["EstablishmentDate"].asString();
	if(!value["ExternalUniqueId"].isNull())
		externalUniqueId_ = value["ExternalUniqueId"].asString();
	if(!value["IncomeDeclarationPsw"].isNull())
		incomeDeclarationPsw_ = value["IncomeDeclarationPsw"].asString();
	if(!value["LegalRepresentative"].isNull())
		legalRepresentative_ = value["LegalRepresentative"].asString();
	if(!value["OrgName"].isNull())
		orgName_ = value["OrgName"].asString();
	if(!value["RegisteredCaptial"].isNull())
		registeredCaptial_ = value["RegisteredCaptial"].asString();
	if(!value["TaxArea"].isNull())
		taxArea_ = value["TaxArea"].asString();
	if(!value["TaxNo"].isNull())
		taxNo_ = value["TaxNo"].asString();
	if(!value["TaxPreparerName"].isNull())
		taxPreparerName_ = value["TaxPreparerName"].asString();
	if(!value["TaxPreparerPsw"].isNull())
		taxPreparerPsw_ = value["TaxPreparerPsw"].asString();
	if(!value["TaxTypes"].isNull())
		taxTypes_ = value["TaxTypes"].asString();
	if(!value["TaxiationAgentSecret"].isNull())
		taxiationAgentSecret_ = value["TaxiationAgentSecret"].asString();
	if(!value["TaxpayerType"].isNull())
		taxpayerType_ = value["TaxpayerType"].asString();
	if(!value["TenantId"].isNull())
		tenantId_ = std::stol(value["TenantId"].asString());

}

std::string RefreshCustomerInfoResult::getEstablishmentDate()const
{
	return establishmentDate_;
}

std::string RefreshCustomerInfoResult::getTaxNo()const
{
	return taxNo_;
}

std::string RefreshCustomerInfoResult::getTaxiationAgentSecret()const
{
	return taxiationAgentSecret_;
}

std::string RefreshCustomerInfoResult::getBizScope()const
{
	return bizScope_;
}

std::string RefreshCustomerInfoResult::getCorpAddress()const
{
	return corpAddress_;
}

std::string RefreshCustomerInfoResult::getOrgName()const
{
	return orgName_;
}

std::string RefreshCustomerInfoResult::getCompanyType()const
{
	return companyType_;
}

std::string RefreshCustomerInfoResult::getExternalUniqueId()const
{
	return externalUniqueId_;
}

std::string RefreshCustomerInfoResult::getRegisteredCaptial()const
{
	return registeredCaptial_;
}

std::string RefreshCustomerInfoResult::getLegalRepresentative()const
{
	return legalRepresentative_;
}

std::string RefreshCustomerInfoResult::getIncomeDeclarationPsw()const
{
	return incomeDeclarationPsw_;
}

long RefreshCustomerInfoResult::getTenantId()const
{
	return tenantId_;
}

std::string RefreshCustomerInfoResult::getTaxArea()const
{
	return taxArea_;
}

std::string RefreshCustomerInfoResult::getTaxTypes()const
{
	return taxTypes_;
}

std::string RefreshCustomerInfoResult::getTaxPreparerPsw()const
{
	return taxPreparerPsw_;
}

std::string RefreshCustomerInfoResult::getTaxPreparerName()const
{
	return taxPreparerName_;
}

std::string RefreshCustomerInfoResult::getAcctgSystem()const
{
	return acctgSystem_;
}

std::string RefreshCustomerInfoResult::getTaxpayerType()const
{
	return taxpayerType_;
}

