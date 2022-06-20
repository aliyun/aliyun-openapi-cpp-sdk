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

#include <alibabacloud/sas/model/ModifyWebLockStartRequest.h>

using AlibabaCloud::Sas::Model::ModifyWebLockStartRequest;

ModifyWebLockStartRequest::ModifyWebLockStartRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ModifyWebLockStart") {
  setMethod(HttpRequest::Method::Post);
}

ModifyWebLockStartRequest::~ModifyWebLockStartRequest() {}

std::string ModifyWebLockStartRequest::getLocalBackupDir() const {
  return localBackupDir_;
}

void ModifyWebLockStartRequest::setLocalBackupDir(const std::string &localBackupDir) {
  localBackupDir_ = localBackupDir;
  setParameter(std::string("LocalBackupDir"), localBackupDir);
}

std::string ModifyWebLockStartRequest::getExclusiveFile() const {
  return exclusiveFile_;
}

void ModifyWebLockStartRequest::setExclusiveFile(const std::string &exclusiveFile) {
  exclusiveFile_ = exclusiveFile;
  setParameter(std::string("ExclusiveFile"), exclusiveFile);
}

std::string ModifyWebLockStartRequest::getExclusiveFileType() const {
  return exclusiveFileType_;
}

void ModifyWebLockStartRequest::setExclusiveFileType(const std::string &exclusiveFileType) {
  exclusiveFileType_ = exclusiveFileType;
  setParameter(std::string("ExclusiveFileType"), exclusiveFileType);
}

std::string ModifyWebLockStartRequest::getDir() const {
  return dir_;
}

void ModifyWebLockStartRequest::setDir(const std::string &dir) {
  dir_ = dir;
  setParameter(std::string("Dir"), dir);
}

std::string ModifyWebLockStartRequest::getUuid() const {
  return uuid_;
}

void ModifyWebLockStartRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string ModifyWebLockStartRequest::getMode() const {
  return mode_;
}

void ModifyWebLockStartRequest::setMode(const std::string &mode) {
  mode_ = mode;
  setParameter(std::string("Mode"), mode);
}

std::string ModifyWebLockStartRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyWebLockStartRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifyWebLockStartRequest::getExclusiveDir() const {
  return exclusiveDir_;
}

void ModifyWebLockStartRequest::setExclusiveDir(const std::string &exclusiveDir) {
  exclusiveDir_ = exclusiveDir;
  setParameter(std::string("ExclusiveDir"), exclusiveDir);
}

std::string ModifyWebLockStartRequest::getInclusiveFileType() const {
  return inclusiveFileType_;
}

void ModifyWebLockStartRequest::setInclusiveFileType(const std::string &inclusiveFileType) {
  inclusiveFileType_ = inclusiveFileType;
  setParameter(std::string("InclusiveFileType"), inclusiveFileType);
}

std::string ModifyWebLockStartRequest::getDefenceMode() const {
  return defenceMode_;
}

void ModifyWebLockStartRequest::setDefenceMode(const std::string &defenceMode) {
  defenceMode_ = defenceMode;
  setParameter(std::string("DefenceMode"), defenceMode);
}

