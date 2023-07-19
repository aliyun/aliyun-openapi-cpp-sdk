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

#include <alibabacloud/dts/model/SuspendMigrationJobRequest.h>

using AlibabaCloud::Dts::Model::SuspendMigrationJobRequest;

SuspendMigrationJobRequest::SuspendMigrationJobRequest()
    : RpcServiceRequest("dts", "2020-01-01", "SuspendMigrationJob") {
  setMethod(HttpRequest::Method::Post);
}

SuspendMigrationJobRequest::~SuspendMigrationJobRequest() {}

std::string SuspendMigrationJobRequest::getClientToken() const {
  return clientToken_;
}

void SuspendMigrationJobRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string SuspendMigrationJobRequest::getMigrationJobId() const {
  return migrationJobId_;
}

void SuspendMigrationJobRequest::setMigrationJobId(const std::string &migrationJobId) {
  migrationJobId_ = migrationJobId;
  setParameter(std::string("MigrationJobId"), migrationJobId);
}

std::string SuspendMigrationJobRequest::getOwnerId() const {
  return ownerId_;
}

void SuspendMigrationJobRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string SuspendMigrationJobRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SuspendMigrationJobRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SuspendMigrationJobRequest::getAccountId() const {
  return accountId_;
}

void SuspendMigrationJobRequest::setAccountId(const std::string &accountId) {
  accountId_ = accountId;
  setParameter(std::string("AccountId"), accountId);
}

std::string SuspendMigrationJobRequest::getRegionId() const {
  return regionId_;
}

void SuspendMigrationJobRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

