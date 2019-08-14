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

#include <alibabacloud/cloudwf/model/DeviceCreateRequest.h>

using AlibabaCloud::Cloudwf::Model::DeviceCreateRequest;

DeviceCreateRequest::DeviceCreateRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "DeviceCreate")
{}

DeviceCreateRequest::~DeviceCreateRequest()
{}

std::string DeviceCreateRequest::getDeviceNum()const
{
	return deviceNum_;
}

void DeviceCreateRequest::setDeviceNum(const std::string& deviceNum)
{
	deviceNum_ = deviceNum;
	setCoreParameter("DeviceNum", deviceNum);
}

std::string DeviceCreateRequest::getDevicePosition()const
{
	return devicePosition_;
}

void DeviceCreateRequest::setDevicePosition(const std::string& devicePosition)
{
	devicePosition_ = devicePosition;
	setCoreParameter("DevicePosition", devicePosition);
}

std::string DeviceCreateRequest::getDeviceName()const
{
	return deviceName_;
}

void DeviceCreateRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setCoreParameter("DeviceName", deviceName);
}

int DeviceCreateRequest::getDeviceType()const
{
	return deviceType_;
}

void DeviceCreateRequest::setDeviceType(int deviceType)
{
	deviceType_ = deviceType;
	setCoreParameter("DeviceType", std::to_string(deviceType));
}

std::string DeviceCreateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeviceCreateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

long DeviceCreateRequest::getSid()const
{
	return sid_;
}

void DeviceCreateRequest::setSid(long sid)
{
	sid_ = sid;
	setCoreParameter("Sid", std::to_string(sid));
}

