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

#include <alibabacloud/dds/model/DeleteDBInstanceRequest.h>

using AlibabaCloud::Dds::Model::DeleteDBInstanceRequest;

DeleteDBInstanceRequest::DeleteDBInstanceRequest()
    : RpcServiceRequest("dds", "2015-12-01", "DeleteDBInstance") {
  setMethod(HttpRequest::Method::Post);
}

DeleteDBInstanceRequest::~DeleteDBInstanceRequest() {}

long DeleteDBInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteDBInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteDBInstanceRequest::getClientToken() const {
  return clientToken_;
}

void DeleteDBInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteDBInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteDBInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteDBInstanceRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DeleteDBInstanceRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DeleteDBInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteDBInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteDBInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteDBInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteDBInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteDBInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

