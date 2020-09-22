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

#include <alibabacloud/vs/model/BatchUnbindPurchasedDevicesRequest.h>

using AlibabaCloud::Vs::Model::BatchUnbindPurchasedDevicesRequest;

BatchUnbindPurchasedDevicesRequest::BatchUnbindPurchasedDevicesRequest() :
	RpcServiceRequest("vs", "2018-12-12", "BatchUnbindPurchasedDevices")
{
	setMethod(HttpRequest::Method::Post);
}

BatchUnbindPurchasedDevicesRequest::~BatchUnbindPurchasedDevicesRequest()
{}

std::string BatchUnbindPurchasedDevicesRequest::getShowLog()const
{
	return showLog_;
}

void BatchUnbindPurchasedDevicesRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long BatchUnbindPurchasedDevicesRequest::getOwnerId()const
{
	return ownerId_;
}

void BatchUnbindPurchasedDevicesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string BatchUnbindPurchasedDevicesRequest::getDeviceId()const
{
	return deviceId_;
}

void BatchUnbindPurchasedDevicesRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setParameter("DeviceId", deviceId);
}

