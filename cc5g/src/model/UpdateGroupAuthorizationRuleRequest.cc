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

#include <alibabacloud/cc5g/model/UpdateGroupAuthorizationRuleRequest.h>

using AlibabaCloud::CC5G::Model::UpdateGroupAuthorizationRuleRequest;

UpdateGroupAuthorizationRuleRequest::UpdateGroupAuthorizationRuleRequest()
    : RpcServiceRequest("cc5g", "2022-03-14", "UpdateGroupAuthorizationRule") {
  setMethod(HttpRequest::Method::Post);
}

UpdateGroupAuthorizationRuleRequest::~UpdateGroupAuthorizationRuleRequest() {}

std::string UpdateGroupAuthorizationRuleRequest::getWirelessCloudConnectorGroupId() const {
  return wirelessCloudConnectorGroupId_;
}

void UpdateGroupAuthorizationRuleRequest::setWirelessCloudConnectorGroupId(const std::string &wirelessCloudConnectorGroupId) {
  wirelessCloudConnectorGroupId_ = wirelessCloudConnectorGroupId;
  setParameter(std::string("WirelessCloudConnectorGroupId"), wirelessCloudConnectorGroupId);
}

std::string UpdateGroupAuthorizationRuleRequest::getClientToken() const {
  return clientToken_;
}

void UpdateGroupAuthorizationRuleRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateGroupAuthorizationRuleRequest::getSourceCidr() const {
  return sourceCidr_;
}

void UpdateGroupAuthorizationRuleRequest::setSourceCidr(const std::string &sourceCidr) {
  sourceCidr_ = sourceCidr;
  setParameter(std::string("SourceCidr"), sourceCidr);
}

std::string UpdateGroupAuthorizationRuleRequest::getDestination() const {
  return destination_;
}

void UpdateGroupAuthorizationRuleRequest::setDestination(const std::string &destination) {
  destination_ = destination;
  setParameter(std::string("Destination"), destination);
}

std::string UpdateGroupAuthorizationRuleRequest::getDescription() const {
  return description_;
}

void UpdateGroupAuthorizationRuleRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string UpdateGroupAuthorizationRuleRequest::getProtocol() const {
  return protocol_;
}

void UpdateGroupAuthorizationRuleRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

std::string UpdateGroupAuthorizationRuleRequest::getPolicy() const {
  return policy_;
}

void UpdateGroupAuthorizationRuleRequest::setPolicy(const std::string &policy) {
  policy_ = policy;
  setParameter(std::string("Policy"), policy);
}

bool UpdateGroupAuthorizationRuleRequest::getDryRun() const {
  return dryRun_;
}

void UpdateGroupAuthorizationRuleRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateGroupAuthorizationRuleRequest::getAuthorizationRuleId() const {
  return authorizationRuleId_;
}

void UpdateGroupAuthorizationRuleRequest::setAuthorizationRuleId(const std::string &authorizationRuleId) {
  authorizationRuleId_ = authorizationRuleId;
  setParameter(std::string("AuthorizationRuleId"), authorizationRuleId);
}

std::string UpdateGroupAuthorizationRuleRequest::getDestinationPort() const {
  return destinationPort_;
}

void UpdateGroupAuthorizationRuleRequest::setDestinationPort(const std::string &destinationPort) {
  destinationPort_ = destinationPort;
  setParameter(std::string("DestinationPort"), destinationPort);
}

std::string UpdateGroupAuthorizationRuleRequest::getName() const {
  return name_;
}

void UpdateGroupAuthorizationRuleRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

