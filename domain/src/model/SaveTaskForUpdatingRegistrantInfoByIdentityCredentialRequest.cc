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

#include <alibabacloud/domain/model/SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest.h>

using AlibabaCloud::Domain::Model::SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest;

SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest() :
	RpcServiceRequest("domain", "2018-01-29", "SaveTaskForUpdatingRegistrantInfoByIdentityCredential")
{}

SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::~SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest()
{}

std::string SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::getCountry()const
{
	return country_;
}

void SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::setCountry(const std::string& country)
{
	country_ = country;
	setCoreParameter("Country", country);
}

std::string SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::getIdentityCredentialType()const
{
	return identityCredentialType_;
}

void SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::setIdentityCredentialType(const std::string& identityCredentialType)
{
	identityCredentialType_ = identityCredentialType;
	setCoreParameter("IdentityCredentialType", identityCredentialType);
}

std::string SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::getAddress()const
{
	return address_;
}

void SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::setAddress(const std::string& address)
{
	address_ = address;
	setCoreParameter("Address", address);
}

std::string SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::getTelArea()const
{
	return telArea_;
}

void SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::setTelArea(const std::string& telArea)
{
	telArea_ = telArea;
	setCoreParameter("TelArea", telArea);
}

std::string SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::getCity()const
{
	return city_;
}

void SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::setCity(const std::string& city)
{
	city_ = city;
	setCoreParameter("City", city);
}

std::string SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::getZhAddress()const
{
	return zhAddress_;
}

void SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::setZhAddress(const std::string& zhAddress)
{
	zhAddress_ = zhAddress;
	setCoreParameter("ZhAddress", zhAddress);
}

std::string SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::getRegistrantType()const
{
	return registrantType_;
}

void SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::setRegistrantType(const std::string& registrantType)
{
	registrantType_ = registrantType;
	setCoreParameter("RegistrantType", registrantType);
}

std::vector<std::string> SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::getDomainName()const
{
	return domainName_;
}

void SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::setDomainName(const std::vector<std::string>& domainName)
{
	domainName_ = domainName;
	for(int i = 0; i!= domainName.size(); i++)
		setCoreParameter("DomainName."+ std::to_string(i), domainName.at(i));
}

std::string SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::getIdentityCredential()const
{
	return identityCredential_;
}

void SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::setIdentityCredential(const std::string& identityCredential)
{
	identityCredential_ = identityCredential;
	setCoreParameter("IdentityCredential", identityCredential);
}

std::string SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::getTelephone()const
{
	return telephone_;
}

void SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::setTelephone(const std::string& telephone)
{
	telephone_ = telephone;
	setCoreParameter("Telephone", telephone);
}

bool SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::getTransferOutProhibited()const
{
	return transferOutProhibited_;
}

void SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::setTransferOutProhibited(bool transferOutProhibited)
{
	transferOutProhibited_ = transferOutProhibited;
	setCoreParameter("TransferOutProhibited", transferOutProhibited ? "true" : "false");
}

std::string SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::getZhCity()const
{
	return zhCity_;
}

void SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::setZhCity(const std::string& zhCity)
{
	zhCity_ = zhCity;
	setCoreParameter("ZhCity", zhCity);
}

std::string SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::getZhProvince()const
{
	return zhProvince_;
}

void SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::setZhProvince(const std::string& zhProvince)
{
	zhProvince_ = zhProvince;
	setCoreParameter("ZhProvince", zhProvince);
}

std::string SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::getRegistrantOrganization()const
{
	return registrantOrganization_;
}

void SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::setRegistrantOrganization(const std::string& registrantOrganization)
{
	registrantOrganization_ = registrantOrganization;
	setCoreParameter("RegistrantOrganization", registrantOrganization);
}

std::string SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::getTelExt()const
{
	return telExt_;
}

void SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::setTelExt(const std::string& telExt)
{
	telExt_ = telExt;
	setCoreParameter("TelExt", telExt);
}

std::string SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::getProvince()const
{
	return province_;
}

void SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::setProvince(const std::string& province)
{
	province_ = province;
	setCoreParameter("Province", province);
}

std::string SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::getZhRegistrantName()const
{
	return zhRegistrantName_;
}

void SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::setZhRegistrantName(const std::string& zhRegistrantName)
{
	zhRegistrantName_ = zhRegistrantName;
	setCoreParameter("ZhRegistrantName", zhRegistrantName);
}

std::string SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::getPostalCode()const
{
	return postalCode_;
}

void SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::setPostalCode(const std::string& postalCode)
{
	postalCode_ = postalCode;
	setCoreParameter("PostalCode", postalCode);
}

std::string SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::getUserClientIp()const
{
	return userClientIp_;
}

void SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::getLang()const
{
	return lang_;
}

void SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::getIdentityCredentialNo()const
{
	return identityCredentialNo_;
}

void SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::setIdentityCredentialNo(const std::string& identityCredentialNo)
{
	identityCredentialNo_ = identityCredentialNo;
	setCoreParameter("IdentityCredentialNo", identityCredentialNo);
}

std::string SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::getEmail()const
{
	return email_;
}

void SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::setEmail(const std::string& email)
{
	email_ = email;
	setCoreParameter("Email", email);
}

std::string SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::getRegistrantName()const
{
	return registrantName_;
}

void SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::setRegistrantName(const std::string& registrantName)
{
	registrantName_ = registrantName;
	setCoreParameter("RegistrantName", registrantName);
}

std::string SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::getZhRegistrantOrganization()const
{
	return zhRegistrantOrganization_;
}

void SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest::setZhRegistrantOrganization(const std::string& zhRegistrantOrganization)
{
	zhRegistrantOrganization_ = zhRegistrantOrganization;
	setCoreParameter("ZhRegistrantOrganization", zhRegistrantOrganization);
}

