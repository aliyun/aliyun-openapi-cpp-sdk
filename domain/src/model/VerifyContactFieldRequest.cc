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

#include <alibabacloud/domain/model/VerifyContactFieldRequest.h>

using AlibabaCloud::Domain::Model::VerifyContactFieldRequest;

VerifyContactFieldRequest::VerifyContactFieldRequest() :
	RpcServiceRequest("domain", "2018-01-29", "VerifyContactField")
{}

VerifyContactFieldRequest::~VerifyContactFieldRequest()
{}

std::string VerifyContactFieldRequest::getCountry()const
{
	return country_;
}

void VerifyContactFieldRequest::setCountry(const std::string& country)
{
	country_ = country;
	setCoreParameter("Country", country);
}

std::string VerifyContactFieldRequest::getCity()const
{
	return city_;
}

void VerifyContactFieldRequest::setCity(const std::string& city)
{
	city_ = city;
	setCoreParameter("City", city);
}

std::string VerifyContactFieldRequest::getZhCity()const
{
	return zhCity_;
}

void VerifyContactFieldRequest::setZhCity(const std::string& zhCity)
{
	zhCity_ = zhCity;
	setCoreParameter("ZhCity", zhCity);
}

std::string VerifyContactFieldRequest::getTelExt()const
{
	return telExt_;
}

void VerifyContactFieldRequest::setTelExt(const std::string& telExt)
{
	telExt_ = telExt;
	setCoreParameter("TelExt", telExt);
}

std::string VerifyContactFieldRequest::getProvince()const
{
	return province_;
}

void VerifyContactFieldRequest::setProvince(const std::string& province)
{
	province_ = province;
	setCoreParameter("Province", province);
}

std::string VerifyContactFieldRequest::getZhRegistrantName()const
{
	return zhRegistrantName_;
}

void VerifyContactFieldRequest::setZhRegistrantName(const std::string& zhRegistrantName)
{
	zhRegistrantName_ = zhRegistrantName;
	setCoreParameter("ZhRegistrantName", zhRegistrantName);
}

std::string VerifyContactFieldRequest::getPostalCode()const
{
	return postalCode_;
}

void VerifyContactFieldRequest::setPostalCode(const std::string& postalCode)
{
	postalCode_ = postalCode;
	setCoreParameter("PostalCode", postalCode);
}

std::string VerifyContactFieldRequest::getLang()const
{
	return lang_;
}

void VerifyContactFieldRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string VerifyContactFieldRequest::getEmail()const
{
	return email_;
}

void VerifyContactFieldRequest::setEmail(const std::string& email)
{
	email_ = email;
	setCoreParameter("Email", email);
}

std::string VerifyContactFieldRequest::getZhRegistrantOrganization()const
{
	return zhRegistrantOrganization_;
}

void VerifyContactFieldRequest::setZhRegistrantOrganization(const std::string& zhRegistrantOrganization)
{
	zhRegistrantOrganization_ = zhRegistrantOrganization;
	setCoreParameter("ZhRegistrantOrganization", zhRegistrantOrganization);
}

std::string VerifyContactFieldRequest::getAddress()const
{
	return address_;
}

void VerifyContactFieldRequest::setAddress(const std::string& address)
{
	address_ = address;
	setCoreParameter("Address", address);
}

std::string VerifyContactFieldRequest::getTelArea()const
{
	return telArea_;
}

void VerifyContactFieldRequest::setTelArea(const std::string& telArea)
{
	telArea_ = telArea;
	setCoreParameter("TelArea", telArea);
}

std::string VerifyContactFieldRequest::getZhAddress()const
{
	return zhAddress_;
}

void VerifyContactFieldRequest::setZhAddress(const std::string& zhAddress)
{
	zhAddress_ = zhAddress;
	setCoreParameter("ZhAddress", zhAddress);
}

std::string VerifyContactFieldRequest::getRegistrantType()const
{
	return registrantType_;
}

void VerifyContactFieldRequest::setRegistrantType(const std::string& registrantType)
{
	registrantType_ = registrantType;
	setCoreParameter("RegistrantType", registrantType);
}

std::string VerifyContactFieldRequest::getDomainName()const
{
	return domainName_;
}

void VerifyContactFieldRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string VerifyContactFieldRequest::getTelephone()const
{
	return telephone_;
}

void VerifyContactFieldRequest::setTelephone(const std::string& telephone)
{
	telephone_ = telephone;
	setCoreParameter("Telephone", telephone);
}

std::string VerifyContactFieldRequest::getZhProvince()const
{
	return zhProvince_;
}

void VerifyContactFieldRequest::setZhProvince(const std::string& zhProvince)
{
	zhProvince_ = zhProvince;
	setCoreParameter("ZhProvince", zhProvince);
}

std::string VerifyContactFieldRequest::getRegistrantOrganization()const
{
	return registrantOrganization_;
}

void VerifyContactFieldRequest::setRegistrantOrganization(const std::string& registrantOrganization)
{
	registrantOrganization_ = registrantOrganization;
	setCoreParameter("RegistrantOrganization", registrantOrganization);
}

std::string VerifyContactFieldRequest::getUserClientIp()const
{
	return userClientIp_;
}

void VerifyContactFieldRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string VerifyContactFieldRequest::getRegistrantName()const
{
	return registrantName_;
}

void VerifyContactFieldRequest::setRegistrantName(const std::string& registrantName)
{
	registrantName_ = registrantName;
	setCoreParameter("RegistrantName", registrantName);
}

