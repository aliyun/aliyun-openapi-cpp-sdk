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

#include <alibabacloud/ecd/model/CompleteCdsFileRequest.h>

using AlibabaCloud::Ecd::Model::CompleteCdsFileRequest;

CompleteCdsFileRequest::CompleteCdsFileRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "CompleteCdsFile") {
  setMethod(HttpRequest::Method::Post);
}

CompleteCdsFileRequest::~CompleteCdsFileRequest() {}

std::string CompleteCdsFileRequest::getUploadId() const {
  return uploadId_;
}

void CompleteCdsFileRequest::setUploadId(const std::string &uploadId) {
  uploadId_ = uploadId;
  setParameter(std::string("UploadId"), uploadId);
}

std::string CompleteCdsFileRequest::getCdsId() const {
  return cdsId_;
}

void CompleteCdsFileRequest::setCdsId(const std::string &cdsId) {
  cdsId_ = cdsId;
  setParameter(std::string("CdsId"), cdsId);
}

std::string CompleteCdsFileRequest::getRegionId() const {
  return regionId_;
}

void CompleteCdsFileRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CompleteCdsFileRequest::getEndUserId() const {
  return endUserId_;
}

void CompleteCdsFileRequest::setEndUserId(const std::string &endUserId) {
  endUserId_ = endUserId;
  setParameter(std::string("EndUserId"), endUserId);
}

std::string CompleteCdsFileRequest::getFileId() const {
  return fileId_;
}

void CompleteCdsFileRequest::setFileId(const std::string &fileId) {
  fileId_ = fileId;
  setParameter(std::string("FileId"), fileId);
}

