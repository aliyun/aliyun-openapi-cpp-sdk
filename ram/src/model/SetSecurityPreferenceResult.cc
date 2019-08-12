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

#include <alibabacloud/ram/model/SetSecurityPreferenceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ram;
using namespace AlibabaCloud::Ram::Model;

SetSecurityPreferenceResult::SetSecurityPreferenceResult() :
	ServiceResult()
{}

SetSecurityPreferenceResult::SetSecurityPreferenceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SetSecurityPreferenceResult::~SetSecurityPreferenceResult()
{}

void SetSecurityPreferenceResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto securityPreferenceNode = value["SecurityPreference"];
	auto loginProfilePreferenceNode = securityPreferenceNode["LoginProfilePreference"];
	if(!loginProfilePreferenceNode["EnableSaveMFATicket"].isNull())
		securityPreference_.loginProfilePreference.enableSaveMFATicket = loginProfilePreferenceNode["EnableSaveMFATicket"].asString() == "true";
	if(!loginProfilePreferenceNode["AllowUserToChangePassword"].isNull())
		securityPreference_.loginProfilePreference.allowUserToChangePassword = loginProfilePreferenceNode["AllowUserToChangePassword"].asString() == "true";
	if(!loginProfilePreferenceNode["LoginSessionDuration"].isNull())
		securityPreference_.loginProfilePreference.loginSessionDuration = std::stoi(loginProfilePreferenceNode["LoginSessionDuration"].asString());
	if(!loginProfilePreferenceNode["LoginNetworkMasks"].isNull())
		securityPreference_.loginProfilePreference.loginNetworkMasks = loginProfilePreferenceNode["LoginNetworkMasks"].asString();
	auto accessKeyPreferenceNode = securityPreferenceNode["AccessKeyPreference"];
	if(!accessKeyPreferenceNode["AllowUserToManageAccessKeys"].isNull())
		securityPreference_.accessKeyPreference.allowUserToManageAccessKeys = accessKeyPreferenceNode["AllowUserToManageAccessKeys"].asString() == "true";
	auto publicKeyPreferenceNode = securityPreferenceNode["PublicKeyPreference"];
	if(!publicKeyPreferenceNode["AllowUserToManagePublicKeys"].isNull())
		securityPreference_.publicKeyPreference.allowUserToManagePublicKeys = publicKeyPreferenceNode["AllowUserToManagePublicKeys"].asString() == "true";
	auto mFAPreferenceNode = securityPreferenceNode["MFAPreference"];
	if(!mFAPreferenceNode["AllowUserToManageMFADevices"].isNull())
		securityPreference_.mFAPreference.allowUserToManageMFADevices = mFAPreferenceNode["AllowUserToManageMFADevices"].asString() == "true";

}

SetSecurityPreferenceResult::SecurityPreference SetSecurityPreferenceResult::getSecurityPreference()const
{
	return securityPreference_;
}

