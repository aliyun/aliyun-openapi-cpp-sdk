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

#include <alibabacloud/iot/model/RegisterDeviceRequest.h>

using AlibabaCloud::Iot::Model::RegisterDeviceRequest;

RegisterDeviceRequest::RegisterDeviceRequest() :
	RpcServiceRequest("iot", "2018-01-20", "RegisterDevice")
{}

RegisterDeviceRequest::~RegisterDeviceRequest()
{}

<<<<<<< HEAD
std::string RegisterDeviceRequest::getPinCode()const
{
	return pinCode_;
}

void RegisterDeviceRequest::setPinCode(const std::string& pinCode)
{
	pinCode_ = pinCode;
	setCoreParameter("PinCode", pinCode);
}

std::string RegisterDeviceRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void RegisterDeviceRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

std::string RegisterDeviceRequest::getNickname()const
{
	return nickname_;
}

void RegisterDeviceRequest::setNickname(const std::string& nickname)
{
	nickname_ = nickname;
	setCoreParameter("Nickname", nickname);
}

std::string RegisterDeviceRequest::getDeviceName()const
{
	return deviceName_;
}

void RegisterDeviceRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setCoreParameter("DeviceName", deviceName);
}

std::string RegisterDeviceRequest::getProductKey()const
{
	return productKey_;
}

void RegisterDeviceRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setCoreParameter("ProductKey", productKey);
}

std::string RegisterDeviceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RegisterDeviceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string RegisterDeviceRequest::getDevEui()const
{
	return devEui_;
}

void RegisterDeviceRequest::setDevEui(const std::string& devEui)
{
	devEui_ = devEui;
	setCoreParameter("DevEui", devEui);
}

=======
std::string RegisterDeviceRequest::getPinCode()const
{
	return pinCode_;
}

void RegisterDeviceRequest::setPinCode(const std::string& pinCode)
{
	pinCode_ = pinCode;
	setCoreParameter("PinCode", pinCode);
}

std::string RegisterDeviceRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void RegisterDeviceRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

std::string RegisterDeviceRequest::getNickname()const
{
	return nickname_;
}

void RegisterDeviceRequest::setNickname(const std::string& nickname)
{
	nickname_ = nickname;
	setCoreParameter("Nickname", nickname);
}

std::string RegisterDeviceRequest::getDeviceName()const
{
	return deviceName_;
}

void RegisterDeviceRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setCoreParameter("DeviceName", deviceName);
}

std::string RegisterDeviceRequest::getProductKey()const
{
	return productKey_;
}

void RegisterDeviceRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setCoreParameter("ProductKey", productKey);
}

std::string RegisterDeviceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RegisterDeviceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string RegisterDeviceRequest::getDevEui()const
{
	return devEui_;
}

void RegisterDeviceRequest::setDevEui(const std::string& devEui)
{
	devEui_ = devEui;
	setCoreParameter("DevEui", devEui);
}

>>>>>>> master
