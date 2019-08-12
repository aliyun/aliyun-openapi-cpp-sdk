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

#include <alibabacloud/trademark/model/UpdateMaterialRequest.h>

using AlibabaCloud::Trademark::Model::UpdateMaterialRequest;

UpdateMaterialRequest::UpdateMaterialRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "UpdateMaterial")
{}

UpdateMaterialRequest::~UpdateMaterialRequest()
{}

std::string UpdateMaterialRequest::getContactEmail()const
{
	return contactEmail_;
}

void UpdateMaterialRequest::setContactEmail(const std::string& contactEmail)
{
	contactEmail_ = contactEmail;
	setCoreParameter("ContactEmail", std::to_string(contactEmail));
}

std::string UpdateMaterialRequest::getContactAddress()const
{
	return contactAddress_;
}

void UpdateMaterialRequest::setContactAddress(const std::string& contactAddress)
{
	contactAddress_ = contactAddress;
	setCoreParameter("ContactAddress", std::to_string(contactAddress));
}

std::string UpdateMaterialRequest::getEAddress()const
{
	return eAddress_;
}

void UpdateMaterialRequest::setEAddress(const std::string& eAddress)
{
	eAddress_ = eAddress;
	setCoreParameter("EAddress", std::to_string(eAddress));
}

std::string UpdateMaterialRequest::getLegalNoticeOssKey()const
{
	return legalNoticeOssKey_;
}

void UpdateMaterialRequest::setLegalNoticeOssKey(const std::string& legalNoticeOssKey)
{
	legalNoticeOssKey_ = legalNoticeOssKey;
	setCoreParameter("LegalNoticeOssKey", std::to_string(legalNoticeOssKey));
}

std::string UpdateMaterialRequest::getAddress()const
{
	return address_;
}

void UpdateMaterialRequest::setAddress(const std::string& address)
{
	address_ = address;
	setCoreParameter("Address", std::to_string(address));
}

std::string UpdateMaterialRequest::getTown()const
{
	return town_;
}

void UpdateMaterialRequest::setTown(const std::string& town)
{
	town_ = town;
	setCoreParameter("Town", std::to_string(town));
}

std::string UpdateMaterialRequest::getContactNumber()const
{
	return contactNumber_;
}

void UpdateMaterialRequest::setContactNumber(const std::string& contactNumber)
{
	contactNumber_ = contactNumber;
	setCoreParameter("ContactNumber", std::to_string(contactNumber));
}

std::string UpdateMaterialRequest::getCity()const
{
	return city_;
}

void UpdateMaterialRequest::setCity(const std::string& city)
{
	city_ = city;
	setCoreParameter("City", std::to_string(city));
}

std::string UpdateMaterialRequest::getIdCardOssKey()const
{
	return idCardOssKey_;
}

void UpdateMaterialRequest::setIdCardOssKey(const std::string& idCardOssKey)
{
	idCardOssKey_ = idCardOssKey;
	setCoreParameter("IdCardOssKey", std::to_string(idCardOssKey));
}

std::string UpdateMaterialRequest::getContactName()const
{
	return contactName_;
}

void UpdateMaterialRequest::setContactName(const std::string& contactName)
{
	contactName_ = contactName;
	setCoreParameter("ContactName", std::to_string(contactName));
}

std::string UpdateMaterialRequest::getPassportOssKey()const
{
	return passportOssKey_;
}

void UpdateMaterialRequest::setPassportOssKey(const std::string& passportOssKey)
{
	passportOssKey_ = passportOssKey;
	setCoreParameter("PassportOssKey", std::to_string(passportOssKey));
}

std::string UpdateMaterialRequest::getContactZipcode()const
{
	return contactZipcode_;
}

void UpdateMaterialRequest::setContactZipcode(const std::string& contactZipcode)
{
	contactZipcode_ = contactZipcode;
	setCoreParameter("ContactZipcode", std::to_string(contactZipcode));
}

std::string UpdateMaterialRequest::getEName()const
{
	return eName_;
}

void UpdateMaterialRequest::setEName(const std::string& eName)
{
	eName_ = eName;
	setCoreParameter("EName", std::to_string(eName));
}

std::string UpdateMaterialRequest::getProvince()const
{
	return province_;
}

void UpdateMaterialRequest::setProvince(const std::string& province)
{
	province_ = province;
	setCoreParameter("Province", std::to_string(province));
}

std::string UpdateMaterialRequest::getBusinessLicenceOssKey()const
{
	return businessLicenceOssKey_;
}

void UpdateMaterialRequest::setBusinessLicenceOssKey(const std::string& businessLicenceOssKey)
{
	businessLicenceOssKey_ = businessLicenceOssKey;
	setCoreParameter("BusinessLicenceOssKey", std::to_string(businessLicenceOssKey));
}

std::string UpdateMaterialRequest::getName()const
{
	return name_;
}

void UpdateMaterialRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

long UpdateMaterialRequest::getId()const
{
	return id_;
}

void UpdateMaterialRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", id);
}

std::string UpdateMaterialRequest::getCardNumber()const
{
	return cardNumber_;
}

void UpdateMaterialRequest::setCardNumber(const std::string& cardNumber)
{
	cardNumber_ = cardNumber;
	setCoreParameter("CardNumber", std::to_string(cardNumber));
}

long UpdateMaterialRequest::getLoaId()const
{
	return loaId_;
}

void UpdateMaterialRequest::setLoaId(long loaId)
{
	loaId_ = loaId;
	setCoreParameter("LoaId", loaId);
}

std::string UpdateMaterialRequest::getLoaOssKey()const
{
	return loaOssKey_;
}

void UpdateMaterialRequest::setLoaOssKey(const std::string& loaOssKey)
{
	loaOssKey_ = loaOssKey;
	setCoreParameter("LoaOssKey", std::to_string(loaOssKey));
}

