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

#include <alibabacloud/push/model/BindPhoneRequest.h>

using AlibabaCloud::Push::Model::BindPhoneRequest;

BindPhoneRequest::BindPhoneRequest() :
	RpcServiceRequest("push", "2016-08-01", "BindPhone")
{
	setMethod(HttpRequest::Method::Post);
}

BindPhoneRequest::~BindPhoneRequest()
{}

std::string BindPhoneRequest::getPhoneNumber()const
{
	return phoneNumber_;
}

void BindPhoneRequest::setPhoneNumber(const std::string& phoneNumber)
{
	phoneNumber_ = phoneNumber;
	setParameter("PhoneNumber", phoneNumber);
}

std::string BindPhoneRequest::getDeviceId()const
{
	return deviceId_;
}

void BindPhoneRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setParameter("DeviceId", deviceId);
}

std::string BindPhoneRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void BindPhoneRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long BindPhoneRequest::getAppKey()const
{
	return appKey_;
}

void BindPhoneRequest::setAppKey(long appKey)
{
	appKey_ = appKey;
	setParameter("AppKey", std::to_string(appKey));
}

