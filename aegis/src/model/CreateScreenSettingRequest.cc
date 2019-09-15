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

#include <alibabacloud/aegis/model/CreateScreenSettingRequest.h>

using AlibabaCloud::Aegis::Model::CreateScreenSettingRequest;

CreateScreenSettingRequest::CreateScreenSettingRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "CreateScreenSetting")
{}

CreateScreenSettingRequest::~CreateScreenSettingRequest()
{}

std::string CreateScreenSettingRequest::getTitle()const
{
	return title_;
}

void CreateScreenSettingRequest::setTitle(const std::string& title)
{
	title_ = title;
	setCoreParameter("Title", title);
}

std::string CreateScreenSettingRequest::getLogoUrl()const
{
	return logoUrl_;
}

void CreateScreenSettingRequest::setLogoUrl(const std::string& logoUrl)
{
	logoUrl_ = logoUrl;
	setCoreParameter("LogoUrl", logoUrl);
}

bool CreateScreenSettingRequest::getLogoPower()const
{
	return logoPower_;
}

void CreateScreenSettingRequest::setLogoPower(bool logoPower)
{
	logoPower_ = logoPower;
	setCoreParameter("LogoPower", logoPower ? "true" : "false");
}

std::string CreateScreenSettingRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateScreenSettingRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

int CreateScreenSettingRequest::getId()const
{
	return id_;
}

void CreateScreenSettingRequest::setId(int id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

std::string CreateScreenSettingRequest::getScreenDataMap()const
{
	return screenDataMap_;
}

void CreateScreenSettingRequest::setScreenDataMap(const std::string& screenDataMap)
{
	screenDataMap_ = screenDataMap;
	setCoreParameter("ScreenDataMap", screenDataMap);
}

int CreateScreenSettingRequest::getScreenDefault()const
{
	return screenDefault_;
}

void CreateScreenSettingRequest::setScreenDefault(int screenDefault)
{
	screenDefault_ = screenDefault;
	setCoreParameter("ScreenDefault", std::to_string(screenDefault));
}

std::string CreateScreenSettingRequest::getMonitorUrl()const
{
	return monitorUrl_;
}

void CreateScreenSettingRequest::setMonitorUrl(const std::string& monitorUrl)
{
	monitorUrl_ = monitorUrl;
	setCoreParameter("MonitorUrl", monitorUrl);
}

