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

#include <alibabacloud/nlb/model/CreateListenerRequest.h>

using AlibabaCloud::Nlb::Model::CreateListenerRequest;

CreateListenerRequest::CreateListenerRequest()
    : RpcServiceRequest("nlb", "2022-04-30", "CreateListener") {
  setMethod(HttpRequest::Method::Post);
}

CreateListenerRequest::~CreateListenerRequest() {}

std::vector<std::string> CreateListenerRequest::getCaCertificateIds() const {
  return caCertificateIds_;
}

void CreateListenerRequest::setCaCertificateIds(const std::vector<std::string> &caCertificateIds) {
  caCertificateIds_ = caCertificateIds;
}

int CreateListenerRequest::getStartPort() const {
  return startPort_;
}

void CreateListenerRequest::setStartPort(int startPort) {
  startPort_ = startPort;
  setBodyParameter(std::string("StartPort"), std::to_string(startPort));
}

std::string CreateListenerRequest::getClientToken() const {
  return clientToken_;
}

void CreateListenerRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

bool CreateListenerRequest::getSecSensorEnabled() const {
  return secSensorEnabled_;
}

void CreateListenerRequest::setSecSensorEnabled(bool secSensorEnabled) {
  secSensorEnabled_ = secSensorEnabled;
  setBodyParameter(std::string("SecSensorEnabled"), secSensorEnabled ? "true" : "false");
}

std::string CreateListenerRequest::getAlpnPolicy() const {
  return alpnPolicy_;
}

void CreateListenerRequest::setAlpnPolicy(const std::string &alpnPolicy) {
  alpnPolicy_ = alpnPolicy;
  setBodyParameter(std::string("AlpnPolicy"), alpnPolicy);
}

int CreateListenerRequest::getMss() const {
  return mss_;
}

void CreateListenerRequest::setMss(int mss) {
  mss_ = mss;
  setBodyParameter(std::string("Mss"), std::to_string(mss));
}

std::string CreateListenerRequest::getServerGroupId() const {
  return serverGroupId_;
}

void CreateListenerRequest::setServerGroupId(const std::string &serverGroupId) {
  serverGroupId_ = serverGroupId;
  setBodyParameter(std::string("ServerGroupId"), serverGroupId);
}

std::vector<std::string> CreateListenerRequest::getCertificateIds() const {
  return certificateIds_;
}

void CreateListenerRequest::setCertificateIds(const std::vector<std::string> &certificateIds) {
  certificateIds_ = certificateIds;
}

std::string CreateListenerRequest::getRegionId() const {
  return regionId_;
}

void CreateListenerRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::vector<CreateListenerRequest::Tag> CreateListenerRequest::getTag() const {
  return tag_;
}

void CreateListenerRequest::setTag(const std::vector<CreateListenerRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setBodyParameter(tagObjStr + ".Key", tagObj.key);
    setBodyParameter(tagObjStr + ".Value", tagObj.value);
  }
}

bool CreateListenerRequest::getAlpnEnabled() const {
  return alpnEnabled_;
}

void CreateListenerRequest::setAlpnEnabled(bool alpnEnabled) {
  alpnEnabled_ = alpnEnabled;
  setBodyParameter(std::string("AlpnEnabled"), alpnEnabled ? "true" : "false");
}

int CreateListenerRequest::getEndPort() const {
  return endPort_;
}

void CreateListenerRequest::setEndPort(int endPort) {
  endPort_ = endPort;
  setBodyParameter(std::string("EndPort"), std::to_string(endPort));
}

int CreateListenerRequest::getListenerPort() const {
  return listenerPort_;
}

void CreateListenerRequest::setListenerPort(int listenerPort) {
  listenerPort_ = listenerPort;
  setBodyParameter(std::string("ListenerPort"), std::to_string(listenerPort));
}

bool CreateListenerRequest::getDryRun() const {
  return dryRun_;
}

void CreateListenerRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setBodyParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

bool CreateListenerRequest::getProxyProtocolEnabled() const {
  return proxyProtocolEnabled_;
}

void CreateListenerRequest::setProxyProtocolEnabled(bool proxyProtocolEnabled) {
  proxyProtocolEnabled_ = proxyProtocolEnabled;
  setBodyParameter(std::string("ProxyProtocolEnabled"), proxyProtocolEnabled ? "true" : "false");
}

int CreateListenerRequest::getCps() const {
  return cps_;
}

void CreateListenerRequest::setCps(int cps) {
  cps_ = cps;
  setBodyParameter(std::string("Cps"), std::to_string(cps));
}

std::string CreateListenerRequest::getListenerProtocol() const {
  return listenerProtocol_;
}

void CreateListenerRequest::setListenerProtocol(const std::string &listenerProtocol) {
  listenerProtocol_ = listenerProtocol;
  setBodyParameter(std::string("ListenerProtocol"), listenerProtocol);
}

std::string CreateListenerRequest::getSecurityPolicyId() const {
  return securityPolicyId_;
}

void CreateListenerRequest::setSecurityPolicyId(const std::string &securityPolicyId) {
  securityPolicyId_ = securityPolicyId;
  setBodyParameter(std::string("SecurityPolicyId"), securityPolicyId);
}

int CreateListenerRequest::getIdleTimeout() const {
  return idleTimeout_;
}

void CreateListenerRequest::setIdleTimeout(int idleTimeout) {
  idleTimeout_ = idleTimeout;
  setBodyParameter(std::string("IdleTimeout"), std::to_string(idleTimeout));
}

std::string CreateListenerRequest::getLoadBalancerId() const {
  return loadBalancerId_;
}

void CreateListenerRequest::setLoadBalancerId(const std::string &loadBalancerId) {
  loadBalancerId_ = loadBalancerId;
  setBodyParameter(std::string("LoadBalancerId"), loadBalancerId);
}

std::string CreateListenerRequest::getListenerDescription() const {
  return listenerDescription_;
}

void CreateListenerRequest::setListenerDescription(const std::string &listenerDescription) {
  listenerDescription_ = listenerDescription;
  setBodyParameter(std::string("ListenerDescription"), listenerDescription);
}

bool CreateListenerRequest::getCaEnabled() const {
  return caEnabled_;
}

void CreateListenerRequest::setCaEnabled(bool caEnabled) {
  caEnabled_ = caEnabled;
  setBodyParameter(std::string("CaEnabled"), caEnabled ? "true" : "false");
}

