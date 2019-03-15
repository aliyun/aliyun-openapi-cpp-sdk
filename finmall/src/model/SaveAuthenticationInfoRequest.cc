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

#include <alibabacloud/finmall/model/SaveAuthenticationInfoRequest.h>

using AlibabaCloud::Finmall::Model::SaveAuthenticationInfoRequest;

SaveAuthenticationInfoRequest::SaveAuthenticationInfoRequest() :
	RpcServiceRequest("finmall", "2018-07-23", "SaveAuthenticationInfo")
{}

SaveAuthenticationInfoRequest::~SaveAuthenticationInfoRequest()
{}

std::string SaveAuthenticationInfoRequest::getIdCardNumber()const
{
	return idCardNumber_;
}

void SaveAuthenticationInfoRequest::setIdCardNumber(const std::string& idCardNumber)
{
	idCardNumber_ = idCardNumber;
	setParameter("IdCardNumber", idCardNumber);
}

std::string SaveAuthenticationInfoRequest::getAddress()const
{
	return address_;
}

void SaveAuthenticationInfoRequest::setAddress(const std::string& address)
{
	address_ = address;
	setParameter("Address", address);
}

std::string SaveAuthenticationInfoRequest::getEmployeeEmail()const
{
	return employeeEmail_;
}

void SaveAuthenticationInfoRequest::setEmployeeEmail(const std::string& employeeEmail)
{
	employeeEmail_ = employeeEmail;
	setParameter("EmployeeEmail", employeeEmail);
}

std::string SaveAuthenticationInfoRequest::getEmployeePhoneNumber()const
{
	return employeePhoneNumber_;
}

void SaveAuthenticationInfoRequest::setEmployeePhoneNumber(const std::string& employeePhoneNumber)
{
	employeePhoneNumber_ = employeePhoneNumber;
	setParameter("EmployeePhoneNumber", employeePhoneNumber);
}

std::string SaveAuthenticationInfoRequest::getPhoneNumber()const
{
	return phoneNumber_;
}

void SaveAuthenticationInfoRequest::setPhoneNumber(const std::string& phoneNumber)
{
	phoneNumber_ = phoneNumber;
	setParameter("PhoneNumber", phoneNumber);
}

std::string SaveAuthenticationInfoRequest::getBusinessLicense()const
{
	return businessLicense_;
}

void SaveAuthenticationInfoRequest::setBusinessLicense(const std::string& businessLicense)
{
	businessLicense_ = businessLicense;
	setParameter("BusinessLicense", businessLicense);
}

std::string SaveAuthenticationInfoRequest::getLegalPersonName()const
{
	return legalPersonName_;
}

void SaveAuthenticationInfoRequest::setLegalPersonName(const std::string& legalPersonName)
{
	legalPersonName_ = legalPersonName;
	setParameter("LegalPersonName", legalPersonName);
}

std::string SaveAuthenticationInfoRequest::getEnterpriseName()const
{
	return enterpriseName_;
}

void SaveAuthenticationInfoRequest::setEnterpriseName(const std::string& enterpriseName)
{
	enterpriseName_ = enterpriseName;
	setParameter("EnterpriseName", enterpriseName);
}

std::string SaveAuthenticationInfoRequest::getAuthenticateType()const
{
	return authenticateType_;
}

void SaveAuthenticationInfoRequest::setAuthenticateType(const std::string& authenticateType)
{
	authenticateType_ = authenticateType;
	setParameter("AuthenticateType", authenticateType);
}

std::string SaveAuthenticationInfoRequest::getUserId()const
{
	return userId_;
}

void SaveAuthenticationInfoRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

std::string SaveAuthenticationInfoRequest::getZhimaReturnUrl()const
{
	return zhimaReturnUrl_;
}

void SaveAuthenticationInfoRequest::setZhimaReturnUrl(const std::string& zhimaReturnUrl)
{
	zhimaReturnUrl_ = zhimaReturnUrl;
	setParameter("ZhimaReturnUrl", zhimaReturnUrl);
}

std::string SaveAuthenticationInfoRequest::getBankCard()const
{
	return bankCard_;
}

void SaveAuthenticationInfoRequest::setBankCard(const std::string& bankCard)
{
	bankCard_ = bankCard;
	setParameter("BankCard", bankCard);
}

std::string SaveAuthenticationInfoRequest::getEmail()const
{
	return email_;
}

void SaveAuthenticationInfoRequest::setEmail(const std::string& email)
{
	email_ = email;
	setParameter("Email", email);
}

std::string SaveAuthenticationInfoRequest::getEmployeeName()const
{
	return employeeName_;
}

void SaveAuthenticationInfoRequest::setEmployeeName(const std::string& employeeName)
{
	employeeName_ = employeeName;
	setParameter("EmployeeName", employeeName);
}

std::string SaveAuthenticationInfoRequest::getEmployeeIdCardNumber()const
{
	return employeeIdCardNumber_;
}

void SaveAuthenticationInfoRequest::setEmployeeIdCardNumber(const std::string& employeeIdCardNumber)
{
	employeeIdCardNumber_ = employeeIdCardNumber;
	setParameter("EmployeeIdCardNumber", employeeIdCardNumber);
}

