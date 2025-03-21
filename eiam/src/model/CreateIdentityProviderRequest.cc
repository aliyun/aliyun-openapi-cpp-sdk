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

#include <alibabacloud/eiam/model/CreateIdentityProviderRequest.h>

using AlibabaCloud::Eiam::Model::CreateIdentityProviderRequest;

CreateIdentityProviderRequest::CreateIdentityProviderRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "CreateIdentityProvider") {
  setMethod(HttpRequest::Method::Post);
}

CreateIdentityProviderRequest::~CreateIdentityProviderRequest() {}

CreateIdentityProviderRequest::DingtalkAppConfig CreateIdentityProviderRequest::getDingtalkAppConfig() const {
  return dingtalkAppConfig_;
}

void CreateIdentityProviderRequest::setDingtalkAppConfig(const CreateIdentityProviderRequest::DingtalkAppConfig &dingtalkAppConfig) {
  dingtalkAppConfig_ = dingtalkAppConfig;
  setParameter(std::string("DingtalkAppConfig") + ".CorpId", dingtalkAppConfig.corpId);
  setParameter(std::string("DingtalkAppConfig") + ".DingtalkVersion", dingtalkAppConfig.dingtalkVersion);
  setParameter(std::string("DingtalkAppConfig") + ".AppSecret", dingtalkAppConfig.appSecret);
  setParameter(std::string("DingtalkAppConfig") + ".AppKey", dingtalkAppConfig.appKey);
}

std::string CreateIdentityProviderRequest::getNetworkAccessEndpointId() const {
  return networkAccessEndpointId_;
}

void CreateIdentityProviderRequest::setNetworkAccessEndpointId(const std::string &networkAccessEndpointId) {
  networkAccessEndpointId_ = networkAccessEndpointId;
  setParameter(std::string("NetworkAccessEndpointId"), networkAccessEndpointId);
}

CreateIdentityProviderRequest::AutoUpdateUserConfig CreateIdentityProviderRequest::getAutoUpdateUserConfig() const {
  return autoUpdateUserConfig_;
}

void CreateIdentityProviderRequest::setAutoUpdateUserConfig(const CreateIdentityProviderRequest::AutoUpdateUserConfig &autoUpdateUserConfig) {
  autoUpdateUserConfig_ = autoUpdateUserConfig;
  setParameter(std::string("AutoUpdateUserConfig") + ".AutoUpdateUserStatus", autoUpdateUserConfig.autoUpdateUserStatus);
}

std::string CreateIdentityProviderRequest::getLogoUrl() const {
  return logoUrl_;
}

void CreateIdentityProviderRequest::setLogoUrl(const std::string &logoUrl) {
  logoUrl_ = logoUrl;
  setParameter(std::string("LogoUrl"), logoUrl);
}

CreateIdentityProviderRequest::UdPullConfig CreateIdentityProviderRequest::getUdPullConfig() const {
  return udPullConfig_;
}

void CreateIdentityProviderRequest::setUdPullConfig(const CreateIdentityProviderRequest::UdPullConfig &udPullConfig) {
  udPullConfig_ = udPullConfig;
  setParameter(std::string("UdPullConfig") + ".GroupSyncStatus", udPullConfig.groupSyncStatus);
  setParameter(std::string("UdPullConfig") + ".UdSyncScopeConfig.TargetScope", udPullConfig.udSyncScopeConfig.targetScope);
  for(int dep1 = 0; dep1 != udPullConfig.udSyncScopeConfig.sourceScopes.size(); dep1++) {
    setParameter(std::string("UdPullConfig") + ".UdSyncScopeConfig.SourceScopes." + std::to_string(dep1 + 1), udPullConfig.udSyncScopeConfig.sourceScopes[dep1]);
  }
  setParameter(std::string("UdPullConfig") + ".PeriodicSyncStatus", udPullConfig.periodicSyncStatus);
  for(int dep1 = 0; dep1 != udPullConfig.periodicSyncConfig.periodicSyncTimes.size(); dep1++) {
    setParameter(std::string("UdPullConfig") + ".PeriodicSyncConfig.PeriodicSyncTimes." + std::to_string(dep1 + 1), std::to_string(udPullConfig.periodicSyncConfig.periodicSyncTimes[dep1]));
  }
  setParameter(std::string("UdPullConfig") + ".PeriodicSyncConfig.PeriodicSyncCron", udPullConfig.periodicSyncConfig.periodicSyncCron);
  setParameter(std::string("UdPullConfig") + ".PeriodicSyncConfig.PeriodicSyncType", udPullConfig.periodicSyncConfig.periodicSyncType);
  setParameter(std::string("UdPullConfig") + ".IncrementalCallbackStatus", udPullConfig.incrementalCallbackStatus);
}

CreateIdentityProviderRequest::LarkConfig CreateIdentityProviderRequest::getLarkConfig() const {
  return larkConfig_;
}

void CreateIdentityProviderRequest::setLarkConfig(const CreateIdentityProviderRequest::LarkConfig &larkConfig) {
  larkConfig_ = larkConfig;
  setParameter(std::string("LarkConfig") + ".EnterpriseNumber", larkConfig.enterpriseNumber);
  setParameter(std::string("LarkConfig") + ".AppId", larkConfig.appId);
  setParameter(std::string("LarkConfig") + ".AppSecret", larkConfig.appSecret);
  setParameter(std::string("LarkConfig") + ".VerificationToken", larkConfig.verificationToken);
  setParameter(std::string("LarkConfig") + ".EncryptKey", larkConfig.encryptKey);
}

CreateIdentityProviderRequest::WeComConfig CreateIdentityProviderRequest::getWeComConfig() const {
  return weComConfig_;
}

void CreateIdentityProviderRequest::setWeComConfig(const CreateIdentityProviderRequest::WeComConfig &weComConfig) {
  weComConfig_ = weComConfig;
  setParameter(std::string("WeComConfig") + ".AgentId", weComConfig.agentId);
  setParameter(std::string("WeComConfig") + ".CorpId", weComConfig.corpId);
  setParameter(std::string("WeComConfig") + ".CorpSecret", weComConfig.corpSecret);
  setParameter(std::string("WeComConfig") + ".AuthorizeCallbackDomain", weComConfig.authorizeCallbackDomain);
  setParameter(std::string("WeComConfig") + ".TrustableDomain", weComConfig.trustableDomain);
}

CreateIdentityProviderRequest::AutoCreateUserConfig CreateIdentityProviderRequest::getAutoCreateUserConfig() const {
  return autoCreateUserConfig_;
}

void CreateIdentityProviderRequest::setAutoCreateUserConfig(const CreateIdentityProviderRequest::AutoCreateUserConfig &autoCreateUserConfig) {
  autoCreateUserConfig_ = autoCreateUserConfig;
  setParameter(std::string("AutoCreateUserConfig") + ".AutoCreateUserStatus", autoCreateUserConfig.autoCreateUserStatus);
  for(int dep1 = 0; dep1 != autoCreateUserConfig.targetOrganizationalUnitIds.size(); dep1++) {
    setParameter(std::string("AutoCreateUserConfig") + ".TargetOrganizationalUnitIds." + std::to_string(dep1 + 1), autoCreateUserConfig.targetOrganizationalUnitIds[dep1]);
  }
}

CreateIdentityProviderRequest::AuthnConfig CreateIdentityProviderRequest::getAuthnConfig() const {
  return authnConfig_;
}

void CreateIdentityProviderRequest::setAuthnConfig(const CreateIdentityProviderRequest::AuthnConfig &authnConfig) {
  authnConfig_ = authnConfig;
  setParameter(std::string("AuthnConfig") + ".AuthnStatus", authnConfig.authnStatus);
  setParameter(std::string("AuthnConfig") + ".AutoUpdatePasswordStatus", authnConfig.autoUpdatePasswordStatus);
}

CreateIdentityProviderRequest::BindingConfig CreateIdentityProviderRequest::getBindingConfig() const {
  return bindingConfig_;
}

void CreateIdentityProviderRequest::setBindingConfig(const CreateIdentityProviderRequest::BindingConfig &bindingConfig) {
  bindingConfig_ = bindingConfig;
  for(int dep1 = 0; dep1 != bindingConfig.autoMatchUserProfileExpressions.size(); dep1++) {
    setParameter(std::string("BindingConfig") + ".AutoMatchUserProfileExpressions." + std::to_string(dep1 + 1) + ".SourceValueExpression", bindingConfig.autoMatchUserProfileExpressions[dep1].sourceValueExpression);
    setParameter(std::string("BindingConfig") + ".AutoMatchUserProfileExpressions." + std::to_string(dep1 + 1) + ".TargetFieldDescription", bindingConfig.autoMatchUserProfileExpressions[dep1].targetFieldDescription);
    setParameter(std::string("BindingConfig") + ".AutoMatchUserProfileExpressions." + std::to_string(dep1 + 1) + ".TargetField", bindingConfig.autoMatchUserProfileExpressions[dep1].targetField);
    setParameter(std::string("BindingConfig") + ".AutoMatchUserProfileExpressions." + std::to_string(dep1 + 1) + ".ExpressionMappingType", bindingConfig.autoMatchUserProfileExpressions[dep1].expressionMappingType);
  }
  setParameter(std::string("BindingConfig") + ".MappingBindingStatus", bindingConfig.mappingBindingStatus);
  setParameter(std::string("BindingConfig") + ".AutoMatchUserStatus", bindingConfig.autoMatchUserStatus);
}

std::string CreateIdentityProviderRequest::getIdentityProviderName() const {
  return identityProviderName_;
}

void CreateIdentityProviderRequest::setIdentityProviderName(const std::string &identityProviderName) {
  identityProviderName_ = identityProviderName;
  setParameter(std::string("IdentityProviderName"), identityProviderName);
}

CreateIdentityProviderRequest::LdapConfig CreateIdentityProviderRequest::getLdapConfig() const {
  return ldapConfig_;
}

void CreateIdentityProviderRequest::setLdapConfig(const CreateIdentityProviderRequest::LdapConfig &ldapConfig) {
  ldapConfig_ = ldapConfig;
  setParameter(std::string("LdapConfig") + ".GroupMemberAttributeName", ldapConfig.groupMemberAttributeName);
  setParameter(std::string("LdapConfig") + ".StartTlsStatus", ldapConfig.startTlsStatus);
  setParameter(std::string("LdapConfig") + ".LdapServerHost", ldapConfig.ldapServerHost);
  setParameter(std::string("LdapConfig") + ".GroupObjectClass", ldapConfig.groupObjectClass);
  setParameter(std::string("LdapConfig") + ".UserObjectClass", ldapConfig.userObjectClass);
  setParameter(std::string("LdapConfig") + ".UserObjectClassCustomFilter", ldapConfig.userObjectClassCustomFilter);
  for(int dep1 = 0; dep1 != ldapConfig.certificateFingerprints.size(); dep1++) {
    setParameter(std::string("LdapConfig") + ".CertificateFingerprints." + std::to_string(dep1 + 1), ldapConfig.certificateFingerprints[dep1]);
  }
  setParameter(std::string("LdapConfig") + ".LdapProtocol", ldapConfig.ldapProtocol);
  setParameter(std::string("LdapConfig") + ".GroupObjectClassCustomFilter", ldapConfig.groupObjectClassCustomFilter);
  setParameter(std::string("LdapConfig") + ".OrganizationUnitObjectClass", ldapConfig.organizationUnitObjectClass);
  setParameter(std::string("LdapConfig") + ".AdministratorUsername", ldapConfig.administratorUsername);
  setParameter(std::string("LdapConfig") + ".UserLoginIdentifier", ldapConfig.userLoginIdentifier);
  setParameter(std::string("LdapConfig") + ".AdministratorPassword", ldapConfig.administratorPassword);
  setParameter(std::string("LdapConfig") + ".CertificateFingerprintStatus", ldapConfig.certificateFingerprintStatus);
  setParameter(std::string("LdapConfig") + ".LdapServerPort", std::to_string(ldapConfig.ldapServerPort));
}

std::string CreateIdentityProviderRequest::getInstanceId() const {
  return instanceId_;
}

void CreateIdentityProviderRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

CreateIdentityProviderRequest::UdPushConfig CreateIdentityProviderRequest::getUdPushConfig() const {
  return udPushConfig_;
}

void CreateIdentityProviderRequest::setUdPushConfig(const CreateIdentityProviderRequest::UdPushConfig &udPushConfig) {
  udPushConfig_ = udPushConfig;
  setParameter(std::string("UdPushConfig") + ".PeriodicSyncStatus", udPushConfig.periodicSyncStatus);
  setParameter(std::string("UdPushConfig") + ".IncrementalCallbackStatus", udPushConfig.incrementalCallbackStatus);
  for(int dep1 = 0; dep1 != udPushConfig.udSyncScopeConfigs.size(); dep1++) {
    setParameter(std::string("UdPushConfig") + ".UdSyncScopeConfigs." + std::to_string(dep1 + 1) + ".TargetScope", udPushConfig.udSyncScopeConfigs[dep1].targetScope);
    for(int dep2 = 0; dep2 != udPushConfig.udSyncScopeConfigs[dep1].sourceScopes.size(); dep2++) {
      setParameter(std::string("UdPushConfig") + ".UdSyncScopeConfigs." + std::to_string(dep1 + 1) + ".SourceScopes." + std::to_string(dep2 + 1), udPushConfig.udSyncScopeConfigs[dep1].sourceScopes[dep2]);
    }
  }
}

std::string CreateIdentityProviderRequest::getIdentityProviderType() const {
  return identityProviderType_;
}

void CreateIdentityProviderRequest::setIdentityProviderType(const std::string &identityProviderType) {
  identityProviderType_ = identityProviderType;
  setParameter(std::string("IdentityProviderType"), identityProviderType);
}

CreateIdentityProviderRequest::OidcConfig CreateIdentityProviderRequest::getOidcConfig() const {
  return oidcConfig_;
}

void CreateIdentityProviderRequest::setOidcConfig(const CreateIdentityProviderRequest::OidcConfig &oidcConfig) {
  oidcConfig_ = oidcConfig;
  for(int dep1 = 0; dep1 != oidcConfig.grantScopes.size(); dep1++) {
    setParameter(std::string("OidcConfig") + ".GrantScopes." + std::to_string(dep1 + 1), oidcConfig.grantScopes[dep1]);
  }
  setParameter(std::string("OidcConfig") + ".EndpointConfig.UserinfoEndpoint", oidcConfig.endpointConfig.userinfoEndpoint);
  setParameter(std::string("OidcConfig") + ".EndpointConfig.AuthorizationEndpoint", oidcConfig.endpointConfig.authorizationEndpoint);
  setParameter(std::string("OidcConfig") + ".EndpointConfig.JwksUri", oidcConfig.endpointConfig.jwksUri);
  setParameter(std::string("OidcConfig") + ".EndpointConfig.TokenEndpoint", oidcConfig.endpointConfig.tokenEndpoint);
  setParameter(std::string("OidcConfig") + ".EndpointConfig.Issuer", oidcConfig.endpointConfig.issuer);
  setParameter(std::string("OidcConfig") + ".PkceChallengeMethod", oidcConfig.pkceChallengeMethod);
  setParameter(std::string("OidcConfig") + ".PkceRequired", oidcConfig.pkceRequired ? "true" : "false");
  setParameter(std::string("OidcConfig") + ".AuthnParam.ClientId", oidcConfig.authnParam.clientId);
  setParameter(std::string("OidcConfig") + ".AuthnParam.ClientSecret", oidcConfig.authnParam.clientSecret);
  setParameter(std::string("OidcConfig") + ".AuthnParam.AuthnMethod", oidcConfig.authnParam.authnMethod);
  setParameter(std::string("OidcConfig") + ".GrantType", oidcConfig.grantType);
}

