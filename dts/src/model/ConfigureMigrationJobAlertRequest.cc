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

#include <alibabacloud/dts/model/ConfigureMigrationJobAlertRequest.h>

using AlibabaCloud::Dts::Model::ConfigureMigrationJobAlertRequest;

ConfigureMigrationJobAlertRequest::ConfigureMigrationJobAlertRequest()
    : RpcServiceRequest("dts", "2020-01-01", "ConfigureMigrationJobAlert") {
  setMethod(HttpRequest::Method::Post);
}

ConfigureMigrationJobAlertRequest::~ConfigureMigrationJobAlertRequest() {}

std::string ConfigureMigrationJobAlertRequest::getMigrationJobId() const {
  return migrationJobId_;
}

void ConfigureMigrationJobAlertRequest::setMigrationJobId(const std::string &migrationJobId) {
  migrationJobId_ = migrationJobId;
  setParameter(std::string("MigrationJobId"), migrationJobId);
}

std::string ConfigureMigrationJobAlertRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ConfigureMigrationJobAlertRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ConfigureMigrationJobAlertRequest::getAccountId() const {
  return accountId_;
}

void ConfigureMigrationJobAlertRequest::setAccountId(const std::string &accountId) {
  accountId_ = accountId;
  setParameter(std::string("AccountId"), accountId);
}

std::string ConfigureMigrationJobAlertRequest::getRegionId() const {
  return regionId_;
}

void ConfigureMigrationJobAlertRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ConfigureMigrationJobAlertRequest::getDelayAlertPhone() const {
  return delayAlertPhone_;
}

void ConfigureMigrationJobAlertRequest::setDelayAlertPhone(const std::string &delayAlertPhone) {
  delayAlertPhone_ = delayAlertPhone;
  setParameter(std::string("DelayAlertPhone"), delayAlertPhone);
}

std::string ConfigureMigrationJobAlertRequest::getDelayOverSeconds() const {
  return delayOverSeconds_;
}

void ConfigureMigrationJobAlertRequest::setDelayOverSeconds(const std::string &delayOverSeconds) {
  delayOverSeconds_ = delayOverSeconds;
  setParameter(std::string("DelayOverSeconds"), delayOverSeconds);
}

std::string ConfigureMigrationJobAlertRequest::getDelayAlertStatus() const {
  return delayAlertStatus_;
}

void ConfigureMigrationJobAlertRequest::setDelayAlertStatus(const std::string &delayAlertStatus) {
  delayAlertStatus_ = delayAlertStatus;
  setParameter(std::string("DelayAlertStatus"), delayAlertStatus);
}

std::string ConfigureMigrationJobAlertRequest::getOwnerId() const {
  return ownerId_;
}

void ConfigureMigrationJobAlertRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string ConfigureMigrationJobAlertRequest::getErrorAlertPhone() const {
  return errorAlertPhone_;
}

void ConfigureMigrationJobAlertRequest::setErrorAlertPhone(const std::string &errorAlertPhone) {
  errorAlertPhone_ = errorAlertPhone;
  setParameter(std::string("ErrorAlertPhone"), errorAlertPhone);
}

std::string ConfigureMigrationJobAlertRequest::getErrorAlertStatus() const {
  return errorAlertStatus_;
}

void ConfigureMigrationJobAlertRequest::setErrorAlertStatus(const std::string &errorAlertStatus) {
  errorAlertStatus_ = errorAlertStatus;
  setParameter(std::string("ErrorAlertStatus"), errorAlertStatus);
}

