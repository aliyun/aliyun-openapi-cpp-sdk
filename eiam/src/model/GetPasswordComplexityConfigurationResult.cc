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

#include <alibabacloud/eiam/model/GetPasswordComplexityConfigurationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

GetPasswordComplexityConfigurationResult::GetPasswordComplexityConfigurationResult() :
	ServiceResult()
{}

GetPasswordComplexityConfigurationResult::GetPasswordComplexityConfigurationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPasswordComplexityConfigurationResult::~GetPasswordComplexityConfigurationResult()
{}

void GetPasswordComplexityConfigurationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto passwordComplexityConfigurationNode = value["PasswordComplexityConfiguration"];
	if(!passwordComplexityConfigurationNode["PasswordMinLength"].isNull())
		passwordComplexityConfiguration_.passwordMinLength = std::stoi(passwordComplexityConfigurationNode["PasswordMinLength"].asString());
	auto allPasswordComplexityRulesNode = passwordComplexityConfigurationNode["PasswordComplexityRules"]["PasswordComplexityRul"];
	for (auto passwordComplexityConfigurationNodePasswordComplexityRulesPasswordComplexityRul : allPasswordComplexityRulesNode)
	{
		PasswordComplexityConfiguration::PasswordComplexityRul passwordComplexityRulObject;
		if(!passwordComplexityConfigurationNodePasswordComplexityRulesPasswordComplexityRul["PasswordCheckType"].isNull())
			passwordComplexityRulObject.passwordCheckType = passwordComplexityConfigurationNodePasswordComplexityRulesPasswordComplexityRul["PasswordCheckType"].asString();
		passwordComplexityConfiguration_.passwordComplexityRules.push_back(passwordComplexityRulObject);
	}

}

GetPasswordComplexityConfigurationResult::PasswordComplexityConfiguration GetPasswordComplexityConfigurationResult::getPasswordComplexityConfiguration()const
{
	return passwordComplexityConfiguration_;
}

