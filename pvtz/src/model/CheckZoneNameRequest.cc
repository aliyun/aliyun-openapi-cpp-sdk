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

#include <alibabacloud/pvtz/model/CheckZoneNameRequest.h>

using AlibabaCloud::Pvtz::Model::CheckZoneNameRequest;

CheckZoneNameRequest::CheckZoneNameRequest() :
	RpcServiceRequest("pvtz", "2018-01-01", "CheckZoneName")
{}

CheckZoneNameRequest::~CheckZoneNameRequest()
{}

std::string CheckZoneNameRequest::getUserClientIp()const
{
	return userClientIp_;
}

void CheckZoneNameRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string CheckZoneNameRequest::getLang()const
{
	return lang_;
}

void CheckZoneNameRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string CheckZoneNameRequest::getZoneName()const
{
	return zoneName_;
}

void CheckZoneNameRequest::setZoneName(const std::string& zoneName)
{
	zoneName_ = zoneName;
	setCoreParameter("ZoneName", zoneName);
}

