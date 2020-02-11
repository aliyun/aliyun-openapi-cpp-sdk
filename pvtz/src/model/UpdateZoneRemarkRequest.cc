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

#include <alibabacloud/pvtz/model/UpdateZoneRemarkRequest.h>

using AlibabaCloud::Pvtz::Model::UpdateZoneRemarkRequest;

UpdateZoneRemarkRequest::UpdateZoneRemarkRequest() :
	RpcServiceRequest("pvtz", "2018-01-01", "UpdateZoneRemark")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateZoneRemarkRequest::~UpdateZoneRemarkRequest()
{}

std::string UpdateZoneRemarkRequest::getRemark()const
{
	return remark_;
}

void UpdateZoneRemarkRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setParameter("Remark", remark);
}

std::string UpdateZoneRemarkRequest::getUserClientIp()const
{
	return userClientIp_;
}

void UpdateZoneRemarkRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

std::string UpdateZoneRemarkRequest::getZoneId()const
{
	return zoneId_;
}

void UpdateZoneRemarkRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string UpdateZoneRemarkRequest::getLang()const
{
	return lang_;
}

void UpdateZoneRemarkRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

