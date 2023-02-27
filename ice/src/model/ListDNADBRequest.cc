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

#include <alibabacloud/ice/model/ListDNADBRequest.h>

using AlibabaCloud::ICE::Model::ListDNADBRequest;

ListDNADBRequest::ListDNADBRequest()
    : RpcServiceRequest("ice", "2020-11-09", "ListDNADB") {
  setMethod(HttpRequest::Method::Post);
}

ListDNADBRequest::~ListDNADBRequest() {}

long ListDNADBRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListDNADBRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListDNADBRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ListDNADBRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ListDNADBRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ListDNADBRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ListDNADBRequest::getOwnerId() const {
  return ownerId_;
}

void ListDNADBRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ListDNADBRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListDNADBRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ListDNADBRequest::getDBIds() const {
  return dBIds_;
}

void ListDNADBRequest::setDBIds(const std::string &dBIds) {
  dBIds_ = dBIds;
  setParameter(std::string("DBIds"), dBIds);
}

