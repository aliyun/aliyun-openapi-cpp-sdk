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
{
	setMethod(HttpRequest::Method::Post);
}

StoreMaterialTemporarilyRequest::~StoreMaterialTemporarilyRequest()
{}

std::string StoreMaterialTemporarilyRequest::getContactEmail()const
{
	return contactEmail_;
}

void StoreMaterialTemporarilyRequest::setContactEmail(const std::string& contactEmail)
{
	contactEmail_ = contactEmail;
	setParameter("ContactEmail", contactEmail);
}

std::string StoreMaterialTemporarilyRequest::getEAddress()const
{
	return eAddress_;
}

void StoreMaterialTemporarilyRequest::setEAddress(const std::string& eAddress)
{
	eAddress_ = eAddress;
	setParameter("EAddress", eAddress);
}

std::string StoreMaterialTemporarilyRequest::getCountry()const
{
	return country_;
}

void StoreMaterialTemporarilyRequest::setCountry(const std::string& country)
{
	country_ = country;
	setParameter("Country", country);
}

std::string StoreMaterialTemporarilyRequest::getLegalNoticeOssKey()const
{
	return legalNoticeOssKey_;
}

void StoreMaterialTemporarilyRequest::setLegalNoticeOssKey(const std::string& legalNoticeOssKey)
{
	legalNoticeOssKey_ = legalNoticeOssKey;
	setParameter("LegalNoticeOssKey", legalNoticeOssKey);
}

std::string StoreMaterialTemporarilyRequest::getContactNumber()const
{
	return contactNumber_;
}

void StoreMaterialTemporarilyRequest::setContactNumber(const std::string& contactNumber)
{
	contactNumber_ = contactNumber;
	setParameter("ContactNumber", contactNumber);
}

std::string StoreMaterialTemporarilyRequest::getCity()const
{
	return city_;
}

void StoreMaterialTemporarilyRequest::setCity(const std::string& city)
{
	city_ = city;
	setParameter("City", city);
}

std::string StoreMaterialTemporarilyRequest::getType()const
{
	return type_;
}

void StoreMaterialTemporarilyRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string StoreMaterialTemporarilyRequest::getContactName()const
{
	return contactName_;
}

void StoreMaterialTemporarilyRequest::setContactName(const std::string& contactName)
{
	contactName_ = contactName;
	setParameter("ContactName", contactName);
}

std::string StoreMaterialTemporarilyRequest::getPassportOssKey()const
{
	return passportOssKey_;
}

void StoreMaterialTemporarilyRequest::setPassportOssKey(const std::string& passportOssKey)
{
	passportOssKey_ = passportOssKey;
	setParameter("PassportOssKey", passportOssKey);
}

std::string StoreMaterialTemporarilyRequest::getProvince()const
{
	return province_;
}

void StoreMaterialTemporarilyRequest::setProvince(const std::string& province)
{
	province_ = province;
	setParameter("Province", province);
}

std::string StoreMaterialTemporarilyRequest::getLoaOssKey()const
{
	return loaOssKey_;
}

void StoreMaterialTemporarilyRequest::setLoaOssKey(const std::string& loaOssKey)
{
	loaOssKey_ = loaOssKey;
	setParameter("LoaOssKey", loaOssKey);
}

std::string StoreMaterialTemporarilyRequest::getContactAddress()const
{
	return contactAddress_;
}

void StoreMaterialTemporarilyRequest::setContactAddress(const std::string& contactAddress)
{
	contactAddress_ = contactAddress;
	setParameter("ContactAddress", contactAddress);
}

std::string StoreMaterialTemporarilyRequest::getAddress()const
{
	return address_;
}

void StoreMaterialTemporarilyRequest::setAddress(const std::string& address)
{
	address_ = address;
	setParameter("Address", address);
}

std::string StoreMaterialTemporarilyRequest::getTown()const
{
	return town_;
}

void StoreMaterialTemporarilyRequest::setTown(const std::string& town)
{
	town_ = town;
	setParameter("Town", town);
}

std::string StoreMaterialTemporarilyRequest::getIdCardOssKey()const
{
	return idCardOssKey_;
}

void StoreMaterialTemporarilyRequest::setIdCardOssKey(const std::string& idCardOssKey)
{
	idCardOssKey_ = idCardOssKey;
	setParameter("IdCardOssKey", idCardOssKey);
}

std::string StoreMaterialTemporarilyRequest::getContactZipcode()const
{
	return contactZipcode_;
}

void StoreMaterialTemporarilyRequest::setContactZipcode(const std::string& contactZipcode)
{
	contactZipcode_ = contactZipcode;
	setParameter("ContactZipcode", contactZipcode);
}

std::string StoreMaterialTemporarilyRequest::getEName()const
{
	return eName_;
}

void StoreMaterialTemporarilyRequest::setEName(const std::string& eName)
{
	eName_ = eName;
	setParameter("EName", eName);
}

std::string StoreMaterialTemporarilyRequest::getBusinessLicenceOssKey()const
{
	return businessLicenceOssKey_;
}

void StoreMaterialTemporarilyRequest::setBusinessLicenceOssKey(const std::string& businessLicenceOssKey)
{
	businessLicenceOssKey_ = businessLicenceOssKey;
	setParameter("BusinessLicenceOssKey", businessLicenceOssKey);
}

std::string StoreMaterialTemporarilyRequest::getName()const
{
	return name_;
}

void StoreMaterialTemporarilyRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string StoreMaterialTemporarilyRequest::getCardNumber()const
{
	return cardNumber_;
}

void StoreMaterialTemporarilyRequest::setCardNumber(const std::string& cardNumber)
{
	cardNumber_ = cardNumber;
	setParameter("CardNumber", cardNumber);
}

std::string StoreMaterialTemporarilyRequest::getRegion()const
{
	return region_;
}

void StoreMaterialTemporarilyRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

