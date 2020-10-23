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

#include <alibabacloud/vcs/model/UnsubscribeDeviceEventRequest.h>

using AlibabaCloud::Vcs::Model::UnsubscribeDeviceEventRequest;

UnsubscribeDeviceEventRequest::UnsubscribeDeviceEventRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "UnsubscribeDeviceEvent")
{
	setMethod(HttpRequest::Method::Post);
}

UnsubscribeDeviceEventRequest::~UnsubscribeDeviceEventRequest()
{}

std::string UnsubscribeDeviceEventRequest::getDeviceId()const
{
	return deviceId_;
}

void UnsubscribeDeviceEventRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setParameter("DeviceId", deviceId);
}

