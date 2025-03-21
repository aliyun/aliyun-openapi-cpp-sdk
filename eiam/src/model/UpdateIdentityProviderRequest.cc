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

#include <alibabacloud/eiam/model/UpdateIdentityProviderRequest.h>

using AlibabaCloud::Eiam::Model::UpdateIdentityProviderRequest;

UpdateIdentityProviderRequest::UpdateIdentityProviderRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "UpdateIdentityProvider") {
  setMethod(HttpRequest::Method::Post);
}

UpdateIdentityProviderRequest::~UpdateIdentityProviderRequest() {}

UpdateIdentityProviderRequest::DingtalkAppConfig UpdateIdentityProviderRequest::getDingtalkAppConfig() const {
  return dingtalkAppConfig_;
}

void UpdateIdentityProviderRequest::setDingtalkAppConfig(const UpdateIdentityProviderRequest::DingtalkAppConfig &dingtalkAppConfig) {
  dingtalkAppConfig_ = dingtalkAppConfig;
  setParameter(std::string("DingtalkAppConfig") + ".AppSecret", dingtalkAppConfig.appSecret);
  setParameter(std::string("DingtalkAppConfig") + ".AppKey", dingtalkAppConfig.appKey);
}

std::string UpdateIdentityProviderRequest::getNetworkAccessEndpointId() const {
  return networkAccessEndpointId_;
}

void UpdateIdentityProviderRequest::setNetworkAccessEndpointId(const std::string &networkAccessEndpointId) {
  networkAccessEndpointId_ = networkAccessEndpointId;
  setParameter(std::string("NetworkAccessEndpointId"), networkAccessEndpointId);
}

std::string UpdateIdentityProviderRequest::getLogoUrl() const {
  return logoUrl_;
}

void UpdateIdentityProviderRequest::setLogoUrl(const std::string &logoUrl) {
  logoUrl_ = logoUrl;
  setParameter(std::string("LogoUrl"), logoUrl);
}

std::string UpdateIdentityProviderRequest::getIdentityProviderId() const {
  return identityProviderId_;
}

void UpdateIdentityProviderRequest::setIdentityProviderId(const std::string &identityProviderId) {
  identityProviderId_ = identityProviderId;
  setParameter(std::string("IdentityProviderId"), identityProviderId);
}

UpdateIdentityProviderRequest::LarkConfig UpdateIdentityProviderRequest::getLarkConfig() const {
  return larkConfig_;
}

void UpdateIdentityProviderRequest::setLarkConfig(const UpdateIdentityProviderRequest::LarkConfig &larkConfig) {
  larkConfig_ = larkConfig;
  setParameter(std::string("LarkConfig") + ".AppId", larkConfig.appId);
  setParameter(std::string("LarkConfig") + ".AppSecret", larkConfig.appSecret);
  setParameter(std::string("LarkConfig") + ".VerificationToken", larkConfig.verificationToken);
  setParameter(std::string("LarkConfig") + ".EncryptKey", larkConfig.encryptKey);
}

UpdateIdentityProviderRequest::WeComConfig UpdateIdentityProviderRequest::getWeComConfig() const {
  return weComConfig_;
}

void UpdateIdentityProviderRequest::setWeComConfig(const UpdateIdentityProviderRequest::WeComConfig &weComConfig) {
  weComConfig_ = weComConfig;
  setParameter(std::string("WeComConfig") + ".AgentId", weComConfig.agentId);
  setParameter(std::string("WeComConfig") + ".CorpSecret", weComConfig.corpSecret);
  setParameter(std::string("WeComConfig") + ".AuthorizeCallbackDomain", weComConfig.authorizeCallbackDomain);
  setParameter(std::string("WeComConfig") + ".TrustableDomain", weComConfig.trustableDomain);
}

std::string UpdateIdentityProviderRequest::getIdentityProviderName() const {
  return identityProviderName_;
}

void UpdateIdentityProviderRequest::setIdentityProviderName(const std::string &identityProviderName) {
  identityProviderName_ = identityProviderName;
  setParameter(std::string("IdentityProviderName"), identityProviderName);
}

UpdateIdentityProviderRequest::LdapConfig UpdateIdentityProviderRequest::getLdapConfig() const {
  return ldapConfig_;
}

void UpdateIdentityProviderRequest::setLdapConfig(const UpdateIdentityProviderRequest::LdapConfig &ldapConfig) {
  ldapConfig_ = ldapConfig;
  setParameter(std::string("LdapConfig") + ".StartTlsStatus", ldapConfig.startTlsStatus);
  setParameter(std::string("LdapConfig") + ".LdapServerHost", ldapConfig.ldapServerHost);
  setParameter(std::string("LdapConfig") + ".AdministratorUsername", ldapConfig.administratorUsername);
  for(int dep1 = 0; dep1 != ldapConfig.certificateFingerprints.size(); dep1++) {
    setParameter(std::string("LdapConfig") + ".CertificateFingerprints." + std::to_string(dep1 + 1), ldapConfig.certificateFingerprints[dep1]);
  }
  setParameter(std::string("LdapConfig") + ".LdapProtocol", ldapConfig.ldapProtocol);
  setParameter(std::string("LdapConfig") + ".AdministratorPassword", ldapConfig.administratorPassword);
  setParameter(std::string("LdapConfig") + ".CertificateFingerprintStatus", ldapConfig.certificateFingerprintStatus);
  setParameter(std::string("LdapConfig") + ".LdapServerPort", std::to_string(ldapConfig.ldapServerPort));
}

std::string UpdateIdentityProviderRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateIdentityProviderRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

UpdateIdentityProviderRequest::OidcConfig UpdateIdentityProviderRequest::getOidcConfig() const {
  return oidcConfig_;
}

void UpdateIdentityProviderRequest::setOidcConfig(const UpdateIdentityProviderRequest::OidcConfig &oidcConfig) {
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
  setParameter(std::string("OidcConfig") + ".AuthnParam.ClientSecret", oidcConfig.authnParam.clientSecret);
  setParameter(std::string("OidcConfig") + ".AuthnParam.AuthnMethod", oidcConfig.authnParam.authnMethod);
  setParameter(std::string("OidcConfig") + ".GrantType", oidcConfig.grantType);
}

