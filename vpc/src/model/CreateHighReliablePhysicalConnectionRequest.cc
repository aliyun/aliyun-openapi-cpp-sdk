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

#include <alibabacloud/vpc/model/CreateHighReliablePhysicalConnectionRequest.h>

using AlibabaCloud::Vpc::Model::CreateHighReliablePhysicalConnectionRequest;

CreateHighReliablePhysicalConnectionRequest::CreateHighReliablePhysicalConnectionRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateHighReliablePhysicalConnection") {
  setMethod(HttpRequest::Method::Post);
}

CreateHighReliablePhysicalConnectionRequest::~CreateHighReliablePhysicalConnectionRequest() {}

long CreateHighReliablePhysicalConnectionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateHighReliablePhysicalConnectionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateHighReliablePhysicalConnectionRequest::getPortType() const {
  return portType_;
}

void CreateHighReliablePhysicalConnectionRequest::setPortType(const std::string &portType) {
  portType_ = portType;
  setParameter(std::string("PortType"), portType);
}

std::string CreateHighReliablePhysicalConnectionRequest::getClientToken() const {
  return clientToken_;
}

void CreateHighReliablePhysicalConnectionRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateHighReliablePhysicalConnectionRequest::getHighReliableType() const {
  return highReliableType_;
}

void CreateHighReliablePhysicalConnectionRequest::setHighReliableType(const std::string &highReliableType) {
  highReliableType_ = highReliableType;
  setParameter(std::string("HighReliableType"), highReliableType);
}

std::string CreateHighReliablePhysicalConnectionRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateHighReliablePhysicalConnectionRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateHighReliablePhysicalConnectionRequest::getRegionId() const {
  return regionId_;
}

void CreateHighReliablePhysicalConnectionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<CreateHighReliablePhysicalConnectionRequest::Tag> CreateHighReliablePhysicalConnectionRequest::getTag() const {
  return tag_;
}

void CreateHighReliablePhysicalConnectionRequest::setTag(const std::vector<CreateHighReliablePhysicalConnectionRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::string CreateHighReliablePhysicalConnectionRequest::getDryRun() const {
  return dryRun_;
}

void CreateHighReliablePhysicalConnectionRequest::setDryRun(const std::string &dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun);
}

std::string CreateHighReliablePhysicalConnectionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateHighReliablePhysicalConnectionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateHighReliablePhysicalConnectionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateHighReliablePhysicalConnectionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateHighReliablePhysicalConnectionRequest::getOwnerId() const {
  return ownerId_;
}

void CreateHighReliablePhysicalConnectionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<CreateHighReliablePhysicalConnectionRequest::ApList> CreateHighReliablePhysicalConnectionRequest::getApList() const {
  return apList_;
}

void CreateHighReliablePhysicalConnectionRequest::setApList(const std::vector<CreateHighReliablePhysicalConnectionRequest::ApList> &apList) {
  apList_ = apList;
  for(int dep1 = 0; dep1 != apList.size(); dep1++) {
  auto apListObj = apList.at(dep1);
  std::string apListObjStr = std::string("ApList") + "." + std::to_string(dep1 + 1);
    setParameter(apListObjStr + ".Name", apListObj.name);
    setParameter(apListObjStr + ".Description", apListObj.description);
    setParameter(apListObjStr + ".RegionId", apListObj.regionId);
    setParameter(apListObjStr + ".LineOperator", apListObj.lineOperator);
    setParameter(apListObjStr + ".AccessPointId", apListObj.accessPointId);
    setParameter(apListObjStr + ".PortNum", std::to_string(apListObj.portNum));
    setParameter(apListObjStr + ".Type", apListObj.type);
    setParameter(apListObjStr + ".Bandwidth", std::to_string(apListObj.bandwidth));
    setParameter(apListObjStr + ".PeerLocation", apListObj.peerLocation);
    setParameter(apListObjStr + ".CircuitCode", apListObj.circuitCode);
  }
}

std::string CreateHighReliablePhysicalConnectionRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void CreateHighReliablePhysicalConnectionRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

std::vector<std::string> CreateHighReliablePhysicalConnectionRequest::getDeviceAdvancedCapacity() const {
  return deviceAdvancedCapacity_;
}

void CreateHighReliablePhysicalConnectionRequest::setDeviceAdvancedCapacity(const std::vector<std::string> &deviceAdvancedCapacity) {
  deviceAdvancedCapacity_ = deviceAdvancedCapacity;
}

