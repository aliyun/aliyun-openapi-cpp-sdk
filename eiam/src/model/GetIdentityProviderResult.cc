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

#include <alibabacloud/eiam/model/GetIdentityProviderResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eiam;
using namespace AlibabaCloud::Eiam::Model;

GetIdentityProviderResult::GetIdentityProviderResult() :
	ServiceResult()
{}

GetIdentityProviderResult::GetIdentityProviderResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetIdentityProviderResult::~GetIdentityProviderResult()
{}

void GetIdentityProviderResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto identityProviderDetailNode = value["IdentityProviderDetail"];
	if(!identityProviderDetailNode["AdvancedStatus"].isNull())
		identityProviderDetail_.advancedStatus = identityProviderDetailNode["AdvancedStatus"].asString();
	if(!identityProviderDetailNode["AuthnSourceSupplier"].isNull())
		identityProviderDetail_.authnSourceSupplier = identityProviderDetailNode["AuthnSourceSupplier"].asString();
	if(!identityProviderDetailNode["AuthnSourceType"].isNull())
		identityProviderDetail_.authnSourceType = identityProviderDetailNode["AuthnSourceType"].asString();
	if(!identityProviderDetailNode["AuthnStatus"].isNull())
		identityProviderDetail_.authnStatus = identityProviderDetailNode["AuthnStatus"].asString();
	if(!identityProviderDetailNode["CreateTime"].isNull())
		identityProviderDetail_.createTime = std::stol(identityProviderDetailNode["CreateTime"].asString());
	if(!identityProviderDetailNode["Description"].isNull())
		identityProviderDetail_.description = identityProviderDetailNode["Description"].asString();
	if(!identityProviderDetailNode["IdentityProviderExternalId"].isNull())
		identityProviderDetail_.identityProviderExternalId = identityProviderDetailNode["IdentityProviderExternalId"].asString();
	if(!identityProviderDetailNode["IdentityProviderId"].isNull())
		identityProviderDetail_.identityProviderId = identityProviderDetailNode["IdentityProviderId"].asString();
	if(!identityProviderDetailNode["IdentityProviderName"].isNull())
		identityProviderDetail_.identityProviderName = identityProviderDetailNode["IdentityProviderName"].asString();
	if(!identityProviderDetailNode["IdentityProviderType"].isNull())
		identityProviderDetail_.identityProviderType = identityProviderDetailNode["IdentityProviderType"].asString();
	if(!identityProviderDetailNode["InstanceId"].isNull())
		identityProviderDetail_.instanceId = identityProviderDetailNode["InstanceId"].asString();
	if(!identityProviderDetailNode["LastStatusCheckJobResult"].isNull())
		identityProviderDetail_.lastStatusCheckJobResult = identityProviderDetailNode["LastStatusCheckJobResult"].asString();
	if(!identityProviderDetailNode["LockReason"].isNull())
		identityProviderDetail_.lockReason = identityProviderDetailNode["LockReason"].asString();
	if(!identityProviderDetailNode["NetworkAccessEndpointId"].isNull())
		identityProviderDetail_.networkAccessEndpointId = identityProviderDetailNode["NetworkAccessEndpointId"].asString();
	if(!identityProviderDetailNode["UdPullStatus"].isNull())
		identityProviderDetail_.udPullStatus = identityProviderDetailNode["UdPullStatus"].asString();
	if(!identityProviderDetailNode["UdPushStatus"].isNull())
		identityProviderDetail_.udPushStatus = identityProviderDetailNode["UdPushStatus"].asString();
	if(!identityProviderDetailNode["UpdateTime"].isNull())
		identityProviderDetail_.updateTime = std::stol(identityProviderDetailNode["UpdateTime"].asString());
	if(!identityProviderDetailNode["LogoUrl"].isNull())
		identityProviderDetail_.logoUrl = identityProviderDetailNode["LogoUrl"].asString();
	auto dingtalkAppConfigNode = identityProviderDetailNode["DingtalkAppConfig"];
	if(!dingtalkAppConfigNode["AppKey"].isNull())
		identityProviderDetail_.dingtalkAppConfig.appKey = dingtalkAppConfigNode["AppKey"].asString();
	if(!dingtalkAppConfigNode["AppSecret"].isNull())
		identityProviderDetail_.dingtalkAppConfig.appSecret = dingtalkAppConfigNode["AppSecret"].asString();
	if(!dingtalkAppConfigNode["CorpId"].isNull())
		identityProviderDetail_.dingtalkAppConfig.corpId = dingtalkAppConfigNode["CorpId"].asString();
	if(!dingtalkAppConfigNode["DingtalkVersion"].isNull())
		identityProviderDetail_.dingtalkAppConfig.dingtalkVersion = dingtalkAppConfigNode["DingtalkVersion"].asString();
	auto dingtalkProvisioningConfigNode = identityProviderDetailNode["DingtalkProvisioningConfig"];
	if(!dingtalkProvisioningConfigNode["CorpId"].isNull())
		identityProviderDetail_.dingtalkProvisioningConfig.corpId = dingtalkProvisioningConfigNode["CorpId"].asString();
	if(!dingtalkProvisioningConfigNode["CorpName"].isNull())
		identityProviderDetail_.dingtalkProvisioningConfig.corpName = dingtalkProvisioningConfigNode["CorpName"].asString();
	auto allAuthedDepartmentIdsNode = dingtalkProvisioningConfigNode["AuthedDepartmentIds"]["AuthedDepartmentId"];
	for (auto dingtalkProvisioningConfigNodeAuthedDepartmentIdsAuthedDepartmentId : allAuthedDepartmentIdsNode)
	{
		IdentityProviderDetail::DingtalkProvisioningConfig::AuthedDepartmentId authedDepartmentIdObject;
		if(!dingtalkProvisioningConfigNodeAuthedDepartmentIdsAuthedDepartmentId["DeptId"].isNull())
			authedDepartmentIdObject.deptId = dingtalkProvisioningConfigNodeAuthedDepartmentIdsAuthedDepartmentId["DeptId"].asString();
		if(!dingtalkProvisioningConfigNodeAuthedDepartmentIdsAuthedDepartmentId["DeptName"].isNull())
			authedDepartmentIdObject.deptName = dingtalkProvisioningConfigNodeAuthedDepartmentIdsAuthedDepartmentId["DeptName"].asString();
		identityProviderDetail_.dingtalkProvisioningConfig.authedDepartmentIds.push_back(authedDepartmentIdObject);
	}
	auto allAuthedUsersNode = dingtalkProvisioningConfigNode["AuthedUsers"]["AuthedUser"];
	for (auto dingtalkProvisioningConfigNodeAuthedUsersAuthedUser : allAuthedUsersNode)
	{
		IdentityProviderDetail::DingtalkProvisioningConfig::AuthedUser authedUserObject;
		if(!dingtalkProvisioningConfigNodeAuthedUsersAuthedUser["Name"].isNull())
			authedUserObject.name = dingtalkProvisioningConfigNodeAuthedUsersAuthedUser["Name"].asString();
		if(!dingtalkProvisioningConfigNodeAuthedUsersAuthedUser["UserId"].isNull())
			authedUserObject.userId = dingtalkProvisioningConfigNodeAuthedUsersAuthedUser["UserId"].asString();
		identityProviderDetail_.dingtalkProvisioningConfig.authedUsers.push_back(authedUserObject);
	}
	auto larkConfigNode = identityProviderDetailNode["LarkConfig"];
	if(!larkConfigNode["AppId"].isNull())
		identityProviderDetail_.larkConfig.appId = larkConfigNode["AppId"].asString();
	if(!larkConfigNode["AppSecret"].isNull())
		identityProviderDetail_.larkConfig.appSecret = larkConfigNode["AppSecret"].asString();
	if(!larkConfigNode["EnterpriseNumber"].isNull())
		identityProviderDetail_.larkConfig.enterpriseNumber = larkConfigNode["EnterpriseNumber"].asString();
	if(!larkConfigNode["EncryptKey"].isNull())
		identityProviderDetail_.larkConfig.encryptKey = larkConfigNode["EncryptKey"].asString();
	if(!larkConfigNode["VerificationToken"].isNull())
		identityProviderDetail_.larkConfig.verificationToken = larkConfigNode["VerificationToken"].asString();
	auto ldapConfigNode = identityProviderDetailNode["LdapConfig"];
	if(!ldapConfigNode["AdministratorPassword"].isNull())
		identityProviderDetail_.ldapConfig.administratorPassword = ldapConfigNode["AdministratorPassword"].asString();
	if(!ldapConfigNode["AdministratorUsername"].isNull())
		identityProviderDetail_.ldapConfig.administratorUsername = ldapConfigNode["AdministratorUsername"].asString();
	if(!ldapConfigNode["CertificateFingerprintStatus"].isNull())
		identityProviderDetail_.ldapConfig.certificateFingerprintStatus = ldapConfigNode["CertificateFingerprintStatus"].asString();
	if(!ldapConfigNode["LdapProtocol"].isNull())
		identityProviderDetail_.ldapConfig.ldapProtocol = ldapConfigNode["LdapProtocol"].asString();
	if(!ldapConfigNode["LdapServerHost"].isNull())
		identityProviderDetail_.ldapConfig.ldapServerHost = ldapConfigNode["LdapServerHost"].asString();
	if(!ldapConfigNode["LdapServerPort"].isNull())
		identityProviderDetail_.ldapConfig.ldapServerPort = std::stoi(ldapConfigNode["LdapServerPort"].asString());
	if(!ldapConfigNode["StartTlsStatus"].isNull())
		identityProviderDetail_.ldapConfig.startTlsStatus = ldapConfigNode["StartTlsStatus"].asString();
		auto allCertificateFingerprints = ldapConfigNode["CertificateFingerprints"]["certificateFingerprint"];
		for (auto value : allCertificateFingerprints)
			identityProviderDetail_.ldapConfig.certificateFingerprints.push_back(value.asString());
	auto oidcConfigNode = identityProviderDetailNode["OidcConfig"];
	if(!oidcConfigNode["GrantType"].isNull())
		identityProviderDetail_.oidcConfig.grantType = oidcConfigNode["GrantType"].asString();
	if(!oidcConfigNode["PkceChallengeMethod"].isNull())
		identityProviderDetail_.oidcConfig.pkceChallengeMethod = oidcConfigNode["PkceChallengeMethod"].asString();
	if(!oidcConfigNode["PkceRequired"].isNull())
		identityProviderDetail_.oidcConfig.pkceRequired = oidcConfigNode["PkceRequired"].asString() == "true";
	auto authnParamNode = oidcConfigNode["AuthnParam"];
	if(!authnParamNode["AuthnMethod"].isNull())
		identityProviderDetail_.oidcConfig.authnParam.authnMethod = authnParamNode["AuthnMethod"].asString();
	if(!authnParamNode["ClientId"].isNull())
		identityProviderDetail_.oidcConfig.authnParam.clientId = authnParamNode["ClientId"].asString();
	if(!authnParamNode["ClientSecret"].isNull())
		identityProviderDetail_.oidcConfig.authnParam.clientSecret = authnParamNode["ClientSecret"].asString();
	auto endpointConfigNode = oidcConfigNode["EndpointConfig"];
	if(!endpointConfigNode["AuthorizationEndpoint"].isNull())
		identityProviderDetail_.oidcConfig.endpointConfig.authorizationEndpoint = endpointConfigNode["AuthorizationEndpoint"].asString();
	if(!endpointConfigNode["Issuer"].isNull())
		identityProviderDetail_.oidcConfig.endpointConfig.issuer = endpointConfigNode["Issuer"].asString();
	if(!endpointConfigNode["JwksUri"].isNull())
		identityProviderDetail_.oidcConfig.endpointConfig.jwksUri = endpointConfigNode["JwksUri"].asString();
	if(!endpointConfigNode["TokenEndpoint"].isNull())
		identityProviderDetail_.oidcConfig.endpointConfig.tokenEndpoint = endpointConfigNode["TokenEndpoint"].asString();
	if(!endpointConfigNode["UserinfoEndpoint"].isNull())
		identityProviderDetail_.oidcConfig.endpointConfig.userinfoEndpoint = endpointConfigNode["UserinfoEndpoint"].asString();
		auto allGrantScopes = oidcConfigNode["GrantScopes"]["GrantScop"];
		for (auto value : allGrantScopes)
			identityProviderDetail_.oidcConfig.grantScopes.push_back(value.asString());
	auto udPullConfigNode = identityProviderDetailNode["UdPullConfig"];
	if(!udPullConfigNode["GroupSyncStatus"].isNull())
		identityProviderDetail_.udPullConfig.groupSyncStatus = udPullConfigNode["GroupSyncStatus"].asString();
	if(!udPullConfigNode["IncrementalCallbackStatus"].isNull())
		identityProviderDetail_.udPullConfig.incrementalCallbackStatus = udPullConfigNode["IncrementalCallbackStatus"].asString();
	auto udSyncScopeConfigNode = udPullConfigNode["UdSyncScopeConfig"];
	if(!udSyncScopeConfigNode["TargetScope"].isNull())
		identityProviderDetail_.udPullConfig.udSyncScopeConfig.targetScope = udSyncScopeConfigNode["TargetScope"].asString();
		auto allSourceScopes = udSyncScopeConfigNode["SourceScopes"]["SourceScop"];
		for (auto value : allSourceScopes)
			identityProviderDetail_.udPullConfig.udSyncScopeConfig.sourceScopes.push_back(value.asString());
	auto udPushConfigNode = identityProviderDetailNode["UdPushConfig"];
	if(!udPushConfigNode["IncrementalCallbackStatus"].isNull())
		identityProviderDetail_.udPushConfig.incrementalCallbackStatus = udPushConfigNode["IncrementalCallbackStatus"].asString();
	auto allUdSyncScopeConfigsNode = udPushConfigNode["UdSyncScopeConfigs"]["UdSyncScopeConfig"];
	for (auto udPushConfigNodeUdSyncScopeConfigsUdSyncScopeConfig : allUdSyncScopeConfigsNode)
	{
		IdentityProviderDetail::UdPushConfig::UdSyncScopeConfig1 udSyncScopeConfig1Object;
		if(!udPushConfigNodeUdSyncScopeConfigsUdSyncScopeConfig["TargetScope"].isNull())
			udSyncScopeConfig1Object.targetScope = udPushConfigNodeUdSyncScopeConfigsUdSyncScopeConfig["TargetScope"].asString();
		auto allSourceScopes2 = value["SourceScopes"]["SourceScop"];
		for (auto value : allSourceScopes2)
			udSyncScopeConfig1Object.sourceScopes2.push_back(value.asString());
		identityProviderDetail_.udPushConfig.udSyncScopeConfigs.push_back(udSyncScopeConfig1Object);
	}
	auto weComConfigNode = identityProviderDetailNode["WeComConfig"];
	if(!weComConfigNode["AgentId"].isNull())
		identityProviderDetail_.weComConfig.agentId = weComConfigNode["AgentId"].asString();
	if(!weComConfigNode["AuthorizeCallbackDomain"].isNull())
		identityProviderDetail_.weComConfig.authorizeCallbackDomain = weComConfigNode["AuthorizeCallbackDomain"].asString();
	if(!weComConfigNode["CorpId"].isNull())
		identityProviderDetail_.weComConfig.corpId = weComConfigNode["CorpId"].asString();
	if(!weComConfigNode["CorpSecret"].isNull())
		identityProviderDetail_.weComConfig.corpSecret = weComConfigNode["CorpSecret"].asString();
	if(!weComConfigNode["TrustableDomain"].isNull())
		identityProviderDetail_.weComConfig.trustableDomain = weComConfigNode["TrustableDomain"].asString();

}

GetIdentityProviderResult::IdentityProviderDetail GetIdentityProviderResult::getIdentityProviderDetail()const
{
	return identityProviderDetail_;
}

