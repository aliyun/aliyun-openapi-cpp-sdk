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

#include <alibabacloud/companyreg/model/UpdateCustomerInfoRequest.h>

using AlibabaCloud::Companyreg::Model::UpdateCustomerInfoRequest;

UpdateCustomerInfoRequest::UpdateCustomerInfoRequest() :
	RpcServiceRequest("companyreg", "2020-10-22", "UpdateCustomerInfo")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateCustomerInfoRequest::~UpdateCustomerInfoRequest()
{}

std::string UpdateCustomerInfoRequest::getContactTelInfo()const
{
	return contactTelInfo_;
}

void UpdateCustomerInfoRequest::setContactTelInfo(const std::string& contactTelInfo)
{
	contactTelInfo_ = contactTelInfo;
	setParameter("ContactTelInfo", contactTelInfo);
}

std::string UpdateCustomerInfoRequest::getTaxPreparerName()const
{
	return taxPreparerName_;
}

void UpdateCustomerInfoRequest::setTaxPreparerName(const std::string& taxPreparerName)
{
	taxPreparerName_ = taxPreparerName;
	setParameter("TaxPreparerName", taxPreparerName);
}

std::string UpdateCustomerInfoRequest::getTaxAgentSecret()const
{
	return taxAgentSecret_;
}

void UpdateCustomerInfoRequest::setTaxAgentSecret(const std::string& taxAgentSecret)
{
	taxAgentSecret_ = taxAgentSecret;
	setParameter("TaxAgentSecret", taxAgentSecret);
}

std::string UpdateCustomerInfoRequest::getLegalRepresentative()const
{
	return legalRepresentative_;
}

void UpdateCustomerInfoRequest::setLegalRepresentative(const std::string& legalRepresentative)
{
	legalRepresentative_ = legalRepresentative;
	setParameter("LegalRepresentative", legalRepresentative);
}

std::string UpdateCustomerInfoRequest::getTaxPreparerPassword()const
{
	return taxPreparerPassword_;
}

void UpdateCustomerInfoRequest::setTaxPreparerPassword(const std::string& taxPreparerPassword)
{
	taxPreparerPassword_ = taxPreparerPassword;
	setParameter("TaxPreparerPassword", taxPreparerPassword);
}

std::string UpdateCustomerInfoRequest::getEstablishmentDate()const
{
	return establishmentDate_;
}

void UpdateCustomerInfoRequest::setEstablishmentDate(const std::string& establishmentDate)
{
	establishmentDate_ = establishmentDate;
	setParameter("EstablishmentDate", establishmentDate);
}

std::string UpdateCustomerInfoRequest::getContactName()const
{
	return contactName_;
}

void UpdateCustomerInfoRequest::setContactName(const std::string& contactName)
{
	contactName_ = contactName;
	setParameter("ContactName", contactName);
}

std::string UpdateCustomerInfoRequest::getBizScope()const
{
	return bizScope_;
}

void UpdateCustomerInfoRequest::setBizScope(const std::string& bizScope)
{
	bizScope_ = bizScope;
	setParameter("BizScope", bizScope);
}

std::string UpdateCustomerInfoRequest::getIncomeDeclarationPassword()const
{
	return incomeDeclarationPassword_;
}

void UpdateCustomerInfoRequest::setIncomeDeclarationPassword(const std::string& incomeDeclarationPassword)
{
	incomeDeclarationPassword_ = incomeDeclarationPassword;
	setParameter("IncomeDeclarationPassword", incomeDeclarationPassword);
}

std::string UpdateCustomerInfoRequest::getCompanyType()const
{
	return companyType_;
}

void UpdateCustomerInfoRequest::setCompanyType(const std::string& companyType)
{
	companyType_ = companyType;
	setParameter("CompanyType", companyType);
}

std::string UpdateCustomerInfoRequest::getCorpAddress()const
{
	return corpAddress_;
}

void UpdateCustomerInfoRequest::setCorpAddress(const std::string& corpAddress)
{
	corpAddress_ = corpAddress;
	setParameter("CorpAddress", corpAddress);
}

std::string UpdateCustomerInfoRequest::getBizId()const
{
	return bizId_;
}

void UpdateCustomerInfoRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

std::string UpdateCustomerInfoRequest::getName()const
{
	return name_;
}

void UpdateCustomerInfoRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

bool UpdateCustomerInfoRequest::getIsRefreshInfo()const
{
	return isRefreshInfo_;
}

void UpdateCustomerInfoRequest::setIsRefreshInfo(bool isRefreshInfo)
{
	isRefreshInfo_ = isRefreshInfo;
	setParameter("IsRefreshInfo", isRefreshInfo ? "true" : "false");
}

std::string UpdateCustomerInfoRequest::getRegisteredCapital()const
{
	return registeredCapital_;
}

void UpdateCustomerInfoRequest::setRegisteredCapital(const std::string& registeredCapital)
{
	registeredCapital_ = registeredCapital;
	setParameter("RegisteredCapital", registeredCapital);
}

std::string UpdateCustomerInfoRequest::getOperatingPeriod()const
{
	return operatingPeriod_;
}

void UpdateCustomerInfoRequest::setOperatingPeriod(const std::string& operatingPeriod)
{
	operatingPeriod_ = operatingPeriod;
	setParameter("OperatingPeriod", operatingPeriod);
}

