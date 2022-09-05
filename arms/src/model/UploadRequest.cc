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

#include <alibabacloud/arms/model/UploadRequest.h>

using AlibabaCloud::ARMS::Model::UploadRequest;

UploadRequest::UploadRequest()
    : RpcServiceRequest("arms", "2019-08-08", "Upload") {
  setMethod(HttpRequest::Method::Post);
}

UploadRequest::~UploadRequest() {}

std::string UploadRequest::getFileName() const {
  return fileName_;
}

void UploadRequest::setFileName(const std::string &fileName) {
  fileName_ = fileName;
  setParameter(std::string("FileName"), fileName);
}

std::string UploadRequest::getFile() const {
  return file_;
}

void UploadRequest::setFile(const std::string &file) {
  file_ = file;
  setBodyParameter(std::string("File"), file);
}

std::string UploadRequest::getRegionId() const {
  return regionId_;
}

void UploadRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string UploadRequest::getEdition() const {
  return edition_;
}

void UploadRequest::setEdition(const std::string &edition) {
  edition_ = edition;
  setParameter(std::string("Edition"), edition);
}

std::string UploadRequest::getPid() const {
  return pid_;
}

void UploadRequest::setPid(const std::string &pid) {
  pid_ = pid;
  setParameter(std::string("Pid"), pid);
}

std::string UploadRequest::getVersion() const {
  return version_;
}

void UploadRequest::setVersion(const std::string &version) {
  version_ = version;
  setParameter(std::string("Version"), version);
}

