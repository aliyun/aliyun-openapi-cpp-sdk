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

#include <alibabacloud/finmall/model/UpdateEnterpriseCustomInfoRequest.h>

using AlibabaCloud::Finmall::Model::UpdateEnterpriseCustomInfoRequest;

UpdateEnterpriseCustomInfoRequest::UpdateEnterpriseCustomInfoRequest() :
	RpcServiceRequest("finmall", "2018-07-23", "UpdateEnterpriseCustomInfo")
{}

UpdateEnterpriseCustomInfoRequest::~UpdateEnterpriseCustomInfoRequest()
{}

std::string UpdateEnterpriseCustomInfoRequest::getIdCardNumber()const
{
	return idCardNumber_;
}

void UpdateEnterpriseCustomInfoRequest::setIdCardNumber(const std::string& idCardNumber)
{
	idCardNumber_ = idCardNumber;
	setParameter("IdCardNumber", idCardNumber);
}

std::string UpdateEnterpriseCustomInfoRequest::getAddress()const
{
	return address_;
}

void UpdateEnterpriseCustomInfoRequest::setAddress(const std::string& address)
{
	address_ = address;
	setParameter("Address", address);
}

std::string UpdateEnterpriseCustomInfoRequest::getIdCardFrontPage()const
{
	return idCardFrontPage_;
}

void UpdateEnterpriseCustomInfoRequest::setIdCardFrontPage(const std::string& idCardFrontPage)
{
	idCardFrontPage_ = idCardFrontPage;
	setParameter("IdCardFrontPage", idCardFrontPage);
}

std::string UpdateEnterpriseCustomInfoRequest::getPhoneNumber()const
{
	return phoneNumber_;
}

void UpdateEnterpriseCustomInfoRequest::setPhoneNumber(const std::string& phoneNumber)
{
	phoneNumber_ = phoneNumber;
	setParameter("PhoneNumber", phoneNumber);
}

std::string UpdateEnterpriseCustomInfoRequest::getBusinessLicense()const
{
	return businessLicense_;
}

void UpdateEnterpriseCustomInfoRequest::setBusinessLicense(const std::string& businessLicense)
{
	businessLicense_ = businessLicense;
	setParameter("BusinessLicense", businessLicense);
}

std::string UpdateEnterpriseCustomInfoRequest::getIdCardBackPage()const
{
	return idCardBackPage_;
}

void UpdateEnterpriseCustomInfoRequest::setIdCardBackPage(const std::string& idCardBackPage)
{
	idCardBackPage_ = idCardBackPage;
	setParameter("IdCardBackPage", idCardBackPage);
}

std::string UpdateEnterpriseCustomInfoRequest::getLegalPersonName()const
{
	return legalPersonName_;
}

void UpdateEnterpriseCustomInfoRequest::setLegalPersonName(const std::string& legalPersonName)
{
	legalPersonName_ = legalPersonName;
	setParameter("LegalPersonName", legalPersonName);
}

std::string UpdateEnterpriseCustomInfoRequest::getEnterpriseName()const
{
	return enterpriseName_;
}

void UpdateEnterpriseCustomInfoRequest::setEnterpriseName(const std::string& enterpriseName)
{
	enterpriseName_ = enterpriseName;
	setParameter("EnterpriseName", enterpriseName);
}

std::string UpdateEnterpriseCustomInfoRequest::getUserId()const
{
	return userId_;
}

void UpdateEnterpriseCustomInfoRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

std::string UpdateEnterpriseCustomInfoRequest::getLoanSubject()const
{
	return loanSubject_;
}

void UpdateEnterpriseCustomInfoRequest::setLoanSubject(const std::string& loanSubject)
{
	loanSubject_ = loanSubject;
	setParameter("LoanSubject", loanSubject);
}

std::string UpdateEnterpriseCustomInfoRequest::getZhimaReturnUrl()const
{
	return zhimaReturnUrl_;
}

void UpdateEnterpriseCustomInfoRequest::setZhimaReturnUrl(const std::string& zhimaReturnUrl)
{
	zhimaReturnUrl_ = zhimaReturnUrl;
	setParameter("ZhimaReturnUrl", zhimaReturnUrl);
}

std::string UpdateEnterpriseCustomInfoRequest::getSmsIvToken()const
{
	return smsIvToken_;
}

void UpdateEnterpriseCustomInfoRequest::setSmsIvToken(const std::string& smsIvToken)
{
	smsIvToken_ = smsIvToken;
	setParameter("SmsIvToken", smsIvToken);
}

std::string UpdateEnterpriseCustomInfoRequest::getBankCard()const
{
	return bankCard_;
}

void UpdateEnterpriseCustomInfoRequest::setBankCard(const std::string& bankCard)
{
	bankCard_ = bankCard;
	setParameter("BankCard", bankCard);
}

std::string UpdateEnterpriseCustomInfoRequest::getEmail()const
{
	return email_;
}

void UpdateEnterpriseCustomInfoRequest::setEmail(const std::string& email)
{
	email_ = email;
	setParameter("Email", email);
}

