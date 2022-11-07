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

#include <alibabacloud/cc5g/model/UpdateGroupDnsAuthorizationRuleRequest.h>

using AlibabaCloud::CC5G::Model::UpdateGroupDnsAuthorizationRuleRequest;

UpdateGroupDnsAuthorizationRuleRequest::UpdateGroupDnsAuthorizationRuleRequest()
    : RpcServiceRequest("cc5g", "2022-03-14", "UpdateGroupDnsAuthorizationRule") {
  setMethod(HttpRequest::Method::Post);
}

UpdateGroupDnsAuthorizationRuleRequest::~UpdateGroupDnsAuthorizationRuleRequest() {}

std::string UpdateGroupDnsAuthorizationRuleRequest::getWirelessCloudConnectorGroupId() const {
  return wirelessCloudConnectorGroupId_;
}

void UpdateGroupDnsAuthorizationRuleRequest::setWirelessCloudConnectorGroupId(const std::string &wirelessCloudConnectorGroupId) {
  wirelessCloudConnectorGroupId_ = wirelessCloudConnectorGroupId;
  setParameter(std::string("WirelessCloudConnectorGroupId"), wirelessCloudConnectorGroupId);
}

std::string UpdateGroupDnsAuthorizationRuleRequest::getClientToken() const {
  return clientToken_;
}

void UpdateGroupDnsAuthorizationRuleRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateGroupDnsAuthorizationRuleRequest::getDescription() const {
  return description_;
}

void UpdateGroupDnsAuthorizationRuleRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

bool UpdateGroupDnsAuthorizationRuleRequest::getDryRun() const {
  return dryRun_;
}

void UpdateGroupDnsAuthorizationRuleRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateGroupDnsAuthorizationRuleRequest::getSourceDNSIp() const {
  return sourceDNSIp_;
}

void UpdateGroupDnsAuthorizationRuleRequest::setSourceDNSIp(const std::string &sourceDNSIp) {
  sourceDNSIp_ = sourceDNSIp;
  setParameter(std::string("SourceDNSIp"), sourceDNSIp);
}

std::string UpdateGroupDnsAuthorizationRuleRequest::getAuthorizationRuleId() const {
  return authorizationRuleId_;
}

void UpdateGroupDnsAuthorizationRuleRequest::setAuthorizationRuleId(const std::string &authorizationRuleId) {
  authorizationRuleId_ = authorizationRuleId;
  setParameter(std::string("AuthorizationRuleId"), authorizationRuleId);
}

std::string UpdateGroupDnsAuthorizationRuleRequest::getDestinationIp() const {
  return destinationIp_;
}

void UpdateGroupDnsAuthorizationRuleRequest::setDestinationIp(const std::string &destinationIp) {
  destinationIp_ = destinationIp;
  setParameter(std::string("DestinationIp"), destinationIp);
}

std::string UpdateGroupDnsAuthorizationRuleRequest::getName() const {
  return name_;
}

void UpdateGroupDnsAuthorizationRuleRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

