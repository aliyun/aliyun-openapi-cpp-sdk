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

#include <alibabacloud/mts/model/ListCustomGroupsRequest.h>

using AlibabaCloud::Mts::Model::ListCustomGroupsRequest;

ListCustomGroupsRequest::ListCustomGroupsRequest()
    : RpcServiceRequest("mts", "2014-06-18", "ListCustomGroups") {
  setMethod(HttpRequest::Method::Post);
}

ListCustomGroupsRequest::~ListCustomGroupsRequest() {}

long ListCustomGroupsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListCustomGroupsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int ListCustomGroupsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListCustomGroupsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListCustomGroupsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListCustomGroupsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

int ListCustomGroupsRequest::getPageSize() const {
  return pageSize_;
}

void ListCustomGroupsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListCustomGroupsRequest::getAlgorithm() const {
  return algorithm_;
}

void ListCustomGroupsRequest::setAlgorithm(const std::string &algorithm) {
  algorithm_ = algorithm;
  setParameter(std::string("Algorithm"), algorithm);
}

std::string ListCustomGroupsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListCustomGroupsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListCustomGroupsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListCustomGroupsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListCustomGroupsRequest::getOwnerId() const {
  return ownerId_;
}

void ListCustomGroupsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

