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
{
	setMethod(HttpRequest::Method::Post);
}

InsertMaterialRequest::~InsertMaterialRequest()
{}

std::string InsertMaterialRequest::getContactEmail()const
{
	return contactEmail_;
}

void InsertMaterialRequest::setContactEmail(const std::string& contactEmail)
{
	contactEmail_ = contactEmail;
	setParameter("ContactEmail", contactEmail);
}

std::string InsertMaterialRequest::getEAddress()const
{
	return eAddress_;
}

void InsertMaterialRequest::setEAddress(const std::string& eAddress)
{
	eAddress_ = eAddress;
	setParameter("EAddress", eAddress);
}

std::string InsertMaterialRequest::getCountry()const
{
	return country_;
}

void InsertMaterialRequest::setCountry(const std::string& country)
{
	country_ = country;
	setParameter("Country", country);
}

std::string InsertMaterialRequest::getLegalNoticeOssKey()const
{
	return legalNoticeOssKey_;
}

void InsertMaterialRequest::setLegalNoticeOssKey(const std::string& legalNoticeOssKey)
{
	legalNoticeOssKey_ = legalNoticeOssKey;
	setParameter("LegalNoticeOssKey", legalNoticeOssKey);
}

std::string InsertMaterialRequest::getContactNumber()const
{
	return contactNumber_;
}

void InsertMaterialRequest::setContactNumber(const std::string& contactNumber)
{
	contactNumber_ = contactNumber;
	setParameter("ContactNumber", contactNumber);
}

std::string InsertMaterialRequest::getCity()const
{
	return city_;
}

void InsertMaterialRequest::setCity(const std::string& city)
{
	city_ = city;
	setParameter("City", city);
}

int InsertMaterialRequest::getType()const
{
	return type_;
}

void InsertMaterialRequest::setType(int type)
{
	type_ = type;
	setParameter("Type", std::to_string(type));
}

std::string InsertMaterialRequest::getContactName()const
{
	return contactName_;
}

void InsertMaterialRequest::setContactName(const std::string& contactName)
{
	contactName_ = contactName;
	setParameter("ContactName", contactName);
}

std::string InsertMaterialRequest::getPassportOssKey()const
{
	return passportOssKey_;
}

void InsertMaterialRequest::setPassportOssKey(const std::string& passportOssKey)
{
	passportOssKey_ = passportOssKey;
	setParameter("PassportOssKey", passportOssKey);
}

std::string InsertMaterialRequest::getProvince()const
{
	return province_;
}

void InsertMaterialRequest::setProvince(const std::string& province)
{
	province_ = province;
	setParameter("Province", province);
}

std::string InsertMaterialRequest::getLoaOssKey()const
{
	return loaOssKey_;
}

void InsertMaterialRequest::setLoaOssKey(const std::string& loaOssKey)
{
	loaOssKey_ = loaOssKey;
	setParameter("LoaOssKey", loaOssKey);
}

std::string InsertMaterialRequest::getContactAddress()const
{
	return contactAddress_;
}

void InsertMaterialRequest::setContactAddress(const std::string& contactAddress)
{
	contactAddress_ = contactAddress;
	setParameter("ContactAddress", contactAddress);
}

std::string InsertMaterialRequest::getAddress()const
{
	return address_;
}

void InsertMaterialRequest::setAddress(const std::string& address)
{
	address_ = address;
	setParameter("Address", address);
}

std::string InsertMaterialRequest::getTown()const
{
	return town_;
}

void InsertMaterialRequest::setTown(const std::string& town)
{
	town_ = town;
	setParameter("Town", town);
}

std::string InsertMaterialRequest::getIdCardOssKey()const
{
	return idCardOssKey_;
}

void InsertMaterialRequest::setIdCardOssKey(const std::string& idCardOssKey)
{
	idCardOssKey_ = idCardOssKey;
	setParameter("IdCardOssKey", idCardOssKey);
}

std::string InsertMaterialRequest::getContactZipcode()const
{
	return contactZipcode_;
}

void InsertMaterialRequest::setContactZipcode(const std::string& contactZipcode)
{
	contactZipcode_ = contactZipcode;
	setParameter("ContactZipcode", contactZipcode);
}

std::string InsertMaterialRequest::getEName()const
{
	return eName_;
}

void InsertMaterialRequest::setEName(const std::string& eName)
{
	eName_ = eName;
	setParameter("EName", eName);
}

std::string InsertMaterialRequest::getBusinessLicenceOssKey()const
{
	return businessLicenceOssKey_;
}

void InsertMaterialRequest::setBusinessLicenceOssKey(const std::string& businessLicenceOssKey)
{
	businessLicenceOssKey_ = businessLicenceOssKey;
	setParameter("BusinessLicenceOssKey", businessLicenceOssKey);
}

std::string InsertMaterialRequest::getName()const
{
	return name_;
}

void InsertMaterialRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string InsertMaterialRequest::getCardNumber()const
{
	return cardNumber_;
}

void InsertMaterialRequest::setCardNumber(const std::string& cardNumber)
{
	cardNumber_ = cardNumber;
	setParameter("CardNumber", cardNumber);
}

int InsertMaterialRequest::getRegion()const
{
	return region_;
}

void InsertMaterialRequest::setRegion(int region)
{
	region_ = region;
	setParameter("Region", std::to_string(region));
}

