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

#include <alibabacloud/ga/model/UpdateListenerRequest.h>

using AlibabaCloud::Ga::Model::UpdateListenerRequest;

UpdateListenerRequest::UpdateListenerRequest()
    : RpcServiceRequest("ga", "2019-11-20", "UpdateListener") {
  setMethod(HttpRequest::Method::Post);
}

UpdateListenerRequest::~UpdateListenerRequest() {}

std::string UpdateListenerRequest::getClientToken() const {
  return clientToken_;
}

void UpdateListenerRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateListenerRequest::getDescription() const {
  return description_;
}

void UpdateListenerRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::vector<UpdateListenerRequest::BackendPorts> UpdateListenerRequest::getBackendPorts() const {
  return backendPorts_;
}

void UpdateListenerRequest::setBackendPorts(const std::vector<UpdateListenerRequest::BackendPorts> &backendPorts) {
  backendPorts_ = backendPorts;
  for(int dep1 = 0; dep1 != backendPorts.size(); dep1++) {
  auto backendPortsObj = backendPorts.at(dep1);
  std::string backendPortsObjStr = std::string("BackendPorts") + "." + std::to_string(dep1 + 1);
    setParameter(backendPortsObjStr + ".FromPort", std::to_string(backendPortsObj.fromPort));
    setParameter(backendPortsObjStr + ".ToPort", std::to_string(backendPortsObj.toPort));
  }
}

std::string UpdateListenerRequest::getListenerId() const {
  return listenerId_;
}

void UpdateListenerRequest::setListenerId(const std::string &listenerId) {
  listenerId_ = listenerId;
  setParameter(std::string("ListenerId"), listenerId);
}

std::string UpdateListenerRequest::getProtocol() const {
  return protocol_;
}

void UpdateListenerRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

std::string UpdateListenerRequest::getRegionId() const {
  return regionId_;
}

void UpdateListenerRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

UpdateListenerRequest::XForwardedForConfig UpdateListenerRequest::getXForwardedForConfig() const {
  return xForwardedForConfig_;
}

void UpdateListenerRequest::setXForwardedForConfig(const UpdateListenerRequest::XForwardedForConfig &xForwardedForConfig) {
  xForwardedForConfig_ = xForwardedForConfig;
  setParameter(std::string("XForwardedForConfig") + ".XForwardedForGaIdEnabled", xForwardedForConfig.xForwardedForGaIdEnabled ? "true" : "false");
  setParameter(std::string("XForwardedForConfig") + ".XForwardedForProtoEnabled", xForwardedForConfig.xForwardedForProtoEnabled ? "true" : "false");
  setParameter(std::string("XForwardedForConfig") + ".XForwardedForPortEnabled", xForwardedForConfig.xForwardedForPortEnabled ? "true" : "false");
  setParameter(std::string("XForwardedForConfig") + ".XRealIpEnabled", xForwardedForConfig.xRealIpEnabled ? "true" : "false");
  setParameter(std::string("XForwardedForConfig") + ".XForwardedForGaApEnabled", xForwardedForConfig.xForwardedForGaApEnabled ? "true" : "false");
}

std::string UpdateListenerRequest::getSecurityPolicyId() const {
  return securityPolicyId_;
}

void UpdateListenerRequest::setSecurityPolicyId(const std::string &securityPolicyId) {
  securityPolicyId_ = securityPolicyId;
  setParameter(std::string("SecurityPolicyId"), securityPolicyId);
}

std::string UpdateListenerRequest::getProxyProtocol() const {
  return proxyProtocol_;
}

void UpdateListenerRequest::setProxyProtocol(const std::string &proxyProtocol) {
  proxyProtocol_ = proxyProtocol;
  setParameter(std::string("ProxyProtocol"), proxyProtocol);
}

std::vector<UpdateListenerRequest::PortRanges> UpdateListenerRequest::getPortRanges() const {
  return portRanges_;
}

void UpdateListenerRequest::setPortRanges(const std::vector<UpdateListenerRequest::PortRanges> &portRanges) {
  portRanges_ = portRanges;
  for(int dep1 = 0; dep1 != portRanges.size(); dep1++) {
  auto portRangesObj = portRanges.at(dep1);
  std::string portRangesObjStr = std::string("PortRanges") + "." + std::to_string(dep1 + 1);
    setParameter(portRangesObjStr + ".FromPort", std::to_string(portRangesObj.fromPort));
    setParameter(portRangesObjStr + ".ToPort", std::to_string(portRangesObj.toPort));
  }
}

std::vector<UpdateListenerRequest::Certificates> UpdateListenerRequest::getCertificates() const {
  return certificates_;
}

void UpdateListenerRequest::setCertificates(const std::vector<UpdateListenerRequest::Certificates> &certificates) {
  certificates_ = certificates;
  for(int dep1 = 0; dep1 != certificates.size(); dep1++) {
  auto certificatesObj = certificates.at(dep1);
  std::string certificatesObjStr = std::string("Certificates") + "." + std::to_string(dep1 + 1);
    setParameter(certificatesObjStr + ".Id", certificatesObj.id);
  }
}

std::string UpdateListenerRequest::getName() const {
  return name_;
}

void UpdateListenerRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string UpdateListenerRequest::getClientAffinity() const {
  return clientAffinity_;
}

void UpdateListenerRequest::setClientAffinity(const std::string &clientAffinity) {
  clientAffinity_ = clientAffinity;
  setParameter(std::string("ClientAffinity"), clientAffinity);
}

