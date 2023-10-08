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

#include <alibabacloud/nlb/model/UpdateListenerAttributeRequest.h>

using AlibabaCloud::Nlb::Model::UpdateListenerAttributeRequest;

UpdateListenerAttributeRequest::UpdateListenerAttributeRequest()
    : RpcServiceRequest("nlb", "2022-04-30", "UpdateListenerAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateListenerAttributeRequest::~UpdateListenerAttributeRequest() {}

std::vector<std::string> UpdateListenerAttributeRequest::getCaCertificateIds() const {
  return caCertificateIds_;
}

void UpdateListenerAttributeRequest::setCaCertificateIds(const std::vector<std::string> &caCertificateIds) {
  caCertificateIds_ = caCertificateIds;
}

int UpdateListenerAttributeRequest::getStartPort() const {
  return startPort_;
}

void UpdateListenerAttributeRequest::setStartPort(int startPort) {
  startPort_ = startPort;
  setBodyParameter(std::string("StartPort"), std::to_string(startPort));
}

std::string UpdateListenerAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateListenerAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

bool UpdateListenerAttributeRequest::getSecSensorEnabled() const {
  return secSensorEnabled_;
}

void UpdateListenerAttributeRequest::setSecSensorEnabled(bool secSensorEnabled) {
  secSensorEnabled_ = secSensorEnabled;
  setBodyParameter(std::string("SecSensorEnabled"), secSensorEnabled ? "true" : "false");
}

std::string UpdateListenerAttributeRequest::getAlpnPolicy() const {
  return alpnPolicy_;
}

void UpdateListenerAttributeRequest::setAlpnPolicy(const std::string &alpnPolicy) {
  alpnPolicy_ = alpnPolicy;
  setBodyParameter(std::string("AlpnPolicy"), alpnPolicy);
}

int UpdateListenerAttributeRequest::getMss() const {
  return mss_;
}

void UpdateListenerAttributeRequest::setMss(int mss) {
  mss_ = mss;
  setBodyParameter(std::string("Mss"), std::to_string(mss));
}

std::string UpdateListenerAttributeRequest::getServerGroupId() const {
  return serverGroupId_;
}

void UpdateListenerAttributeRequest::setServerGroupId(const std::string &serverGroupId) {
  serverGroupId_ = serverGroupId;
  setBodyParameter(std::string("ServerGroupId"), serverGroupId);
}

std::string UpdateListenerAttributeRequest::getListenerId() const {
  return listenerId_;
}

void UpdateListenerAttributeRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setBodyParameter(std::string("ListenerId"), listenerId);
}

std::vector<std::string> UpdateListenerAttributeRequest::getCertificateIds() const {
  return certificateIds_;
}

void UpdateListenerAttributeRequest::setCertificateIds(const std::vector<std::string> &certificateIds) {
  certificateIds_ = certificateIds;
}

std::string UpdateListenerAttributeRequest::getRegionId() const {
  return regionId_;
}

void UpdateListenerAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

bool UpdateListenerAttributeRequest::getAlpnEnabled() const {
  return alpnEnabled_;
}

void UpdateListenerAttributeRequest::setAlpnEnabled(bool alpnEnabled) {
  alpnEnabled_ = alpnEnabled;
  setBodyParameter(std::string("AlpnEnabled"), alpnEnabled ? "true" : "false");
}

int UpdateListenerAttributeRequest::getEndPort() const {
  return endPort_;
}

void UpdateListenerAttributeRequest::setEndPort(int endPort) {
  endPort_ = endPort;
  setBodyParameter(std::string("EndPort"), std::to_string(endPort));
}

bool UpdateListenerAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateListenerAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setBodyParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

bool UpdateListenerAttributeRequest::getProxyProtocolEnabled() const {
  return proxyProtocolEnabled_;
}

void UpdateListenerAttributeRequest::setProxyProtocolEnabled(bool proxyProtocolEnabled) {
  proxyProtocolEnabled_ = proxyProtocolEnabled;
  setBodyParameter(std::string("ProxyProtocolEnabled"), proxyProtocolEnabled ? "true" : "false");
}

int UpdateListenerAttributeRequest::getCps() const {
  return cps_;
}

void UpdateListenerAttributeRequest::setCps(int cps) {
  cps_ = cps;
  setBodyParameter(std::string("Cps"), std::to_string(cps));
}

std::string UpdateListenerAttributeRequest::getSecurityPolicyId() const {
  return securityPolicyId_;
}

void UpdateListenerAttributeRequest::setSecurityPolicyId(const std::string &securityPolicyId) {
  securityPolicyId_ = securityPolicyId;
  setBodyParameter(std::string("SecurityPolicyId"), securityPolicyId);
}

int UpdateListenerAttributeRequest::getIdleTimeout() const {
  return idleTimeout_;
}

void UpdateListenerAttributeRequest::setIdleTimeout(int idleTimeout) {
  idleTimeout_ = idleTimeout;
  setBodyParameter(std::string("IdleTimeout"), std::to_string(idleTimeout));
}

std::string UpdateListenerAttributeRequest::getListenerDescription() const {
  return listenerDescription_;
}

void UpdateListenerAttributeRequest::setListenerDescription(const std::string &listenerDescription) {
  listenerDescription_ = listenerDescription;
  setBodyParameter(std::string("ListenerDescription"), listenerDescription);
}

bool UpdateListenerAttributeRequest::getCaEnabled() const {
  return caEnabled_;
}

void UpdateListenerAttributeRequest::setCaEnabled(bool caEnabled) {
  caEnabled_ = caEnabled;
  setBodyParameter(std::string("CaEnabled"), caEnabled ? "true" : "false");
}

