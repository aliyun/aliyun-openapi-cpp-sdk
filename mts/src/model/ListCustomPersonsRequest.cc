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

#include <alibabacloud/mts/model/ListCustomPersonsRequest.h>

using AlibabaCloud::Mts::Model::ListCustomPersonsRequest;

ListCustomPersonsRequest::ListCustomPersonsRequest()
    : RpcServiceRequest("mts", "2014-06-18", "ListCustomPersons") {
  setMethod(HttpRequest::Method::Post);
}

ListCustomPersonsRequest::~ListCustomPersonsRequest() {}

long ListCustomPersonsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListCustomPersonsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListCustomPersonsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListCustomPersonsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ListCustomPersonsRequest::getPersonId() const {
  return personId_;
}

void ListCustomPersonsRequest::setPersonId(const std::string &personId) {
  personId_ = personId;
  setParameter(std::string("PersonId"), personId);
}

std::string ListCustomPersonsRequest::getCategoryId() const {
  return categoryId_;
}

void ListCustomPersonsRequest::setCategoryId(const std::string &categoryId) {
  categoryId_ = categoryId;
  setParameter(std::string("CategoryId"), categoryId);
}

std::string ListCustomPersonsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListCustomPersonsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListCustomPersonsRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListCustomPersonsRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListCustomPersonsRequest::getOwnerId() const {
  return ownerId_;
}

void ListCustomPersonsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

