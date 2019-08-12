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

#include <alibabacloud/sas-api/model/GetIpProfileRequest.h>

using AlibabaCloud::Sas_api::Model::GetIpProfileRequest;

GetIpProfileRequest::GetIpProfileRequest() :
	RpcServiceRequest("sas-api", "2017-07-05", "GetIpProfile")
{}

GetIpProfileRequest::~GetIpProfileRequest()
{}

std::string GetIpProfileRequest::getDeviceIdMd5()const
{
	return deviceIdMd5_;
}

void GetIpProfileRequest::setDeviceIdMd5(const std::string& deviceIdMd5)
{
	deviceIdMd5_ = deviceIdMd5;
	setCoreParameter("DeviceIdMd5", std::to_string(deviceIdMd5));
}

int GetIpProfileRequest::getCarrier()const
{
	return carrier_;
}

void GetIpProfileRequest::setCarrier(int carrier)
{
	carrier_ = carrier;
	setCoreParameter("Carrier", carrier);
}

std::string GetIpProfileRequest::getOs()const
{
	return os_;
}

void GetIpProfileRequest::setOs(const std::string& os)
{
	os_ = os;
	setCoreParameter("Os", std::to_string(os));
}

std::string GetIpProfileRequest::getRequestUrl()const
{
	return requestUrl_;
}

void GetIpProfileRequest::setRequestUrl(const std::string& requestUrl)
{
	requestUrl_ = requestUrl;
	setCoreParameter("RequestUrl", std::to_string(requestUrl));
}

std::string GetIpProfileRequest::getIp()const
{
	return ip_;
}

void GetIpProfileRequest::setIp(const std::string& ip)
{
	ip_ = ip;
	setCoreParameter("Ip", std::to_string(ip));
}

std::string GetIpProfileRequest::getUserAgent()const
{
	return userAgent_;
}

void GetIpProfileRequest::setUserAgent(const std::string& userAgent)
{
	userAgent_ = userAgent;
	setCoreParameter("UserAgent", std::to_string(userAgent));
}

int GetIpProfileRequest::getConnectionType()const
{
	return connectionType_;
}

void GetIpProfileRequest::setConnectionType(int connectionType)
{
	connectionType_ = connectionType;
	setCoreParameter("ConnectionType", connectionType);
}

int GetIpProfileRequest::getSensType()const
{
	return sensType_;
}

void GetIpProfileRequest::setSensType(int sensType)
{
	sensType_ = sensType;
	setCoreParameter("SensType", sensType);
}

int GetIpProfileRequest::getDeviceType()const
{
	return deviceType_;
}

void GetIpProfileRequest::setDeviceType(int deviceType)
{
	deviceType_ = deviceType;
	setCoreParameter("DeviceType", deviceType);
}

int GetIpProfileRequest::getBusinessType()const
{
	return businessType_;
}

void GetIpProfileRequest::setBusinessType(int businessType)
{
	businessType_ = businessType;
	setCoreParameter("BusinessType", businessType);
}

