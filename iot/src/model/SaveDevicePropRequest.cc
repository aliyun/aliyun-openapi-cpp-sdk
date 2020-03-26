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

#include <alibabacloud/iot/model/SaveDevicePropRequest.h>

using AlibabaCloud::Iot::Model::SaveDevicePropRequest;

SaveDevicePropRequest::SaveDevicePropRequest() :
	RpcServiceRequest("iot", "2018-01-20", "SaveDeviceProp")
{
	setMethod(HttpRequest::Method::Post);
}

SaveDevicePropRequest::~SaveDevicePropRequest()
{}

std::string SaveDevicePropRequest::getProductKey()const
{
	return productKey_;
}

void SaveDevicePropRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setParameter("ProductKey", productKey);
}

std::string SaveDevicePropRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SaveDevicePropRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SaveDevicePropRequest::getProps()const
{
	return props_;
}

void SaveDevicePropRequest::setProps(const std::string& props)
{
	props_ = props;
	setParameter("Props", props);
}

std::string SaveDevicePropRequest::getIotId()const
{
	return iotId_;
}

void SaveDevicePropRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setParameter("IotId", iotId);
}

std::string SaveDevicePropRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void SaveDevicePropRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setParameter("IotInstanceId", iotInstanceId);
}

std::string SaveDevicePropRequest::getDeviceName()const
{
	return deviceName_;
}

void SaveDevicePropRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setParameter("DeviceName", deviceName);
}

