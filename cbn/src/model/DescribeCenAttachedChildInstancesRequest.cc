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

#include <alibabacloud/cbn/model/DescribeCenAttachedChildInstancesRequest.h>

using AlibabaCloud::Cbn::Model::DescribeCenAttachedChildInstancesRequest;

DescribeCenAttachedChildInstancesRequest::DescribeCenAttachedChildInstancesRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DescribeCenAttachedChildInstances") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCenAttachedChildInstancesRequest::~DescribeCenAttachedChildInstancesRequest() {}

long DescribeCenAttachedChildInstancesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeCenAttachedChildInstancesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeCenAttachedChildInstancesRequest::getCenId() const {
  return cenId_;
}

void DescribeCenAttachedChildInstancesRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

int DescribeCenAttachedChildInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeCenAttachedChildInstancesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int DescribeCenAttachedChildInstancesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCenAttachedChildInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeCenAttachedChildInstancesRequest::getChildInstanceRegionId() const {
  return childInstanceRegionId_;
}

void DescribeCenAttachedChildInstancesRequest::setChildInstanceRegionId(const std::string &childInstanceRegionId) {
  childInstanceRegionId_ = childInstanceRegionId;
  setParameter(std::string("ChildInstanceRegionId"), childInstanceRegionId);
}

std::string DescribeCenAttachedChildInstancesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeCenAttachedChildInstancesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeCenAttachedChildInstancesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeCenAttachedChildInstancesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeCenAttachedChildInstancesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCenAttachedChildInstancesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeCenAttachedChildInstancesRequest::getChildInstanceType() const {
  return childInstanceType_;
}

void DescribeCenAttachedChildInstancesRequest::setChildInstanceType(const std::string &childInstanceType) {
  childInstanceType_ = childInstanceType;
  setParameter(std::string("ChildInstanceType"), childInstanceType);
}

std::string DescribeCenAttachedChildInstancesRequest::getVersion() const {
  return version_;
}

void DescribeCenAttachedChildInstancesRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

