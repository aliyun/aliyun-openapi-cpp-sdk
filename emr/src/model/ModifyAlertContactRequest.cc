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

#include <alibabacloud/emr/model/ModifyAlertContactRequest.h>

using AlibabaCloud::Emr::Model::ModifyAlertContactRequest;

ModifyAlertContactRequest::ModifyAlertContactRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ModifyAlertContact")
{}

ModifyAlertContactRequest::~ModifyAlertContactRequest()
{}

std::string ModifyAlertContactRequest::getEmailVerificationCode()const
{
	return emailVerificationCode_;
}

void ModifyAlertContactRequest::setEmailVerificationCode(const std::string& emailVerificationCode)
{
	emailVerificationCode_ = emailVerificationCode;
	setCoreParameter("EmailVerificationCode", std::to_string(emailVerificationCode));
}

long ModifyAlertContactRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyAlertContactRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyAlertContactRequest::getRegionId()const
{
	return regionId_;
}

void ModifyAlertContactRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ModifyAlertContactRequest::getPhoneNumberVerificationCode()const
{
	return phoneNumberVerificationCode_;
}

void ModifyAlertContactRequest::setPhoneNumberVerificationCode(const std::string& phoneNumberVerificationCode)
{
	phoneNumberVerificationCode_ = phoneNumberVerificationCode;
	setCoreParameter("PhoneNumberVerificationCode", std::to_string(phoneNumberVerificationCode));
}

std::string ModifyAlertContactRequest::getBizId()const
{
	return bizId_;
}

void ModifyAlertContactRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setCoreParameter("BizId", std::to_string(bizId));
}

std::string ModifyAlertContactRequest::getName()const
{
	return name_;
}

void ModifyAlertContactRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string ModifyAlertContactRequest::getPhoneNumber()const
{
	return phoneNumber_;
}

void ModifyAlertContactRequest::setPhoneNumber(const std::string& phoneNumber)
{
	phoneNumber_ = phoneNumber;
	setCoreParameter("PhoneNumber", std::to_string(phoneNumber));
}

std::string ModifyAlertContactRequest::getEmail()const
{
	return email_;
}

void ModifyAlertContactRequest::setEmail(const std::string& email)
{
	email_ = email;
	setCoreParameter("Email", std::to_string(email));
}

std::string ModifyAlertContactRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyAlertContactRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

