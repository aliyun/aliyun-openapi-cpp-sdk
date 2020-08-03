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

#include <alibabacloud/vcs/model/SyncDeviceTimeRequest.h>

using AlibabaCloud::Vcs::Model::SyncDeviceTimeRequest;

SyncDeviceTimeRequest::SyncDeviceTimeRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "SyncDeviceTime")
{
	setMethod(HttpRequest::Method::Post);
}

SyncDeviceTimeRequest::~SyncDeviceTimeRequest()
{}

std::string SyncDeviceTimeRequest::getDeviceTimeStamp()const
{
	return deviceTimeStamp_;
}

void SyncDeviceTimeRequest::setDeviceTimeStamp(const std::string& deviceTimeStamp)
{
	deviceTimeStamp_ = deviceTimeStamp;
	setBodyParameter("DeviceTimeStamp", deviceTimeStamp);
}

std::string SyncDeviceTimeRequest::getDeviceSn()const
{
	return deviceSn_;
}

void SyncDeviceTimeRequest::setDeviceSn(const std::string& deviceSn)
{
	deviceSn_ = deviceSn;
	setBodyParameter("DeviceSn", deviceSn);
}

