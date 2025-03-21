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

#include <alibabacloud/eiam/model/GetPasswordExpirationConfigurationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

GetPasswordExpirationConfigurationResult::GetPasswordExpirationConfigurationResult() :
	ServiceResult()
{}

GetPasswordExpirationConfigurationResult::GetPasswordExpirationConfigurationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPasswordExpirationConfigurationResult::~GetPasswordExpirationConfigurationResult()
{}

void GetPasswordExpirationConfigurationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto passwordExpirationConfigurationNode = value["PasswordExpirationConfiguration"];
	if(!passwordExpirationConfigurationNode["PasswordExpirationStatus"].isNull())
		passwordExpirationConfiguration_.passwordExpirationStatus = passwordExpirationConfigurationNode["PasswordExpirationStatus"].asString();
	if(!passwordExpirationConfigurationNode["PasswordValidMaxDay"].isNull())
		passwordExpirationConfiguration_.passwordValidMaxDay = std::stoi(passwordExpirationConfigurationNode["PasswordValidMaxDay"].asString());
	if(!passwordExpirationConfigurationNode["PasswordExpirationAction"].isNull())
		passwordExpirationConfiguration_.passwordExpirationAction = passwordExpirationConfigurationNode["PasswordExpirationAction"].asString();
	if(!passwordExpirationConfigurationNode["PasswordExpirationNotificationStatus"].isNull())
		passwordExpirationConfiguration_.passwordExpirationNotificationStatus = passwordExpirationConfigurationNode["PasswordExpirationNotificationStatus"].asString();
	if(!passwordExpirationConfigurationNode["PasswordExpirationNotificationDuration"].isNull())
		passwordExpirationConfiguration_.passwordExpirationNotificationDuration = std::stoi(passwordExpirationConfigurationNode["PasswordExpirationNotificationDuration"].asString());
	if(!passwordExpirationConfigurationNode["PasswordForcedUpdateDuration"].isNull())
		passwordExpirationConfiguration_.passwordForcedUpdateDuration = std::stoi(passwordExpirationConfigurationNode["PasswordForcedUpdateDuration"].asString());
		auto allPasswordExpirationNotificationChannels = passwordExpirationConfigurationNode["PasswordExpirationNotificationChannels"]["PasswordExpirationNotificationChannel"];
		for (auto value : allPasswordExpirationNotificationChannels)
			passwordExpirationConfiguration_.passwordExpirationNotificationChannels.push_back(value.asString());
		auto allEffectiveAuthenticationSourceIds = passwordExpirationConfigurationNode["EffectiveAuthenticationSourceIds"]["EffectiveAuthenticationSourceIds"];
		for (auto value : allEffectiveAuthenticationSourceIds)
			passwordExpirationConfiguration_.effectiveAuthenticationSourceIds.push_back(value.asString());

}

GetPasswordExpirationConfigurationResult::PasswordExpirationConfiguration GetPasswordExpirationConfigurationResult::getPasswordExpirationConfiguration()const
{
	return passwordExpirationConfiguration_;
}

