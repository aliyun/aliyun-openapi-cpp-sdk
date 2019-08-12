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

#include <alibabacloud/trademark/model/InsertMaterialRequest.h>

using AlibabaCloud::Trademark::Model::InsertMaterialRequest;

InsertMaterialRequest::InsertMaterialRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "InsertMaterial")
{}

InsertMaterialRequest::~InsertMaterialRequest()
{}

std::string InsertMaterialRequest::getContactEmail()const
{
	return contactEmail_;
}

void InsertMaterialRequest::setContactEmail(const std::string& contactEmail)
{
	contactEmail_ = contactEmail;
	setCoreParameter("ContactEmail", std::to_string(contactEmail));
}

std::string InsertMaterialRequest::getContactAddress()const
{
	return contactAddress_;
}

void InsertMaterialRequest::setContactAddress(const std::string& contactAddress)
{
	contactAddress_ = contactAddress;
	setCoreParameter("ContactAddress", std::to_string(contactAddress));
}

std::string InsertMaterialRequest::getEAddress()const
{
	return eAddress_;
}

void InsertMaterialRequest::setEAddress(const std::string& eAddress)
{
	eAddress_ = eAddress;
	setCoreParameter("EAddress", std::to_string(eAddress));
}

std::string InsertMaterialRequest::getCountry()const
{
	return country_;
}

void InsertMaterialRequest::setCountry(const std::string& country)
{
	country_ = country;
	setCoreParameter("Country", std::to_string(country));
}

std::string InsertMaterialRequest::getLegalNoticeOssKey()const
{
	return legalNoticeOssKey_;
}

void InsertMaterialRequest::setLegalNoticeOssKey(const std::string& legalNoticeOssKey)
{
	legalNoticeOssKey_ = legalNoticeOssKey;
	setCoreParameter("LegalNoticeOssKey", std::to_string(legalNoticeOssKey));
}

std::string InsertMaterialRequest::getAddress()const
{
	return address_;
}

void InsertMaterialRequest::setAddress(const std::string& address)
{
	address_ = address;
	setCoreParameter("Address", std::to_string(address));
}

std::string InsertMaterialRequest::getTown()const
{
	return town_;
}

void InsertMaterialRequest::setTown(const std::string& town)
{
	town_ = town;
	setCoreParameter("Town", std::to_string(town));
}

std::string InsertMaterialRequest::getContactNumber()const
{
	return contactNumber_;
}

void InsertMaterialRequest::setContactNumber(const std::string& contactNumber)
{
	contactNumber_ = contactNumber;
	setCoreParameter("ContactNumber", std::to_string(contactNumber));
}

std::string InsertMaterialRequest::getCity()const
{
	return city_;
}

void InsertMaterialRequest::setCity(const std::string& city)
{
	city_ = city;
	setCoreParameter("City", std::to_string(city));
}

std::string InsertMaterialRequest::getIdCardOssKey()const
{
	return idCardOssKey_;
}

void InsertMaterialRequest::setIdCardOssKey(const std::string& idCardOssKey)
{
	idCardOssKey_ = idCardOssKey;
	setCoreParameter("IdCardOssKey", std::to_string(idCardOssKey));
}

int InsertMaterialRequest::getType()const
{
	return type_;
}

void InsertMaterialRequest::setType(int type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string InsertMaterialRequest::getContactName()const
{
	return contactName_;
}

void InsertMaterialRequest::setContactName(const std::string& contactName)
{
	contactName_ = contactName;
	setCoreParameter("ContactName", std::to_string(contactName));
}

std::string InsertMaterialRequest::getPassportOssKey()const
{
	return passportOssKey_;
}

void InsertMaterialRequest::setPassportOssKey(const std::string& passportOssKey)
{
	passportOssKey_ = passportOssKey;
	setCoreParameter("PassportOssKey", std::to_string(passportOssKey));
}

std::string InsertMaterialRequest::getContactZipcode()const
{
	return contactZipcode_;
}

void InsertMaterialRequest::setContactZipcode(const std::string& contactZipcode)
{
	contactZipcode_ = contactZipcode;
	setCoreParameter("ContactZipcode", std::to_string(contactZipcode));
}

std::string InsertMaterialRequest::getEName()const
{
	return eName_;
}

void InsertMaterialRequest::setEName(const std::string& eName)
{
	eName_ = eName;
	setCoreParameter("EName", std::to_string(eName));
}

std::string InsertMaterialRequest::getProvince()const
{
	return province_;
}

void InsertMaterialRequest::setProvince(const std::string& province)
{
	province_ = province;
	setCoreParameter("Province", std::to_string(province));
}

std::string InsertMaterialRequest::getBusinessLicenceOssKey()const
{
	return businessLicenceOssKey_;
}

void InsertMaterialRequest::setBusinessLicenceOssKey(const std::string& businessLicenceOssKey)
{
	businessLicenceOssKey_ = businessLicenceOssKey;
	setCoreParameter("BusinessLicenceOssKey", std::to_string(businessLicenceOssKey));
}

std::string InsertMaterialRequest::getName()const
{
	return name_;
}

void InsertMaterialRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string InsertMaterialRequest::getCardNumber()const
{
	return cardNumber_;
}

void InsertMaterialRequest::setCardNumber(const std::string& cardNumber)
{
	cardNumber_ = cardNumber;
	setCoreParameter("CardNumber", std::to_string(cardNumber));
}

int InsertMaterialRequest::getRegion()const
{
	return region_;
}

void InsertMaterialRequest::setRegion(int region)
{
	region_ = region;
	setCoreParameter("Region", region);
}

std::string InsertMaterialRequest::getLoaOssKey()const
{
	return loaOssKey_;
}

void InsertMaterialRequest::setLoaOssKey(const std::string& loaOssKey)
{
	loaOssKey_ = loaOssKey;
	setCoreParameter("LoaOssKey", std::to_string(loaOssKey));
}

