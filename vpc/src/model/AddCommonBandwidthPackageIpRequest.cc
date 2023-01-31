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

#include <alibabacloud/vpc/model/AddCommonBandwidthPackageIpRequest.h>

using AlibabaCloud::Vpc::Model::AddCommonBandwidthPackageIpRequest;

AddCommonBandwidthPackageIpRequest::AddCommonBandwidthPackageIpRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "AddCommonBandwidthPackageIp") {
  setMethod(HttpRequest::Method::Post);
}

AddCommonBandwidthPackageIpRequest::~AddCommonBandwidthPackageIpRequest() {}

long AddCommonBandwidthPackageIpRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AddCommonBandwidthPackageIpRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AddCommonBandwidthPackageIpRequest::getClientToken() const {
  return clientToken_;
}

void AddCommonBandwidthPackageIpRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string AddCommonBandwidthPackageIpRequest::getRegionId() const {
  return regionId_;
}

void AddCommonBandwidthPackageIpRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string AddCommonBandwidthPackageIpRequest::getBandwidthPackageId() const {
  return bandwidthPackageId_;
}

void AddCommonBandwidthPackageIpRequest::setBandwidthPackageId(const std::string &bandwidthPackageId) {
  bandwidthPackageId_ = bandwidthPackageId;
  setParameter(std::string("BandwidthPackageId"), bandwidthPackageId);
}

std::string AddCommonBandwidthPackageIpRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AddCommonBandwidthPackageIpRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AddCommonBandwidthPackageIpRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AddCommonBandwidthPackageIpRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AddCommonBandwidthPackageIpRequest::getOwnerId() const {
  return ownerId_;
}

void AddCommonBandwidthPackageIpRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AddCommonBandwidthPackageIpRequest::getIpType() const {
  return ipType_;
}

void AddCommonBandwidthPackageIpRequest::setIpType(const std::string &ipType) {
  ipType_ = ipType;
  setParameter(std::string("IpType"), ipType);
}

std::string AddCommonBandwidthPackageIpRequest::getIpInstanceId() const {
  return ipInstanceId_;
}

void AddCommonBandwidthPackageIpRequest::setIpInstanceId(const std::string &ipInstanceId) {
  ipInstanceId_ = ipInstanceId;
  setParameter(std::string("IpInstanceId"), ipInstanceId);
}

