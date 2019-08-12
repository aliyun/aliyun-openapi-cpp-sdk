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

#include <alibabacloud/cas/model/CreateOrderMaterialRequest.h>

using AlibabaCloud::Cas::Model::CreateOrderMaterialRequest;

CreateOrderMaterialRequest::CreateOrderMaterialRequest() :
	RpcServiceRequest("cas", "2018-08-13", "CreateOrderMaterial")
{}

CreateOrderMaterialRequest::~CreateOrderMaterialRequest()
{}

std::string CreateOrderMaterialRequest::getLeaderName()const
{
	return leaderName_;
}

void CreateOrderMaterialRequest::setLeaderName(const std::string& leaderName)
{
	leaderName_ = leaderName;
	setCoreParameter("LeaderName", leaderName);
}

std::string CreateOrderMaterialRequest::getCity()const
{
	return city_;
}

void CreateOrderMaterialRequest::setCity(const std::string& city)
{
	city_ = city;
	setCoreParameter("City", city);
}

std::string CreateOrderMaterialRequest::getCountryCode()const
{
	return countryCode_;
}

void CreateOrderMaterialRequest::setCountryCode(const std::string& countryCode)
{
	countryCode_ = countryCode;
	setCoreParameter("CountryCode", countryCode);
}

std::string CreateOrderMaterialRequest::getLeaderEmail()const
{
	return leaderEmail_;
}

void CreateOrderMaterialRequest::setLeaderEmail(const std::string& leaderEmail)
{
	leaderEmail_ = leaderEmail;
	setCoreParameter("LeaderEmail", leaderEmail);
}

std::string CreateOrderMaterialRequest::getCompanyAddress()const
{
	return companyAddress_;
}

void CreateOrderMaterialRequest::setCompanyAddress(const std::string& companyAddress)
{
	companyAddress_ = companyAddress;
	setCoreParameter("CompanyAddress", companyAddress);
}

std::string CreateOrderMaterialRequest::getCompanyCode()const
{
	return companyCode_;
}

void CreateOrderMaterialRequest::setCompanyCode(const std::string& companyCode)
{
	companyCode_ = companyCode;
	setCoreParameter("CompanyCode", companyCode);
}

std::string CreateOrderMaterialRequest::getPersonEmail()const
{
	return personEmail_;
}

void CreateOrderMaterialRequest::setPersonEmail(const std::string& personEmail)
{
	personEmail_ = personEmail;
	setCoreParameter("PersonEmail", personEmail);
}

std::string CreateOrderMaterialRequest::getProvince()const
{
	return province_;
}

void CreateOrderMaterialRequest::setProvince(const std::string& province)
{
	province_ = province;
	setCoreParameter("Province", province);
}

int CreateOrderMaterialRequest::getDomainAuthType()const
{
	return domainAuthType_;
}

void CreateOrderMaterialRequest::setDomainAuthType(int domainAuthType)
{
	domainAuthType_ = domainAuthType;
	setCoreParameter("DomainAuthType", domainAuthType);
}

std::string CreateOrderMaterialRequest::getLeaderPhone()const
{
	return leaderPhone_;
}

void CreateOrderMaterialRequest::setLeaderPhone(const std::string& leaderPhone)
{
	leaderPhone_ = leaderPhone;
	setCoreParameter("LeaderPhone", leaderPhone);
}

std::string CreateOrderMaterialRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateOrderMaterialRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string CreateOrderMaterialRequest::getCsrContent()const
{
	return csrContent_;
}

void CreateOrderMaterialRequest::setCsrContent(const std::string& csrContent)
{
	csrContent_ = csrContent;
	setCoreParameter("CsrContent", csrContent);
}

std::string CreateOrderMaterialRequest::getLang()const
{
	return lang_;
}

void CreateOrderMaterialRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string CreateOrderMaterialRequest::getPersonName()const
{
	return personName_;
}

void CreateOrderMaterialRequest::setPersonName(const std::string& personName)
{
	personName_ = personName;
	setCoreParameter("PersonName", personName);
}

std::string CreateOrderMaterialRequest::getPersonIdCardNumber()const
{
	return personIdCardNumber_;
}

void CreateOrderMaterialRequest::setPersonIdCardNumber(const std::string& personIdCardNumber)
{
	personIdCardNumber_ = personIdCardNumber;
	setCoreParameter("PersonIdCardNumber", personIdCardNumber);
}

long CreateOrderMaterialRequest::getOrderId()const
{
	return orderId_;
}

void CreateOrderMaterialRequest::setOrderId(long orderId)
{
	orderId_ = orderId;
	setCoreParameter("OrderId", orderId);
}

std::string CreateOrderMaterialRequest::getLeaderTitle()const
{
	return leaderTitle_;
}

void CreateOrderMaterialRequest::setLeaderTitle(const std::string& leaderTitle)
{
	leaderTitle_ = leaderTitle;
	setCoreParameter("LeaderTitle", leaderTitle);
}

std::string CreateOrderMaterialRequest::getPersonTitle()const
{
	return personTitle_;
}

void CreateOrderMaterialRequest::setPersonTitle(const std::string& personTitle)
{
	personTitle_ = personTitle;
	setCoreParameter("PersonTitle", personTitle);
}

std::string CreateOrderMaterialRequest::getPostCode()const
{
	return postCode_;
}

void CreateOrderMaterialRequest::setPostCode(const std::string& postCode)
{
	postCode_ = postCode;
	setCoreParameter("PostCode", postCode);
}

int CreateOrderMaterialRequest::getCreateCsr()const
{
	return createCsr_;
}

void CreateOrderMaterialRequest::setCreateCsr(int createCsr)
{
	createCsr_ = createCsr;
	setCoreParameter("CreateCsr", createCsr);
}

std::string CreateOrderMaterialRequest::getPersonPhone()const
{
	return personPhone_;
}

void CreateOrderMaterialRequest::setPersonPhone(const std::string& personPhone)
{
	personPhone_ = personPhone;
	setCoreParameter("PersonPhone", personPhone);
}

std::string CreateOrderMaterialRequest::getCompanyName()const
{
	return companyName_;
}

void CreateOrderMaterialRequest::setCompanyName(const std::string& companyName)
{
	companyName_ = companyName;
	setCoreParameter("CompanyName", companyName);
}

std::string CreateOrderMaterialRequest::getCompanyPhone()const
{
	return companyPhone_;
}

void CreateOrderMaterialRequest::setCompanyPhone(const std::string& companyPhone)
{
	companyPhone_ = companyPhone;
	setCoreParameter("CompanyPhone", companyPhone);
}

int CreateOrderMaterialRequest::getCompanyType()const
{
	return companyType_;
}

void CreateOrderMaterialRequest::setCompanyType(int companyType)
{
	companyType_ = companyType;
	setCoreParameter("CompanyType", companyType);
}

std::string CreateOrderMaterialRequest::getDomain()const
{
	return domain_;
}

void CreateOrderMaterialRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setCoreParameter("Domain", domain);
}

std::string CreateOrderMaterialRequest::getPersonDepartment()const
{
	return personDepartment_;
}

void CreateOrderMaterialRequest::setPersonDepartment(const std::string& personDepartment)
{
	personDepartment_ = personDepartment;
	setCoreParameter("PersonDepartment", personDepartment);
}

