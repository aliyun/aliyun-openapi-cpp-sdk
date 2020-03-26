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

#include <alibabacloud/sas-api/model/GetAccountProfileRequest.h>

using AlibabaCloud::Sas_api::Model::GetAccountProfileRequest;

GetAccountProfileRequest::GetAccountProfileRequest() :
	RpcServiceRequest("sas-api", "2017-07-05", "GetAccountProfile")
{
	setMethod(HttpRequest::Method::Post);
}

GetAccountProfileRequest::~GetAccountProfileRequest()
{}

std::string GetAccountProfileRequest::getDeviceIdMd5()const
{
	return deviceIdMd5_;
}

void GetAccountProfileRequest::setDeviceIdMd5(const std::string& deviceIdMd5)
{
	deviceIdMd5_ = deviceIdMd5;
	setParameter("DeviceIdMd5", deviceIdMd5);
}

std::string GetAccountProfileRequest::getOs()const
{
	return os_;
}

void GetAccountProfileRequest::setOs(const std::string& os)
{
	os_ = os;
	setParameter("Os", os);
}

std::string GetAccountProfileRequest::getIp()const
{
	return ip_;
}

void GetAccountProfileRequest::setIp(const std::string& ip)
{
	ip_ = ip;
	setParameter("Ip", ip);
}

std::string GetAccountProfileRequest::getUserAgent()const
{
	return userAgent_;
}

void GetAccountProfileRequest::setUserAgent(const std::string& userAgent)
{
	userAgent_ = userAgent;
	setParameter("UserAgent", userAgent);
}

int GetAccountProfileRequest::getSensType()const
{
	return sensType_;
}

void GetAccountProfileRequest::setSensType(int sensType)
{
	sensType_ = sensType;
	setParameter("SensType", std::to_string(sensType));
}

int GetAccountProfileRequest::getDeviceType()const
{
	return deviceType_;
}

void GetAccountProfileRequest::setDeviceType(int deviceType)
{
	deviceType_ = deviceType;
	setParameter("DeviceType", std::to_string(deviceType));
}

int GetAccountProfileRequest::getBusinessType()const
{
	return businessType_;
}

void GetAccountProfileRequest::setBusinessType(int businessType)
{
	businessType_ = businessType;
	setParameter("BusinessType", std::to_string(businessType));
}

int GetAccountProfileRequest::getCarrier()const
{
	return carrier_;
}

void GetAccountProfileRequest::setCarrier(int carrier)
{
	carrier_ = carrier;
	setParameter("Carrier", std::to_string(carrier));
}

std::string GetAccountProfileRequest::getPhone()const
{
	return phone_;
}

void GetAccountProfileRequest::setPhone(const std::string& phone)
{
	phone_ = phone;
	setParameter("Phone", phone);
}

std::string GetAccountProfileRequest::getRequestUrl()const
{
	return requestUrl_;
}

void GetAccountProfileRequest::setRequestUrl(const std::string& requestUrl)
{
	requestUrl_ = requestUrl;
	setParameter("RequestUrl", requestUrl);
}

int GetAccountProfileRequest::getConnectionType()const
{
	return connectionType_;
}

void GetAccountProfileRequest::setConnectionType(int connectionType)
{
	connectionType_ = connectionType;
	setParameter("ConnectionType", std::to_string(connectionType));
}

long GetAccountProfileRequest::getAccessTimestamp()const
{
	return accessTimestamp_;
}

void GetAccountProfileRequest::setAccessTimestamp(long accessTimestamp)
{
	accessTimestamp_ = accessTimestamp;
	setParameter("AccessTimestamp", std::to_string(accessTimestamp));
}

