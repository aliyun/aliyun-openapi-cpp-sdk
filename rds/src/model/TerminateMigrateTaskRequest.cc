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

#include <alibabacloud/rds/model/TerminateMigrateTaskRequest.h>

using AlibabaCloud::Rds::Model::TerminateMigrateTaskRequest;

TerminateMigrateTaskRequest::TerminateMigrateTaskRequest()
    : RpcServiceRequest("rds", "2014-08-15", "TerminateMigrateTask") {
  setMethod(HttpRequest::Method::Post);
}

TerminateMigrateTaskRequest::~TerminateMigrateTaskRequest() {}

long TerminateMigrateTaskRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void TerminateMigrateTaskRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string TerminateMigrateTaskRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void TerminateMigrateTaskRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string TerminateMigrateTaskRequest::getRegionId() const {
  return regionId_;
}

void TerminateMigrateTaskRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string TerminateMigrateTaskRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void TerminateMigrateTaskRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string TerminateMigrateTaskRequest::getMigrateTaskId() const {
  return migrateTaskId_;
}

void TerminateMigrateTaskRequest::setMigrateTaskId(const std::string &migrateTaskId) {
  migrateTaskId_ = migrateTaskId;
  setParameter(std::string("MigrateTaskId"), migrateTaskId);
}

std::string TerminateMigrateTaskRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void TerminateMigrateTaskRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long TerminateMigrateTaskRequest::getOwnerId() const {
  return ownerId_;
}

void TerminateMigrateTaskRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

