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

#include <alibabacloud/mopen/model/MoPenCreateDeviceRequest.h>

using AlibabaCloud::MoPen::Model::MoPenCreateDeviceRequest;

MoPenCreateDeviceRequest::MoPenCreateDeviceRequest() :
	RpcServiceRequest("mopen", "2018-02-11", "MoPenCreateDevice")
{
	setMethod(HttpRequest::Method::Post);
}

MoPenCreateDeviceRequest::~MoPenCreateDeviceRequest()
{}

std::string MoPenCreateDeviceRequest::getDeviceName()const
{
	return deviceName_;
}

void MoPenCreateDeviceRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setBodyParameter("DeviceName", deviceName);
}

int MoPenCreateDeviceRequest::getDeviceType()const
{
	return deviceType_;
}

void MoPenCreateDeviceRequest::setDeviceType(int deviceType)
{
	deviceType_ = deviceType;
	setBodyParameter("DeviceType", std::to_string(deviceType));
}

