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

#include <alibabacloud/cloudwf/model/DeviceShowListRequest.h>

using AlibabaCloud::Cloudwf::Model::DeviceShowListRequest;

DeviceShowListRequest::DeviceShowListRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "DeviceShowList")
{
	setMethod(HttpRequest::Method::Post);
}

DeviceShowListRequest::~DeviceShowListRequest()
{}

int DeviceShowListRequest::getDeviceType()const
{
	return deviceType_;
}

void DeviceShowListRequest::setDeviceType(int deviceType)
{
	deviceType_ = deviceType;
	setParameter("DeviceType", std::to_string(deviceType));
}

std::string DeviceShowListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeviceShowListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long DeviceShowListRequest::getSid()const
{
	return sid_;
}

void DeviceShowListRequest::setSid(long sid)
{
	sid_ = sid;
	setParameter("Sid", std::to_string(sid));
}

std::string DeviceShowListRequest::getDirc()const
{
	return dirc_;
}

void DeviceShowListRequest::setDirc(const std::string& dirc)
{
	dirc_ = dirc;
	setParameter("Dirc", dirc);
}

int DeviceShowListRequest::getPage()const
{
	return page_;
}

void DeviceShowListRequest::setPage(int page)
{
	page_ = page;
	setParameter("Page", std::to_string(page));
}

int DeviceShowListRequest::getPer()const
{
	return per_;
}

void DeviceShowListRequest::setPer(int per)
{
	per_ = per;
	setParameter("Per", std::to_string(per));
}

