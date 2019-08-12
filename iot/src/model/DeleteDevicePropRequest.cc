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

#include <alibabacloud/iot/model/DeleteDevicePropRequest.h>

using AlibabaCloud::Iot::Model::DeleteDevicePropRequest;

DeleteDevicePropRequest::DeleteDevicePropRequest() :
	RpcServiceRequest("iot", "2018-01-20", "DeleteDeviceProp")
{}

DeleteDevicePropRequest::~DeleteDevicePropRequest()
{}

std::string DeleteDevicePropRequest::getIotId()const
{
	return iotId_;
}

void DeleteDevicePropRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setCoreParameter("IotId", iotId);
}

std::string DeleteDevicePropRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void DeleteDevicePropRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

std::string DeleteDevicePropRequest::getDeviceName()const
{
	return deviceName_;
}

void DeleteDevicePropRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setCoreParameter("DeviceName", deviceName);
}

std::string DeleteDevicePropRequest::getProductKey()const
{
	return productKey_;
}

void DeleteDevicePropRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setCoreParameter("ProductKey", productKey);
}

std::string DeleteDevicePropRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteDevicePropRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DeleteDevicePropRequest::getPropKey()const
{
	return propKey_;
}

void DeleteDevicePropRequest::setPropKey(const std::string& propKey)
{
	propKey_ = propKey;
	setCoreParameter("PropKey", propKey);
}

