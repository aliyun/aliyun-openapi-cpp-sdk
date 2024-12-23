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

#include <alibabacloud/alb/model/UpdateListenerAttributeRequest.h>

using AlibabaCloud::Alb::Model::UpdateListenerAttributeRequest;

UpdateListenerAttributeRequest::UpdateListenerAttributeRequest()
    : RpcServiceRequest("alb", "2020-06-16", "UpdateListenerAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateListenerAttributeRequest::~UpdateListenerAttributeRequest() {}

std::string UpdateListenerAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateListenerAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool UpdateListenerAttributeRequest::getGzipEnabled() const {
  return gzipEnabled_;
}

void UpdateListenerAttributeRequest::setGzipEnabled(bool gzipEnabled) {
  gzipEnabled_ = gzipEnabled;
  setParameter(std::string("GzipEnabled"), gzipEnabled ? "true" : "false");
}

std::string UpdateListenerAttributeRequest::getListenerId() const {
  return listenerId_;
}

void UpdateListenerAttributeRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setParameter(std::string("ListenerId"), listenerId);
}

UpdateListenerAttributeRequest::QuicConfig UpdateListenerAttributeRequest::getQuicConfig() const {
  return quicConfig_;
}

void UpdateListenerAttributeRequest::setQuicConfig(const UpdateListenerAttributeRequest::QuicConfig &quicConfig) {
  quicConfig_ = quicConfig;
  setParameter(std::string("QuicConfig") + ".QuicUpgradeEnabled", quicConfig.quicUpgradeEnabled ? "true" : "false");
  setParameter(std::string("QuicConfig") + ".QuicListenerId", quicConfig.quicListenerId);
}

bool UpdateListenerAttributeRequest::getHttp2Enabled() const {
  return http2Enabled_;
}

void UpdateListenerAttributeRequest::setHttp2Enabled(bool http2Enabled) {
  http2Enabled_ = http2Enabled;
  setParameter(std::string("Http2Enabled"), http2Enabled ? "true" : "false");
}

std::vector<UpdateListenerAttributeRequest::DefaultActions> UpdateListenerAttributeRequest::getDefaultActions() const {
  return defaultActions_;
}

void UpdateListenerAttributeRequest::setDefaultActions(const std::vector<UpdateListenerAttributeRequest::DefaultActions> &defaultActions) {
  defaultActions_ = defaultActions;
  for(int dep1 = 0; dep1 != defaultActions.size(); dep1++) {
    for(int dep2 = 0; dep2 != defaultActions[dep1].forwardGroupConfig.serverGroupTuples.size(); dep2++) {
      setParameter(std::string("DefaultActions") + "." + std::to_string(dep1 + 1) + ".ForwardGroupConfig.ServerGroupTuples." + std::to_string(dep2 + 1) + ".ServerGroupId", defaultActions[dep1].forwardGroupConfig.serverGroupTuples[dep2].serverGroupId);
    }
    setParameter(std::string("DefaultActions") + "." + std::to_string(dep1 + 1) + ".Type", defaultActions[dep1].type);
  }
}

bool UpdateListenerAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateListenerAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

int UpdateListenerAttributeRequest::getRequestTimeout() const {
  return requestTimeout_;
}

void UpdateListenerAttributeRequest::setRequestTimeout(int requestTimeout) {
  requestTimeout_ = requestTimeout;
  setParameter(std::string("RequestTimeout"), std::to_string(requestTimeout));
}

std::vector<UpdateListenerAttributeRequest::CaCertificates> UpdateListenerAttributeRequest::getCaCertificates() const {
  return caCertificates_;
}

void UpdateListenerAttributeRequest::setCaCertificates(const std::vector<UpdateListenerAttributeRequest::CaCertificates> &caCertificates) {
  caCertificates_ = caCertificates;
  for(int dep1 = 0; dep1 != caCertificates.size(); dep1++) {
    setParameter(std::string("CaCertificates") + "." + std::to_string(dep1 + 1) + ".CertificateId", caCertificates[dep1].certificateId);
  }
}

UpdateListenerAttributeRequest::XForwardedForConfig UpdateListenerAttributeRequest::getXForwardedForConfig() const {
  return xForwardedForConfig_;
}

void UpdateListenerAttributeRequest::setXForwardedForConfig(const UpdateListenerAttributeRequest::XForwardedForConfig &xForwardedForConfig) {
  xForwardedForConfig_ = xForwardedForConfig;
  setParameter(std::string("XForwardedForConfig") + ".XForwardedForClientSourceIpsTrusted", xForwardedForConfig.xForwardedForClientSourceIpsTrusted);
  setParameter(std::string("XForwardedForConfig") + ".XForwardedForClientCertSubjectDNAlias", xForwardedForConfig.xForwardedForClientCertSubjectDNAlias);
  setParameter(std::string("XForwardedForConfig") + ".XForwardedForClientSourceIpsEnabled", xForwardedForConfig.xForwardedForClientSourceIpsEnabled ? "true" : "false");
  setParameter(std::string("XForwardedForConfig") + ".XForwardedForClientCertIssuerDNEnabled", xForwardedForConfig.xForwardedForClientCertIssuerDNEnabled ? "true" : "false");
  setParameter(std::string("XForwardedForConfig") + ".XForwardedForHostEnabled", xForwardedForConfig.xForwardedForHostEnabled ? "true" : "false");
  setParameter(std::string("XForwardedForConfig") + ".XForwardedForProcessingMode", xForwardedForConfig.xForwardedForProcessingMode);
  setParameter(std::string("XForwardedForConfig") + ".XForwardedForClientCertFingerprintEnabled", xForwardedForConfig.xForwardedForClientCertFingerprintEnabled ? "true" : "false");
  setParameter(std::string("XForwardedForConfig") + ".XForwardedForClientCertIssuerDNAlias", xForwardedForConfig.xForwardedForClientCertIssuerDNAlias);
  setParameter(std::string("XForwardedForConfig") + ".XForwardedForProtoEnabled", xForwardedForConfig.xForwardedForProtoEnabled ? "true" : "false");
  setParameter(std::string("XForwardedForConfig") + ".XForwardedForClientCertFingerprintAlias", xForwardedForConfig.xForwardedForClientCertFingerprintAlias);
  setParameter(std::string("XForwardedForConfig") + ".XForwardedForClientCertClientVerifyEnabled", xForwardedForConfig.xForwardedForClientCertClientVerifyEnabled ? "true" : "false");
  setParameter(std::string("XForwardedForConfig") + ".XForwardedForSLBPortEnabled", xForwardedForConfig.xForwardedForSLBPortEnabled ? "true" : "false");
  setParameter(std::string("XForwardedForConfig") + ".XForwardedForClientCertSubjectDNEnabled", xForwardedForConfig.xForwardedForClientCertSubjectDNEnabled ? "true" : "false");
  setParameter(std::string("XForwardedForConfig") + ".XForwardedForClientCertClientVerifyAlias", xForwardedForConfig.xForwardedForClientCertClientVerifyAlias);
  setParameter(std::string("XForwardedForConfig") + ".XForwardedForClientSrcPortEnabled", xForwardedForConfig.xForwardedForClientSrcPortEnabled ? "true" : "false");
  setParameter(std::string("XForwardedForConfig") + ".XForwardedForEnabled", xForwardedForConfig.xForwardedForEnabled ? "true" : "false");
  setParameter(std::string("XForwardedForConfig") + ".XForwardedForSLBIdEnabled", xForwardedForConfig.xForwardedForSLBIdEnabled ? "true" : "false");
}

std::string UpdateListenerAttributeRequest::getSecurityPolicyId() const {
  return securityPolicyId_;
}

void UpdateListenerAttributeRequest::setSecurityPolicyId(const std::string &securityPolicyId) {
  securityPolicyId_ = securityPolicyId;
  setParameter(std::string("SecurityPolicyId"), securityPolicyId);
}

int UpdateListenerAttributeRequest::getIdleTimeout() const {
  return idleTimeout_;
}

void UpdateListenerAttributeRequest::setIdleTimeout(int idleTimeout) {
  idleTimeout_ = idleTimeout;
  setParameter(std::string("IdleTimeout"), std::to_string(idleTimeout));
}

std::vector<UpdateListenerAttributeRequest::Certificates> UpdateListenerAttributeRequest::getCertificates() const {
  return certificates_;
}

void UpdateListenerAttributeRequest::setCertificates(const std::vector<UpdateListenerAttributeRequest::Certificates> &certificates) {
  certificates_ = certificates;
  for(int dep1 = 0; dep1 != certificates.size(); dep1++) {
    setParameter(std::string("Certificates") + "." + std::to_string(dep1 + 1) + ".CertificateId", certificates[dep1].certificateId);
  }
}

std::string UpdateListenerAttributeRequest::getListenerDescription() const {
  return listenerDescription_;
}

void UpdateListenerAttributeRequest::setListenerDescription(const std::string &listenerDescription) {
  listenerDescription_ = listenerDescription;
  setParameter(std::string("ListenerDescription"), listenerDescription);
}

bool UpdateListenerAttributeRequest::getCaEnabled() const {
  return caEnabled_;
}

void UpdateListenerAttributeRequest::setCaEnabled(bool caEnabled) {
  caEnabled_ = caEnabled;
  setParameter(std::string("CaEnabled"), caEnabled ? "true" : "false");
}

