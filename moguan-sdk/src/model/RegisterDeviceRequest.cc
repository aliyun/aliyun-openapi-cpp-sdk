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

#include <alibabacloud/moguan-sdk/model/RegisterDeviceRequest.h>

using AlibabaCloud::Moguan_sdk::Model::RegisterDeviceRequest;

RegisterDeviceRequest::RegisterDeviceRequest() :
	RpcServiceRequest("moguan-sdk", "2021-04-15", "RegisterDevice")
{
	setMethod(HttpRequest::Method::Post);
}

RegisterDeviceRequest::~RegisterDeviceRequest()
{}

std::string RegisterDeviceRequest::getUserDeviceId()const
{
	return userDeviceId_;
}

void RegisterDeviceRequest::setUserDeviceId(const std::string& userDeviceId)
{
	userDeviceId_ = userDeviceId;
	setBodyParameter("UserDeviceId", userDeviceId);
}

std::string RegisterDeviceRequest::getExtend()const
{
	return extend_;
}

void RegisterDeviceRequest::setExtend(const std::string& extend)
{
	extend_ = extend;
	setBodyParameter("Extend", extend);
}

std::string RegisterDeviceRequest::getSdkCode()const
{
	return sdkCode_;
}

void RegisterDeviceRequest::setSdkCode(const std::string& sdkCode)
{
	sdkCode_ = sdkCode;
	setBodyParameter("SdkCode", sdkCode);
}

std::string RegisterDeviceRequest::getAppKey()const
{
	return appKey_;
}

void RegisterDeviceRequest::setAppKey(const std::string& appKey)
{
	appKey_ = appKey;
	setBodyParameter("AppKey", appKey);
}

std::string RegisterDeviceRequest::getDeviceId()const
{
	return deviceId_;
}

void RegisterDeviceRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setBodyParameter("DeviceId", deviceId);
}

