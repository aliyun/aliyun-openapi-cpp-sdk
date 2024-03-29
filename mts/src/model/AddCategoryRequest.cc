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

#include <alibabacloud/mts/model/AddCategoryRequest.h>

using AlibabaCloud::Mts::Model::AddCategoryRequest;

AddCategoryRequest::AddCategoryRequest()
    : RpcServiceRequest("mts", "2014-06-18", "AddCategory") {
  setMethod(HttpRequest::Method::Post);
}

AddCategoryRequest::~AddCategoryRequest() {}

long AddCategoryRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AddCategoryRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

long AddCategoryRequest::getParentId() const {
  return parentId_;
}

void AddCategoryRequest::setParentId(long parentId) {
  parentId_ = parentId;
  setParameter(std::string("ParentId"), std::to_string(parentId));
}

std::string AddCategoryRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AddCategoryRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string AddCategoryRequest::getCateName() const {
  return cateName_;
}

void AddCategoryRequest::setCateName(const std::string &cateName) {
  cateName_ = cateName;
  setParameter(std::string("CateName"), cateName);
}

std::string AddCategoryRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AddCategoryRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AddCategoryRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AddCategoryRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AddCategoryRequest::getOwnerId() const {
  return ownerId_;
}

void AddCategoryRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

