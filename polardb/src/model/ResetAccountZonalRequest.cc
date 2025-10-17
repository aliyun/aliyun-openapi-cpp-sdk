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

#include <alibabacloud/polardb/model/ResetAccountZonalRequest.h>

using AlibabaCloud::Polardb::Model::ResetAccountZonalRequest;

ResetAccountZonalRequest::ResetAccountZonalRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ResetAccountZonal") {
  setMethod(HttpRequest::Method::Post);
}

ResetAccountZonalRequest::~ResetAccountZonalRequest() {}

long ResetAccountZonalRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ResetAccountZonalRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ResetAccountZonalRequest::getClientToken() const {
  return clientToken_;
}

void ResetAccountZonalRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ResetAccountZonalRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ResetAccountZonalRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ResetAccountZonalRequest::getAccountName() const {
  return accountName_;
}

void ResetAccountZonalRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string ResetAccountZonalRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ResetAccountZonalRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ResetAccountZonalRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ResetAccountZonalRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ResetAccountZonalRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ResetAccountZonalRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ResetAccountZonalRequest::getOwnerId() const {
  return ownerId_;
}

void ResetAccountZonalRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ResetAccountZonalRequest::getAccountPassword() const {
  return accountPassword_;
}

void ResetAccountZonalRequest::setAccountPassword(const std::string &accountPassword) {
  accountPassword_ = accountPassword;
  setParameter(std::string("AccountPassword"), accountPassword);
}

