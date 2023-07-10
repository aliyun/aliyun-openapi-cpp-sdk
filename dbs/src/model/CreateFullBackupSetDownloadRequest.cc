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

#include <alibabacloud/dbs/model/CreateFullBackupSetDownloadRequest.h>

using AlibabaCloud::Dbs::Model::CreateFullBackupSetDownloadRequest;

CreateFullBackupSetDownloadRequest::CreateFullBackupSetDownloadRequest()
    : RpcServiceRequest("dbs", "2019-03-06", "CreateFullBackupSetDownload") {
  setMethod(HttpRequest::Method::Post);
}

CreateFullBackupSetDownloadRequest::~CreateFullBackupSetDownloadRequest() {}

std::string CreateFullBackupSetDownloadRequest::getClientToken() const {
  return clientToken_;
}

void CreateFullBackupSetDownloadRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateFullBackupSetDownloadRequest::getBackupSetDataFormat() const {
  return backupSetDataFormat_;
}

void CreateFullBackupSetDownloadRequest::setBackupSetDataFormat(const std::string &backupSetDataFormat) {
  backupSetDataFormat_ = backupSetDataFormat;
  setParameter(std::string("BackupSetDataFormat"), backupSetDataFormat);
}

std::string CreateFullBackupSetDownloadRequest::getBackupSetId() const {
  return backupSetId_;
}

void CreateFullBackupSetDownloadRequest::setBackupSetId(const std::string &backupSetId) {
  backupSetId_ = backupSetId;
  setParameter(std::string("BackupSetId"), backupSetId);
}

std::string CreateFullBackupSetDownloadRequest::getOwnerId() const {
  return ownerId_;
}

void CreateFullBackupSetDownloadRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

