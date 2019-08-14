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

#include <alibabacloud/iot/model/CreateLoRaNodesTaskRequest.h>

using AlibabaCloud::Iot::Model::CreateLoRaNodesTaskRequest;

CreateLoRaNodesTaskRequest::CreateLoRaNodesTaskRequest() :
	RpcServiceRequest("iot", "2018-01-20", "CreateLoRaNodesTask")
{}

CreateLoRaNodesTaskRequest::~CreateLoRaNodesTaskRequest()
{}

<<<<<<< HEAD
std::string CreateLoRaNodesTaskRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CreateLoRaNodesTaskRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

std::string CreateLoRaNodesTaskRequest::getProductKey()const
{
	return productKey_;
}

void CreateLoRaNodesTaskRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setCoreParameter("ProductKey", productKey);
}

std::vector<CreateLoRaNodesTaskRequest::DeviceInfo> CreateLoRaNodesTaskRequest::getDeviceInfo()const
{
	return deviceInfo_;
}

void CreateLoRaNodesTaskRequest::setDeviceInfo(const std::vector<DeviceInfo>& deviceInfo)
{
	deviceInfo_ = deviceInfo;
	int i = 0;
	for(int i = 0; i!= deviceInfo.size(); i++)	{
		auto obj = deviceInfo.at(i);
		std::string str ="DeviceInfo."+ std::to_string(i);
		setCoreParameter(str + ".PinCode", obj.pinCode);
		setCoreParameter(str + ".DevEui", obj.devEui);
	}
}

std::string CreateLoRaNodesTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateLoRaNodesTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

=======
std::string CreateLoRaNodesTaskRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CreateLoRaNodesTaskRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

std::string CreateLoRaNodesTaskRequest::getProductKey()const
{
	return productKey_;
}

void CreateLoRaNodesTaskRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setCoreParameter("ProductKey", productKey);
}

std::vector<CreateLoRaNodesTaskRequest::DeviceInfo> CreateLoRaNodesTaskRequest::getDeviceInfo()const
{
	return deviceInfo_;
}

void CreateLoRaNodesTaskRequest::setDeviceInfo(const std::vector<DeviceInfo>& deviceInfo)
{
	deviceInfo_ = deviceInfo;
	int i = 0;
	for(int i = 0; i!= deviceInfo.size(); i++)	{
		auto obj = deviceInfo.at(i);
		std::string str ="DeviceInfo."+ std::to_string(i);
		setCoreParameter(str + ".PinCode", obj.pinCode);
		setCoreParameter(str + ".DevEui", obj.devEui);
	}
}

std::string CreateLoRaNodesTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateLoRaNodesTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

>>>>>>> master
