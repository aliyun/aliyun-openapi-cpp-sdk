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

#include <alibabacloud/mts/model/ListCustomEntitiesRequest.h>

using AlibabaCloud::Mts::Model::ListCustomEntitiesRequest;

ListCustomEntitiesRequest::ListCustomEntitiesRequest()
    : RpcServiceRequest("mts", "2014-06-18", "ListCustomEntities") {
  setMethod(HttpRequest::Method::Post);
}

ListCustomEntitiesRequest::~ListCustomEntitiesRequest() {}

long ListCustomEntitiesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListCustomEntitiesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int ListCustomEntitiesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListCustomEntitiesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListCustomEntitiesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListCustomEntitiesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int ListCustomEntitiesRequest::getPageSize() const {
  return pageSize_;
}

void ListCustomEntitiesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListCustomEntitiesRequest::getAlgorithm() const {
  return algorithm_;
}

void ListCustomEntitiesRequest::setAlgorithm(const std::string &algorithm) {
  algorithm_ = algorithm;
  setParameter(std::string("Algorithm"), algorithm);
}

std::string ListCustomEntitiesRequest::getCustomGroupId() const {
  return customGroupId_;
}

void ListCustomEntitiesRequest::setCustomGroupId(const std::string &customGroupId) {
  customGroupId_ = customGroupId;
  setParameter(std::string("CustomGroupId"), customGroupId);
}

std::string ListCustomEntitiesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListCustomEntitiesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListCustomEntitiesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListCustomEntitiesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListCustomEntitiesRequest::getOwnerId() const {
  return ownerId_;
}

void ListCustomEntitiesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

