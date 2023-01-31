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

#include <alibabacloud/vpc/model/UpdateTrafficMirrorFilterRuleAttributeRequest.h>

using AlibabaCloud::Vpc::Model::UpdateTrafficMirrorFilterRuleAttributeRequest;

UpdateTrafficMirrorFilterRuleAttributeRequest::UpdateTrafficMirrorFilterRuleAttributeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "UpdateTrafficMirrorFilterRuleAttribute") {
  setMethod(HttpRequest::Method::Post);
}

UpdateTrafficMirrorFilterRuleAttributeRequest::~UpdateTrafficMirrorFilterRuleAttributeRequest() {}

std::string UpdateTrafficMirrorFilterRuleAttributeRequest::getSourcePortRange() const {
  return sourcePortRange_;
}

void UpdateTrafficMirrorFilterRuleAttributeRequest::setSourcePortRange(const std::string &sourcePortRange) {
  sourcePortRange_ = sourcePortRange;
  setParameter(std::string("SourcePortRange"), sourcePortRange);
}

long UpdateTrafficMirrorFilterRuleAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateTrafficMirrorFilterRuleAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UpdateTrafficMirrorFilterRuleAttributeRequest::getDestinationPortRange() const {
  return destinationPortRange_;
}

void UpdateTrafficMirrorFilterRuleAttributeRequest::setDestinationPortRange(const std::string &destinationPortRange) {
  destinationPortRange_ = destinationPortRange;
  setParameter(std::string("DestinationPortRange"), destinationPortRange);
}

std::string UpdateTrafficMirrorFilterRuleAttributeRequest::getClientToken() const {
  return clientToken_;
}

void UpdateTrafficMirrorFilterRuleAttributeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateTrafficMirrorFilterRuleAttributeRequest::getRuleAction() const {
  return ruleAction_;
}

void UpdateTrafficMirrorFilterRuleAttributeRequest::setRuleAction(const std::string &ruleAction) {
  ruleAction_ = ruleAction;
  setParameter(std::string("RuleAction"), ruleAction);
}

std::string UpdateTrafficMirrorFilterRuleAttributeRequest::getProtocol() const {
  return protocol_;
}

void UpdateTrafficMirrorFilterRuleAttributeRequest::setProtocol(const std::string &protocol) {
  protocol_ = protocol;
  setParameter(std::string("Protocol"), protocol);
}

std::string UpdateTrafficMirrorFilterRuleAttributeRequest::getRegionId() const {
  return regionId_;
}

void UpdateTrafficMirrorFilterRuleAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateTrafficMirrorFilterRuleAttributeRequest::getSourceCidrBlock() const {
  return sourceCidrBlock_;
}

void UpdateTrafficMirrorFilterRuleAttributeRequest::setSourceCidrBlock(const std::string &sourceCidrBlock) {
  sourceCidrBlock_ = sourceCidrBlock;
  setParameter(std::string("SourceCidrBlock"), sourceCidrBlock);
}

bool UpdateTrafficMirrorFilterRuleAttributeRequest::getDryRun() const {
  return dryRun_;
}

void UpdateTrafficMirrorFilterRuleAttributeRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateTrafficMirrorFilterRuleAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateTrafficMirrorFilterRuleAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateTrafficMirrorFilterRuleAttributeRequest::getDestinationCidrBlock() const {
  return destinationCidrBlock_;
}

void UpdateTrafficMirrorFilterRuleAttributeRequest::setDestinationCidrBlock(const std::string &destinationCidrBlock) {
  destinationCidrBlock_ = destinationCidrBlock;
  setParameter(std::string("DestinationCidrBlock"), destinationCidrBlock);
}

std::string UpdateTrafficMirrorFilterRuleAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateTrafficMirrorFilterRuleAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int UpdateTrafficMirrorFilterRuleAttributeRequest::getPriority() const {
  return priority_;
}

void UpdateTrafficMirrorFilterRuleAttributeRequest::setPriority(int priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), std::to_string(priority));
}

long UpdateTrafficMirrorFilterRuleAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateTrafficMirrorFilterRuleAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string UpdateTrafficMirrorFilterRuleAttributeRequest::getTrafficMirrorFilterRuleId() const {
  return trafficMirrorFilterRuleId_;
}

void UpdateTrafficMirrorFilterRuleAttributeRequest::setTrafficMirrorFilterRuleId(const std::string &trafficMirrorFilterRuleId) {
  trafficMirrorFilterRuleId_ = trafficMirrorFilterRuleId;
  setParameter(std::string("TrafficMirrorFilterRuleId"), trafficMirrorFilterRuleId);
}

