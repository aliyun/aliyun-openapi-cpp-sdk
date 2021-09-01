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

#include <alibabacloud/mts/model/UnregisterCustomFaceRequest.h>

using AlibabaCloud::Mts::Model::UnregisterCustomFaceRequest;

UnregisterCustomFaceRequest::UnregisterCustomFaceRequest()
    : RpcServiceRequest("mts", "2014-06-18", "UnregisterCustomFace") {
  setMethod(HttpRequest::Method::Post);
}

UnregisterCustomFaceRequest::~UnregisterCustomFaceRequest() {}

long UnregisterCustomFaceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void UnregisterCustomFaceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string UnregisterCustomFaceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UnregisterCustomFaceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UnregisterCustomFaceRequest::getPersonId() const {
  return personId_;
}

void UnregisterCustomFaceRequest::setPersonId(const std::string &personId) {
  personId_ = personId;
  setParameter(std::string("PersonId"), personId);
}

std::string UnregisterCustomFaceRequest::getCategoryId() const {
  return categoryId_;
}

void UnregisterCustomFaceRequest::setCategoryId(const std::string &categoryId) {
  categoryId_ = categoryId;
  setParameter(std::string("CategoryId"), categoryId);
}

std::string UnregisterCustomFaceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void UnregisterCustomFaceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string UnregisterCustomFaceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void UnregisterCustomFaceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string UnregisterCustomFaceRequest::getFaceId() const {
  return faceId_;
}

void UnregisterCustomFaceRequest::setFaceId(const std::string &faceId) {
  faceId_ = faceId;
  setParameter(std::string("FaceId"), faceId);
}

long UnregisterCustomFaceRequest::getOwnerId() const {
  return ownerId_;
}

void UnregisterCustomFaceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

