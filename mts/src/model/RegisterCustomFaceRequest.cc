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

#include <alibabacloud/mts/model/RegisterCustomFaceRequest.h>

using AlibabaCloud::Mts::Model::RegisterCustomFaceRequest;

RegisterCustomFaceRequest::RegisterCustomFaceRequest()
    : RpcServiceRequest("mts", "2014-06-18", "RegisterCustomFace") {
  setMethod(HttpRequest::Method::Post);
}

RegisterCustomFaceRequest::~RegisterCustomFaceRequest() {}

long RegisterCustomFaceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RegisterCustomFaceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RegisterCustomFaceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void RegisterCustomFaceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string RegisterCustomFaceRequest::getPersonId() const {
  return personId_;
}

void RegisterCustomFaceRequest::setPersonId(const std::string &personId) {
  personId_ = personId;
  setParameter(std::string("PersonId"), personId);
}

std::string RegisterCustomFaceRequest::getCategoryId() const {
  return categoryId_;
}

void RegisterCustomFaceRequest::setCategoryId(const std::string &categoryId) {
  categoryId_ = categoryId;
  setParameter(std::string("CategoryId"), categoryId);
}

std::string RegisterCustomFaceRequest::getPersonName() const {
  return personName_;
}

void RegisterCustomFaceRequest::setPersonName(const std::string &personName) {
  personName_ = personName;
  setParameter(std::string("PersonName"), personName);
}

std::string RegisterCustomFaceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RegisterCustomFaceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RegisterCustomFaceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RegisterCustomFaceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RegisterCustomFaceRequest::getOwnerId() const {
  return ownerId_;
}

void RegisterCustomFaceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RegisterCustomFaceRequest::getImageUrl() const {
  return imageUrl_;
}

void RegisterCustomFaceRequest::setImageUrl(const std::string &imageUrl) {
  imageUrl_ = imageUrl;
  setParameter(std::string("ImageUrl"), imageUrl);
}

