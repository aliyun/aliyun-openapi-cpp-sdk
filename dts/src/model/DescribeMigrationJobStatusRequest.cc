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

#include <alibabacloud/dts/model/DescribeMigrationJobStatusRequest.h>

using AlibabaCloud::Dts::Model::DescribeMigrationJobStatusRequest;

DescribeMigrationJobStatusRequest::DescribeMigrationJobStatusRequest()
    : RpcServiceRequest("dts", "2020-01-01", "DescribeMigrationJobStatus") {
  setMethod(HttpRequest::Method::Post);
}

DescribeMigrationJobStatusRequest::~DescribeMigrationJobStatusRequest() {}

std::string DescribeMigrationJobStatusRequest::getClientToken() const {
  return clientToken_;
}

void DescribeMigrationJobStatusRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DescribeMigrationJobStatusRequest::getMigrationJobId() const {
  return migrationJobId_;
}

void DescribeMigrationJobStatusRequest::setMigrationJobId(const std::string &migrationJobId) {
  migrationJobId_ = migrationJobId;
  setParameter(std::string("MigrationJobId"), migrationJobId);
}

std::string DescribeMigrationJobStatusRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeMigrationJobStatusRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string DescribeMigrationJobStatusRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribeMigrationJobStatusRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribeMigrationJobStatusRequest::getAccountId() const {
  return accountId_;
}

void DescribeMigrationJobStatusRequest::setAccountId(const std::string &accountId) {
  accountId_ = accountId;
  setParameter(std::string("AccountId"), accountId);
}

std::string DescribeMigrationJobStatusRequest::getRegionId() const {
  return regionId_;
}

void DescribeMigrationJobStatusRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

