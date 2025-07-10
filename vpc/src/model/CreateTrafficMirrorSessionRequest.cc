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

#include <alibabacloud/vpc/model/CreateTrafficMirrorSessionRequest.h>

using AlibabaCloud::Vpc::Model::CreateTrafficMirrorSessionRequest;

CreateTrafficMirrorSessionRequest::CreateTrafficMirrorSessionRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "CreateTrafficMirrorSession") {
  setMethod(HttpRequest::Method::Post);
}

CreateTrafficMirrorSessionRequest::~CreateTrafficMirrorSessionRequest() {}

std::string CreateTrafficMirrorSessionRequest::getTrafficMirrorTargetType() const {
  return trafficMirrorTargetType_;
}

void CreateTrafficMirrorSessionRequest::setTrafficMirrorTargetType(const std::string &trafficMirrorTargetType) {
  trafficMirrorTargetType_ = trafficMirrorTargetType;
  setParameter(std::string("TrafficMirrorTargetType"), trafficMirrorTargetType);
}

long CreateTrafficMirrorSessionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateTrafficMirrorSessionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateTrafficMirrorSessionRequest::getClientToken() const {
  return clientToken_;
}

void CreateTrafficMirrorSessionRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool CreateTrafficMirrorSessionRequest::getEnabled() const {
  return enabled_;
}

void CreateTrafficMirrorSessionRequest::setEnabled(bool enabled) {
  enabled_ = enabled;
  setParameter(std::string("Enabled"), enabled ? "true" : "false");
}

std::string CreateTrafficMirrorSessionRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateTrafficMirrorSessionRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateTrafficMirrorSessionRequest::getTrafficMirrorSessionName() const {
  return trafficMirrorSessionName_;
}

void CreateTrafficMirrorSessionRequest::setTrafficMirrorSessionName(const std::string &trafficMirrorSessionName) {
  trafficMirrorSessionName_ = trafficMirrorSessionName;
  setParameter(std::string("TrafficMirrorSessionName"), trafficMirrorSessionName);
}

std::string CreateTrafficMirrorSessionRequest::getRegionId() const {
  return regionId_;
}

void CreateTrafficMirrorSessionRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateTrafficMirrorSessionRequest::getTrafficMirrorSessionDescription() const {
  return trafficMirrorSessionDescription_;
}

void CreateTrafficMirrorSessionRequest::setTrafficMirrorSessionDescription(const std::string &trafficMirrorSessionDescription) {
  trafficMirrorSessionDescription_ = trafficMirrorSessionDescription;
  setParameter(std::string("TrafficMirrorSessionDescription"), trafficMirrorSessionDescription);
}

std::vector<std::string> CreateTrafficMirrorSessionRequest::getTrafficMirrorSourceIds() const {
  return trafficMirrorSourceIds_;
}

void CreateTrafficMirrorSessionRequest::setTrafficMirrorSourceIds(const std::vector<std::string> &trafficMirrorSourceIds) {
  trafficMirrorSourceIds_ = trafficMirrorSourceIds;
}

std::vector<CreateTrafficMirrorSessionRequest::Tag> CreateTrafficMirrorSessionRequest::getTag() const {
  return tag_;
}

void CreateTrafficMirrorSessionRequest::setTag(const std::vector<CreateTrafficMirrorSessionRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

bool CreateTrafficMirrorSessionRequest::getDryRun() const {
  return dryRun_;
}

void CreateTrafficMirrorSessionRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string CreateTrafficMirrorSessionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateTrafficMirrorSessionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateTrafficMirrorSessionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateTrafficMirrorSessionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int CreateTrafficMirrorSessionRequest::getPriority() const {
  return priority_;
}

void CreateTrafficMirrorSessionRequest::setPriority(int priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), std::to_string(priority));
}

long CreateTrafficMirrorSessionRequest::getOwnerId() const {
  return ownerId_;
}

void CreateTrafficMirrorSessionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateTrafficMirrorSessionRequest::getTrafficMirrorTargetId() const {
  return trafficMirrorTargetId_;
}

void CreateTrafficMirrorSessionRequest::setTrafficMirrorTargetId(const std::string &trafficMirrorTargetId) {
  trafficMirrorTargetId_ = trafficMirrorTargetId;
  setParameter(std::string("TrafficMirrorTargetId"), trafficMirrorTargetId);
}

std::string CreateTrafficMirrorSessionRequest::getTrafficMirrorFilterId() const {
  return trafficMirrorFilterId_;
}

void CreateTrafficMirrorSessionRequest::setTrafficMirrorFilterId(const std::string &trafficMirrorFilterId) {
  trafficMirrorFilterId_ = trafficMirrorFilterId;
  setParameter(std::string("TrafficMirrorFilterId"), trafficMirrorFilterId);
}

int CreateTrafficMirrorSessionRequest::getPacketLength() const {
  return packetLength_;
}

void CreateTrafficMirrorSessionRequest::setPacketLength(int packetLength) {
  packetLength_ = packetLength;
  setParameter(std::string("PacketLength"), std::to_string(packetLength));
}

int CreateTrafficMirrorSessionRequest::getVirtualNetworkId() const {
  return virtualNetworkId_;
}

void CreateTrafficMirrorSessionRequest::setVirtualNetworkId(int virtualNetworkId) {
  virtualNetworkId_ = virtualNetworkId;
  setParameter(std::string("VirtualNetworkId"), std::to_string(virtualNetworkId));
}

int CreateTrafficMirrorSessionRequest::getTrafficMirrorSourceTruncateMode() const {
  return trafficMirrorSourceTruncateMode_;
}

void CreateTrafficMirrorSessionRequest::setTrafficMirrorSourceTruncateMode(int trafficMirrorSourceTruncateMode) {
  trafficMirrorSourceTruncateMode_ = trafficMirrorSourceTruncateMode;
  setParameter(std::string("TrafficMirrorSourceTruncateMode"), std::to_string(trafficMirrorSourceTruncateMode));
}

