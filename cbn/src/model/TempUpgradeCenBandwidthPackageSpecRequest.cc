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

#include <alibabacloud/cbn/model/TempUpgradeCenBandwidthPackageSpecRequest.h>

using AlibabaCloud::Cbn::Model::TempUpgradeCenBandwidthPackageSpecRequest;

TempUpgradeCenBandwidthPackageSpecRequest::TempUpgradeCenBandwidthPackageSpecRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "TempUpgradeCenBandwidthPackageSpec") {
  setMethod(HttpRequest::Method::Post);
}

TempUpgradeCenBandwidthPackageSpecRequest::~TempUpgradeCenBandwidthPackageSpecRequest() {}

long TempUpgradeCenBandwidthPackageSpecRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void TempUpgradeCenBandwidthPackageSpecRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string TempUpgradeCenBandwidthPackageSpecRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void TempUpgradeCenBandwidthPackageSpecRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

int TempUpgradeCenBandwidthPackageSpecRequest::getBandwidth() const {
  return bandwidth_;
}

void TempUpgradeCenBandwidthPackageSpecRequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string TempUpgradeCenBandwidthPackageSpecRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void TempUpgradeCenBandwidthPackageSpecRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string TempUpgradeCenBandwidthPackageSpecRequest::getEndTime() const {
  return endTime_;
}

void TempUpgradeCenBandwidthPackageSpecRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

long TempUpgradeCenBandwidthPackageSpecRequest::getOwnerId() const {
  return ownerId_;
}

void TempUpgradeCenBandwidthPackageSpecRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string TempUpgradeCenBandwidthPackageSpecRequest::getVersion() const {
  return version_;
}

void TempUpgradeCenBandwidthPackageSpecRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string TempUpgradeCenBandwidthPackageSpecRequest::getCenBandwidthPackageId() const {
  return cenBandwidthPackageId_;
}

void TempUpgradeCenBandwidthPackageSpecRequest::setCenBandwidthPackageId(const std::string &cenBandwidthPackageId) {
  cenBandwidthPackageId_ = cenBandwidthPackageId;
  setParameter(std::string("CenBandwidthPackageId"), cenBandwidthPackageId);
}

