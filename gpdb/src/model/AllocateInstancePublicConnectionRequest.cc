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

#include <alibabacloud/gpdb/model/AllocateInstancePublicConnectionRequest.h>

using AlibabaCloud::Gpdb::Model::AllocateInstancePublicConnectionRequest;

AllocateInstancePublicConnectionRequest::AllocateInstancePublicConnectionRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "AllocateInstancePublicConnection") {
  setMethod(HttpRequest::Method::Post);
}

AllocateInstancePublicConnectionRequest::~AllocateInstancePublicConnectionRequest() {}

long AllocateInstancePublicConnectionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AllocateInstancePublicConnectionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AllocateInstancePublicConnectionRequest::getConnectionStringPrefix() const {
  return connectionStringPrefix_;
}

void AllocateInstancePublicConnectionRequest::setConnectionStringPrefix(const std::string &connectionStringPrefix) {
  connectionStringPrefix_ = connectionStringPrefix;
  setParameter(std::string("ConnectionStringPrefix"), connectionStringPrefix);
}

std::string AllocateInstancePublicConnectionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AllocateInstancePublicConnectionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string AllocateInstancePublicConnectionRequest::getAddressType() const {
  return addressType_;
}

void AllocateInstancePublicConnectionRequest::setAddressType(const std::string &addressType) {
  addressType_ = addressType;
  setParameter(std::string("AddressType"), addressType);
}

std::string AllocateInstancePublicConnectionRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void AllocateInstancePublicConnectionRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string AllocateInstancePublicConnectionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AllocateInstancePublicConnectionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long AllocateInstancePublicConnectionRequest::getOwnerId() const {
  return ownerId_;
}

void AllocateInstancePublicConnectionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AllocateInstancePublicConnectionRequest::getPort() const {
  return port_;
}

void AllocateInstancePublicConnectionRequest::setPort(const std::string &port) {
  port_ = port;
  setParameter(std::string("Port"), port);
}

