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

#include <alibabacloud/cbn/model/AddTrafficMatchRuleToTrafficMarkingPolicyRequest.h>

using AlibabaCloud::Cbn::Model::AddTrafficMatchRuleToTrafficMarkingPolicyRequest;

AddTrafficMatchRuleToTrafficMarkingPolicyRequest::AddTrafficMatchRuleToTrafficMarkingPolicyRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "AddTrafficMatchRuleToTrafficMarkingPolicy") {
  setMethod(HttpRequest::Method::Post);
}

AddTrafficMatchRuleToTrafficMarkingPolicyRequest::~AddTrafficMatchRuleToTrafficMarkingPolicyRequest() {}

long AddTrafficMatchRuleToTrafficMarkingPolicyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AddTrafficMatchRuleToTrafficMarkingPolicyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AddTrafficMatchRuleToTrafficMarkingPolicyRequest::getClientToken() const {
  return clientToken_;
}

void AddTrafficMatchRuleToTrafficMarkingPolicyRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AddTrafficMatchRuleToTrafficMarkingPolicyRequest::getTrafficMarkingPolicyId() const {
  return trafficMarkingPolicyId_;
}

void AddTrafficMatchRuleToTrafficMarkingPolicyRequest::setTrafficMarkingPolicyId(const std::string &trafficMarkingPolicyId) {
  trafficMarkingPolicyId_ = trafficMarkingPolicyId;
  setParameter(std::string("TrafficMarkingPolicyId"), trafficMarkingPolicyId);
}

bool AddTrafficMatchRuleToTrafficMarkingPolicyRequest::getDryRun() const {
  return dryRun_;
}

void AddTrafficMatchRuleToTrafficMarkingPolicyRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::vector<AddTrafficMatchRuleToTrafficMarkingPolicyRequest::TrafficMatchRules> AddTrafficMatchRuleToTrafficMarkingPolicyRequest::getTrafficMatchRules() const {
  return trafficMatchRules_;
}

void AddTrafficMatchRuleToTrafficMarkingPolicyRequest::setTrafficMatchRules(const std::vector<AddTrafficMatchRuleToTrafficMarkingPolicyRequest::TrafficMatchRules> &trafficMatchRules) {
  trafficMatchRules_ = trafficMatchRules;
  for(int dep1 = 0; dep1 != trafficMatchRules.size(); dep1++) {
  auto trafficMatchRulesObj = trafficMatchRules.at(dep1);
  std::string trafficMatchRulesObjStr = std::string("TrafficMatchRules") + "." + std::to_string(dep1 + 1);
    setParameter(trafficMatchRulesObjStr + ".MatchDscp", std::to_string(trafficMatchRulesObj.matchDscp));
    setParameter(trafficMatchRulesObjStr + ".Protocol", trafficMatchRulesObj.protocol);
    setParameter(trafficMatchRulesObjStr + ".TrafficMatchRuleDescription", trafficMatchRulesObj.trafficMatchRuleDescription);
    setParameter(trafficMatchRulesObjStr + ".DstCidr", trafficMatchRulesObj.dstCidr);
    setParameter(trafficMatchRulesObjStr + ".TrafficMatchRuleName", trafficMatchRulesObj.trafficMatchRuleName);
    setParameter(trafficMatchRulesObjStr + ".SrcCidr", trafficMatchRulesObj.srcCidr);
  }
}

std::string AddTrafficMatchRuleToTrafficMarkingPolicyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AddTrafficMatchRuleToTrafficMarkingPolicyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AddTrafficMatchRuleToTrafficMarkingPolicyRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AddTrafficMatchRuleToTrafficMarkingPolicyRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AddTrafficMatchRuleToTrafficMarkingPolicyRequest::getOwnerId() const {
  return ownerId_;
}

void AddTrafficMatchRuleToTrafficMarkingPolicyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AddTrafficMatchRuleToTrafficMarkingPolicyRequest::getVersion() const {
  return version_;
}

void AddTrafficMatchRuleToTrafficMarkingPolicyRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

