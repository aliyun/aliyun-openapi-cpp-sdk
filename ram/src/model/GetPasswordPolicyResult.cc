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

#include <alibabacloud/ram/model/GetPasswordPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ram;
using namespace AlibabaCloud::Ram::Model;

GetPasswordPolicyResult::GetPasswordPolicyResult() :
	ServiceResult()
{}

GetPasswordPolicyResult::GetPasswordPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPasswordPolicyResult::~GetPasswordPolicyResult()
{}

void GetPasswordPolicyResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto passwordPolicyNode = value["PasswordPolicy"];
	if(!passwordPolicyNode["MinimumPasswordLength"].isNull())
		passwordPolicy_.minimumPasswordLength = std::stoi(passwordPolicyNode["MinimumPasswordLength"].asString());
	if(!passwordPolicyNode["RequireLowercaseCharacters"].isNull())
		passwordPolicy_.requireLowercaseCharacters = passwordPolicyNode["RequireLowercaseCharacters"].asString() == "true";
	if(!passwordPolicyNode["RequireUppercaseCharacters"].isNull())
		passwordPolicy_.requireUppercaseCharacters = passwordPolicyNode["RequireUppercaseCharacters"].asString() == "true";
	if(!passwordPolicyNode["RequireNumbers"].isNull())
		passwordPolicy_.requireNumbers = passwordPolicyNode["RequireNumbers"].asString() == "true";
	if(!passwordPolicyNode["RequireSymbols"].isNull())
		passwordPolicy_.requireSymbols = passwordPolicyNode["RequireSymbols"].asString() == "true";
	if(!passwordPolicyNode["HardExpiry"].isNull())
		passwordPolicy_.hardExpiry = passwordPolicyNode["HardExpiry"].asString() == "true";
	if(!passwordPolicyNode["MaxPasswordAge"].isNull())
		passwordPolicy_.maxPasswordAge = std::stoi(passwordPolicyNode["MaxPasswordAge"].asString());
	if(!passwordPolicyNode["PasswordReusePrevention"].isNull())
		passwordPolicy_.passwordReusePrevention = std::stoi(passwordPolicyNode["PasswordReusePrevention"].asString());
	if(!passwordPolicyNode["MaxLoginAttemps"].isNull())
		passwordPolicy_.maxLoginAttemps = std::stoi(passwordPolicyNode["MaxLoginAttemps"].asString());

}

GetPasswordPolicyResult::PasswordPolicy GetPasswordPolicyResult::getPasswordPolicy()const
{
	return passwordPolicy_;
}

