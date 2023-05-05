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

#include <alibabacloud/ecd/model/ModifyCdsFileRequest.h>

using AlibabaCloud::Ecd::Model::ModifyCdsFileRequest;

ModifyCdsFileRequest::ModifyCdsFileRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ModifyCdsFile") {
  setMethod(HttpRequest::Method::Post);
}

ModifyCdsFileRequest::~ModifyCdsFileRequest() {}

std::string ModifyCdsFileRequest::getCdsId() const {
  return cdsId_;
}

void ModifyCdsFileRequest::setCdsId(const std::string &cdsId) {
  cdsId_ = cdsId;
  setParameter(std::string("CdsId"), cdsId);
}

std::string ModifyCdsFileRequest::getConflictPolicy() const {
  return conflictPolicy_;
}

void ModifyCdsFileRequest::setConflictPolicy(const std::string &conflictPolicy) {
  conflictPolicy_ = conflictPolicy;
  setParameter(std::string("ConflictPolicy"), conflictPolicy);
}

std::string ModifyCdsFileRequest::getFileName() const {
  return fileName_;
}

void ModifyCdsFileRequest::setFileName(const std::string &fileName) {
  fileName_ = fileName;
  setParameter(std::string("FileName"), fileName);
}

std::string ModifyCdsFileRequest::getRegionId() const {
  return regionId_;
}

void ModifyCdsFileRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyCdsFileRequest::getEndUserId() const {
  return endUserId_;
}

void ModifyCdsFileRequest::setEndUserId(const std::string &endUserId) {
  endUserId_ = endUserId;
  setParameter(std::string("EndUserId"), endUserId);
}

std::string ModifyCdsFileRequest::getFileId() const {
  return fileId_;
}

void ModifyCdsFileRequest::setFileId(const std::string &fileId) {
  fileId_ = fileId;
  setParameter(std::string("FileId"), fileId);
}

