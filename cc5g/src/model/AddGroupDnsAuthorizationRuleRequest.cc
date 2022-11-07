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

#include <alibabacloud/cc5g/model/AddGroupDnsAuthorizationRuleRequest.h>

using AlibabaCloud::CC5G::Model::AddGroupDnsAuthorizationRuleRequest;

AddGroupDnsAuthorizationRuleRequest::AddGroupDnsAuthorizationRuleRequest()
    : RpcServiceRequest("cc5g", "2022-03-14", "AddGroupDnsAuthorizationRule") {
  setMethod(HttpRequest::Method::Post);
}

AddGroupDnsAuthorizationRuleRequest::~AddGroupDnsAuthorizationRuleRequest() {}

std::string AddGroupDnsAuthorizationRuleRequest::getWirelessCloudConnectorGroupId() const {
  return wirelessCloudConnectorGroupId_;
}

void AddGroupDnsAuthorizationRuleRequest::setWirelessCloudConnectorGroupId(const std::string &wirelessCloudConnectorGroupId) {
  wirelessCloudConnectorGroupId_ = wirelessCloudConnectorGroupId;
  setParameter(std::string("WirelessCloudConnectorGroupId"), wirelessCloudConnectorGroupId);
}

std::string AddGroupDnsAuthorizationRuleRequest::getClientToken() const {
  return clientToken_;
}

void AddGroupDnsAuthorizationRuleRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AddGroupDnsAuthorizationRuleRequest::getDescription() const {
  return description_;
}

void AddGroupDnsAuthorizationRuleRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

bool AddGroupDnsAuthorizationRuleRequest::getDryRun() const {
  return dryRun_;
}

void AddGroupDnsAuthorizationRuleRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string AddGroupDnsAuthorizationRuleRequest::getSourceDNSIp() const {
  return sourceDNSIp_;
}

void AddGroupDnsAuthorizationRuleRequest::setSourceDNSIp(const std::string &sourceDNSIp) {
  sourceDNSIp_ = sourceDNSIp;
  setParameter(std::string("SourceDNSIp"), sourceDNSIp);
}

std::string AddGroupDnsAuthorizationRuleRequest::getDestinationIp() const {
  return destinationIp_;
}

void AddGroupDnsAuthorizationRuleRequest::setDestinationIp(const std::string &destinationIp) {
  destinationIp_ = destinationIp;
  setParameter(std::string("DestinationIp"), destinationIp);
}

std::string AddGroupDnsAuthorizationRuleRequest::getName() const {
  return name_;
}

void AddGroupDnsAuthorizationRuleRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

