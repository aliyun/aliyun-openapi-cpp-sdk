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

#include <alibabacloud/alb/model/CreateListenerRequest.h>

using AlibabaCloud::Alb::Model::CreateListenerRequest;

CreateListenerRequest::CreateListenerRequest()
    : RpcServiceRequest("alb", "2020-06-16", "CreateListener") {
  setMethod(HttpRequest::Method::Post);
}

CreateListenerRequest::~CreateListenerRequest() {}

std::string CreateListenerRequest::getClientToken() const {
  return clientToken_;
}

void CreateListenerRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool CreateListenerRequest::getGzipEnabled() const {
  return gzipEnabled_;
}

void CreateListenerRequest::setGzipEnabled(bool gzipEnabled) {
  gzipEnabled_ = gzipEnabled;
  setParameter(std::string("GzipEnabled"), gzipEnabled ? "true" : "false");
}

CreateListenerRequest::QuicConfig CreateListenerRequest::getQuicConfig() const {
  return quicConfig_;
}

void CreateListenerRequest::setQuicConfig(const CreateListenerRequest::QuicConfig &quicConfig) {
  quicConfig_ = quicConfig;
  setParameter(std::string("QuicConfig") + ".QuicUpgradeEnabled", quicConfig.quicUpgradeEnabled ? "true" : "false");
  setParameter(std::string("QuicConfig") + ".QuicListenerId", quicConfig.quicListenerId);
}

bool CreateListenerRequest::getHttp2Enabled() const {
  return http2Enabled_;
}

void CreateListenerRequest::setHttp2Enabled(bool http2Enabled) {
  http2Enabled_ = http2Enabled;
  setParameter(std::string("Http2Enabled"), http2Enabled ? "true" : "false");
}

std::vector<CreateListenerRequest::Tag> CreateListenerRequest::getTag() const {
  return tag_;
}

void CreateListenerRequest::setTag(const std::vector<CreateListenerRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Value", tag[dep1].value);
    setParameter(std::string("Tag") + "." + std::to_string(dep1 + 1) + ".Key", tag[dep1].key);
  }
}

std::vector<CreateListenerRequest::DefaultActions> CreateListenerRequest::getDefaultActions() const {
  return defaultActions_;
}

void CreateListenerRequest::setDefaultActions(const std::vector<CreateListenerRequest::DefaultActions> &defaultActions) {
  defaultActions_ = defaultActions;
  for(int dep1 = 0; dep1 != defaultActions.size(); dep1++) {
    for(int dep2 = 0; dep2 != defaultActions[dep1].forwardGroupConfig.serverGroupTuples.size(); dep2++) {
      setParameter(std::string("DefaultActions") + "." + std::to_string(dep1 + 1) + ".ForwardGroupConfig.ServerGroupTuples." + std::to_string(dep2 + 1) + ".ServerGroupId", defaultActions[dep1].forwardGroupConfig.serverGroupTuples[dep2].serverGroupId);
    }
    setParameter(std::string("DefaultActions") + "." + std::to_string(dep1 + 1) + ".Type", defaultActions[dep1].type);
  }
}

int CreateListenerRequest::getListenerPort() const {
  return listenerPort_;
}

void CreateListenerRequest::setListenerPort(int listenerPort) {
  listenerPort_ = listenerPort;
  setParameter(std::string("ListenerPort"), std::to_string(listenerPort));
}

bool CreateListenerRequest::getDryRun() const {
  return dryRun_;
}

void CreateListenerRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

int CreateListenerRequest::getRequestTimeout() const {
  return requestTimeout_;
}

void CreateListenerRequest::setRequestTimeout(int requestTimeout) {
  requestTimeout_ = requestTimeout;
  setParameter(std::string("RequestTimeout"), std::to_string(requestTimeout));
}

std::vector<CreateListenerRequest::CaCertificates> CreateListenerRequest::getCaCertificates() const {
  return caCertificates_;
}

void CreateListenerRequest::setCaCertificates(const std::vector<CreateListenerRequest::CaCertificates> &caCertificates) {
  caCertificates_ = caCertificates;
  for(int dep1 = 0; dep1 != caCertificates.size(); dep1++) {
    setParameter(std::string("CaCertificates") + "." + std::to_string(dep1 + 1) + ".CertificateId", caCertificates[dep1].certificateId);
  }
}

CreateListenerRequest::XForwardedForConfig CreateListenerRequest::getXForwardedForConfig() const {
  return xForwardedForConfig_;
}

void CreateListenerRequest::setXForwardedForConfig(const CreateListenerRequest::XForwardedForConfig &xForwardedForConfig) {
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

std::string CreateListenerRequest::getListenerProtocol() const {
  return listenerProtocol_;
}

void CreateListenerRequest::setListenerProtocol(const std::string &listenerProtocol) {
  listenerProtocol_ = listenerProtocol;
  setParameter(std::string("ListenerProtocol"), listenerProtocol);
}

std::string CreateListenerRequest::getSecurityPolicyId() const {
  return securityPolicyId_;
}

void CreateListenerRequest::setSecurityPolicyId(const std::string &securityPolicyId) {
  securityPolicyId_ = securityPolicyId;
  setParameter(std::string("SecurityPolicyId"), securityPolicyId);
}

int CreateListenerRequest::getIdleTimeout() const {
  return idleTimeout_;
}

void CreateListenerRequest::setIdleTimeout(int idleTimeout) {
  idleTimeout_ = idleTimeout;
  setParameter(std::string("IdleTimeout"), std::to_string(idleTimeout));
}

std::string CreateListenerRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void CreateListenerRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setParameter(std::string("LoadBalancerId"), loadBalancerId);
}

std::vector<CreateListenerRequest::Certificates> CreateListenerRequest::getCertificates() const {
  return certificates_;
}

void CreateListenerRequest::setCertificates(const std::vector<CreateListenerRequest::Certificates> &certificates) {
  certificates_ = certificates;
  for(int dep1 = 0; dep1 != certificates.size(); dep1++) {
    setParameter(std::string("Certificates") + "." + std::to_string(dep1 + 1) + ".CertificateId", certificates[dep1].certificateId);
  }
}

std::string CreateListenerRequest::getListenerDescription() const {
  return listenerDescription_;
}

void CreateListenerRequest::setListenerDescription(const std::string &listenerDescription) {
  listenerDescription_ = listenerDescription;
  setParameter(std::string("ListenerDescription"), listenerDescription);
}

bool CreateListenerRequest::getCaEnabled() const {
  return caEnabled_;
}

void CreateListenerRequest::setCaEnabled(bool caEnabled) {
  caEnabled_ = caEnabled;
  setParameter(std::string("CaEnabled"), caEnabled ? "true" : "false");
}

