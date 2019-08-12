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

#include <alibabacloud/dysmsapi/model/SendBatchSmsRequest.h>

using AlibabaCloud::Dysmsapi::Model::SendBatchSmsRequest;

SendBatchSmsRequest::SendBatchSmsRequest() :
	RpcServiceRequest("dysmsapi", "2017-05-25", "SendBatchSms")
{}

SendBatchSmsRequest::~SendBatchSmsRequest()
{}

std::string SendBatchSmsRequest::getTemplateParamJson()const
{
	return templateParamJson_;
}

void SendBatchSmsRequest::setTemplateParamJson(const std::string& templateParamJson)
{
	templateParamJson_ = templateParamJson;
	setCoreParameter("TemplateParamJson", templateParamJson);
}

long SendBatchSmsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SendBatchSmsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SendBatchSmsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SendBatchSmsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SendBatchSmsRequest::getSmsUpExtendCodeJson()const
{
	return smsUpExtendCodeJson_;
}

void SendBatchSmsRequest::setSmsUpExtendCodeJson(const std::string& smsUpExtendCodeJson)
{
	smsUpExtendCodeJson_ = smsUpExtendCodeJson;
	setCoreParameter("SmsUpExtendCodeJson", smsUpExtendCodeJson);
}

long SendBatchSmsRequest::getOwnerId()const
{
	return ownerId_;
}

void SendBatchSmsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string SendBatchSmsRequest::getSignNameJson()const
{
	return signNameJson_;
}

void SendBatchSmsRequest::setSignNameJson(const std::string& signNameJson)
{
	signNameJson_ = signNameJson;
	setCoreParameter("SignNameJson", signNameJson);
}

std::string SendBatchSmsRequest::getTemplateCode()const
{
	return templateCode_;
}

void SendBatchSmsRequest::setTemplateCode(const std::string& templateCode)
{
	templateCode_ = templateCode;
	setCoreParameter("TemplateCode", templateCode);
}

std::string SendBatchSmsRequest::getPhoneNumberJson()const
{
	return phoneNumberJson_;
}

void SendBatchSmsRequest::setPhoneNumberJson(const std::string& phoneNumberJson)
{
	phoneNumberJson_ = phoneNumberJson;
	setCoreParameter("PhoneNumberJson", phoneNumberJson);
}

std::string SendBatchSmsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SendBatchSmsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

