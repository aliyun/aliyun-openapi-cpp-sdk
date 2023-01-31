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

#include <alibabacloud/vpc/model/ModifyCommonBandwidthPackageSpecRequest.h>

using AlibabaCloud::Vpc::Model::ModifyCommonBandwidthPackageSpecRequest;

ModifyCommonBandwidthPackageSpecRequest::ModifyCommonBandwidthPackageSpecRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ModifyCommonBandwidthPackageSpec") {
  setMethod(HttpRequest::Method::Post);
}

ModifyCommonBandwidthPackageSpecRequest::~ModifyCommonBandwidthPackageSpecRequest() {}

long ModifyCommonBandwidthPackageSpecRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyCommonBandwidthPackageSpecRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyCommonBandwidthPackageSpecRequest::getRegionId() const {
  return regionId_;
}

void ModifyCommonBandwidthPackageSpecRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyCommonBandwidthPackageSpecRequest::getBandwidthPackageId() const {
  return bandwidthPackageId_;
}

void ModifyCommonBandwidthPackageSpecRequest::setBandwidthPackageId(const std::string &bandwidthPackageId) {
  bandwidthPackageId_ = bandwidthPackageId;
  setParameter(std::string("BandwidthPackageId"), bandwidthPackageId);
}

std::string ModifyCommonBandwidthPackageSpecRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyCommonBandwidthPackageSpecRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyCommonBandwidthPackageSpecRequest::getBandwidth() const {
  return bandwidth_;
}

void ModifyCommonBandwidthPackageSpecRequest::setBandwidth(const std::string &bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), bandwidth);
}

std::string ModifyCommonBandwidthPackageSpecRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyCommonBandwidthPackageSpecRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyCommonBandwidthPackageSpecRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyCommonBandwidthPackageSpecRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

