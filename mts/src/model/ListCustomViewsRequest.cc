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

#include <alibabacloud/mts/model/ListCustomViewsRequest.h>

using AlibabaCloud::Mts::Model::ListCustomViewsRequest;

ListCustomViewsRequest::ListCustomViewsRequest()
    : RpcServiceRequest("mts", "2014-06-18", "ListCustomViews") {
  setMethod(HttpRequest::Method::Post);
}

ListCustomViewsRequest::~ListCustomViewsRequest() {}

long ListCustomViewsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListCustomViewsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int ListCustomViewsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListCustomViewsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListCustomViewsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListCustomViewsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int ListCustomViewsRequest::getPageSize() const {
  return pageSize_;
}

void ListCustomViewsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListCustomViewsRequest::getAlgorithm() const {
  return algorithm_;
}

void ListCustomViewsRequest::setAlgorithm(const std::string &algorithm) {
  algorithm_ = algorithm;
  setParameter(std::string("Algorithm"), algorithm);
}

std::string ListCustomViewsRequest::getCustomGroupId() const {
  return customGroupId_;
}

void ListCustomViewsRequest::setCustomGroupId(const std::string &customGroupId) {
  customGroupId_ = customGroupId;
  setParameter(std::string("CustomGroupId"), customGroupId);
}

std::string ListCustomViewsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListCustomViewsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListCustomViewsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListCustomViewsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ListCustomViewsRequest::getCustomEntityId() const {
  return customEntityId_;
}

void ListCustomViewsRequest::setCustomEntityId(const std::string &customEntityId) {
  customEntityId_ = customEntityId;
  setParameter(std::string("CustomEntityId"), customEntityId);
}

long ListCustomViewsRequest::getOwnerId() const {
  return ownerId_;
}

void ListCustomViewsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

