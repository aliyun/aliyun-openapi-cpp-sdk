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

#include <alibabacloud/polardb/model/CheckDBNameZonalRequest.h>

using AlibabaCloud::Polardb::Model::CheckDBNameZonalRequest;

CheckDBNameZonalRequest::CheckDBNameZonalRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "CheckDBNameZonal") {
  setMethod(HttpRequest::Method::Post);
}

CheckDBNameZonalRequest::~CheckDBNameZonalRequest() {}

long CheckDBNameZonalRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CheckDBNameZonalRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CheckDBNameZonalRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CheckDBNameZonalRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CheckDBNameZonalRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CheckDBNameZonalRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CheckDBNameZonalRequest::getDBClusterId() const {
  return dBClusterId_;
}

void CheckDBNameZonalRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string CheckDBNameZonalRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CheckDBNameZonalRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CheckDBNameZonalRequest::getOwnerId() const {
  return ownerId_;
}

void CheckDBNameZonalRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CheckDBNameZonalRequest::getDBName() const {
  return dBName_;
}

void CheckDBNameZonalRequest::setDBName(const std::string &dBName) {
  dBName_ = dBName;
  setParameter(std::string("DBName"), dBName);
}

