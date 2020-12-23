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

#include <alibabacloud/cdrs/model/BindDeviceRequest.h>

using AlibabaCloud::CDRS::Model::BindDeviceRequest;

BindDeviceRequest::BindDeviceRequest() :
	RpcServiceRequest("cdrs", "2020-11-01", "BindDevice")
{
	setMethod(HttpRequest::Method::Post);
}

BindDeviceRequest::~BindDeviceRequest()
{}

std::string BindDeviceRequest::getCorpId()const
{
	return corpId_;
}

void BindDeviceRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::vector<BindDeviceRequest::Devices> BindDeviceRequest::getDevices()const
{
	return devices_;
}

void BindDeviceRequest::setDevices(const std::vector<Devices>& devices)
{
	devices_ = devices;
	for(int dep1 = 0; dep1!= devices.size(); dep1++) {
		auto devicesObj = devices.at(dep1);
		std::string devicesObjStr = "Devices." + std::to_string(dep1 + 1);
		setParameter(devicesObjStr + ".CorpId", devicesObj.corpId);
		setParameter(devicesObjStr + ".DeviceId", devicesObj.deviceId);
	}
}

std::string BindDeviceRequest::getAppName()const
{
	return appName_;
}

void BindDeviceRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setBodyParameter("AppName", appName);
}

std::string BindDeviceRequest::get_NameSpace()const
{
	return _nameSpace_;
}

void BindDeviceRequest::set_NameSpace(const std::string& _nameSpace)
{
	_nameSpace_ = _nameSpace;
	setBodyParameter("_NameSpace", _nameSpace);
}

