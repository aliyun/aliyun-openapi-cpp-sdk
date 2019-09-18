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

#include <alibabacloud/iot/model/SetDevicesPropertyRequest.h>

using AlibabaCloud::Iot::Model::SetDevicesPropertyRequest;

SetDevicesPropertyRequest::SetDevicesPropertyRequest() :
	RpcServiceRequest("iot", "2018-01-20", "SetDevicesProperty")
{}

SetDevicesPropertyRequest::~SetDevicesPropertyRequest()
{}

std::string SetDevicesPropertyRequest::getProductKey()const
{
	return productKey_;
}

void SetDevicesPropertyRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setCoreParameter("ProductKey", productKey);
}

std::string SetDevicesPropertyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetDevicesPropertyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SetDevicesPropertyRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void SetDevicesPropertyRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

std::vector<std::string> SetDevicesPropertyRequest::getDeviceName()const
{
	return deviceName_;
}

void SetDevicesPropertyRequest::setDeviceName(const std::vector<std::string>& deviceName)
{
	deviceName_ = deviceName;
	for(int i = 0; i!= deviceName.size(); i++)
		setCoreParameter("DeviceName."+ std::to_string(i), deviceName.at(i));
}

std::string SetDevicesPropertyRequest::getItems()const
{
	return items_;
}

void SetDevicesPropertyRequest::setItems(const std::string& items)
{
	items_ = items;
	setCoreParameter("Items", items);
}

