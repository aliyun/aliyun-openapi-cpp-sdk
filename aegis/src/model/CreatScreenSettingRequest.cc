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

#include <alibabacloud/aegis/model/CreatScreenSettingRequest.h>

using AlibabaCloud::Aegis::Model::CreatScreenSettingRequest;

CreatScreenSettingRequest::CreatScreenSettingRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "CreatScreenSetting")
{}

CreatScreenSettingRequest::~CreatScreenSettingRequest()
{}

std::string CreatScreenSettingRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreatScreenSettingRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

std::string CreatScreenSettingRequest::getScreenTitle()const
{
	return screenTitle_;
}

void CreatScreenSettingRequest::setScreenTitle(const std::string& screenTitle)
{
	screenTitle_ = screenTitle;
	setCoreParameter("ScreenTitle", screenTitle);
}

std::string CreatScreenSettingRequest::getScreenIdSetting()const
{
	return screenIdSetting_;
}

void CreatScreenSettingRequest::setScreenIdSetting(const std::string& screenIdSetting)
{
	screenIdSetting_ = screenIdSetting;
	setCoreParameter("ScreenIdSetting", screenIdSetting);
}

