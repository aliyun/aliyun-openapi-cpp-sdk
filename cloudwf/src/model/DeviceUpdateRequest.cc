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

#include <alibabacloud/cloudwf/model/DeviceUpdateRequest.h>

using AlibabaCloud::Cloudwf::Model::DeviceUpdateRequest;

DeviceUpdateRequest::DeviceUpdateRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "DeviceUpdate")
{
	setMethod(HttpRequest::Method::Post);
}

DeviceUpdateRequest::~DeviceUpdateRequest()
{}

std::string DeviceUpdateRequest::getDevicePosition()const
{
	return devicePosition_;
}

void DeviceUpdateRequest::setDevicePosition(const std::string& devicePosition)
{
	devicePosition_ = devicePosition;
	setParameter("DevicePosition", devicePosition);
}

std::string DeviceUpdateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeviceUpdateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeviceUpdateRequest::getDeviceName()const
{
	return deviceName_;
}

void DeviceUpdateRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setParameter("DeviceName", deviceName);
}

long DeviceUpdateRequest::getDid()const
{
	return did_;
}

void DeviceUpdateRequest::setDid(long did)
{
	did_ = did;
	setParameter("Did", std::to_string(did));
}

