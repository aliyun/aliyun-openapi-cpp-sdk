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

#include <alibabacloud/cc5g/model/CreateGroupAuthorizationRuleRequest.h>

using AlibabaCloud::CC5G::Model::CreateGroupAuthorizationRuleRequest;

CreateGroupAuthorizationRuleRequest::CreateGroupAuthorizationRuleRequest()
    : RpcServiceRequest("cc5g", "2022-03-14", "CreateGroupAuthorizationRule") {
  setMethod(HttpRequest::Method::Post);
}

CreateGroupAuthorizationRuleRequest::~CreateGroupAuthorizationRuleRequest() {}

std::string CreateGroupAuthorizationRuleRequest::getWirelessCloudConnectorGroupId() const {
  return wirelessCloudConnectorGroupId_;
}

void CreateGroupAuthorizationRuleRequest::setWirelessCloudConnectorGroupId(const std::string &wirelessCloudConnectorGroupId) {
  wirelessCloudConnectorGroupId_ = wirelessCloudConnectorGroupId;
  setParameter(std::string("WirelessCloudConnectorGroupId"), wirelessCloudConnectorGroupId);
}

std::string CreateGroupAuthorizationRuleRequest::getClientToken() const {
  return clientToken_;
}

void CreateGroupAuthorizationRuleRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateGroupAuthorizationRuleRequest::getSourceCidr() const {
  return sourceCidr_;
}

void CreateGroupAuthorizationRuleRequest::setSourceCidr(const std::string &sourceCidr) {
  sourceCidr_ = sourceCidr;
  setParameter(std::string("SourceCidr"), sourceCidr);
}

std::string CreateGroupAuthorizationRuleRequest::getDestinationType() const {
  return destinationType_;
}

void CreateGroupAuthorizationRuleRequest::setDestinationType(const std::string &destinationType) {
  destinationType_ = destinationType;
  setParameter(std::string("DestinationType"), destinationType);
}

std::string CreateGroupAuthorizationRuleRequest::getDestination() const {
  return destination_;
}

void CreateGroupAuthorizationRuleRequest::setDestination(const std::string &destination) {
  destination_ = destination;
  setParameter(std::string("Destination"), destination);
}

std::string CreateGroupAuthorizationRuleRequest::getDescription() const {
  return description_;
}

void CreateGroupAuthorizationRuleRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateGroupAuthorizationRuleRequest::getProtocol() const {
  return protocol_;
}

void CreateGroupAuthorizationRuleRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

std::string CreateGroupAuthorizationRuleRequest::getPolicy() const {
  return policy_;
}

void CreateGroupAuthorizationRuleRequest::setPolicy(const std::string &policy) {
  policy_ = policy;
  setParameter(std::string("Policy"), policy);
}

bool CreateGroupAuthorizationRuleRequest::getDryRun() const {
  return dryRun_;
}

void CreateGroupAuthorizationRuleRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateGroupAuthorizationRuleRequest::getDestinationPort() const {
  return destinationPort_;
}

void CreateGroupAuthorizationRuleRequest::setDestinationPort(const std::string &destinationPort) {
  destinationPort_ = destinationPort;
  setParameter(std::string("DestinationPort"), destinationPort);
}

std::string CreateGroupAuthorizationRuleRequest::getName() const {
  return name_;
}

void CreateGroupAuthorizationRuleRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

