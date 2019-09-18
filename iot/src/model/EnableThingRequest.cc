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

#include <alibabacloud/iot/model/EnableThingRequest.h>

using AlibabaCloud::Iot::Model::EnableThingRequest;

EnableThingRequest::EnableThingRequest() :
	RpcServiceRequest("iot", "2018-01-20", "EnableThing")
{}

EnableThingRequest::~EnableThingRequest()
{}

std::string EnableThingRequest::getProductKey()const
{
	return productKey_;
}

void EnableThingRequest::setProductKey(const std::string& productKey)
{
	productKey_ = productKey;
	setCoreParameter("ProductKey", productKey);
}

std::string EnableThingRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void EnableThingRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string EnableThingRequest::getIotId()const
{
	return iotId_;
}

void EnableThingRequest::setIotId(const std::string& iotId)
{
	iotId_ = iotId;
	setCoreParameter("IotId", iotId);
}

std::string EnableThingRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void EnableThingRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

std::string EnableThingRequest::getDeviceName()const
{
	return deviceName_;
}

void EnableThingRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setCoreParameter("DeviceName", deviceName);
}

