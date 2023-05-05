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

#include <alibabacloud/ecd/model/CreateCdsFileRequest.h>

using AlibabaCloud::Ecd::Model::CreateCdsFileRequest;

CreateCdsFileRequest::CreateCdsFileRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "CreateCdsFile") {
  setMethod(HttpRequest::Method::Post);
}

CreateCdsFileRequest::~CreateCdsFileRequest() {}

std::string CreateCdsFileRequest::getFileType() const {
  return fileType_;
}

void CreateCdsFileRequest::setFileType(const std::string &fileType) {
  fileType_ = fileType;
  setParameter(std::string("FileType"), fileType);
}

std::string CreateCdsFileRequest::getCdsId() const {
  return cdsId_;
}

void CreateCdsFileRequest::setCdsId(const std::string &cdsId) {
  cdsId_ = cdsId;
  setParameter(std::string("CdsId"), cdsId);
}

std::string CreateCdsFileRequest::getConflictPolicy() const {
  return conflictPolicy_;
}

void CreateCdsFileRequest::setConflictPolicy(const std::string &conflictPolicy) {
  conflictPolicy_ = conflictPolicy;
  setParameter(std::string("ConflictPolicy"), conflictPolicy);
}

std::string CreateCdsFileRequest::getParentFileId() const {
  return parentFileId_;
}

void CreateCdsFileRequest::setParentFileId(const std::string &parentFileId) {
  parentFileId_ = parentFileId;
  setParameter(std::string("ParentFileId"), parentFileId);
}

std::string CreateCdsFileRequest::getFileName() const {
  return fileName_;
}

void CreateCdsFileRequest::setFileName(const std::string &fileName) {
  fileName_ = fileName;
  setParameter(std::string("FileName"), fileName);
}

std::string CreateCdsFileRequest::getRegionId() const {
  return regionId_;
}

void CreateCdsFileRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long CreateCdsFileRequest::getFileLength() const {
  return fileLength_;
}

void CreateCdsFileRequest::setFileLength(long fileLength) {
  fileLength_ = fileLength;
  setParameter(std::string("FileLength"), std::to_string(fileLength));
}

std::string CreateCdsFileRequest::getEndUserId() const {
  return endUserId_;
}

void CreateCdsFileRequest::setEndUserId(const std::string &endUserId) {
  endUserId_ = endUserId;
  setParameter(std::string("EndUserId"), endUserId);
}

std::string CreateCdsFileRequest::getFileHash() const {
  return fileHash_;
}

void CreateCdsFileRequest::setFileHash(const std::string &fileHash) {
  fileHash_ = fileHash;
  setParameter(std::string("FileHash"), fileHash);
}

