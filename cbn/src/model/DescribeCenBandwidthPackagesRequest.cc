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

#include <alibabacloud/cbn/model/DescribeCenBandwidthPackagesRequest.h>

using AlibabaCloud::Cbn::Model::DescribeCenBandwidthPackagesRequest;

DescribeCenBandwidthPackagesRequest::DescribeCenBandwidthPackagesRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DescribeCenBandwidthPackages") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCenBandwidthPackagesRequest::~DescribeCenBandwidthPackagesRequest() {}

long DescribeCenBandwidthPackagesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeCenBandwidthPackagesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

bool DescribeCenBandwidthPackagesRequest::getIncludeReservationData() const {
  return includeReservationData_;
}

void DescribeCenBandwidthPackagesRequest::setIncludeReservationData(bool includeReservationData) {
  includeReservationData_ = includeReservationData;
  setParameter(std::string("IncludeReservationData"), includeReservationData ? "true" : "false");
}

int DescribeCenBandwidthPackagesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeCenBandwidthPackagesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

bool DescribeCenBandwidthPackagesRequest::getIsOrKey() const {
  return isOrKey_;
}

void DescribeCenBandwidthPackagesRequest::setIsOrKey(bool isOrKey) {
  isOrKey_ = isOrKey;
  setParameter(std::string("IsOrKey"), isOrKey ? "true" : "false");
}

std::string DescribeCenBandwidthPackagesRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeCenBandwidthPackagesRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

int DescribeCenBandwidthPackagesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCenBandwidthPackagesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeCenBandwidthPackagesRequest::Tag> DescribeCenBandwidthPackagesRequest::getTag() const {
  return tag_;
}

void DescribeCenBandwidthPackagesRequest::setTag(const std::vector<DescribeCenBandwidthPackagesRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string DescribeCenBandwidthPackagesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeCenBandwidthPackagesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeCenBandwidthPackagesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeCenBandwidthPackagesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeCenBandwidthPackagesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCenBandwidthPackagesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeCenBandwidthPackagesRequest::getVersion() const {
  return version_;
}

void DescribeCenBandwidthPackagesRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::vector<DescribeCenBandwidthPackagesRequest::Filter> DescribeCenBandwidthPackagesRequest::getFilter() const {
  return filter_;
}

void DescribeCenBandwidthPackagesRequest::setFilter(const std::vector<DescribeCenBandwidthPackagesRequest::Filter> &filter) {
  filter_ = filter;
  for(int dep1 = 0; dep1 != filter.size(); dep1++) {
  auto filterObj = filter.at(dep1);
  std::string filterObjStr = std::string("Filter") + "." + std::to_string(dep1 + 1);
    setParameter(filterObjStr + ".Key", filterObj.key);
  }
}

