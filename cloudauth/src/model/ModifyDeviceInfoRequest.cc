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

#include <alibabacloud/cloudauth/model/ModifyDeviceInfoRequest.h>

using AlibabaCloud::Cloudauth::Model::ModifyDeviceInfoRequest;

ModifyDeviceInfoRequest::ModifyDeviceInfoRequest() :
	RpcServiceRequest("cloudauth", "2018-09-16", "ModifyDeviceInfo")
{}

ModifyDeviceInfoRequest::~ModifyDeviceInfoRequest()
{}

std::string ModifyDeviceInfoRequest::getUserDeviceId()const
{
	return userDeviceId_;
}

void ModifyDeviceInfoRequest::setUserDeviceId(const std::string& userDeviceId)
{
	userDeviceId_ = userDeviceId;
	setCoreParameter("UserDeviceId", userDeviceId);
}

std::string ModifyDeviceInfoRequest::getBizType()const
{
	return bizType_;
}

void ModifyDeviceInfoRequest::setBizType(const std::string& bizType)
{
	bizType_ = bizType;
	setCoreParameter("BizType", bizType);
}

std::string ModifyDeviceInfoRequest::getDuration()const
{
	return duration_;
}

void ModifyDeviceInfoRequest::setDuration(const std::string& duration)
{
	duration_ = duration;
	setCoreParameter("Duration", duration);
}

std::string ModifyDeviceInfoRequest::getExpiredDay()const
{
	return expiredDay_;
}

void ModifyDeviceInfoRequest::setExpiredDay(const std::string& expiredDay)
{
	expiredDay_ = expiredDay;
	setCoreParameter("ExpiredDay", expiredDay);
}

std::string ModifyDeviceInfoRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyDeviceInfoRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string ModifyDeviceInfoRequest::getLang()const
{
	return lang_;
}

void ModifyDeviceInfoRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string ModifyDeviceInfoRequest::getDeviceId()const
{
	return deviceId_;
}

void ModifyDeviceInfoRequest::setDeviceId(const std::string& deviceId)
{
	deviceId_ = deviceId;
	setCoreParameter("DeviceId", deviceId);
}

