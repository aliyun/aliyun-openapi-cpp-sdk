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

#include <alibabacloud/arms/model/CreateAlertContactRequest.h>

using AlibabaCloud::ARMS::Model::CreateAlertContactRequest;

CreateAlertContactRequest::CreateAlertContactRequest() :
	RpcServiceRequest("arms", "2019-02-19", "CreateAlertContact")
{}

CreateAlertContactRequest::~CreateAlertContactRequest()
{}

std::string CreateAlertContactRequest::getContactName()const
{
	return contactName_;
}

void CreateAlertContactRequest::setContactName(const std::string& contactName)
{
	contactName_ = contactName;
	setCoreParameter("ContactName", std::to_string(contactName));
}

std::string CreateAlertContactRequest::getPhoneNum()const
{
	return phoneNum_;
}

void CreateAlertContactRequest::setPhoneNum(const std::string& phoneNum)
{
	phoneNum_ = phoneNum;
	setCoreParameter("PhoneNum", std::to_string(phoneNum));
}

std::string CreateAlertContactRequest::getDingRobotWebhookUrl()const
{
	return dingRobotWebhookUrl_;
}

void CreateAlertContactRequest::setDingRobotWebhookUrl(const std::string& dingRobotWebhookUrl)
{
	dingRobotWebhookUrl_ = dingRobotWebhookUrl;
	setCoreParameter("DingRobotWebhookUrl", std::to_string(dingRobotWebhookUrl));
}

std::string CreateAlertContactRequest::getEmail()const
{
	return email_;
}

void CreateAlertContactRequest::setEmail(const std::string& email)
{
	email_ = email;
	setCoreParameter("Email", std::to_string(email));
}

bool CreateAlertContactRequest::getSystemNoc()const
{
	return systemNoc_;
}

void CreateAlertContactRequest::setSystemNoc(bool systemNoc)
{
	systemNoc_ = systemNoc;
	setCoreParameter("SystemNoc", systemNoc ? "true" : "false");
}

