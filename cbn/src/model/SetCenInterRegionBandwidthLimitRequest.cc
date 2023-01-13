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

#include <alibabacloud/cbn/model/SetCenInterRegionBandwidthLimitRequest.h>

using AlibabaCloud::Cbn::Model::SetCenInterRegionBandwidthLimitRequest;

SetCenInterRegionBandwidthLimitRequest::SetCenInterRegionBandwidthLimitRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "SetCenInterRegionBandwidthLimit") {
  setMethod(HttpRequest::Method::Post);
}

SetCenInterRegionBandwidthLimitRequest::~SetCenInterRegionBandwidthLimitRequest() {}

long SetCenInterRegionBandwidthLimitRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SetCenInterRegionBandwidthLimitRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SetCenInterRegionBandwidthLimitRequest::getCenId() const {
  return cenId_;
}

void SetCenInterRegionBandwidthLimitRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::string SetCenInterRegionBandwidthLimitRequest::getBandwidthPackageId() const {
  return bandwidthPackageId_;
}

void SetCenInterRegionBandwidthLimitRequest::setBandwidthPackageId(const std::string &bandwidthPackageId) {
  bandwidthPackageId_ = bandwidthPackageId;
  setParameter(std::string("BandwidthPackageId"), bandwidthPackageId);
}

std::string SetCenInterRegionBandwidthLimitRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SetCenInterRegionBandwidthLimitRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SetCenInterRegionBandwidthLimitRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SetCenInterRegionBandwidthLimitRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string SetCenInterRegionBandwidthLimitRequest::getOppositeRegionId() const {
  return oppositeRegionId_;
}

void SetCenInterRegionBandwidthLimitRequest::setOppositeRegionId(const std::string &oppositeRegionId) {
  oppositeRegionId_ = oppositeRegionId;
  setParameter(std::string("OppositeRegionId"), oppositeRegionId);
}

long SetCenInterRegionBandwidthLimitRequest::getOwnerId() const {
  return ownerId_;
}

void SetCenInterRegionBandwidthLimitRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SetCenInterRegionBandwidthLimitRequest::getVersion() const {
  return version_;
}

void SetCenInterRegionBandwidthLimitRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::string SetCenInterRegionBandwidthLimitRequest::getLocalRegionId() const {
  return localRegionId_;
}

void SetCenInterRegionBandwidthLimitRequest::setLocalRegionId(const std::string &localRegionId) {
  localRegionId_ = localRegionId;
  setParameter(std::string("LocalRegionId"), localRegionId);
}

long SetCenInterRegionBandwidthLimitRequest::getBandwidthLimit() const {
  return bandwidthLimit_;
}

void SetCenInterRegionBandwidthLimitRequest::setBandwidthLimit(long bandwidthLimit) {
  bandwidthLimit_ = bandwidthLimit;
  setParameter(std::string("BandwidthLimit"), std::to_string(bandwidthLimit));
}

