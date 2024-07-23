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

#include <alibabacloud/rds/model/SwitchDBInstanceNetTypeRequest.h>

using AlibabaCloud::Rds::Model::SwitchDBInstanceNetTypeRequest;

SwitchDBInstanceNetTypeRequest::SwitchDBInstanceNetTypeRequest()
    : RpcServiceRequest("rds", "2014-08-15", "SwitchDBInstanceNetType") {
  setMethod(HttpRequest::Method::Post);
}

SwitchDBInstanceNetTypeRequest::~SwitchDBInstanceNetTypeRequest() {}

long SwitchDBInstanceNetTypeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SwitchDBInstanceNetTypeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SwitchDBInstanceNetTypeRequest::getConnectionStringPrefix() const {
  return connectionStringPrefix_;
}

void SwitchDBInstanceNetTypeRequest::setConnectionStringPrefix(const std::string &connectionStringPrefix) {
  connectionStringPrefix_ = connectionStringPrefix;
  setParameter(std::string("ConnectionStringPrefix"), connectionStringPrefix);
}

std::string SwitchDBInstanceNetTypeRequest::getClientToken() const {
  return clientToken_;
}

void SwitchDBInstanceNetTypeRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string SwitchDBInstanceNetTypeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SwitchDBInstanceNetTypeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SwitchDBInstanceNetTypeRequest::getRegionId() const {
  return regionId_;
}

void SwitchDBInstanceNetTypeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SwitchDBInstanceNetTypeRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void SwitchDBInstanceNetTypeRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string SwitchDBInstanceNetTypeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SwitchDBInstanceNetTypeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string SwitchDBInstanceNetTypeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void SwitchDBInstanceNetTypeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long SwitchDBInstanceNetTypeRequest::getOwnerId() const {
  return ownerId_;
}

void SwitchDBInstanceNetTypeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string SwitchDBInstanceNetTypeRequest::getConnectionStringType() const {
  return connectionStringType_;
}

void SwitchDBInstanceNetTypeRequest::setConnectionStringType(const std::string &connectionStringType) {
  connectionStringType_ = connectionStringType;
  setParameter(std::string("ConnectionStringType"), connectionStringType);
}

std::string SwitchDBInstanceNetTypeRequest::getPort() const {
  return port_;
}

void SwitchDBInstanceNetTypeRequest::setPort(const std::string &port) {
  port_ = port;
  setParameter(std::string("Port"), port);
}

