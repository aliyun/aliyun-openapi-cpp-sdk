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

#include <alibabacloud/cc5g/model/CreateAuthorizationRuleRequest.h>

using AlibabaCloud::CC5G::Model::CreateAuthorizationRuleRequest;

CreateAuthorizationRuleRequest::CreateAuthorizationRuleRequest()
    : RpcServiceRequest("cc5g", "2022-03-14", "CreateAuthorizationRule") {
  setMethod(HttpRequest::Method::Post);
}

CreateAuthorizationRuleRequest::~CreateAuthorizationRuleRequest() {}

std::string CreateAuthorizationRuleRequest::getClientToken() const {
  return clientToken_;
}

void CreateAuthorizationRuleRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateAuthorizationRuleRequest::getSourceCidr() const {
  return sourceCidr_;
}

void CreateAuthorizationRuleRequest::setSourceCidr(const std::string &sourceCidr) {
  sourceCidr_ = sourceCidr;
  setParameter(std::string("SourceCidr"), sourceCidr);
}

std::string CreateAuthorizationRuleRequest::getDestinationType() const {
  return destinationType_;
}

void CreateAuthorizationRuleRequest::setDestinationType(const std::string &destinationType) {
  destinationType_ = destinationType;
  setParameter(std::string("DestinationType"), destinationType);
}

std::string CreateAuthorizationRuleRequest::getDestination() const {
  return destination_;
}

void CreateAuthorizationRuleRequest::setDestination(const std::string &destination) {
  destination_ = destination;
  setParameter(std::string("Destination"), destination);
}

std::string CreateAuthorizationRuleRequest::getDescription() const {
  return description_;
}

void CreateAuthorizationRuleRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateAuthorizationRuleRequest::getProtocol() const {
  return protocol_;
}

void CreateAuthorizationRuleRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

std::string CreateAuthorizationRuleRequest::getPolicy() const {
  return policy_;
}

void CreateAuthorizationRuleRequest::setPolicy(const std::string &policy) {
  policy_ = policy;
  setParameter(std::string("Policy"), policy);
}

bool CreateAuthorizationRuleRequest::getDryRun() const {
  return dryRun_;
}

void CreateAuthorizationRuleRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateAuthorizationRuleRequest::getDestinationPort() const {
  return destinationPort_;
}

void CreateAuthorizationRuleRequest::setDestinationPort(const std::string &destinationPort) {
  destinationPort_ = destinationPort;
  setParameter(std::string("DestinationPort"), destinationPort);
}

std::string CreateAuthorizationRuleRequest::getWirelessCloudConnectorId() const {
  return wirelessCloudConnectorId_;
}

void CreateAuthorizationRuleRequest::setWirelessCloudConnectorId(const std::string &wirelessCloudConnectorId) {
  wirelessCloudConnectorId_ = wirelessCloudConnectorId;
  setParameter(std::string("WirelessCloudConnectorId"), wirelessCloudConnectorId);
}

std::string CreateAuthorizationRuleRequest::getName() const {
  return name_;
}

void CreateAuthorizationRuleRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

