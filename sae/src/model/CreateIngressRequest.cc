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

#include <alibabacloud/sae/model/CreateIngressRequest.h>

using AlibabaCloud::Sae::Model::CreateIngressRequest;

CreateIngressRequest::CreateIngressRequest()
    : RoaServiceRequest("sae", "2019-05-06") {
  setResourcePath("/pop/v1/sam/ingress/Ingress"};
  setMethod(HttpRequest::Method::Post);
}

CreateIngressRequest::~CreateIngressRequest() {}

int CreateIngressRequest::getListenerPort() const {
  return listenerPort_;
}

void CreateIngressRequest::setListenerPort(int listenerPort) {
  listenerPort_ = listenerPort;
  setParameter(std::string("ListenerPort"), std::to_string(listenerPort));
}

std::string CreateIngressRequest::getSlbId() const {
  return slbId_;
}

void CreateIngressRequest::setSlbId(const std::string &slbId) {
  slbId_ = slbId;
  setParameter(std::string("SlbId"), slbId);
}

std::string CreateIngressRequest::getNamespaceId() const {
  return namespaceId_;
}

void CreateIngressRequest::setNamespaceId(const std::string &namespaceId) {
  namespaceId_ = namespaceId;
  setParameter(std::string("NamespaceId"), namespaceId);
}

std::string CreateIngressRequest::getDescription() const {
  return description_;
}

void CreateIngressRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateIngressRequest::getLoadBalanceType() const {
  return loadBalanceType_;
}

void CreateIngressRequest::setLoadBalanceType(const std::string &loadBalanceType) {
  loadBalanceType_ = loadBalanceType;
  setParameter(std::string("LoadBalanceType"), loadBalanceType);
}

std::string CreateIngressRequest::getRules() const {
  return rules_;
}

void CreateIngressRequest::setRules(const std::string &rules) {
  rules_ = rules;
  setBodyParameter(std::string("Rules"), rules);
}

std::string CreateIngressRequest::getCertId() const {
  return certId_;
}

void CreateIngressRequest::setCertId(const std::string &certId) {
  certId_ = certId;
  setParameter(std::string("CertId"), certId);
}

std::string CreateIngressRequest::getCertIds() const {
  return certIds_;
}

void CreateIngressRequest::setCertIds(const std::string &certIds) {
  certIds_ = certIds;
  setParameter(std::string("CertIds"), certIds);
}

std::string CreateIngressRequest::getListenerProtocol() const {
  return listenerProtocol_;
}

void CreateIngressRequest::setListenerProtocol(const std::string &listenerProtocol) {
  listenerProtocol_ = listenerProtocol;
  setParameter(std::string("ListenerProtocol"), listenerProtocol);
}

std::string CreateIngressRequest::getDefaultRule() const {
  return defaultRule_;
}

void CreateIngressRequest::setDefaultRule(const std::string &defaultRule) {
  defaultRule_ = defaultRule;
  setParameter(std::string("DefaultRule"), defaultRule);
}

