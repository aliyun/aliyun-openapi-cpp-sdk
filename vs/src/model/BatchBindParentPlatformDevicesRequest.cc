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

#include <alibabacloud/vs/model/BatchBindParentPlatformDevicesRequest.h>

using AlibabaCloud::Vs::Model::BatchBindParentPlatformDevicesRequest;

BatchBindParentPlatformDevicesRequest::BatchBindParentPlatformDevicesRequest() :
	RpcServiceRequest("vs", "2018-12-12", "BatchBindParentPlatformDevices")
{
	setMethod(HttpRequest::Method::Post);
}

BatchBindParentPlatformDevicesRequest::~BatchBindParentPlatformDevicesRequest()
{}

std::string BatchBindParentPlatformDevicesRequest::getParentPlatformId()const
{
	return parentPlatformId_;
}

void BatchBindParentPlatformDevicesRequest::setParentPlatformId(const std::string& parentPlatformId)
{
	parentPlatformId_ = parentPlatformId;
	setParameter("ParentPlatformId", parentPlatformId);
}

std::string BatchBindParentPlatformDevicesRequest::getShowLog()const
{
	return showLog_;
}

void BatchBindParentPlatformDevicesRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long BatchBindParentPlatformDevicesRequest::getOwnerId()const
{
	return ownerId_;
}

void BatchBindParentPlatformDevicesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string BatchBindParentPlatformDevicesRequest::getDeviceId()const
{
	return deviceId_;
}

void BatchBindParentPlatformDevicesRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setParameter("DeviceId", deviceId);
}

