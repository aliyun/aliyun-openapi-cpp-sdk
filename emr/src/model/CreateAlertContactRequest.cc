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

#include <alibabacloud/emr/model/CreateAlertContactRequest.h>

using AlibabaCloud::Emr::Model::CreateAlertContactRequest;

CreateAlertContactRequest::CreateAlertContactRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateAlertContact")
{}

CreateAlertContactRequest::~CreateAlertContactRequest()
{}

std::string CreateAlertContactRequest::getEmailVerificationCode()const
{
	return emailVerificationCode_;
}

void CreateAlertContactRequest::setEmailVerificationCode(const std::string& emailVerificationCode)
{
	emailVerificationCode_ = emailVerificationCode;
	setParameter("EmailVerificationCode", emailVerificationCode);
}

long CreateAlertContactRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateAlertContactRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateAlertContactRequest::getRegionId()const
{
	return regionId_;
}

void CreateAlertContactRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateAlertContactRequest::getPhoneNumberVerificationCode()const
{
	return phoneNumberVerificationCode_;
}

void CreateAlertContactRequest::setPhoneNumberVerificationCode(const std::string& phoneNumberVerificationCode)
{
	phoneNumberVerificationCode_ = phoneNumberVerificationCode;
	setParameter("PhoneNumberVerificationCode", phoneNumberVerificationCode);
}

std::string CreateAlertContactRequest::getName()const
{
	return name_;
}

void CreateAlertContactRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateAlertContactRequest::getPhoneNumber()const
{
	return phoneNumber_;
}

void CreateAlertContactRequest::setPhoneNumber(const std::string& phoneNumber)
{
	phoneNumber_ = phoneNumber;
	setParameter("PhoneNumber", phoneNumber);
}

std::string CreateAlertContactRequest::getEmail()const
{
	return email_;
}

void CreateAlertContactRequest::setEmail(const std::string& email)
{
	email_ = email;
	setParameter("Email", email);
}

std::string CreateAlertContactRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateAlertContactRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

