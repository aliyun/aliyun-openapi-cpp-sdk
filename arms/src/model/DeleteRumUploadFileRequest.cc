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

#include <alibabacloud/arms/model/DeleteRumUploadFileRequest.h>

using AlibabaCloud::ARMS::Model::DeleteRumUploadFileRequest;

DeleteRumUploadFileRequest::DeleteRumUploadFileRequest()
    : RpcServiceRequest("arms", "2019-08-08", "DeleteRumUploadFile") {
  setMethod(HttpRequest::Method::Post);
}

DeleteRumUploadFileRequest::~DeleteRumUploadFileRequest() {}

std::string DeleteRumUploadFileRequest::getVersionId() const {
  return versionId_;
}

void DeleteRumUploadFileRequest::setVersionId(const std::string &versionId) {
  versionId_ = versionId;
  setParameter(std::string("VersionId"), versionId);
}

std::string DeleteRumUploadFileRequest::getFileName() const {
  return fileName_;
}

void DeleteRumUploadFileRequest::setFileName(const std::string &fileName) {
  fileName_ = fileName;
  setParameter(std::string("FileName"), fileName);
}

std::string DeleteRumUploadFileRequest::getRegionId() const {
  return regionId_;
}

void DeleteRumUploadFileRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteRumUploadFileRequest::getPid() const {
  return pid_;
}

void DeleteRumUploadFileRequest::setPid(const std::string &pid) {
  pid_ = pid;
  setParameter(std::string("Pid"), pid);
}

std::string DeleteRumUploadFileRequest::getUuid() const {
  return uuid_;
}

void DeleteRumUploadFileRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

