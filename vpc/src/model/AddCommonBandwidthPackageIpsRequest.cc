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

#include <alibabacloud/vpc/model/AddCommonBandwidthPackageIpsRequest.h>

using AlibabaCloud::Vpc::Model::AddCommonBandwidthPackageIpsRequest;

AddCommonBandwidthPackageIpsRequest::AddCommonBandwidthPackageIpsRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "AddCommonBandwidthPackageIps") {
  setMethod(HttpRequest::Method::Post);
}

AddCommonBandwidthPackageIpsRequest::~AddCommonBandwidthPackageIpsRequest() {}

long AddCommonBandwidthPackageIpsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AddCommonBandwidthPackageIpsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AddCommonBandwidthPackageIpsRequest::getClientToken() const {
  return clientToken_;
}

void AddCommonBandwidthPackageIpsRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<std::string> AddCommonBandwidthPackageIpsRequest::getIpInstanceIds() const {
  return ipInstanceIds_;
}

void AddCommonBandwidthPackageIpsRequest::setIpInstanceIds(const std::vector<std::string> &ipInstanceIds) {
  ipInstanceIds_ = ipInstanceIds;
}

std::string AddCommonBandwidthPackageIpsRequest::getRegionId() const {
  return regionId_;
}

void AddCommonBandwidthPackageIpsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddCommonBandwidthPackageIpsRequest::getBandwidthPackageId() const {
  return bandwidthPackageId_;
}

void AddCommonBandwidthPackageIpsRequest::setBandwidthPackageId(const std::string &bandwidthPackageId) {
  bandwidthPackageId_ = bandwidthPackageId;
  setParameter(std::string("BandwidthPackageId"), bandwidthPackageId);
}

std::string AddCommonBandwidthPackageIpsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AddCommonBandwidthPackageIpsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AddCommonBandwidthPackageIpsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AddCommonBandwidthPackageIpsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AddCommonBandwidthPackageIpsRequest::getOwnerId() const {
  return ownerId_;
}

void AddCommonBandwidthPackageIpsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AddCommonBandwidthPackageIpsRequest::getIpType() const {
  return ipType_;
}

void AddCommonBandwidthPackageIpsRequest::setIpType(const std::string &ipType) {
  ipType_ = ipType;
  setParameter(std::string("IpType"), ipType);
}

