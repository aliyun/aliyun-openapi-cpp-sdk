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

#include <alibabacloud/mts/model/TagCustomPersonRequest.h>

using AlibabaCloud::Mts::Model::TagCustomPersonRequest;

TagCustomPersonRequest::TagCustomPersonRequest()
    : RpcServiceRequest("mts", "2014-06-18", "TagCustomPerson") {
  setMethod(HttpRequest::Method::Post);
}

TagCustomPersonRequest::~TagCustomPersonRequest() {}

long TagCustomPersonRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void TagCustomPersonRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string TagCustomPersonRequest::getPersonDescription() const {
  return personDescription_;
}

void TagCustomPersonRequest::setPersonDescription(const std::string &personDescription) {
  personDescription_ = personDescription;
  setParameter(std::string("PersonDescription"), personDescription);
}

std::string TagCustomPersonRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void TagCustomPersonRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string TagCustomPersonRequest::getCategoryDescription() const {
  return categoryDescription_;
}

void TagCustomPersonRequest::setCategoryDescription(const std::string &categoryDescription) {
  categoryDescription_ = categoryDescription;
  setParameter(std::string("CategoryDescription"), categoryDescription);
}

std::string TagCustomPersonRequest::getPersonId() const {
  return personId_;
}

void TagCustomPersonRequest::setPersonId(const std::string &personId) {
  personId_ = personId;
  setParameter(std::string("PersonId"), personId);
}

std::string TagCustomPersonRequest::getCategoryId() const {
  return categoryId_;
}

void TagCustomPersonRequest::setCategoryId(const std::string &categoryId) {
  categoryId_ = categoryId;
  setParameter(std::string("CategoryId"), categoryId);
}

std::string TagCustomPersonRequest::getPersonName() const {
  return personName_;
}

void TagCustomPersonRequest::setPersonName(const std::string &personName) {
  personName_ = personName;
  setParameter(std::string("PersonName"), personName);
}

std::string TagCustomPersonRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void TagCustomPersonRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string TagCustomPersonRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void TagCustomPersonRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long TagCustomPersonRequest::getOwnerId() const {
  return ownerId_;
}

void TagCustomPersonRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string TagCustomPersonRequest::getCategoryName() const {
  return categoryName_;
}

void TagCustomPersonRequest::setCategoryName(const std::string &categoryName) {
  categoryName_ = categoryName;
  setParameter(std::string("CategoryName"), categoryName);
}

