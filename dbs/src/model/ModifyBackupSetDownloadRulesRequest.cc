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

#include <alibabacloud/dbs/model/ModifyBackupSetDownloadRulesRequest.h>

using AlibabaCloud::Dbs::Model::ModifyBackupSetDownloadRulesRequest;

ModifyBackupSetDownloadRulesRequest::ModifyBackupSetDownloadRulesRequest()
    : RpcServiceRequest("dbs", "2019-03-06", "ModifyBackupSetDownloadRules") {
  setMethod(HttpRequest::Method::Post);
}

ModifyBackupSetDownloadRulesRequest::~ModifyBackupSetDownloadRulesRequest() {}

std::string ModifyBackupSetDownloadRulesRequest::getFullDataFormat() const {
  return fullDataFormat_;
}

void ModifyBackupSetDownloadRulesRequest::setFullDataFormat(const std::string &fullDataFormat) {
  fullDataFormat_ = fullDataFormat;
  setParameter(std::string("FullDataFormat"), fullDataFormat);
}

long ModifyBackupSetDownloadRulesRequest::getBackupGatewayId() const {
  return backupGatewayId_;
}

void ModifyBackupSetDownloadRulesRequest::setBackupGatewayId(long backupGatewayId) {
  backupGatewayId_ = backupGatewayId;
  setParameter(std::string("BackupGatewayId"), std::to_string(backupGatewayId));
}

std::string ModifyBackupSetDownloadRulesRequest::getClientToken() const {
  return clientToken_;
}

void ModifyBackupSetDownloadRulesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyBackupSetDownloadRulesRequest::getBackupSetDownloadTargetType() const {
  return backupSetDownloadTargetType_;
}

void ModifyBackupSetDownloadRulesRequest::setBackupSetDownloadTargetType(const std::string &backupSetDownloadTargetType) {
  backupSetDownloadTargetType_ = backupSetDownloadTargetType;
  setParameter(std::string("BackupSetDownloadTargetType"), backupSetDownloadTargetType);
}

std::string ModifyBackupSetDownloadRulesRequest::getBackupPlanId() const {
  return backupPlanId_;
}

void ModifyBackupSetDownloadRulesRequest::setBackupPlanId(const std::string &backupPlanId) {
  backupPlanId_ = backupPlanId;
  setParameter(std::string("BackupPlanId"), backupPlanId);
}

std::string ModifyBackupSetDownloadRulesRequest::getBackupSetDownloadTargetTypeLocation() const {
  return backupSetDownloadTargetTypeLocation_;
}

void ModifyBackupSetDownloadRulesRequest::setBackupSetDownloadTargetTypeLocation(const std::string &backupSetDownloadTargetTypeLocation) {
  backupSetDownloadTargetTypeLocation_ = backupSetDownloadTargetTypeLocation;
  setParameter(std::string("BackupSetDownloadTargetTypeLocation"), backupSetDownloadTargetTypeLocation);
}

std::string ModifyBackupSetDownloadRulesRequest::getBackupSetDownloadDir() const {
  return backupSetDownloadDir_;
}

void ModifyBackupSetDownloadRulesRequest::setBackupSetDownloadDir(const std::string &backupSetDownloadDir) {
  backupSetDownloadDir_ = backupSetDownloadDir;
  setParameter(std::string("BackupSetDownloadDir"), backupSetDownloadDir);
}

std::string ModifyBackupSetDownloadRulesRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyBackupSetDownloadRulesRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

bool ModifyBackupSetDownloadRulesRequest::getOpenAutoDownload() const {
  return openAutoDownload_;
}

void ModifyBackupSetDownloadRulesRequest::setOpenAutoDownload(bool openAutoDownload) {
  openAutoDownload_ = openAutoDownload;
  setParameter(std::string("OpenAutoDownload"), openAutoDownload ? "true" : "false");
}

std::string ModifyBackupSetDownloadRulesRequest::getIncrementDataFormat() const {
  return incrementDataFormat_;
}

void ModifyBackupSetDownloadRulesRequest::setIncrementDataFormat(const std::string &incrementDataFormat) {
  incrementDataFormat_ = incrementDataFormat;
  setParameter(std::string("IncrementDataFormat"), incrementDataFormat);
}

