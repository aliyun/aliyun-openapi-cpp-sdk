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

#include <alibabacloud/eiam/model/GetApplicationProvisioningConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

GetApplicationProvisioningConfigResult::GetApplicationProvisioningConfigResult() :
	ServiceResult()
{}

GetApplicationProvisioningConfigResult::GetApplicationProvisioningConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetApplicationProvisioningConfigResult::~GetApplicationProvisioningConfigResult()
{}

void GetApplicationProvisioningConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto applicationProvisioningConfigNode = value["ApplicationProvisioningConfig"];
	if(!applicationProvisioningConfigNode["InstanceId"].isNull())
		applicationProvisioningConfig_.instanceId = applicationProvisioningConfigNode["InstanceId"].asString();
	if(!applicationProvisioningConfigNode["ApplicationId"].isNull())
		applicationProvisioningConfig_.applicationId = applicationProvisioningConfigNode["ApplicationId"].asString();
	if(!applicationProvisioningConfigNode["ProvisionProtocolType"].isNull())
		applicationProvisioningConfig_.provisionProtocolType = applicationProvisioningConfigNode["ProvisionProtocolType"].asString();
	if(!applicationProvisioningConfigNode["ProvisionJwksEndpoint"].isNull())
		applicationProvisioningConfig_.provisionJwksEndpoint = applicationProvisioningConfigNode["ProvisionJwksEndpoint"].asString();
	if(!applicationProvisioningConfigNode["ProvisionPassword"].isNull())
		applicationProvisioningConfig_.provisionPassword = applicationProvisioningConfigNode["ProvisionPassword"].asString() == "true";
	if(!applicationProvisioningConfigNode["Status"].isNull())
		applicationProvisioningConfig_.status = applicationProvisioningConfigNode["Status"].asString();
	if(!applicationProvisioningConfigNode["ConfigOperateMode"].isNull())
		applicationProvisioningConfig_.configOperateMode = applicationProvisioningConfigNode["ConfigOperateMode"].asString();
	auto callbackProvisioningConfigNode = applicationProvisioningConfigNode["CallbackProvisioningConfig"];
	if(!callbackProvisioningConfigNode["CallbackUrl"].isNull())
		applicationProvisioningConfig_.callbackProvisioningConfig.callbackUrl = callbackProvisioningConfigNode["CallbackUrl"].asString();
	if(!callbackProvisioningConfigNode["EncryptKey"].isNull())
		applicationProvisioningConfig_.callbackProvisioningConfig.encryptKey = callbackProvisioningConfigNode["EncryptKey"].asString();
	if(!callbackProvisioningConfigNode["EncryptRequired"].isNull())
		applicationProvisioningConfig_.callbackProvisioningConfig.encryptRequired = callbackProvisioningConfigNode["EncryptRequired"].asString() == "true";
		auto allListenEventScopes = callbackProvisioningConfigNode["ListenEventScopes"]["ListenEventScop"];
		for (auto value : allListenEventScopes)
			applicationProvisioningConfig_.callbackProvisioningConfig.listenEventScopes.push_back(value.asString());
	auto scimProvisioningConfigNode = applicationProvisioningConfigNode["ScimProvisioningConfig"];
	if(!scimProvisioningConfigNode["ScimBaseUrl"].isNull())
		applicationProvisioningConfig_.scimProvisioningConfig.scimBaseUrl = scimProvisioningConfigNode["ScimBaseUrl"].asString();
	auto authnConfigurationNode = scimProvisioningConfigNode["AuthnConfiguration"];
	if(!authnConfigurationNode["AuthnMode"].isNull())
		applicationProvisioningConfig_.scimProvisioningConfig.authnConfiguration.authnMode = authnConfigurationNode["AuthnMode"].asString();
	if(!authnConfigurationNode["GrantType"].isNull())
		applicationProvisioningConfig_.scimProvisioningConfig.authnConfiguration.grantType = authnConfigurationNode["GrantType"].asString();
	auto authnParamNode = authnConfigurationNode["AuthnParam"];
	if(!authnParamNode["AccessToken"].isNull())
		applicationProvisioningConfig_.scimProvisioningConfig.authnConfiguration.authnParam.accessToken = authnParamNode["AccessToken"].asString();
	if(!authnParamNode["TokenEndpoint"].isNull())
		applicationProvisioningConfig_.scimProvisioningConfig.authnConfiguration.authnParam.tokenEndpoint = authnParamNode["TokenEndpoint"].asString();
	if(!authnParamNode["ClientId"].isNull())
		applicationProvisioningConfig_.scimProvisioningConfig.authnConfiguration.authnParam.clientId = authnParamNode["ClientId"].asString();
	if(!authnParamNode["ClientSecret"].isNull())
		applicationProvisioningConfig_.scimProvisioningConfig.authnConfiguration.authnParam.clientSecret = authnParamNode["ClientSecret"].asString();
	if(!authnParamNode["AuthnMethod"].isNull())
		applicationProvisioningConfig_.scimProvisioningConfig.authnConfiguration.authnParam.authnMethod = authnParamNode["AuthnMethod"].asString();
		auto allProvisioningActions = scimProvisioningConfigNode["ProvisioningActions"]["ProvisioningAction"];
		for (auto value : allProvisioningActions)
			applicationProvisioningConfig_.scimProvisioningConfig.provisioningActions.push_back(value.asString());
		auto allFullPushScopes = scimProvisioningConfigNode["FullPushScopes"]["FullPushScop"];
		for (auto value : allFullPushScopes)
			applicationProvisioningConfig_.scimProvisioningConfig.fullPushScopes.push_back(value.asString());

}

GetApplicationProvisioningConfigResult::ApplicationProvisioningConfig GetApplicationProvisioningConfigResult::getApplicationProvisioningConfig()const
{
	return applicationProvisioningConfig_;
}

