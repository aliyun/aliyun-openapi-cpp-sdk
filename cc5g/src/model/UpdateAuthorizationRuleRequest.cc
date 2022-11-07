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

#include <alibabacloud/cc5g/model/UpdateAuthorizationRuleRequest.h>

using AlibabaCloud::CC5G::Model::UpdateAuthorizationRuleRequest;

UpdateAuthorizationRuleRequest::UpdateAuthorizationRuleRequest()
    : RpcServiceRequest("cc5g", "2022-03-14", "UpdateAuthorizationRule") {
  setMethod(HttpRequest::Method::Post);
}

UpdateAuthorizationRuleRequest::~UpdateAuthorizationRuleRequest() {}

std::string UpdateAuthorizationRuleRequest::getClientToken() const {
  return clientToken_;
}

void UpdateAuthorizationRuleRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateAuthorizationRuleRequest::getSourceCidr() const {
  return sourceCidr_;
}

void UpdateAuthorizationRuleRequest::setSourceCidr(const std::string &sourceCidr) {
  sourceCidr_ = sourceCidr;
  setParameter(std::string("SourceCidr"), sourceCidr);
}

std::string UpdateAuthorizationRuleRequest::getDestination() const {
  return destination_;
}

void UpdateAuthorizationRuleRequest::setDestination(const std::string &destination) {
  destination_ = destination;
  setParameter(std::string("Destination"), destination);
}

std::string UpdateAuthorizationRuleRequest::getDescription() const {
  return description_;
}

void UpdateAuthorizationRuleRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateAuthorizationRuleRequest::getProtocol() const {
  return protocol_;
}

void UpdateAuthorizationRuleRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

std::string UpdateAuthorizationRuleRequest::getPolicy() const {
  return policy_;
}

void UpdateAuthorizationRuleRequest::setPolicy(const std::string &policy) {
  policy_ = policy;
  setParameter(std::string("Policy"), policy);
}

bool UpdateAuthorizationRuleRequest::getDryRun() const {
  return dryRun_;
}

void UpdateAuthorizationRuleRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateAuthorizationRuleRequest::getAuthorizationRuleId() const {
  return authorizationRuleId_;
}

void UpdateAuthorizationRuleRequest::setAuthorizationRuleId(const std::string &authorizationRuleId) {
  authorizationRuleId_ = authorizationRuleId;
  setParameter(std::string("AuthorizationRuleId"), authorizationRuleId);
}

std::string UpdateAuthorizationRuleRequest::getDestinationPort() const {
  return destinationPort_;
}

void UpdateAuthorizationRuleRequest::setDestinationPort(const std::string &destinationPort) {
  destinationPort_ = destinationPort;
  setParameter(std::string("DestinationPort"), destinationPort);
}

std::string UpdateAuthorizationRuleRequest::getWirelessCloudConnectorId() const {
  return wirelessCloudConnectorId_;
}

void UpdateAuthorizationRuleRequest::setWirelessCloudConnectorId(const std::string &wirelessCloudConnectorId) {
  wirelessCloudConnectorId_ = wirelessCloudConnectorId;
  setParameter(std::string("WirelessCloudConnectorId"), wirelessCloudConnectorId);
}

std::string UpdateAuthorizationRuleRequest::getName() const {
  return name_;
}

void UpdateAuthorizationRuleRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

