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

#include <alibabacloud/sae/model/UpdateIngressRequest.h>

using AlibabaCloud::Sae::Model::UpdateIngressRequest;

UpdateIngressRequest::UpdateIngressRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/ingress/Ingress"};
  setMethod(HttpRequest::Method::Put);
}

UpdateIngressRequest::~UpdateIngressRequest() {}

long UpdateIngressRequest::getIngressId() const {
  return ingressId_;
}

void UpdateIngressRequest::setIngressId(long ingressId) {
  ingressId_ = ingressId;
  setParameter(std::string("IngressId"), std::to_string(ingressId));
}

std::string UpdateIngressRequest::getListenerPort() const {
  return listenerPort_;
}

void UpdateIngressRequest::setListenerPort(const std::string &listenerPort) {
  listenerPort_ = listenerPort;
  setParameter(std::string("ListenerPort"), listenerPort);
}

std::string UpdateIngressRequest::getDescription() const {
  return description_;
}

void UpdateIngressRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateIngressRequest::getLoadBalanceType() const {
  return loadBalanceType_;
}

void UpdateIngressRequest::setLoadBalanceType(const std::string &loadBalanceType) {
  loadBalanceType_ = loadBalanceType;
  setParameter(std::string("LoadBalanceType"), loadBalanceType);
}

std::string UpdateIngressRequest::getRules() const {
  return rules_;
}

void UpdateIngressRequest::setRules(const std::string &rules) {
  rules_ = rules;
  setBodyParameter(std::string("Rules"), rules);
}

std::string UpdateIngressRequest::getCertId() const {
  return certId_;
}

void UpdateIngressRequest::setCertId(const std::string &certId) {
  certId_ = certId;
  setParameter(std::string("CertId"), certId);
}

std::string UpdateIngressRequest::getCertIds() const {
  return certIds_;
}

void UpdateIngressRequest::setCertIds(const std::string &certIds) {
  certIds_ = certIds;
  setParameter(std::string("CertIds"), certIds);
}

std::string UpdateIngressRequest::getListenerProtocol() const {
  return listenerProtocol_;
}

void UpdateIngressRequest::setListenerProtocol(const std::string &listenerProtocol) {
  listenerProtocol_ = listenerProtocol;
  setParameter(std::string("ListenerProtocol"), listenerProtocol);
}

std::string UpdateIngressRequest::getDefaultRule() const {
  return defaultRule_;
}

void UpdateIngressRequest::setDefaultRule(const std::string &defaultRule) {
  defaultRule_ = defaultRule;
  setParameter(std::string("DefaultRule"), defaultRule);
}

