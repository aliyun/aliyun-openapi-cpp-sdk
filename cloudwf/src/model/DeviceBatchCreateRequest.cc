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

#include <alibabacloud/cloudwf/model/DeviceBatchCreateRequest.h>

using AlibabaCloud::Cloudwf::Model::DeviceBatchCreateRequest;

DeviceBatchCreateRequest::DeviceBatchCreateRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "DeviceBatchCreate")
{
	setMethod(HttpRequest::Method::Post);
}

DeviceBatchCreateRequest::~DeviceBatchCreateRequest()
{}

int DeviceBatchCreateRequest::getDeviceType()const
{
	return deviceType_;
}

void DeviceBatchCreateRequest::setDeviceType(int deviceType)
{
	deviceType_ = deviceType;
	setParameter("DeviceType", std::to_string(deviceType));
}

std::string DeviceBatchCreateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeviceBatchCreateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeviceBatchCreateRequest::getSn()const
{
	return sn_;
}

void DeviceBatchCreateRequest::setSn(const std::string& sn)
{
	sn_ = sn;
	setParameter("Sn", sn);
}

