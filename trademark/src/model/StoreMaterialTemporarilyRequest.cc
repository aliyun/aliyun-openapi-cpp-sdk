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

#include <alibabacloud/trademark/model/StoreMaterialTemporarilyRequest.h>

using AlibabaCloud::Trademark::Model::StoreMaterialTemporarilyRequest;

StoreMaterialTemporarilyRequest::StoreMaterialTemporarilyRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "StoreMaterialTemporarily")
{}

StoreMaterialTemporarilyRequest::~StoreMaterialTemporarilyRequest()
{}

std::string StoreMaterialTemporarilyRequest::getContactEmail()const
{
	return contactEmail_;
}

void StoreMaterialTemporarilyRequest::setContactEmail(const std::string& contactEmail)
{
	contactEmail_ = contactEmail;
	setCoreParameter("ContactEmail", contactEmail);
}

std::string StoreMaterialTemporarilyRequest::getEAddress()const
{
	return eAddress_;
}

void StoreMaterialTemporarilyRequest::setEAddress(const std::string& eAddress)
{
	eAddress_ = eAddress;
	setCoreParameter("EAddress", eAddress);
}

std::string StoreMaterialTemporarilyRequest::getCountry()const
{
	return country_;
}

void StoreMaterialTemporarilyRequest::setCountry(const std::string& country)
{
	country_ = country;
	setCoreParameter("Country", country);
}

std::string StoreMaterialTemporarilyRequest::getLegalNoticeOssKey()const
{
	return legalNoticeOssKey_;
}

void StoreMaterialTemporarilyRequest::setLegalNoticeOssKey(const std::string& legalNoticeOssKey)
{
	legalNoticeOssKey_ = legalNoticeOssKey;
	setCoreParameter("LegalNoticeOssKey", legalNoticeOssKey);
}

std::string StoreMaterialTemporarilyRequest::getContactNumber()const
{
	return contactNumber_;
}

void StoreMaterialTemporarilyRequest::setContactNumber(const std::string& contactNumber)
{
	contactNumber_ = contactNumber;
	setCoreParameter("ContactNumber", contactNumber);
}

std::string StoreMaterialTemporarilyRequest::getCity()const
{
	return city_;
}

void StoreMaterialTemporarilyRequest::setCity(const std::string& city)
{
	city_ = city;
	setCoreParameter("City", city);
}

std::string StoreMaterialTemporarilyRequest::getType()const
{
	return type_;
}

void StoreMaterialTemporarilyRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string StoreMaterialTemporarilyRequest::getContactName()const
{
	return contactName_;
}

void StoreMaterialTemporarilyRequest::setContactName(const std::string& contactName)
{
	contactName_ = contactName;
	setCoreParameter("ContactName", contactName);
}

std::string StoreMaterialTemporarilyRequest::getPassportOssKey()const
{
	return passportOssKey_;
}

void StoreMaterialTemporarilyRequest::setPassportOssKey(const std::string& passportOssKey)
{
	passportOssKey_ = passportOssKey;
	setCoreParameter("PassportOssKey", passportOssKey);
}

std::string StoreMaterialTemporarilyRequest::getProvince()const
{
	return province_;
}

void StoreMaterialTemporarilyRequest::setProvince(const std::string& province)
{
	province_ = province;
	setCoreParameter("Province", province);
}

std::string StoreMaterialTemporarilyRequest::getLoaOssKey()const
{
	return loaOssKey_;
}

void StoreMaterialTemporarilyRequest::setLoaOssKey(const std::string& loaOssKey)
{
	loaOssKey_ = loaOssKey;
	setCoreParameter("LoaOssKey", loaOssKey);
}

std::string StoreMaterialTemporarilyRequest::getContactAddress()const
{
	return contactAddress_;
}

void StoreMaterialTemporarilyRequest::setContactAddress(const std::string& contactAddress)
{
	contactAddress_ = contactAddress;
	setCoreParameter("ContactAddress", contactAddress);
}

std::string StoreMaterialTemporarilyRequest::getAddress()const
{
	return address_;
}

void StoreMaterialTemporarilyRequest::setAddress(const std::string& address)
{
	address_ = address;
	setCoreParameter("Address", address);
}

std::string StoreMaterialTemporarilyRequest::getTown()const
{
	return town_;
}

void StoreMaterialTemporarilyRequest::setTown(const std::string& town)
{
	town_ = town;
	setCoreParameter("Town", town);
}

std::string StoreMaterialTemporarilyRequest::getIdCardOssKey()const
{
	return idCardOssKey_;
}

void StoreMaterialTemporarilyRequest::setIdCardOssKey(const std::string& idCardOssKey)
{
	idCardOssKey_ = idCardOssKey;
	setCoreParameter("IdCardOssKey", idCardOssKey);
}

std::string StoreMaterialTemporarilyRequest::getContactZipcode()const
{
	return contactZipcode_;
}

void StoreMaterialTemporarilyRequest::setContactZipcode(const std::string& contactZipcode)
{
	contactZipcode_ = contactZipcode;
	setCoreParameter("ContactZipcode", contactZipcode);
}

std::string StoreMaterialTemporarilyRequest::getEName()const
{
	return eName_;
}

void StoreMaterialTemporarilyRequest::setEName(const std::string& eName)
{
	eName_ = eName;
	setCoreParameter("EName", eName);
}

std::string StoreMaterialTemporarilyRequest::getBusinessLicenceOssKey()const
{
	return businessLicenceOssKey_;
}

void StoreMaterialTemporarilyRequest::setBusinessLicenceOssKey(const std::string& businessLicenceOssKey)
{
	businessLicenceOssKey_ = businessLicenceOssKey;
	setCoreParameter("BusinessLicenceOssKey", businessLicenceOssKey);
}

std::string StoreMaterialTemporarilyRequest::getName()const
{
	return name_;
}

void StoreMaterialTemporarilyRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string StoreMaterialTemporarilyRequest::getCardNumber()const
{
	return cardNumber_;
}

void StoreMaterialTemporarilyRequest::setCardNumber(const std::string& cardNumber)
{
	cardNumber_ = cardNumber;
	setCoreParameter("CardNumber", cardNumber);
}

std::string StoreMaterialTemporarilyRequest::getRegion()const
{
	return region_;
}

void StoreMaterialTemporarilyRequest::setRegion(const std::string& region)
{
	region_ = region;
	setCoreParameter("Region", region);
}

