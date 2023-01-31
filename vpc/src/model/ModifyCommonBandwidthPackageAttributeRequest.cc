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

#include <alibabacloud/vpc/model/ModifyCommonBandwidthPackageAttributeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyCommonBandwidthPackageAttributeRequest;

ModifyCommonBandwidthPackageAttributeRequest::ModifyCommonBandwidthPackageAttributeRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "ModifyCommonBandwidthPackageAttribute") {
  setMethod(HttpRequest::Method::Post);
}

ModifyCommonBandwidthPackageAttributeRequest::~ModifyCommonBandwidthPackageAttributeRequest() {}

long ModifyCommonBandwidthPackageAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyCommonBandwidthPackageAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyCommonBandwidthPackageAttributeRequest::getDescription() const {
  return description_;
}

void ModifyCommonBandwidthPackageAttributeRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyCommonBandwidthPackageAttributeRequest::getRegionId() const {
  return regionId_;
}

void ModifyCommonBandwidthPackageAttributeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyCommonBandwidthPackageAttributeRequest::getBandwidthPackageId() const {
  return bandwidthPackageId_;
}

void ModifyCommonBandwidthPackageAttributeRequest::setBandwidthPackageId(const std::string &bandwidthPackageId) {
  bandwidthPackageId_ = bandwidthPackageId;
  setParameter(std::string("BandwidthPackageId"), bandwidthPackageId);
}

std::string ModifyCommonBandwidthPackageAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyCommonBandwidthPackageAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyCommonBandwidthPackageAttributeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyCommonBandwidthPackageAttributeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyCommonBandwidthPackageAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyCommonBandwidthPackageAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyCommonBandwidthPackageAttributeRequest::getName() const {
  return name_;
}

void ModifyCommonBandwidthPackageAttributeRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

