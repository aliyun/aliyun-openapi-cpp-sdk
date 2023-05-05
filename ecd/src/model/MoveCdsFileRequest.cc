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

#include <alibabacloud/ecd/model/MoveCdsFileRequest.h>

using AlibabaCloud::Ecd::Model::MoveCdsFileRequest;

MoveCdsFileRequest::MoveCdsFileRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "MoveCdsFile") {
  setMethod(HttpRequest::Method::Post);
}

MoveCdsFileRequest::~MoveCdsFileRequest() {}

std::string MoveCdsFileRequest::getCdsId() const {
  return cdsId_;
}

void MoveCdsFileRequest::setCdsId(const std::string &cdsId) {
  cdsId_ = cdsId;
  setParameter(std::string("CdsId"), cdsId);
}

std::string MoveCdsFileRequest::getParentFolderId() const {
  return parentFolderId_;
}

void MoveCdsFileRequest::setParentFolderId(const std::string &parentFolderId) {
  parentFolderId_ = parentFolderId;
  setParameter(std::string("ParentFolderId"), parentFolderId);
}

std::string MoveCdsFileRequest::getConflictPolicy() const {
  return conflictPolicy_;
}

void MoveCdsFileRequest::setConflictPolicy(const std::string &conflictPolicy) {
  conflictPolicy_ = conflictPolicy;
  setParameter(std::string("ConflictPolicy"), conflictPolicy);
}

std::string MoveCdsFileRequest::getRegionId() const {
  return regionId_;
}

void MoveCdsFileRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string MoveCdsFileRequest::getEndUserId() const {
  return endUserId_;
}

void MoveCdsFileRequest::setEndUserId(const std::string &endUserId) {
  endUserId_ = endUserId;
  setParameter(std::string("EndUserId"), endUserId);
}

std::string MoveCdsFileRequest::getFileId() const {
  return fileId_;
}

void MoveCdsFileRequest::setFileId(const std::string &fileId) {
  fileId_ = fileId;
  setParameter(std::string("FileId"), fileId);
}

