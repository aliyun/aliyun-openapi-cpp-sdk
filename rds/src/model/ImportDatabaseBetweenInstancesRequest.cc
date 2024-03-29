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

#include <alibabacloud/rds/model/ImportDatabaseBetweenInstancesRequest.h>

using AlibabaCloud::Rds::Model::ImportDatabaseBetweenInstancesRequest;

ImportDatabaseBetweenInstancesRequest::ImportDatabaseBetweenInstancesRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ImportDatabaseBetweenInstances") {
  setMethod(HttpRequest::Method::Post);
}

ImportDatabaseBetweenInstancesRequest::~ImportDatabaseBetweenInstancesRequest() {}

long ImportDatabaseBetweenInstancesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ImportDatabaseBetweenInstancesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ImportDatabaseBetweenInstancesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ImportDatabaseBetweenInstancesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ImportDatabaseBetweenInstancesRequest::getDBInfo() const {
  return dBInfo_;
}

void ImportDatabaseBetweenInstancesRequest::setDBInfo(const std::string &dBInfo) {
  dBInfo_ = dBInfo;
  setParameter(std::string("DBInfo"), dBInfo);
}

std::string ImportDatabaseBetweenInstancesRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ImportDatabaseBetweenInstancesRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ImportDatabaseBetweenInstancesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ImportDatabaseBetweenInstancesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ImportDatabaseBetweenInstancesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ImportDatabaseBetweenInstancesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ImportDatabaseBetweenInstancesRequest::getOwnerId() const {
  return ownerId_;
}

void ImportDatabaseBetweenInstancesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ImportDatabaseBetweenInstancesRequest::getSourceDBInstanceId() const {
  return sourceDBInstanceId_;
}

void ImportDatabaseBetweenInstancesRequest::setSourceDBInstanceId(const std::string &sourceDBInstanceId) {
  sourceDBInstanceId_ = sourceDBInstanceId;
  setParameter(std::string("SourceDBInstanceId"), sourceDBInstanceId);
}

