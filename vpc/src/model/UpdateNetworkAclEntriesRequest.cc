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

#include <alibabacloud/vpc/model/UpdateNetworkAclEntriesRequest.h>

using AlibabaCloud::Vpc::Model::UpdateNetworkAclEntriesRequest;

UpdateNetworkAclEntriesRequest::UpdateNetworkAclEntriesRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "UpdateNetworkAclEntries") {
  setMethod(HttpRequest::Method::Post);
}

UpdateNetworkAclEntriesRequest::~UpdateNetworkAclEntriesRequest() {}

long UpdateNetworkAclEntriesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UpdateNetworkAclEntriesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::vector<UpdateNetworkAclEntriesRequest::EgressAclEntries> UpdateNetworkAclEntriesRequest::getEgressAclEntries() const {
  return egressAclEntries_;
}

void UpdateNetworkAclEntriesRequest::setEgressAclEntries(const std::vector<UpdateNetworkAclEntriesRequest::EgressAclEntries> &egressAclEntries) {
  egressAclEntries_ = egressAclEntries;
  for(int dep1 = 0; dep1 != egressAclEntries.size(); dep1++) {
  auto egressAclEntriesObj = egressAclEntries.at(dep1);
  std::string egressAclEntriesObjStr = std::string("EgressAclEntries") + "." + std::to_string(dep1 + 1);
    setParameter(egressAclEntriesObjStr + ".NetworkAclEntryId", egressAclEntriesObj.networkAclEntryId);
    setParameter(egressAclEntriesObjStr + ".EntryType", egressAclEntriesObj.entryType);
    setParameter(egressAclEntriesObjStr + ".NetworkAclEntryName", egressAclEntriesObj.networkAclEntryName);
    setParameter(egressAclEntriesObjStr + ".Policy", egressAclEntriesObj.policy);
    setParameter(egressAclEntriesObjStr + ".Description", egressAclEntriesObj.description);
    setParameter(egressAclEntriesObjStr + ".Protocol", egressAclEntriesObj.protocol);
    setParameter(egressAclEntriesObjStr + ".DestinationCidrIp", egressAclEntriesObj.destinationCidrIp);
    setParameter(egressAclEntriesObjStr + ".IpVersion", egressAclEntriesObj.ipVersion);
    setParameter(egressAclEntriesObjStr + ".Port", egressAclEntriesObj.port);
  }
}

std::string UpdateNetworkAclEntriesRequest::getClientToken() const {
  return clientToken_;
}

void UpdateNetworkAclEntriesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateNetworkAclEntriesRequest::getRegionId() const {
  return regionId_;
}

void UpdateNetworkAclEntriesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateNetworkAclEntriesRequest::getNetworkAclId() const {
  return networkAclId_;
}

void UpdateNetworkAclEntriesRequest::setNetworkAclId(const std::string &networkAclId) {
  networkAclId_ = networkAclId;
  setParameter(std::string("NetworkAclId"), networkAclId);
}

bool UpdateNetworkAclEntriesRequest::getUpdateIngressAclEntries() const {
  return updateIngressAclEntries_;
}

void UpdateNetworkAclEntriesRequest::setUpdateIngressAclEntries(bool updateIngressAclEntries) {
  updateIngressAclEntries_ = updateIngressAclEntries;
  setParameter(std::string("UpdateIngressAclEntries"), updateIngressAclEntries ? "true" : "false");
}

bool UpdateNetworkAclEntriesRequest::getDryRun() const {
  return dryRun_;
}

void UpdateNetworkAclEntriesRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string UpdateNetworkAclEntriesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UpdateNetworkAclEntriesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UpdateNetworkAclEntriesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UpdateNetworkAclEntriesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

bool UpdateNetworkAclEntriesRequest::getUpdateEgressAclEntries() const {
  return updateEgressAclEntries_;
}

void UpdateNetworkAclEntriesRequest::setUpdateEgressAclEntries(bool updateEgressAclEntries) {
  updateEgressAclEntries_ = updateEgressAclEntries;
  setParameter(std::string("UpdateEgressAclEntries"), updateEgressAclEntries ? "true" : "false");
}

long UpdateNetworkAclEntriesRequest::getOwnerId() const {
  return ownerId_;
}

void UpdateNetworkAclEntriesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<UpdateNetworkAclEntriesRequest::IngressAclEntries> UpdateNetworkAclEntriesRequest::getIngressAclEntries() const {
  return ingressAclEntries_;
}

void UpdateNetworkAclEntriesRequest::setIngressAclEntries(const std::vector<UpdateNetworkAclEntriesRequest::IngressAclEntries> &ingressAclEntries) {
  ingressAclEntries_ = ingressAclEntries;
  for(int dep1 = 0; dep1 != ingressAclEntries.size(); dep1++) {
  auto ingressAclEntriesObj = ingressAclEntries.at(dep1);
  std::string ingressAclEntriesObjStr = std::string("IngressAclEntries") + "." + std::to_string(dep1 + 1);
    setParameter(ingressAclEntriesObjStr + ".NetworkAclEntryId", ingressAclEntriesObj.networkAclEntryId);
    setParameter(ingressAclEntriesObjStr + ".EntryType", ingressAclEntriesObj.entryType);
    setParameter(ingressAclEntriesObjStr + ".NetworkAclEntryName", ingressAclEntriesObj.networkAclEntryName);
    setParameter(ingressAclEntriesObjStr + ".Policy", ingressAclEntriesObj.policy);
    setParameter(ingressAclEntriesObjStr + ".SourceCidrIp", ingressAclEntriesObj.sourceCidrIp);
    setParameter(ingressAclEntriesObjStr + ".IpVersion", ingressAclEntriesObj.ipVersion);
    setParameter(ingressAclEntriesObjStr + ".Description", ingressAclEntriesObj.description);
    setParameter(ingressAclEntriesObjStr + ".Protocol", ingressAclEntriesObj.protocol);
    setParameter(ingressAclEntriesObjStr + ".Port", ingressAclEntriesObj.port);
  }
}

