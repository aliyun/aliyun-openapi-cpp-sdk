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

#include <alibabacloud/companyreg/model/UploadIcpBasicMaterialRequest.h>

using AlibabaCloud::Companyreg::Model::UploadIcpBasicMaterialRequest;

UploadIcpBasicMaterialRequest::UploadIcpBasicMaterialRequest() :
	RpcServiceRequest("companyreg", "2019-05-08", "UploadIcpBasicMaterial")
{
	setMethod(HttpRequest::Method::Post);
}

UploadIcpBasicMaterialRequest::~UploadIcpBasicMaterialRequest()
{}

std::string UploadIcpBasicMaterialRequest::getSocialCreditCode()const
{
	return socialCreditCode_;
}

void UploadIcpBasicMaterialRequest::setSocialCreditCode(const std::string& socialCreditCode)
{
	socialCreditCode_ = socialCreditCode;
	setParameter("SocialCreditCode", socialCreditCode);
}

std::string UploadIcpBasicMaterialRequest::getBusinessLicense()const
{
	return businessLicense_;
}

void UploadIcpBasicMaterialRequest::setBusinessLicense(const std::string& businessLicense)
{
	businessLicense_ = businessLicense;
	setParameter("BusinessLicense", businessLicense);
}

std::string UploadIcpBasicMaterialRequest::getCorporateIdCard()const
{
	return corporateIdCard_;
}

void UploadIcpBasicMaterialRequest::setCorporateIdCard(const std::string& corporateIdCard)
{
	corporateIdCard_ = corporateIdCard;
	setParameter("CorporateIdCard", corporateIdCard);
}

std::string UploadIcpBasicMaterialRequest::getIdCardList()const
{
	return idCardList_;
}

void UploadIcpBasicMaterialRequest::setIdCardList(const std::string& idCardList)
{
	idCardList_ = idCardList;
	setParameter("IdCardList", idCardList);
}

std::string UploadIcpBasicMaterialRequest::getCompanyAddress()const
{
	return companyAddress_;
}

void UploadIcpBasicMaterialRequest::setCompanyAddress(const std::string& companyAddress)
{
	companyAddress_ = companyAddress;
	setParameter("CompanyAddress", companyAddress);
}

std::string UploadIcpBasicMaterialRequest::getCompanyName()const
{
	return companyName_;
}

void UploadIcpBasicMaterialRequest::setCompanyName(const std::string& companyName)
{
	companyName_ = companyName;
	setParameter("CompanyName", companyName);
}

std::string UploadIcpBasicMaterialRequest::getBizId()const
{
	return bizId_;
}

void UploadIcpBasicMaterialRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

std::string UploadIcpBasicMaterialRequest::getCorporateName()const
{
	return corporateName_;
}

void UploadIcpBasicMaterialRequest::setCorporateName(const std::string& corporateName)
{
	corporateName_ = corporateName;
	setParameter("CorporateName", corporateName);
}

