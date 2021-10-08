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

#include <alibabacloud/ecs/model/CreateDiskReplicaPairRequest.h>

using AlibabaCloud::Ecs::Model::CreateDiskReplicaPairRequest;

CreateDiskReplicaPairRequest::CreateDiskReplicaPairRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "CreateDiskReplicaPair") {
  setMethod(HttpRequest::Method::Post);
}

CreateDiskReplicaPairRequest::~CreateDiskReplicaPairRequest() {}

long CreateDiskReplicaPairRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateDiskReplicaPairRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateDiskReplicaPairRequest::getPairName() const {
  return pairName_;
}

void CreateDiskReplicaPairRequest::setPairName(const std::string &pairName) {
  pairName_ = pairName;
  setParameter(std::string("PairName"), pairName);
}

std::string CreateDiskReplicaPairRequest::getDestinationRegionId() const {
  return destinationRegionId_;
}

void CreateDiskReplicaPairRequest::setDestinationRegionId(const std::string &destinationRegionId) {
  destinationRegionId_ = destinationRegionId;
  setParameter(std::string("DestinationRegionId"), destinationRegionId);
}

std::string CreateDiskReplicaPairRequest::getDescription() const {
  return description_;
}

void CreateDiskReplicaPairRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateDiskReplicaPairRequest::getRegionId() const {
  return regionId_;
}

void CreateDiskReplicaPairRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateDiskReplicaPairRequest::getDiskId() const {
  return diskId_;
}

void CreateDiskReplicaPairRequest::setDiskId(const std::string &diskId) {
  diskId_ = diskId;
  setParameter(std::string("DiskId"), diskId);
}

int CreateDiskReplicaPairRequest::getAsyncCycle() const {
  return asyncCycle_;
}

void CreateDiskReplicaPairRequest::setAsyncCycle(int asyncCycle) {
  asyncCycle_ = asyncCycle;
  setParameter(std::string("AsyncCycle"), std::to_string(asyncCycle));
}

std::string CreateDiskReplicaPairRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateDiskReplicaPairRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateDiskReplicaPairRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateDiskReplicaPairRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateDiskReplicaPairRequest::getOwnerId() const {
  return ownerId_;
}

void CreateDiskReplicaPairRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateDiskReplicaPairRequest::getDestinationDiskId() const {
  return destinationDiskId_;
}

void CreateDiskReplicaPairRequest::setDestinationDiskId(const std::string &destinationDiskId) {
  destinationDiskId_ = destinationDiskId;
  setParameter(std::string("DestinationDiskId"), destinationDiskId);
}

