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

#include <alibabacloud/vpc/model/CreateTrafficMirrorFilterRulesRequest.h>

using AlibabaCloud::Vpc::Model::CreateTrafficMirrorFilterRulesRequest;

CreateTrafficMirrorFilterRulesRequest::CreateTrafficMirrorFilterRulesRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateTrafficMirrorFilterRules") {
  setMethod(HttpRequest::Method::Post);
}

CreateTrafficMirrorFilterRulesRequest::~CreateTrafficMirrorFilterRulesRequest() {}

long CreateTrafficMirrorFilterRulesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateTrafficMirrorFilterRulesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateTrafficMirrorFilterRulesRequest::getClientToken() const {
  return clientToken_;
}

void CreateTrafficMirrorFilterRulesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<CreateTrafficMirrorFilterRulesRequest::IngressRules> CreateTrafficMirrorFilterRulesRequest::getIngressRules() const {
  return ingressRules_;
}

void CreateTrafficMirrorFilterRulesRequest::setIngressRules(const std::vector<CreateTrafficMirrorFilterRulesRequest::IngressRules> &ingressRules) {
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

std::string CreateTrafficMirrorFilterRulesRequest::getRegionId() const {
  return regionId_;
}

void CreateTrafficMirrorFilterRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<CreateTrafficMirrorFilterRulesRequest::EgressRules> CreateTrafficMirrorFilterRulesRequest::getEgressRules() const {
  return egressRules_;
}

void CreateTrafficMirrorFilterRulesRequest::setEgressRules(const std::vector<CreateTrafficMirrorFilterRulesRequest::EgressRules> &egressRules) {
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

bool CreateTrafficMirrorFilterRulesRequest::getDryRun() const {
  return dryRun_;
}

void CreateTrafficMirrorFilterRulesRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateTrafficMirrorFilterRulesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateTrafficMirrorFilterRulesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateTrafficMirrorFilterRulesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateTrafficMirrorFilterRulesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateTrafficMirrorFilterRulesRequest::getOwnerId() const {
  return ownerId_;
}

void CreateTrafficMirrorFilterRulesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateTrafficMirrorFilterRulesRequest::getTrafficMirrorFilterId() const {
  return trafficMirrorFilterId_;
}

void CreateTrafficMirrorFilterRulesRequest::setTrafficMirrorFilterId(const std::string &trafficMirrorFilterId) {
  trafficMirrorFilterId_ = trafficMirrorFilterId;
  setParameter(std::string("TrafficMirrorFilterId"), trafficMirrorFilterId);
}

