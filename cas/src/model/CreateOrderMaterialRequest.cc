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
	setCoreParameter("LeaderName", std::to_string(leaderName));
}

std::string CreateOrderMaterialRequest::getCity()const
{
	return city_;
}

void CreateOrderMaterialRequest::setCity(const std::string& city)
{
	city_ = city;
	setCoreParameter("City", std::to_string(city));
}

std::string CreateOrderMaterialRequest::getCountryCode()const
{
	return countryCode_;
}

void CreateOrderMaterialRequest::setCountryCode(const std::string& countryCode)
{
	countryCode_ = countryCode;
	setCoreParameter("CountryCode", std::to_string(countryCode));
}

std::string CreateOrderMaterialRequest::getLeaderEmail()const
{
	return leaderEmail_;
}

void CreateOrderMaterialRequest::setLeaderEmail(const std::string& leaderEmail)
{
	leaderEmail_ = leaderEmail;
	setCoreParameter("LeaderEmail", std::to_string(leaderEmail));
}

std::string CreateOrderMaterialRequest::getCompanyAddress()const
{
	return companyAddress_;
}

void CreateOrderMaterialRequest::setCompanyAddress(const std::string& companyAddress)
{
	companyAddress_ = companyAddress;
	setCoreParameter("CompanyAddress", std::to_string(companyAddress));
}

std::string CreateOrderMaterialRequest::getCompanyCode()const
{
	return companyCode_;
}

void CreateOrderMaterialRequest::setCompanyCode(const std::string& companyCode)
{
	companyCode_ = companyCode;
	setCoreParameter("CompanyCode", std::to_string(companyCode));
}

std::string CreateOrderMaterialRequest::getPersonEmail()const
{
	return personEmail_;
}

void CreateOrderMaterialRequest::setPersonEmail(const std::string& personEmail)
{
	personEmail_ = personEmail;
	setCoreParameter("PersonEmail", std::to_string(personEmail));
}

std::string CreateOrderMaterialRequest::getProvince()const
{
	return province_;
}

void CreateOrderMaterialRequest::setProvince(const std::string& province)
{
	province_ = province;
	setCoreParameter("Province", std::to_string(province));
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
	setCoreParameter("LeaderPhone", std::to_string(leaderPhone));
}

std::string CreateOrderMaterialRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateOrderMaterialRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", std::to_string(sourceIp));
}

std::string CreateOrderMaterialRequest::getCsrContent()const
{
	return csrContent_;
}

void CreateOrderMaterialRequest::setCsrContent(const std::string& csrContent)
{
	csrContent_ = csrContent;
	setCoreParameter("CsrContent", std::to_string(csrContent));
}

std::string CreateOrderMaterialRequest::getLang()const
{
	return lang_;
}

void CreateOrderMaterialRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

std::string CreateOrderMaterialRequest::getPersonName()const
{
	return personName_;
}

void CreateOrderMaterialRequest::setPersonName(const std::string& personName)
{
	personName_ = personName;
	setCoreParameter("PersonName", std::to_string(personName));
}

std::string CreateOrderMaterialRequest::getPersonIdCardNumber()const
{
	return personIdCardNumber_;
}

void CreateOrderMaterialRequest::setPersonIdCardNumber(const std::string& personIdCardNumber)
{
	personIdCardNumber_ = personIdCardNumber;
	setCoreParameter("PersonIdCardNumber", std::to_string(personIdCardNumber));
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
	setCoreParameter("LeaderTitle", std::to_string(leaderTitle));
}

std::string CreateOrderMaterialRequest::getPersonTitle()const
{
	return personTitle_;
}

void CreateOrderMaterialRequest::setPersonTitle(const std::string& personTitle)
{
	personTitle_ = personTitle;
	setCoreParameter("PersonTitle", std::to_string(personTitle));
}

std::string CreateOrderMaterialRequest::getPostCode()const
{
	return postCode_;
}

void CreateOrderMaterialRequest::setPostCode(const std::string& postCode)
{
	postCode_ = postCode;
	setCoreParameter("PostCode", std::to_string(postCode));
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
	setCoreParameter("PersonPhone", std::to_string(personPhone));
}

std::string CreateOrderMaterialRequest::getCompanyName()const
{
	return companyName_;
}

void CreateOrderMaterialRequest::setCompanyName(const std::string& companyName)
{
	companyName_ = companyName;
	setCoreParameter("CompanyName", std::to_string(companyName));
}

std::string CreateOrderMaterialRequest::getCompanyPhone()const
{
	return companyPhone_;
}

void CreateOrderMaterialRequest::setCompanyPhone(const std::string& companyPhone)
{
	companyPhone_ = companyPhone;
	setCoreParameter("CompanyPhone", std::to_string(companyPhone));
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
	setCoreParameter("Domain", std::to_string(domain));
}

std::string CreateOrderMaterialRequest::getPersonDepartment()const
{
	return personDepartment_;
}

void CreateOrderMaterialRequest::setPersonDepartment(const std::string& personDepartment)
{
	personDepartment_ = personDepartment;
	setCoreParameter("PersonDepartment", std::to_string(personDepartment));
}

