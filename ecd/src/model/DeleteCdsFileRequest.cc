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

#include <alibabacloud/ecd/model/DeleteCdsFileRequest.h>

using AlibabaCloud::Ecd::Model::DeleteCdsFileRequest;

DeleteCdsFileRequest::DeleteCdsFileRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "DeleteCdsFile") {
  setMethod(HttpRequest::Method::Post);
}

DeleteCdsFileRequest::~DeleteCdsFileRequest() {}

std::string DeleteCdsFileRequest::getCdsId() const {
  return cdsId_;
}

void DeleteCdsFileRequest::setCdsId(const std::string &cdsId) {
  cdsId_ = cdsId;
  setParameter(std::string("CdsId"), cdsId);
}

std::string DeleteCdsFileRequest::getRegionId() const {
  return regionId_;
}

void DeleteCdsFileRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteCdsFileRequest::getEndUserId() const {
  return endUserId_;
}

void DeleteCdsFileRequest::setEndUserId(const std::string &endUserId) {
  endUserId_ = endUserId;
  setParameter(std::string("EndUserId"), endUserId);
}

std::string DeleteCdsFileRequest::getFileId() const {
  return fileId_;
}

void DeleteCdsFileRequest::setFileId(const std::string &fileId) {
  fileId_ = fileId;
  setParameter(std::string("FileId"), fileId);
}

