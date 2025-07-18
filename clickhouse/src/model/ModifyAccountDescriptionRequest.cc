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

#include <alibabacloud/clickhouse/model/ModifyAccountDescriptionRequest.h>

using AlibabaCloud::Clickhouse::Model::ModifyAccountDescriptionRequest;

ModifyAccountDescriptionRequest::ModifyAccountDescriptionRequest()
    : RpcServiceRequest("clickhouse", "2019-11-11", "ModifyAccountDescription") {
  setMethod(HttpRequest::Method::Post);
}

ModifyAccountDescriptionRequest::~ModifyAccountDescriptionRequest() {}

long ModifyAccountDescriptionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyAccountDescriptionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyAccountDescriptionRequest::getAccountDescription() const {
  return accountDescription_;
}

void ModifyAccountDescriptionRequest::setAccountDescription(const std::string &accountDescription) {
  accountDescription_ = accountDescription;
  setParameter(std::string("AccountDescription"), accountDescription);
}

std::string ModifyAccountDescriptionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyAccountDescriptionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyAccountDescriptionRequest::getAccountName() const {
  return accountName_;
}

void ModifyAccountDescriptionRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string ModifyAccountDescriptionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyAccountDescriptionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyAccountDescriptionRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyAccountDescriptionRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyAccountDescriptionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyAccountDescriptionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyAccountDescriptionRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyAccountDescriptionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

