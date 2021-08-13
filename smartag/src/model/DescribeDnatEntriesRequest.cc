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

#include <alibabacloud/smartag/model/DescribeDnatEntriesRequest.h>

using AlibabaCloud::Smartag::Model::DescribeDnatEntriesRequest;

DescribeDnatEntriesRequest::DescribeDnatEntriesRequest()
    : RpcServiceRequest("smartag", "2018-03-13", "DescribeDnatEntries") {
  setMethod(HttpRequest::Method::Post);
}

DescribeDnatEntriesRequest::~DescribeDnatEntriesRequest() {}

long DescribeDnatEntriesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeDnatEntriesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribeDnatEntriesRequest::getType() const {
  return type_;
}

void DescribeDnatEntriesRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

int DescribeDnatEntriesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeDnatEntriesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeDnatEntriesRequest::getRegionId() const {
  return regionId_;
}

void DescribeDnatEntriesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int DescribeDnatEntriesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeDnatEntriesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeDnatEntriesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeDnatEntriesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeDnatEntriesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeDnatEntriesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeDnatEntriesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeDnatEntriesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeDnatEntriesRequest::getSagId() const {
  return sagId_;
}

void DescribeDnatEntriesRequest::setSagId(const std::string &sagId) {
  sagId_ = sagId;
  setParameter(std::string("SagId"), sagId);
}

