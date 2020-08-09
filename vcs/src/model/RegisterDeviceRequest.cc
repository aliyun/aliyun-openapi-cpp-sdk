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

#include <alibabacloud/vcs/model/RegisterDeviceRequest.h>

using AlibabaCloud::Vcs::Model::RegisterDeviceRequest;

RegisterDeviceRequest::RegisterDeviceRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "RegisterDevice")
{
	setMethod(HttpRequest::Method::Post);
}

RegisterDeviceRequest::~RegisterDeviceRequest()
{}

std::string RegisterDeviceRequest::getDeviceTimeStamp()const
{
	return deviceTimeStamp_;
}

void RegisterDeviceRequest::setDeviceTimeStamp(const std::string& deviceTimeStamp)
{
	deviceTimeStamp_ = deviceTimeStamp;
	setBodyParameter("DeviceTimeStamp", deviceTimeStamp);
}

std::string RegisterDeviceRequest::getDeviceSn()const
{
	return deviceSn_;
}

void RegisterDeviceRequest::setDeviceSn(const std::string& deviceSn)
{
	deviceSn_ = deviceSn;
	setBodyParameter("DeviceSn", deviceSn);
}

std::string RegisterDeviceRequest::getDeviceId()const
{
	return deviceId_;
}

void RegisterDeviceRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setBodyParameter("DeviceId", deviceId);
}

std::string RegisterDeviceRequest::getServerId()const
{
	return serverId_;
}

void RegisterDeviceRequest::setServerId(const std::string& serverId)
{
	serverId_ = serverId;
	setBodyParameter("ServerId", serverId);
}

