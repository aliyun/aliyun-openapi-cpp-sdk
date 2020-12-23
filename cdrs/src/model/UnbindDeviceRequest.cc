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

#include <alibabacloud/cdrs/model/UnbindDeviceRequest.h>

using AlibabaCloud::CDRS::Model::UnbindDeviceRequest;

UnbindDeviceRequest::UnbindDeviceRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "UnbindDevice")
{
	setMethod(HttpRequest::Method::Post);
}

UnbindDeviceRequest::~UnbindDeviceRequest()
{}

std::string UnbindDeviceRequest::getDeviceIds()const
{
	return deviceIds_;
}

void UnbindDeviceRequest::setDeviceIds(const std::string& deviceIds)
{
	deviceIds_ = deviceIds;
	setBodyParameter("DeviceIds", deviceIds);
}

std::string UnbindDeviceRequest::getCorpId()const
{
	return corpId_;
}

void UnbindDeviceRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string UnbindDeviceRequest::getAppName()const
{
	return appName_;
}

void UnbindDeviceRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setBodyParameter("AppName", appName);
}

std::string UnbindDeviceRequest::get_NameSpace()const
{
	return _nameSpace_;
}

void UnbindDeviceRequest::set_NameSpace(const std::string& _nameSpace)
{
	_nameSpace_ = _nameSpace;
	setBodyParameter("_NameSpace", _nameSpace);
}

