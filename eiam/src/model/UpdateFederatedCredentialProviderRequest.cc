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

#include <alibabacloud/eiam/model/UpdateFederatedCredentialProviderRequest.h>

using AlibabaCloud::Eiam::Model::UpdateFederatedCredentialProviderRequest;

UpdateFederatedCredentialProviderRequest::UpdateFederatedCredentialProviderRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "UpdateFederatedCredentialProvider") {
  setMethod(HttpRequest::Method::Post);
}

UpdateFederatedCredentialProviderRequest::~UpdateFederatedCredentialProviderRequest() {}

UpdateFederatedCredentialProviderRequest::OidcProviderConfig UpdateFederatedCredentialProviderRequest::getOidcProviderConfig() const {
  return oidcProviderConfig_;
}

void UpdateFederatedCredentialProviderRequest::setOidcProviderConfig(const UpdateFederatedCredentialProviderRequest::OidcProviderConfig &oidcProviderConfig) {
  oidcProviderConfig_ = oidcProviderConfig;
  setParameter(std::string("OidcProviderConfig") + ".JwksSource", oidcProviderConfig.jwksSource);
  setParameter(std::string("OidcProviderConfig") + ".StaticJwks", oidcProviderConfig.staticJwks);
  setParameter(std::string("OidcProviderConfig") + ".TrustCondition", oidcProviderConfig.trustCondition);
  setParameter(std::string("OidcProviderConfig") + ".JwksUri", oidcProviderConfig.jwksUri);
  for(int dep1 = 0; dep1 != oidcProviderConfig.audiences.size(); dep1++) {
    setParameter(std::string("OidcProviderConfig") + ".Audiences." + std::to_string(dep1 + 1), oidcProviderConfig.audiences[dep1]);
  }
}

std::string UpdateFederatedCredentialProviderRequest::getFederatedCredentialProviderName() const {
  return federatedCredentialProviderName_;
}

void UpdateFederatedCredentialProviderRequest::setFederatedCredentialProviderName(const std::string &federatedCredentialProviderName) {
  federatedCredentialProviderName_ = federatedCredentialProviderName;
  setParameter(std::string("FederatedCredentialProviderName"), federatedCredentialProviderName);
}

std::string UpdateFederatedCredentialProviderRequest::getNetworkAccessEndpointId() const {
  return networkAccessEndpointId_;
}

void UpdateFederatedCredentialProviderRequest::setNetworkAccessEndpointId(const std::string &networkAccessEndpointId) {
  networkAccessEndpointId_ = networkAccessEndpointId;
  setParameter(std::string("NetworkAccessEndpointId"), networkAccessEndpointId);
}

UpdateFederatedCredentialProviderRequest::PrivateCaProviderConfig UpdateFederatedCredentialProviderRequest::getPrivateCaProviderConfig() const {
  return privateCaProviderConfig_;
}

void UpdateFederatedCredentialProviderRequest::setPrivateCaProviderConfig(const UpdateFederatedCredentialProviderRequest::PrivateCaProviderConfig &privateCaProviderConfig) {
  privateCaProviderConfig_ = privateCaProviderConfig;
  for(int dep1 = 0; dep1 != privateCaProviderConfig.certificates.size(); dep1++) {
    setParameter(std::string("PrivateCaProviderConfig") + ".Certificates." + std::to_string(dep1 + 1) + ".Content", privateCaProviderConfig.certificates[dep1].content);
  }
  setParameter(std::string("PrivateCaProviderConfig") + ".TrustCondition", privateCaProviderConfig.trustCondition);
  setParameter(std::string("PrivateCaProviderConfig") + ".TrustAnchorSource", privateCaProviderConfig.trustAnchorSource);
}

std::string UpdateFederatedCredentialProviderRequest::getFederatedCredentialProviderId() const {
  return federatedCredentialProviderId_;
}

void UpdateFederatedCredentialProviderRequest::setFederatedCredentialProviderId(const std::string &federatedCredentialProviderId) {
  federatedCredentialProviderId_ = federatedCredentialProviderId;
  setParameter(std::string("FederatedCredentialProviderId"), federatedCredentialProviderId);
}

std::string UpdateFederatedCredentialProviderRequest::getInstanceId() const {
  return instanceId_;
}

void UpdateFederatedCredentialProviderRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

UpdateFederatedCredentialProviderRequest::Pkcs7ProviderConfig UpdateFederatedCredentialProviderRequest::getPkcs7ProviderConfig() const {
  return pkcs7ProviderConfig_;
}

void UpdateFederatedCredentialProviderRequest::setPkcs7ProviderConfig(const UpdateFederatedCredentialProviderRequest::Pkcs7ProviderConfig &pkcs7ProviderConfig) {
  pkcs7ProviderConfig_ = pkcs7ProviderConfig;
  setParameter(std::string("Pkcs7ProviderConfig") + ".SigningTimeValueExpression", pkcs7ProviderConfig.signingTimeValueExpression);
  for(int dep1 = 0; dep1 != pkcs7ProviderConfig.certificates.size(); dep1++) {
    setParameter(std::string("Pkcs7ProviderConfig") + ".Certificates." + std::to_string(dep1 + 1) + ".Content", pkcs7ProviderConfig.certificates[dep1].content);
  }
  setParameter(std::string("Pkcs7ProviderConfig") + ".TrustCondition", pkcs7ProviderConfig.trustCondition);
  setParameter(std::string("Pkcs7ProviderConfig") + ".CmsVerificationMode", pkcs7ProviderConfig.cmsVerificationMode);
  setParameter(std::string("Pkcs7ProviderConfig") + ".TrustAnchorSource", pkcs7ProviderConfig.trustAnchorSource);
  setParameter(std::string("Pkcs7ProviderConfig") + ".SignatureEffectiveTime", std::to_string(pkcs7ProviderConfig.signatureEffectiveTime));
}

