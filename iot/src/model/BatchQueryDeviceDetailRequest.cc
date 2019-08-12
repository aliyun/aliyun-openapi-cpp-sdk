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

#include <alibabacloud/iot/model/BatchQueryDeviceDetailRequest.h>

using AlibabaCloud::Iot::Model::BatchQueryDeviceDetailRequest;

BatchQueryDeviceDetailRequest::BatchQueryDeviceDetailRequest() :
	RpcServiceRequest("iot", "2018-01-20", "BatchQueryDeviceDetail")
{}

BatchQueryDeviceDetailRequest::~BatchQueryDeviceDetailRequest()
{}

std::string BatchQueryDeviceDetailRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void BatchQueryDeviceDetailRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

std::vector<std::string> BatchQueryDeviceDetailRequest::getDeviceName()const
{
	return deviceName_;
}

void BatchQueryDeviceDetailRequest::setDeviceName(const std::vector<std::string>& deviceName)
{
	deviceName_ = deviceName;
	for(int i = 0; i!= deviceName.size(); i++)
		setCoreParameter("DeviceName."+ std::to_string(i), deviceName.at(i));
}

std::string BatchQueryDeviceDetailRequest::getProductKey()const
{
	return productKey_;
}

void BatchQueryDeviceDetailRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setCoreParameter("ProductKey", productKey);
}

