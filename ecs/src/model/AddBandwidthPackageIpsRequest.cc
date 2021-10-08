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

#include <alibabacloud/ecs/model/AddBandwidthPackageIpsRequest.h>

using AlibabaCloud::Ecs::Model::AddBandwidthPackageIpsRequest;

AddBandwidthPackageIpsRequest::AddBandwidthPackageIpsRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "AddBandwidthPackageIps") {
  setMethod(HttpRequest::Method::Post);
}

AddBandwidthPackageIpsRequest::~AddBandwidthPackageIpsRequest() {}

long AddBandwidthPackageIpsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AddBandwidthPackageIpsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AddBandwidthPackageIpsRequest::getClientToken() const {
  return clientToken_;
}

void AddBandwidthPackageIpsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AddBandwidthPackageIpsRequest::getRegionId() const {
  return regionId_;
}

void AddBandwidthPackageIpsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddBandwidthPackageIpsRequest::getBandwidthPackageId() const {
  return bandwidthPackageId_;
}

void AddBandwidthPackageIpsRequest::setBandwidthPackageId(const std::string &bandwidthPackageId) {
  bandwidthPackageId_ = bandwidthPackageId;
  setParameter(std::string("BandwidthPackageId"), bandwidthPackageId);
}

std::string AddBandwidthPackageIpsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AddBandwidthPackageIpsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AddBandwidthPackageIpsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AddBandwidthPackageIpsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AddBandwidthPackageIpsRequest::getOwnerId() const {
  return ownerId_;
}

void AddBandwidthPackageIpsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AddBandwidthPackageIpsRequest::getIpCount() const {
  return ipCount_;
}

void AddBandwidthPackageIpsRequest::setIpCount(const std::string &ipCount) {
  ipCount_ = ipCount;
  setParameter(std::string("IpCount"), ipCount);
}

