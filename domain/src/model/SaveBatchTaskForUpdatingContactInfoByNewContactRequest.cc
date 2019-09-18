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

#include <alibabacloud/domain/model/SaveBatchTaskForUpdatingContactInfoByNewContactRequest.h>

using AlibabaCloud::Domain::Model::SaveBatchTaskForUpdatingContactInfoByNewContactRequest;

SaveBatchTaskForUpdatingContactInfoByNewContactRequest::SaveBatchTaskForUpdatingContactInfoByNewContactRequest() :
	RpcServiceRequest("domain", "2018-01-29", "SaveBatchTaskForUpdatingContactInfoByNewContact")
{}

SaveBatchTaskForUpdatingContactInfoByNewContactRequest::~SaveBatchTaskForUpdatingContactInfoByNewContactRequest()
{}

std::string SaveBatchTaskForUpdatingContactInfoByNewContactRequest::getCountry()const
{
	return country_;
}

void SaveBatchTaskForUpdatingContactInfoByNewContactRequest::setCountry(const std::string& country)
{
	country_ = country;
	setCoreParameter("Country", country);
}

std::string SaveBatchTaskForUpdatingContactInfoByNewContactRequest::getCity()const
{
	return city_;
}

void SaveBatchTaskForUpdatingContactInfoByNewContactRequest::setCity(const std::string& city)
{
	city_ = city;
	setCoreParameter("City", city);
}

bool SaveBatchTaskForUpdatingContactInfoByNewContactRequest::getTransferOutProhibited()const
{
	return transferOutProhibited_;
}

void SaveBatchTaskForUpdatingContactInfoByNewContactRequest::setTransferOutProhibited(bool transferOutProhibited)
{
	transferOutProhibited_ = transferOutProhibited;
	setCoreParameter("TransferOutProhibited", transferOutProhibited ? "true" : "false");
}

std::string SaveBatchTaskForUpdatingContactInfoByNewContactRequest::getZhCity()const
{
	return zhCity_;
}

void SaveBatchTaskForUpdatingContactInfoByNewContactRequest::setZhCity(const std::string& zhCity)
{
	zhCity_ = zhCity;
	setCoreParameter("ZhCity", zhCity);
}

std::string SaveBatchTaskForUpdatingContactInfoByNewContactRequest::getTelExt()const
{
	return telExt_;
}

void SaveBatchTaskForUpdatingContactInfoByNewContactRequest::setTelExt(const std::string& telExt)
{
	telExt_ = telExt;
	setCoreParameter("TelExt", telExt);
}

std::string SaveBatchTaskForUpdatingContactInfoByNewContactRequest::getProvince()const
{
	return province_;
}

void SaveBatchTaskForUpdatingContactInfoByNewContactRequest::setProvince(const std::string& province)
{
	province_ = province;
	setCoreParameter("Province", province);
}

std::string SaveBatchTaskForUpdatingContactInfoByNewContactRequest::getZhRegistrantName()const
{
	return zhRegistrantName_;
}

void SaveBatchTaskForUpdatingContactInfoByNewContactRequest::setZhRegistrantName(const std::string& zhRegistrantName)
{
	zhRegistrantName_ = zhRegistrantName;
	setCoreParameter("ZhRegistrantName", zhRegistrantName);
}

std::string SaveBatchTaskForUpdatingContactInfoByNewContactRequest::getPostalCode()const
{
	return postalCode_;
}

void SaveBatchTaskForUpdatingContactInfoByNewContactRequest::setPostalCode(const std::string& postalCode)
{
	postalCode_ = postalCode;
	setCoreParameter("PostalCode", postalCode);
}

std::string SaveBatchTaskForUpdatingContactInfoByNewContactRequest::getLang()const
{
	return lang_;
}

void SaveBatchTaskForUpdatingContactInfoByNewContactRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string SaveBatchTaskForUpdatingContactInfoByNewContactRequest::getEmail()const
{
	return email_;
}

void SaveBatchTaskForUpdatingContactInfoByNewContactRequest::setEmail(const std::string& email)
{
	email_ = email;
	setCoreParameter("Email", email);
}

std::string SaveBatchTaskForUpdatingContactInfoByNewContactRequest::getZhRegistrantOrganization()const
{
	return zhRegistrantOrganization_;
}

void SaveBatchTaskForUpdatingContactInfoByNewContactRequest::setZhRegistrantOrganization(const std::string& zhRegistrantOrganization)
{
	zhRegistrantOrganization_ = zhRegistrantOrganization;
	setCoreParameter("ZhRegistrantOrganization", zhRegistrantOrganization);
}

std::string SaveBatchTaskForUpdatingContactInfoByNewContactRequest::getAddress()const
{
	return address_;
}

void SaveBatchTaskForUpdatingContactInfoByNewContactRequest::setAddress(const std::string& address)
{
	address_ = address;
	setCoreParameter("Address", address);
}

std::string SaveBatchTaskForUpdatingContactInfoByNewContactRequest::getTelArea()const
{
	return telArea_;
}

void SaveBatchTaskForUpdatingContactInfoByNewContactRequest::setTelArea(const std::string& telArea)
{
	telArea_ = telArea;
	setCoreParameter("TelArea", telArea);
}

std::string SaveBatchTaskForUpdatingContactInfoByNewContactRequest::getContactType()const
{
	return contactType_;
}

void SaveBatchTaskForUpdatingContactInfoByNewContactRequest::setContactType(const std::string& contactType)
{
	contactType_ = contactType;
	setCoreParameter("ContactType", contactType);
}

std::string SaveBatchTaskForUpdatingContactInfoByNewContactRequest::getZhAddress()const
{
	return zhAddress_;
}

void SaveBatchTaskForUpdatingContactInfoByNewContactRequest::setZhAddress(const std::string& zhAddress)
{
	zhAddress_ = zhAddress;
	setCoreParameter("ZhAddress", zhAddress);
}

std::string SaveBatchTaskForUpdatingContactInfoByNewContactRequest::getRegistrantType()const
{
	return registrantType_;
}

void SaveBatchTaskForUpdatingContactInfoByNewContactRequest::setRegistrantType(const std::string& registrantType)
{
	registrantType_ = registrantType;
	setCoreParameter("RegistrantType", registrantType);
}

std::vector<std::string> SaveBatchTaskForUpdatingContactInfoByNewContactRequest::getDomainName()const
{
	return domainName_;
}

void SaveBatchTaskForUpdatingContactInfoByNewContactRequest::setDomainName(const std::vector<std::string>& domainName)
{
	domainName_ = domainName;
	for(int i = 0; i!= domainName.size(); i++)
		setCoreParameter("DomainName."+ std::to_string(i), domainName.at(i));
}

std::string SaveBatchTaskForUpdatingContactInfoByNewContactRequest::getTelephone()const
{
	return telephone_;
}

void SaveBatchTaskForUpdatingContactInfoByNewContactRequest::setTelephone(const std::string& telephone)
{
	telephone_ = telephone;
	setCoreParameter("Telephone", telephone);
}

std::string SaveBatchTaskForUpdatingContactInfoByNewContactRequest::getZhProvince()const
{
	return zhProvince_;
}

void SaveBatchTaskForUpdatingContactInfoByNewContactRequest::setZhProvince(const std::string& zhProvince)
{
	zhProvince_ = zhProvince;
	setCoreParameter("ZhProvince", zhProvince);
}

std::string SaveBatchTaskForUpdatingContactInfoByNewContactRequest::getRegistrantOrganization()const
{
	return registrantOrganization_;
}

void SaveBatchTaskForUpdatingContactInfoByNewContactRequest::setRegistrantOrganization(const std::string& registrantOrganization)
{
	registrantOrganization_ = registrantOrganization;
	setCoreParameter("RegistrantOrganization", registrantOrganization);
}

std::string SaveBatchTaskForUpdatingContactInfoByNewContactRequest::getUserClientIp()const
{
	return userClientIp_;
}

void SaveBatchTaskForUpdatingContactInfoByNewContactRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string SaveBatchTaskForUpdatingContactInfoByNewContactRequest::getRegistrantName()const
{
	return registrantName_;
}

void SaveBatchTaskForUpdatingContactInfoByNewContactRequest::setRegistrantName(const std::string& registrantName)
{
	registrantName_ = registrantName;
	setCoreParameter("RegistrantName", registrantName);
}

