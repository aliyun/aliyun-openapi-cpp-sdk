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

#include <alibabacloud/alidns/model/SetGtmMonitorStatusRequest.h>

using AlibabaCloud::Alidns::Model::SetGtmMonitorStatusRequest;

SetGtmMonitorStatusRequest::SetGtmMonitorStatusRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "SetGtmMonitorStatus")
{}

SetGtmMonitorStatusRequest::~SetGtmMonitorStatusRequest()
{}

std::string SetGtmMonitorStatusRequest::getUserClientIp()const
{
	return userClientIp_;
}

void SetGtmMonitorStatusRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setCoreParameter("UserClientIp", userClientIp);
}

std::string SetGtmMonitorStatusRequest::getMonitorConfigId()const
{
	return monitorConfigId_;
}

void SetGtmMonitorStatusRequest::setMonitorConfigId(const std::string& monitorConfigId)
{
	monitorConfigId_ = monitorConfigId;
	setCoreParameter("MonitorConfigId", monitorConfigId);
}

std::string SetGtmMonitorStatusRequest::getLang()const
{
	return lang_;
}

void SetGtmMonitorStatusRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setCoreParameter("Lang", lang);
}

std::string SetGtmMonitorStatusRequest::getStatus()const
{
	return status_;
}

void SetGtmMonitorStatusRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

