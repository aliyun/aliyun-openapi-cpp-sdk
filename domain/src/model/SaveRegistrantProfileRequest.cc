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

#include <alibabacloud/domain/model/SaveRegistrantProfileRequest.h>

using AlibabaCloud::Domain::Model::SaveRegistrantProfileRequest;

SaveRegistrantProfileRequest::SaveRegistrantProfileRequest() :
	RpcServiceRequest("domain", "2018-01-29", "SaveRegistrantProfile")
{}

SaveRegistrantProfileRequest::~SaveRegistrantProfileRequest()
{}

std::string SaveRegistrantProfileRequest::getCountry()const
{
	return country_;
}

void SaveRegistrantProfileRequest::setCountry(const std::string& country)
{
	country_ = country;
	setCoreParameter("Country", std::to_string(country));
}

std::string SaveRegistrantProfileRequest::getAddress()const
{
	return address_;
}

void SaveRegistrantProfileRequest::setAddress(const std::string& address)
{
	address_ = address;
	setCoreParameter("Address", std::to_string(address));
}

std::string SaveRegistrantProfileRequest::getTelArea()const
{
	return telArea_;
}

void SaveRegistrantProfileRequest::setTelArea(const std::string& telArea)
{
	telArea_ = telArea;
	setCoreParameter("TelArea", std::to_string(telArea));
}

std::string SaveRegistrantProfileRequest::getCity()const
{
	return city_;
}

void SaveRegistrantProfileRequest::setCity(const std::string& city)
{
	city_ = city;
	setCoreParameter("City", std::to_string(city));
}

long SaveRegistrantProfileRequest::getRegistrantProfileId()const
{
	return registrantProfileId_;
}

void SaveRegistrantProfileRequest::setRegistrantProfileId(long registrantProfileId)
{
	registrantProfileId_ = registrantProfileId;
	setCoreParameter("RegistrantProfileId", registrantProfileId);
}

std::string SaveRegistrantProfileRequest::getZhAddress()const
{
	return zhAddress_;
}

void SaveRegistrantProfileRequest::setZhAddress(const std::string& zhAddress)
{
	zhAddress_ = zhAddress;
	setCoreParameter("ZhAddress", std::to_string(zhAddress));
}

std::string SaveRegistrantProfileRequest::getRegistrantType()const
{
	return registrantType_;
}

void SaveRegistrantProfileRequest::setRegistrantType(const std::string& registrantType)
{
	registrantType_ = registrantType;
	setCoreParameter("RegistrantType", std::to_string(registrantType));
}

std::string SaveRegistrantProfileRequest::getRegistrantProfileType()const
{
	return registrantProfileType_;
}

void SaveRegistrantProfileRequest::setRegistrantProfileType(const std::string& registrantProfileType)
{
	registrantProfileType_ = registrantProfileType;
	setCoreParameter("RegistrantProfileType", std::to_string(registrantProfileType));
}

std::string SaveRegistrantProfileRequest::getTelephone()const
{
	return telephone_;
}

void SaveRegistrantProfileRequest::setTelephone(const std::string& telephone)
{
	telephone_ = telephone;
	setCoreParameter("Telephone", std::to_string(telephone));
}

bool SaveRegistrantProfileRequest::getDefaultRegistrantProfile()const
{
	return defaultRegistrantProfile_;
}

void SaveRegistrantProfileRequest::setDefaultRegistrantProfile(bool defaultRegistrantProfile)
{
	defaultRegistrantProfile_ = defaultRegistrantProfile;
	setCoreParameter("DefaultRegistrantProfile", defaultRegistrantProfile ? "true" : "false");
}

std::string SaveRegistrantProfileRequest::getZhCity()const
{
	return zhCity_;
}

void SaveRegistrantProfileRequest::setZhCity(const std::string& zhCity)
{
	zhCity_ = zhCity;
	setCoreParameter("ZhCity", std::to_string(zhCity));
}

std::string SaveRegistrantProfileRequest::getZhProvince()const
{
	return zhProvince_;
}

void SaveRegistrantProfileRequest::setZhProvince(const std::string& zhProvince)
{
	zhProvince_ = zhProvince;
	setCoreParameter("ZhProvince", std::to_string(zhProvince));
}

std::string SaveRegistrantProfileRequest::getRegistrantOrganization()const
{
	return registrantOrganization_;
}

void SaveRegistrantProfileRequest::setRegistrantOrganization(const std::string& registrantOrganization)
{
	registrantOrganization_ = registrantOrganization;
	setCoreParameter("RegistrantOrganization", std::to_string(registrantOrganization));
}

std::string SaveRegistrantProfileRequest::getTelExt()const
{
	return telExt_;
}

void SaveRegistrantProfileRequest::setTelExt(const std::string& telExt)
{
	telExt_ = telExt;
	setCoreParameter("TelExt", std::to_string(telExt));
}

std::string SaveRegistrantProfileRequest::getProvince()const
{
	return province_;
}

void SaveRegistrantProfileRequest::setProvince(const std::string& province)
{
	province_ = province;
	setCoreParameter("Province", std::to_string(province));
}

std::string SaveRegistrantProfileRequest::getZhRegistrantName()const
{
	return zhRegistrantName_;
}

void SaveRegistrantProfileRequest::setZhRegistrantName(const std::string& zhRegistrantName)
{
	zhRegistrantName_ = zhRegistrantName;
	setCoreParameter("ZhRegistrantName", std::to_string(zhRegistrantName));
}

std::string SaveRegistrantProfileRequest::getPostalCode()const
{
	return postalCode_;
}

void SaveRegistrantProfileRequest::setPostalCode(const std::string& postalCode)
{
	postalCode_ = postalCode;
	setCoreParameter("PostalCode", std::to_string(postalCode));
}

std::string SaveRegistrantProfileRequest::getUserClientIp()const
{
	return userClientIp_;
}

void SaveRegistrantProfileRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", std::to_string(userClientIp));
}

std::string SaveRegistrantProfileRequest::getLang()const
{
	return lang_;
}

void SaveRegistrantProfileRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", std::to_string(lang));
}

std::string SaveRegistrantProfileRequest::getEmail()const
{
	return email_;
}

void SaveRegistrantProfileRequest::setEmail(const std::string& email)
{
	email_ = email;
	setCoreParameter("Email", std::to_string(email));
}

std::string SaveRegistrantProfileRequest::getRegistrantName()const
{
	return registrantName_;
}

void SaveRegistrantProfileRequest::setRegistrantName(const std::string& registrantName)
{
	registrantName_ = registrantName;
	setCoreParameter("RegistrantName", std::to_string(registrantName));
}

std::string SaveRegistrantProfileRequest::getZhRegistrantOrganization()const
{
	return zhRegistrantOrganization_;
}

void SaveRegistrantProfileRequest::setZhRegistrantOrganization(const std::string& zhRegistrantOrganization)
{
	zhRegistrantOrganization_ = zhRegistrantOrganization;
	setCoreParameter("ZhRegistrantOrganization", std::to_string(zhRegistrantOrganization));
}

