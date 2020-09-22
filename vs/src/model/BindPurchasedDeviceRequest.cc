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

#include <alibabacloud/vs/model/BindPurchasedDeviceRequest.h>

using AlibabaCloud::Vs::Model::BindPurchasedDeviceRequest;

BindPurchasedDeviceRequest::BindPurchasedDeviceRequest() :
	RpcServiceRequest("vs", "2018-12-12", "BindPurchasedDevice")
{
	setMethod(HttpRequest::Method::Post);
}

BindPurchasedDeviceRequest::~BindPurchasedDeviceRequest()
{}

std::string BindPurchasedDeviceRequest::getShowLog()const
{
	return showLog_;
}

void BindPurchasedDeviceRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string BindPurchasedDeviceRequest::getGroupId()const
{
	return groupId_;
}

void BindPurchasedDeviceRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

long BindPurchasedDeviceRequest::getOwnerId()const
{
	return ownerId_;
}

void BindPurchasedDeviceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string BindPurchasedDeviceRequest::getDeviceId()const
{
	return deviceId_;
}

void BindPurchasedDeviceRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setParameter("DeviceId", deviceId);
}

std::string BindPurchasedDeviceRequest::getRegion()const
{
	return region_;
}

void BindPurchasedDeviceRequest::setRegion(const std::string& region)
{
	region_ = region;
	setParameter("Region", region);
}

