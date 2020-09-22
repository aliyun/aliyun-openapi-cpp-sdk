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

#include <alibabacloud/vs/model/BatchBindPurchasedDevicesRequest.h>

using AlibabaCloud::Vs::Model::BatchBindPurchasedDevicesRequest;

BatchBindPurchasedDevicesRequest::BatchBindPurchasedDevicesRequest() :
	RpcServiceRequest("vs", "2018-12-12", "BatchBindPurchasedDevices")
{
	setMethod(HttpRequest::Method::Post);
}

BatchBindPurchasedDevicesRequest::~BatchBindPurchasedDevicesRequest()
{}

std::string BatchBindPurchasedDevicesRequest::getShowLog()const
{
	return showLog_;
}

void BatchBindPurchasedDevicesRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string BatchBindPurchasedDevicesRequest::getGroupId()const
{
	return groupId_;
}

void BatchBindPurchasedDevicesRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

long BatchBindPurchasedDevicesRequest::getOwnerId()const
{
	return ownerId_;
}

void BatchBindPurchasedDevicesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string BatchBindPurchasedDevicesRequest::getDeviceId()const
{
	return deviceId_;
}

void BatchBindPurchasedDevicesRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setParameter("DeviceId", deviceId);
}

std::string BatchBindPurchasedDevicesRequest::getRegion()const
{
	return region_;
}

void BatchBindPurchasedDevicesRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

