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

#include <alibabacloud/cbn/model/RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest.h>

using AlibabaCloud::Cbn::Model::RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest;

RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest::RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "RemoveTraficMatchRuleFromTrafficMarkingPolicy") {
  setMethod(HttpRequest::Method::Post);
}

RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest::~RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest() {}

long RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest::getClientToken() const {
  return clientToken_;
}

void RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest::getTrafficMarkingPolicyId() const {
  return trafficMarkingPolicyId_;
}

void RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest::setTrafficMarkingPolicyId(const std::string &trafficMarkingPolicyId) {
  trafficMarkingPolicyId_ = trafficMarkingPolicyId;
  setParameter(std::string("TrafficMarkingPolicyId"), trafficMarkingPolicyId);
}

bool RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest::getDryRun() const {
  return dryRun_;
}

void RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::vector<std::string> RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest::getTrafficMarkRuleIds() const {
  return trafficMarkRuleIds_;
}

void RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest::setTrafficMarkRuleIds(const std::vector<std::string> &trafficMarkRuleIds) {
  trafficMarkRuleIds_ = trafficMarkRuleIds;
}

long RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest::getOwnerId() const {
  return ownerId_;
}

void RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest::getVersion() const {
  return version_;
}

void RemoveTraficMatchRuleFromTrafficMarkingPolicyRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

