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

#include <alibabacloud/mts/model/ListFpShotDBRequest.h>

using AlibabaCloud::Mts::Model::ListFpShotDBRequest;

ListFpShotDBRequest::ListFpShotDBRequest()
    : RpcServiceRequest("mts", "2014-06-18", "ListFpShotDB") {
  setMethod(HttpRequest::Method::Post);
}

ListFpShotDBRequest::~ListFpShotDBRequest() {}

long ListFpShotDBRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListFpShotDBRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListFpShotDBRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListFpShotDBRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListFpShotDBRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListFpShotDBRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListFpShotDBRequest::getOwnerId() const {
  return ownerId_;
}

void ListFpShotDBRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListFpShotDBRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListFpShotDBRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ListFpShotDBRequest::getFpDBIds() const {
  return fpDBIds_;
}

void ListFpShotDBRequest::setFpDBIds(const std::string &fpDBIds) {
  fpDBIds_ = fpDBIds;
  setParameter(std::string("FpDBIds"), fpDBIds);
}

