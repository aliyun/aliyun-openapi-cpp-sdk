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

#include <alibabacloud/cbn/model/DescribeCensRequest.h>

using AlibabaCloud::Cbn::Model::DescribeCensRequest;

DescribeCensRequest::DescribeCensRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "DescribeCens") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCensRequest::~DescribeCensRequest() {}

long DescribeCensRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeCensRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int DescribeCensRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeCensRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeCensRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void DescribeCensRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

int DescribeCensRequest::getPageSize() const {
  return pageSize_;
}

void DescribeCensRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::vector<DescribeCensRequest::Tag> DescribeCensRequest::getTag() const {
  return tag_;
}

void DescribeCensRequest::setTag(const std::vector<DescribeCensRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string DescribeCensRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeCensRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeCensRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeCensRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DescribeCensRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeCensRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeCensRequest::getVersion() const {
  return version_;
}

void DescribeCensRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

std::vector<DescribeCensRequest::Filter> DescribeCensRequest::getFilter() const {
  return filter_;
}

void DescribeCensRequest::setFilter(const std::vector<DescribeCensRequest::Filter> &filter) {
  filter_ = filter;
  for(int dep1 = 0; dep1 != filter.size(); dep1++) {
  auto filterObj = filter.at(dep1);
  std::string filterObjStr = std::string("Filter") + "." + std::to_string(dep1 + 1);
    setParameter(filterObjStr + ".Key", filterObj.key);
  }
}

