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

#include <alibabacloud/polardb/model/DeleteDBLinkRequest.h>

using AlibabaCloud::Polardb::Model::DeleteDBLinkRequest;

DeleteDBLinkRequest::DeleteDBLinkRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "DeleteDBLink") {
  setMethod(HttpRequest::Method::Post);
}

DeleteDBLinkRequest::~DeleteDBLinkRequest() {}

long DeleteDBLinkRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteDBLinkRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteDBLinkRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteDBLinkRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteDBLinkRequest::getDBLinkName() const {
  return dBLinkName_;
}

void DeleteDBLinkRequest::setDBLinkName(const std::string &dBLinkName) {
  dBLinkName_ = dBLinkName;
  setParameter(std::string("DBLinkName"), dBLinkName);
}

std::string DeleteDBLinkRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteDBLinkRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteDBLinkRequest::getDBClusterId() const {
  return dBClusterId_;
}

void DeleteDBLinkRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string DeleteDBLinkRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteDBLinkRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteDBLinkRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteDBLinkRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

