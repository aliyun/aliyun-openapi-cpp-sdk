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

#include <alibabacloud/companyreg/model/GetTaxInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

GetTaxInfoResult::GetTaxInfoResult() :
	ServiceResult()
{}

GetTaxInfoResult::GetTaxInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTaxInfoResult::~GetTaxInfoResult()
{}

void GetTaxInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["TaxPreparerName"].isNull())
		taxPreparerName_ = value["TaxPreparerName"].asString();
	if(!value["TaxiationAgentSecret"].isNull())
		taxiationAgentSecret_ = value["TaxiationAgentSecret"].asString();
	if(!value["MyTaxInfo"].isNull())
		myTaxInfo_ = value["MyTaxInfo"].asString();
	if(!value["TaxArea"].isNull())
		taxArea_ = value["TaxArea"].asString();
	if(!value["AcctgSystem"].isNull())
		acctgSystem_ = value["AcctgSystem"].asString();
	if(!value["ExternalUniqueId"].isNull())
		externalUniqueId_ = value["ExternalUniqueId"].asString();
	if(!value["TaxTypes"].isNull())
		taxTypes_ = value["TaxTypes"].asString();
	if(!value["IncomeDeclarationPsw"].isNull())
		incomeDeclarationPsw_ = value["IncomeDeclarationPsw"].asString();
	if(!value["IsNeedSmsCode"].isNull())
		isNeedSmsCode_ = value["IsNeedSmsCode"].asString();
	if(!value["TaxNo"].isNull())
		taxNo_ = value["TaxNo"].asString();
	if(!value["TaxpayerType"].isNull())
		taxpayerType_ = value["TaxpayerType"].asString();
	if(!value["Name"].isNull())
		name_ = value["Name"].asString();
	if(!value["TaxPreparerPsw"].isNull())
		taxPreparerPsw_ = value["TaxPreparerPsw"].asString();
	if(!value["TaxAreaCode"].isNull())
		taxAreaCode_ = value["TaxAreaCode"].asString();
	if(!value["TenantId"].isNull())
		tenantId_ = std::stol(value["TenantId"].asString());

}

std::string GetTaxInfoResult::getTaxNo()const
{
	return taxNo_;
}

std::string GetTaxInfoResult::getIsNeedSmsCode()const
{
	return isNeedSmsCode_;
}

std::string GetTaxInfoResult::getTaxiationAgentSecret()const
{
	return taxiationAgentSecret_;
}

std::string GetTaxInfoResult::getExternalUniqueId()const
{
	return externalUniqueId_;
}

std::string GetTaxInfoResult::getName()const
{
	return name_;
}

std::string GetTaxInfoResult::getTaxAreaCode()const
{
	return taxAreaCode_;
}

std::string GetTaxInfoResult::getIncomeDeclarationPsw()const
{
	return incomeDeclarationPsw_;
}

long GetTaxInfoResult::getTenantId()const
{
	return tenantId_;
}

std::string GetTaxInfoResult::getTaxArea()const
{
	return taxArea_;
}

std::string GetTaxInfoResult::getTaxTypes()const
{
	return taxTypes_;
}

std::string GetTaxInfoResult::getTaxPreparerPsw()const
{
	return taxPreparerPsw_;
}

std::string GetTaxInfoResult::getTaxPreparerName()const
{
	return taxPreparerName_;
}

std::string GetTaxInfoResult::getAcctgSystem()const
{
	return acctgSystem_;
}

std::string GetTaxInfoResult::getMyTaxInfo()const
{
	return myTaxInfo_;
}

std::string GetTaxInfoResult::getTaxpayerType()const
{
	return taxpayerType_;
}

