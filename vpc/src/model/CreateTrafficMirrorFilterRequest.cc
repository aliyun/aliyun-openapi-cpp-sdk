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

#include <alibabacloud/vpc/model/CreateTrafficMirrorFilterRequest.h>

using AlibabaCloud::Vpc::Model::CreateTrafficMirrorFilterRequest;

CreateTrafficMirrorFilterRequest::CreateTrafficMirrorFilterRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateTrafficMirrorFilter") {
  setMethod(HttpRequest::Method::Post);
}

CreateTrafficMirrorFilterRequest::~CreateTrafficMirrorFilterRequest() {}

long CreateTrafficMirrorFilterRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateTrafficMirrorFilterRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateTrafficMirrorFilterRequest::getClientToken() const {
  return clientToken_;
}

void CreateTrafficMirrorFilterRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<CreateTrafficMirrorFilterRequest::IngressRules> CreateTrafficMirrorFilterRequest::getIngressRules() const {
  return ingressRules_;
}

void CreateTrafficMirrorFilterRequest::setIngressRules(const std::vector<CreateTrafficMirrorFilterRequest::IngressRules> &ingressRules) {
  ingressRules_ = ingressRules;
  for(int dep1 = 0; dep1 != ingressRules.size(); dep1++) {
  auto ingressRulesObj = ingressRules.at(dep1);
  std::string ingressRulesObjStr = std::string("IngressRules") + "." + std::to_string(dep1 + 1);
    setParameter(ingressRulesObjStr + ".Action", ingressRulesObj.action);
    setParameter(ingressRulesObjStr + ".SourceCidrBlock", ingressRulesObj.sourceCidrBlock);
    setParameter(ingressRulesObjStr + ".Protocol", ingressRulesObj.protocol);
    setParameter(ingressRulesObjStr + ".IpVersion", ingressRulesObj.ipVersion);
    setParameter(ingressRulesObjStr + ".DestinationPortRange", ingressRulesObj.destinationPortRange);
    setParameter(ingressRulesObjStr + ".Priority", std::to_string(ingressRulesObj.priority));
    setParameter(ingressRulesObjStr + ".DestinationCidrBlock", ingressRulesObj.destinationCidrBlock);
    setParameter(ingressRulesObjStr + ".SourcePortRange", ingressRulesObj.sourcePortRange);
  }
}

std::string CreateTrafficMirrorFilterRequest::getTrafficMirrorFilterName() const {
  return trafficMirrorFilterName_;
}

void CreateTrafficMirrorFilterRequest::setTrafficMirrorFilterName(const std::string &trafficMirrorFilterName) {
  trafficMirrorFilterName_ = trafficMirrorFilterName;
  setParameter(std::string("TrafficMirrorFilterName"), trafficMirrorFilterName);
}

std::string CreateTrafficMirrorFilterRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateTrafficMirrorFilterRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateTrafficMirrorFilterRequest::getRegionId() const {
  return regionId_;
}

void CreateTrafficMirrorFilterRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<CreateTrafficMirrorFilterRequest::Tag> CreateTrafficMirrorFilterRequest::getTag() const {
  return tag_;
}

void CreateTrafficMirrorFilterRequest::setTag(const std::vector<CreateTrafficMirrorFilterRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::vector<CreateTrafficMirrorFilterRequest::EgressRules> CreateTrafficMirrorFilterRequest::getEgressRules() const {
  return egressRules_;
}

void CreateTrafficMirrorFilterRequest::setEgressRules(const std::vector<CreateTrafficMirrorFilterRequest::EgressRules> &egressRules) {
  egressRules_ = egressRules;
  for(int dep1 = 0; dep1 != egressRules.size(); dep1++) {
  auto egressRulesObj = egressRules.at(dep1);
  std::string egressRulesObjStr = std::string("EgressRules") + "." + std::to_string(dep1 + 1);
    setParameter(egressRulesObjStr + ".Action", egressRulesObj.action);
    setParameter(egressRulesObjStr + ".SourceCidrBlock", egressRulesObj.sourceCidrBlock);
    setParameter(egressRulesObjStr + ".Protocol", egressRulesObj.protocol);
    setParameter(egressRulesObjStr + ".IpVersion", egressRulesObj.ipVersion);
    setParameter(egressRulesObjStr + ".DestinationPortRange", egressRulesObj.destinationPortRange);
    setParameter(egressRulesObjStr + ".Priority", std::to_string(egressRulesObj.priority));
    setParameter(egressRulesObjStr + ".DestinationCidrBlock", egressRulesObj.destinationCidrBlock);
    setParameter(egressRulesObjStr + ".SourcePortRange", egressRulesObj.sourcePortRange);
  }
}

bool CreateTrafficMirrorFilterRequest::getDryRun() const {
  return dryRun_;
}

void CreateTrafficMirrorFilterRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateTrafficMirrorFilterRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateTrafficMirrorFilterRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateTrafficMirrorFilterRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateTrafficMirrorFilterRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateTrafficMirrorFilterRequest::getOwnerId() const {
  return ownerId_;
}

void CreateTrafficMirrorFilterRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateTrafficMirrorFilterRequest::getTrafficMirrorFilterDescription() const {
  return trafficMirrorFilterDescription_;
}

void CreateTrafficMirrorFilterRequest::setTrafficMirrorFilterDescription(const std::string &trafficMirrorFilterDescription) {
  trafficMirrorFilterDescription_ = trafficMirrorFilterDescription;
  setParameter(std::string("TrafficMirrorFilterDescription"), trafficMirrorFilterDescription);
}

