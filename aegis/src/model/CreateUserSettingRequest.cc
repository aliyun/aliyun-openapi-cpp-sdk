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

#include <alibabacloud/aegis/model/CreateUserSettingRequest.h>

using AlibabaCloud::Aegis::Model::CreateUserSettingRequest;

CreateUserSettingRequest::CreateUserSettingRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "CreateUserSetting")
{}

CreateUserSettingRequest::~CreateUserSettingRequest()
{}

std::string CreateUserSettingRequest::getAlertLevels()const
{
	return alertLevels_;
}

void CreateUserSettingRequest::setAlertLevels(const std::string& alertLevels)
{
	alertLevels_ = alertLevels;
	setCoreParameter("AlertLevels", alertLevels);
}

int CreateUserSettingRequest::getInvalidWarningKeepDays()const
{
	return invalidWarningKeepDays_;
}

void CreateUserSettingRequest::setInvalidWarningKeepDays(int invalidWarningKeepDays)
{
	invalidWarningKeepDays_ = invalidWarningKeepDays;
	setCoreParameter("InvalidWarningKeepDays", std::to_string(invalidWarningKeepDays));
}

std::string CreateUserSettingRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateUserSettingRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

