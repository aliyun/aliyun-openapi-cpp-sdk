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

#include <alibabacloud/dbs/model/CreateIncrementBackupSetDownloadRequest.h>

using AlibabaCloud::Dbs::Model::CreateIncrementBackupSetDownloadRequest;

CreateIncrementBackupSetDownloadRequest::CreateIncrementBackupSetDownloadRequest()
    : RpcServiceRequest("dbs", "2019-03-06", "CreateIncrementBackupSetDownload") {
  setMethod(HttpRequest::Method::Post);
}

CreateIncrementBackupSetDownloadRequest::~CreateIncrementBackupSetDownloadRequest() {}

std::string CreateIncrementBackupSetDownloadRequest::getClientToken() const {
  return clientToken_;
}

void CreateIncrementBackupSetDownloadRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateIncrementBackupSetDownloadRequest::getBackupSetDataFormat() const {
  return backupSetDataFormat_;
}

void CreateIncrementBackupSetDownloadRequest::setBackupSetDataFormat(const std::string &backupSetDataFormat) {
  backupSetDataFormat_ = backupSetDataFormat;
  setParameter(std::string("BackupSetDataFormat"), backupSetDataFormat);
}

std::string CreateIncrementBackupSetDownloadRequest::getBackupSetName() const {
  return backupSetName_;
}

void CreateIncrementBackupSetDownloadRequest::setBackupSetName(const std::string &backupSetName) {
  backupSetName_ = backupSetName;
  setParameter(std::string("BackupSetName"), backupSetName);
}

std::string CreateIncrementBackupSetDownloadRequest::getBackupSetId() const {
  return backupSetId_;
}

void CreateIncrementBackupSetDownloadRequest::setBackupSetId(const std::string &backupSetId) {
  backupSetId_ = backupSetId;
  setParameter(std::string("BackupSetId"), backupSetId);
}

std::string CreateIncrementBackupSetDownloadRequest::getOwnerId() const {
  return ownerId_;
}

void CreateIncrementBackupSetDownloadRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

