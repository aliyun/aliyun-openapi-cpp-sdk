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

#include <alibabacloud/trademark/model/SaveTradeMarkReviewMaterialDetailRequest.h>

using AlibabaCloud::Trademark::Model::SaveTradeMarkReviewMaterialDetailRequest;

SaveTradeMarkReviewMaterialDetailRequest::SaveTradeMarkReviewMaterialDetailRequest() :
	RpcServiceRequest("trademark", "2018-07-24", "SaveTradeMarkReviewMaterialDetail")
{
	setMethod(HttpRequest::Method::Post);
}

SaveTradeMarkReviewMaterialDetailRequest::~SaveTradeMarkReviewMaterialDetailRequest()
{}

std::string SaveTradeMarkReviewMaterialDetailRequest::getContactEmail()const
{
	return contactEmail_;
}

void SaveTradeMarkReviewMaterialDetailRequest::setContactEmail(const std::string& contactEmail)
{
	contactEmail_ = contactEmail;
	setBodyParameter("ContactEmail", contactEmail);
}

std::string SaveTradeMarkReviewMaterialDetailRequest::getEngName()const
{
	return engName_;
}

void SaveTradeMarkReviewMaterialDetailRequest::setEngName(const std::string& engName)
{
	engName_ = engName;
	setBodyParameter("EngName", engName);
}

std::string SaveTradeMarkReviewMaterialDetailRequest::getCountry()const
{
	return country_;
}

void SaveTradeMarkReviewMaterialDetailRequest::setCountry(const std::string& country)
{
	country_ = country;
	setBodyParameter("Country", country);
}

std::string SaveTradeMarkReviewMaterialDetailRequest::getLegalNoticeOssKey()const
{
	return legalNoticeOssKey_;
}

void SaveTradeMarkReviewMaterialDetailRequest::setLegalNoticeOssKey(const std::string& legalNoticeOssKey)
{
	legalNoticeOssKey_ = legalNoticeOssKey;
	setBodyParameter("LegalNoticeOssKey", legalNoticeOssKey);
}

std::string SaveTradeMarkReviewMaterialDetailRequest::getContactNumber()const
{
	return contactNumber_;
}

void SaveTradeMarkReviewMaterialDetailRequest::setContactNumber(const std::string& contactNumber)
{
	contactNumber_ = contactNumber;
	setBodyParameter("ContactNumber", contactNumber);
}

std::string SaveTradeMarkReviewMaterialDetailRequest::getEngAddress()const
{
	return engAddress_;
}

void SaveTradeMarkReviewMaterialDetailRequest::setEngAddress(const std::string& engAddress)
{
	engAddress_ = engAddress;
	setBodyParameter("EngAddress", engAddress);
}

int SaveTradeMarkReviewMaterialDetailRequest::getType()const
{
	return type_;
}

void SaveTradeMarkReviewMaterialDetailRequest::setType(int type)
{
	type_ = type;
	setBodyParameter("Type", std::to_string(type));
}

std::string SaveTradeMarkReviewMaterialDetailRequest::getContactName()const
{
	return contactName_;
}

void SaveTradeMarkReviewMaterialDetailRequest::setContactName(const std::string& contactName)
{
	contactName_ = contactName;
	setBodyParameter("ContactName", contactName);
}

std::string SaveTradeMarkReviewMaterialDetailRequest::getPassportOssKey()const
{
	return passportOssKey_;
}

void SaveTradeMarkReviewMaterialDetailRequest::setPassportOssKey(const std::string& passportOssKey)
{
	passportOssKey_ = passportOssKey;
	setBodyParameter("PassportOssKey", passportOssKey);
}

std::string SaveTradeMarkReviewMaterialDetailRequest::getProvince()const
{
	return province_;
}

void SaveTradeMarkReviewMaterialDetailRequest::setProvince(const std::string& province)
{
	province_ = province;
	setBodyParameter("Province", province);
}

int SaveTradeMarkReviewMaterialDetailRequest::getSubmitType()const
{
	return submitType_;
}

void SaveTradeMarkReviewMaterialDetailRequest::setSubmitType(int submitType)
{
	submitType_ = submitType;
	setBodyParameter("SubmitType", std::to_string(submitType));
}

std::string SaveTradeMarkReviewMaterialDetailRequest::getLoaOssKey()const
{
	return loaOssKey_;
}

void SaveTradeMarkReviewMaterialDetailRequest::setLoaOssKey(const std::string& loaOssKey)
{
	loaOssKey_ = loaOssKey;
	setBodyParameter("LoaOssKey", loaOssKey);
}

std::string SaveTradeMarkReviewMaterialDetailRequest::getContactAddress()const
{
	return contactAddress_;
}

void SaveTradeMarkReviewMaterialDetailRequest::setContactAddress(const std::string& contactAddress)
{
	contactAddress_ = contactAddress;
	setBodyParameter("ContactAddress", contactAddress);
}

std::string SaveTradeMarkReviewMaterialDetailRequest::getAddress()const
{
	return address_;
}

void SaveTradeMarkReviewMaterialDetailRequest::setAddress(const std::string& address)
{
	address_ = address;
	setBodyParameter("Address", address);
}

std::string SaveTradeMarkReviewMaterialDetailRequest::getIdCardOssKey()const
{
	return idCardOssKey_;
}

void SaveTradeMarkReviewMaterialDetailRequest::setIdCardOssKey(const std::string& idCardOssKey)
{
	idCardOssKey_ = idCardOssKey;
	setBodyParameter("IdCardOssKey", idCardOssKey);
}

std::string SaveTradeMarkReviewMaterialDetailRequest::getApplicationOssKey()const
{
	return applicationOssKey_;
}

void SaveTradeMarkReviewMaterialDetailRequest::setApplicationOssKey(const std::string& applicationOssKey)
{
	applicationOssKey_ = applicationOssKey;
	setBodyParameter("ApplicationOssKey", applicationOssKey);
}

std::string SaveTradeMarkReviewMaterialDetailRequest::getBusinessLicenceOssKey()const
{
	return businessLicenceOssKey_;
}

void SaveTradeMarkReviewMaterialDetailRequest::setBusinessLicenceOssKey(const std::string& businessLicenceOssKey)
{
	businessLicenceOssKey_ = businessLicenceOssKey;
	setBodyParameter("BusinessLicenceOssKey", businessLicenceOssKey);
}

std::string SaveTradeMarkReviewMaterialDetailRequest::getBizId()const
{
	return bizId_;
}

void SaveTradeMarkReviewMaterialDetailRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setBodyParameter("BizId", bizId);
}

std::string SaveTradeMarkReviewMaterialDetailRequest::getName()const
{
	return name_;
}

void SaveTradeMarkReviewMaterialDetailRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

std::string SaveTradeMarkReviewMaterialDetailRequest::getAdditionalOssKeyList()const
{
	return additionalOssKeyList_;
}

void SaveTradeMarkReviewMaterialDetailRequest::setAdditionalOssKeyList(const std::string& additionalOssKeyList)
{
	additionalOssKeyList_ = additionalOssKeyList;
	setBodyParameter("AdditionalOssKeyList", additionalOssKeyList);
}

std::string SaveTradeMarkReviewMaterialDetailRequest::getCardNumber()const
{
	return cardNumber_;
}

void SaveTradeMarkReviewMaterialDetailRequest::setCardNumber(const std::string& cardNumber)
{
	cardNumber_ = cardNumber;
	setBodyParameter("CardNumber", cardNumber);
}

int SaveTradeMarkReviewMaterialDetailRequest::getRegion()const
{
	return region_;
}

void SaveTradeMarkReviewMaterialDetailRequest::setRegion(int region)
{
	region_ = region;
	setBodyParameter("Region", std::to_string(region));
}

