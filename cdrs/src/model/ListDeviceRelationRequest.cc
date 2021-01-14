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

#include <alibabacloud/cdrs/model/ListDeviceRelationRequest.h>

using AlibabaCloud::CDRS::Model::ListDeviceRelationRequest;

ListDeviceRelationRequest::ListDeviceRelationRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "ListDeviceRelation")
{
	setMethod(HttpRequest::Method::Post);
}

ListDeviceRelationRequest::~ListDeviceRelationRequest()
{}

std::string ListDeviceRelationRequest::getDeviceId()const
{
	return deviceId_;
}

void ListDeviceRelationRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setBodyParameter("DeviceId", deviceId);
}

std::string ListDeviceRelationRequest::getAppName()const
{
	return appName_;
}

void ListDeviceRelationRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setBodyParameter("AppName", appName);
}

std::string ListDeviceRelationRequest::get_NameSpace()const
{
	return _nameSpace_;
}

void ListDeviceRelationRequest::set_NameSpace(const std::string& _nameSpace)
{
	_nameSpace_ = _nameSpace;
	setBodyParameter("_NameSpace", _nameSpace);
}

