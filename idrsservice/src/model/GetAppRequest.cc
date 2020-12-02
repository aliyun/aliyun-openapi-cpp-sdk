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

#include <alibabacloud/idrsservice/model/GetAppRequest.h>

using AlibabaCloud::Idrsservice::Model::GetAppRequest;

GetAppRequest::GetAppRequest() :
	RpcServiceRequest("idrsservice", "2020-06-30", "GetApp")
{
	setMethod(HttpRequest::Method::Post);
}

GetAppRequest::~GetAppRequest()
{}

std::string GetAppRequest::getPackageName()const
{
	return packageName_;
}

void GetAppRequest::setPackageName(const std::string& packageName)
{
	packageName_ = packageName;
	setParameter("PackageName", packageName);
}

std::string GetAppRequest::getDeviceId()const
{
	return deviceId_;
}

void GetAppRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setParameter("DeviceId", deviceId);
}

std::string GetAppRequest::getId()const
{
	return id_;
}

void GetAppRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

