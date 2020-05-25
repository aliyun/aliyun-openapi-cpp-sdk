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

#include <alibabacloud/vcs/model/AddDeviceRequest.h>

using AlibabaCloud::Vcs::Model::AddDeviceRequest;

AddDeviceRequest::AddDeviceRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "AddDevice")
{
	setMethod(HttpRequest::Method::Post);
}

AddDeviceRequest::~AddDeviceRequest()
{}

std::string AddDeviceRequest::getDeviceSite()const
{
	return deviceSite_;
}

void AddDeviceRequest::setDeviceSite(const std::string& deviceSite)
{
	deviceSite_ = deviceSite;
	setBodyParameter("DeviceSite", deviceSite);
}

std::string AddDeviceRequest::getCorpId()const
{
	return corpId_;
}

void AddDeviceRequest::setCorpId(const std::string& corpId)
{
	corpId_ = corpId;
	setBodyParameter("CorpId", corpId);
}

std::string AddDeviceRequest::getGbId()const
{
	return gbId_;
}

void AddDeviceRequest::setGbId(const std::string& gbId)
{
	gbId_ = gbId;
	setBodyParameter("GbId", gbId);
}

std::string AddDeviceRequest::getBitRate()const
{
	return bitRate_;
}

void AddDeviceRequest::setBitRate(const std::string& bitRate)
{
	bitRate_ = bitRate;
	setBodyParameter("BitRate", bitRate);
}

std::string AddDeviceRequest::getDeviceDirection()const
{
	return deviceDirection_;
}

void AddDeviceRequest::setDeviceDirection(const std::string& deviceDirection)
{
	deviceDirection_ = deviceDirection;
	setBodyParameter("DeviceDirection", deviceDirection);
}

std::string AddDeviceRequest::getDeviceAddress()const
{
	return deviceAddress_;
}

void AddDeviceRequest::setDeviceAddress(const std::string& deviceAddress)
{
	deviceAddress_ = deviceAddress;
	setBodyParameter("DeviceAddress", deviceAddress);
}

std::string AddDeviceRequest::getDeviceType()const
{
	return deviceType_;
}

void AddDeviceRequest::setDeviceType(const std::string& deviceType)
{
	deviceType_ = deviceType;
	setBodyParameter("DeviceType", deviceType);
}

std::string AddDeviceRequest::getDeviceResolution()const
{
	return deviceResolution_;
}

void AddDeviceRequest::setDeviceResolution(const std::string& deviceResolution)
{
	deviceResolution_ = deviceResolution;
	setBodyParameter("DeviceResolution", deviceResolution);
}

std::string AddDeviceRequest::getVendor()const
{
	return vendor_;
}

void AddDeviceRequest::setVendor(const std::string& vendor)
{
	vendor_ = vendor;
	setBodyParameter("Vendor", vendor);
}

std::string AddDeviceRequest::getDeviceName()const
{
	return deviceName_;
}

void AddDeviceRequest::setDeviceName(const std::string& deviceName)
{
	deviceName_ = deviceName;
	setBodyParameter("DeviceName", deviceName);
}

