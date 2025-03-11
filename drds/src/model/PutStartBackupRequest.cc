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

#include <alibabacloud/drds/model/PutStartBackupRequest.h>

using AlibabaCloud::Drds::Model::PutStartBackupRequest;

PutStartBackupRequest::PutStartBackupRequest()
    : RpcServiceRequest("drds", "2019-01-23", "PutStartBackup") {
  setMethod(HttpRequest::Method::Post);
}

PutStartBackupRequest::~PutStartBackupRequest() {}

std::string PutStartBackupRequest::getBackupDbNames() const {
  return backupDbNames_;
}

void PutStartBackupRequest::setBackupDbNames(const std::string &backupDbNames) {
  backupDbNames_ = backupDbNames;
  setParameter(std::string("BackupDbNames"), backupDbNames);
}

std::string PutStartBackupRequest::getBackupLevel() const {
  return backupLevel_;
}

void PutStartBackupRequest::setBackupLevel(const std::string &backupLevel) {
  backupLevel_ = backupLevel;
  setParameter(std::string("BackupLevel"), backupLevel);
}

std::string PutStartBackupRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void PutStartBackupRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

std::string PutStartBackupRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void PutStartBackupRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string PutStartBackupRequest::getBackupMode() const {
  return backupMode_;
}

void PutStartBackupRequest::setBackupMode(const std::string &backupMode) {
  backupMode_ = backupMode;
  setParameter(std::string("BackupMode"), backupMode);
}

