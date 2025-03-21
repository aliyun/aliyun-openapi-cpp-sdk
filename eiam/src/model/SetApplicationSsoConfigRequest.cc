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

#include <alibabacloud/eiam/model/SetApplicationSsoConfigRequest.h>

using AlibabaCloud::Eiam::Model::SetApplicationSsoConfigRequest;

SetApplicationSsoConfigRequest::SetApplicationSsoConfigRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "SetApplicationSsoConfig") {
  setMethod(HttpRequest::Method::Post);
}

SetApplicationSsoConfigRequest::~SetApplicationSsoConfigRequest() {}

std::string SetApplicationSsoConfigRequest::getClientToken() const {
  return clientToken_;
}

void SetApplicationSsoConfigRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string SetApplicationSsoConfigRequest::getApplicationId() const {
  return applicationId_;
}

void SetApplicationSsoConfigRequest::setApplicationId(const std::string &applicationId) {
  applicationId_ = applicationId;
  setParameter(std::string("ApplicationId"), applicationId);
}

std::string SetApplicationSsoConfigRequest::getInitLoginUrl() const {
  return initLoginUrl_;
}

void SetApplicationSsoConfigRequest::setInitLoginUrl(const std::string &initLoginUrl) {
  initLoginUrl_ = initLoginUrl;
  setParameter(std::string("InitLoginUrl"), initLoginUrl);
}

std::string SetApplicationSsoConfigRequest::getInitLoginType() const {
  return initLoginType_;
}

void SetApplicationSsoConfigRequest::setInitLoginType(const std::string &initLoginType) {
  initLoginType_ = initLoginType;
  setParameter(std::string("InitLoginType"), initLoginType);
}

std::string SetApplicationSsoConfigRequest::getInstanceId() const {
  return instanceId_;
}

void SetApplicationSsoConfigRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

SetApplicationSsoConfigRequest::OidcSsoConfig SetApplicationSsoConfigRequest::getOidcSsoConfig() const {
  return oidcSsoConfig_;
}

void SetApplicationSsoConfigRequest::setOidcSsoConfig(const SetApplicationSsoConfigRequest::OidcSsoConfig &oidcSsoConfig) {
  oidcSsoConfig_ = oidcSsoConfig;
  setParameter(std::string("OidcSsoConfig") + ".CodeEffectiveTime", std::to_string(oidcSsoConfig.codeEffectiveTime));
  for(int dep1 = 0; dep1 != oidcSsoConfig.responseTypes.size(); dep1++) {
    setParameter(std::string("OidcSsoConfig") + ".ResponseTypes." + std::to_string(dep1 + 1), oidcSsoConfig.responseTypes[dep1]);
  }
  for(int dep1 = 0; dep1 != oidcSsoConfig.grantScopes.size(); dep1++) {
    setParameter(std::string("OidcSsoConfig") + ".GrantScopes." + std::to_string(dep1 + 1), oidcSsoConfig.grantScopes[dep1]);
  }
  setParameter(std::string("OidcSsoConfig") + ".RefreshTokenEffective", std::to_string(oidcSsoConfig.refreshTokenEffective));
  for(int dep1 = 0; dep1 != oidcSsoConfig.grantTypes.size(); dep1++) {
    setParameter(std::string("OidcSsoConfig") + ".GrantTypes." + std::to_string(dep1 + 1), oidcSsoConfig.grantTypes[dep1]);
  }
  setParameter(std::string("OidcSsoConfig") + ".IdTokenEffectiveTime", std::to_string(oidcSsoConfig.idTokenEffectiveTime));
  for(int dep1 = 0; dep1 != oidcSsoConfig.pkceChallengeMethods.size(); dep1++) {
    setParameter(std::string("OidcSsoConfig") + ".PkceChallengeMethods." + std::to_string(dep1 + 1), oidcSsoConfig.pkceChallengeMethods[dep1]);
  }
  setParameter(std::string("OidcSsoConfig") + ".PasswordAuthenticationSourceId", oidcSsoConfig.passwordAuthenticationSourceId);
  setParameter(std::string("OidcSsoConfig") + ".AccessTokenEffectiveTime", std::to_string(oidcSsoConfig.accessTokenEffectiveTime));
  for(int dep1 = 0; dep1 != oidcSsoConfig.postLogoutRedirectUris.size(); dep1++) {
    setParameter(std::string("OidcSsoConfig") + ".PostLogoutRedirectUris." + std::to_string(dep1 + 1), oidcSsoConfig.postLogoutRedirectUris[dep1]);
  }
  setParameter(std::string("OidcSsoConfig") + ".PasswordTotpMfaRequired", oidcSsoConfig.passwordTotpMfaRequired ? "true" : "false");
  for(int dep1 = 0; dep1 != oidcSsoConfig.customClaims.size(); dep1++) {
    setParameter(std::string("OidcSsoConfig") + ".CustomClaims." + std::to_string(dep1 + 1) + ".ClaimValueExpression", oidcSsoConfig.customClaims[dep1].claimValueExpression);
    setParameter(std::string("OidcSsoConfig") + ".CustomClaims." + std::to_string(dep1 + 1) + ".ClaimName", oidcSsoConfig.customClaims[dep1].claimName);
  }
  setParameter(std::string("OidcSsoConfig") + ".SubjectIdExpression", oidcSsoConfig.subjectIdExpression);
  setParameter(std::string("OidcSsoConfig") + ".PkceRequired", oidcSsoConfig.pkceRequired ? "true" : "false");
  for(int dep1 = 0; dep1 != oidcSsoConfig.redirectUris.size(); dep1++) {
    setParameter(std::string("OidcSsoConfig") + ".RedirectUris." + std::to_string(dep1 + 1), oidcSsoConfig.redirectUris[dep1]);
  }
}

SetApplicationSsoConfigRequest::SamlSsoConfig SetApplicationSsoConfigRequest::getSamlSsoConfig() const {
  return samlSsoConfig_;
}

void SetApplicationSsoConfigRequest::setSamlSsoConfig(const SetApplicationSsoConfigRequest::SamlSsoConfig &samlSsoConfig) {
  samlSsoConfig_ = samlSsoConfig;
  setParameter(std::string("SamlSsoConfig") + ".SignatureAlgorithm", samlSsoConfig.signatureAlgorithm);
  setParameter(std::string("SamlSsoConfig") + ".NameIdFormat", samlSsoConfig.nameIdFormat);
  setParameter(std::string("SamlSsoConfig") + ".IdPEntityId", samlSsoConfig.idPEntityId);
  setParameter(std::string("SamlSsoConfig") + ".AssertionSigned", samlSsoConfig.assertionSigned ? "true" : "false");
  setParameter(std::string("SamlSsoConfig") + ".SpSsoAcsUrl", samlSsoConfig.spSsoAcsUrl);
  setParameter(std::string("SamlSsoConfig") + ".NameIdValueExpression", samlSsoConfig.nameIdValueExpression);
  for(int dep1 = 0; dep1 != samlSsoConfig.attributeStatements.size(); dep1++) {
    setParameter(std::string("SamlSsoConfig") + ".AttributeStatements." + std::to_string(dep1 + 1) + ".AttributeValueExpression", samlSsoConfig.attributeStatements[dep1].attributeValueExpression);
    setParameter(std::string("SamlSsoConfig") + ".AttributeStatements." + std::to_string(dep1 + 1) + ".AttributeName", samlSsoConfig.attributeStatements[dep1].attributeName);
  }
  setParameter(std::string("SamlSsoConfig") + ".DefaultRelayState", samlSsoConfig.defaultRelayState);
  setParameter(std::string("SamlSsoConfig") + ".SpEntityId", samlSsoConfig.spEntityId);
  for(int dep1 = 0; dep1 != samlSsoConfig.optionalRelayStates.size(); dep1++) {
    setParameter(std::string("SamlSsoConfig") + ".OptionalRelayStates." + std::to_string(dep1 + 1) + ".RelayState", samlSsoConfig.optionalRelayStates[dep1].relayState);
    setParameter(std::string("SamlSsoConfig") + ".OptionalRelayStates." + std::to_string(dep1 + 1) + ".DisplayName", samlSsoConfig.optionalRelayStates[dep1].displayName);
  }
  setParameter(std::string("SamlSsoConfig") + ".ResponseSigned", samlSsoConfig.responseSigned ? "true" : "false");
}

