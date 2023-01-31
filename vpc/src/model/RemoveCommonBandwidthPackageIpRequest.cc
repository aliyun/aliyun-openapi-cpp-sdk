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

#include <alibabacloud/vpc/model/RemoveCommonBandwidthPackageIpRequest.h>

using AlibabaCloud::Vpc::Model::RemoveCommonBandwidthPackageIpRequest;

RemoveCommonBandwidthPackageIpRequest::RemoveCommonBandwidthPackageIpRequest()
    : RpcServiceRequest("vpc", "2016-04-28", "RemoveCommonBandwidthPackageIp") {
  setMethod(HttpRequest::Method::Post);
}

RemoveCommonBandwidthPackageIpRequest::~RemoveCommonBandwidthPackageIpRequest() {}

long RemoveCommonBandwidthPackageIpRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RemoveCommonBandwidthPackageIpRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RemoveCommonBandwidthPackageIpRequest::getClientToken() const {
  return clientToken_;
}

void RemoveCommonBandwidthPackageIpRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string RemoveCommonBandwidthPackageIpRequest::getRegionId() const {
  return regionId_;
}

void RemoveCommonBandwidthPackageIpRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string RemoveCommonBandwidthPackageIpRequest::getBandwidthPackageId() const {
  return bandwidthPackageId_;
}

void RemoveCommonBandwidthPackageIpRequest::setBandwidthPackageId(const std::string &bandwidthPackageId) {
  bandwidthPackageId_ = bandwidthPackageId;
  setParameter(std::string("BandwidthPackageId"), bandwidthPackageId);
}

std::string RemoveCommonBandwidthPackageIpRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RemoveCommonBandwidthPackageIpRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RemoveCommonBandwidthPackageIpRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RemoveCommonBandwidthPackageIpRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RemoveCommonBandwidthPackageIpRequest::getOwnerId() const {
  return ownerId_;
}

void RemoveCommonBandwidthPackageIpRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RemoveCommonBandwidthPackageIpRequest::getIpInstanceId() const {
  return ipInstanceId_;
}

void RemoveCommonBandwidthPackageIpRequest::setIpInstanceId(const std::string &ipInstanceId) {
  ipInstanceId_ = ipInstanceId;
  setParameter(std::string("IpInstanceId"), ipInstanceId);
}

