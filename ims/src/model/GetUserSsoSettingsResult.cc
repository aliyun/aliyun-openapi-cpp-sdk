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

#include <alibabacloud/ims/model/GetUserSsoSettingsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ims;
using namespace AlibabaCloud::Ims::Model;

GetUserSsoSettingsResult::GetUserSsoSettingsResult() :
	ServiceResult()
{}

GetUserSsoSettingsResult::GetUserSsoSettingsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetUserSsoSettingsResult::~GetUserSsoSettingsResult()
{}

void GetUserSsoSettingsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto userSsoSettingsNode = value["UserSsoSettings"];
	if(!userSsoSettingsNode["AuxiliaryDomain"].isNull())
		userSsoSettings_.auxiliaryDomain = userSsoSettingsNode["AuxiliaryDomain"].asString();
	if(!userSsoSettingsNode["MetadataDocument"].isNull())
		userSsoSettings_.metadataDocument = userSsoSettingsNode["MetadataDocument"].asString();
	if(!userSsoSettingsNode["SsoEnabled"].isNull())
		userSsoSettings_.ssoEnabled = userSsoSettingsNode["SsoEnabled"].asString() == "true";
	if(!userSsoSettingsNode["UseTenantSpecificSp"].isNull())
		userSsoSettings_.useTenantSpecificSp = userSsoSettingsNode["UseTenantSpecificSp"].asString() == "true";
	if(!userSsoSettingsNode["Name"].isNull())
		userSsoSettings_.name = userSsoSettingsNode["Name"].asString();

}

GetUserSsoSettingsResult::UserSsoSettings GetUserSsoSettingsResult::getUserSsoSettings()const
{
	return userSsoSettings_;
}

