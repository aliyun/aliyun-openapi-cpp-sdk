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

#include <alibabacloud/ims/model/GetSecurityPreferenceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ims;
using namespace AlibabaCloud::Ims::Model;

GetSecurityPreferenceResult::GetSecurityPreferenceResult() :
	ServiceResult()
{}

GetSecurityPreferenceResult::GetSecurityPreferenceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSecurityPreferenceResult::~GetSecurityPreferenceResult()
{}

void GetSecurityPreferenceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto securityPreferenceNode = value["SecurityPreference"];
	auto accessKeyPreferenceNode = securityPreferenceNode["AccessKeyPreference"];
	if(!accessKeyPreferenceNode["AllowUserToManageAccessKeys"].isNull())
		securityPreference_.accessKeyPreference.allowUserToManageAccessKeys = accessKeyPreferenceNode["AllowUserToManageAccessKeys"].asString() == "true";
	auto loginProfilePreferenceNode = securityPreferenceNode["LoginProfilePreference"];
	if(!loginProfilePreferenceNode["EnableSaveMFATicket"].isNull())
		securityPreference_.loginProfilePreference.enableSaveMFATicket = loginProfilePreferenceNode["EnableSaveMFATicket"].asString() == "true";
	if(!loginProfilePreferenceNode["LoginSessionDuration"].isNull())
		securityPreference_.loginProfilePreference.loginSessionDuration = std::stoi(loginProfilePreferenceNode["LoginSessionDuration"].asString());
	if(!loginProfilePreferenceNode["LoginNetworkMasks"].isNull())
		securityPreference_.loginProfilePreference.loginNetworkMasks = loginProfilePreferenceNode["LoginNetworkMasks"].asString();
	if(!loginProfilePreferenceNode["AllowUserToChangePassword"].isNull())
		securityPreference_.loginProfilePreference.allowUserToChangePassword = loginProfilePreferenceNode["AllowUserToChangePassword"].asString() == "true";
	if(!loginProfilePreferenceNode["EnforceMFAForLogin"].isNull())
		securityPreference_.loginProfilePreference.enforceMFAForLogin = loginProfilePreferenceNode["EnforceMFAForLogin"].asString() == "true";
	if(!loginProfilePreferenceNode["OperationForRiskLogin"].isNull())
		securityPreference_.loginProfilePreference.operationForRiskLogin = loginProfilePreferenceNode["OperationForRiskLogin"].asString();
	if(!loginProfilePreferenceNode["MFAOperationForLogin"].isNull())
		securityPreference_.loginProfilePreference.mFAOperationForLogin = loginProfilePreferenceNode["MFAOperationForLogin"].asString();
	auto mFAPreferenceNode = securityPreferenceNode["MFAPreference"];
	if(!mFAPreferenceNode["AllowUserToManageMFADevices"].isNull())
		securityPreference_.mFAPreference.allowUserToManageMFADevices = mFAPreferenceNode["AllowUserToManageMFADevices"].asString() == "true";
	auto verificationPreferenceNode = securityPreferenceNode["VerificationPreference"];
		auto allVerificationTypes = verificationPreferenceNode["VerificationTypes"]["VerificationType"];
		for (auto value : allVerificationTypes)
			securityPreference_.verificationPreference.verificationTypes.push_back(value.asString());
	auto personalInfoPreferenceNode = securityPreferenceNode["PersonalInfoPreference"];
	if(!personalInfoPreferenceNode["AllowUserToManagePersonalDingTalk"].isNull())
		securityPreference_.personalInfoPreference.allowUserToManagePersonalDingTalk = personalInfoPreferenceNode["AllowUserToManagePersonalDingTalk"].asString() == "true";
	auto applicationLoginPreferenceNode = securityPreferenceNode["ApplicationLoginPreference"];
	if(!applicationLoginPreferenceNode["AllowUserLongTermLogin"].isNull())
		securityPreference_.applicationLoginPreference.allowUserLongTermLogin = applicationLoginPreferenceNode["AllowUserLongTermLogin"].asString() == "true";

}

GetSecurityPreferenceResult::SecurityPreference GetSecurityPreferenceResult::getSecurityPreference()const
{
	return securityPreference_;
}

