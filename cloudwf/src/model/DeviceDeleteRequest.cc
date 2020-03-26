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

#include <alibabacloud/cloudwf/model/DeviceDeleteRequest.h>

using AlibabaCloud::Cloudwf::Model::DeviceDeleteRequest;

DeviceDeleteRequest::DeviceDeleteRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "DeviceDelete")
{
	setMethod(HttpRequest::Method::Post);
}

DeviceDeleteRequest::~DeviceDeleteRequest()
{}

std::string DeviceDeleteRequest::getMac()const
{
	return mac_;
}

void DeviceDeleteRequest::setMac(const std::string& mac)
{
	mac_ = mac;
	setParameter("Mac", mac);
}

std::string DeviceDeleteRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeviceDeleteRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long DeviceDeleteRequest::getDid()const
{
	return did_;
}

void DeviceDeleteRequest::setDid(long did)
{
	did_ = did;
	setParameter("Did", std::to_string(did));
}

