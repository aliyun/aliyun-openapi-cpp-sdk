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

#include <alibabacloud/pvtz/model/DeleteZoneRequest.h>

using AlibabaCloud::Pvtz::Model::DeleteZoneRequest;

DeleteZoneRequest::DeleteZoneRequest() :
	RpcServiceRequest("pvtz", "2018-01-01", "DeleteZone")
{}

DeleteZoneRequest::~DeleteZoneRequest()
{}

std::string DeleteZoneRequest::getUserClientIp()const
{
	return userClientIp_;
}

void DeleteZoneRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string DeleteZoneRequest::getZoneId()const
{
	return zoneId_;
}

void DeleteZoneRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

std::string DeleteZoneRequest::getLang()const
{
	return lang_;
}

void DeleteZoneRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

