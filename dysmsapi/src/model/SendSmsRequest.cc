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

#include <alibabacloud/dysmsapi/model/SendSmsRequest.h>

using AlibabaCloud::Dysmsapi::Model::SendSmsRequest;

SendSmsRequest::SendSmsRequest() :
	RpcServiceRequest("dysmsapi", "2017-05-25", "SendSms")
{
	setMethod(HttpRequest::Method::Post);
}

SendSmsRequest::~SendSmsRequest()
{}

long SendSmsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SendSmsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SendSmsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SendSmsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SendSmsRequest::getSmsUpExtendCode()const
{
	return smsUpExtendCode_;
}

void SendSmsRequest::setSmsUpExtendCode(const std::string& smsUpExtendCode)
{
	smsUpExtendCode_ = smsUpExtendCode;
	setCoreParameter("SmsUpExtendCode", smsUpExtendCode);
}

std::string SendSmsRequest::getSignName()const
{
	return signName_;
}

void SendSmsRequest::setSignName(const std::string& signName)
{
	signName_ = signName;
	setCoreParameter("SignName", signName);
}

std::string SendSmsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SendSmsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SendSmsRequest::getPhoneNumbers()const
{
	return phoneNumbers_;
}

void SendSmsRequest::setPhoneNumbers(const std::string& phoneNumbers)
{
	phoneNumbers_ = phoneNumbers;
	setCoreParameter("PhoneNumbers", phoneNumbers);
}

long SendSmsRequest::getOwnerId()const
{
	return ownerId_;
}

void SendSmsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string SendSmsRequest::getOutId()const
{
	return outId_;
}

void SendSmsRequest::setOutId(const std::string& outId)
{
	outId_ = outId;
	setCoreParameter("OutId", outId);
}

std::string SendSmsRequest::getTemplateCode()const
{
	return templateCode_;
}

void SendSmsRequest::setTemplateCode(const std::string& templateCode)
{
	templateCode_ = templateCode;
	setCoreParameter("TemplateCode", templateCode);
}

std::string SendSmsRequest::getTemplateParam()const
{
	return templateParam_;
}

void SendSmsRequest::setTemplateParam(const std::string& templateParam)
{
	templateParam_ = templateParam;
	setCoreParameter("TemplateParam", templateParam);
}

