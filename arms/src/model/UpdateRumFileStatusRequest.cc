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

#include <alibabacloud/arms/model/UpdateRumFileStatusRequest.h>

using AlibabaCloud::ARMS::Model::UpdateRumFileStatusRequest;

UpdateRumFileStatusRequest::UpdateRumFileStatusRequest()
    : RpcServiceRequest("arms", "2019-08-08", "UpdateRumFileStatus") {
  setMethod(HttpRequest::Method::Post);
}

UpdateRumFileStatusRequest::~UpdateRumFileStatusRequest() {}

std::string UpdateRumFileStatusRequest::getPid() const {
  return pid_;
}

void UpdateRumFileStatusRequest::setPid(const std::string &pid) {
  pid_ = pid;
  setParameter(std::string("Pid"), pid);
}

std::string UpdateRumFileStatusRequest::getUuid() const {
  return uuid_;
}

void UpdateRumFileStatusRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string UpdateRumFileStatusRequest::getVersionId() const {
  return versionId_;
}

void UpdateRumFileStatusRequest::setVersionId(const std::string &versionId) {
  versionId_ = versionId;
  setParameter(std::string("VersionId"), versionId);
}

std::string UpdateRumFileStatusRequest::getFileName() const {
  return fileName_;
}

void UpdateRumFileStatusRequest::setFileName(const std::string &fileName) {
  fileName_ = fileName;
  setParameter(std::string("FileName"), fileName);
}

std::string UpdateRumFileStatusRequest::getSize() const {
  return size_;
}

void UpdateRumFileStatusRequest::setSize(const std::string &size) {
  size_ = size;
  setParameter(std::string("Size"), size);
}

std::string UpdateRumFileStatusRequest::getRegionId() const {
  return regionId_;
}

void UpdateRumFileStatusRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UpdateRumFileStatusRequest::getStatus() const {
  return status_;
}

void UpdateRumFileStatusRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

