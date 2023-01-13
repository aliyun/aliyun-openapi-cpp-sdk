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

#include <alibabacloud/cbn/model/UpdateTrafficMarkingPolicyAttributeRequest.h>

using AlibabaCloud::Cbn::Model::UpdateTrafficMarkingPolicyAttributeRequest;

UpdateTrafficMarkingPolicyAttributeRequest::UpdateTrafficMarkingPolicyAttributeRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "UpdateTrafficMarkingPolicyAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateTrafficMarkingPolicyAttributeRequest::~UpdateTrafficMarkingPolicyAttributeRequest() {}

long UpdateTrafficMarkingPolicyAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateTrafficMarkingPolicyAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateTrafficMarkingPolicyAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateTrafficMarkingPolicyAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<UpdateTrafficMarkingPolicyAttributeRequest::AddTrafficMatchRules> UpdateTrafficMarkingPolicyAttributeRequest::getAddTrafficMatchRules() const {
  return addTrafficMatchRules_;
}

void UpdateTrafficMarkingPolicyAttributeRequest::setAddTrafficMatchRules(const std::vector<UpdateTrafficMarkingPolicyAttributeRequest::AddTrafficMatchRules> &addTrafficMatchRules) {
  addTrafficMatchRules_ = addTrafficMatchRules;
  for(int dep1 = 0; dep1 != addTrafficMatchRules.size(); dep1++) {
  auto addTrafficMatchRulesObj = addTrafficMatchRules.at(dep1);
  std::string addTrafficMatchRulesObjStr = std::string("AddTrafficMatchRules") + "." + std::to_string(dep1 + 1);
    setParameter(addTrafficMatchRulesObjStr + ".MatchDscp", std::to_string(addTrafficMatchRulesObj.matchDscp));
    setParameter(addTrafficMatchRulesObjStr + ".Protocol", addTrafficMatchRulesObj.protocol);
    setParameter(addTrafficMatchRulesObjStr + ".TrafficMatchRuleDescription", addTrafficMatchRulesObj.trafficMatchRuleDescription);
    setParameter(addTrafficMatchRulesObjStr + ".DstCidr", addTrafficMatchRulesObj.dstCidr);
    setParameter(addTrafficMatchRulesObjStr + ".TrafficMatchRuleName", addTrafficMatchRulesObj.trafficMatchRuleName);
    setParameter(addTrafficMatchRulesObjStr + ".SrcCidr", addTrafficMatchRulesObj.srcCidr);
  }
}

std::string UpdateTrafficMarkingPolicyAttributeRequest::getTrafficMarkingPolicyDescription() const {
  return trafficMarkingPolicyDescription_;
}

void UpdateTrafficMarkingPolicyAttributeRequest::setTrafficMarkingPolicyDescription(const std::string &trafficMarkingPolicyDescription) {
  trafficMarkingPolicyDescription_ = trafficMarkingPolicyDescription;
  setParameter(std::string("TrafficMarkingPolicyDescription"), trafficMarkingPolicyDescription);
}

std::string UpdateTrafficMarkingPolicyAttributeRequest::getTrafficMarkingPolicyId() const {
  return trafficMarkingPolicyId_;
}

void UpdateTrafficMarkingPolicyAttributeRequest::setTrafficMarkingPolicyId(const std::string &trafficMarkingPolicyId) {
  trafficMarkingPolicyId_ = trafficMarkingPolicyId;
  setParameter(std::string("TrafficMarkingPolicyId"), trafficMarkingPolicyId);
}

std::string UpdateTrafficMarkingPolicyAttributeRequest::getTrafficMarkingPolicyName() const {
  return trafficMarkingPolicyName_;
}

void UpdateTrafficMarkingPolicyAttributeRequest::setTrafficMarkingPolicyName(const std::string &trafficMarkingPolicyName) {
  trafficMarkingPolicyName_ = trafficMarkingPolicyName;
  setParameter(std::string("TrafficMarkingPolicyName"), trafficMarkingPolicyName);
}

bool UpdateTrafficMarkingPolicyAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateTrafficMarkingPolicyAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateTrafficMarkingPolicyAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateTrafficMarkingPolicyAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateTrafficMarkingPolicyAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateTrafficMarkingPolicyAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long UpdateTrafficMarkingPolicyAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateTrafficMarkingPolicyAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateTrafficMarkingPolicyAttributeRequest::getVersion() const {
  return version_;
}

void UpdateTrafficMarkingPolicyAttributeRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::vector<UpdateTrafficMarkingPolicyAttributeRequest::DeleteTrafficMatchRules> UpdateTrafficMarkingPolicyAttributeRequest::getDeleteTrafficMatchRules() const {
  return deleteTrafficMatchRules_;
}

void UpdateTrafficMarkingPolicyAttributeRequest::setDeleteTrafficMatchRules(const std::vector<UpdateTrafficMarkingPolicyAttributeRequest::DeleteTrafficMatchRules> &deleteTrafficMatchRules) {
  deleteTrafficMatchRules_ = deleteTrafficMatchRules;
  for(int dep1 = 0; dep1 != deleteTrafficMatchRules.size(); dep1++) {
  auto deleteTrafficMatchRulesObj = deleteTrafficMatchRules.at(dep1);
  std::string deleteTrafficMatchRulesObjStr = std::string("DeleteTrafficMatchRules") + "." + std::to_string(dep1 + 1);
    setParameter(deleteTrafficMatchRulesObjStr + ".MatchDscp", std::to_string(deleteTrafficMatchRulesObj.matchDscp));
    setParameter(deleteTrafficMatchRulesObjStr + ".Protocol", deleteTrafficMatchRulesObj.protocol);
    setParameter(deleteTrafficMatchRulesObjStr + ".TrafficMatchRuleDescription", deleteTrafficMatchRulesObj.trafficMatchRuleDescription);
    setParameter(deleteTrafficMatchRulesObjStr + ".DstCidr", deleteTrafficMatchRulesObj.dstCidr);
    setParameter(deleteTrafficMatchRulesObjStr + ".TrafficMatchRuleName", deleteTrafficMatchRulesObj.trafficMatchRuleName);
    setParameter(deleteTrafficMatchRulesObjStr + ".SrcCidr", deleteTrafficMatchRulesObj.srcCidr);
  }
}

