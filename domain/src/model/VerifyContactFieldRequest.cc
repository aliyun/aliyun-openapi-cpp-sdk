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
	setParameter("Country", country);
}

std::string VerifyContactFieldRequest::getAddress()const
{
	return address_;
}

void VerifyContactFieldRequest::setAddress(const std::string& address)
{
	address_ = address;
	setParameter("Address", address);
}

std::string VerifyContactFieldRequest::getTelArea()const
{
	return telArea_;
}

void VerifyContactFieldRequest::setTelArea(const std::string& telArea)
{
	telArea_ = telArea;
	setParameter("TelArea", telArea);
}

std::string VerifyContactFieldRequest::getCity()const
{
	return city_;
}

void VerifyContactFieldRequest::setCity(const std::string& city)
{
	city_ = city;
	setParameter("City", city);
}

std::string VerifyContactFieldRequest::getZhAddress()const
{
	return zhAddress_;
}

void VerifyContactFieldRequest::setZhAddress(const std::string& zhAddress)
{
	zhAddress_ = zhAddress;
	setParameter("ZhAddress", zhAddress);
}

std::string VerifyContactFieldRequest::getRegistrantType()const
{
	return registrantType_;
}

void VerifyContactFieldRequest::setRegistrantType(const std::string& registrantType)
{
	registrantType_ = registrantType;
	setParameter("RegistrantType", registrantType);
}

std::string VerifyContactFieldRequest::getTelephone()const
{
	return telephone_;
}

void VerifyContactFieldRequest::setTelephone(const std::string& telephone)
{
	telephone_ = telephone;
	setParameter("Telephone", telephone);
}

std::string VerifyContactFieldRequest::getZhCity()const
{
	return zhCity_;
}

void VerifyContactFieldRequest::setZhCity(const std::string& zhCity)
{
	zhCity_ = zhCity;
	setParameter("ZhCity", zhCity);
}

std::string VerifyContactFieldRequest::getZhProvince()const
{
	return zhProvince_;
}

void VerifyContactFieldRequest::setZhProvince(const std::string& zhProvince)
{
	zhProvince_ = zhProvince;
	setParameter("ZhProvince", zhProvince);
}

std::string VerifyContactFieldRequest::getRegistrantOrganization()const
{
	return registrantOrganization_;
}

void VerifyContactFieldRequest::setRegistrantOrganization(const std::string& registrantOrganization)
{
	registrantOrganization_ = registrantOrganization;
	setParameter("RegistrantOrganization", registrantOrganization);
}

std::string VerifyContactFieldRequest::getTelExt()const
{
	return telExt_;
}

void VerifyContactFieldRequest::setTelExt(const std::string& telExt)
{
	telExt_ = telExt;
	setParameter("TelExt", telExt);
}

std::string VerifyContactFieldRequest::getProvince()const
{
	return province_;
}

void VerifyContactFieldRequest::setProvince(const std::string& province)
{
	province_ = province;
	setParameter("Province", province);
}

std::string VerifyContactFieldRequest::getZhRegistrantName()const
{
	return zhRegistrantName_;
}

void VerifyContactFieldRequest::setZhRegistrantName(const std::string& zhRegistrantName)
{
	zhRegistrantName_ = zhRegistrantName;
	setParameter("ZhRegistrantName", zhRegistrantName);
}

std::string VerifyContactFieldRequest::getPostalCode()const
{
	return postalCode_;
}

void VerifyContactFieldRequest::setPostalCode(const std::string& postalCode)
{
	postalCode_ = postalCode;
	setParameter("PostalCode", postalCode);
}

std::string VerifyContactFieldRequest::getUserClientIp()const
{
	return userClientIp_;
}

void VerifyContactFieldRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::string VerifyContactFieldRequest::getLang()const
{
	return lang_;
}

void VerifyContactFieldRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string VerifyContactFieldRequest::getEmail()const
{
	return email_;
}

void VerifyContactFieldRequest::setEmail(const std::string& email)
{
	email_ = email;
	setParameter("Email", email);
}

std::string VerifyContactFieldRequest::getRegistrantName()const
{
	return registrantName_;
}

void VerifyContactFieldRequest::setRegistrantName(const std::string& registrantName)
{
	registrantName_ = registrantName;
	setParameter("RegistrantName", registrantName);
}

std::string VerifyContactFieldRequest::getZhRegistrantOrganization()const
{
	return zhRegistrantOrganization_;
}

void VerifyContactFieldRequest::setZhRegistrantOrganization(const std::string& zhRegistrantOrganization)
{
	zhRegistrantOrganization_ = zhRegistrantOrganization;
	setParameter("ZhRegistrantOrganization", zhRegistrantOrganization);
}

