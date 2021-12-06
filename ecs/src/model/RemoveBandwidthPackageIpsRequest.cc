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

#include <alibabacloud/ecs/model/RemoveBandwidthPackageIpsRequest.h>

using AlibabaCloud::Ecs::Model::RemoveBandwidthPackageIpsRequest;

RemoveBandwidthPackageIpsRequest::RemoveBandwidthPackageIpsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "RemoveBandwidthPackageIps") {
  setMethod(HttpRequest::Method::Post);
}

RemoveBandwidthPackageIpsRequest::~RemoveBandwidthPackageIpsRequest() {}

long RemoveBandwidthPackageIpsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RemoveBandwidthPackageIpsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RemoveBandwidthPackageIpsRequest::getClientToken() const {
  return clientToken_;
}

void RemoveBandwidthPackageIpsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string RemoveBandwidthPackageIpsRequest::getRegionId() const {
  return regionId_;
}

void RemoveBandwidthPackageIpsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<std::string> RemoveBandwidthPackageIpsRequest::getRemovedIpAddresses() const {
  return removedIpAddresses_;
}

void RemoveBandwidthPackageIpsRequest::setRemovedIpAddresses(const std::vector<std::string> &removedIpAddresses) {
  removedIpAddresses_ = removedIpAddresses;
}

std::string RemoveBandwidthPackageIpsRequest::getBandwidthPackageId() const {
  return bandwidthPackageId_;
}

void RemoveBandwidthPackageIpsRequest::setBandwidthPackageId(const std::string &bandwidthPackageId) {
  bandwidthPackageId_ = bandwidthPackageId;
  setParameter(std::string("BandwidthPackageId"), bandwidthPackageId);
}

std::string RemoveBandwidthPackageIpsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RemoveBandwidthPackageIpsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RemoveBandwidthPackageIpsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RemoveBandwidthPackageIpsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RemoveBandwidthPackageIpsRequest::getOwnerId() const {
  return ownerId_;
}

void RemoveBandwidthPackageIpsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

