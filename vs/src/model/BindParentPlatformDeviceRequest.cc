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

#include <alibabacloud/vs/model/BindParentPlatformDeviceRequest.h>

using AlibabaCloud::Vs::Model::BindParentPlatformDeviceRequest;

BindParentPlatformDeviceRequest::BindParentPlatformDeviceRequest() :
	RpcServiceRequest("vs", "2018-12-12", "BindParentPlatformDevice")
{
	setMethod(HttpRequest::Method::Post);
}

BindParentPlatformDeviceRequest::~BindParentPlatformDeviceRequest()
{}

std::string BindParentPlatformDeviceRequest::getParentPlatformId()const
{
	return parentPlatformId_;
}

void BindParentPlatformDeviceRequest::setParentPlatformId(const std::string& parentPlatformId)
{
	parentPlatformId_ = parentPlatformId;
	setParameter("ParentPlatformId", parentPlatformId);
}

std::string BindParentPlatformDeviceRequest::getShowLog()const
{
	return showLog_;
}

void BindParentPlatformDeviceRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long BindParentPlatformDeviceRequest::getOwnerId()const
{
	return ownerId_;
}

void BindParentPlatformDeviceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string BindParentPlatformDeviceRequest::getDeviceId()const
{
	return deviceId_;
}

void BindParentPlatformDeviceRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setParameter("DeviceId", deviceId);
}

