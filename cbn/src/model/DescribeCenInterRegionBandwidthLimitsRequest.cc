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

#include <alibabacloud/cbn/model/DescribeCenInterRegionBandwidthLimitsRequest.h>

using AlibabaCloud::Cbn::Model::DescribeCenInterRegionBandwidthLimitsRequest;

DescribeCenInterRegionBandwidthLimitsRequest::DescribeCenInterRegionBandwidthLimitsRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DescribeCenInterRegionBandwidthLimits") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCenInterRegionBandwidthLimitsRequest::~DescribeCenInterRegionBandwidthLimitsRequest() {}

long DescribeCenInterRegionBandwidthLimitsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeCenInterRegionBandwidthLimitsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeCenInterRegionBandwidthLimitsRequest::getCenId() const {
  return cenId_;
}

void DescribeCenInterRegionBandwidthLimitsRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

int DescribeCenInterRegionBandwidthLimitsRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeCenInterRegionBandwidthLimitsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeCenInterRegionBandwidthLimitsRequest::getTrRegionId() const {
  return trRegionId_;
}

void DescribeCenInterRegionBandwidthLimitsRequest::setTrRegionId(const std::string &trRegionId) {
  trRegionId_ = trRegionId;
  setParameter(std::string("TrRegionId"), trRegionId);
}

int DescribeCenInterRegionBandwidthLimitsRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCenInterRegionBandwidthLimitsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeCenInterRegionBandwidthLimitsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeCenInterRegionBandwidthLimitsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeCenInterRegionBandwidthLimitsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeCenInterRegionBandwidthLimitsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeCenInterRegionBandwidthLimitsRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCenInterRegionBandwidthLimitsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeCenInterRegionBandwidthLimitsRequest::getVersion() const {
  return version_;
}

void DescribeCenInterRegionBandwidthLimitsRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

