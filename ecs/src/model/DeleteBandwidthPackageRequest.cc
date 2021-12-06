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

#include <alibabacloud/ecs/model/DeleteBandwidthPackageRequest.h>

using AlibabaCloud::Ecs::Model::DeleteBandwidthPackageRequest;

DeleteBandwidthPackageRequest::DeleteBandwidthPackageRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DeleteBandwidthPackage") {
  setMethod(HttpRequest::Method::Post);
}

DeleteBandwidthPackageRequest::~DeleteBandwidthPackageRequest() {}

long DeleteBandwidthPackageRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteBandwidthPackageRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteBandwidthPackageRequest::getRegionId() const {
  return regionId_;
}

void DeleteBandwidthPackageRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteBandwidthPackageRequest::getBandwidthPackageId() const {
  return bandwidthPackageId_;
}

void DeleteBandwidthPackageRequest::setBandwidthPackageId(const std::string &bandwidthPackageId) {
  bandwidthPackageId_ = bandwidthPackageId;
  setParameter(std::string("BandwidthPackageId"), bandwidthPackageId);
}

std::string DeleteBandwidthPackageRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteBandwidthPackageRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteBandwidthPackageRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteBandwidthPackageRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteBandwidthPackageRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteBandwidthPackageRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

