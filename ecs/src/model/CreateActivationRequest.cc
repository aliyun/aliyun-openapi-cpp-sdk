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

#include <alibabacloud/ecs/model/CreateActivationRequest.h>

using AlibabaCloud::Ecs::Model::CreateActivationRequest;

CreateActivationRequest::CreateActivationRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "CreateActivation") {
  setMethod(HttpRequest::Method::Post);
}

CreateActivationRequest::~CreateActivationRequest() {}

long CreateActivationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateActivationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateActivationRequest::getDescription() const {
  return description_;
}

void CreateActivationRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateActivationRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateActivationRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateActivationRequest::getRegionId() const {
  return regionId_;
}

void CreateActivationRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int CreateActivationRequest::getInstanceCount() const {
  return instanceCount_;
}

void CreateActivationRequest::setInstanceCount(int instanceCount) {
  instanceCount_ = instanceCount;
  setParameter(std::string("InstanceCount"), std::to_string(instanceCount));
}

std::vector<CreateActivationRequest::Tag> CreateActivationRequest::getTag() const {
  return tag_;
}

void CreateActivationRequest::setTag(const std::vector<CreateActivationRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::string CreateActivationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateActivationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateActivationRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateActivationRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateActivationRequest::getOwnerId() const {
  return ownerId_;
}

void CreateActivationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateActivationRequest::getInstanceName() const {
  return instanceName_;
}

void CreateActivationRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

long CreateActivationRequest::getTimeToLiveInHours() const {
  return timeToLiveInHours_;
}

void CreateActivationRequest::setTimeToLiveInHours(long timeToLiveInHours) {
  timeToLiveInHours_ = timeToLiveInHours;
  setParameter(std::string("TimeToLiveInHours"), std::to_string(timeToLiveInHours));
}

std::string CreateActivationRequest::getIpAddressRange() const {
  return ipAddressRange_;
}

void CreateActivationRequest::setIpAddressRange(const std::string &ipAddressRange) {
  ipAddressRange_ = ipAddressRange;
  setParameter(std::string("IpAddressRange"), ipAddressRange);
}

