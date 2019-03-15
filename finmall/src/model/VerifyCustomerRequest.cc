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

#include <alibabacloud/finmall/model/VerifyCustomerRequest.h>

using AlibabaCloud::Finmall::Model::VerifyCustomerRequest;

VerifyCustomerRequest::VerifyCustomerRequest() :
	RpcServiceRequest("finmall", "2018-07-23", "VerifyCustomer")
{}

VerifyCustomerRequest::~VerifyCustomerRequest()
{}

std::string VerifyCustomerRequest::getIdCardNumber()const
{
	return idCardNumber_;
}

void VerifyCustomerRequest::setIdCardNumber(const std::string& idCardNumber)
{
	idCardNumber_ = idCardNumber;
	setParameter("IdCardNumber", idCardNumber);
}

std::string VerifyCustomerRequest::getAddress()const
{
	return address_;
}

void VerifyCustomerRequest::setAddress(const std::string& address)
{
	address_ = address;
	setParameter("Address", address);
}

std::string VerifyCustomerRequest::getIdCardFrontPage()const
{
	return idCardFrontPage_;
}

void VerifyCustomerRequest::setIdCardFrontPage(const std::string& idCardFrontPage)
{
	idCardFrontPage_ = idCardFrontPage;
	setParameter("IdCardFrontPage", idCardFrontPage);
}

std::string VerifyCustomerRequest::getPhoneNumber()const
{
	return phoneNumber_;
}

void VerifyCustomerRequest::setPhoneNumber(const std::string& phoneNumber)
{
	phoneNumber_ = phoneNumber;
	setParameter("PhoneNumber", phoneNumber);
}

std::string VerifyCustomerRequest::getBusinessLicense()const
{
	return businessLicense_;
}

void VerifyCustomerRequest::setBusinessLicense(const std::string& businessLicense)
{
	businessLicense_ = businessLicense;
	setParameter("BusinessLicense", businessLicense);
}

std::string VerifyCustomerRequest::getIdCardBackPage()const
{
	return idCardBackPage_;
}

void VerifyCustomerRequest::setIdCardBackPage(const std::string& idCardBackPage)
{
	idCardBackPage_ = idCardBackPage;
	setParameter("IdCardBackPage", idCardBackPage);
}

std::string VerifyCustomerRequest::getLegalPersonName()const
{
	return legalPersonName_;
}

void VerifyCustomerRequest::setLegalPersonName(const std::string& legalPersonName)
{
	legalPersonName_ = legalPersonName;
	setParameter("LegalPersonName", legalPersonName);
}

std::string VerifyCustomerRequest::getEnterpriseName()const
{
	return enterpriseName_;
}

void VerifyCustomerRequest::setEnterpriseName(const std::string& enterpriseName)
{
	enterpriseName_ = enterpriseName;
	setParameter("EnterpriseName", enterpriseName);
}

std::string VerifyCustomerRequest::getUserId()const
{
	return userId_;
}

void VerifyCustomerRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

std::string VerifyCustomerRequest::getLoanSubject()const
{
	return loanSubject_;
}

void VerifyCustomerRequest::setLoanSubject(const std::string& loanSubject)
{
	loanSubject_ = loanSubject;
	setParameter("LoanSubject", loanSubject);
}

std::string VerifyCustomerRequest::getZhimaReturnUrl()const
{
	return zhimaReturnUrl_;
}

void VerifyCustomerRequest::setZhimaReturnUrl(const std::string& zhimaReturnUrl)
{
	zhimaReturnUrl_ = zhimaReturnUrl;
	setParameter("ZhimaReturnUrl", zhimaReturnUrl);
}

std::string VerifyCustomerRequest::getBankCard()const
{
	return bankCard_;
}

void VerifyCustomerRequest::setBankCard(const std::string& bankCard)
{
	bankCard_ = bankCard;
	setParameter("BankCard", bankCard);
}

std::string VerifyCustomerRequest::getEmail()const
{
	return email_;
}

void VerifyCustomerRequest::setEmail(const std::string& email)
{
	email_ = email;
	setParameter("Email", email);
}

