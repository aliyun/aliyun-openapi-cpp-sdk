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

#include <alibabacloud/vcs/model/UpdateDeviceRequest.h>

using AlibabaCloud::Vcs::Model::UpdateDeviceRequest;

UpdateDeviceRequest::UpdateDeviceRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "UpdateDevice")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateDeviceRequest::~UpdateDeviceRequest()
{}

std::string UpdateDeviceRequest::getDeviceSite()const
{
	return deviceSite_;
}

void UpdateDeviceRequest::setDeviceSite(const std::string& deviceSite)
{
	deviceSite_ = deviceSite;
	setBodyParameter("DeviceSite", deviceSite);
}

std::string UpdateDeviceRequest::getCorpId()const
{
	return corpId_;
}

void UpdateDeviceRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string UpdateDeviceRequest::getGbId()const
{
	return gbId_;
}

void UpdateDeviceRequest::setGbId(const std::string& gbId)
{
	gbId_ = gbId;
	setBodyParameter("GbId", gbId);
}

std::string UpdateDeviceRequest::getBitRate()const
{
	return bitRate_;
}

void UpdateDeviceRequest::setBitRate(const std::string& bitRate)
{
	bitRate_ = bitRate;
	setBodyParameter("BitRate", bitRate);
}

std::string UpdateDeviceRequest::getDeviceDirection()const
{
	return deviceDirection_;
}

void UpdateDeviceRequest::setDeviceDirection(const std::string& deviceDirection)
{
	deviceDirection_ = deviceDirection;
	setBodyParameter("DeviceDirection", deviceDirection);
}

std::string UpdateDeviceRequest::getDeviceAddress()const
{
	return deviceAddress_;
}

void UpdateDeviceRequest::setDeviceAddress(const std::string& deviceAddress)
{
	deviceAddress_ = deviceAddress;
	setBodyParameter("DeviceAddress", deviceAddress);
}

std::string UpdateDeviceRequest::getDeviceType()const
{
	return deviceType_;
}

void UpdateDeviceRequest::setDeviceType(const std::string& deviceType)
{
	deviceType_ = deviceType;
	setBodyParameter("DeviceType", deviceType);
}

std::string UpdateDeviceRequest::getDeviceResolution()const
{
	return deviceResolution_;
}

void UpdateDeviceRequest::setDeviceResolution(const std::string& deviceResolution)
{
	deviceResolution_ = deviceResolution;
	setBodyParameter("DeviceResolution", deviceResolution);
}

std::string UpdateDeviceRequest::getVendor()const
{
	return vendor_;
}

void UpdateDeviceRequest::setVendor(const std::string& vendor)
{
	vendor_ = vendor;
	setBodyParameter("Vendor", vendor);
}

std::string UpdateDeviceRequest::getDeviceName()const
{
	return deviceName_;
}

void UpdateDeviceRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setBodyParameter("DeviceName", deviceName);
}

