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

#include <alibabacloud/finmall/model/UpdateAuthenticationInfoRequest.h>

using AlibabaCloud::Finmall::Model::UpdateAuthenticationInfoRequest;

UpdateAuthenticationInfoRequest::UpdateAuthenticationInfoRequest() :
	RpcServiceRequest("finmall", "2018-07-23", "UpdateAuthenticationInfo")
{}

UpdateAuthenticationInfoRequest::~UpdateAuthenticationInfoRequest()
{}

std::string UpdateAuthenticationInfoRequest::getIdCardNumber()const
{
	return idCardNumber_;
}

void UpdateAuthenticationInfoRequest::setIdCardNumber(const std::string& idCardNumber)
{
	idCardNumber_ = idCardNumber;
	setParameter("IdCardNumber", idCardNumber);
}

std::string UpdateAuthenticationInfoRequest::getAddress()const
{
	return address_;
}

void UpdateAuthenticationInfoRequest::setAddress(const std::string& address)
{
	address_ = address;
	setParameter("Address", address);
}

std::string UpdateAuthenticationInfoRequest::getEmployeeEmail()const
{
	return employeeEmail_;
}

void UpdateAuthenticationInfoRequest::setEmployeeEmail(const std::string& employeeEmail)
{
	employeeEmail_ = employeeEmail;
	setParameter("EmployeeEmail", employeeEmail);
}

std::string UpdateAuthenticationInfoRequest::getEmployeePhoneNumber()const
{
	return employeePhoneNumber_;
}

void UpdateAuthenticationInfoRequest::setEmployeePhoneNumber(const std::string& employeePhoneNumber)
{
	employeePhoneNumber_ = employeePhoneNumber;
	setParameter("EmployeePhoneNumber", employeePhoneNumber);
}

std::string UpdateAuthenticationInfoRequest::getPhoneNumber()const
{
	return phoneNumber_;
}

void UpdateAuthenticationInfoRequest::setPhoneNumber(const std::string& phoneNumber)
{
	phoneNumber_ = phoneNumber;
	setParameter("PhoneNumber", phoneNumber);
}

std::string UpdateAuthenticationInfoRequest::getBusinessLicense()const
{
	return businessLicense_;
}

void UpdateAuthenticationInfoRequest::setBusinessLicense(const std::string& businessLicense)
{
	businessLicense_ = businessLicense;
	setParameter("BusinessLicense", businessLicense);
}

std::string UpdateAuthenticationInfoRequest::getLegalPersonName()const
{
	return legalPersonName_;
}

void UpdateAuthenticationInfoRequest::setLegalPersonName(const std::string& legalPersonName)
{
	legalPersonName_ = legalPersonName;
	setParameter("LegalPersonName", legalPersonName);
}

std::string UpdateAuthenticationInfoRequest::getUserId()const
{
	return userId_;
}

void UpdateAuthenticationInfoRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

std::string UpdateAuthenticationInfoRequest::getSmsIvToken()const
{
	return smsIvToken_;
}

void UpdateAuthenticationInfoRequest::setSmsIvToken(const std::string& smsIvToken)
{
	smsIvToken_ = smsIvToken;
	setParameter("SmsIvToken", smsIvToken);
}

std::string UpdateAuthenticationInfoRequest::getBankCard()const
{
	return bankCard_;
}

void UpdateAuthenticationInfoRequest::setBankCard(const std::string& bankCard)
{
	bankCard_ = bankCard;
	setParameter("BankCard", bankCard);
}

std::string UpdateAuthenticationInfoRequest::getEmail()const
{
	return email_;
}

void UpdateAuthenticationInfoRequest::setEmail(const std::string& email)
{
	email_ = email;
	setParameter("Email", email);
}

std::string UpdateAuthenticationInfoRequest::getEmployeeName()const
{
	return employeeName_;
}

void UpdateAuthenticationInfoRequest::setEmployeeName(const std::string& employeeName)
{
	employeeName_ = employeeName;
	setParameter("EmployeeName", employeeName);
}

std::string UpdateAuthenticationInfoRequest::getEmployeeIdCardNumber()const
{
	return employeeIdCardNumber_;
}

void UpdateAuthenticationInfoRequest::setEmployeeIdCardNumber(const std::string& employeeIdCardNumber)
{
	employeeIdCardNumber_ = employeeIdCardNumber;
	setParameter("EmployeeIdCardNumber", employeeIdCardNumber);
}

